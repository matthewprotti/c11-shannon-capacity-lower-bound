"""Exploratory search utilities. Candidate verification is a separate program."""
from pathlib import Path
import json,itertools,math,copy,hashlib
ROOT=Path(__file__).resolve().parent
FROZEN=ROOT.parent
F=json.loads((FROZEN/'FROZEN_INPUTS.json').read_text())
C=json.loads((FROZEN/'R3_FROZEN_CANDIDATE.json').read_text())
ABC='BNADOHV'; IDX={x:i for i,x in enumerate(ABC)}
SEP={tuple(p) for p in F['sep']}|{tuple(reversed(p)) for p in F['sep']}
TABLES=copy.deepcopy(F['tables'])
TABLES['T3mix']=C['replacement_table']
TABLES['T3d']=copy.deepcopy(C['replacement_table'])
TABLES['T3d']['B']='ABV BBB BHD BVA DAH DDV DNH HAA HAN VAD VDN VHA VHH'.split()
BASE=(145,142,3,3,3,3,3)
REFLECT=str.maketrans('ADHV','DAVH')
def wordsep(u,v): return any((a,b) in SEP for a,b in zip(u,v))
def admissible(tab):
 if isinstance(tab,list):return len(tab)==len(set(tab)) and all(wordsep(u,v) for u,v in itertools.combinations(tab,2))
 return (set(tab)==set(ABC) and all(len(v)==len(set(v)) for v in tab.values()) and
  all(wordsep(u,v) for a in ABC for u,v in itertools.combinations(tab[a],2)) and
  all(wordsep(u,v) for a,b in itertools.combinations(ABC,2) if (a,b) in SEP for u in tab[a] for v in tab[b]))
def evaluate(tab,ws):
 def row(words):return sum(math.prod(w[IDX[a]] for w,a in zip(ws,s)) for s in words)
 return row(tab) if isinstance(tab,list) else tuple(row(tab[a]) for a in ABC)
def profile_eval(nodes,tabs=TABLES):
 vals={};dims={}
 for n in nodes:
  if n['kind']=='base': vals[n['name']]=BASE;dims[n['name']]=3
  else:
   vals[n['name']]=evaluate(tabs[n['kind']],[vals[k] for k in n['children']])
   dims[n['name']]=sum(dims[k] for k in n['children'])
 return vals,dims

def initial_nodes():
 ns=copy.deepcopy(F['nodes'])
 for n in ns:
  n.pop('exponent',None)
  if n['name']=='x27':n['kind']='T3mix'
 return ns

def root_value(N,d):return math.exp(math.log(N)/d)
def save_certificate(path,nodes,tables=TABLES,meta=None):
 vals,dims=profile_eval(nodes,tables)
 name=nodes[-1]['name']; N=vals[name];d=dims[name]
 used={n['kind'] for n in nodes if n['kind']!='base'}
 cert=dict(schema='C11_RECURSIVE_SEARCH_CERTIFICATE_V1',source_commit=F['source_commit'],
  parent_r3_sha256='9ac3006b54d5c449db357819d88ea507b66778923c61c54623d72d905517a357',
  frozen_input_sha256=hashlib.sha256((FROZEN/'FROZEN_INPUTS.json').read_bytes()).hexdigest(),
  tables={t:tables[t] for t in sorted(used)},nodes=nodes,root=name,dimension=d,N=str(N),
  target_N=C['N1'],target_dimension=207,beats_R3=pow(N,207)>pow(int(C['N1']),d),
  decimal_approximation=root_value(N,d),metadata=meta or {},status='FINITE_EXACT_CANDIDATE_NOT_LEAN_CHECKED')
 Path(path).write_text(json.dumps(cert,indent=2)+'\n')
 return cert
if __name__=='__main__':
 assert all(admissible(t) for t in TABLES.values())
 vs,ds=profile_eval(initial_nodes());assert vs['root']==int(C['N1']) and ds['root']==207
 print('R3_POSITIVE_CONTROL',root_value(vs['root'],207))
