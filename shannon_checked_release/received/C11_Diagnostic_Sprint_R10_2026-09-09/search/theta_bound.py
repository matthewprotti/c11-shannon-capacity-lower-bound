import json,sys,time,math,itertools
from pathlib import Path
import numpy as np
from fractions import Fraction
W=Path(__file__).parent;F=json.loads((W/'factor_lp.json').read_text())

def barrier(weights,edges):
 n=len(weights);m=1+len(edges);s=np.sqrt(weights);S=np.outer(s,s)
 A=np.zeros((m,n,n));A[0]=np.eye(n)
 for k,(i,j) in enumerate(edges,1):A[k,i,j]=A[k,j,i]=1.
 x=np.zeros(m);x[0]=2*sum(weights)
 def M(x):return np.einsum('i,ijk->jk',x,A)-S
 for mu in [1.,.3,.1,.03,.01,.003,.001,.0003,.0001,.00003,.00001,.000003,.000001,.0000003,.0000001,.00000003,.00000001,.000000003,.000000001,.0000000003,.0000000001]:
  for it in range(80):
   K=M(x);eig=np.linalg.eigvalsh(K)
   if eig[0]<=0:raise ValueError(('not pd',eig[0]))
   inv=np.linalg.inv(K);B=np.einsum('ij,kjl->kil',inv,A)
   grad=-mu*np.einsum('kii->k',B);grad[0]+=1
   Hess=mu*np.einsum('kij,lji->kl',B,B)
   dx=np.linalg.solve(Hess,-grad);dec=-np.dot(grad,dx)
   if dec<1e-16:break
   f=x[0]-mu*np.linalg.slogdet(K)[1]
   step=1.
   for st in range(70):
    xx=x+step*dx;KK=M(xx)
    if np.linalg.eigvalsh(KK)[0]>0 and xx[0]-mu*np.linalg.slogdet(KK)[1]<f-0.01*step*dec:
     x=xx;break
    step*=.5
   else:break
  print('mu',mu,'t',x[0],'min',np.linalg.eigvalsh(M(x))[0],flush=True)
 return x
out=[]
for f in F:
 opts=f['options'];edges=[tuple(opts.index(i)for i in q)for q in f['cliques']if len(q)==2];w=[int(n)for n in f['weights']];scale=max(w);weights=np.array([n/scale for n in w]);print('FACTOR',f['child'],flush=True);t0=time.time()
 x=barrier(weights,edges)
 print('SOL',f['child'],x[0],'root',math.exp((math.log(x[0])+math.log(scale))/f['dimension']),time.time()-t0,flush=True)
 out.append(dict(**f,theta_t=float(x[0]),theta_edges=edges,theta_y=x[1:].tolist()))
 (W/'theta_float.json').write_text(json.dumps(out,indent=2))
Ulog=sum(math.log(x['theta_t'])+math.log(int(x['scale']))for x in out)
print('UPPER',math.exp(Ulog/213))
