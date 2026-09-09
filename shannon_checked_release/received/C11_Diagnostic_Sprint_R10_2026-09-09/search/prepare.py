import sys,json,itertools,math,pickle,time
from pathlib import Path
W=Path(__file__).parent; R=W/'C11_Typed_Cell_R9_2026-09-08';sys.path.insert(0,str(R/'source'));import verify_literal as v
c=json.loads((R/'certificates/C11_R9_d213.json').read_text());h0,_=v.base((R/'inputs/FROZEN_INPUTS.json').read_bytes());N,d,H,D,_=v.evaluate(c,h0)
kids=c['nodes'][-1]['children'];opts=[{i:n for i,n in enumerate(H[k])if n}for k in kids];U=list(itertools.product(*(list(o)for o in opts)));Ws=[math.prod(opts[k][i]for k,i in enumerate(u))for u in U];ids={u:i for i,u in enumerate(U)}
posts=[[0]*58 for k in kids]
for j,u in enumerate(U):
 for k,a in enumerate(u):posts[k][a]|=1<<j
bad=[[sum(posts[k][b]for b in range(58)if not v.REL[a][b])for a in range(58)]for k in range(4)]
cf=[]
for u in U:
 bits=(1<<len(U))-1
 for k,a in enumerate(u):bits&=bad[k][a]
 cf.append(bits)
chosen=sum(1<<ids[tuple(u)]for u in c['tables'][c['root']]['rows'])
mx=max(Ws)
for eps in [1e-2,1e-3,1e-4,1e-5,1e-6,1e-7,1e-8]:
 sel=[i for i,w in enumerate(Ws)if w>=mx*eps];tail=sum(w for w in Ws if w<mx*eps);print('eps',eps,'n',len(sel),'all tail/N',tail/N,'selected',sum(bool(chosen>>i&1)for i in sel),flush=True)
print('mean_degree',sum(b.bit_count()-1 for b in cf)/len(U),'largest_weight/N',max(Ws)/N,'weightsum/N',sum(Ws)/N,flush=True)
with open(W/'universe.pkl','wb')as f:pickle.dump(dict(U=U,W=Ws,cf=cf,chosen=chosen,N=N,kids=kids,opts=opts),f)
