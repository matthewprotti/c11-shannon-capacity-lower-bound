#!/usr/bin/env python3
"""Separately written reverse-recursive replay using sets of letter names.
The numeric kernel enumerates all labelled child type cells first, then routes
those cells to output rows. It imports neither the mask checker nor search.
"""
from __future__ import annotations
from collections import Counter
from itertools import product,combinations
from pathlib import Path
import json,math,hashlib
LETTERS='BNADOHV'
PAIR_NAMES=('BO','BH','BV','NA','ND','NO','NH','NV','AD','AH','DV')
REL={frozenset(p)for p in PAIR_NAMES}
def demands(a):return frozenset([a]+[b for b in LETTERS if frozenset((a,b))in REL])
def must(condition,explanation):
 if not condition:raise ValueError(explanation)
def coordinate_neighbours(v):
 digits=(v%11,(v//11)%11,v//121)
 return {sum(x*11**i for i,x in enumerate(coords))for coords in product(*[[(z-1)%11,z,(z+1)%11]for z in digits])}
def seed_state(f):
 I=set(f['I']);X=set(f['X']);neighbour={v:coordinate_neighbours(v)for v in range(1331)}
 for s in (I,X):
  must(len(s)==148,'seed count')
  for v in s:must(s&neighbour[v]=={v},'seed independence')
 P={x[0]for x in f['pairs']};Q={x[1]for x in f['pairs']}
 for p,q in f['pairs']:must(neighbour[q]&I=={p},'private pairs')
 A={x for x in X if neighbour[x]&P};D={x for x in X if neighbour[x]&Q};must(not A&D,'footprint disjointness')
 families={'B':I-P,'N':X-A-D,'A':A,'D':D,'O':P,'H':Q,'V':P}
 out={}
 for a,F in families.items():
  h=Counter()
  for x in F:
   must(neighbour[x]&F=={x},'family independence')
   tag=frozenset(b for b,T in families.items()if neighbour[x]&T)
   must(not(tag&(demands(a)-{a})),'base separation')
   h[tag]+=1
  out[a]=h
 return out

def separated(x,y):return any(frozenset((a,b))in REL for a,b in zip(x,y))
def verify_table(T):
 if isinstance(T,list):
  must(len(set(T))==len(T),'terminal duplicate')
  must(all(separated(u,v)for u,v in combinations(T,2)),'terminal conflict');return
 must(set(T)==set(LETTERS),'rows')
 for a in LETTERS:
  must(len(set(T[a]))==len(T[a]),'duplicate')
  must(all(separated(u,v)for u,v in combinations(T[a],2)),'internal conflict')
 for p in PAIR_NAMES:
  must(all(separated(u,v)for u in T[p[0]]for v in T[p[1]]),'cross conflict')

def routed_cells(child,T):
 # A cell chooses a family and its type in each independent coordinate block.
 options=[[(a,m,n)for a in LETTERS for m,n in h[a].items()]for h in child]
 rows={a:set(T[a])for a in LETTERS};cached={}
 for cell in product(*options):
  word=''.join(x[0]for x in cell);tags=tuple(x[1]for x in cell)
  if tags not in cached:
   cached[tags]=frozenset(b for b in LETTERS if any(all(letter in tag for letter,tag in zip(w,tags))for w in rows[b]))
  weight=math.prod(x[2]for x in cell)
  yield word,cached[tags],weight

def step(children,T,augmentation=None):
 h={a:Counter()for a in LETTERS};extra=Counter();perword=Counter()
 rows={a:set(T[a])for a in LETTERS}
 if augmentation:
  target=augmentation['target_family'];needed=demands(target);E=augmentation['extension_words'];es=set(E)
  must(set(augmentation['avoid_letters'])==needed,'avoidance')
  must(len(E)==len(es)and all(separated(u,v)for u,v in combinations(E,2)),'extension separation')
  must(augmentation['mode']=='KEEP_ZERO_MASKS_THEN_CONSERVATIVE_WIDENING','mode')
 else:es=set()
 for word,tag,n in routed_cells(children,T):
  for a in LETTERS:
   if word in rows[a]:h[a][tag]+=n
  if augmentation and word in es and not(tag&needed):extra[tag|{target}]+=n;perword[word]+=n
 if augmentation:
  for a in LETTERS:
   if a!=target and frozenset((a,target))not in REL:
    updated=Counter()
    for tag,n in h[a].items():updated[tag|{target}]+=n
    h[a]=updated
  h[target].update(extra)
 for a in LETTERS:
  for tag,n in h[a].items():must(a in tag and not(tag&(demands(a)-{a}))and n>0,'type invariant')
 return h,{'added':sum(extra.values()),'by_rectangle':dict(perword)}

def replay(parent,seed,steps):
 defs={v['name']:v for v in parent['nodes']};rules=parent['tables'];memo={};dimensions={};audits={};patch={s['node']:s for s in steps};active=set()
 for T in rules.values():verify_table(T)
 def visit(name):
  if name in memo:return memo[name]
  must(name not in active,'cycle');active.add(name)
  node=defs[name]
  if node['kind']=='base':value=seed;d=3
  else:
   children=[visit(x)for x in node['children']];d=sum(dimensions[x]for x in node['children']);T=rules[node['kind']]
   if isinstance(T,list):value=sum(math.prod(sum(child[a].values())for a,child in zip(word,children))for word in T)
   else:
    value,au=step(children,T,patch.get(name))
    if name in patch:audits[name]=au
  active.remove(name);memo[name]=value;dimensions[name]=d;return value
 total=visit(parent['root']);must(set(memo)==set(defs),'unreachable');must(set(audits)==set(patch),'unapplied patch')
 profiles={k:[{str(sum(1<<LETTERS.index(a)for a in tag)):str(n)for tag,n in h[a].items()}for a in LETTERS]for k,h in memo.items()if not isinstance(h,int)}
 return total,dimensions[parent['root']],profiles,dimensions,audits

def certificate(c,root):
 f=json.loads((root/'FROZEN_INPUTS.json').read_text());seed=seed_state(f)
 p=root/c['parent_file'];must(hashlib.sha256(p.read_bytes()).hexdigest()==c['parent_sha256'],'parent digest');parent=json.loads(p.read_text())
 prior,dim,_,_,_=replay(parent,seed,[]);must(prior==int(c['parent_N'])==int(parent['N'])and dim==c['dimension'],'prior control')
 value,dim,profiles,dims,au=replay(parent,seed,c['augmentations'])
 must(value==int(c['N'])and dim==c['dimension']and value>prior,'result')
 lo=int(c['decimal_lower_numerator']);hi=int(c['decimal_upper_numerator']);den=int(c['decimal_denominator'])
 must(hi==lo+1 and den==10**15 and lo**dim<=value*den**dim<hi**dim,'exact bracket')
 return {'dimension':dim,'N':str(value),'profiles':profiles,'node_dimensions':dims,'augmentations':au}
