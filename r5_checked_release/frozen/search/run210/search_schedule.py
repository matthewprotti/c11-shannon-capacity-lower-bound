import os
os.environ['OPENBLAS_NUM_THREADS']='1'
from common import *
import numpy as np
from numba import njit
from scipy.optimize import differential_evolution
import time
START=time.monotonic()
TKEY=['T2b','T3c','T3mix','T3d','K3a']
T=np.full((5,7,30,3),-1,dtype=np.int64)
R=np.zeros((5,7),dtype=np.int64)
for j,k in enumerate(TKEY):
 tab=TABLES[k]
 if isinstance(tab,list):tab={'B':tab}
 for a,words in tab.items():
  R[j,IDX[a]]=len(words)
  for l,w in enumerate(words):T[j,IDX[a],l,:len(w)]=[IDX[b] for b in w]
@njit
def ev(t,x,y,z):
 r=np.zeros(7)
 for a in range(7):
  for j in range(R[t,a]):
   term=x[T[t,a,j,0]]*y[T[t,a,j,1]]
   if T[t,a,j,2]>=0:term*=z[T[t,a,j,2]]
   r[a]+=term
 return r
V=np.array(BASE)/148.
B=np.zeros((41,7));H=B.copy();B[1]=V
for n in range(2,41):B[n]=ev(0,B[n-1],V,V)
H[3]=ev(1,V,V,V)
for n in range(4,41):H[n]=ev(0,H[n-1],V,V)
@njit
def objective(q,limit=1000):
 a,b,c,d,e,f,g,h,i=[int(round(x)) for x in q[:9]]
 E=a+3+b+c+d+e+f+3+g+h+i
 if E>limit:return -1.+0.01*(E-limit)
 tg1,tg2,tg3,tg4=[1+int(round(x)) for x in q[9:13]]
 p=ev(tg1,H[3],H[b],B[c])
 xx=ev(tg2,H[a],p,H[d])
 pp=ev(tg3,H[3],H[g],B[h])
 yy=ev(tg4,H[e],B[f],pp)
 value=ev(4,xx,yy,B[i])[0]
 return -(math.log(148.)+math.log(value)/E)/3.

BEST={};count=0
q0=np.array([7,6,2,9,6,12,6,2,13,0,1,0,0],float)

def nodes_for(q):
 q=list(map(lambda x:int(round(x)),q));a,b,c,d,e,f,g,h,i=q[:9]
 ns=[dict(name='v',kind='base')]
 ns.append(dict(name='h3',kind='T3c',children=['v']*3))
 for j in range(4,max(a,b,d,e,g)+1):ns.append(dict(name=f'h{j}',kind='T2b',children=[f'h{j-1}','v']))
 for j in range(2,max(c,f,h,i)+1):ns.append(dict(name=f'b{j}',kind='T2b',children=[f'b{j-1}' if j>2 else 'v','v']))
 bn=lambda j:'v' if j==1 else f'b{j}'
 kinds=['T3c','T3mix','T3d']
 ns += [dict(name='pL',kind=kinds[q[9]],children=['h3',f'h{b}',bn(c)]),
        dict(name='left',kind=kinds[q[10]],children=[f'h{a}','pL',f'h{d}']),
        dict(name='pR',kind=kinds[q[11]],children=['h3',f'h{g}',bn(h)]),
        dict(name='right',kind=kinds[q[12]],children=[f'h{e}',bn(f),'pR']),
        dict(name='root',kind='K3a',children=['left','right',bn(i)])]
 return ns

def keep(q,label):
 global count
 val=-objective(q);ns=nodes_for(q);vs,ds=profile_eval(ns);N=vs['root'];dim=ds['root']
 if dim not in BEST or N>BEST[dim][0]:
  BEST[dim]=(N,q.copy());count+=1
  cert=save_certificate(ROOT/f'schedule_d{dim}.json',ns,meta={'parameters':q.tolist(),'family':'asymmetric BPZ spine lengths and T3c/T3mix/T3d','search_label':label})
  print('SCHEDULE',label,'d',dim,'root',root_value(N,dim),'beats_R3',cert['beats_R3'],'q',q.tolist(),flush=True)

def run(limit,seed,maxiter):
 fun=lambda q: objective(q,limit)
 def callback(x,convergence):
  if objective(x,limit)<-math.log(float(C['decimal_lower_numerator'])/1e15)-1e-14:keep(x,f'cap{limit}_seed{seed}')
  return time.monotonic()-START>160
 bnds=[(3,15),(3,15),(1,9),(3,18),(3,15),(1,20),(3,15),(1,9),(1,22)]+[(0,2)]*4
 x0=q0.copy()
 if limit<69:
  while sum(x0[:9])+6>limit:
   k=int(np.argmax(x0[:9]));x0[k]-=1
 res=differential_evolution(fun,bnds,integrality=[True]*13,popsize=9,maxiter=maxiter,seed=seed,
    polish=False,x0=x0,tol=1e-11,callback=callback,workers=1,updating='immediate')
 keep(res.x,f'cap{limit}_seed{seed}_final')
 return res
keep(q0,'R3')
for lim in [69,68,67,66,64,70,80,60]:
 if time.monotonic()-START>160:break
 run(lim,803+lim,100)
(ROOT/'schedule_summary.json').write_text(json.dumps({'elapsed':time.monotonic()-START,'retained':len(BEST),'best':{d:{'N':str(v[0]),'q':v[1].tolist()} for d,v in BEST.items()}},indent=2)+'\n')
