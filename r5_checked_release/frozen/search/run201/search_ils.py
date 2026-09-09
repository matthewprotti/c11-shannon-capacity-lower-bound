import os
os.environ['OPENBLAS_NUM_THREADS']='1';os.environ['OMP_NUM_THREADS']='1'
from common import *
import numpy as np,time,sys
from numba import njit
inp=Path(sys.argv[1]);LIMIT=float(sys.argv[2])if len(sys.argv)>2 else 100
c=json.loads(inp.read_text());nd={n['name']:n for n in c['nodes']};allnodes=[]
def unroll(name):
 n=nd[name]; t={'name':f'n{len(allnodes)}','origin':name,'kind':n['kind']};allnodes.append(t)
 t['children']=[unroll(k)for k in n.get('children',[])];
 if n['kind']!='base':t['table']=copy.deepcopy(c['tables'][n['kind']])
 return t
root=unroll(c['root'])
def ev(t):
 t['w']=BASE if t['kind']=='base' else evaluate(t['table'],[ev(k)for k in t['children']]);return t['w']
def ad(t,g):
 t['grad']=g
 if t['kind']=='base':return
 kids=t['children'];gs=[[0]*7 for _ in kids];tab=t['table']
 for up,words in ([(1,tab)]if isinstance(tab,list)else[(g[IDX[a]],tab[a])for a in ABC]):
  for word in words:
   for j,a in enumerate(word):gs[j][IDX[a]]+=up*math.prod(kids[i]['w'][IDX[b]]for i,b in enumerate(word)if i!=j)
 for k,gg in zip(kids,gs):ad(k,gg)
letters='BNADHV';lids=[IDX[a]for a in letters];sep=np.array([[(a,b)in SEP for b in ABC]for a in ABC]);struct={}
for ar in [2,3]:
 words=[''.join(w)for w in itertools.product(letters,repeat=ar)];wi=np.array([[IDX[a]for a in w]for w in words]);out=np.repeat(lids,len(words));ww=np.tile(wi,(6,1));wordsall=words*6
 conf=((out[:,None]==out[None,:])|sep[out[:,None],out[None,:]])&~np.any(sep[ww[:,None,:],ww[None,:,:]],axis=2)
 struct[ar]=(out,wordsall,conf,{(ABC[o],w):j for j,(o,w)in enumerate(zip(out,wordsall))})
struct[0]=(np.zeros(216,dtype=int),words,~np.any(sep[wi[:,None,:],wi[None,:,:]],axis=2),{w:j for j,w in enumerate(words)})

@njit
def ils(conf,w,initial,iters,seed):
 np.random.seed(seed);n=len(w);best=initial.copy();curr=initial.copy();bs=np.sum(w*best);cs=bs
 bestcount=0
 for iteration in range(iters):
  S=(best if np.random.random()<0.55 else curr).copy()
  # Kick out a small random set of selected vertices.
  chosen=np.where(S)[0];k=np.random.randint(2,min(13,len(chosen)))
  # Bias towards cheaper vertices; occasionally a large move.
  for _ in range(k):S[chosen[np.random.randint(len(chosen))]]=False
  taboo=np.zeros(n,dtype=np.bool_)
  if np.random.random()<.5:
   for j in chosen:
    if not S[j]:taboo[j]=True
  costs=np.zeros(n)
  for j in range(n):
   if S[j]:
    for u in range(n):
     if conf[u,j]:costs[u]+=w[j]
  # Greedy rebuild with multiplicative noise.
  noise=.05 if iteration%4 else .45
  priorities=w*np.exp(noise*np.random.randn(n))
  while True:
   v=-1;ma=0.
   for j in range(n):
    if not S[j] and not taboo[j] and costs[j]<1e-13 and priorities[j]>ma:ma=priorities[j];v=j
   if v<0:break
   S[v]=True
   for u in range(n):
    if conf[u,v]:costs[u]+=w[v]
  # Improving 1-add/all-blockers-remove neighborhood; no floating result is a certificate.
  for turn in range(30):
   v=-1;ma=1e-14
   for j in range(n):
    gain=w[j]-costs[j]
    if not S[j] and gain>ma:ma=gain;v=j
   if v<0:break
   for j in range(n):
    if S[j] and conf[v,j]:
     S[j]=False
     for u in range(n):
      if conf[u,j]:costs[u]-=w[j]
   S[v]=True
   for u in range(n):
    if conf[u,v]:costs[u]+=w[v]
  score=np.sum(w*S)
  if score>bs+1e-13:best=S.copy();bs=score;bestcount+=1
  if score>cs-0.001 or np.random.random()<.005:curr=S.copy();cs=score
 return best,bs,bestcount

def serialize():
 ns=[];ts={};canon={}
 def visit(t):
  if t['kind']=='base':key='base';kind='base';kids=[]
  else:
   kids=[visit(k)for k in t['children']];kind=hashlib.sha256(json.dumps(t['table'],sort_keys=True).encode()).hexdigest()[:16];ts[kind]=t['table'];key=(kind,tuple(kids))
  if key in canon:return canon[key]
  name='v' if key=='base' else f'n{len(ns)}';ns.append(dict(name=name,kind=kind,**({'children':kids}if kids else {})));canon[key]=name;return name
 visit(root);return ns,ts
START=time.monotonic();ev(root);d=c['dimension'];records=[];trial=0
# Upper levels first, then every distinct occurrence of a ternary construction.
for sweep in range(3):
 targets=[t for t in allnodes if t['kind']!='base' and (len(t['children'])==3 or sweep==2)]
 for t in targets:
  if time.monotonic()-START>LIMIT:break
  ev(root);ad(root,None);tab=t['table'];typ=0 if isinstance(tab,list)else len(t['children']);out,words,conf,lookup=struct[typ]
  exact=[(1 if typ==0 else t['grad'][o])*math.prod(ch['w'][IDX[a]]for ch,a in zip(t['children'],w))for o,w in zip(out,words)]
  mx=max(exact);w=np.array([x/mx for x in exact]);initial=np.zeros(len(words),dtype=bool)
  for a in (letters if typ else ['B']):
   for word in (tab[a]if typ else tab):initial[lookup[(a,word)]if typ else lookup[word]]=True
  S,score,cnt=ils(conf,w,initial,350 if typ else 1000,805+trial);trial+=1
  delta=sum(v for v,s in zip(exact,S)if s)-sum(v for v,s in zip(exact,initial)if s)
  if delta>0:
   newtab={a:[]for a in ABC} if typ else []
   for j in np.where(S)[0]:
    if typ:newtab[ABC[out[j]]].append(words[j])
    else:newtab.append(words[j])
   assert admissible(newtab)
   old=root['w'];t['table']=newtab;new=ev(root);assert new-old==delta
   rec={'origin':t['origin'],'occurrence':t['name'],'sweep':sweep,'trial':trial,'delta':str(delta),'N':str(new),'root':root_value(new,d),'elapsed':time.monotonic()-START};records.append(rec)
   ns,ts=serialize();save_certificate(ROOT/f'ils_d{d}.json',ns,ts,meta={'parent':inp.name,'records':records})
   print('ILS_SUCCESS',rec,flush=True)
  else:print('ILS_TEST',t['origin'],t['name'],'sweep',sweep,'seconds',time.monotonic()-START,flush=True)
 if time.monotonic()-START>LIMIT:break
(ROOT/f'ils_d{d}_summary.json').write_text(json.dumps(dict(elapsed=time.monotonic()-START,trials=trial,records=records),indent=2)+'\n')
