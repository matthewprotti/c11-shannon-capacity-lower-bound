#!/usr/bin/env python3
"""Exact C13 quotient-based base check and R7 profile replay. No solver or Lean invoked.
Uses pure profile operations inherited from R6; C13 base verification is new.
"""
from __future__ import annotations
import json,itertools,math,re,hashlib
from collections import Counter
from pathlib import Path
LETTERS='BNADOHV'
EDGES=('BO','BH','BV','NA','ND','NO','NH','NV','AD','AH','DV')
SEP={tuple(p)for p in EDGES}|{tuple(p[::-1])for p in EDGES}
NEIGH=[sum(1<<b for b in range(7)if(LETTERS[a],LETTERS[b])in SEP)for a in range(7)]
class Rejected(ValueError):pass
def require(ok,message):
 if not ok:raise Rejected(message)
def nat(text):
 require(type(text)is str and re.fullmatch(r'0|[1-9][0-9]*',text)is not None,'noncanonical natural')
 return int(text)
def digits(n,k):return tuple(n//13**j%13 for j in reversed(range(k)))
def pack(w):
 n=0
 for a in w:n=13*n+a
 return n
def syndrome(w):
 a,b,c,d,e,f=w
 return((b-2*a)%13,(d-11*c)%13,e%13,(f-a)%13)
def base(data):
 require(data['cycle_order']==13 and data['base_dimension']==6,'base graph')
 require(data['source_commit']=='aa21eeb12b75b0413d3fa9fb4208b5d0bf2c4d65','source pin')
 for k in ('S','SX','SP','SA','SF0','SF1'):
  row=data[k];require(type(row)is list and all(type(x)is int and 0<=x<13**4 for x in row)and len(set(row))==len(row),'base data shape')
 require(len(data['S'])==len(data['SX'])==370 and all(len(data[k])==6 for k in ('SP','SA','SF0','SF1')),'base data size')
 off=list(itertools.product((-1,0,1),repeat=6));delta={syndrome(w)for w in off}
 require(len(delta)==483,'offset syndrome count')
 require([w for w in off if syndrome(w)==(0,0,0,0)]==[(0,)*6],'within-fibre independence')
 kernel={(a,2*a%13,c,11*c%13,0,a)for a in range(13)for c in range(13)}
 require(len(kernel)==169 and all(syndrome(w)==(0,0,0,0)for w in kernel),'kernel')
 raw={k:set(data[k])for k in ('S','SX','SP','SA','SF0','SF1')};vectors={x:digits(x,4)for s in raw.values()for x in s}
 def conflict(u,v):return tuple((a-b)%13 for a,b in zip(vectors[u],vectors[v]))in delta
 A={x for x in raw['SX']if any(conflict(x,y)for y in raw['SP'])};D={x for x in raw['SX']if any(conflict(x,y)for y in raw['SA'])}
 require(A==raw['SF0']and D==raw['SF1']and not A&D,'footprints')
 require(raw['SP']<=raw['S'],'parents')
 fam=[raw['S']-raw['SP'],raw['SX']-A-D,A,D,raw['SP'],raw['SA'],raw['SP']]
 checks=0
 for F in fam:
  for x,y in itertools.combinations(F,2):require(not conflict(x,y),'base independent fibre unions');checks+=1
 for a,b in EDGES:
  for x in fam[LETTERS.index(a)]:
   for y in fam[LETTERS.index(b)]:require(not conflict(x,y),'base family separation');checks+=1
 h=[dict(Counter(sum(1<<b for b,F in enumerate(fam)if any(conflict(x,y)for y in F))for x in F))for F in fam]
 h=[{m:169*n for m,n in H.items()}for H in h];check_profiles(h)
 require([sum(H.values())for H in h]==[61516,60502,1014,1014,1014,1014,1014],'base weight control')
 return h,{'quotient_size':13**4,'physical_size':13**6,'kernel_size':169,'offsets':len(off),'closed_offset_syndromes':len(delta),'required_quotient_pair_checks':checks}
def separated(u,v):return any((a,b)in SEP for a,b in zip(u,v))
def check_table(tab):
 terminal=isinstance(tab,list)
 require(terminal or type(tab)is dict and set(tab)==set(LETTERS),'table shape')
 rows=[tab]if terminal else [tab[a]for a in LETTERS]
 words=[w for row in rows for w in row]
 require(words and all(type(w)is str for w in words),'table empty or word type');q=len(words[0]);require(1<=q<=4,'table arity')
 for row in rows:
  require(len(row)==len(set(row)),'duplicate table word')
  require(all(len(w)==q and set(w)<=set(LETTERS)for w in row),'table alphabet')
  require(all(separated(u,v)for u,v in itertools.combinations(row,2)),'within-row conflict')
 if not terminal:
  for a,b in EDGES:require(all(separated(u,v)for u in tab[a]for v in tab[b]),'cross-row conflict')
 return q

def check_profiles(hist):
 require(len(hist)==7,'profile shape')
 for a,row in enumerate(hist):
  for m,n in row.items():
   require(type(m)is int and 0<=m<128 and type(n)is int and n>0,'profile entry')
   require(m&(1<<a)and not m&NEIGH[a],'self/separation mask invariant')

def signature(table,masks):
 return sum(1<<b for b,a in enumerate(LETTERS)if any(all(masks[i]&(1<<LETTERS.index(s))for i,s in enumerate(w))for w in table[a]))

def lift(children,table):
 cache={};out=[]
 def phi(m):
  if m not in cache:cache[m]=signature(table,m)
  return cache[m]
 for a in LETTERS:
  h=Counter()
  for word in table[a]:
   for items in itertools.product(*(children[i][LETTERS.index(s)].items()for i,s in enumerate(word))):
    m=phi(tuple(z[0]for z in items));h[m]+=math.prod(z[1]for z in items)
  out.append(dict(h))
 check_profiles(out);return out

def extend(children,table,out,spec):
 require(set(spec)=={'node','target_family','extension_words','avoid_letters','mode'},'augmentation fields')
 a=spec['target_family'];require(type(a)is str and a in LETTERS and len(a)==1,'target family');ai=LETTERS.index(a)
 avoid=''.join(b for b in LETTERS if b==a or (a,b)in SEP)
 require(spec['avoid_letters']==avoid,'mandatory avoidance set')
 require(spec['mode']=='KEEP_ZERO_MASKS_THEN_CONSERVATIVE_WIDENING','augmentation mode')
 rect=spec['extension_words'];q=len(children)
 require(type(rect)is list and rect and all(type(w)is str and len(w)==q and set(w)<=set(LETTERS)for w in rect),'extension words')
 require(len(rect)==len(set(rect)),'duplicate extension word')
 require(all(separated(u,v)for u,v in itertools.combinations(rect,2)),'extension independence')
 bad=(1<<ai)|NEIGH[ai];added=Counter();per_word={};coarse_blockers={}
 for word in rect:
  count=0
  for items in itertools.product(*(children[i][LETTERS.index(s)].items()for i,s in enumerate(word))):
   m=signature(table,tuple(z[0]for z in items))
   if not(m&bad):
    n=math.prod(z[1]for z in items);added[m|(1<<ai)]+=n;count+=n
  per_word[word]=str(count)
  coarse_blockers[word]=[(b,u)for b in avoid for u in table[b]if not separated(word,u)]
 require(sum(added.values())>0,'zero augmentation')
 # Widen unknown new neighborhoods; do not carry old absence claims unchanged.
 updated=[]
 for b,row in enumerate(out):
  h=Counter()
  for m,n in row.items():h[m if b==ai or NEIGH[ai]&(1<<b)else m|(1<<ai)]+=n
  if b==ai:h.update(added)
  updated.append(dict(h))
 check_profiles(updated)
 return updated,{'added_count':str(sum(added.values())),'by_rectangle':per_word,'added_masks':{str(m):str(n)for m,n in sorted(added.items())},'coarse_blockers':coarse_blockers}


def replay(parent,h0,steps):
 tables=parent['tables'];checked={k:check_table(T)for k,T in tables.items()};patch={}
 for spec in steps:
  require(type(spec)is dict and type(spec.get('node'))is str and spec['node']not in patch,'duplicate or malformed patch')
  patch[spec['node']]=spec
 hist={};dims={};audits={};defs={};used=set();N=None
 for node in parent['nodes']:
  name=node['name'];kind=node['kind'];require(name not in defs,'duplicate node');defs[name]=node
  if kind=='base':
   require(set(node)=={'name','kind'}and name not in patch,'base node fields/patch');H=h0;d=6
  else:
   require(set(node)=={'name','kind','children'}and kind in tables,'node fields');kids=node['children'];T=tables[kind]
   require(len(kids)==checked[kind]and all(k in hist and hist[k]is not None for k in kids),'node children')
   inp=[hist[k]for k in kids];d=sum(dims[k]for k in kids);used.add(kind)
   if isinstance(T,list):
    require(name==parent['root']==parent['nodes'][-1]['name']and name not in patch,'terminal root')
    N=sum(math.prod(sum(inp[i][LETTERS.index(a)].values())for i,a in enumerate(w))for w in T);H=None
   else:
    H=lift(inp,T)
    if name in patch:H,audits[name]=extend(inp,T,H,patch[name])
  hist[name]=H;dims[name]=d
 require(used==set(tables)and set(audits)==set(patch),'unused tables or patch')
 seen=set()
 def visit(k):
  if k in seen:return
  seen.add(k)
  for ch in defs[k].get('children',[]):visit(ch)
 visit(parent['root']);require(seen==set(defs),'unused nodes')
 return N,dims[parent['root']],hist,dims,audits

def control(parent,h0):
 N,d,hs,ds,_=replay(parent,h0,[]);report=[];total=0;live=0;zero_only=0
 for nd in parent['nodes']:
  if nd['kind']=='base'or nd['name']==parent['root']:continue
  T=parent['tables'][nd['kind']];W=[[sum(r.values())for r in hs[ch]]for ch in nd['children']];q=len(W);found=[];evaluated=0
  for a in LETTERS:
   protected=[b for b in LETTERS if b==a or(a,b)in SEP]
   blockers=[u for b in protected for u in T[b]if all(W[i][LETTERS.index(s)]for i,s in enumerate(u))]
   for letters in itertools.product(LETTERS,repeat=q):
    word=''.join(letters);size=math.prod(W[i][LETTERS.index(s)]for i,s in enumerate(word))
    evaluated+=1
    if size and all(separated(word,u)for u in blockers):found.append({'family':a,'word':word,'size':str(size)})
  live+=sum(x['family']!='O'for x in found);zero_only+=sum(x['family']=='O'for x in found);total+=evaluated
  report.append({'node':nd['name'],'dimension':ds[nd['name']],'evaluated_family_rectangle_pairs':evaluated,'admissible_nonempty_additions':found})
 require(all('O'not in w for T in parent['tables'].values()for row in([T]if isinstance(T,list)else T.values())for w in row),'O unexpectedly consumed')
 return{'scope':'fixed schedule, no deletions/relabelings/reassembly; whole-product-block additions only; includes zero-weight-aware protected-word pruning','examined_family_rectangle_pairs':total,'nonempty_admissible_additions_to_used_families':live,'nonempty_admissible_additions_to_unused_O':zero_only,'nodes':report}

def normalize(hist):return{k:[{str(m):str(n)for m,n in sorted(H.items())}for H in h]for k,h in hist.items()if h is not None}
