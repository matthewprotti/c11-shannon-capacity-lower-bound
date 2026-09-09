"""Bounded recursive reassembly search; final acceptance uses a separate checker.
All comparisons of retained equal-dimension candidates are exact integer comparisons.
Normalized floating point only ranks neighbourhood proposals.
"""
import os
os.environ['OPENBLAS_NUM_THREADS']='1';os.environ['OMP_NUM_THREADS']='1'
from extended_tables import *
import numpy as np,time,sys,argparse
P=argparse.ArgumentParser();P.add_argument('input');P.add_argument('--seconds',type=float,default=180);P.add_argument('--output',required=True);P.add_argument('--squeeze',type=int);P.add_argument('--rounds',type=int,default=40)
args=P.parse_args();START=time.monotonic();OUT=Path(args.output);OUT.mkdir(parents=True,exist_ok=True)
class Node:
 def __init__(self,tab=None,kids=()): self.tab=tab;self.kids=list(kids)
 def evaluate(self):
  if self.tab is None:self.w=BASE;self.d=3
  else:self.w=evaluate(self.tab,[k.evaluate()for k in self.kids]);self.d=sum(k.d for k in self.kids)
  return self.w
 def ad(self,grad,alln):
  self.grad=grad;alln.append(self)
  if self.tab is None:return
  gs=[[0]*7 for _ in self.kids]
  for up,ws in ([(1,self.tab)]if isinstance(self.tab,list)else[(grad[IDX[a]],self.tab[a])for a in ABC]):
   for word in ws:
    for j,a in enumerate(word):gs[j][IDX[a]]+=up*math.prod(self.kids[i].w[IDX[b]]for i,b in enumerate(word)if i!=j)
  for k,g in zip(self.kids,gs):k.ad(g,alln)
c=json.loads(Path(args.input).read_text());nd={n['name']:n for n in c['nodes']}
def build(k):
 n=nd[k];return Node(None if n['kind']=='base'else c['tables'][n['kind']],[build(j)for j in n.get('children',[])])
root=build(c['root'])
library={2:[],3:[]};terminal={2:[],3:[],4:[]};seen={}
for key,tab in {**TABLES,**c['tables']}.items():
 ist=isinstance(tab,list);q=len(tab[0])if ist else max(len(w)for ws in tab.values()for w in ws)
 for perm in itertools.permutations(range(q)):
  for flags in itertools.product([0,1],repeat=q+(not ist)):
   def transwords(ws):return sorted(''.join(w[perm[j]].translate(REFLECT)if flags[j]else w[perm[j]]for j in range(q))for w in ws)
   trans=transwords(tab)if ist else {a:transwords(tab[a.translate(REFLECT)if flags[q]else a])for a in ABC}
   sig=json.dumps(trans,sort_keys=True)
   if sig not in seen:seen[sig]=True;(terminal if ist else library)[q].append(trans)
class Poly:
 def __init__(self,tabs):
  self.tabs=tabs;self.terminal=isinstance(tabs[0],list);tags=[];outs=[];ind=[]
  for i,tab in enumerate(tabs):
   for out,ws in ([('_',tab)]if self.terminal else tab.items()):
    for w in ws:tags.append(i);outs.append(0 if self.terminal else IDX[out]);ind.append([IDX[x]for x in w])
  self.tag=np.array(tags);self.out=np.array(outs);self.ind=np.array(ind);self.size=len(tabs);self.width=1 if self.terminal else 7
 def profiles(self,kids):
  val=np.ones(len(self.tag))
  for j,k in enumerate(kids):val*=np.array([x/max(k.w)for x in k.w])[self.ind[:,j]]
  return np.bincount(self.tag*self.width+self.out,weights=val,minlength=self.size*self.width).reshape(self.size,self.width)
 def coeffs(self,grad,other):
  val=np.ones(len(self.tag))if self.terminal else np.array([x/max(grad)if max(grad)else 0 for x in grad])[self.out]
  for j,k in enumerate(other,1):val*=np.array([x/max(k.w)for x in k.w])[self.ind[:,j]]
  return np.bincount(self.tag*7+self.ind[:,0],weights=val,minlength=self.size*7).reshape(self.size,7)
polys={q:Poly(t)for q,t in library.items()if t};terms={q:Poly(t)for q,t in terminal.items()if t}
records=[];attempts=0;accepted=0;best_by_dim={}
def serialize():
 ns=[];tt={};seen={}
 def visit(t):
  if t.tab is None:key='base';kids=[];kind='base'
  else:
   kids=[visit(k)for k in t.kids];kind=hashlib.sha256(json.dumps(t.tab,sort_keys=True).encode()).hexdigest()[:16];tt[kind]=t.tab;key=(kind,tuple(kids))
  if key in seen:return seen[key]
  name='v'if key=='base'else f'n{len(ns)}';ns.append(dict(name=name,kind=kind,**({'children':kids}if kids else {})));seen[key]=name;return name
 visit(root);return ns,tt
def save(stage):
 N=root.evaluate();ns,tt=serialize();d=root.d
 rec={'N':str(N),'dimension':d,'root':root_value(N,d),'stage':stage,'elapsed_seconds':time.monotonic()-START};records.append(rec);print(json.dumps(rec),flush=True)
 if d not in best_by_dim or N>best_by_dim[d]:
  best_by_dim[d]=N;save_certificate(OUT/f'd{d}.json',ns,tt,meta={'parent':str(args.input),'records':records})
 (OUT/'summary.json').write_text(json.dumps({'input':args.input,'library_counts':{str(q):len(v)for q,v in library.items()},'records':records,'attempts':attempts,'accepted':accepted,'search_exhaustive':False},indent=2)+'\n')
def nodes():
 root.evaluate();ns=[];root.ad(None,ns);return ns
def sweep():
 global attempts,accepted
 changes=0
 for t in nodes():
  if t.tab is None:continue
  p=terms[len(t.kids)]if isinstance(t.tab,list)else polys[len(t.kids)]
  vs=p.profiles(t.kids);scores=vs[:,0]if p.terminal else vs@np.array([x/max(t.grad)if max(t.grad)else 0 for x in t.grad])
  order=np.argsort(scores)[-3:]
  old=root.w;best=old;bt=t.tab
  for i in order:
   nw=evaluate(p.tabs[i],[k.w for k in t.kids]);gain=nw-t.w if p.terminal else sum(g*(b-a)for g,a,b in zip(t.grad,t.w,nw));attempts+=1
   if old+gain>best:best=old+gain;bt=p.tabs[i]
  if best>old:
   t.tab=bt;actual=root.evaluate()
   if actual!=best:raise RuntimeError('sweep delta mismatch')
   nodes();changes+=1;accepted+=1
 return changes

def restructure_round():
 global attempts,accepted
 old=root.evaluate();d=root.d;ns=nodes();winner=None;best=old
 for t in ns:
  if t.tab is None:continue
  ist=isinstance(t.tab,list)
  if not ist and not max(t.grad):continue
  oldpart=t.w if ist else sum(x*y for x,y in zip(t.w,t.grad))
  for j,k in enumerate(t.kids):
   if k.tab is None:continue
   frontier=k.kids+[s for i,s in enumerate(t.kids)if i!=j];m=len(frontier)
   # Two-level reconstruction with the same frontier, all grouping subsets.
   for iq in (2,3):
    oq=m-iq+1
    op=(terms if ist else polys).get(oq)
    if op is None:continue
    ip=polys[iq]
    for subset in itertools.combinations(range(m),iq):
     if time.monotonic()-START>args.seconds:return winner,best
     innerkids=[frontier[i]for i in subset];other=[frontier[i]for i in range(m)if i not in subset]
     ws=ip.profiles(innerkids);coeff=op.coeffs(t.grad,other);scores=coeff@ws.T
     # Floating ranks are not an optimality assertion. Exact arithmetic determines acceptance.
     flat=int(np.argmax(scores));oi,ii=divmod(flat,ip.size);attempts+=1
     iw=evaluate(ip.tabs[ii],[s.w for s in innerkids]);ow=evaluate(op.tabs[oi],[iw]+[s.w for s in other])
     gain=(ow if ist else sum(g*x for g,x in zip(t.grad,ow)))-oldpart
     if old+gain>best:
      best=old+gain;winner=(t,op.tabs[oi],[Node(ip.tabs[ii],innerkids)]+other,{'frontier':m,'inner':iq,'outer':oq})
   # Direct fusion when the full frontier fits a table in the same output type.
   op=(terms if ist else polys).get(m)
   if op:
    ws=op.profiles(frontier);scores=ws[:,0]if ist else ws@np.array([x/max(t.grad)for x in t.grad]);i=int(np.argmax(scores));attempts+=1
    ow=evaluate(op.tabs[i],[s.w for s in frontier]);gain=(ow if ist else sum(g*x for g,x in zip(t.grad,ow)))-oldpart
    if old+gain>best:best=old+gain;winner=(t,op.tabs[i],frontier,{'direct_fusion':m})
 return winner,best

def contract_best():
 """Force the least-cost one-block deletion, including ternary-to-binary rebuilds."""
 global attempts
 old=root.evaluate();ns=nodes();best=None;winner=None
 for t in ns[1:]:
  if t.tab is None:continue
  oldpart=sum(g*w for g,w in zip(t.grad,t.w))
  for j,k in enumerate(t.kids):
   if k.tab is not None:continue
   kids=[s for i,s in enumerate(t.kids)if i!=j]
   if len(kids)==1:bt=kids[0].tab;kk=kids[0].kids;ww=kids[0].w
   else:
    p=polys[len(kids)];ws=p.profiles(kids);scores=ws@np.array([g/max(t.grad)if max(t.grad)else 0 for g in t.grad]);i=int(np.argmax(scores));bt=p.tabs[i];kk=kids;ww=evaluate(bt,[s.w for s in kids])
   nn=old+sum(g*w for g,w in zip(t.grad,ww))-oldpart;attempts+=1
   if best is None or nn>best:best=nn;winner=(t,bt,kk)
 if winner is None:return False
 t,bt,kk=winner;t.tab=bt;t.kids=kk
 if root.evaluate()!=best:raise RuntimeError('deletion mismatch')
 save('forced_one_block_contraction');return True


# Context-directed small-subtree dynamic-programming beam. Not exhaustive.
import random
rng=random.Random(20260908)
context=[]
for i in range(7):context.append([float(i==j)for j in range(7)])
context.append([1.0]*7)
for t in nodes()[1:]:
 if t.tab is None or not max(t.grad):continue
 v=np.array([g/max(t.grad)for g in t.grad]);
 if all(np.linalg.norm(v-np.array(w))>0.2 for w in context):context.append(list(v))
 if len(context)>=24:break
while len(context)<24:context.append([rng.random()for _ in range(7)])
contexts=np.array(context)
beam={1:[Node()]};beam[1][0].evaluate()
beamsizes={1:1}
for n in range(2,36):
 if time.monotonic()-START>args.seconds:break
 bestscores=np.full(len(contexts),-1.0);bestnodes=[None]*len(contexts);trials=0
 def consider(kids,p):
  global attempts
  ws=p.profiles(kids)*math.prod(float(max(k.w))for k in kids)
  scores=contexts@ws.T;idx=np.argmax(scores,axis=1);vv=scores[np.arange(len(contexts)),idx]
  for j in np.flatnonzero(vv>bestscores*(1+1e-15)):
   bestscores[j]=vv[j];bestnodes[j]=Node(p.tabs[idx[j]],kids)
  attempts+=len(p.tabs)
 for q in (2,3):
  for parts in itertools.combinations_with_replacement(range(1,n),q):
   if sum(parts)!=n or not all(a in beam for a in parts):continue
   for kids in itertools.product(*(beam[a]for a in parts)):
    consider(kids,polys[q]);trials+=1
    if time.monotonic()-START>args.seconds:break
   if time.monotonic()-START>args.seconds:break
  if time.monotonic()-START>args.seconds:break
 unique={}
 for t in bestnodes:
  if t is not None:t.evaluate();unique[t.w]=t
 beam[n]=list(unique.values());beamsizes[n]=len(beam[n]);print('DP',n,len(beam[n]),'input_combinations',trials,'elapsed',time.monotonic()-START,flush=True)
 # Export intermediate library itself as dummy-terminal certificates (singleton B).
 # These are exploration records, not claimed improvements.
 for j,t in enumerate(beam[n]):
  ns=[];tt={};seen={}
  def visit(t):
   if t.tab is None:key='base';kids=[];kind='base'
   else:
    kids=[visit(k)for k in t.kids];kind=hashlib.sha256(json.dumps(t.tab,sort_keys=True).encode()).hexdigest()[:16];tt[kind]=t.tab;key=(kind,tuple(kids))
   if key in seen:return seen[key]
   name='v'if key=='base'else f'n{len(ns)}';ns.append(dict(name=name,kind=kind,**({'children':kids}if kids else {})));seen[key]=name;return name
  rn=visit(t);tt['B_singleton']=['B'];ns.append({'name':'out','kind':'B_singleton','children':[rn]})
  save_certificate(OUT/f'profile_d{n*3}_{j}.json',ns,tt,meta={'profile_only':True})
(OUT/'dp_summary.json').write_text(json.dumps({'beam_sizes':beamsizes,'contexts':context,'attempted_table_evaluations':attempts,'elapsed':time.monotonic()-START,'exhaustive':False},indent=2)+'\n')
