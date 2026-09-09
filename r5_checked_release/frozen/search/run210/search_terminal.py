import os
os.environ['OPENBLAS_NUM_THREADS']='1'
from common import *
import numpy as np,time,sys
from scipy.optimize import milp, Bounds,LinearConstraint
from scipy.sparse import csc_matrix
c=json.loads(Path(sys.argv[1]).read_text()); ns=c['nodes'];tabs=c['tables']; vs,ds=profile_eval(ns,tabs)
t=root=ns[-1];kid=[vs[k] for k in t['children']];q=len(kid);letters='BNADHV';words=[''.join(w) for w in itertools.product(letters,repeat=q)];idx={w:i for i,w in enumerate(words)}
confedges=[(a,b) for a,b in itertools.combinations(letters,2)if (a,b) not in SEP]
ri=[];ci=[]
for row,clique in enumerate(itertools.product(confedges,repeat=q)):
 for w in itertools.product(*clique):ri.append(row);ci.append(idx[''.join(w)])
mat=csc_matrix((np.ones(len(ri)),(ri,ci)),shape=(row+1,len(words)))
ex=[math.prod(w[IDX[a]]for w,a in zip(kid,s)) for s in words];mx=max(ex);cost=-np.array([x/mx for x in ex]);old=vs[root['name']];d=ds[root['name']]
START=time.monotonic();print('START',len(words),'cliques',mat.shape,'old',root_value(old,d),flush=True)
res=milp(cost,integrality=np.ones(len(words)),bounds=Bounds(0,1),constraints=LinearConstraint(mat,-np.inf,1),options={'time_limit':float(sys.argv[2])if len(sys.argv)>2 else 60,'mip_rel_gap':1e-10})
print('FINISHED',res.message,'secs',time.monotonic()-START,'gap',getattr(res,'mip_gap',None),flush=True)
if res.x is not None:
 chosen=[w for w,x in zip(words,res.x)if x>0.5];assert admissible(chosen)
 new=sum(ex[i]for i,x in enumerate(res.x)if x>0.5)
 print('CODE',chosen,'root',root_value(new,d),'improved',new>old,flush=True)
 if new>old:
  tabname='terminal_search';tabs[tabname]=chosen;ns[-1]['kind']=tabname
  save_certificate(ROOT/f'terminal_d{d}.json',ns,tabs,meta={'heuristic_solver_status':res.message,'reported_float_mip_gap':getattr(res,'mip_gap',None),'elapsed':time.monotonic()-START,'parent':sys.argv[1]})
