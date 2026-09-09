import pickle,json,time,math,itertools,sys
from pathlib import Path
import numpy as np
from scipy.optimize import milp,Bounds,LinearConstraint
from scipy.sparse import coo_matrix,vstack,csr_matrix
Wdir=Path(__file__).parent;data=pickle.load(open(Wdir/'universe.pkl','rb'));U=data['U'];Ws=data['W'];chosen=data['chosen'];N=data['N'];mx=max(Ws);eps=1e-5
sel=[i for i,w in enumerate(Ws)if w/mx>=eps];di={i:j for j,i in enumerate(sel)};ui={u:i for i,u in enumerate(U)}
F=json.loads((Wdir/'factor_lp.json').read_text());rows=set()
for qq in itertools.product(*(f['cliques']for f in F)):
 row=tuple(sorted(di[k]for word in itertools.product(*qq)if (k:=ui[word])in di))
 if len(row)>1:rows.add(row)
rows=list(sorted(rows));ir=[];jc=[]
for i,r in enumerate(rows):
 for j in r:ir.append(i);jc.append(j)
a=coo_matrix((np.ones(len(ir)),(ir,jc)),shape=(len(rows),len(sel))).tocsr();obj=np.array([round(Ws[i]/mx*1e7)for i in sel],dtype=float)
bound=sum(obj[j]for j,i in enumerate(sel)if chosen>>i&1);a=vstack([a,csr_matrix(obj.reshape(1,-1))]).tocsr()
lo=np.concatenate([np.full(len(rows),-np.inf),[bound]]);hi=np.concatenate([np.ones(len(rows)),[np.inf]])
print('GLOBAL_MIP',len(sel),len(rows),a.nnz,'lower',bound,flush=True);start=time.time()
r=milp(-obj,integrality=np.ones(len(sel)),bounds=Bounds(np.zeros(len(sel)),np.ones(len(sel))),constraints=LinearConstraint(a,lo,hi),options={'time_limit':180.,'mip_rel_gap':0.00002,'threads':1,'disp':True})
print('DONE',r.message,'secs',time.time()-start, 'fun',r.fun,flush=True)
report={'nvars':len(sel),'ncliques':len(rows),'tail_threshold':eps,'message':r.message,'elapsed':time.time()-start,'solver_objective':None if r.fun is None else float(r.fun)}
if r.x is not None:
 C=[sel[j]for j,x in enumerate(r.x)if x>.5];bits=sum(1<<i for i in C)
 for i in C:
  if data['cf'][i]&bits!=(1<<i):raise ValueError('MIP invalid conflict')
 for i in sorted(range(len(U)),key=lambda i:Ws[i],reverse=True):
  if not data['cf'][i]&bits:bits|=1<<i
 newN=sum(w for i,w in enumerate(Ws)if bits>>i&1)
 report.update(N=str(newN),root_approx=math.exp(math.log(newN)/213),improves=newN>N,selected=[i for i in range(len(U))if bits>>i&1])
(Wdir/'global_mip_result.json').write_text(json.dumps(report,indent=2));print('RESULT',report.get('root_approx'),report.get('improves'),flush=True)
