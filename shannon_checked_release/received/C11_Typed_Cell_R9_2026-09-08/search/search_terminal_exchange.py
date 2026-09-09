from __future__ import annotations
import sys,time,json,math,itertools,random
from pathlib import Path
sys.dont_write_bytecode=True
from scout_retype import TYPES,IX,SEP,L,ConflictIndex

def improve(file,seed=1,passes=8,seconds=90):
 r=json.loads(Path(file).read_text());nd=r['nodes'][-1]
 hs=[r['hist'][k]for k in nd['children']]
 weights=[{IX[(a,int(m))]:int(n) for a,row in enumerate(h) for m,n in row.items()}for h in hs]
 universe=list(itertools.product(*(tuple(w)for w in weights))); t=time.perf_counter()
 ix=ConflictIndex([universe]);U=ix.words; W=[math.prod(weights[i][j]for i,j in enumerate(w))for w in U]
 chosen=sum(1<<ix.ids[tuple(w)]for w in r['tables'][r['root']]['rows']);N=int(r['N']);initialN=N;bestN=N;best=chosen
 cf=[ix.conflicts(w) for w in U]
 print('universe',len(U),'index time',time.perf_counter()-t,flush=True)
 rng=random.Random(seed);history=[];start=time.perf_counter();visits=0
 for iteration in range(passes):
  order=sorted(range(len(U)),key=lambda i:W[i],reverse=True) if iteration==0 else list(range(len(U)))
  if iteration:rng.shuffle(order)
  moves=0
  for i in order:
   if time.perf_counter()-start>seconds:break
   visits+=1
   if chosen>>i&1:continue
   blocked=chosen&cf[i];q=blocked;loss=0
   while q:
    bit=q&-q;k=bit.bit_length()-1;loss+=W[k]
    if loss>=W[i]:break
    q-=bit
   if W[i]>loss:
    chosen=(chosen^blocked)|(1<<i);N+=W[i]-loss;moves+=1
  if N>bestN:bestN=N;best=chosen
  print('PASS',iteration,'moves',moves,'root',math.exp(math.log(N)/r['dimension']),'seconds',time.perf_counter()-start,flush=True)
  history.append({'iteration':iteration,'moves':moves,'N':str(N)})
  if not moves or time.perf_counter()-start>seconds:break
 selected=[w for i,w in enumerate(U)if best>>i&1]
 # pairwise verification efficient independent postings vs accepted set
 check=ConflictIndex([selected]);
 for w in selected:
  if check.conflicts(w)!=(1<<check.ids[w]):raise ValueError('selected code conflict')
 checkN=sum(W[i]for i in range(len(U))if best>>i&1)
 if checkN!=bestN:raise ValueError('count mismatch')
 r['tables'][r['root']]['rows']=list(map(list,selected));r['N']=str(bestN)
 r['terminal_exchange']={'seed':seed,'pass_limit':passes,'time_limit':seconds,'visits':visits,'seconds':time.perf_counter()-start,'history':history,'initial_N':str(initialN)}
 out=Path(str(file).replace('.json',f'_exchange{seed}.json'));out.write_text(json.dumps(r,separators=(',',':')))
 print('EXCHANGE_FINAL',r['dimension'],math.exp(math.log(bestN)/r['dimension']),out,flush=True)
if __name__=='__main__':improve(sys.argv[1],int(sys.argv[2])if len(sys.argv)>2 else 1)
