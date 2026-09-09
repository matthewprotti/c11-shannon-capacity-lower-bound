from __future__ import annotations
import sys, json, math, time, itertools
from pathlib import Path
from collections import Counter
sys.dont_write_bytecode=True
R6=Path('/mnt/data/r9_work/r6/C11_Avoidance_Profile_R6_2026-09-08')
sys.path.insert(0,str(R6/'verification'))
import mask_replay as p
L=p.LETTERS
TYPES=tuple((a,m) for a in range(7) for m in range(128) if m>>a&1 and not m&p.NEIGH[a])
IX={t:i for i,t in enumerate(TYPES)}
SEP=tuple(tuple((a==b and m!=n) or not(m>>b&1) or not(n>>a&1) for b,n in TYPES) for a,m in TYPES)
class ConflictIndex:
 def __init__(self,rows):
  self.words=sorted(set(w for row in rows for w in row)); self.ids={w:j for j,w in enumerate(self.words)}
  self.q=len(self.words[0]) if self.words else 0
  self.rowbits=[sum(1<<self.ids[w] for w in set(row)) for row in rows]
  postings=[[0]*58 for _ in range(self.q)]
  for j,w in enumerate(self.words):
   for i,a in enumerate(w):postings[i][a]|=1<<j
  self.cf=[[sum(postings[i][b] for b in range(58) if not SEP[a][b]) for a in range(58)] for i in range(self.q)]
  self.all=(1<<len(self.words))-1
 def conflicts(self,w):
  z=self.all
  for i,a in enumerate(w):
   z &=self.cf[i][a]
   if not z:break
  return z
 def mask(self,w):
  z=self.conflicts(w)
  return sum(1<<a for a,row in enumerate(self.rowbits) if z&row)
 def check_coarse(self):
  for a,row in enumerate(self.rowbits):
   prot=row
   for b in range(7):
    if p.NEIGH[a]>>b&1:prot|=self.rowbits[b]
   for w in self.words:
    bit=1<<self.ids[w]
    if row&bit and self.conflicts(w)&(prot^bit):raise ValueError('not an admissible coarse output')
def step(children,table,spec=None,guard='coarse',retype='sharp',keep_tables=False):
 opts=[[[IX[(a,m)] for m,n in h[a].items() if n] for a in range(7)] for h in children]
 weights=[{IX[(a,m)]:n for a,row in enumerate(h) for m,n in row.items()}for h in children]
 def expand(w):return itertools.product(*(opts[i][L.index(a)]for i,a in enumerate(w)))
 rows=[list(itertools.chain.from_iterable(expand(w)for w in table[a])) for a in L]
 rawrows=[row[:] for row in rows]
 target=L.index(spec['target_family']) if spec else None
 added=[]
 phi_cache={}
 def phi(w):
  ms=tuple(TYPES[i][1]for i in w)
  if ms not in phi_cache:phi_cache[ms]=p.signature(table,ms)
  return phi_cache[ms]
 if spec:
  protected=(1<<target)|p.NEIGH[target]
  oldix=ConflictIndex(rows)
  protbits=0
  for a,row in enumerate(oldix.rowbits):
   if protected>>a&1:protbits|=row
  for word in spec['extension_words']:
   for w in expand(word):
    allow=not(phi(w)&protected) if guard=='coarse' else not(oldix.conflicts(w)&protbits)
    if allow:added.append(w)
  rows[target]+=added
 ix=ConflictIndex(rows)
 out=[Counter()for _ in range(7)]; outrows=[[]for _ in TYPES]
 addset=set(added)
 tightcount=0;old_bit_count=0;new_bit_count=0
 # For tight-update only, compare with selected extension itself.
 if added:extension_bits=sum(1<<ix.ids[w]for w in added)
 else:extension_bits=0
 for a,row in enumerate(rows):
  if len(set(row))!=len(row):raise ValueError('duplicate word')
  for w in row:
   old=phi(w)
   if spec:
    if a==target and w in addset:old|=1<<target
    elif a!=target and not(p.NEIGH[target]>>a&1):old|=1<<target
   if retype=='sharp':m=ix.mask(w)
   elif retype=='tight_update':
    m=phi(w)
    if a==target and w in addset:m|=1<<target
    elif ix.conflicts(w)&extension_bits:m|=1<<target
   else:m=old
   if m&~old:raise ValueError(('not a refinement',a,w,m,old))
   tightcount+=m!=old;old_bit_count+=old.bit_count();new_bit_count+=m.bit_count()
   n=math.prod(weights[i][s]for i,s in enumerate(w));out[a][m]+=n;outrows[IX[(a,m)]].append(w)
 p.check_profiles(out)
 return list(map(dict,out)),{'old_tagged_cells':sum(map(len,rawrows)),'added_tagged_cells':len(added),'tightened_cells':tightcount,'removed_mask_bits':old_bit_count-new_bit_count,'added_count':str(sum(math.prod(weights[i][s]for i,s in enumerate(w))for w in added))},outrows

def run(d=213,guard='coarse',retype='sharp', verbose=False):
 h0,_=p.base((R6/'FROZEN_INPUTS.json').read_bytes())
 c=json.loads((R6/f'certificates/C11_AP_d{d}.json').read_text());parent=json.loads((R6/f'parent/C11_d{d}.json').read_text())
 patch={x['node']:x for x in c['augmentations']};H={};D={};audit={};tables={}
 t0=time.perf_counter()
 for node in parent['nodes']:
  name=node['name'];kind=node['kind']
  if kind=='base':H[name]=h0;D[name]=3;continue
  ins=[H[k]for k in node['children']];T=parent['tables'][kind];D[name]=sum(D[k]for k in node['children'])
  if isinstance(T,list):
   N=sum(math.prod(sum(ins[i][L.index(a)].values())for i,a in enumerate(w))for w in T)
   options=[[[IX[(a,m)]for m,n in h[a].items()if n]for a in range(7)]for h in ins]
   tables[name]={'kind':'terminal','rows':[list(z)for w in T for z in itertools.product(*(options[i][L.index(a)]for i,a in enumerate(w)))]}
  else:
   H[name],audit[name],tr=step(ins,T,patch.get(name),guard,retype,True)
   tables[name]={'kind':'substitution','rows':[[list(w)for w in row]for row in tr]}
  if verbose:print(name,'bins',sum(map(len,H.get(name,[]))),'seconds',time.perf_counter()-t0,flush=True)
 out={'N':str(N),'dimension':D[parent['root']],'guard':guard,'retype':retype,'hist':H,'audits':audit,'tables':tables,'nodes':[{'name':n['name'],'kind':'base'if n['kind']=='base'else n['name'],**({'children':n['children']}if 'children'in n else {})}for n in parent['nodes']],'root':parent['root'],'seconds':time.perf_counter()-t0}
 print('RESULT',d,guard,retype,N>int(c['N']),math.exp(math.log(N)/d),out['seconds'], 'tightened',sum(a['tightened_cells']for a in audit.values()),flush=True)
 Path(f'/mnt/data/r9_work/scout_{d}_{guard}_{retype}.json').write_text(json.dumps(out,separators=(',',':')))
 return out
if __name__=='__main__':run(int(sys.argv[1])if len(sys.argv)>1 else 213,sys.argv[2]if len(sys.argv)>2 else 'coarse',sys.argv[3]if len(sys.argv)>3 else 'sharp',True)
