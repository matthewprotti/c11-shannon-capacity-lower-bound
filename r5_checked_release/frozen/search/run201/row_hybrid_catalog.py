from extended_tables import *
letters='BNADHV'
records={}
for q in [2,3]:
 parents={k:t for k,t in TABLES.items()if isinstance(t,dict) and max(len(w)for ws in t.values()for w in ws)==q}
 rowsets={a:sorted({tuple(sorted(t[a]))for t in parents.values()})for a in letters}
 compat={}
 for i,a in enumerate(letters):
  for j,b in enumerate(letters[:i]):
   if (a,b)in SEP:
    compat[a,b]=[[all(wordsep(u,v)for u in x for v in y)for y in rowsets[b]]for x in rowsets[a]]
 combos=[]
 def extend(current):
  i=len(current)
  if i==len(letters):combos.append(current);return
  a=letters[i]
  for ix in range(len(rowsets[a])):
   if all(compat[a,b][ix][iy] for b,iy in zip(letters,current)if (a,b)in SEP):extend(current+[ix])
 extend([])
 print('CATALOG',q,'rows',{a:len(rs)for a,rs in rowsets.items()},'valid_combos',len(combos),flush=True)
 records[q]={'rowsets':rowsets,'combos':combos}
(ROOT/'row_hybrid_catalog.json').write_text(json.dumps(records)+'\n')
