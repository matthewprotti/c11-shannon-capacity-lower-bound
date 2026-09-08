#!/usr/bin/env python3
"""Independent standard-library finite checker. Does not invoke or certify Lean.

The finite compatibility checks plus the product-set induction in PROOF.md prove
existence; this program never enumerates the astronomically large final set.
All acceptance comparisons are integer comparisons. No assert statements.
"""
from __future__ import annotations
import argparse,copy,hashlib,itertools,json,math,re,sys
from pathlib import Path
sys.dont_write_bytecode=True
ABC='BNADOHV'
BASE_SHA='bc3f401480f2b9a878ad24faa1d98c1ad848755a0537ceff0043f12f67bf7c26'
PARENT_SHA='9ac3006b54d5c449db357819d88ea507b66778923c61c54623d72d905517a357'
COMMIT='aa21eeb12b75b0413d3fa9fb4208b5d0bf2c4d65'
R3_N=705692619930489413584189552943991443716392885026759451863953624242911159057444856108323516589876967077721069272782760798453832061060020786354479288616
BPZ_N=705688158939417766083006128695703821080101605304173623991920300506716846627203440324635068341693109509608786929844839653207121849017872676157797788816
# This relation is fixed, not supplied by a candidate.
EDGES={'BO','BH','BV','NA','ND','NO','NH','NV','AD','AH','DV'}
SEPARATED=EDGES|{s[::-1]for s in EDGES}
class Invalid(ValueError):pass
def need(ok:bool,message:str)->None:
 if not ok:raise Invalid(message)
def integer(x,field):
 need(isinstance(x,str) and re.fullmatch(r'0|[1-9][0-9]*',x)is not None,f'{field}: canonical nonnegative decimal string required')
 return int(x)
def cconf(u:int,v:int)->bool:
 # Literal equality-or-adjacency in each coordinate; includes self-conflict.
 return all(((u//m)%11-(v//m)%11)%11 in (0,1,10)for m in (1,11,121))
def independent(words,what):
 need(isinstance(words,list) and all(type(u)is int and 0<=u<1331 for u in words),what+': bad word')
 need(len(words)==len(set(words)),what+': repeated word')
 for u,v in itertools.combinations(words,2):need(not cconf(u,v),what+': confusable pair')
def check_base(f):
 need(f['source_commit']==COMMIT and f['alphabet']==ABC,'base identity mismatch')
 need(set(f['sep'])==EDGES,'base separation relation mismatch')
 I,X=f['I'],f['X'];independent(I,'I');independent(X,'X')
 need(len(I)==len(X)==148,'wrong seed cardinality')
 pairs=f['pairs'];need(len(pairs)==3,'wrong port count')
 p=[x[0]for x in pairs];q=[x[1]for x in pairs]
 need(len(set(p))==3 and all(x in I for x in p),'parents not distinct members of I')
 for a,b in pairs:
  need(cconf(a,b),'parent and alternative do not conflict')
  need([i for i in I if cconf(i,b)]==[a],'alternative not private')
 A=[x for x in X if any(cconf(x,y)for y in p)]
 D=[x for x in X if any(cconf(x,y)for y in q)]
 need(not set(A)&set(D),'overlapping endpoint footprints')
 fam={'B':[x for x in I if x not in p],'N':[x for x in X if x not in A and x not in D],
      'A':A,'D':D,'O':p,'H':q,'V':p}
 for a in ABC:independent(fam[a],'family '+a)
 tests=0
 for edge in EDGES:
  for u in fam[edge[0]]:
   for v in fam[edge[1]]:need(not cconf(u,v),'base separation failure '+edge);tests+=1
 weights={a:len(fam[a])for a in ABC}
 need(list(weights.values())==[145,142,3,3,3,3,3],'wrong base profile')
 return weights,{'seed_pair_checks':2*math.comb(148,2),'base_cross_pair_checks':tests,'base_profile':weights}

def word_sep(u,v):return any(a+b in SEPARATED for a,b in zip(u,v))
def check_table(tab):
 terminal=isinstance(tab,list)
 need(terminal or isinstance(tab,dict),'table must be list or seven-row dictionary')
 if not terminal:need(set(tab)==set(ABC),'table does not have exactly seven rows')
 rows={'_':tab}if terminal else tab
 allwords=[w for ws in rows.values()for w in ws]
 need(allwords,'empty entire table')
 need(all(isinstance(w,str)for w in allwords),'non-string word')
 arity=len(allwords[0]);need(1<=arity<=4,'unsupported arity')
 need(all(len(w)==arity and set(w)<=set(ABC)for w in allwords),'malformed table word')
 inside=0;cross=0
 for a,ws in rows.items():
  need(isinstance(ws,list)and len(ws)==len(set(ws)),'duplicate word in output row '+a)
  for u,v in itertools.combinations(ws,2):
   need(word_sep(u,v),'within-family separation failure '+a+':'+u+','+v);inside+=1
 if not terminal:
  for edge in EDGES:
   for u in tab[edge[0]]:
    for v in tab[edge[1]]:
     need(word_sep(u,v),'cross-family separation failure '+edge+':'+u+','+v);cross+=1
 return arity,terminal,{'word_count':len(allwords),'within_pair_checks':inside,'cross_pair_checks':cross,'arity':arity}

def evaluate_graph(nodes,tables,base,root,strict_reachable=True):
 need(isinstance(nodes,list)and nodes,'missing nodes')
 info={k:check_table(t)for k,t in tables.items()};values={};dims={};leaves={};reachable={};used=set()
 for n in nodes:
  need(isinstance(n,dict),'node must be dictionary')
  name=n.get('name');kind=n.get('kind');need(isinstance(name,str)and name not in values,'bad or repeated node name')
  if kind=='base':
   need(set(n)=={'name','kind'},'unexpected base-node fields')
   values[name]=dict(base);dims[name]=3;leaves[name]=1;reachable[name]={name};continue
  need(set(n)=={'name','kind','children'},'unexpected construction-node fields')
  need(kind in tables,'unknown table');used.add(kind)
  children=n['children'];q,terminal,_=info[kind]
  need(isinstance(children,list)and len(children)==q,'wrong number of children')
  need(all(k in values and isinstance(values[k],dict)for k in children),'forward reference or terminal child')
  dims[name]=sum(dims[k]for k in children);leaves[name]=sum(leaves[k]for k in children)
  reachable[name]={name}.union(*(reachable[k]for k in children))
  def polynomial(ws):
   total=0
   for word in ws:
    product=1
    for child,a in zip(children,word):product*=values[child][a]
    total+=product
   return total
  values[name]=polynomial(tables[kind])if terminal else {a:polynomial(tables[kind][a])for a in ABC}
 need(root in values and type(values[root])is int,'root not terminal')
 if strict_reachable:
  need(reachable[root]==set(values),'unreachable nodes in certificate')
  need(used==set(tables),'unused or missing table in certificate')
 return values,dims,leaves,{k:v[2]for k,v in info.items()}

def check_candidate(c,base):
 need(c.get('schema')=='C11_FOLLOW_ON_V1','schema mismatch')
 need(c.get('graph')=='SimpleGraph.cycleGraph 11' and c.get('base_graph_power')==3,'graph mismatch')
 need(c.get('source_commit')==COMMIT,'commit mismatch')
 need(c.get('frozen_input_sha256')==BASE_SHA and c.get('parent_R3_sha256')==PARENT_SHA,'lineage mismatch')
 need(c.get('status')=='EXACT_FINITE_CANDIDATE_NOT_LEAN_CHECKED','unapproved status')
 need(c.get('R3_dimension')==207 and integer(c.get('R3_N'),'R3_N')==R3_N,'R3 target mismatch')
 need(type(c.get('dimension'))is int and c['dimension']>0,'invalid claimed dimension')
 vals,dims,leaves,tabreport=evaluate_graph(c['nodes'],c['tables'],base,c['root'])
 n=vals[c['root']];d=dims[c['root']]
 need(n==integer(c['N'],'N'),'cardinality mismatch')
 need(d==c['dimension'],'dimension mismatch')
 need(d==3*leaves[c['root']],'dimension/leaf discrepancy')
 need(n**207>R3_N**d,'does not improve the full R3 root')
 need(n**207>BPZ_N**d,'does not improve the full BPZ root')
 a=integer(c['decimal_lower_numerator'],'decimal_lower_numerator');b=integer(c['decimal_upper_numerator'],'decimal_upper_numerator');den=integer(c['decimal_denominator'],'decimal_denominator')
 need(den==10**15 and b==a+1,'wrong decimal bracket metadata')
 need(a**d<=n*den**d<b**d,'incorrect exact root bracket')
 return {'status':'PASS_EXACT_FINITE_CONSTRUCTION','case_id':c['case_id'],'dimension':d,'N':str(n),
  'base_leaf_occurrences':leaves[c['root']],'unique_nodes':len(c['nodes']),'distinct_tables':len(c['tables']),
  'strictly_improves_full_R3':True,'strictly_improves_full_BPZ':True,'root_bracket':{'lower':f'{a//den}.{a%den:015d}','upper_exclusive':f'{b//den}.{b%den:015d}'},
  'table_checks':tabreport,'node_weights':{k:({a:str(v)for a,v in w.items()}if isinstance(w,dict)else str(w))for k,w in vals.items()},
  'node_dimensions':dims,'lean_compilation_performed':False,'external_adversarial_review_performed':False}

def controls(c,f,base):
 tests=[]
 def reject(name,obj,fn,expected):
  try:fn(obj)
  except Invalid as e:
   need(expected in str(e),'negative failed for wrong reason: '+name+': '+str(e));tests.append({'test':name,'rejected':True,'reason':str(e)})
  else:raise Invalid('negative control accepted: '+name)
 def mutation(name,fn,reason):
  x=copy.deepcopy(c);fn(x);reject(name,x,lambda z:check_candidate(z,base),reason)
 mutation('cardinality_plus_one',lambda z:z.update(N=str(int(z['N'])+1)),'cardinality mismatch')
 mutation('dimension_plus_three',lambda z:z.update(dimension=z['dimension']+3),'dimension mismatch')
 mutation('wrong_cycle',lambda z:z.update(graph='SimpleGraph.cycleGraph 13'),'graph mismatch')
 mutation('wrong_schema',lambda z:z.update(schema='unchecked'),'schema mismatch')
 mutation('wrong_target_integer',lambda z:z.update(R3_N=str(R3_N-1)),'R3 target mismatch')
 mutation('wrong_target_dimension',lambda z:z.update(R3_dimension=204),'R3 target mismatch')
 mutation('false_Lean_status',lambda z:z.update(status='LEAN_VERIFIED'),'unapproved status')
 mutation('incorrect_decimal_bound',lambda z:z.update(decimal_lower_numerator=str(int(z['decimal_lower_numerator'])+1),decimal_upper_numerator=str(int(z['decimal_upper_numerator'])+1)),'incorrect exact root bracket')
 def badword(z):
  key=z['nodes'][-1]['kind'];z['tables'][key].append('BBB')
 mutation('conflicting_terminal_block',badword,'within-family separation failure')
 def duplicate(z):
  key=z['nodes'][-1]['kind'];z['tables'][key].append(z['tables'][key][0])
 mutation('duplicate_terminal_block',duplicate,'duplicate word')
 mutation('forward_reference',lambda z:z['nodes'][-1]['children'].__setitem__(0,z['root']),'forward reference')
 mutation('unreachable_node',lambda z:z['nodes'].insert(0,{'name':'unused','kind':'base'}),'unreachable nodes')
 f2=copy.deepcopy(f);f2['I'][1]=f2['I'][0];reject('duplicate_seed_word',f2,check_base,'repeated word')
 return tests

def manifest(root):
 listed={}
 for line in (root/'MANIFEST.sha256').read_text().splitlines():
  m=re.fullmatch(r'([0-9a-f]{64})  (.+)',line);need(m is not None,'bad manifest syntax');sha,name=m.groups();p=Path(name)
  need(not p.is_absolute()and '..'not in p.parts and name not in listed,'unsafe manifest path')
  q=root/p;need(q.is_file()and not q.is_symlink(),'missing or unsafe file '+name)
  need(hashlib.sha256(q.read_bytes()).hexdigest()==sha,'hash mismatch '+name);listed[name]=sha
 actual={p.relative_to(root).as_posix()for p in root.rglob('*')if p.is_file()and p!=root/'MANIFEST.sha256'}
 need(actual==set(listed),'manifest coverage mismatch');return len(listed)

def run(root,do_controls=False,do_manifest=False):
 raw=(root/'FROZEN_INPUTS.json').read_bytes();need(hashlib.sha256(raw).hexdigest()==BASE_SHA,'frozen input hash mismatch');f=json.loads(raw)
 parent=root/'ancestry/C11_Lean_Checked_R3_2026-09-08.zip';need(hashlib.sha256(parent.read_bytes()).hexdigest()==PARENT_SHA,'parent archive hash mismatch')
 base,basereport=check_base(f)
 # Positive controls reconstruct BOTH historical integers from the historical DAG.
 original=[{k:v for k,v in n.items()if k!='exponent'}for n in f['nodes']]
 v,dd,_,_=evaluate_graph(original,f['tables'],base,'root',False);need(v['root']==BPZ_N and dd['root']==207,'BPZ positive control failed')
 historical=json.loads((root/'R3_FROZEN_CANDIDATE.json').read_text());rnodes=copy.deepcopy(original);rtables=copy.deepcopy(f['tables']);rtables['R3mix']=historical['replacement_table']
 for node in rnodes:
  if node['name']=='x27':node['kind']='R3mix'
 v,dd,_,_=evaluate_graph(rnodes,rtables,base,'root',False);need(v['root']==R3_N and dd['root']==207,'R3 positive control failed')
 cases=[];cs=[]
 for path in sorted((root/'certificates').glob('*.json')):
  c=json.loads(path.read_text());cases.append(check_candidate(c,base));cs.append(c)
 need(len(cases)==2,'expected exactly two submitted candidates')
 n1,d1=int(cs[0]['N']),cs[0]['dimension'];n2,d2=int(cs[1]['N']),cs[1]['dimension']
 need(n2**d1>n1**d2,'stronger-root case does not beat cheaper case')
 result={'status':'PASS_C11_FOLLOW_ON_EXACT_FINITE_CHECKS','base':basereport,'positive_controls':{'BPZ_207':True,'R3_207':True},'cases':cases,'stronger_root_beats_cheaper_root':True,'lean_status':'NOT_BUILT_FOR_THESE_CANDIDATES','optimality_claim':False,'worldwide_priority_claim':False}
 if do_controls:result['negative_controls']=controls(cs[0],f,base)
 if do_manifest:result['manifest_files_checked']=manifest(root)
 return result
if __name__=='__main__':
 ap=argparse.ArgumentParser();ap.add_argument('--self-test',action='store_true');ap.add_argument('--manifest',action='store_true');args=ap.parse_args()
 try:print(json.dumps(run(Path(__file__).resolve().parent,args.self_test,args.manifest),indent=2))
 except (Invalid,KeyError,ValueError,TypeError,OSError)as exc:print(json.dumps({'status':'FAIL','error':str(exc)},indent=2));raise SystemExit(1)
