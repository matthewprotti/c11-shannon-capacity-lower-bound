#!/usr/bin/env python3
"""Independent check of actual C13 torus neighborhoods and literal typed tables.
Imports no profile propagation, extension, search, or compiler implementation.
"""
from __future__ import annotations
from collections import Counter
from itertools import product,combinations
import math,json
L='BNADOHV';PAIRS=('BO','BH','BV','NA','ND','NO','NH','NV','AD','AH','DV')
SEPARATE={frozenset(x)for x in PAIRS}
TYPES=[(a,m)for a in range(7)for m in range(128)if m&(1<<a)and all(not(m&(1<<b))for b in range(7)if frozenset((L[a],L[b]))in SEPARATE)]
INDEX={v:i for i,v in enumerate(TYPES)}
def need(ok,message):
 if not ok:raise ValueError(message)
def type_relation(i,j):
 a,m=TYPES[i];b,n=TYPES[j]
 return(a==b and m!=n)or not(m&(1<<b))or not(n&(1<<a))
REL=[[type_relation(i,j)for j in range(58)]for i in range(58)]
def word_apart(u,v):return any(REL[a][b]for a,b in zip(u,v))

def direct_base(f):
 need(f['cycle_order']==13 and f['base_dimension']==6,'physical graph identity')
 A=f['syndrome_matrix'];need(A==[[11,1,0,0,0,0],[0,0,2,1,0,0],[0,0,0,0,1,0],[12,0,0,0,0,1]],'syndrome matrix')
 need(f['kernel_generators']==[[1,2,0,0,0,1],[0,0,1,11,0,0]],'kernel generators')
 def code(t):return((t[0]*13+t[1])*13+t[2])*13+t[3]
 def syndrome(v):return code([sum(a*x for a,x in zip(row,v))%13 for row in A])
 all_cosets=set().union(*(f[k]for k in('S','SX','SP','SA')));close={}
 offsets=list(product((12,0,1),repeat=6))
 # One actual torus representative per used orbit, enumerating all 729 actual
 # neighboring vertices (multiplicity retained). Translation invariance then
 # supplies the other 168 members of that orbit, as proved in PROOF.md.
 for s in sorted(all_cosets):
  a,b,c,d=(s//13**j%13 for j in(3,2,1,0));representative=(0,a,0,b,c,d)
  need(syndrome(representative)==s,'representative')
  close[s]=Counter(syndrome(tuple((x+e)%13 for x,e in zip(representative,off)))for off in offsets)
 # Check the advertised fibre bijection on all used cosets and all free coordinates.
 generated=set()
 for s in sorted(all_cosets):
  b,d,e,g=(s//13**j%13 for j in(3,2,1,0));fibre=set()
  for a,c in product(range(13),repeat=2):
   word=(a,(b+2*a)%13,c,(d+11*c)%13,e,(g+a)%13)
   need(syndrome(word)==s,'fibre syndrome');fibre.add(word)
  need(len(fibre)==169 and not fibre&generated,'fibre cardinality/disjointness');generated|=fibre
 S,X,P,Q=(set(f[k])for k in('S','SX','SP','SA'))
 need(len(S)==len(f['S'])==370 and len(X)==len(f['SX'])==370 and len(P)==len(Q)==6,'physical seed sizes')
 F0={s for s in X if any(close[s][t]for t in P)};F1={s for s in X if any(close[s][t]for t in Q)}
 need(F0==set(f['SF0'])and F1==set(f['SF1'])and not F0&F1,'physical footprints')
 fam=[S-P,X-F0-F1,F0,F1,P,Q,P];typed=[set()for _ in TYPES]
 for a,F in enumerate(fam):
  for s in F:
   need(sum(close[s][t]for t in F)==1,'physical independence')
   mask=sum(1<<b for b,U in enumerate(fam)if any(close[s][t]for t in U))
   need((a,mask)in INDEX,'physical normalized type');typed[INDEX[(a,mask)]].add(s)
 checks=0
 for i,Fi in enumerate(typed):
  for j,Fj in enumerate(typed):
   if i<j and REL[i][j]:
    for s in Fi:
     for t in Fj:need(not close[s][t],'physical typed separation');checks+=1
 weights=[169*len(F)for F in typed]
 return weights,{'physical_representatives':len(all_cosets),'actual_offset_neighborhood_checks':len(all_cosets)*729,'explicit_fibre_vertices':len(generated),'typed_separation_coset_pairs':checks,'base_cosets_by_type':[sorted(F)for F in typed],'base_weights':list(map(str,weights))}

def table(t):
 need(set(t)=={'kind','rows'}and t['kind']in('substitution','terminal'),'literal table fields')
 is_terminal=t['kind']=='terminal';rows=[t['rows']]if is_terminal else t['rows'];need(is_terminal or len(rows)==58,'literal output row count')
 words=[w for r in rows for w in r];need(words,'empty table');q=len(words[0]);need(q in(2,3),'literal arity')
 within=cross=0
 for row in rows:
  need(all(type(w)is list and len(w)==q and all(type(a)is int and 0<=a<58 for a in w)for w in row),'literal word format')
  need(len(set(map(tuple,row)))==len(row),'literal duplicate')
  for u,v in combinations(row,2):need(word_apart(u,v),'literal internal conflict');within+=1
 if not is_terminal:
  for i,row in enumerate(rows):
   for j in range(i):
    if REL[i][j]:
     for u in row:
      for v in rows[j]:need(word_apart(u,v),'literal cross conflict');cross+=1
 return q,{'internal_pairs':within,'cross_pairs':cross,'tagged_words':len(words),'arity':q}

def replay(c,f):
 need(c['schema']=='C13_TYPED_58_R8_V1'and c['graph']=='SimpleGraph.cycleGraph 13'and type(c['base_dimension'])is int and c['base_dimension']==6,'literal identity')
 need(c['letters']==[{'family':L[a],'mask':m}for a,m in TYPES],'literal alphabet')
 weight0,base=direct_base(f);check={k:table(t)for k,t in c['tables'].items()};definitions={};memo={};dimensions={};active=set();used=set()
 for nd in c['nodes']:need(nd['name']not in definitions,'repeated node definition');definitions[nd['name']]=nd
 def visit(name):
  if name in memo:return memo[name]
  need(name in definitions and name not in active,'cycle or absent child');active.add(name);nd=definitions[name]
  if nd['kind']=='base':need(set(nd)=={'name','kind'},'base fields');w=weight0;dim=6
  else:
   need(set(nd)=={'name','kind','children'}and nd['kind']in check,'node fields');nameT=nd['kind'];T=c['tables'][nameT];children=[visit(ch)for ch in nd['children']];used.add(nameT)
   need(len(children)==check[nameT][0]and all(type(w)is list for w in children),'typed child types')
   dim=sum(dimensions[ch]for ch in nd['children']);rows=[T['rows']]if T['kind']=='terminal'else T['rows']
   out=[sum(math.prod(child[a]for child,a in zip(children,word))for word in row)for row in rows];w=out[0]if T['kind']=='terminal'else out
  active.remove(name);memo[name]=w;dimensions[name]=dim;return w
 N=visit(c['root']);need(set(memo)==set(definitions)and used==set(c['tables']),'unused node or table')
 need(type(N)is int and str(N)==c['N']and dimensions[c['root']]==c['dimension']==522,'literal cardinality/dimension')
 h={k:[{str(m):str(w[i])for i,(a0,m)in enumerate(TYPES)if a0==a and w[i]}for a in range(7)]for k,w in memo.items()if type(w)is list}
 return N,dimensions[c['root']],h,{'base':base,'tables':{k:v[1]for k,v in check.items()},'node_dimensions':dimensions,'sum_internal_pairs':sum(v[1]['internal_pairs']for v in check.values()),'sum_cross_pairs':sum(v[1]['cross_pairs']for v in check.values())}
