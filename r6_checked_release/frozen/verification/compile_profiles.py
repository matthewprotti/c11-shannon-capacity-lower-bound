#!/usr/bin/env python3
"""Untrusted compiler: translate the profile recipe to ordinary finite separation
substitution tables on 58 letters. The generated tables are checked separately
by typed_replay.py, which does not use mask lifting or widening recurrences.
"""
import json,sys,itertools,hashlib
from pathlib import Path
sys.dont_write_bytecode=True
ROOT=Path(__file__).resolve().parents[1]
sys.path.insert(0,str(ROOT/'verification'))
import mask_replay as M
LABELS=[(a,m)for a in range(7)for m in range(128)if m&(1<<a)and not m&M.NEIGH[a]]
INDEX={pair:i for i,pair in enumerate(LABELS)}

def compile_one(c):
 r=M.certificate(c,ROOT);parent=json.loads((ROOT/c['parent_file']).read_text());patch={s['node']:s for s in c['augmentations']};tables={};nodes=[]
 for nd in parent['nodes']:
  name=nd['name'];kind=nd['kind']
  if kind=='base':nodes.append(dict(nd));continue
  T=parent['tables'][kind];children=nd['children'];h=[r['profiles'][x]for x in children]
  options=[[[(INDEX[(a,int(m))],int(m))for m,n in row.items()if int(n)>0]for a,row in enumerate(ch)]for ch in h]
  def expansions(word):return itertools.product(*(options[i][M.LETTERS.index(x)]for i,x in enumerate(word)))
  if isinstance(T,list):
   out=[]
   for word in T:
    for choices in expansions(word):out.append([z[0]for z in choices])
  else:
   out=[[]for _ in LABELS];spec=patch.get(name)
   for a,letter in enumerate(M.LETTERS):
    for word in T[letter]:
     for choices in expansions(word):
      mask=M.signature(T,tuple(z[1]for z in choices))
      if spec:
       target=M.LETTERS.index(spec['target_family'])
       if a!=target and not M.NEIGH[target]&(1<<a):mask|=1<<target
      out[INDEX[(a,mask)]].append([z[0]for z in choices])
   if spec:
    a=M.LETTERS.index(spec['target_family']);bad=M.NEIGH[a]|(1<<a)
    for word in spec['extension_words']:
     for choices in expansions(word):
      mask=M.signature(T,tuple(z[1]for z in choices))
      if not(mask&bad):out[INDEX[(a,mask|(1<<a))]].append([z[0]for z in choices])
  tables[name]={'kind':'terminal'if isinstance(T,list)else'substitution','rows':out}
  nodes.append({'name':name,'kind':name,'children':children})
 return {'schema':'C11_TYPED_SEPARATION_CERTIFICATE_V1','graph':'SimpleGraph.cycleGraph 11','dimension':c['dimension'],'N':c['N'],'profile_certificate_sha256':hashlib.sha256(json.dumps(c,sort_keys=True,separators=(',',':')).encode()).hexdigest(),'frozen_input_sha256':M.BASE_SHA,'letters':[{'family':M.LETTERS[a],'mask':m}for a,m in LABELS],'tables':tables,'nodes':nodes,'root':parent['root'],'status':'FINITE_TABLES_NOT_LEAN_CHECKED'}
if __name__=='__main__':
 output=ROOT/'compiled';output.mkdir(exist_ok=True)
 for p in sorted((ROOT/'certificates').glob('*.json')):
  c=json.loads(p.read_text());cert=compile_one(c);q=output/f'C11_TYPED_d{c["dimension"]}.json';q.write_text(json.dumps(cert,separators=(',',':'))+'\n')
  sizes=[len(t['rows'])if t['kind']=='terminal'else sum(map(len,t['rows']))for t in cert['tables'].values()]
  print(c['dimension'],'alphabet',len(LABELS),'words',sum(sizes),'max',max(sizes),'bytes',q.stat().st_size)
