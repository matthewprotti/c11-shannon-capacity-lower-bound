import pickle,json,time,math,itertools,sys,random,warnings
from pathlib import Path
import numpy as np,networkx as nx
from scipy.optimize import milp,Bounds,LinearConstraint
from scipy.optimize._highspy._core import _Highs,HighsLp,HighsSolution,HighsVarType,MatrixFormat
from types import SimpleNamespace
from scipy.sparse import coo_matrix,vstack,csr_matrix
warnings.filterwarnings('ignore',message='Unrecognized options detected')
Wdir=Path(__file__).parent;data=pickle.load(open(Wdir/'universe.pkl','rb'));U=data['U'];Ws=data['W'];CF=data['cf'];chosen=data['chosen'];N=data['N'];orig=N;n=len(U)
R=Wdir/'C11_Typed_Cell_R9_2026-09-08';sys.path.insert(0,str(R/'source'));import verify_literal as v
previous=json.loads((Wdir/'block_mip_result.json').read_text()); chosen=sum(1<<i for i in previous['selected']); N=int(previous['N'])
rng=random.Random(20260910);allbits=(1<<n)-1;start=time.time();trace=[];cpu0=time.process_time()
opts=[list(o)for o in data['opts']];order=sorted(range(n),key=lambda i:Ws[i],reverse=True)
def elems(b):
 while b:
  z=b&-b;yield z.bit_length()-1;b-=z

def solve_kernel(remove,tag,tlimit=10):
 global chosen,N
 frozen=chosen^remove
 allowed=[i for i in range(n)if not CF[i]&frozen];freebits=sum(1<<i for i in allowed)
 if len(allowed)>11000 or len(allowed)<3:return {'tag':tag,'allowed':len(allowed),'skipped':True}
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
 h=_Highs(); h.setOptionValue('output_flag',False);h.setOptionValue('threads',1);h.setOptionValue('time_limit',float(tlimit));h.setOptionValue('mip_rel_gap',1e-8);h.setOptionValue('random_seed',20260909)
 lp=HighsLp();lp.num_col_=len(allowed);lp.num_row_=len(cc);lp.col_cost_=-obj;lp.col_lower_=np.zeros(len(allowed));lp.col_upper_=np.ones(len(allowed));lp.row_lower_=np.full(len(cc),-np.inf);lp.row_upper_=np.ones(len(cc));lp.integrality_=[HighsVarType.kInteger]*len(allowed)
 amat=mat[:-1].tocsr();lp.a_matrix_.format_=MatrixFormat.kRowwise;lp.a_matrix_.num_col_=len(allowed);lp.a_matrix_.num_row_=len(cc);lp.a_matrix_.start_=amat.indptr;lp.a_matrix_.index_=amat.indices;lp.a_matrix_.value_=amat.data
 h.passModel(lp); sol=HighsSolution();sol.col_value=np.array([float(bool(remove>>i&1))for i in allowed]);sol.value_valid=True;h.setSolution(sol);h.run();sol=h.getSolution()
 res=SimpleNamespace(x=np.array(sol.col_value)if sol.value_valid else None,message=str(h.getModelStatus()))
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
for step,(k,fams)in enumerate(regions[:20]):
 remove=sum(1<<i for i in elems(chosen)if v.TYPES[U[i][k]][0]in fams)
 rec=solve_kernel(remove,{'coordinate':k,'families':[v.L[a]for a in fams]},15.)
 trace.append(rec);print('BLOCK',step,rec.get('allowed'),rec.get('old_chosen'),rec.get('accepted'),rec.get('root'),rec.get('solver_seconds'),flush=True)
 (Wdir/'block_mip_warm_result.json').write_text(json.dumps({'schema':'BLOCK_MIP_EXPERIMENT_V1','random_seed':20260910,'cpu_seconds':time.process_time()-cpu0,'elapsed':time.time()-start,'trace':trace,'N':str(N),'selected':list(elems(chosen))},indent=2))
 if time.time()-start>380:break
print('FINAL',math.exp(math.log(N)/213),'gain ratio',(N-orig)/orig,'cpu',time.process_time()-cpu0,flush=True)
