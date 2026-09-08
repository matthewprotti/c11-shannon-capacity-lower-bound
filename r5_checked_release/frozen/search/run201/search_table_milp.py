import os
os.environ['OPENBLAS_NUM_THREADS']='1'
from common import *
import numpy as np,time,sys
from scipy.optimize import milp,Bounds,LinearConstraint
from scipy.sparse import csc_matrix
import networkx as nx
inp=Path(sys.argv[1]);origin=sys.argv[2];timelimit=float(sys.argv[3])if len(sys.argv)>3 else 90.
c=json.loads(inp.read_text());ns=c['nodes'];tabs=c['tables'];vals,ds=profile_eval(ns,tabs)
# Restrict this experiment to a node with only one occurrence in the output tree.
nd={n['name']:n for n in ns};occur={k:0 for k in nd}
def counts(k):
 occur[k]+=1
 for kid in nd[k].get('children',[]):counts(kid)
counts(c['root']);assert occur[origin]==1
# Reverse-mode derivatives, valid for changing this single occurrence's output.
grad={c['root']:None}
for n in reversed(ns):
 name=n['name']
 if name not in grad or n['kind']=='base':continue
 t=tabs[n['kind']];kids=n['children'];gs=[[0]*7 for _ in kids]
 sets=[(1,t)] if isinstance(t,list) else [(grad[name][IDX[a]],t[a])for a in ABC]
 for up,words in sets:
  for word in words:
   for j,a in enumerate(word):gs[j][IDX[a]]+=up*math.prod(vals[k][IDX[b]]for ii,(k,b)in enumerate(zip(kids,word))if ii!=j)
 for k,g in zip(kids,gs):
  if k in grad:grad[k]=[a+b for a,b in zip(grad[k],g)]
  else:grad[k]=g
node=nd[origin];kids=[vals[k]for k in node['children']];q=len(kids)
letters='BNADHV';words=[''.join(w) for w in itertools.product(letters,repeat=q)];idx={(a,w):i for i,(a,w)in enumerate(itertools.product(letters,words))}
confedges=[(a,b)for a,b in itertools.combinations(letters,2)if (a,b)not in SEP]
outG=nx.Graph();outG.add_nodes_from(letters);outG.add_edges_from((a,b)for a,b in itertools.combinations(letters,2)if (a,b)in SEP)
outcliques=list(nx.find_cliques(outG));ri=[];ci=[];row=0
for oo in outcliques:
 for cl in itertools.product(confedges,repeat=q):
  for o in oo:
   for word in itertools.product(*cl):ri.append(row);ci.append(idx[o,''.join(word)])
  row+=1
mat=csc_matrix((np.ones(len(ri)),(ri,ci)),shape=(row,len(idx)))
ex=[grad[origin][IDX[a]]*math.prod(w[IDX[b]] for w,b in zip(kids,s))for a,s in idx];mx=max(ex);cost=-np.array([v/mx for v in ex])
old=vals[c['root']];oldpart=sum(ex[idx[a,s]]for a in letters for s in tabs[node['kind']][a]);d=ds[c['root']]
# incumbent objective cutoff, scaled. A non-strict bound admits the positive control.
mat2=csc_matrix(np.vstack([])) if False else None
from scipy.sparse import vstack
mat=vstack([mat,csc_matrix((-cost).reshape(1,-1))],format='csc')
lb=np.r_[np.full(row,-np.inf),oldpart/mx-1e-9];ub=np.r_[np.ones(row),np.inf]
START=time.monotonic();print('START',origin,'n',len(idx),'cliques',mat.shape,'oldroot',root_value(old,d),'oldobjective',oldpart/mx,flush=True)
res=milp(cost,integrality=np.ones(len(idx)),bounds=Bounds(0,1),constraints=LinearConstraint(mat,lb,ub),options={'time_limit':timelimit,'mip_rel_gap':1e-11})
print('END',res.message,'seconds',time.monotonic()-START,'gap',getattr(res,'mip_gap',None),flush=True)
if res.x is not None:
 tab={a:[] for a in ABC}
 for (a,w),x in zip(idx,res.x):
  if x>0.5:tab[a].append(w)
 assert admissible(tab)
 newpart=sum(ex[idx[a,w]]for a in letters for w in tab[a]);print('DELTA',newpart-oldpart,'ROOT',root_value(old+newpart-oldpart,d),flush=True)
 if newpart>oldpart:
  key='milp_'+origin;tabs[key]=tab;node['kind']=key
  save_certificate(ROOT/f'milp_{origin}_d{d}.json',ns,tabs,meta={'parent':inp.name,'node':origin,'solver_message':res.message,'floating_gap':getattr(res,'mip_gap',None),'elapsed':time.monotonic()-START})
