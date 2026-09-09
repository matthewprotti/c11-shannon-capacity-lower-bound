from profiles import *

def node_gains(children,table):
 rows=[[tuple(L.index(c)for c in word) for word in table[a]]for a in L]
 cache={}
 required=[(1<<a)|sum(1<<b for b in range(7)if (L[a],L[b])in old.SEP)for a in range(7)]
 def sig(masks):
  if masks not in cache:
   cache[masks]=sum(1<<b for b,words in enumerate(rows) if any(all(masks[i]&(1<<u)for i,u in enumerate(word))for word in words))
  return cache[masks]
 best=[(0,None,[])for _ in L];poss=[]
 for word in itertools.product(range(7),repeat=len(children)):
  gains=[0]*7;pieces=[[]for _ in L]
  for terms in itertools.product(*(children[i][u].items()for i,u in enumerate(word))):
   masks=tuple(t[0]for t in terms);m=sig(masks);n=math.prod(t[1]for t in terms)
   for a in range(7):
    if not(m&required[a]):gains[a]+=n;pieces[a].append([masks,n])
  text=''.join(L[u]for u in word)
  for a in range(7):
   if gains[a]>best[a][0]:best[a]=(gains[a],text,pieces[a])
  poss.append((text,gains))
 return best,poss

def weight_eval(c,overrides):
 ws={}
 for node in c['nodes']:
  name=node['name'];kind=node['kind']
  if kind=='base':w=tuple(len(s)for s in base_sets())
  else:
   table=c['tables'][kind];is_term=isinstance(table,list)
   rows=[table]if is_term else [table[a]for a in L]
   w=tuple(sum(math.prod(ws[ch][L.index(sym)]for ch,sym in zip(node['children'],word))for word in row)for row in rows)
   if is_term:w=w[0]
  if name in overrides:
   a,gain=overrides[name];w=list(w);w[a]+=gain;w=tuple(w)
  ws[name]=w
 return ws[c['root']],ws

