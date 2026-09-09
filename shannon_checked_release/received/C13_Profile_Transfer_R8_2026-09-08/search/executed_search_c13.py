from scout_c13 import *
import random

def choose_code(vals,seed=0,tries=20):
 rng=random.Random(seed);words=sorted(w for w,n in vals.items()if n>0)
 if not words:return []
 weight=[vals[w]for w in words]
 conflicts=[{j for j,v in enumerate(words)if i!=j and not ap.separated(w,v)}for i,w in enumerate(words)]
 best=[];bestn=0
 for attempt in range(tries):
  if attempt==0:order=sorted(range(len(words)),key=lambda i:weight[i],reverse=True)
  else:order=sorted(range(len(words)),key=lambda i:math.log(weight[i])+rng.gauss(0,0.9+(attempt%4)*0.6),reverse=True)
  chosen=set()
  for i in order:
   if not chosen&conflicts[i]:chosen.add(i)
  changed=True
  while changed:
   changed=False
   for i in range(len(words)):
    if i in chosen:continue
    loss=chosen&conflicts[i]
    if weight[i]>sum(weight[j]for j in loss):chosen.difference_update(loss);chosen.add(i);changed=True
  n=sum(weight[i]for i in chosen)
  if n>bestn:bestn=n;best=[words[i]for i in sorted(chosen)]
 assert all(ap.separated(u,v)for u,v in itertools.combinations(best,2))
 return best

def coarse_offers(kids,table):
 ws=[[sum(x.values())for x in h]for h in kids];q=len(kids);opts=[]
 for a in L:
  protected=[b for b in L if a==b or(a,b)in ap.SEP]
  blocked=[w for b in protected for w in table[b]if all(ws[i][L.index(s)]for i,s in enumerate(w))]
  for w in itertools.product(L,repeat=q):
   w=''.join(w);n=math.prod(ws[i][L.index(s)]for i,s in enumerate(w))
   if n and all(ap.separated(u,w)for u in blocked):opts.append((a,w,n))
 return opts

if __name__=='__main__':
 t=time.monotonic();_,h0,_=base();c=make_parent();N,hs,ds,au=evaluate(c,h0);baseN=N;schedule={};history=[];control=[]
 for node in c['nodes']:
  if node['kind']=='base'or node['name']==c['root']:continue
  opts=coarse_offers([hs[k]for k in node['children']],c['tables'][node['kind']]);control.append({'node':node['name'],'offers':[{'family':a,'word':w,'count':str(n)}for a,w,n in opts]})
 print('COARSE CONTROL',[(o['node'],len(o['offers']))for o in control],flush=True)
 for iteration in range(8):
  start=time.monotonic();best=(N,None,None);trialN=0;possible=0
  for node in c['nodes']:
   name=node['name'];kind=node['kind']
   if kind=='base'or name in schedule or name==c['root']:continue
   opts=gains([hs[k]for k in node['children']],c['tables'][kind]);possible+=len(opts)
   for a in L:
    if a=='O':continue # same R6 policy; absent from every used downstream word
    vals={w:n for b,w,n in opts if a==b}
    words=choose_code(vals,sum(map(ord,name))+L.index(a),20)
    if not words:continue
    spec={'node':name,'target_family':a,'extension_words':words,'avoid_letters':''.join(b for b in L if b==a or(a,b)in ap.SEP),'mode':'KEEP_ZERO_MASKS_THEN_CONSERVATIVE_WIDENING'}
    nn,_,_,_=evaluate(c,h0,{**schedule,name:spec});trialN+=1
    if nn>best[0]:best=(nn,name,spec)
  nn,name,spec=best
  print('ROUND',iteration,'trials',trialN,'possible single rectangles',possible,'seconds',round(time.monotonic()-start,2),flush=True)
  if name is None:break
  schedule[name]=spec;N,hs,ds,au=evaluate(c,h0,schedule)
  assert N==nn
  history.append({'iteration':iteration,'new_node':name,'spec':spec,'N':str(N),'trials':trialN,'raw_positive_rectangle_offers':possible,'seconds':time.monotonic()-start})
  print('ACCEPT',name,spec['target_family'],spec['extension_words'],'root_approx',math.exp(math.log(N)/522),flush=True)
 out={'parent':c,'baseline_N':str(baseN),'N':str(N),'dimension':522,'schedule':list(schedule.values()),'history':history,'final_audits':au,'base_histogram':[{str(k):str(v)for k,v in h.items()}for h in h0],'coarse_control':control,'seconds':time.monotonic()-t}
 (R/'C13_SEARCH.json').write_text(json.dumps(out,indent=2)+'\n')
 print('DONE',len(schedule),time.monotonic()-t,flush=True)
