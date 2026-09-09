import os
os.environ['OPENBLAS_NUM_THREADS']='1'
from common import *
import numpy as np,time,collections
START=time.monotonic();coords=np.array([[u%11,u//11%11,u//121]for u in range(1331)],dtype=np.int16)
diff=(coords[:,None,:]-coords[None,:,:])%11;conf=np.all((diff==0)|(diff==1)|(diff==10),axis=2);del diff
stats=[];newseeds={}
for seedname in ['I','X']:
 original=tuple(F[seedname]);todo=collections.deque([original]);seen={original};maxfree=0;found=[]
 while todo and len(seen)<30000 and time.monotonic()-START<55:
  U=todo.popleft();cnt=conf[:,U].sum(axis=1);outs=np.flatnonzero(cnt==1);S=set(U);alts=[int(q)for q in outs if q not in S]
  if len(alts)>maxfree:maxfree=len(alts);found=list(U);print('MAX',seedname,maxfree,'seen',len(seen),flush=True)
  for q in alts:
   p=U[np.flatnonzero(conf[q,U])[0]];V=tuple(sorted((S-{p})|{q}))
   if V not in seen:seen.add(V);todo.append(V)
 stats.append(dict(seed=seedname,count=len(seen),pending=len(todo),maxfree=maxfree,best=found))
 newseeds[seedname]=[list(U)for U in sorted(seen)]
 print('DONE_SEED',seedname,len(seen),'pending',len(todo),'seconds',time.monotonic()-START,flush=True)
(ROOT/'neutral_seeds.json').write_text(json.dumps(newseeds)+'\n')
(ROOT/'neutral_seed_stats.json').write_text(json.dumps(dict(stats=stats,elapsed=time.monotonic()-START),indent=2)+'\n')
