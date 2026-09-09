#!/usr/bin/env python3
"""Run two separately implemented exact replays, comparing every stored type."""
import argparse,copy,hashlib,json,re,sys
from pathlib import Path
sys.dont_write_bytecode=True
ROOT=Path(__file__).resolve().parent
sys.path.insert(0,str(ROOT/'verification'))
import mask_replay as A
import set_replay as B
import typed_replay as C

def manifest():
 entries={}
 for line in (ROOT/'MANIFEST.sha256').read_text().splitlines():
  m=re.fullmatch(r'([0-9a-f]{64})  (.+)',line);A.require(m is not None,'manifest syntax');sha,path=m.groups();p=Path(path)
  A.require(not p.is_absolute()and '..'not in p.parts and path not in entries,'manifest path')
  fp=ROOT/p;A.require(fp.is_file()and not fp.is_symlink(),'manifest file');A.require(A.digest(fp)==sha,'manifest digest '+path);entries[path]=sha
 actual={str(p.relative_to(ROOT))for p in ROOT.rglob('*')if p.is_file()and p.name!='MANIFEST.sha256'}
 A.require(actual==set(entries),'manifest coverage');return len(entries)

def tests(c):
 result=[]
 def fail(name,fn,reason):
  changed=copy.deepcopy(c);fn(changed)
  try:A.certificate(changed,ROOT)
  except (ValueError,KeyError,TypeError,OSError)as e:
   A.require(reason in str(e),'unexpected rejection for '+name+': '+str(e));result.append({'name':name,'reason':str(e)})
  else:raise A.Rejected('accepted corruption: '+name)
 fail('wrong_schema',lambda x:x.update(schema='WRONG'),'schema')
 fail('wrong_graph',lambda x:x.update(graph='SimpleGraph.cycleGraph 13'),'graph/base dimension')
 fail('wrong_base_dimension',lambda x:x.update(base_dimension=2),'graph/base dimension')
 fail('wrong_dimension_type',lambda x:x.update(dimension=float(x['dimension'])),'dimension')
 fail('wrong_dimension',lambda x:x.update(dimension=207),'dimension')
 fail('false_Lean_status',lambda x:x.update(status='LEAN_CHECKED'),'status')
 fail('wrong_parent_hash',lambda x:x.update(parent_sha256='0'*64),'parent hash')
 fail('wrong_base_hash',lambda x:x.update(frozen_input_sha256='0'*64),'base hash')
 fail('wrong_old_integer',lambda x:x.update(parent_N='1'),'parent positive control')
 fail('wrong_new_integer',lambda x:x.update(N=str(int(x['N'])+1)),'new cardinality/dimension')
 fail('wrong_decimal',lambda x:x.update(decimal_lower_numerator=str(int(x['decimal_lower_numerator'])+1),decimal_upper_numerator=str(int(x['decimal_upper_numerator'])+1)),'decimal bracket')
 fail('empty_augmentations',lambda x:x.update(augmentations=[]),'empty augmentation')
 fail('missing_self_avoidance',lambda x:x['augmentations'][0].update(avoid_letters=x['augmentations'][0]['avoid_letters'].replace(x['augmentations'][0]['target_family'],'')),'mandatory avoidance set')
 fail('missing_cross_avoidance',lambda x:x['augmentations'][0].update(avoid_letters=x['augmentations'][0]['target_family']),'mandatory avoidance set')
 fail('optimistic_no_widening',lambda x:x['augmentations'][0].update(mode='KEEP_OLD_MASKS'),'augmentation mode')
 fail('duplicate_extension_word',lambda x:x['augmentations'][0]['extension_words'].append(x['augmentations'][0]['extension_words'][0]),'duplicate extension word')
 fail('duplicate_patch',lambda x:x['augmentations'].append(copy.deepcopy(x['augmentations'][0])),'duplicate/malformed augmentation')
 fail('nonexistent_patch',lambda x:x['augmentations'][0].update(node='does_not_exist'),'unknown augmentation node')
 fail('extra_field',lambda x:x.update(pretend_safe=True),'certificate fields')
 def invalid_E(x):
  s=x['augmentations'][0];first=s['extension_words'][0]
  from itertools import product
  new=next(''.join(w)for w in product(A.LETTERS,repeat=len(first))if ''.join(w)not in s['extension_words']and not A.separated(first,''.join(w)))
  s['extension_words'].append(new)
 fail('nonindependent_extension',invalid_E,'extension independence')
 return result

def typed_tests(c):
 result=[]
 def fail(name,fn,reason):
  changed=copy.deepcopy(c);fn(changed)
  try:C.replay(changed,ROOT)
  except (ValueError,KeyError,TypeError,OSError)as e:
   A.require(reason in str(e),'unexpected typed rejection '+name+': '+str(e));result.append({'name':name,'reason':str(e)})
  else:raise A.Rejected('accepted typed mutation '+name)
 fail('typed_N_plus_one',lambda x:x.update(N=str(int(x['N'])+1)),'typed cardinality/dimension')
 fail('typed_wrong_graph',lambda x:x.update(graph='SimpleGraph.cycleGraph 13'),'typed identity')
 fail('typed_wrong_dimension_type',lambda x:x.update(dimension=213.0),'typed dimension')
 fail('typed_false_status',lambda x:x.update(status='LEAN_CHECKED'),'typed status')
 fail('typed_profile_digest',lambda x:x.update(profile_certificate_sha256='0'*64),'profile certificate digest')
 fail('typed_corrupt_alphabet',lambda x:x['letters'][0].update(mask=0),'typed alphabet')
 def terminal(x):return x['tables'][x['nodes'][-1]['kind']]['rows']
 fail('typed_duplicate_terminal',lambda x:terminal(x).append(terminal(x)[0].copy()),'typed duplicate')
 def conflicting(x):
  row=terminal(x);first=row[0];new=None
  for i in range(len(first)):
   for a in range(58):
    candidate=first.copy();candidate[i]=a
    if candidate not in row and not C.apart(first,candidate):new=candidate;break
   if new is not None:break
  A.require(new is not None,'no typed negative fixture');row.append(new)
 fail('typed_nonseparated_terminal',conflicting,'typed internal conflict')
 return result

def main(args):
 reports=[]
 for path in sorted((ROOT/'certificates').glob('*.json')):
  c=json.loads(path.read_text());a=A.certificate(c,ROOT);b=B.certificate(c,ROOT)
  for field in ('dimension','N','profiles','node_dimensions'):A.require(a[field]==b[field],'checker disagreement: '+field)
  for n,au in a['augmentations'].items():
   A.require(int(au['added_count'])==b['augmentations'][n]['added'],'augmentation gain disagreement')
   for word,count in au['by_rectangle'].items():A.require(int(count)==b['augmentations'][n]['by_rectangle'].get(word,0),'rectangle gain disagreement')
  typed=C.replay(json.loads((ROOT/f"compiled/C11_TYPED_d{c['dimension']}.json").read_text()),ROOT)
  for field in ('dimension','N','profiles','node_dimensions'):A.require(a[field]==typed[field],'typed checker disagreement: '+field)
  a['all_three_replays_agree']=True
  a['ordinary_58_letter_check']={k:v for k,v in typed.items()if k not in ('profiles','node_dimensions','N','dimension')}
  reports.append(a)
 output={'status':'PASS_C11_R6_AVOIDANCE_PROFILE_FINITE_CERTIFICATES','cases':reports,'general_proof':'PROOF.md: handwritten finite-graph argument, not a Lean compilation','priority_cleared':False}
 if args.self_test:
  output['negative_controls']=tests(json.loads(sorted((ROOT/'certificates').glob('*.json'))[-1].read_text()))
  output['typed_negative_controls']=typed_tests(json.loads((ROOT/'compiled/C11_TYPED_d213.json').read_text()))
 if args.manifest:output['manifest_files']=manifest()
 return output
if __name__=='__main__':
 p=argparse.ArgumentParser();p.add_argument('--self-test',action='store_true');p.add_argument('--manifest',action='store_true');args=p.parse_args()
 try:print(json.dumps(main(args),indent=2,sort_keys=True))
 except (ValueError,KeyError,TypeError,OSError)as e:print(json.dumps({'status':'FAIL','error':str(e)}));sys.exit(1)
