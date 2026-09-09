#!/usr/bin/env python3
"""Standard-library exact replay, written separately from all search utilities.
Uses recursive evaluation, literal cycle conflicts, and independently rebuilt
separation matrices. No solver, floating-point arithmetic, or Lean invocation.
"""
from __future__ import annotations
import argparse,copy,hashlib,itertools,json,re,sys,zipfile
from pathlib import Path
sys.dont_write_bytecode=True
LETTERS='BNADOHV'
EDGES=('BO','BH','BV','NA','ND','NO','NH','NV','AD','AH','DV')
SEP={(a,b) for a,b in EDGES}|{(b,a) for a,b in EDGES}
COMMIT='aa21eeb12b75b0413d3fa9fb4208b5d0bf2c4d65'
BASE_SHA='bc3f401480f2b9a878ad24faa1d98c1ad848755a0537ceff0043f12f67bf7c26'
PARENT_SHA='d5ea7d939e0e28261fb87aceed1e46353ee3c31c549056f8c49e0e6c4f5ac76c'
HISTORY={
 'BPZ_207':{'dimension':207,'N':'705688158939417766083006128695703821080101605304173623991920300506716846627203440324635068341693109509608786929844839653207121849017872676157797788816'},
 'R3_207':{'dimension':207,'N':'705692619930489413584189552943991443716392885026759451863953624242911159057444856108323516589876967077721069272782760798453832061060020786354479288616'},
 'R4_201':{'dimension':201,'N':'32002673683286069537407802496635290542708504485557757541357004314290758191808590819113831084345541929742202157575979409830403540320810360987701516'},
 'R4_210':{'dimension':210,'N':'104801829423661587743253299322841646006536831006849180624356444952325998520513365767989569418211784335842097686417867068684116769869616301057472136612714'}}
class Rejected(ValueError):pass
def require(condition,message):
 if not condition:raise Rejected(message)
def natural_string(value,label):
 require(type(value)is str and re.fullmatch(r'0|[1-9][0-9]*',value)is not None,label+': not a canonical natural-number string')
 return int(value)
def conflict(u,v):
 return all(min(((u//(11**j))-(v//(11**j)))%11,((v//(11**j))-(u//(11**j)))%11)<=1 for j in range(3))
def seed_independent(s):
 require(type(s)is list and all(type(x)is int and 0<=x<1331 for x in s),'malformed base set')
 require(len(s)==len(set(s)),'duplicate base word')
 require(all(not conflict(x,y)for x,y in itertools.combinations(s,2)),'confusable base words')
def base_families(f):
 require(f['source_commit']==COMMIT and f['alphabet']==LETTERS,'base identity')
 require(set(f['sep'])==set(EDGES),'base relation')
 I,X=f['I'],f['X'];seed_independent(I);seed_independent(X)
 require(len(I)==len(X)==148,'base cardinality')
 pairs=f['pairs'];require(len(pairs)==3,'port count')
 parents={p for p,q in pairs};alternatives={q for p,q in pairs}
 require(len(parents)==len(alternatives)==3 and parents<=set(I),'port identity')
 for p,q in pairs:require({x for x in I if conflict(x,q)}=={p},'private-pair failure')
 a={x for x in X if any(conflict(x,p)for p in parents)}
 d={x for x in X if any(conflict(x,q)for q in alternatives)}
 require(not a&d,'overlapping footprints')
 families={'B':set(I)-parents,'N':set(X)-a-d,'A':a,'D':d,'O':parents,'H':alternatives,'V':parents}
 for s in families.values():seed_independent(sorted(s))
 cross=0
 for x,y in EDGES:
  for u in families[x]:
   for v in families[y]:require(not conflict(u,v),'base separation failure');cross+=1
 sizes=tuple(len(families[x])for x in LETTERS)
 require(sizes==(145,142,3,3,3,3,3),'base profile')
 return sizes,{'seed_pair_checks':21756,'cross_pair_checks':cross,'weights':dict(zip(LETTERS,sizes))}
def separated(u,v):return any((a,b)in SEP for a,b in zip(u,v))
def table_data(table):
 terminal=type(table)is list
 require(terminal or type(table)is dict,'table type')
 if not terminal:require(set(table)==set(LETTERS),'table rows')
 rows=[('_',table)]if terminal else [(a,table[a])for a in LETTERS]
 allwords=[]
 for a,row in rows:
  require(type(row)is list and all(type(w)is str for w in row),'table word type');allwords.extend(row)
 require(allwords,'empty table')
 q=len(allwords[0]);require(1<=q<=4 and all(len(w)==q and set(w)<=set(LETTERS)for w in allwords),'word arity/alphabet')
 inside=0;cross=0
 for a,row in rows:
  require(len(row)==len(set(row)),'duplicate table word')
  for u,v in itertools.combinations(row,2):require(separated(u,v),'within-row conflict');inside+=1
 if not terminal:
  for a,b in EDGES:
   for u in table[a]:
    for v in table[b]:require(separated(u,v),'cross-row conflict');cross+=1
 encoded={a:[tuple(LETTERS.index(x)for x in w)for w in row]for a,row in rows}
 return q,terminal,encoded,{'arity':q,'terminal':terminal,'words':len(allwords),'within_pairs':inside,'cross_pairs':cross}
def evaluate(c,base):
 require(type(c.get('tables'))is dict and c['tables'],'missing tables')
 tables={name:table_data(table)for name,table in c['tables'].items()}
 source=c.get('nodes');require(type(source)is list and source,'missing nodes')
 definitions={};earlier=set()
 for node in source:
  require(type(node)is dict,'node type');name=node.get('name');kind=node.get('kind')
  require(type(name)is str and name not in definitions,'duplicate/malformed node')
  if kind=='base':require(set(node)=={'name','kind'},'base node fields')
  else:
   require(set(node)=={'name','kind','children'}and kind in tables,'construction node fields/table')
   children=node['children'];require(type(children)is list and len(children)==tables[kind][0],'child count')
   require(all(type(k)is str and k in earlier for k in children),'forward/cyclic reference')
  definitions[name]=node;earlier.add(name)
 root=c.get('root');require(root in definitions,'missing root')
 memo={};used=set()
 def visit(name):
  if name in memo:return memo[name]
  node=definitions[name]
  if node['kind']=='base':result=(base,3,1)
  else:
   kind=node['kind'];used.add(kind);q,terminal,rows,_=tables[kind]
   child=[visit(k)for k in node['children']]
   require(all(type(x[0])is tuple for x in child),'terminal used as an input family')
   weights=[x[0]for x in child]
   out=[]
   for a in ('_',)if terminal else LETTERS:
    total=0
    for word in rows[a]:
     term=1
     for j,symbol in enumerate(word):term*=weights[j][symbol]
     total+=term
    out.append(total)
   result=(out[0]if terminal else tuple(out),sum(x[1]for x in child),sum(x[2]for x in child))
  memo[name]=result;return result
 value,d,leaves=visit(root)
 require(type(value)is int,'root is not a terminal code')
 require(set(memo)==set(definitions),'unreachable node')
 require(used==set(tables),'unused table')
 return value,d,leaves,memo,{k:v[3]for k,v in tables.items()}
def check(c,base):
 require(c.get('schema')=='C11_R5_REASSEMBLY_V1','schema')
 require(c.get('graph')=='SimpleGraph.cycleGraph 11'and type(c.get('base_graph_power'))is int and c.get('base_graph_power')==3,'graph/power')
 require(c.get('source_commit')==COMMIT,'source commit')
 require(c.get('frozen_input_sha256')==BASE_SHA and c.get('parent_R4_sha256')==PARENT_SHA,'lineage')
 require(c.get('status')=='EXACT_FINITE_CONSTRUCTION_NOT_LEAN_CHECKED','status')
 require(json.dumps(c.get('targets'),sort_keys=True)==json.dumps(HISTORY,sort_keys=True),'comparison targets')
 require(type(c.get('dimension'))is int and c['dimension']>0,'dimension type')
 value,d,leaves,memo,tablechecks=evaluate(c,base)
 require(value==natural_string(c.get('N'),'N'),'cardinality mismatch')
 require(d==c['dimension']and d==3*leaves,'dimension mismatch')
 require(c.get('case_id')==f'C11_d{d}','case identifier')
 a=natural_string(c.get('decimal_lower_numerator'),'decimal lower');b=natural_string(c.get('decimal_upper_numerator'),'decimal upper');den=natural_string(c.get('decimal_denominator'),'denominator')
 require(den==10**15 and b==a+1,'decimal metadata')
 require(a**d<=value*den**d<b**d,'decimal bracket')
 comparisons={k:value**v['dimension']>int(v['N'])**d for k,v in HISTORY.items()}
 require(all(comparisons.values()),'does not beat every frozen reference root')
 return {'case_id':c['case_id'],'dimension':d,'N':str(value),'lower':f'{a//den}.{a%den:015d}','upper_exclusive':f'{b//den}.{b%den:015d}',
  'strict_comparisons':comparisons,'base_leaf_occurrences':leaves,'unique_nodes':len(c['nodes']),'literal_tables':len(c['tables']),
  'terminal_arity':len(c['tables'][c['nodes'][-1]['kind']][0]),'terminal_words':len(c['tables'][c['nodes'][-1]['kind']]),
  'table_checks':tablechecks,'node_weights':{k:[str(x)for x in w]if type(w)is tuple else str(w)for k,(w,d,l)in memo.items()},
  'node_dimensions':{k:d for k,(w,d,l)in memo.items()},'new_Lean_build':False}
def self_tests(c,f,base):
 results=[]
 def test(name,mutate,reason):
  obj=copy.deepcopy(c);mutate(obj)
  try:check(obj,base)
  except Rejected as e:require(reason in str(e),'wrong rejection reason for '+name);results.append({'test':name,'reason':str(e)})
  else:raise Rejected('negative control passed: '+name)
 test('wrong_schema',lambda z:z.update(schema='wrong'),'schema')
 test('wrong_graph',lambda z:z.update(graph='SimpleGraph.cycleGraph 13'),'graph/power')
 test('wrong_base_power',lambda z:z.update(base_graph_power=2),'graph/power')
 test('float_base_power',lambda z:z.update(base_graph_power=3.0),'graph/power')
 test('float_baseline_dimension',lambda z:z['targets']['R4_210'].update(dimension=210.0),'comparison targets')
 test('wrong_commit',lambda z:z.update(source_commit='0'*40),'source commit')
 test('wrong_parent_hash',lambda z:z.update(parent_R4_sha256='0'*64),'lineage')
 test('wrong_frozen_hash',lambda z:z.update(frozen_input_sha256='0'*64),'lineage')
 test('wrong_baseline_integer',lambda z:z['targets']['R4_210'].update(N='1'),'comparison targets')
 test('wrong_baseline_dimension',lambda z:z['targets']['R4_210'].update(dimension=207),'comparison targets')
 test('N_plus_one',lambda z:z.update(N=str(int(z['N'])+1)),'cardinality mismatch')
 test('wrong_dimension',lambda z:z.update(dimension=z['dimension']+3),'dimension mismatch')
 test('wrong_decimal',lambda z:z.update(decimal_lower_numerator=str(int(z['decimal_lower_numerator'])+1),decimal_upper_numerator=str(int(z['decimal_upper_numerator'])+1)),'decimal bracket')
 test('wrong_denominator',lambda z:z.update(decimal_denominator=str(10**14)),'decimal metadata')
 test('false_Lean_status',lambda z:z.update(status='LEAN_CHECKED'),'status')
 test('cyclic_root',lambda z:z['nodes'][-1]['children'].__setitem__(0,z['root']),'forward/cyclic reference')
 test('wrong_child_count',lambda z:z['nodes'][-1]['children'].pop(),'child count')
 test('duplicate_node',lambda z:z['nodes'].append(copy.deepcopy(z['nodes'][0])),'duplicate/malformed node')
 test('unreachable_node',lambda z:z['nodes'].insert(0,{'name':'unused','kind':'base'}),'unreachable node')
 test('unused_table',lambda z:z['tables'].update(unused=copy.deepcopy(next(iter(z['tables'].values())))),'unused table')
 def duplicate(z):
  row=z['tables'][z['nodes'][-1]['kind']];row.append(row[0])
 test('duplicate_terminal_word',duplicate,'duplicate table word')
 def confusable(z):
  row=z['tables'][z['nodes'][-1]['kind']];q=len(row[0]);w=next(''.join(v)for v in itertools.product(LETTERS,repeat=q)if ''.join(v)not in row and not separated(''.join(v),row[0]));row.append(w)
 test('new_conflicting_terminal_word',confusable,'within-row conflict')
 def badrow(z):
  tab=next(t for t in z['tables'].values()if type(t)is dict);tab.pop('B')
 test('missing_substitution_row',badrow,'table rows')
 f2=copy.deepcopy(f);f2['I'][1]=f2['I'][0]
 try:base_families(f2)
 except Rejected as e:require('duplicate base word'in str(e),'base mutation reason');results.append({'test':'duplicate_seed','reason':str(e)})
 else:raise Rejected('negative duplicate seed passed')
 return results

def manifest(root):
 entries={}
 for line in (root/'MANIFEST.sha256').read_text().splitlines():
  m=re.fullmatch(r'([0-9a-f]{64})  (.+)',line);require(m is not None,'manifest syntax');sha,name=m.groups();p=Path(name)
  require(not p.is_absolute()and '..'not in p.parts and name not in entries,'manifest path')
  fp=root/p;require(fp.is_file()and not fp.is_symlink(),'manifest file')
  require(hashlib.sha256(fp.read_bytes()).hexdigest()==sha,'manifest digest '+name);entries[name]=sha
 actual={p.relative_to(root).as_posix()for p in root.rglob('*')if p.is_file()and p!=root/'MANIFEST.sha256'}
 require(actual==set(entries),'manifest coverage');return len(entries)
def main(root,self_test=False,check_manifest=False):
 raw=(root/'FROZEN_INPUTS.json').read_bytes();require(hashlib.sha256(raw).hexdigest()==BASE_SHA,'frozen data digest');f=json.loads(raw);base,br=base_families(f)
 par=root/'ancestry/C11_Follow_On_Search_R4_2026-09-08.zip';require(hashlib.sha256(par.read_bytes()).hexdigest()==PARENT_SHA,'parent archive digest')
 with zipfile.ZipFile(par)as z:
  for d in (201,210):
   old=json.loads(z.read(f'C11_Follow_On_Search_R4_2026-09-08/certificates/C11_d{d}.json'))
   N,dim,*_=evaluate(old,base);require(N==int(HISTORY[f'R4_{d}']['N'])and dim==d,'R4 baseline replay')
 cases=[json.loads(p.read_text())for p in sorted((root/'certificates').glob('*.json'))];require(len(cases)>=2,'missing frontier candidates')
 reports=[check(c,base)for c in cases]
 out={'status':'PASS_C11_R5_INDEPENDENT_EXACT_REPLAY','base':br,'R4_positive_controls':True,'cases':reports,'Lean_status':'NOT_BUILT_FOR_R5','optimality_claim':False,'priority_claim':False}
 if self_test:out['negative_controls']=self_tests(cases[0],f,base)
 if check_manifest:out['manifest_files']=manifest(root)
 return out
if __name__=='__main__':
 ap=argparse.ArgumentParser();ap.add_argument('--self-test',action='store_true');ap.add_argument('--manifest',action='store_true');args=ap.parse_args()
 try:print(json.dumps(main(Path(__file__).resolve().parent,args.self_test,args.manifest),indent=2))
 except (Rejected,KeyError,TypeError,OSError,ValueError)as e:print(json.dumps({'status':'FAIL','error':str(e)}));raise SystemExit(1)
