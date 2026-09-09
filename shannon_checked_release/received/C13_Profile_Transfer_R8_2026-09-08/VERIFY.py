#!/usr/bin/env python3
"""Verify C13 R8 finite certificates. Does not invoke Lean or imply a new Lean build."""
from __future__ import annotations
import argparse,copy,hashlib,itertools,json,sys
from pathlib import Path
sys.dont_write_bytecode=True
import profile_check as P
import typed_check as T
from COMPILE import compile_certificate
ROOT=Path(__file__).resolve().parent
# The complete exact baseline is pinned separately below, avoiding reliance on a displayed decimal.
M0=int('2296460381476588218557784714607916555821735215842235657422063709967472046388590671039445990314835453532287927129054300935809605566313640680416850619170792677088359272060919872915091855126481463077864366034595511602265113812807433166736895166001025727331303746555909789115142163380824770899805627970640032438106635377536797524856543870646748758850611538293943083007991697753785956882728113597379667638999165717627011072')

def need(ok,msg):
 if not ok:raise ValueError(msg)
def sha(raw):return hashlib.sha256(raw).hexdigest()
def canonical(o):return json.dumps(o,sort_keys=True,separators=(',',':')).encode()
def load(path):return json.loads(path.read_text())
def manifest():
 m=ROOT/'MANIFEST.sha256';need(m.is_file(),'missing manifest');expected={}
 for line in m.read_text().splitlines():
  digest,name=line.split('  ',1);need(name not in expected and not Path(name).is_absolute()and '..'not in Path(name).parts,'invalid manifest entry');expected[name]=digest
 files={p.relative_to(ROOT).as_posix():p for p in ROOT.rglob('*')if p.is_file()and p!=m}
 need(set(files)==set(expected),'file inventory mismatch')
 for name,p in files.items():need(not p.is_symlink()and sha(p.read_bytes())==expected[name],f'digest mismatch: {name}')
 return len(files)
def result_checks(c,N,d):
 need(c['schema']=='C13_PROFILE_TRANSFER_R8_V1'and c['graph']=='SimpleGraph.cycleGraph 13'and type(c['base_dimension'])is int and c['base_dimension']==6,'certificate identity')
 need(type(c['dimension'])is int and c['dimension']==d==522,'dimension')
 need(c['status']=='EXACT_FINITE_CERTIFICATE_NOT_NEW_LEAN_BUILD_OR_EXTERNAL_REVIEW','status')
 need(P.nat(c['N'])==N and P.nat(c['baseline_N'])==M0 and N>M0,'exact cardinality or strict baseline comparison')
 lo,hi,den=(P.nat(c[k])for k in('decimal_lower_numerator','decimal_upper_numerator','decimal_denominator'))
 need(den==10**15 and hi==lo+1,'decimal metadata')
 need(lo**d<=N*den**d<hi**d,'exact decimal bracket')
 return{'dimension':d,'N':str(N),'baseline_N':str(M0),'increase':str(N-M0),'lower':f'{lo//den}.{lo%den:015d}','upper_for_constructed_root_exclusive':f'{hi//den}.{hi%den:015d}','strict_root_comparison':'same dimension: N > M0','Lean_checked':False,'external_review':False}

def self_tests(c,typed,parent,h0,N,d):
 passed=[];reasons={}
 def reject(name,thunk):
  try:thunk()
  except(ValueError,KeyError,TypeError,IndexError)as e:passed.append(name);reasons[name]=str(e)
  else:raise ValueError('negative control accepted: '+name)
 for key,new in [('schema','wrong'),('graph','SimpleGraph.cycleGraph 11'),('base_dimension',3),('dimension',528),('N',str(N+1)),('baseline_N',str(M0+1)),('decimal_lower_numerator',str(int(c['decimal_lower_numerator'])+1)),('status','LEAN_CHECKED')]:
  bad=copy.deepcopy(c);bad[key]=new;reject('metadata:'+key,lambda b=bad:result_checks(b,N,d))
 _,_,hs,_,_=P.replay(parent,h0,[])
 spec=next(s for s in c['augmentations']if s['node']=='c12');node=next(x for x in parent['nodes']if x['name']=='c12');tab=parent['tables'][node['kind']];children=[hs[x]for x in node['children']];output=P.lift(children,tab)
 b=copy.deepcopy(spec);b['avoid_letters']=b['avoid_letters'].replace('A','');reject('omitted self protection',lambda:P.extend(children,tab,output,b))
 b2=copy.deepcopy(spec);b2['avoid_letters']=b2['avoid_letters'].replace('D','');reject('omitted neighbour protection',lambda:P.extend(children,tab,output,b2))
 b3=copy.deepcopy(spec);b3['mode']='NO_WIDENING';reject('wrong update mode',lambda:P.extend(children,tab,output,b3))
 b4=copy.deepcopy(spec);b4['extension_words'].append(b4['extension_words'][0]);reject('duplicate extension rectangle',lambda:P.extend(children,tab,output,b4))
 b5=copy.deepcopy(spec);b5['extension_words'].append('BBB');reject('nonseparated extension rectangles',lambda:P.extend(children,tab,output,b5))
 reject('duplicate augmentation node',lambda:P.replay(parent,h0,[spec,spec]))
 b6=copy.deepcopy(spec);b6['node']='absent';reject('missing augmentation node',lambda:P.replay(parent,h0,[b6]))
 badparent=copy.deepcopy(parent);badparent['nodes'][-1]['children'][0]=badparent['root'];reject('cyclic terminal input',lambda:P.replay(badparent,h0,c['augmentations']))
 badtable=copy.deepcopy(typed['tables'][typed['root']]);badtable['rows'].append(badtable['rows'][0]);reject('typed terminal duplicate',lambda:T.table(badtable))
 badtable2=copy.deepcopy(typed['tables'][typed['root']]);existing={tuple(x)for x in badtable2['rows']};w=badtable2['rows'][0];found=None
 for pos in range(len(w)):
  for a in range(58):
   nw=list(w);nw[pos]=a
   if tuple(nw)not in existing and not T.word_apart(w,nw):found=nw;break
  if found:break
 need(found is not None,'negative control construction');badtable2['rows'].append(found);reject('typed terminal nonseparated pair',lambda:T.table(badtable2))
 b7=copy.deepcopy(typed);b7['letters'][0]['mask']=0
 reject('typed alphabet corruption',lambda:need(b7['letters']==[{'family':T.L[a],'mask':m}for a,m in T.TYPES],'type alphabet'))
 return{'rejected':len(passed),'cases':passed,'observed_rejections':reasons}

def verify(run_tests=False,check_manifest=False):
 data_path=ROOT/'inputs/BPZ_C13.json';parent_path=ROOT/'inputs/BPZ_C13_SCHEDULE.json';data=load(data_path);parent=load(parent_path);c=load(ROOT/'certificates/C13_d522.json');typed=load(ROOT/'compiled/C13_d522.json')
 expected={'schema','graph','base_dimension','dimension','N','baseline_N','decimal_lower_numerator','decimal_upper_numerator','decimal_denominator','augmentations','input_sha256','schedule_sha256','status'}
 need(set(c)==expected,'profile certificate fields')
 need(c['input_sha256']==sha(data_path.read_bytes())and c['schedule_sha256']==sha(parent_path.read_bytes()),'frozen input binding')
 need(typed['input_sha256']==c['input_sha256']and typed['profile_certificate_sha256']==sha(canonical(c)),'typed input binding')
 h0,base=P.base(data);M,D,H0,DD0,_=P.replay(parent,h0,[]);need(M==M0==P.nat(data['baseline_N'])==P.nat(parent['N'])and D==522,'complete baseline positive control')
 N,d,H,DD,audits=P.replay(parent,h0,c['augmentations']);summary=result_checks(c,N,d)
 N2,d2,H2,ordinary=T.replay(typed,data);need(N2==N and d2==d and H2==P.normalize(H)and ordinary['node_dimensions']==DD,'independent literal/profile replay mismatch')
 need(compile_certificate(data,parent,c)==typed,'deterministic compiler correspondence')
 Nq,dq,Hq,Dq,_=P.replay(parent,[{m:n//169 for m,n in row.items()}for row in h0],c['augmentations'])
 need(N==Nq*169**87 and dq==d and Dq==DD,'quotient scaling at root')
 for name,Hn in H.items():
  if Hn is not None:need(Hn==[{m:n*169**(DD[name]//6)for m,n in row.items()}for row in Hq[name]],'quotient scaling at node')
 control=P.control(parent,h0);need(control['nonempty_admissible_additions_to_used_families']==0,'coarse control changed')
 test_result=self_tests(c,typed,parent,h0,N,d)if run_tests else{'status':'NOT_RUN'}
 return{'status':'PASS_C13_R8_CONTROLLED_PROFILE_TRANSFER','result':summary,'base_quotient_checks':base,'independent_typed_checks':ordinary,'node_profiles':P.normalize(H),'node_dimensions':DD,'augmentations':audits,'coarse_control':control,'all_node_profiles_agree':len(H),'compiled_representation_matches':True,'exact_symmetry_scaling_checked_at_every_node':True,'negative_controls':test_result,'manifest_files':manifest()if check_manifest else None}
if __name__=='__main__':
 parser=argparse.ArgumentParser();parser.add_argument('--self-test',action='store_true');parser.add_argument('--manifest',action='store_true');a=parser.parse_args()
 try:print(json.dumps(verify(a.self_test,a.manifest),indent=2,sort_keys=True))
 except Exception as e:print('REJECT_C13_R8: '+str(e),file=sys.stderr);raise SystemExit(1)
