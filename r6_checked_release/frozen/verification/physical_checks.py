#!/usr/bin/env python3
"""Direct finite-set checks of masks, augmentation, and subsequent propagation.
Standard library for toy instances; --c11-six additionally uses NumPy/SciPy to
count neighbours on the literal 11^6 torus. No search code is imported.
"""
import sys,json,random,itertools,math,argparse
from pathlib import Path
from collections import Counter
sys.dont_write_bytecode=True
ROOT=Path(__file__).resolve().parents[1]
sys.path.insert(0,str(ROOT/'verification'))
import mask_replay as M
L=M.LETTERS

def check(c,msg):
 if not c:raise ValueError(msg)
def cmp(G,x,y):return all(a==b or frozenset((a,b))in G for a,b in zip(x,y))
def actual_tag(G,x,families):return sum(1<<a for a,P in enumerate(families)if any(cmp(G,x,y)for y in P))
def histogram(assigned):return [dict(Counter(row.values()))for row in assigned]
def direct_lift(G,children,tags,T):
 families=[set()for _ in L];out_tags=[{}for _ in L]
 for a in range(7):
  for word in T[L[a]]:
   for vertices in itertools.product(*(children[i][L.index(s)]for i,s in enumerate(word))):
    x=sum(vertices,());check(x not in families[a],'overlapping output blocks')
    bits=[tags[i][L.index(s)][vertices[i]]for i,s in enumerate(word)]
    tag=0
    for b in range(7):
     possible=False
     for ref in T[L[b]]:
      possible=possible or all(bits[i]&(1<<L.index(letter))for i,letter in enumerate(ref))
     if possible:tag|=1<<b
    families[a].add(x);out_tags[a][x]=tag
 return families,out_tags

def invariant(G,fam,tags):
 for a,P in enumerate(fam):
  check(all(not cmp(G,x,y)for x,y in itertools.combinations(P,2)),'physical internal conflict')
  check(P==set(tags[a]),'tag domain')
  for x in P:
   actual=actual_tag(G,x,fam);check(actual&~tags[a][x]==0,'unsound zero bit')
  for b in range(a+1,7):
   if (L[a],L[b])in M.SEP:check(all(not cmp(G,x,y)for x in P for y in fam[b]),'physical cross conflict')

def toy(seed,T):
 rng=random.Random(seed);fam=[{(2*a,),(2*a+1,)}for a in range(7)]
 # Some realizations deliberately overlap non-separated families.
 if seed%2:
  fam[1].add((0,));fam[4]=set(fam[6])
 permitted=[]
 for x,y in itertools.combinations(range(14),2):
  ok=True
  for a,P in enumerate(fam):
   for b,Q in enumerate(fam):
    if a==b or (L[a],L[b])in M.SEP:
     if (x,)in P and (y,)in Q:ok=False
  if ok:permitted.append((x,y))
 G={frozenset(e)for e in permitted if rng.random()<0.55}
 tags=[{x:actual_tag(G,x,fam)for x in P}for P in fam];h=histogram(tags);invariant(G,fam,tags)
 out,assigned=direct_lift(G,[fam,fam],[tags,tags],T);pred=M.lift([h,h],T)
 check(pred==histogram(assigned),'first lifted histograms');invariant(G,out,assigned)
 # Choose an actual safe subset, using the literal conflict graph, not masks.
 candidates=[]
 for a in range(7):
  bad=[b for b in range(7)if b==a or (L[a],L[b])in M.SEP]
  protected=set().union(*(out[b]for b in bad))
  for w in itertools.product(range(7),repeat=2):
   Q={x+y for x,y in itertools.product(fam[w[0]],fam[w[1]])}
   safe={x for x in Q if all(not cmp(G,x,y)for y in protected)}
   if safe:candidates.append((len(safe),a,''.join(L[i]for i in w),safe))
 check(candidates,'toy has no augmentation');_,a,word,safe=max(candidates,key=lambda x:(x[0],x[1],x[2]))
 spec={'node':'toy','target_family':L[a],'extension_words':[word],'avoid_letters':''.join(L[b]for b in range(7)if b==a or (L[a],L[b])in M.SEP),'mode':'KEEP_ZERO_MASKS_THEN_CONSERVATIVE_WIDENING'}
 newhist,au=M.extend([h,h],T,pred,spec);check(int(au['added_count'])==len(safe),'safe subset cardinality')
 old_tag_for_safe={x:actual_tag(G,x,out)for x in safe}
 for b in range(7):
  if b!=a and (L[a],L[b])not in M.SEP:
   assigned[b]={x:m|(1<<a)for x,m in assigned[b].items()}
 out[a]|=safe;assigned[a].update({x:m|(1<<a)for x,m in old_tag_for_safe.items()})
 check(newhist==histogram(assigned),'augmented histograms');invariant(G,out,assigned)
 final,finaltags=direct_lift(G,[out,fam],[assigned,tags],T);last=M.lift([newhist,h],T)
 check(last==histogram(finaltags),'postaugmentation propagation');invariant(G,final,finaltags)
 return {'seed':seed,'overlapping_families':bool(seed%2),'added_count':len(safe),'target':L[a],'word':word,'last_family_sizes':[len(s)for s in final]}

def information_loss():
 # Identical family sizes and complete Boolean separation information,
 # but different safe subsets and independence numbers.
 fam=[{(0,),(1,)},{(2,),(3,)}]+[set()for _ in range(5)]
 G1={frozenset((i,j))for i in (0,1)for j in (2,3)};G2={frozenset((0,2))}
 def sep_matrix(G):return [[all(not cmp(G,x,y)for x in P for y in Q)for Q in fam]for P in fam]
 def alpha(G):
  universe={(x,)for x in range(4)}
  return max(len(s)for k in range(5)for s in itertools.combinations(universe,k)if all(not cmp(G,x,y)for x,y in itertools.combinations(s,2)))
 check(sep_matrix(G1)==sep_matrix(G2),'information example separation mismatch')
 check((alpha(G1),alpha(G2))==(2,3),'information example independence')
 # Missing widening has a literal three-vertex counterexample.
 oldfam=[{(0,)},{(2,)}]+[set()for _ in range(5)];G={frozenset((1,2))}
 before=actual_tag(G,(2,),oldfam);oldfam[0].add((1,));after=actual_tag(G,(2,),oldfam)
 check(after&~before!=0,'optimistic update counterexample');check(after&~(before|1)==0,'widening repair')
 return {'same_weights_and_all_boolean_separations':True,'independence_numbers':[2,3],'optimistic_unwidened_mask_is_unsound':True,'mandatory_widening_repairs_example':True}

def c11_six(T):
 import numpy as np
 from scipy.ndimage import convolve1d
 basehist,basefam=M.base((ROOT/'FROZEN_INPUTS.json').read_bytes())
 out=[]
 for a in L:
  words=[]
  for w in T[a]:words.extend(u*1331+v for u in basefam[L.index(w[0])]for v in basefam[L.index(w[1])])
  check(len(set(words))==len(words),'6D duplicate');out.append(np.array(sorted(words),dtype=np.int64))
 masks=np.zeros(11**6,dtype=np.uint8);internal=[]
 for a,values in enumerate(out):
  counts=np.zeros(11**6,dtype=np.int32);counts[values]=1;counts=counts.reshape((11,)*6)
  for axis in range(6):counts=convolve1d(counts,np.ones(3,dtype=np.int32),axis=axis,mode='wrap')
  flat=counts.ravel();check(np.all(flat[values]==1),'6D physical independence')
  masks|=(flat>0).astype(np.uint8)*(1<<a);internal.append(int(len(values)))
 direct=[dict(Counter(map(int,masks[v])))for v in out]
 check(direct==M.lift([basehist,basehist],T),'6D exact neighborhood profile mismatch')
 return {'universe':11**6,'dimension':6,'physical_family_sizes':internal,'all_literal_neighbor_profiles_match':True,'each_family_directly_independent':True,'implementation':'separable six-axis integer convolution on the 11^6 torus'}

if __name__=='__main__':
 parser=argparse.ArgumentParser();parser.add_argument('--c11-six',action='store_true');args=parser.parse_args()
 parent=json.loads((ROOT/'parent/C11_d213.json').read_text());T=parent['tables'][parent['nodes'][1]['kind']]
 report={'status':'PASS_DIRECT_PHYSICAL_CHECKS','toy_cases':[toy(s,T)for s in range(12)],'information_loss_and_widening':information_loss()}
 if args.c11_six:report['C11_six_dimensional']=c11_six(T)
 print(json.dumps(report,indent=2,sort_keys=True))
