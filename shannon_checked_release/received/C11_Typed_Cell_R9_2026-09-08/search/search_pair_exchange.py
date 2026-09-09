import json,sys,time,itertools,math,random
from pathlib import Path
from collections import defaultdict
sys.dont_write_bytecode=True
from scout_retype import IX,ConflictIndex

def improve(file,rounds=12,seconds=90,blocker_limit=5,pool_limit=3000):
 r=json.loads(Path(file).read_text());kids=[r['hist'][k]for k in r['nodes'][-1]['children']]
 weights=[{IX[(a,int(m))]:int(n)for a,row in enumerate(h)for m,n in row.items()}for h in kids]
 U=list(itertools.product(*(tuple(w)for w in weights)));ix=ConflictIndex([U]);U=ix.words
 W=[math.prod(weights[i][a]for i,a in enumerate(w))for w in U];cf=[ix.conflicts(w)for w in U]
 chosen=sum(1<<ix.ids[tuple(w)]for w in r['tables'][r['root']]['rows']);initial=int(r['N']);N=initial
 def weight(bits):
  total=0
  while bits:
   bit=bits&-bits;total+=W[bit.bit_length()-1];bits-=bit
  return total
 start=time.perf_counter();history=[];checked=0
 for k in range(rounds):
  pool=[]
  for i in range(len(U)):
   if chosen>>i&1:continue
   blocked=chosen&cf[i]
   if blocked.bit_count()<=blocker_limit:
    loss=weight(blocked);pool.append((i,blocked,loss,W[i]-loss))
  pool=sorted(pool,key=lambda z:float(W[z[0]]/max(z[2],1)),reverse=True)[:pool_limit]
  inv=defaultdict(list)
  for j,(_,b,_,_)in enumerate(pool):
   while b:
    bit=b&-b;inv[bit].append(j);b-=bit
  best_gain=0;best=None
  for j,(i,b,loss,deficit)in enumerate(pool):
   matches=set();tmp=b
   while tmp:
    bit=tmp&-tmp;matches.update(t for t in inv[bit]if t<j);tmp-=bit
   for t in matches:
    v,c,lossv,defv=pool[t];checked+=1
    if cf[i]>>v&1:continue
    gain=deficit+defv+weight(b&c)
    if gain>best_gain:best_gain=gain;best=(i,v,b|c)
   if time.perf_counter()-start>seconds:break
  if best is None:print('PAIR_NONE',k,len(pool),checked,time.perf_counter()-start,flush=True);break
  i,j,b=best;chosen=(chosen^b)|(1<<i)|(1<<j);N+=best_gain
  # Restore greedy single-exchange local optimality.
  for _ in range(3):
   changed=False
   for i in sorted(range(len(U)),key=lambda j:W[j],reverse=True):
    if chosen>>i&1:continue
    b=chosen&cf[i];loss=weight(b)
    if W[i]>loss:chosen=(chosen^b)|(1<<i);N+=W[i]-loss;changed=True
   if not changed:break
  history.append({'round':k,'gain':str(best_gain),'N':str(N)})
  print('PAIR',k,'root',math.exp(math.log(N)/r['dimension']),'pool',len(pool),'checks',checked,'sec',time.perf_counter()-start,flush=True)
  if time.perf_counter()-start>seconds:break
 sel=[w for i,w in enumerate(U)if chosen>>i&1];ck=ConflictIndex([sel])
 for w in sel:
  if ck.conflicts(w)!=(1<<ck.ids[w]):raise ValueError('invalid result')
 if weight(chosen)!=N:raise ValueError('wrong N')
 r['N']=str(N);r['tables'][r['root']]['rows']=list(map(list,sel));r['pair_exchange']={'initial_N':str(initial),'round_limit':rounds,'seconds_limit':seconds,'blocker_limit':blocker_limit,'pool_limit':pool_limit,'pairs_considered':checked,'elapsed_seconds':time.perf_counter()-start,'history':history}
 out=Path(str(file).replace('.json','_pairs.json'));out.write_text(json.dumps(r,separators=(',',':')))
 print('FINAL',r['dimension'],math.exp(math.log(N)/r['dimension']),out,flush=True)
if __name__=='__main__':improve(sys.argv[1])
