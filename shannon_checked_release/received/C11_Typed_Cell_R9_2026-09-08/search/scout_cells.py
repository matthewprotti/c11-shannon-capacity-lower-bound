import sys,time,json,math,itertools,random
from collections import Counter
from pathlib import Path
sys.dont_write_bytecode=True
from scout_retype import *

def options_and_rows(kids,tab):
 options=[[[IX[(a,m)]for m,n in h[a].items()if n]for a in range(7)]for h in kids]
 weights=[{IX[(a,m)]:n for a,row in enumerate(h)for m,n in row.items()}for h in kids]
 rows=[list(itertools.chain.from_iterable(itertools.product(*(options[i][L.index(a)]for i,a in enumerate(w)))for w in tab[b]))for b in L]
 return options,weights,rows

def select(candidates,weight,seed=0,tries=30):
 if not candidates:return []
 ci=ConflictIndex([candidates]); ws=ci.words;cost=[weight[w]for w in ws]; cf=[ci.conflicts(w) ^(1<<i)for i,w in enumerate(ws)]
 rng=random.Random(seed);best=[];bestvalue=0
 for j in range(tries):
  if j==0:order=sorted(range(len(ws)),key=lambda i:cost[i],reverse=True)
  else:order=sorted(range(len(ws)),key=lambda i:math.log(cost[i])+rng.gauss(0,[0.3,1,2,4][j%4]),reverse=True)
  chosen=0
  for i in order:
   if not cf[i]&chosen:chosen|=1<<i
  change=True
  while change:
   change=False
   for i in order:
    if chosen>>i&1:continue
    loss=cf[i]&chosen; z=loss;total=0
    while z:
     k=(z&-z).bit_length()-1;total+=cost[k];z&=z-1
    if cost[i]>total:chosen=(chosen^loss)|(1<<i);change=True
  ids=[i for i in range(len(ws))if chosen>>i&1];value=sum(cost[i]for i in ids)
  if value>bestvalue:bestvalue=value;best=[ws[i]for i in ids]
 return best

def autostep(kids,tab,baseline_spec=None,seed=0,tries=30,priorities='ANBDHV'):
 opts,weights,rows=options_and_rows(kids,tab)
 universe=list(itertools.product(*(tuple(w)for w in weights)))
 cost={w:math.prod(weights[i][s]for i,s in enumerate(w))for w in universe}
 audits=[]
 # Keep baseline safe additions first, using sharp guard, then add further cells.
 if baseline_spec:
  a=L.index(baseline_spec['target_family']);ix=ConflictIndex(rows)
  protected=0
  for b,r in enumerate(ix.rowbits):
   if a==b or p.NEIGH[a]>>b&1:protected|=r
  added=[]
  for word in baseline_spec['extension_words']:
   for w in itertools.product(*(opts[i][L.index(s)]for i,s in enumerate(word))):
    if not ix.conflicts(w)&protected:added.append(w)
  rows[a]+=added
  audits.append({'base_extension':L[a],'cells':len(added),'gain':str(sum(cost[w]for w in added))})
 for target in priorities:
  a=L.index(target);ix=ConflictIndex(rows);protected=0
  for b,r in enumerate(ix.rowbits):
   if a==b or p.NEIGH[a]>>b&1:protected|=r
  allowed=[w for w in universe if not ix.conflicts(w)&protected]
  if not allowed:continue
  added=select(allowed,cost,seed+a,tries);rows[a]+=added
  audits.append({'target':target,'candidates':len(allowed),'selected':len(added),'gain':str(sum(cost[w]for w in added))})
 ix=ConflictIndex(rows);out=[Counter()for _ in range(7)];outrows=[[]for _ in TYPES]
 for a,row in enumerate(rows):
  if len(row)!=len(set(row)):raise ValueError('duplicate')
  for w in row:
   m=ix.mask(w);out[a][m]+=cost[w];outrows[IX[(a,m)]].append(w)
 p.check_profiles(out)
 return list(map(dict,out)),audits,outrows

def autorun(d=213,seed=0,tries=30,priorities='ANBDHV'):
 h0,_=p.base((R6/'FROZEN_INPUTS.json').read_bytes())
 c=json.loads((R6/f'certificates/C11_AP_d{d}.json').read_text());parent=json.loads((R6/f'parent/C11_d{d}.json').read_text())
 patch={s['node']:s for s in c['augmentations']};H={};D={};audit={};tables={};t0=time.perf_counter()
 for node in parent['nodes']:
  name=node['name'];kind=node['kind']
  if kind=='base':H[name]=h0;D[name]=3;continue
  ins=[H[k]for k in node['children']];T=parent['tables'][kind];D[name]=sum(D[k]for k in node['children'])
  if isinstance(T,list):
   N=sum(math.prod(sum(ins[i][L.index(a)].values())for i,a in enumerate(w))for w in T)
   options=[[[IX[(a,m)]for m,n in h[a].items()if n]for a in range(7)]for h in ins]
   tables[name]={'kind':'terminal','rows':[list(z)for w in T for z in itertools.product(*(options[i][L.index(a)]for i,a in enumerate(w)))]}
  else:
   H[name],audit[name],tr=autostep(ins,T,patch.get(name),seed+sum(map(ord,name)),tries,priorities)
   tables[name]={'kind':'substitution','rows':[[list(w)for w in row]for row in tr]}
  print(name,'bins',sum(map(len,H.get(name,[]))),'seconds',time.perf_counter()-t0,flush=True)
 out={'N':str(N),'dimension':D[parent['root']],'seed':seed,'tries':tries,'priorities':priorities,'hist':H,'audits':audit,'tables':tables,'nodes':[{'name':n['name'],'kind':'base'if n['kind']=='base'else n['name'],**({'children':n['children']}if 'children'in n else {})}for n in parent['nodes']],'root':parent['root'],'seconds':time.perf_counter()-t0}
 print('AUTORUN',d,seed,priorities,N>int(c['N']),math.exp(math.log(N)/d),out['seconds'],flush=True)
 (WORKDIR/f'autocells_{d}_{seed}_{priorities}.json').write_text(json.dumps(out,separators=(',',':')))
 return out
if __name__=='__main__':autorun(int(sys.argv[1])if len(sys.argv)>1 else 213,int(sys.argv[2])if len(sys.argv)>2 else 0,10,sys.argv[3]if len(sys.argv)>3 else 'ANBDHV')
