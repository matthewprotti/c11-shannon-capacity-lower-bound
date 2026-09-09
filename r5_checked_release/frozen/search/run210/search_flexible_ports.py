import os
os.environ['OPENBLAS_NUM_THREADS']='1'
from common import *
import numpy as np,time
START=time.monotonic()
coords=np.array([[u%11,u//11%11,u//121]for u in range(1331)],dtype=np.int16)
diff=(coords[:,None,:]-coords[None,:,:])%11;conf=np.all((diff==0)|(diff==1)|(diff==10),axis=2)
I=F['I'];X=F['X'];P=[];Q=[]
for u in range(1331):
 if u not in I and conf[u,I].sum()==1:P.append(I[np.flatnonzero(conf[u,I])[0]]);Q.append(u)
endpoints=P+Q;print('PAIRS',list(zip(P,Q)),flush=True)
sep12=conf[np.ix_(endpoints,endpoints)]
endmask=conf[:,endpoints];profiles={};counts={'images':0,'at_least_3_clean_pairs':0,'systems_checked':0,'valid':0}
baseN=int(C['N1']);best=baseN

def root_for(w):
 vals={}
 for n in initial_nodes():
  vals[n['name']]=w if n['kind']=='base'else evaluate(TABLES[n['kind']],[vals[k]for k in n['children']])
 return vals['root']

for seedname,seed in [('I',I),('X',X)]:
 for perm in itertools.permutations(range(3)):
  for signs in itertools.product([-1,1],repeat=3):
   xyz=(coords[seed][:,perm]*signs)%11
   images=((xyz[None,:,:]+coords[:,None,:])%11)@np.array([1,11,121])
   hits=endmask[images]
   bad=np.any(hits[:,:,:6]&hits[:,:,6:],axis=1)
   eligible=np.flatnonzero(np.sum(~bad,axis=1)>=3)
   counts['images']+=len(images);counts['at_least_3_clean_pairs']+=len(eligible)
   for tr in eligible:
    good=np.flatnonzero(~bad[tr]);h=hits[tr]
    for k in range(3,len(good)+1):
     for chosen in itertools.combinations(good,k):
      for orientation in itertools.product([0,1],repeat=k-1):
       orientation=(0,)+orientation
       e0=[j+6*s for j,s in zip(chosen,orientation)];e1=[j+6*(1-s)for j,s in zip(chosen,orientation)]
       # Both endpoint transversals must be independent (equality counts as conflict).
       if np.triu(sep12[np.ix_(e0,e0)],1).any()or np.triu(sep12[np.ix_(e1,e1)],1).any():continue
       counts['systems_checked']+=1
       b0=np.any(h[:,e0],axis=1);b1=np.any(h[:,e1],axis=1)
       if np.any(b0&b1):continue
       counts['valid']+=1;a=int(b0.sum());b=int(b1.sum());w=(148-k,148-a-b,a,b,k,k,k)
       if w not in profiles:
        N=root_for(w);rec={'seed':seedname,'permutation':list(perm),'signs':list(signs),'translation':list(map(int,coords[tr])),
         'I':I,'X':list(map(int,images[tr])),'parents':[P[j]for j in chosen],
         'P0':[endpoints[j]for j in e0],'P1':[endpoints[j]for j in e1],
         'profile':w,'dimension_for_score':207,'N_for_R3_schedule':str(N)}
        profiles[w]=rec
        print('PROFILE',w,'root',root_value(N,207),flush=True)
        if N>best:best=N;print('BASE_IMPROVEMENT',w,root_value(N,207),flush=True)
   if time.monotonic()-START>100:break
  if time.monotonic()-START>100:break
 if time.monotonic()-START>100:break
out={'status':'FINITE_TESTED_CLASS_ONLY','elapsed':time.monotonic()-START,'counts':counts,'private_pairs':list(zip(P,Q)),'profiles':list(profiles.values())}
(ROOT/'flexible_ports_result.json').write_text(json.dumps(out,indent=2)+'\n');print('DONE',counts,'seconds',out['elapsed'],flush=True)
