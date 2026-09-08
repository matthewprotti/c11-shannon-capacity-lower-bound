#!/usr/bin/env python3
"""Exact witness for the first beneficial four-block terminal refinement."""
import hashlib,json,sys
from pathlib import Path
sys.dont_write_bytecode=True
ROOT=Path(__file__).resolve().parents[1]
sys.path.insert(0,str(ROOT))
import INDEPENDENT_REPLAY as v

def run(root=ROOT):
 raw=(root/'FROZEN_INPUTS.json').read_bytes();v.require(hashlib.sha256(raw).hexdigest()==v.BASE_SHA,'frozen input hash')
 base,_=v.base_families(json.loads(raw));reports=[]
 for d in (198,210):
  c=json.loads((root/f'search/bankfixed{d}/d{d}.json').read_text());N,dim,_,memo,_=v.evaluate(c,base)
  by={n['name']:n for n in c['nodes']};top=by[c['root']];words=c['tables'][top['kind']]
  j=next(i for i,k in enumerate(top['children'])if by[k]['kind']!='base'and len(by[k]['children'])==2)
  child=by[top['children'][j]];inner=c['tables'][child['kind']]
  expanded=sorted(word[:j]+block+word[j+1:]for word in words for block in inner[word[j]])
  children=top['children'][:j]+child['children']+top['children'][j+1:]
  w=[dict(zip(v.LETTERS,memo[k][0]))for k in children]
  v.table_data(expanded);v.require('BNDH'in expanded and 'ANDH'not in expanded and 'NNDH'not in expanded,'unexpected witness table')
  refined=sorted([x for x in expanded if x!='BNDH']+['ANDH','NNDH']);v.table_data(refined)
  def count(code):
   value=0
   for word in code:
    product=1
    for weights,letter in zip(w,word):product*=weights[letter]
    value+=product
   return value
  old=count(expanded);new=count(refined)
  factors=[w[0]['A']+w[0]['N']-w[0]['B'],w[1]['N'],w[2]['D'],w[3]['H']]
  product=1
  for x in factors:v.require(x>0,'nonpositive refinement factor');product*=x
  v.require(old==N and dim==d and new-old==product,'refinement cardinality mismatch')
  actual=json.loads((root/f'search/expanded{d}/d{d}.json').read_text());actualN,actuald,*_=v.evaluate(actual,base)
  v.require(new==actualN and actuald==d,'refinement target mismatch')
  reports.append({'dimension':d,'old_N':str(old),'new_N':str(new),'delta':str(product),'positive_factors':[str(x)for x in factors],
   'old_terminal_words':len(expanded),'new_terminal_words':len(refined),'removed':['BNDH'],'inserted':['ANDH','NNDH'],
   'four_input_dimensions':[memo[k][1]for k in children], 'formula':'(u_A+u_N-u_B)*v_N*w_D*z_H','all_separations_checked':True})
 return {'status':'PASS_C11_FOUR_BLOCK_REFINEMENT_WITNESS','cases':reports}
if __name__=='__main__':print(json.dumps(run(),indent=2))
