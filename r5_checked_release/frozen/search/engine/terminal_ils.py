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


from numba import njit
@njit
def best_pair_float(values,losses,blockers,weights,compatible):
 best=0.0;bi=-1;bj=-1;n=len(values)
 singles=values-losses
 for i in range(n):
  if singles[i]>best:best=singles[i];bi=i;bj=-1
 for i in range(n):
  for j in range(i):
   if not compatible[i,j]:continue
   if values[i]+values[j]-max(losses[i],losses[j])<=best:continue
   inter=blockers[i]&blockers[j]
   if inter==0:continue
   delta=singles[i]+singles[j];k=0
   while inter:
    if inter&np.uint64(1):delta+=weights[k]
    inter>>=np.uint64(1);k+=1
   if delta>best:best=delta;bi=i;bj=j
 return bi,bj,best
tradecache={}
def candidate_space(q,terminal):
 key=(q,terminal)
 if key in tradecache:return tradecache[key]
 words=[''.join(x)for x in itertools.product(ABC,repeat=q)]
 entries=[('_',w)for w in words]if terminal else [(a,w)for a in ABC for w in words]
 arr=np.array([[IDX[x]for x in w]for w in words],dtype=np.int8)
 sep=np.array([[(a,b)in SEP for b in ABC]for a in ABC],dtype=bool)
 wc=np.zeros((len(words),len(words)),dtype=bool)
 for j in range(q):wc|=sep[arr[:,j,None],arr[None,:,j]]
 if terminal:compat=wc
 else:
  outconf=(~sep)&(~np.eye(7,dtype=bool));compat=np.tile(wc,(7,7))|np.repeat(np.repeat(outconf,len(words),0),len(words),1)
 tradecache[key]=(entries,{e:i for i,e in enumerate(entries)},compat)
 return tradecache[key]

def trade_sweep():
 global attempts,accepted
 changes=0
 for t in nodes():
  if t.tab is None:continue
  if time.monotonic()-START>args.seconds:break
  ist=isinstance(t.tab,list);q=len(t.kids)
  # q=4 output substitution would make the candidate space unnecessarily huge.
  if q>3 and not ist:continue
  entries,index,compatall=candidate_space(q,ist)
  for subround in range(5):
   old=root.evaluate();nodes()
   oldentries=[('_',w)for w in t.tab]if ist else[(a,w)for a,ws in t.tab.items()for w in ws]
   if len(oldentries)>63:break
   oldset=set(oldentries)
   def wt(entry):
    a,w=entry
    return (1 if ist else t.grad[IDX[a]])*math.prod(k.w[IDX[ch]]for k,ch in zip(t.kids,w))
   occweights=[wt(e)for e in oldentries];oi=np.array([index[e]for e in oldentries]);pool=[];vals=[];masks=[];costs=[]
   for i,e in enumerate(entries):
    if e in oldset:continue
    val=wt(e)
    if val==0:continue
    mask=0;cost=0
    for j,oldi in enumerate(oi):
     if not compatall[i,oldi]:mask|=1<<j;cost+=occweights[j]
    # 2-insertion can replace a large blocker union too; do not cap blocker count.
    pool.append(i);vals.append(val);masks.append(mask);costs.append(cost)
   if not vals:break
   scale=max(max(vals),max(costs),1)
   vv=np.array([v/scale for v in vals]);ll=np.array([v/scale for v in costs]);mm=np.array(masks,dtype=np.uint64);ww=np.array([v/scale for v in occweights]);comp=compatall[np.ix_(pool,pool)]
   i,j,delta=best_pair_float(vv,ll,mm,ww,comp);attempts+=len(pool)*(len(pool)+1)//2
   if i<0:break
   selected=[i]if j<0 else [i,j];mask=0
   for u in selected:mask|=masks[u]
   exact=sum(vals[u]for u in selected)-sum(w for k,w in enumerate(occweights)if mask>>k&1)
   if exact<=0:break
   replacement=[e for k,e in enumerate(oldentries)if not(mask>>k&1)]+[entries[pool[u]]for u in selected]
   ntab=sorted(w for a,w in replacement)if ist else {a:sorted(w for b,w in replacement if a==b)for a in ABC}
   if not admissible(ntab):raise RuntimeError('trade produced inadmissible table')
   t.tab=ntab;N=root.evaluate()
   if N!=old+exact:raise RuntimeError('trade root delta mismatch')
   changes+=1;accepted+=1;save(f'exact_{len(selected)}_insertion_trade_q{q}_oldblocks{len(oldentries)}')
 return changes


import random
rng=np.random.default_rng(20260908)
root.evaluate();oldroot=root.w;q=len(root.kids)
entries,entryidx,fullcompat=candidate_space(q,True)
weights_int=[math.prod(k.w[IDX[a]]for k,a in zip(root.kids,w))for _,w in entries]
active=[i for i,w in enumerate(weights_int)if w>0]
lookup={entries[i][1]:j for j,i in enumerate(active)}
words=[entries[i][1]for i in active];weights_int=[weights_int[i]for i in active];sc=max(weights_int);weights=np.array([x/sc for x in weights_int]);compat=fullcompat[np.ix_(active,active)]
initial=[lookup[w]for w in root.tab if w in lookup];bestsel=list(initial);bestN=sum(weights_int[i]for i in bestsel);num_iters=0
if bestN!=oldroot:raise RuntimeError('terminal initial mismatch')
def fill(sel,noise=0.0):
 available=np.all(compat[:,sel],axis=1)if sel else np.ones(len(words),dtype=bool)
 rank=weights*np.exp(rng.normal(0,noise,len(words)))
 while available.any():
  ids=np.flatnonzero(available);i=ids[np.argmax(rank[ids])];sel.append(i);available&=compat[:,i]
 return sel

def improve(sel):
 for turn in range(12):
  if len(sel)>63:return sel
  occupied=np.zeros(len(words),bool);occupied[sel]=True;pool=np.flatnonzero(~occupied)
  bad=~compat[np.ix_(pool,sel)];padded=np.zeros((len(pool),64),dtype=np.uint8);padded[:,:len(sel)]=bad
  masks=np.packbits(padded,axis=1,bitorder='little').view(np.uint64).ravel()
  costs=bad@weights[sel]
  i,j,delta=best_pair_float(weights[pool],costs,masks,weights[sel],compat[np.ix_(pool,pool)])
  if i<0 or delta<1e-14:return sel
  inds=[i]if j<0 else[i,j];bm=0
  for ix in inds:bm|=int(masks[ix])
  nxt=[s for k,s in enumerate(sel)if not (bm>>k&1)]+[int(pool[ix])for ix in inds]
  if sum(weights_int[i]for i in nxt)<=sum(weights_int[i]for i in sel):return sel
  sel=nxt
 return sel
save('start')
for it in range(600):
 if time.monotonic()-START>args.seconds:break
 sel=list(bestsel)
 # Alternate a forced insertion with dropping a small random subset.
 if it%2:
  for kick in range(1+it%3):
   blockers=(~compat[:,sel]).sum(axis=1)
   choices=np.flatnonzero((blockers<=4)&(blockers>0))
   if not len(choices):break
   v=int(rng.choice(choices));sel=[s for s in sel if compat[v,s]]+[v]
 else:
  drop=set(int(x)for x in rng.choice(sel,size=min(len(sel)-1,2+it%10),replace=False));sel=[s for s in sel if s not in drop]
 sel=fill(sel,noise=(it%5)*0.15);sel=improve(sel);num_iters+=1
 N=sum(weights_int[i]for i in sel)
 if N>bestN:
  tab=sorted(words[i]for i in sel)
  if not admissible(tab):raise RuntimeError('ILS inadmissible')
  root.tab=tab
  if root.evaluate()!=N:raise RuntimeError('ILS exact count mismatch')
  bestN=N;bestsel=sel;save(f'ILS_improvement_iteration_{it}')
print('ILS_ITERATIONS',num_iters,flush=True);save('stopped')
(OUT/'ils_summary.json').write_text(json.dumps({'seed':20260908,'iterations':num_iters,'seconds':time.monotonic()-START,'candidate_space_size':len(words),'initial_N':str(oldroot),'final_N':str(bestN),'exhaustive':False},indent=2)+'\n')
