"""Realization-specific pairwise conflict matrices; no profile-mask propagation."""
from pathlib import Path
import sys,json,itertools,math,pickle,time
W=Path(__file__).parent;R=W/'C11_Typed_Cell_R9_2026-09-08';sys.path.insert(0,str(R/'source'));import verify_literal as vl
c=json.loads((R/'certificates/C11_R9_d213.json').read_text());f=json.loads((R/'inputs/FROZEN_INPUTS.json').read_text())
I=set(f['I']);X=set(f['X']);P={p for p,q in f['pairs']};Q={q for p,q in f['pairs']}
def conf(u,v):return all(((u//s-v//s)%11)in (0,1,10)for s in [1,11,121]) # NB modulo separately implicit subtraction // forms equivalently for mod 11.
A={x for x in X if any(conf(x,p)for p in P)};D={x for x in X if any(conf(x,q)for q in Q)};fam=[I-P,X-A-D,A,D,P,Q,P]
sets=[[]for _ in vl.TYPES]
for a,S in enumerate(fam):
 for x in S:
  m=sum(1<<b for b,T in enumerate(fam)if any(conf(x,y)for y in T));sets[vl.IDS[(a,m)]].append(x)
C0=[[any(conf(x,y)for x in S for y in T)for T in sets]for S in sets]
h0=[len(S)for S in sets];N,d,H,Dims,_=vl.evaluate(c,h0);C={};reports=[];start=time.time()
for node in c['nodes'][:-1]:
 k=node['name'];
 if node['kind']=='base':C[k]=C0
 else:
  rows=c['tables'][node['kind']]['rows'];kids=node['children'];q=len(kids);UU=sorted(set(tuple(w)for row in rows for w in row));ix={w:j for j,w in enumerate(UU)};posts=[[0]*58 for _ in kids]
  for j,w in enumerate(UU):
   for i,a in enumerate(w):posts[i][a]|=1<<j
  bad=[[sum(posts[i][b]for b in range(58)if C[kids[i]][a][b])for a in range(58)]for i in range(q)];rb=[sum(1<<ix[tuple(w)]for w in row)for row in rows]
  row_neigh=[]
  for row in rows:
   neighbors=0
   for w in row:
    mask=(1<<len(UU))-1
    for i,a in enumerate(w):mask&=bad[i][a]
    neighbors|=mask
   row_neigh.append(neighbors)
  C[k]=[[bool(nb&b)for b in rb]for nb in row_neigh]
 opts=[i for i,n in enumerate(H[k])if n];extra=[(i,j)for i,j in itertools.combinations(opts,2)if not vl.REL[i][j]and not C[k][i][j]]
 if any(C[k][i][j]and vl.REL[i][j]for i in opts for j in opts):raise ValueError('baseline wrong')
 reports.append({'node':k,'active':len(opts),'extra_separations':extra,'unique_conflict_edges':sum(C[k][i][j]for i,j in itertools.combinations(opts,2))})
 print(k,'extra',extra,flush=True)
kids=c['nodes'][-1]['children'];U0=pickle.load(open(W/'universe.pkl','rb'));U=U0['U'];n=len(U);posts=[[0]*58 for _ in kids]
for j,w in enumerate(U):
 for i,a in enumerate(w):posts[i][a]|=1<<j
bad=[[sum(posts[i][b]for b in range(58)if C[kids[i]][a][b])for a in range(58)]for i in range(4)]
cf=[]
for w in U:
 mask=(1<<n)-1
 for i,a in enumerate(w):mask&=bad[i][a]
 cf.append(mask)
old=U0['cf'];print('changed_terminal_conflicts',sum((a^b).bit_count()for a,b in zip(old,cf))//2,flush=True)
U0['cf']=cf;U0['realized_relations']=True
pickle.dump(U0,open(W/'universe_exact.pkl','wb'))
(W/'exact_relations_report.json').write_text(json.dumps({'nodes':reports,'terminal_extra_separated_pairs':sum((a^b).bit_count()for a,b in zip(old,cf))//2,'elapsed':time.time()-start,'base_typed_sets':sets,'node_conflict_matrices':C},indent=2))
