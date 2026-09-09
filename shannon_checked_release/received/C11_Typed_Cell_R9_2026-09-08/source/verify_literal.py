"""Independent finite verifier. Imports no search, profile compiler, or retyping code."""
from __future__ import annotations
import json, itertools, math, re, hashlib, zipfile
from pathlib import Path
L='BNADOHV'; EDGES=('BO','BH','BV','NA','ND','NO','NH','NV','AD','AH','DV')
COARSE={(L.index(a),L.index(b))for a,b in EDGES}|{(L.index(b),L.index(a))for a,b in EDGES}
TYPES=tuple((a,m)for a in range(7)for m in range(128)
            if m>>a&1 and all(not(m>>b&1)for b in range(7)if(a,b)in COARSE))
IDS={t:i for i,t in enumerate(TYPES)}
REL=tuple(tuple((a==b and m!=n)or not(m>>b&1)or not(n>>a&1)for b,n in TYPES)for a,m in TYPES)
BASE_SHA='bc3f401480f2b9a878ad24faa1d98c1ad848755a0537ceff0043f12f67bf7c26'
R6_SHA='24b64ccbd1f38cd1ad7921993575d6ebff0638c5d3c694f8e78c8fca3b2be045'
FIELDS={'schema','graph','base_dimension','dimension','N','parent_N','decimal_lower_numerator','decimal_upper_numerator','decimal_denominator','base_sha256','parent_typed_sha256','frozen_R6_sha256','letters','tables','nodes','root','change_scope','status'}

def need(ok,msg):
    if not ok:raise ValueError(msg)
def sha(raw):return hashlib.sha256(raw).hexdigest()
def natural(x):
    need(type(x)is str and re.fullmatch(r'0|[1-9][0-9]*',x)is not None,'bad natural')
    return int(x)

def base(raw):
    need(sha(raw)==BASE_SHA,'wrong base')
    f=json.loads(raw);I=set(f['I']);X=set(f['X']);P={p for p,q in f['pairs']};Q={q for p,q in f['pairs']}
    need(len(I)==len(f['I'])==len(X)==len(f['X'])==148,'seed counts')
    need(all(type(x)is int and 0<=x<1331 for x in I|X|P|Q),'seed vertices')
    offsets=tuple(itertools.product((-1,0,1),repeat=3))
    def neighbourhood(x):
        a,b,c=x%11,x//11%11,x//121
        return {((a+i)%11)+11*((b+j)%11)+121*((c+k)%11)for i,j,k in offsets}
    nbs={x:neighbourhood(x)for x in I|X|P|Q}
    for U in (I,X):need(all((nbs[x]&U)=={x}for x in U),'seed independence')
    need(len(P)==len(Q)==3 and P<=I,'parents')
    for p,q in f['pairs']:need((nbs[q]&I)=={p},'private pair')
    A={x for x in X if nbs[x]&P};D={x for x in X if nbs[x]&Q}
    need(not A&D,'footprint overlap')
    fam=(I-P,X-A-D,A,D,P,Q,P);typed=[set()for _ in TYPES]
    for a,F in enumerate(fam):
        for x in F:
            m=sum(1<<b for b,G in enumerate(fam)if nbs[x]&G)
            need((a,m)in IDS,'mask normalization');typed[IDS[(a,m)]].add(x)
    checks=0
    for i,F in enumerate(typed):
        for x in F:need(nbs[x]&F=={x},'typed independence')
        checks+=len(F)*(len(F)-1)//2
        for j in range(i):
            if REL[i][j]:
                need(all(not nbs[x]&typed[j]for x in F),'typed cross conflict')
                checks+=len(F)*len(typed[j])
    return [len(F)for F in typed],checks


def inspect(table):
    need(type(table)is dict and set(table)=={'kind','rows'},'table fields')
    need(table['kind']in('terminal','substitution'),'table kind')
    terminal=table['kind']=='terminal';rows=[table['rows']]if terminal else table['rows']
    need(terminal or len(rows)==58,'row count')
    need(all(type(row)is list for row in rows),'row type')
    flat=[w for row in rows for w in row];need(flat,'empty table');q=len(flat[0]);need(q in (1,2,3,4),'arity')
    need(all(type(w)is list and len(w)==q and all(type(a)is int and 0<=a<58 for a in w)for w in flat),'word type')
    rowwords=[list(map(tuple,row))for row in rows]
    for row in rowwords:need(len(row)==len(set(row)),'duplicate word')
    unique=sorted(set(w for row in rowwords for w in row));index={w:j for j,w in enumerate(unique)}
    posts=[[0]*58 for _ in range(q)]
    for j,w in enumerate(unique):
        for i,a in enumerate(w):posts[i][a]|=1<<j
    bad=[[sum(posts[i][b]for b in range(58)if not REL[a][b])for a in range(58)]for i in range(q)]
    rowbits=[sum(1<<index[w]for w in row)for row in rowwords];allbits=(1<<len(unique))-1
    incompat=[]
    for w in unique:
        mask=allbits
        for i,a in enumerate(w):mask&=bad[i][a]
        incompat.append(mask)
    within=0;cross=0
    for a,row in enumerate(rowwords):
        protected=rowbits[a]
        if not terminal:
            for b in range(a):
                if REL[a][b]:protected|=rowbits[b];cross+=len(row)*len(rowwords[b])
        within+=len(row)*(len(row)-1)//2
        for w in row:
            j=index[w];need(not incompat[j]&(protected^(1<<j)),'literal separation failure')
    return q,{'within_pairs':within,'cross_pairs':cross,'generators':len(flat)}


def evaluate(data,h0):
    need(data['letters']==[{'family':L[a],'mask':m}for a,m in TYPES],'wrong type alphabet')
    tables=data['tables'];checks={k:inspect(t)for k,t in tables.items()};weights={};dims={};definitions={};used=set()
    for node in data['nodes']:
        name=node['name'];kind=node['kind'];need(name not in weights,'duplicate node')
        if kind=='base':need(set(node)=={'name','kind'},'base fields');w=h0;d=3
        else:
            need(set(node)=={'name','kind','children'}and kind in tables,'node fields')
            kids=node['children'];need(len(kids)==checks[kind][0],'wrong child count')
            need(all(k in weights and type(weights[k])is list for k in kids),'cyclic or invalid child')
            d=sum(dims[k]for k in kids);t=tables[kind];rows=[t['rows']]if t['kind']=='terminal'else t['rows']
            out=[sum(math.prod(weights[k][a]for k,a in zip(kids,word))for word in row)for row in rows]
            w=out[0]if t['kind']=='terminal'else out;used.add(kind)
        weights[name]=w;dims[name]=d;definitions[name]=node
    root=data['root'];need(root==data['nodes'][-1]['name']and type(weights[root])is int,'wrong root')
    need(used==set(tables),'unused table');seen=set()
    def visit(k):
        if k in seen:return
        seen.add(k)
        for x in definitions[k].get('children',[]):visit(x)
    visit(root);need(seen==set(definitions),'unreachable node')
    return weights[root],dims[root],weights,dims,{k:v[1]for k,v in checks.items()}


def verify(c,root):
    need(set(c)==FIELDS,'certificate fields')
    need(c['schema']=='C11_TYPED_TERMINAL_R9_V1','schema')
    need(c['graph']=='SimpleGraph.cycleGraph 11'and type(c['base_dimension'])is int and c['base_dimension']==3,'graph')
    d=c['dimension'];need(type(d)is int and d in(198,213),'dimension')
    need(c['change_scope']=='TERMINAL_TABLE_ONLY','scope')
    need(c['status']=='FINITE_CERTIFICATE_NOT_R9_LEAN_CHECKED_OR_EXTERNALLY_REVIEWED','status')
    raw=(root/'inputs/FROZEN_INPUTS.json').read_bytes();need(c['base_sha256']==sha(raw)==BASE_SHA,'base binding')
    need(c['frozen_R6_sha256']==sha((root/'ancestors/R6_FINITE.zip').read_bytes())==R6_SHA,'R6 binding')
    oldraw=(root/f'inputs/C11_R6_d{d}.json').read_bytes();need(c['parent_typed_sha256']==sha(oldraw),'parent binding');old=json.loads(oldraw)
    with zipfile.ZipFile(root/'ancestors/R6_FINITE.zip')as z:
        need(z.read(f'C11_Avoidance_Profile_R6_2026-09-08/compiled/C11_TYPED_d{d}.json')==oldraw,'parent differs from sealed R6 archive')
    need(c['nodes']==old['nodes']and c['root']==old['root'],'assembly changed')
    need(set(c['tables'])==set(old['tables']),'table keys')
    for k,t in old['tables'].items():
        if k!=old['root']:need(c['tables'][k]==t,'internal table changed')
    h0,bcount=base(raw);N0,d0,_,_,_=evaluate(old,h0);need(str(N0)==old['N']==c['parent_N']and d0==d,'parent control')
    N,dim,W,D,counts=evaluate(c,h0);need(dim==d and N==natural(c['N'])and N>N0,'new count or strict improvement')
    lo=natural(c['decimal_lower_numerator']);hi=natural(c['decimal_upper_numerator']);den=natural(c['decimal_denominator'])
    need(den==10**15 and hi==lo+1 and lo**d<=N*den**d<hi**d,'decimal bracket')
    return {'dimension':d,'N':str(N),'parent_N':str(N0),'gain':str(N-N0),'lower':f'{lo//den}.{lo%den:015d}',
            'upper_exclusive':f'{hi//den}.{hi%den:015d}','node_count':len(W),'node_dimensions':D,
            'table_checks':counts,'base_pair_checks':bcount,'total_table_pairs':sum(x['within_pairs']+x['cross_pairs']for x in counts.values()),
            'internal_tables_unchanged':True,'Lean_checked':False},W
