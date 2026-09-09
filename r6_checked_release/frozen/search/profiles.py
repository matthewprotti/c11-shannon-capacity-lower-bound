import json,itertools,sys,math,time
from pathlib import Path
from collections import Counter
R=Path(__file__).resolve().parents[1]
sys.dont_write_bytecode=True
sys.path.insert(0,str(R))
import r5_reference_replay as old
L=old.LETTERS

def base_sets():
 f=json.loads((R/'FROZEN_INPUTS.json').read_text())
 I=set(f['I']);X=set(f['X']); V={p for p,q in f['pairs']};H={q for p,q in f['pairs']}
 A={x for x in X if any(old.conflict(x,v) for v in V)}
 D={x for x in X if any(old.conflict(x,h) for h in H)}
 return [I-V,X-A-D,A,D,V,H,V]

def profiles_base():
 fam=base_sets()
 return [dict(Counter(sum(1<<b for b,Q in enumerate(fam) if any(old.conflict(v,w) for w in Q)) for v in P)) for P in fam]

def propagate(profs,table):
 rows=[[tuple(L.index(c) for c in word) for word in table[a]]for a in L]
 cache={}
 def signature(masks):
  if masks not in cache:
   cache[masks]=sum(1<<b for b,words in enumerate(rows) if any(all(masks[i]&(1<<u)for i,u in enumerate(word))for word in words))
  return cache[masks]
 out=[]
 for words in rows:
  hist=Counter()
  for word in words:
   for terms in itertools.product(*(profs[i][u].items() for i,u in enumerate(word))):
    masks=tuple(t[0]for t in terms)
    count=math.prod(t[1]for t in terms)
    hist[signature(masks)]+=count
  out.append(dict(hist))
 return out

def run(c,verbose=False):
 out={};dims={}; logs=[]
 for node in c['nodes']:
  name=node['name']
  if node['kind']=='base':out[name]=profiles_base();dims[name]=3
  else:
   tab=c['tables'][node['kind']]
   if isinstance(tab,list):continue
   t=time.time();out[name]=propagate([out[x]for x in node['children']],tab)
   dims[name]=sum(dims[x]for x in node['children'])
   if verbose:print(name,dims[name],sum(len(p)for p in out[name]),round(time.time()-t,2),flush=True)
  logs.append((name,dims[name],[len(p)for p in out[name]]))
 return out,dims,logs

def coverage(prof):
 return [[sum(n for mask,n in p.items() if mask&(1<<b))for b in range(7)]for p in prof]

def additions(c,profs):
 terminal=c['nodes'][-1]
 code=c['tables'][terminal['kind']]
 children=[profs[k]for k in terminal['children']]
 weights=[[sum(x.values())for x in p]for p in children]
 covers=[coverage(p)for p in children]
 oldwords=[tuple(L.index(s)for s in word)for word in code]
 oldset=set(oldwords)
 N=int(c['N']);d=c['dimension'];best=[];positive=[]
 for a in itertools.product(range(7),repeat=len(children)):
  if a in oldset:continue
  size=math.prod(weights[i][s]for i,s in enumerate(a))
  if size==0:continue
  loss=sum(math.prod(covers[i][s][a[i]]for i,s in enumerate(word))for word in oldwords)
  gain=size-loss
  item=(gain,''.join(L[x]for x in a),size,loss)
  best.append(item)
  if gain>0:positive.append(item)
 best.sort(reverse=True)
 return best,positive

