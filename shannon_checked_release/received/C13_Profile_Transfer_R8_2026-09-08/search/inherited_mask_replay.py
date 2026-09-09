#!/usr/bin/env python3
"""Exact forward replay of the avoidance-profile calculus. Standard library only.
No search routines or external solver are imported. Type masks are conservative
AFTER augmentation: a missing bit is a proved avoidance, never a guess.
"""
from __future__ import annotations
import hashlib,itertools,json,math,re
from collections import Counter
from pathlib import Path
LETTERS='BNADOHV'
EDGES=('BO','BH','BV','NA','ND','NO','NH','NV','AD','AH','DV')
SEP={tuple(x)for x in EDGES}|{tuple(x[::-1])for x in EDGES}
NEIGH=[sum(1<<b for b in range(7)if (LETTERS[a],LETTERS[b])in SEP)for a in range(7)]
BASE_SHA='bc3f401480f2b9a878ad24faa1d98c1ad848755a0537ceff0043f12f67bf7c26'
COMMIT='aa21eeb12b75b0413d3fa9fb4208b5d0bf2c4d65'
class Rejected(ValueError):pass
def require(c,msg):
 if not c:raise Rejected(msg)
def natural(s):
 require(type(s)is str and re.fullmatch(r'0|[1-9][0-9]*',s)is not None,'noncanonical integer')
 return int(s)
def digest(p):return hashlib.sha256(p.read_bytes()).hexdigest()
def confusable(x,y):
 return all(((x//11**i)-(y//11**i))%11 in (0,1,10)for i in range(3))
def independent(s):return all(not confusable(x,y)for x,y in itertools.combinations(s,2))
def base(raw):
 require(hashlib.sha256(raw).hexdigest()==BASE_SHA,'frozen input hash')
 f=json.loads(raw);require(f['source_commit']==COMMIT and f['alphabet']==LETTERS,'base identity')
 I,X=set(f['I']),set(f['X']);require(len(I)==len(f['I'])==148 and len(X)==len(f['X'])==148,'seed cardinality')
 require(all(type(x)is int and 0<=x<1331 for x in I|X),'seed range')
 require(independent(I)and independent(X),'seed independence')
 pairs=f['pairs'];require(len(pairs)==3,'pair count');V={p for p,q in pairs};H={q for p,q in pairs}
 require(len(V)==len(H)==3 and V<=I,'port sets')
 for p,q in pairs:require({x for x in I if confusable(x,q)}=={p},'private pair')
 A={x for x in X if any(confusable(x,v)for v in V)};D={x for x in X if any(confusable(x,h)for h in H)}
 require(not A&D,'footprint overlap')
 fam=[I-V,X-A-D,A,D,V,H,V]
 for s in fam:require(independent(s),'family independence')
 for a,b in SEP:require(all(not confusable(x,y)for x in fam[LETTERS.index(a)]for y in fam[LETTERS.index(b)]),'base separation')
 hist=[dict(Counter(sum(1<<b for b,Q in enumerate(fam)if any(confusable(v,w)for w in Q))for v in P))for P in fam]
 check_profiles(hist)
 return hist,fam

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

def evaluate(parent,h0,steps):
 definitions={};hist={};dims={};used=set();stepmap={};audits={}
 for st in steps:
  require(type(st)is dict and type(st.get('node'))is str and st['node']not in stepmap,'duplicate/malformed augmentation node');stepmap[st['node']]=st
 tables=parent['tables']
 for tab in tables.values():check_table(tab)
 for node in parent['nodes']:
  name=node['name'];kind=node['kind'];require(name not in definitions,'duplicate node')
  if kind=='base':
   require(set(node)=={'name','kind'},'base fields');p=h0;d=3
  else:
   require(set(node)=={'name','kind','children'}and kind in tables,'node fields')
   tab=tables[kind];children=node['children'];require(len(children)==check_table(tab),'child count')
   require(all(ch in hist and hist[ch]is not None for ch in children),'forward/cyclic/terminal child')
   ins=[hist[ch]for ch in children];d=sum(dims[ch]for ch in children);used.add(kind)
   if isinstance(tab,list):
    require(name==parent['root']and name==parent['nodes'][-1]['name'],'terminal root')
    p=None;N=sum(math.prod(sum(ins[i][LETTERS.index(s)].values())for i,s in enumerate(word))for word in tab)
   else:
    p=lift(ins,tab)
    if name in stepmap:p,audits[name]=extend(ins,tab,p,stepmap[name])
  if kind=='base'or p is None:require(name not in stepmap,'augmentation of base/terminal')
  hist[name]=p;dims[name]=d;definitions[name]=node
 require(set(audits)==set(stepmap),'unknown augmentation node');require(used==set(tables),'unused table')
 seen=set()
 def visit(k):
  if k in seen:return
  seen.add(k)
  for ch in definitions[k].get('children',[]):visit(ch)
 visit(parent['root']);require(seen==set(definitions),'unused node')
 return N,dims[parent['root']],hist,dims,audits

def certificate(c,root):
 fields={'schema','graph','base_dimension','dimension','parent_file','parent_sha256','frozen_input_sha256','parent_N','N','decimal_lower_numerator','decimal_upper_numerator','decimal_denominator','augmentations','status'}
 require(set(c)==fields,'certificate fields')
 require(c['schema']=='C11_AVOIDANCE_PROFILE_EXTENSION_V1','schema')
 require(c['graph']=='SimpleGraph.cycleGraph 11'and type(c['base_dimension'])is int and c['base_dimension']==3,'graph/base dimension')
 d=c['dimension'];require(type(d)is int and d in (186,198,213),'dimension')
 require(c['status']=='EXACT_FINITE_CERTIFICATE_WITH_WRITTEN_GENERAL_PROOF_NOT_LEAN_CHECKED','status')
 require(c['parent_file']==f'parent/C11_d{d}.json','parent path')
 parentpath=root/c['parent_file'];lineage=json.loads((root/'LINEAGE.json').read_text())
 require(c['parent_sha256']==digest(parentpath)==lineage['parents'][c['parent_file']],'parent hash')
 require(c['frozen_input_sha256']==BASE_SHA,'base hash')
 h0,fam=base((root/'FROZEN_INPUTS.json').read_bytes());parent=json.loads(parentpath.read_text())
 require(parent['source_commit']==COMMIT and parent['dimension']==d,'parent identity')
 N0,d0,_,_,_=evaluate(parent,h0,[])
 require(str(N0)==parent['N']==c['parent_N']and d0==d,'parent positive control')
 require(type(c['augmentations'])is list and c['augmentations'],'empty augmentation list')
 N,dim,hists,dims,audits=evaluate(parent,h0,c['augmentations'])
 require(N==natural(c['N'])and dim==d,'new cardinality/dimension')
 require(N>N0,'strict same-dimension comparison')
 lo,hi,den=map(natural,(c['decimal_lower_numerator'],c['decimal_upper_numerator'],c['decimal_denominator']))
 require(den==10**15 and hi==lo+1,'decimal metadata');require(lo**d<=N*den**d<hi**d,'decimal bracket')
 return {'dimension':d,'N':str(N),'parent_N':str(N0),'increase':str(N-N0),'lower':f'{lo//den}.{lo%den:015d}','upper_exclusive':f'{hi//den}.{hi%den:015d}','augmentations':audits,'node_dimensions':dims,'profiles':{k:[{str(m):str(n)for m,n in sorted(row.items())}for row in h]for k,h in hists.items()if h is not None},'maximum_nonempty_bins_per_node':max(sum(len(row)for row in h)for h in hists.values()if h is not None),'generic_mask_bound':896,'normalized_mask_bound':58,'Lean_checked':False,'external_review':False}
