from profiles import *
from node_augmentation import node_gains
from functools import lru_cache
import random
BASE=profiles_base()
NEIGH=[sum(1<<b for b in range(7)if (L[a],L[b])in old.SEP)for a in range(7)]

@lru_cache(None)
def transfer(table_json,masks):
 table=json.loads(table_json)
 return sum(1<<b for b,a in enumerate(L)if any(all(masks[i]&(1<<L.index(x))for i,x in enumerate(word))for word in table[a]))

def augment(children,tab,out,a,rects):
 # Each rectangle is an independent product; separation of rectangles gives
 # disjointness. Type-zero bits certify avoidance of old output families.
 assert all(old.separated(u,v)for u,v in itertools.combinations(rects,2))
 bad=NEIGH[a]|(1<<a);add=Counter();tj=json.dumps(tab,sort_keys=True)
 for word in rects:
  for terms in itertools.product(*(children[i][L.index(u)].items()for i,u in enumerate(word))):
   m=transfer(tj,tuple(x[0]for x in terms))
   if not(m&bad):add[m|(1<<a)]+=math.prod(x[1]for x in terms)
 new=[]
 for b,row in enumerate(out):
  hist=Counter()
  for m,n in row.items():hist[m if b==a or NEIGH[a]&(1<<b)else m|(1<<a)]+=n
  if b==a:hist.update(add)
  new.append(dict(hist))
 return new,dict(add)

def run_aug(c,schedule):
 out={};dims={};audit={}
 for node in c['nodes']:
  name=node['name'];kind=node['kind']
  if kind=='base':out[name]=BASE;dims[name]=3
  else:
   table=c['tables'][kind];child=[out[x]for x in node['children']]
   dims[name]=sum(dims[x]for x in node['children'])
   if isinstance(table,list):
    N=sum(math.prod(sum(child[i][L.index(u)].values())for i,u in enumerate(word))for word in table)
    return N,out,dims,audit
   p=propagate(child,table)
   if name in schedule:
    spec=schedule[name];p,added=augment(child,table,p,L.index(spec['family']),spec['rectangles'])
    audit[name]={'added_types':added,'gain':sum(added.values())}
   out[name]=p
 raise Exception('no terminal')

def greedy_code(vals,seed=0,tries=40):
 # Finite heuristic only: every adopted code gets exact pairwise verification.
 rng=random.Random(seed)
 words=[w for w,x in vals.items()if x>0]
 if not words:return []
 weights=[vals[w]for w in words]
 conflicts=[set(j for j,v in enumerate(words)if i!=j and not old.separated(w,v))for i,w in enumerate(words)]
 best=[];bestv=0
 for step in range(tries):
  maxlog=max(math.log(w)for w in weights)
  if step==0:order=sorted(range(len(words)),key=lambda i:weights[i],reverse=True)
  else:order=sorted(range(len(words)),key=lambda i:math.log(weights[i])-maxlog+rng.gauss(0,0.9+(step%4)*0.6),reverse=True)
  chosen=set()
  for i in order:
   if not(chosen&conflicts[i]):chosen.add(i)
  change=True
  while change:
   change=False
   for i in range(len(words)):
    if i in chosen:continue
    bad=chosen&conflicts[i]
    if weights[i]>sum(weights[j]for j in bad):chosen-=bad;chosen.add(i);change=True
  v=sum(weights[i]for i in chosen)
  if v>bestv:bestv=v;best=[words[i]for i in sorted(chosen)]
 return best

def offers(c,p,name):
 node=next(n for n in c['nodes']if n['name']==name);table=c['tables'][node['kind']]
 bs,poss=node_gains([p[ch]for ch in node['children']],table)
 for a in range(7):
  if a==4:continue # O is unused in the received certificates.
  vals={word:gains[a]for word,gains in poss if gains[a]}
  if vals:
   rects=greedy_code(vals,seed=sum(map(ord,name))+a,tries=20)
   yield {'family':L[a],'rectangles':rects},sum(vals[w]for w in rects)

if __name__=='__main__':
 import argparse
 parser=argparse.ArgumentParser();parser.add_argument('dimension',type=int,choices=(186,198,213));parser.add_argument('--output-dir',type=Path,required=True);args=parser.parse_args()
 d=args.dimension;output=args.output_dir.resolve()
 if output==R.resolve()or R.resolve()in output.parents:raise SystemExit('Choose an output directory outside the sealed package')
 output.mkdir(parents=True,exist_ok=True)
 c=json.loads((R/f'parent/C11_d{d}.json').read_text())
 sched={};N,p,di,au=run_aug(c,sched);start=N;history=[]
 for iteration in range(8):
  best=(N,None,None);trials=0
  for node in c['nodes']:
   name=node['name'];kind=node['kind']
   if kind=='base'or name in sched or isinstance(c['tables'][kind],list):continue
   for spec,gn in offers(c,p,name):
    newN,_,_,_=run_aug(c,{**sched,name:spec});trials+=1
    if newN>best[0]:best=(newN,name,spec)
  if best[1]is None:
   print('STOP no improvement',iteration,trials,flush=True);break
  N,name,spec=best;sched[name]=spec;N,p,di,au=run_aug(c,sched)
  entry={'iteration':iteration,'N':str(N),'new_node':name,'augmentation':spec,'trials':trials}
  history.append(entry)
  print(iteration,name,spec,'approxroot',math.exp(math.log(N)/d),'relgain',(N-start)/start,flush=True)
 (output/f'avoidance_d{d}.json').write_text(json.dumps({'dimension':d,'oldN':str(start),'N':str(N),'schedule':sched,'history':history,'audit':au,'profiles':p},indent=2))
