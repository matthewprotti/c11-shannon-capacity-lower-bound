#!/usr/bin/env python3
"""Reproduce the fixed-schedule C13 extension search. No edits to sealed inputs.
Heuristic ordering uses floating point; adopted candidates are compared as integers.
"""
from __future__ import annotations
import argparse,itertools,json,math,random,sys,time
from pathlib import Path
sys.dont_write_bytecode=True
import profile_check as p
ROOT=Path(__file__).resolve().parent
L=p.LETTERS
def choose_code(vals,seed=0,tries=20):
 rng=random.Random(seed);words=sorted(w for w,n in vals.items()if n>0)
 if not words:return []
 weight=[vals[w]for w in words]
 conflicts=[{j for j,v in enumerate(words)if i!=j and not p.separated(w,v)}for i,w in enumerate(words)]
 best=[];bestn=0
 for attempt in range(tries):
  if attempt==0:order=sorted(range(len(words)),key=lambda i:weight[i],reverse=True)
  else:order=sorted(range(len(words)),key=lambda i:math.log(weight[i])+rng.gauss(0,0.9+(attempt%4)*0.6),reverse=True)
  chosen=set()
  for i in order:
   if not chosen&conflicts[i]:chosen.add(i)
  changed=True
  while changed:
   changed=False
   for i in range(len(words)):
    if i in chosen:continue
    loss=chosen&conflicts[i]
    if weight[i]>sum(weight[j]for j in loss):chosen.difference_update(loss);chosen.add(i);changed=True
  n=sum(weight[i]for i in chosen)
  if n>bestn:bestn=n;best=[words[i]for i in sorted(chosen)]
 assert all(p.separated(u,v)for u,v in itertools.combinations(best,2))
 return best

def gains(kids,table):
 q=len(kids);req=[(1<<a)|p.NEIGH[a]for a in range(7)];cache={};opts=[]
 for w in itertools.product(range(7),repeat=q):
  val=[0]*7
  for ts in itertools.product(*(kids[i][a].items()for i,a in enumerate(w))):
   m=tuple(x[0]for x in ts)
   if m not in cache:cache[m]=p.signature(table,m)
   mask=cache[m];weight=math.prod(x[1]for x in ts)
   for a in range(7):
    if not(mask&req[a]):val[a]+=weight
  for a,n in enumerate(val):
   if n:opts.append((L[a],''.join(L[i]for i in w),n))
 return opts

def search(output):
 f=json.loads((ROOT/'inputs/BPZ_C13.json').read_text());parent=json.loads((ROOT/'inputs/BPZ_C13_SCHEDULE.json').read_text());h0,_=p.base(f)
 N,dim,hs,dims,_=p.replay(parent,h0,[]);initial=N;schedule={};history=[];rounds=[];start=time.monotonic()
 for iteration in range(8):
  t=time.monotonic();best=(N,None,None);trials=0;possible=0
  for nd in parent['nodes']:
   name=nd['name'];kind=nd['kind']
   if kind=='base'or name in schedule or name==parent['root']:continue
   opts=gains([hs[k]for k in nd['children']],parent['tables'][kind]);possible+=len(opts)
   for a in L:
    if a=='O':continue
    vals={w:n for b,w,n in opts if a==b};words=choose_code(vals,sum(map(ord,name))+L.index(a),20)
    if not words:continue
    spec={'node':name,'target_family':a,'extension_words':words,'avoid_letters':''.join(b for b in L if a==b or(a,b)in p.SEP),'mode':'KEEP_ZERO_MASKS_THEN_CONSERVATIVE_WIDENING'}
    candidate,_,_,_,_=p.replay(parent,h0,list(schedule.values())+[spec]);trials+=1
    if candidate>best[0]:best=(candidate,name,spec)
  rounds.append({'iteration':iteration,'candidate_full_replays':trials,'positive_family_rectangle_offers':possible,'elapsed_seconds':time.monotonic()-t})
  if best[1]is None:break
  N,name,spec=best;schedule[name]=spec;value,dim,hs,dims,_=p.replay(parent,h0,list(schedule.values()));p.require(value==N,'search replay mismatch')
  history.append({'node':name,'augmentation':spec,'N':str(N)})
 result={'baseline_N':str(initial),'N':str(N),'dimension':dim,'schedule':list(schedule.values()),'history':history,'rounds':rounds,'elapsed_seconds':time.monotonic()-start,'policy':{'maximum_rounds':8,'restarts_per_node_family':20,'one_augmentation_per_node':True,'excluded_target':'O (unused downstream)','root_comparison':'exact integer'}}
 output.write_text(json.dumps(result,indent=2)+'\n');return result
if __name__=='__main__':
 parser=argparse.ArgumentParser();parser.add_argument('--output',required=True,type=Path);a=parser.parse_args();out=a.output.resolve()
 if out==ROOT or ROOT in out.parents:raise SystemExit('Output must be outside the sealed directory')
 if out.exists():raise SystemExit('Refusing to overwrite an existing output')
 result=search(out);print('C13 search complete:',result['dimension'],result['N'])
