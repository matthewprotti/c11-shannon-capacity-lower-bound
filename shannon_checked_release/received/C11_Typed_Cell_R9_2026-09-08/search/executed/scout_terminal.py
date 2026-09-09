import sys,math,time,json,itertools
from pathlib import Path
sys.dont_write_bytecode=True
from scout_cells import ConflictIndex,select,IX,TYPES,SEP,L,p,R6

def terminal_pass(file,tries=100,seed=0):
 r=json.loads(Path(file).read_text());H={k:[{int(m):int(n)for m,n in row.items()}for row in v]for k,v in r['hist'].items()};nd=r['nodes'][-1];kids=[H[k]for k in nd['children']]
 opts=[{IX[(a,m)]:n for a,row in enumerate(h)for m,n in row.items()}for h in kids]
 rows=[tuple(w)for w in r['tables'][r['root']]['rows']];ix=ConflictIndex([rows]);t=time.perf_counter()
 cand=[];cost={}
 for w in itertools.product(*(tuple(o)for o in opts)):
  if not ix.conflicts(w):cand.append(w);cost[w]=math.prod(opts[i][j]for i,j in enumerate(w))
 print('SAFE',len(cand),'universe',math.prod(map(len,opts)),'scan',time.perf_counter()-t,flush=True)
 extra=select(cand,cost,seed,tries)
 Nold=int(r['N']);N=Nold+sum(cost[w]for w in extra)
 print('TERMINAL',len(extra),r['dimension'],math.exp(math.log(N)/r['dimension']),'gain fraction',float((N-Nold)/Nold),'secs',time.perf_counter()-t,flush=True)
 r['N']=str(N);r['tables'][r['root']]['rows']+=list(map(list,extra));r['terminal_search']={'seed':seed,'tries':tries,'universe':math.prod(map(len,opts)),'safe_candidates':len(cand),'selected':len(extra),'old_N':str(Nold),'elapsed':time.perf_counter()-t}
 path=Path(str(file).replace('.json','_terminal.json'));path.write_text(json.dumps(r,separators=(',',':')));print(path)
if __name__=='__main__':terminal_pass(sys.argv[1])
