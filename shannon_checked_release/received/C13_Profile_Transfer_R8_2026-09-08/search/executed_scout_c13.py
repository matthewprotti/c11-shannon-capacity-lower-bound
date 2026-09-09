from __future__ import annotations
import sys,json,itertools,math,time
from pathlib import Path
from collections import Counter
R=Path('/mnt/data/r8_work');r6=R/'r6/C11_Avoidance_Profile_R6_2026-09-08'
sys.dont_write_bytecode=True
sys.path.insert(0,str(r6/'verification'))
import mask_replay as ap
from input_c13 import S,SX,SP,SA,SF0,SF1,pairRep,M
L=ap.LETTERS

def digits(n,q):return tuple(n//13**i%13 for i in reversed(range(q)))
def enc(t):
 n=0
 for a in t:n=13*n+a
 return n

def syn(t):
 a,b,c,d,e,f=t
 return ((b-2*a)%13,(d-11*c)%13,e%13,(f-a)%13)
OFF=list(itertools.product((-1,0,1),repeat=6));DELTA={syn(o)for o in OFF}
assert len(DELTA)==483 and [o for o in OFF if syn(o)==(0,0,0,0)]==[(0,)*6]
D={n:digits(n,4)for n in set(S+SX+SP+SA)}
def conflict(x,y):return tuple((a-b)%13 for a,b in zip(D[x],D[y])) in DELTA

def base():
 assert len(set(S))==len(set(SX))==370
 A={s for s in SX if any(conflict(s,v)for v in SP)};Z={s for s in SX if any(conflict(s,v)for v in SA)}
 assert A==set(SF0)and Z==set(SF1)and not A&Z
 fam=[set(S)-set(SP),set(SX)-A-Z,A,Z,set(SP),set(SA),set(SP)]
 checks=0
 for f in fam:
  for u,v in itertools.combinations(f,2):assert not conflict(u,v);checks+=1
 for a,b in ap.EDGES:
  for u in fam[L.index(a)]:
   for v in fam[L.index(b)]:assert not conflict(u,v);checks+=1
 for i,(p,q)in enumerate(pairRep):
  assert enc(syn(digits(p,6)))==SP[i]and enc(syn(digits(q,6)))==SA[i]
 h=[dict(Counter(sum(1<<b for b,F in enumerate(fam) if any(conflict(x,y)for y in F))for x in f))for f in fam]
 h=[{m:169*c for m,c in f.items()}for f in h]
 ap.check_profiles(h)
 return fam,h,checks

def make_parent():
 f=json.loads((r6/'FROZEN_INPUTS.json').read_text())
 c={'schema':'C13_BASELINE_EXACT_REPLAY','base_dimension':6,'dimension':522,'N':str(M),'tables':{k:f['tables'][k]for k in ['T2b','T3c','K3a']},'nodes':[{'name':'base','kind':'base'}],'root':'terminal'}
 def add(n,k,ch):c['nodes'].append({'name':n,'kind':k,'children':ch})
 add('a3','T3c',['base']*3)
 for i in range(4,10):add('a'+str(i),'T2b',['a'+str(i-1),'base'])
 add('b2','T2b',['base']*2)
 for i in range(3,18):add('b'+str(i),'T2b',['b'+str(i-1),'base'])
 add('c12','T3c',['a3','a7','b2']);add('x34','T3c',['a9','b13','c12']);add('x36','T3c',['a7','b17','c12'])
 add('terminal','K3a',['x34','x36','b17'])
 return c

def evaluate(c,h0,stepmap={}):
 hs={};dims={};audits={}
 for node in c['nodes']:
  name=node['name'];kind=node['kind']
  if kind=='base':h=h0;d=6
  else:
   tab=c['tables'][kind];kids=[hs[k]for k in node['children']];d=sum(dims[k]for k in node['children'])
   if isinstance(tab,list):
    N=sum(math.prod(sum(kids[i][L.index(s)].values())for i,s in enumerate(w))for w in tab);h=None
   else:
    h=ap.lift(kids,tab)
    if name in stepmap:h,audits[name]=ap.extend(kids,tab,h,stepmap[name])
  hs[name]=h;dims[name]=d
 return N,hs,dims,audits

def gains(kids,table):
 q=len(kids);req=[(1<<a)|ap.NEIGH[a]for a in range(7)];cache={};opts=[]
 for w in itertools.product(range(7),repeat=q):
  val=[0]*7
  for ts in itertools.product(*(kids[i][a].items()for i,a in enumerate(w))):
   m=tuple(x[0]for x in ts)
   if m not in cache:cache[m]=ap.signature(table,m)
   mask=cache[m];weight=math.prod(x[1]for x in ts)
   for a in range(7):
    if not(mask&req[a]):val[a]+=weight
  for a,n in enumerate(val):
   if n:opts.append((L[a],''.join(L[i]for i in w),n))
 return opts
if __name__=='__main__':
 t=time.monotonic();fam,h0,checks=base();print('base',time.monotonic()-t,checks,flush=True);print('h0',h0,flush=True)
 c=make_parent();N,hs,dims,_=evaluate(c,h0);assert N==M;print('BASELINE REPRODUCED',len(str(N)),time.monotonic()-t,flush=True)
 (R/'C13_BASELINE.json').write_text(json.dumps(c,indent=2)+'\n')
 results=[]
 for node in c['nodes']:
  if node['kind']=='base'or node['name']==c['root']:continue
  ts=time.monotonic();opts=gains([hs[k]for k in node['children']],c['tables'][node['kind']]);print(node['name'],dims[node['name']],len(opts),'seconds',round(time.monotonic()-ts,3),flush=True)
  for a,w,g in opts:
   spec={'node':node['name'],'target_family':a,'extension_words':[w],'avoid_letters':''.join(b for b in L if b==a or(a,b)in ap.SEP),'mode':'KEEP_ZERO_MASKS_THEN_CONSERVATIVE_WIDENING'}
   new,_,_,audit=evaluate(c,h0,{node['name']:spec})
   if new>M:
    results.append({'node':node['name'],'a':a,'word':w,'gain':str(g),'N':str(new),'spec':spec})
  results.sort(key=lambda x:int(x['N']),reverse=True)
  if results:print('BEST',results[0]['node'],results[0]['a'],results[0]['word'],'root',math.exp(math.log(int(results[0]['N']))/522),flush=True)
 (R/'C13_SCOUT.json').write_text(json.dumps({'h0':[{str(m):str(n)for m,n in x.items()}for x in h0],'seconds':time.monotonic()-t,'results':results},indent=2)+'\n')
 print('DONE',len(results),time.monotonic()-t,flush=True)
