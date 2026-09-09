#!/usr/bin/env python3
"""Ordinary 58-letter separation-table verification. No avoidance-profile
transfer, filtering, or widening algorithm is imported or executed here.
"""
from __future__ import annotations
import itertools,json,math,hashlib,sys
from pathlib import Path
L='BNADOHV';EDGES=('BO','BH','BV','NA','ND','NO','NH','NV','AD','AH','DV');SEP={tuple(p)for p in EDGES}|{tuple(p[::-1])for p in EDGES}
LABELS=[(a,m)for a in range(7)for m in range(128)if m&(1<<a)and all(not(m&(1<<b))for b in range(7)if (L[a],L[b])in SEP)]
INDEX={v:i for i,v in enumerate(LABELS)}

def need(ok,msg):
 if not ok:raise ValueError(msg)
def relation(i,j):
 a,m=LABELS[i];b,n=LABELS[j]
 return (a==b and m!=n)or not(m&(1<<b))or not(n&(1<<a))
S=[[relation(i,j)for j in range(58)]for i in range(58)]
def apart(u,v):return any(S[a][b]for a,b in zip(u,v))
def coordinates(x):return(x%11,x//11%11,x//121)
def conflict(x,y):return all((a-b)%11 in (0,1,10)for a,b in zip(coordinates(x),coordinates(y)))

def literal_base(f):
 I=set(f['I']);X=set(f['X']);P={p for p,q in f['pairs']};Q={q for p,q in f['pairs']}
 need(len(I)==len(f['I'])==148 and len(X)==len(f['X'])==148,'literal seed size')
 for U in [I,X]:need(all(not conflict(x,y)for x,y in itertools.combinations(U,2)),'literal seed independence')
 A={x for x in X if any(conflict(x,p)for p in P)};D={x for x in X if any(conflict(x,q)for q in Q)}
 need(not(A&D),'literal footprint overlap');fam=[I-P,X-A-D,A,D,P,Q,P]
 typed=[set()for _ in LABELS]
 for a,U in enumerate(fam):
  for x in U:
   m=sum(1<<b for b,V in enumerate(fam)if any(conflict(x,y)for y in V))
   need((a,m)in INDEX,'base mask outside normalized alphabet');typed[INDEX[(a,m)]].add(x)
 checks=0
 for i,U in enumerate(typed):
  for x,y in itertools.combinations(U,2):need(not conflict(x,y),'typed base independence');checks+=1
  for j in range(i+1,58):
   if S[i][j]:
    for x in U:
     for y in typed[j]:need(not conflict(x,y),'typed base separation');checks+=1
 return [len(U)for U in typed],checks

def inspect_table(t):
 need(set(t)=={'kind','rows'}and t['kind']in ('terminal','substitution'),'typed table fields');terminal=t['kind']=='terminal'
 rows=[t['rows']]if terminal else t['rows'];need(terminal or len(rows)==58,'typed rows')
 words=[w for row in rows for w in row];need(words,'empty typed table');q=len(words[0]);need(1<=q<=4,'typed arity')
 for row in rows:
  need(all(type(w)is list and len(w)==q and all(type(x)is int and 0<=x<58 for x in w)for w in row),'typed word')
  need(len(set(map(tuple,row)))==len(row),'typed duplicate')
 internal=0;cross=0
 for row in rows:
  for u,v in itertools.combinations(row,2):need(apart(u,v),'typed internal conflict');internal+=1
 if not terminal:
  for a in range(58):
   if not rows[a]:continue
   for b in range(a+1,58):
    if S[a][b]:
     for u in rows[a]:
      for v in rows[b]:need(apart(u,v),'typed cross conflict');cross+=1
 return q,internal,cross

def replay(c,root):
 need(set(c)=={'schema','graph','dimension','N','profile_certificate_sha256','frozen_input_sha256','letters','tables','nodes','root','status'},'typed certificate fields')
 need(c['schema']=='C11_TYPED_SEPARATION_CERTIFICATE_V1'and c['graph']=='SimpleGraph.cycleGraph 11','typed identity')
 need(c['status']=='FINITE_TABLES_NOT_LEAN_CHECKED','typed status')
 need(type(c['dimension'])is int and c['dimension']in (186,198,213),'typed dimension')
 profile=json.loads((root/f"certificates/C11_AP_d{c['dimension']}.json").read_text())
 need(hashlib.sha256(json.dumps(profile,sort_keys=True,separators=(',',':')).encode()).hexdigest()==c['profile_certificate_sha256'],'profile certificate digest')
 need(c['letters']==[{'family':L[a],'mask':m}for a,m in LABELS],'typed alphabet')
 raw=(root/'FROZEN_INPUTS.json').read_bytes();need(hashlib.sha256(raw).hexdigest()==c['frozen_input_sha256']=='bc3f401480f2b9a878ad24faa1d98c1ad848755a0537ceff0043f12f67bf7c26','typed base hash')
 h0,bchecks=literal_base(json.loads(raw));tables=c['tables'];checks={k:inspect_table(v)for k,v in tables.items()};weights={};dims={};uses=set()
 for node in c['nodes']:
  name=node['name'];kind=node['kind'];need(name not in weights,'typed duplicate node')
  if kind=='base':
   need(set(node)=={'name','kind'},'typed base node fields');w=h0;d=3
  else:
   need(set(node)=={'name','kind','children'}and kind in tables,'typed node fields');children=node['children'];q=checks[kind][0]
   need(len(children)==q and all(x in weights and isinstance(weights[x],list)for x in children),'typed child reference');t=tables[kind];d=sum(dims[ch]for ch in children);uses.add(kind)
   rows=[t['rows']]if t['kind']=='terminal'else t['rows']
   values=[sum(math.prod(weights[ch][u]for ch,u in zip(children,word))for word in row)for row in rows]
   w=values[0]if t['kind']=='terminal'else values
  weights[name]=w;dims[name]=d
 need(c['root']==c['nodes'][-1]['name']and isinstance(weights[c['root']],int),'typed root')
 need(uses==set(tables),'unused typed tables')
 value=weights[c['root']];d=dims[c['root']]
 need(str(value)==c['N']and d==c['dimension'],'typed cardinality/dimension')
 return {'dimension':d,'N':str(value),'alphabet_size':58,'base_pair_checks':bchecks,'table_checks':{k:{'arity':q,'internal_pairs':a,'cross_pairs':b}for k,(q,a,b)in checks.items()},'total_internal_pairs':sum(x[1]for x in checks.values()),'total_cross_pairs':sum(x[2]for x in checks.values()),'profiles':{k:[{str(m):str(w[INDEX[(a,m)]] )for ai,m in LABELS if ai==a and w[INDEX[(a,m)]]>0}for a in range(7)]for k,w in weights.items()if isinstance(w,list)},'node_dimensions':dims,'framework':'ordinary finite separation substitutions on 58 letters','Lean_checked':False}

if __name__=='__main__':
 sys.dont_write_bytecode=True;root=Path(__file__).resolve().parents[1];result=[]
 for p in sorted((root/'compiled').glob('*.json')):result.append(replay(json.loads(p.read_text()),root))
 print(json.dumps({'status':'PASS_C11_R6_ORDINARY_58_LETTER_CERTIFICATES','cases':result},indent=2,sort_keys=True))
