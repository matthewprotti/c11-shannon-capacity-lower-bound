import os
os.environ['OPENBLAS_NUM_THREADS']='1';os.environ['OMP_NUM_THREADS']='1'
from common import *
import numpy as np,time,sys
START=time.monotonic();LIMIT=float(sys.argv[2]) if len(sys.argv)>2 else 150
inp=Path(sys.argv[1]) if len(sys.argv)>1 else ROOT/'schedule_d204.json'
c=json.loads(inp.read_text());tabs=copy.deepcopy(c['tables']);dims0=c['dimension']
node_map={n['name']:n for n in c['nodes']};allnodes=[]
def unroll(name):
 n=node_map[name];t={'name':f'n{len(allnodes)}','origin':name,'kind':n['kind']};allnodes.append(t)
 t['children']=[unroll(k) for k in n.get('children',[])];return t
root=unroll(c['root'])
# Tables stay attached to each occurrence, not shared mutably across the DAG.
for t in allnodes:
 if t['kind']!='base':t['table']=copy.deepcopy(tabs[t['kind']])
def evaltree(t):
 if t['kind']=='base':t['w']=BASE;t['dim']=3
 else:
  t['w']=evaluate(t['table'],[evaltree(k) for k in t['children']]);t['dim']=sum(k['dim'] for k in t['children'])
 return t['w']
def ad(t,grad):
 t['gradient']=grad
 if t['kind']=='base':return
 ch=t['children'];gs=[[0]*7 for _ in ch];tab=t['table']
 sets=[(1,tab)]if isinstance(tab,list)else[(grad[IDX[a]],tab[a])for a in ABC]
 for upstream,words in sets:
  for word in words:
   for j,a in enumerate(word):gs[j][IDX[a]]+=upstream*math.prod(ch[k]['w'][IDX[b]]for k,b in enumerate(word)if k!=j)
 for child,g in zip(ch,gs):ad(child,g)
letters='BNADHV';L=[IDX[a] for a in letters]
sep=np.array([[(a,b) in SEP for b in ABC]for a in ABC]);structures={}
for q in [2,3]:
 words=[''.join(w)for w in itertools.product(letters,repeat=q)];wi=np.array([[IDX[a]for a in w]for w in words]);out=np.repeat(L,len(words));wordsall=words*6;ww=np.tile(wi,(6,1))
 separated=np.any(sep[ww[:,None,:],ww[None,:,:]],axis=2)
 Cx=((out[:,None]==out[None,:])|sep[out[:,None],out[None,:]])&~separated
 structures[q]=(out,wordsall,Cx,{(ABC[o],w):j for j,(o,w)in enumerate(zip(out,wordsall))})
structures['root']=(np.zeros(216,dtype=int),words,~np.any(sep[wi[:,None,:],wi[None,:,:]],axis=2),{w:j for j,w in enumerate(words)})

def improve(t):
 tab=t['table'];q='root' if isinstance(tab,list) else len(t['children']);out,words,Cx,lookup=structures[q]
 exact=[(1 if q=='root' else t['gradient'][o])*math.prod(ch['w'][IDX[a]] for ch,a in zip(t['children'],w))for o,w in zip(out,words)]
 scale=max(exact)
 if not scale:return None,[]
 w=np.array([v/scale for v in exact]);
 initial=set(lookup[s] for s in tab) if q=='root' else set(lookup[(a,s)]for a in letters for s in tab[a])
 S=set(initial);moves=[]
 for step in range(20):
  chosen=sorted(S);cw=w[chosen];block=Cx[:,chosen];cost=block@cw;gain=w-cost;gain[chosen]=-np.inf
  j=int(np.argmax(gain));new=[j];remove={s for s in S if Cx[j,s]}
  if gain[j]<=1e-16:
   shared=(block*cw)@block.T
   pgain=(w-cost)[:,None]+(w-cost)[None,:]+shared
   pgain[Cx]=-np.inf;pgain[chosen,:]=-np.inf;pgain[:,chosen]=-np.inf
   p,r=map(int,np.unravel_index(np.argmax(pgain),pgain.shape))
   if pgain[p,r]<=1e-16:break
   new=[p,r];remove={s for s in S if Cx[p,s]or Cx[r,s]}
  delta=sum(exact[j]for j in new)-sum(exact[j]for j in remove)
  if delta<=0:break
  S.difference_update(remove);S.update(new)
  moves.append(dict(add=[(ABC[out[j]],words[j])for j in new],remove=[(ABC[out[j]],words[j])for j in sorted(remove)],exact_gain=str(delta)))
 if S==initial:return None,[]
 if q=='root':newtab=[words[j]for j in sorted(S)]
 else:
  newtab={a:[]for a in ABC}
  for j in sorted(S):newtab[ABC[out[j]]].append(words[j])
 assert admissible(newtab)
 return newtab,moves

def serialize():
 ns=[];outtabs={};canon={}
 def visit(t):
  if t['kind']=='base':key='base';kind='base';kids=[]
  else:
   kids=[visit(k)for k in t['children']];keytab=json.dumps(t['table'],sort_keys=True)
   kind=hashlib.sha256(keytab.encode()).hexdigest()[:16]
   outtabs[kind]=t['table'];key=(kind,tuple(kids))
  if key in canon:return canon[key]
  name='v' if key=='base' else f'n{len(ns)}'
  ns.append(dict(name=name,kind=kind,**({'children':kids}if kids else {})));canon[key]=name;return name
 visit(root);return ns,outtabs
base=evaltree(root);records=[]
for sweep in range(5):
 changes=0
 for t in allnodes:
  if t['kind']=='base':continue
  if time.monotonic()-START>LIMIT:break
  old=evaltree(root);ad(root,None)
  newtab,moves=improve(t)
  if newtab is not None:
   t['table']=newtab;new=evaltree(root)
   delta=sum(int(m['exact_gain'])for m in moves)
   assert new-old==delta>0
   changes+=1
   rec=dict(sweep=sweep,node=t['name'],origin=t['origin'],arity=len(t['children']),moves=moves,N=str(new),root=root_value(new,dims0),elapsed=time.monotonic()-START)
   records.append(rec)
   print('TRADE',rec['origin'],t['name'],'sweep',sweep,'root',rec['root'],'delta',delta,'seconds',rec['elapsed'],flush=True)
   ns,tt=serialize();save_certificate(ROOT/f'trades_d{dims0}.json',ns,tt,meta={'parent_candidate':inp.name,'moves':records})
 print('SWEEP',sweep,'changes',changes,'elapsed',time.monotonic()-START,flush=True)
 if not changes or time.monotonic()-START>LIMIT:break
(ROOT/f'trades_d{dims0}_summary.json').write_text(json.dumps(dict(start_N=str(base),final_N=str(evaltree(root)),dimension=dims0,elapsed=time.monotonic()-START,moves=records),indent=2)+'\n')
