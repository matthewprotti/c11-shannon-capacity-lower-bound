import sys,json,itertools,math,networkx as nx,numpy as np,time
from pathlib import Path
from scipy.optimize import linprog
W=Path(__file__).parent; R=W/'C11_Typed_Cell_R9_2026-09-08';sys.path.insert(0,str(R/'source'))
import verify_literal as v
c=json.loads((R/'certificates/C11_R9_d213.json').read_text());h0,_=v.base((R/'inputs/FROZEN_INPUTS.json').read_bytes());N,d,H,D,_=v.evaluate(c,h0)
kids=c['nodes'][-1]['children']; print('kids',[(k,D[k],sum(z>0 for z in H[k]))for k in kids])
fac=[]
for k in kids:
 opts=[i for i,n in enumerate(H[k])if n];G=nx.Graph();G.add_nodes_from(opts);G.add_edges_from((i,j)for i,j in itertools.combinations(opts,2)if not v.REL[i][j]);cliques=list(nx.find_cliques(G));a=np.array([[int(i in q)for i in opts]for q in cliques]);w=[H[k][i]for i in opts];scale=max(w)
 lp=linprog(-np.array([n/scale for n in w]),A_ub=a,b_ub=np.ones(len(cliques)),bounds=(0,None),method='highs')
 print(k,'cliques',len(cliques),[len(q)for q in cliques],'weights',[(v.L[v.TYPES[i][0]],v.TYPES[i][1],float(H[k][i]/scale))for i in opts]);print('LP',-lp.fun,'root upper',math.exp((math.log(-lp.fun)+math.log(scale))/D[k]),'x',lp.x,'dual',-lp.ineqlin.marginals)
 fac.append(dict(child=k,dimension=D[k],options=opts,weights=list(map(str,w)),cliques=cliques,x=lp.x.tolist(),dual=(-lp.ineqlin.marginals).tolist(),scale=str(scale),lp_scaled=-lp.fun))
U=math.prod(f['lp_scaled']for f in fac)*math.prod(int(f['scale'])for f in fac)
print('BASELINE',math.exp(math.log(N)/d),'FACTOR_COVER',math.exp(math.log(U)/d),'ratio',U/N)
(W/'factor_lp.json').write_text(json.dumps(fac,indent=2))
