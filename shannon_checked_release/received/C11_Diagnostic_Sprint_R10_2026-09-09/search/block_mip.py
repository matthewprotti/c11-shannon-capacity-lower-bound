import pickle,json,time,math,itertools,sys,random,warnings
from pathlib import Path
import numpy as np,networkx as nx
from scipy.optimize import milp,Bounds,LinearConstraint
from scipy.sparse import coo_matrix,vstack,csr_matrix
warnings.filterwarnings('ignore',message='Unrecognized options detected')
Wdir=Path(__file__).parent;data=pickle.load(open(Wdir/'universe.pkl','rb'));U=data['U'];Ws=data['W'];CF=data['cf'];chosen=data['chosen'];N=data['N'];orig=N;n=len(U)
R=Wdir/'C11_Typed_Cell_R9_2026-09-08';sys.path.insert(0,str(R/'source'));import verify_literal as v
rng=random.Random(20260909);allbits=(1<<n)-1;start=time.time();trace=[];cpu0=time.process_time()
opts=[list(o)for o in data['opts']];order=sorted(range(n),key=lambda i:Ws[i],reverse=True)
def elems(b):
 while b:
  z=b&-b;yield z.bit_length()-1;b-=z

def solve_kernel(remove,tag,tlimit=10):
 global chosen,N
 frozen=chosen^remove
 allowed=[i for i in range(n)if not CF[i]&frozen];freebits=sum(1<<i for i in allowed)
 if len(allowed)>4000 or len(allowed)<3:return {'tag':tag,'allowed':len(allowed),'skipped':True}
 iid={i:j for j,i in enumerate(allowed)};G=nx.Graph();G.add_nodes_from(range(len(allowed)))
 for i in allowed:
  for j in elems(CF[i]&freebits):
   if j<i:G.add_edge(iid[i],iid[j])
 cc=list(nx.find_cliques(G));rr=[];cols=[]
 for j,q in enumerate(cc):
  for i in q:rr.append(j);cols.append(i)
 mat=coo_matrix((np.ones(len(rr)),(rr,cols)),shape=(len(cc),len(allowed))).tocsr();mx=max(Ws[i]for i in allowed)
 obj=np.array([round(Ws[i]/mx*1e8)for i in allowed],dtype=float)
 oldobj=sum(obj[iid[i]]for i in elems(remove));mat=vstack([mat,csr_matrix(obj.reshape(1,-1))]).tocsr()
 lo=np.r_[np.full(len(cc),-np.inf),oldobj];hi=np.r_[np.ones(len(cc)),np.inf];t=time.time()
 res=milp(-obj,integrality=np.ones(len(allowed)),bounds=Bounds(np.zeros(len(allowed)),np.ones(len(allowed))),constraints=LinearConstraint(mat,lo,hi),options={'time_limit':tlimit,'mip_rel_gap':1e-8,'threads':1})
 rec={'tag':tag,'allowed':len(allowed),'old_chosen':remove.bit_count(),'cliques':len(cc),'status':res.message,'solver_seconds':time.time()-t,'accepted':False}
 if res.x is not None:
  C=[allowed[i]for i,x in enumerate(res.x)if x>.5];B=sum(1<<i for i in C)
  if any(CF[i]&(B|frozen)!=(1<<i)for i in C):raise ValueError('invalid kernel')
  gain=sum(Ws[i]for i in C)-sum(Ws[i]for i in elems(remove));rec['gain']=str(gain)
  if gain>0:
   old=chosen;chosen=frozen|B;N+=gain;rec['accepted']=True;rec['removed']=list(elems(old&~chosen));rec['added']=list(elems(chosen&~old))
   # Restore free nonconflicting low-weight cells only; no pair/single replacement search.
   for i in order:
    if not CF[i]&chosen:chosen|=1<<i;N+=Ws[i]
 rec['N']=str(N);rec['root']=math.exp(math.log(N)/213)
 return rec

regions=[]
# Each two-family slice includes every mask of those two families in that coordinate.
for k in range(4):
 families=sorted(set(v.TYPES[t][0]for t in opts[k]))
 for aa in itertools.combinations(families,2):regions.append((k,aa))
rng.shuffle(regions)
for step,(k,fams)in enumerate(regions[:45]):
 remove=sum(1<<i for i in elems(chosen)if v.TYPES[U[i][k]][0]in fams)
 rec=solve_kernel(remove,{'coordinate':k,'families':[v.L[a]for a in fams]},12.)
 trace.append(rec);print('BLOCK',step,rec.get('allowed'),rec.get('old_chosen'),rec.get('accepted'),rec.get('root'),rec.get('solver_seconds'),flush=True)
 (Wdir/'block_mip_result.json').write_text(json.dumps({'schema':'BLOCK_MIP_EXPERIMENT_V1','random_seed':20260909,'cpu_seconds':time.process_time()-cpu0,'elapsed':time.time()-start,'trace':trace,'N':str(N),'selected':list(elems(chosen))},indent=2))
 if time.time()-start>660:break
print('FINAL',math.exp(math.log(N)/213),'gain ratio',(N-orig)/orig,'cpu',time.process_time()-cpu0,flush=True)
