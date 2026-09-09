import os
os.environ['OPENBLAS_NUM_THREADS']='1'
from extended_tables import *
import numpy as np,time
from numba import njit
from scipy.optimize import differential_evolution
KEYS=['T2b','T3c','T3mix','T3d','T3a','T3b','T3e','T3f','T3g','T3h','K4a','K4b']
T=np.full((len(KEYS),7,60,4),-1,dtype=np.int64);R=np.zeros((len(KEYS),7),dtype=np.int64)
for j,key in enumerate(KEYS):
 tab=TABLES[key]
 for a,ws in ({'B':tab}if isinstance(tab,list)else tab).items():
  R[j,IDX[a]]=len(ws)
  for l,w in enumerate(ws):T[j,IDX[a],l,:len(w)]=[IDX[b]for b in w]
@njit
def ev(t,x):
 ans=np.zeros(7)
 for a in range(7):
  for j in range(R[t,a]):
   z=1.
   for k in range(4):
    if T[t,a,j,k]>=0:z*=x[k,T[t,a,j,k]]
   ans[a]+=z
 return ans
V=np.array(BASE)/148.;B=np.zeros((45,7));H=B.copy();B[1]=V
for j in range(2,45):B[j]=ev(0,np.vstack((B[j-1],V,V,V)))
H[3]=ev(1,np.vstack((V,V,V,V)))
for j in range(4,45):H[j]=ev(0,np.vstack((H[j-1],V,V,V)))
flip=np.array([0,1,3,2,4,6,5])
@njit
def objective(q,shape,cap):
 weights=np.zeros((4,7));E=0;pos=0
 for i in range(4):
  if i<shape:
   ww=np.zeros((4,7))
   for j in range(3):
    k=int(round(q[pos]));ty=int(round(q[pos+1]));pos+=2
    E+=k+2*ty;ww[j]=B[k]if ty==0 else H[k+2]
   tab=1+int(round(q[pos]));refl=int(round(q[pos+1]));pos+=2
   w=ev(tab,ww);weights[i]=w[flip]if refl else w
  else:
   k=int(round(q[pos]));ty=int(round(q[pos+1]));refl=int(round(q[pos+2]));pos+=3
   E+=k+2*ty;w=B[k]if ty==0 else H[k+2];weights[i]=w[flip]if refl else w
 if E*3>cap:return -1.+(E*3-cap)*.001
 val=ev(10+int(round(q[pos])),weights)[0]
 return -(math.log(148.)+math.log(val)/E)/3.

def construct(q,shape):
 q=[int(round(x))for x in q];ns=[{'name':'v','kind':'base'}];tt=copy.deepcopy(TABLES)
 ns.append(dict(name='h3',kind='T3c',children=['v']*3))
 for j in range(4,43):ns.append(dict(name=f'h{j}',kind='T2b',children=[f'h{j-1}','v']))
 for j in range(2,41):ns.append(dict(name=f'b{j}',kind='T2b',children=['v'if j==2 else f'b{j-1}','v']))
 def node(k,ty):return 'v'if not ty and k==1 else f'h{k+2}'if ty else f'b{k}'
 pos=0;kids=[]
 for i in range(4):
  if i<shape:
   ch=[]
   for j in range(3):ch.append(node(q[pos],q[pos+1]));pos+=2
   tab=KEYS[1+q[pos]];refl=q[pos+1];pos+=2
   if refl:
    tabkey=tab+'_outflip';tt[tabkey]={a:tt[tab][a.translate(REFLECT)]for a in ABC};tab=tabkey
   name=f'g{i}';ns.append(dict(name=name,kind=tab,children=ch));kids.append(name)
  else:
   k,ty,refl=q[pos:pos+3];pos+=3;name=node(k,ty)
   if refl:
    tab='reflect';tt[tab]={a:[a.translate(REFLECT)]for a in ABC}
    nname=f'f{i}';ns.append(dict(name=nname,kind=tab,children=[name]));name=nname
   kids.append(name)
 ns.append(dict(name='root',kind=KEYS[10+q[pos]],children=kids))
 # Remove unused chain nodes.
 used=set();nd={n['name']:n for n in ns}
 def visit(n):
  if n in used:return
  used.add(n)
  for k in nd[n].get('children',[]):visit(k)
 visit('root');ns=[n for n in ns if n['name']in used];return ns,tt
START=time.monotonic();best=-999.;bestq=None;records=[]
for shape in [2,3,4,1]:
 for seed in [11,35,72]:
  bounds=([(1,18),(0,1)]*3+[(0,8),(0,1)])*shape+([(1,30),(0,1),(0,1)])*(4-shape)+[(0,1)]
  res=differential_evolution(lambda q:objective(q,shape,600),bounds,integrality=True,popsize=12,maxiter=260,seed=seed,polish=False,tol=1e-10)
  ns,tt=construct(res.x,shape);vals,ds=profile_eval(ns,tt);N=vals['root'];d=ds['root'];rv=root_value(N,d)
  print('FOUR',shape,seed,'root',rv,'d',d,'elapsed',time.monotonic()-START,flush=True)
  records.append({'shape':shape,'seed':seed,'root':rv,'dimension':d,'q':res.x.tolist()})
  if rv>best:best=rv;bestq=res.x;save_certificate(ROOT/'four_terminal_best.json',ns,tt,meta={'shape':shape,'seed':seed,'parameters':res.x.tolist()})
  if time.monotonic()-START>65:break
 if time.monotonic()-START>65:break
(ROOT/'four_terminal_summary.json').write_text(json.dumps({'elapsed':time.monotonic()-START,'records':records},indent=2)+'\n')
