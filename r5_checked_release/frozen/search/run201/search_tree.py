import os
os.environ['OPENBLAS_NUM_THREADS']='1';os.environ['OMP_NUM_THREADS']='1'
from extended_tables import *
import numpy as np,time,sys
inp=Path(sys.argv[1]);LIMIT=float(sys.argv[2])if len(sys.argv)>2 else 90;CAP=int(sys.argv[3])if len(sys.argv)>3 else 300
START=time.monotonic();c=json.loads(inp.read_text());nd={n['name']:n for n in c['nodes']};tables=copy.deepcopy(c['tables']);tree_count=0
class Node:
 def __init__(self,tab=None,kids=(),origin=''):
  global tree_count
  self.tab=tab;self.kids=list(kids);self.origin=origin;self.id=tree_count;tree_count+=1
 def evaluate(self):
  if self.tab is None:self.w=BASE;self.d=3
  else:self.w=evaluate(self.tab,[k.evaluate()for k in self.kids]);self.d=sum(k.d for k in self.kids)
  return self.w
 def ad(self,grad,alln):
  self.grad=grad;alln.append(self)
  if self.tab is None:return
  gs=[[0]*7 for k in self.kids]
  for up,ws in ([(1,self.tab)]if isinstance(self.tab,list)else[(grad[IDX[a]],self.tab[a])for a in ABC]):
   for word in ws:
    for j,a in enumerate(word):gs[j][IDX[a]]+=up*math.prod(self.kids[i].w[IDX[b]]for i,b in enumerate(word)if i!=j)
  for k,g in zip(self.kids,gs):k.ad(g,alln)
def build(k):
 n=nd[k];return Node(None if n['kind']=='base' else tables[n['kind']],[build(j)for j in n.get('children',[])],k)
root=build(c['root'])

# All coordinate permutations and independent input/output reflections.
# The reflection is an automorphism of the full seven-letter separation system.
library={2:[],3:[]};seen={2:set(),3:set()};origins={}
for key,tab in TABLES.items():
 if isinstance(tab,list):continue
 q=max(map(len,[w for ws in tab.values()for w in ws]))
 for perm in itertools.permutations(range(q)):
  for flags in itertools.product([0,1],repeat=q+1):
   trans={a:sorted(''.join(w[perm[j]].translate(REFLECT)if flags[j]else w[perm[j]]for j in range(q))for w in tab[a.translate(REFLECT)if flags[q]else a])for a in ABC}
   sig=json.dumps(trans,sort_keys=True)
   if sig not in seen[q]:seen[q].add(sig);library[q].append(trans);origins[sig]=(key,perm,flags)
# Standard direct terminal codes of arities 2,3,4; optimization changes the code, not arity.
terminal={2:[],3:[],4:[]}
for key,tab in TABLES.items():
 if not isinstance(tab,list):continue
 q=len(tab[0]);seen_t=set()
 for perm in itertools.permutations(range(q)):
  for flags in itertools.product([0,1],repeat=q):
   words=sorted(''.join(w[perm[j]].translate(REFLECT)if flags[j]else w[perm[j]]for j in range(q))for w in tab)
   sig=tuple(words)
   if sig not in seen_t:seen_t.add(sig);terminal[q].append(words)

# Cache vectorized polynomial evaluations for all substitution variants.
poly={}
for q,tabs in library.items():
 tags=[];outs=[];inds=[]
 for t,tab in enumerate(tabs):
  for a,ws in tab.items():
   for w in ws:tags.append(t);outs.append(IDX[a]);inds.append([IDX[b]for b in w])
 poly[q]=(np.array(tags),np.array(outs),np.array(inds))

def best_table(t):
 if isinstance(t.tab,list):
  tabs=terminal[len(t.kids)];best=t.tab;bv=t.w
  for tab in tabs:
   nv=evaluate(tab,[k.w for k in t.kids])
   if nv>bv:best=tab;bv=nv
  return best,bv-t.w
 q=len(t.kids);tags,outs,inds=poly[q];vals=np.array([g/max(t.grad)if max(t.grad)else 0 for g in t.grad])[outs]
 for j,k in enumerate(t.kids):vals*=np.array([x/max(k.w)for x in k.w])[inds[:,j]]
 scores=np.bincount(tags,weights=vals,minlength=len(library[q])); candidates=np.argsort(scores)[-3:]
 bv=sum(x*y for x,y in zip(t.w,t.grad));bt=t.tab
 for i in candidates:
  tab=library[q][i];nv=sum(x*y for x,y in zip(evaluate(tab,[k.w for k in t.kids]),t.grad))
  if nv>bv:bv=nv;bt=tab
 return bt,bv-sum(x*y for x,y in zip(t.w,t.grad))

def serialize():
 ns=[];tt={};seen={}
 def visit(t):
  if t.tab is None:key='base';kids=[];kind='base'
  else:
   kids=[visit(k)for k in t.kids];kind=hashlib.sha256(json.dumps(t.tab,sort_keys=True).encode()).hexdigest()[:16];tt[kind]=t.tab;key=(kind,tuple(kids))
  if key in seen:return seen[key]
  name='v'if key=='base'else f'n{len(ns)}';ns.append(dict(name=name,kind=kind,**({'children':kids}if kids else {})));seen[key]=name;return name
 visit(root);return ns,tt
records=[];best_by_dim={}
def save(stage):
 N=root.evaluate();ns,tt=serialize();d=root.d;rec={'N':str(N),'dimension':d,'root':root_value(N,d),'stage':stage,'elapsed':time.monotonic()-START};records.append(rec)
 print('TREE',rec,flush=True)
 if d not in best_by_dim or N>best_by_dim[d]:
  best_by_dim[d]=N;save_certificate(ROOT/f'tree_d{d}.json',ns,tt,meta={'parent':inp.name,'records':records})

def better(N,d,M,e):return pow(N,e)>pow(M,d)
save('start')
for it in range(40):
 old=root.evaluate();d=root.d;alln=[];root.ad(None,alln)
 if time.monotonic()-START>LIMIT:break
 # First optimize the table at each node against its current exact downstream objective.
 changed=0
 for t in alln:
  if t.tab is None:continue
  bt,delta=best_table(t)
  if delta>0:
   t.tab=bt;new=root.evaluate();assert new==old+delta;old=new;changed+=1
   newall=[];root.ad(None,newall)
 if changed:save(f'table_sweep_{it}_{changed}')
 # Single-leaf insertion or deletion, evaluated against the whole root per dimension.
 old=root.evaluate();d=root.d;alln=[];root.ad(None,alln);winner=None;bestN=old;bestD=d
 for t in alln[1:]:
  if max(t.grad)==0:continue
  oldpart=sum(x*y for x,y in zip(t.w,t.grad))
  if t.tab is not None and len(t.kids)==2:
   for k in t.kids:
    if k.d==t.d-3:
     nv=old+sum(x*y for x,y in zip(k.w,t.grad))-oldpart;dd=d-3
     if better(nv,dd,bestN,bestD):winner=('del',t,k);bestN,bestD=nv,dd
  if d+3<=CAP:
   # Both orders covered by coordinate permutations in the table catalogue.
   tags,outs,inds=poly[2];vals=np.array([x/max(t.grad)for x in t.grad])[outs]
   vals*=np.array([x/max(t.w)for x in t.w])[inds[:,0]];vals*=np.array(BASE,dtype=float)[inds[:,1]]
   scores=np.bincount(tags,weights=vals,minlength=len(library[2]));ii=int(np.argmax(scores));tab=library[2][ii]
   nw=evaluate(tab,[t.w,BASE]);nv=old+sum(x*y for x,y in zip(nw,t.grad))-oldpart;dd=d+3
   if better(nv,dd,bestN,bestD):winner=('ins',t,tab);bestN,bestD=nv,dd
 if winner is None:
  if not changed:break
 else:
  typ,t,arg=winner
  if typ=='del':t.tab=arg.tab;t.kids=arg.kids;t.origin+='-pruned'
  else:
   before=Node(t.tab,t.kids,t.origin);t.tab=arg;t.kids=[before,Node()];t.origin+='-extended'
  new=root.evaluate();assert new==bestN and root.d==bestD;save(f'{typ}_{it}')
(ROOT/f'tree_summary_{c["dimension"]}_{CAP}.json').write_text(json.dumps({'elapsed':time.monotonic()-START,'library_counts':{k:len(v)for k,v in library.items()},'records':records},indent=2)+'\n')
