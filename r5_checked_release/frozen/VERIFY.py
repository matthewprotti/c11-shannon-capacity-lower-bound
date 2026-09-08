#!/usr/bin/env python3
"""Run two separately implemented finite checkers and compare every node value."""
from __future__ import annotations
import argparse,copy,hashlib,importlib.util,json,sys
from pathlib import Path
sys.dont_write_bytecode=True
import INDEPENDENT_REPLAY as fresh

def main(root,do_tests=False,do_manifest=False):
 spec=importlib.util.spec_from_file_location('r4_received_checker',root/'verification/R4_CHECKER.py')
 old=importlib.util.module_from_spec(spec);spec.loader.exec_module(old)
 report=fresh.main(root,do_tests,do_manifest)
 f=json.loads((root/'FROZEN_INPUTS.json').read_text());base,_=old.check_base(f)
 nodes=[{k:v for k,v in n.items()if k!='exponent'}for n in f['nodes']]
 values,ds,*_=old.evaluate_graph(nodes,f['tables'],base,'root',False)
 fresh.require(values['root']==old.BPZ_N and ds['root']==207,'BPZ positive control')
 r3=json.loads((root/'R3_FROZEN_CANDIDATE.json').read_text());rn=copy.deepcopy(nodes);rt=copy.deepcopy(f['tables']);rt['R3hybrid']=r3['replacement_table']
 for node in rn:
  if node['name']=='x27':node['kind']='R3hybrid'
 values,ds,*_=old.evaluate_graph(rn,rt,base,'root',False)
 fresh.require(values['root']==old.R3_N and ds['root']==207,'R3 positive control')
 comparisons=[];node_totals=0
 for case in report['cases']:
  c=json.loads((root/'certificates'/f'{case["case_id"]}.json').read_text())
  adapter=copy.deepcopy(c)
  adapter.update(schema='C11_FOLLOW_ON_V1',status='EXACT_FINITE_CANDIDATE_NOT_LEAN_CHECKED',parent_R3_sha256=old.PARENT_SHA,R3_N=str(old.R3_N),R3_dimension=207)
  replay=old.check_candidate(adapter,base)
  fresh.require(replay['N']==case['N']and replay['dimension']==case['dimension'],'two-checker final mismatch')
  for name,w in replay['node_weights'].items():
   normalized=[w[a]for a in fresh.LETTERS]if type(w)is dict else w
   fresh.require(normalized==case['node_weights'][name],'two-checker node mismatch '+name)
   fresh.require(replay['node_dimensions'][name]==case['node_dimensions'][name],'two-checker dimension mismatch '+name)
   node_totals+=1
  comparisons.append({'case_id':case['case_id'],'unchanged_R4_checker_pass':True,'all_node_values_agree':True})
 cases=report['cases'];pairwise=[]
 for a in cases:
  for b in cases:
   if a['dimension']<b['dimension']:
    pairwise.append({'lower_dimension':a['dimension'],'higher_dimension':b['dimension'],'higher_dimension_has_stronger_root':int(b['N'])**a['dimension']>int(a['N'])**b['dimension']})
 report['status']='PASS_C11_R5_TWO_CHECKER_FINITE_CERTIFICATES'
 report['historical_positive_controls']={'BPZ_207':True,'R3_207':True,'R4_201':True,'R4_210':True}
 report['second_checker']=comparisons;report['node_agreements']=node_totals;report['frontier_comparisons']=pairwise
 return report
if __name__=='__main__':
 ap=argparse.ArgumentParser();ap.add_argument('--self-test',action='store_true');ap.add_argument('--manifest',action='store_true');args=ap.parse_args()
 try:print(json.dumps(main(Path(__file__).resolve().parent,args.self_test,args.manifest),indent=2))
 except (ValueError,TypeError,KeyError,OSError)as exc:print(json.dumps({'status':'FAIL','error':str(exc)}));raise SystemExit(1)
