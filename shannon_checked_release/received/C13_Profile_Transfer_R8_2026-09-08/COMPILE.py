#!/usr/bin/env python3
"""Untrusted support-pruned compiler. Use --output outside the sealed directory.
The compiled result is independently checked as ordinary 58-letter tables.
"""
import argparse,itertools,json,hashlib,sys
from pathlib import Path
sys.dont_write_bytecode=True
import profile_check as p
ROOT=Path(__file__).resolve().parent
TYPES=[(a,m)for a in range(7)for m in range(128)if m&(1<<a)and not m&p.NEIGH[a]]
INDEX={t:i for i,t in enumerate(TYPES)}
def compile_certificate(data,parent,certificate):
 h0,_=p.base(data);N,dim,H,D,_=p.replay(parent,h0,certificate['augmentations']);patch={s['node']:s for s in certificate['augmentations']};tables={};nodes=[]
 for node in parent['nodes']:
  if node['kind']=='base':nodes.append(dict(node));continue
  name=node['name'];T=parent['tables'][node['kind']];kids=node['children'];options=[[[ (INDEX[(a,m)],m) for m,n in H[k][a].items()if n]for a in range(7)]for k in kids]
  def expand(word):return itertools.product(*(options[i][p.LETTERS.index(a)]for i,a in enumerate(word)))
  terminal=isinstance(T,list)
  if terminal:
   rows=[ [z[0]for z in cs] for w in T for cs in expand(w)]
  else:
   rows=[[]for _ in TYPES];sp=patch.get(name);target=p.LETTERS.index(sp['target_family'])if sp else None
   for a in range(7):
    for w in T[p.LETTERS[a]]:
     for cs in expand(w):
      m=p.signature(T,tuple(z[1]for z in cs))
      if sp and a!=target and not p.NEIGH[target]&(1<<a):m|=1<<target
      rows[INDEX[(a,m)]].append([z[0]for z in cs])
   if sp:
    forbidden=(1<<target)|p.NEIGH[target]
    for w in sp['extension_words']:
     for cs in expand(w):
      m=p.signature(T,tuple(z[1]for z in cs))
      if not m&forbidden:rows[INDEX[(target,m|(1<<target))]].append([z[0]for z in cs])
  if terminal:rows.sort()
  else:
   for row in rows:row.sort()
  tables[name]={'kind':'terminal'if terminal else'substitution','rows':rows}
  nodes.append({'name':name,'kind':name,'children':kids})
 return{'schema':'C13_TYPED_58_R8_V1','graph':'SimpleGraph.cycleGraph 13','base_dimension':6,'dimension':dim,'N':str(N),'letters':[{'family':p.LETTERS[a],'mask':m}for a,m in TYPES],'tables':tables,'nodes':nodes,'root':parent['root'],'input_sha256':certificate['input_sha256'],'profile_certificate_sha256':hashlib.sha256(json.dumps(certificate,sort_keys=True,separators=(',',':')).encode()).hexdigest(),'status':'EXACT_FINITE_CERTIFICATE_NOT_NEW_LEAN_BUILD_OR_EXTERNAL_REVIEW'}
if __name__=='__main__':
 a=argparse.ArgumentParser();a.add_argument('--output',type=Path,required=True);args=a.parse_args();out=args.output.resolve()
 if ROOT==out or ROOT in out.parents:raise SystemExit('Output must be outside the sealed directory')
 data=json.loads((ROOT/'inputs/BPZ_C13.json').read_text());s=json.loads((ROOT/'inputs/BPZ_C13_SCHEDULE.json').read_text());c=json.loads((ROOT/'certificates/C13_d522.json').read_text())
 out.write_text(json.dumps(compile_certificate(data,s,c),sort_keys=True,separators=(',',':'))+'\n')
 print(out)
