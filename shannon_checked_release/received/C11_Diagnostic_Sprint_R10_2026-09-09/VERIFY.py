#!/usr/bin/env python3
"""Exact receiving verifier. Standard library only; no search or solver is trusted.
The PSD upper bound is for the pinned terminal-cell model, not Shannon capacity.
"""
from __future__ import annotations
import argparse,copy,hashlib,itertools,json,math,re,sys,zipfile
from pathlib import Path
from fractions import Fraction as Q
sys.dont_write_bytecode=True
ROOT=Path(__file__).resolve().parent
sys.path.insert(0,str(ROOT/'source'))
import verify_literal as first
import inherited_typed_replay as second
PARENT_SHA='d74fab6f4dd44a5c04124bd53e8dcf2e1ecaa6d48a95dc54f7a87a24d491025f'
BASE_SHA='bc3f401480f2b9a878ad24faa1d98c1ad848755a0537ceff0043f12f67bf7c26'

def need(x,msg):
    if not x:raise ValueError(msg)
def digest(x):return hashlib.sha256(x).hexdigest()
def nat(s):
    need(type(s)is str and re.fullmatch('0|[1-9][0-9]*',s)is not None,'invalid natural literal');return int(s)
def integer(s):
    need(type(s)is str and re.fullmatch('0|-?[1-9][0-9]*',s)is not None,'invalid integer literal');return int(s)
def frac(n,d):
    den=nat(d);need(den>0,'nonpositive denominator');return Q(integer(n),den)
def root_bracket(num,den,d,places=15):
    scale=10**places;target=num*scale**d;lo=0;hi=scale
    while hi**d*den<=target:hi*=2
    while hi-lo>1:
        m=(lo+hi)//2
        if m**d*den<=target:lo=m
        else:hi=m
    def fmt(z):return f'{z//scale}.{z%scale:0{places}d}'
    return {'lower':fmt(lo),'upper_exclusive':fmt(hi),'lower_numerator':str(lo),'denominator':str(scale)}

def pd_ldl(A):
    n=len(A);L=[[Q(int(i==j))for j in range(n)]for i in range(n)];D=[]
    for j in range(n):
        dj=A[j][j]-sum(L[j][k]**2*D[k]for k in range(j));need(dj>0,'nonpositive exact LDL pivot');D.append(dj)
        for i in range(j+1,n):L[i][j]=(A[i][j]-sum(L[i][k]*L[j][k]*D[k]for k in range(j)))/dj
    return len(D)

def det_bareiss(M):
    A=[list(row)for row in M];n=len(A);prev=1
    if not n:return 1
    for k in range(n-1):
        piv=A[k][k];need(piv!=0,'zero leading minor in Bareiss check')
        for i in range(k+1,n):
            for j in range(k+1,n):
                z=A[i][j]*piv-A[i][k]*A[k][j];need(z%prev==0,'nonexact Bareiss division');A[i][j]=z//prev
        for i in range(k+1,n):A[i][k]=0
        prev=piv
    return A[-1][-1]

def pd_sylvester(A):
    den=math.lcm(*(x.denominator for row in A for x in row));M=[[int(x*den)for x in row]for row in A]
    for k in range(1,len(A)+1):need(det_bareiss([r[:k]for r in M[:k]])>0,'nonpositive exact leading minor')
    return len(A)

def load_parent():
    zraw=(ROOT/'ancestors/R9_FINITE.zip').read_bytes();need(digest(zraw)==PARENT_SHA,'R9 ancestor digest')
    with zipfile.ZipFile(ROOT/'ancestors/R9_FINITE.zip')as z:
        pre='C11_Typed_Cell_R9_2026-09-08/'
        for local,old in [('inputs/FROZEN_INPUTS.json','inputs/FROZEN_INPUTS.json'),('inputs/R9_d213.json','certificates/C11_R9_d213.json'),('source/verify_literal.py','source/verify_literal.py'),('source/inherited_typed_replay.py','source/inherited_typed_replay.py')]:
            need((ROOT/local).read_bytes()==z.read(pre+old),'parent member mismatch: '+local)
    raw=(ROOT/'inputs/FROZEN_INPUTS.json').read_bytes();need(digest(raw)==BASE_SHA,'base digest')
    c=json.loads((ROOT/'inputs/R9_d213.json').read_text());h0,_=first.base(raw);h02,_=second.literal_base(json.loads(raw));need(h0==h02,'base replay disagreement')
    N,d,H,D,checks=first.evaluate(c,h0);need(d==213 and str(N)==c['N'],'R9 replay discrepancy')
    need(first.TYPES==tuple(second.LABELS),'alphabet disagreement')
    return raw,c,N,H,D,checks

def second_evaluate(c,raw):
    base,_=second.literal_base(json.loads(raw));dims={};weights={};counts={k:second.inspect_table(t)for k,t in c['tables'].items()}
    # Deliberately use recursive dependency traversal, not first verifier's topological pass.
    nodes={n['name']:n for n in c['nodes']};busy=set()
    def run(k):
        if k in weights:return weights[k]
        need(k not in busy,'cycle');busy.add(k);n=nodes[k]
        if n['kind']=='base':out=base;dims[k]=3
        else:
            ins=[run(j)for j in n['children']];t=c['tables'][n['kind']];rows=[t['rows']]if t['kind']=='terminal'else t['rows']
            values=[]
            for row in rows:
                total=0
                for w in row:
                    prod=1
                    for i,a in enumerate(w):prod*=ins[i][a]
                    total+=prod
                values.append(total)
            out=values[0]if t['kind']=='terminal'else values;dims[k]=sum(dims[j]for j in n['children'])
        busy.remove(k);weights[k]=out;return out
    run(c['root']);return weights,dims,counts

def check_candidate(k,c,raw,N0,H0,D0):
    fields={'schema','graph','dimension','parent_zip_sha256','parent_N','N','terminal_children','terminal_words','decimal_lower_numerator','decimal_upper_numerator','decimal_denominator','status'}
    need(set(k)==fields,'candidate fields');need(k['schema']=='C11_R10_TERMINAL_ONLY_V1','candidate schema');need(k['graph']=='SimpleGraph.cycleGraph 11','candidate graph')
    need(type(k['dimension'])is int and k['dimension']==213,'candidate dimension');need(k['parent_zip_sha256']==PARENT_SHA and nat(k['parent_N'])==N0,'candidate parent')
    need(k['status']=='FINITE_CERTIFICATE_NOT_NEW_LEAN_OR_EXTERNAL_REVIEW','candidate status')
    need(k['terminal_children']==c['nodes'][-1]['children'],'candidate child order')
    cc=copy.deepcopy(c);cc['tables'][cc['root']]['rows']=k['terminal_words'];cc['N']=k['N']
    h0=H0[c['nodes'][0]['name']];N,d,H,D,ch=first.evaluate(cc,h0);need(N==nat(k['N'])and d==213 and N>N0,'candidate cardinality or improvement')
    for node,w in H0.items():
        if node!=c['root']:need(H[node]==w and D[node]==D0[node],'internal node changed')
    for word in k['terminal_words']:need(all(H0[ch][a]>0 for ch,a in zip(k['terminal_children'],word)),'unsupported candidate cell')
    lo=nat(k['decimal_lower_numerator']);hi=nat(k['decimal_upper_numerator']);den=nat(k['decimal_denominator'])
    need(den==10**15 and hi==lo+1 and lo**d<=N*den**d<hi**d,'candidate decimal bracket')
    H2,D2,ch2=second_evaluate(cc,raw);need(H==H2 and D==D2,'second exact replay disagrees')
    return {'N':str(N),'dimension':d,'root':root_bracket(N,1,d),'old_N':str(N0),'terminal_words':len(k['terminal_words']),'node_count':len(H),'table_pair_obligations':sum(z['within_pairs']+z['cross_pairs']for z in ch.values()),'both_replays_agree':True,'new_Lean_build':False}

def check_psd(z,c,H,D):
    need(set(z)=={'schema','dimension','factors','upper_numerator','upper_denominator','upper_floor'},'PSD certificate fields')
    need(z['schema']=='C11_FIXED_TERMINAL_RATIONAL_PSD_UPPER_V1'and z['dimension']==213,'PSD scope');need(len(z['factors'])==4,'PSD factor count')
    U=Q(1);details=[]
    for f,k in zip(z['factors'],c['nodes'][-1]['children']):
        need(set(f)=={'child','options','weights','dimension','upper_numerator','upper_denominator','offdiagonal','positive_pivot_count'},'PSD factor fields')
        opts=[i for i,w in enumerate(H[k])if w];need(f['child']==k and f['options']==opts,'PSD factor identity')
        need(f['weights']==[str(H[k][i])for i in opts]and f['dimension']==D[k],'PSD weight/dimension binding')
        t=frac(f['upper_numerator'],f['upper_denominator']);need(t>0,'PSD nonpositive budget');n=len(opts);B=[[Q(0)for j in range(n)]for i in range(n)];seen=set()
        for i,a in enumerate(opts):B[i][i]=t/H[k][a]
        for entry in f['offdiagonal']:
            need(type(entry)is list and len(entry)==4,'PSD entry')
            i,j,nu,de=entry;need(type(i)is int and type(j)is int and 0<=i<j<n and (i,j)not in seen,'PSD entry indices')
            need(not first.REL[opts[i]][opts[j]],'PSD forbidden nonzero support');seen.add((i,j));B[i][j]=B[j][i]=frac(nu,de)
        M=[[x-1 for x in row]for row in B];a=pd_ldl(M);b=pd_sylvester(M);need(a==b==n==f['positive_pivot_count'],'PSD certificate count')
        U*=t;details.append({'child':k,'dimension':D[k],'matrix_order':n,'LDL_positive_pivots':a,'Sylvester_positive_minors':b})
    need(U==frac(z['upper_numerator'],z['upper_denominator'])and U.numerator//U.denominator==nat(z['upper_floor']),'PSD budget product')
    need(U<Q(53,10)**213,'PSD ceiling does not exclude 5.3')
    return U,{'upper_numerator':str(U.numerator),'upper_denominator':str(U.denominator),'root':root_bracket(U.numerator,U.denominator,213),'factors':details,'scope':'fixed pairwise-separated whole-cell terminal model only; NOT a Shannon capacity upper bound'}

def check_cover(z,c,H):
    need(z['schema']=='R10_FACTOR_CLIQUE_COVER_V1'and len(z['factors'])==4,'cover schema');U=Q(1)
    for f,k in zip(z['factors'],c['nodes'][-1]['children']):
        need(f['child']==k,'cover child');opts=[i for i,n in enumerate(H[k])if n];coverage={i:Q(0)for i in opts};s=Q(0)
        for q in f['covers']:
            verts=q['vertices'];need(len(verts)==len(set(verts))and all(i in opts for i in verts),'cover vertices');need(all(not first.REL[i][j]for i,j in itertools.combinations(verts,2)),'nonclique cover')
            lam=frac(q['numerator'],q['denominator']);need(lam>=0,'negative cover');s+=lam
            for i in verts:coverage[i]+=lam
        need(all(coverage[i]>=H[k][i]for i in opts),'uncovered vertex weight');U*=s
    return {'root':root_bracket(U.numerator,U.denominator,213),'upper_numerator':str(U.numerator),'upper_denominator':str(U.denominator)}

def actual_matrices(c,raw,H):
    f=json.loads(raw);I=set(f['I']);X=set(f['X']);P={p for p,q in f['pairs']};Qset={q for p,q in f['pairs']}
    def conflict(x,y):return all((a-b)%11 in(0,1,10)for a,b in zip(second.coordinates(x),second.coordinates(y)))
    A={x for x in X if any(conflict(x,p)for p in P)};D={x for x in X if any(conflict(x,q)for q in Qset)};fam=[I-P,X-A-D,A,D,P,Qset,P];T=[[]for _ in first.TYPES]
    for a,S in enumerate(fam):
        for x in sorted(S):
            m=sum(1<<b for b,V in enumerate(fam)if any(conflict(x,y)for y in V));T[first.IDS[(a,m)]].append(x)
    C0=[[any(conflict(x,y)for x in S for y in V)for V in T]for S in T];out={}
    for node in c['nodes'][:-1]:
        k=node['name']
        if node['kind']=='base':out[k]=C0;continue
        kids=node['children'];M=[[False]*58 for _ in range(58)];table=c['tables'][node['kind']]['rows']
        rows=[[w for w in row if all(H[ch][a]>0 for ch,a in zip(kids,w))]for row in table]
        for a in range(58):
            M[a][a]=bool(rows[a])
            for b in range(a):
                yes=False
                for u in rows[a]:
                    for vv in rows[b]:
                        if all(out[ch][u[i]][vv[i]]for i,ch in enumerate(kids)):yes=True;break
                    if yes:break
                M[a][b]=M[b][a]=yes
        out[k]=M
    return out,[sorted(s)for s in T]

def check_relations(stored,actual,T,c,H):
    need(stored['node_conflict_matrices']==actual,'realized conflict matrices disagree with direct set recursion')
    need([sorted(s)for s in stored['base_typed_sets']]==T,'realized base sets disagree')
    details=[]
    for n in c['nodes'][:-1]:
        k=n['name'];opts=[i for i,w in enumerate(H[k])if w];M=actual[k]
        need(all(not M[i][j]for i in opts for j in opts if first.REL[i][j]),'realized relation contradicts old guarantee')
        extras=[(i,j)for i,j in itertools.combinations(opts,2)if not first.REL[i][j]and not M[i][j]]
        details.append({'node':k,'active':len(opts),'extra_separations':[list(p)for p in extras],'unique_conflict_edges':sum(M[i][j]for i,j in itertools.combinations(opts,2))})
    need(details==stored['nodes'],'realized relation summary mismatch')
    oldp=newp=1
    for k in c['nodes'][-1]['children']:
        opts=[i for i,w in enumerate(H[k])if w]
        oldp*=sum(not first.REL[i][j]for i in opts for j in opts)
        newp*=sum(actual[k][i][j]for i in opts for j in opts)
    need((oldp-newp)//2==stored['terminal_extra_separated_pairs'],'realized edge count summary mismatch')
    return details

def check_refinement(z,c,H,N,matrices,upper):
    fields={'schema','frozen_dimension','parent_N','exception_rules','exception_vertex_count','exception_total_weight','root_gain_limit_numerator','root_gain_limit_denominator','scope'}
    need(set(z)==fields and z['schema']=='R10_EXACT_RELATION_GAIN_LIMIT_V1','gain certificate schema');need(z['frozen_dimension']==213 and nat(z['parent_N'])==N,'gain parent')
    rules=z['exception_rules'];need(all(set(r)=={'coordinate','type'}and type(r['coordinate'])is int and type(r['type'])is int and 0<=r['coordinate']<4 and 0<=r['type']<58 for r in rules),'exception rules')
    cover={(r['coordinate'],r['type'])for r in rules};need(len(cover)==len(rules),'duplicate exception rule');kids=c['nodes'][-1]['children'];opts=[[i for i,w in enumerate(H[k])if w]for k in kids]
    oldordered=1;newordered=1;extras=[]
    for k,ch in enumerate(kids):
        M=matrices[ch];oldordered*=sum(not first.REL[i][j]for i in opts[k]for j in opts[k]);newordered*=sum(M[i][j]for i in opts[k]for j in opts[k])
        for i,j in itertools.combinations(opts[k],2):
            if not first.REL[i][j]and not M[i][j]:
                need((k,i)in cover or (k,j)in cover,'uncovered removed conflict');extras.append({'coordinate':k,'child':ch,'types':[i,j]})
    count=0;A=0
    for word in itertools.product(*opts):
        if any((k,a)in cover for k,a in enumerate(word)):
            count+=1;A+=math.prod(H[ch][a]for ch,a in zip(kids,word))
    need(count==z['exception_vertex_count']and A==nat(z['exception_total_weight']),'exception budget mismatch')
    rhi=Q(int(c['decimal_upper_numerator']),int(c['decimal_denominator']));need(N*(rhi.denominator**213)<rhi.numerator**213,'parent upper root invalid')
    limit=frac(z['root_gain_limit_numerator'],z['root_gain_limit_denominator']);need(limit>0 and rhi*A/(213*N)<limit,'refinement root-gain claim not proved')
    refined_upper=upper+A;need(refined_upper<Q(53,10)**213,'realized-model ceiling does not exclude 5.3')
    return {'new_terminal_child_separations':extras,'removed_terminal_edges':(oldordered-newordered)//2,'exception_vertices':count,'exception_total_weight':str(A),'optimum_root_gain_less_than':str(limit),'full_realized_model_root_ceiling':root_bracket(refined_upper.numerator,refined_upper.denominator,213),'scope':'difference between two fixed whole-cell terminal optima; not changes to internal sets or splitting cells'}

def manifest():
    p=ROOT/'MANIFEST.sha256';need(p.is_file(),'missing manifest');lines=p.read_text().splitlines();expected={}
    for l in lines:
        h,f=l.split('  ',1);need(re.fullmatch('[0-9a-f]{64}',h)is not None and f not in expected,'manifest syntax/duplicate');path=Path(f);need(not path.is_absolute()and '..'not in path.parts and f!='MANIFEST.sha256','manifest path');expected[f]=h
    actual={p.relative_to(ROOT).as_posix()for p in ROOT.rglob('*')if p.is_file()and p.relative_to(ROOT).as_posix()!='MANIFEST.sha256'};need(actual==set(expected),'unlisted or missing file')
    for f,h in expected.items():need(digest((ROOT/f).read_bytes())==h,'manifest hash '+f)
    return len(expected)

def main():
    ap=argparse.ArgumentParser();ap.add_argument('--self-test',action='store_true');ap.add_argument('--manifest',action='store_true');args=ap.parse_args()
    mcount=manifest()if args.manifest else None
    raw,c,N,H,D,checks=load_parent();candidate=json.loads((ROOT/'certificates/NEW_TERMINAL.json').read_text());z=json.loads((ROOT/'certificates/FIXED_TERMINAL_UPPER.json').read_text());zcover=json.loads((ROOT/'certificates/CLIQUE_COVER.json').read_text());zr=json.loads((ROOT/'certificates/EXACT_RELATIONS.json').read_text());zg=json.loads((ROOT/'certificates/REFINEMENT_GAIN_LIMIT.json').read_text())
    bound,br=check_psd(z,c,H,D);cv=check_cover(zcover,c,H);actual,T=actual_matrices(c,raw,H);rd=check_relations(zr,actual,T,c,H);gr=check_refinement(zg,c,H,N,actual,bound);cr=check_candidate(candidate,c,raw,N,H,D)
    neg=[]
    if args.self_test:
        def reject(name,obj,mut,check):
            bad=copy.deepcopy(obj);mut(bad)
            try:check(bad)
            except (ValueError,KeyError,TypeError,ZeroDivisionError):neg.append(name);return
            raise ValueError('NEGATIVE CONTROL ACCEPTED: '+name)
        up=lambda b:check_psd(b,c,H,D)
        reject('wrong PSD child',z,lambda b:b['factors'][0].update(child='n15'),up)
        reject('wrong bound dimension',z,lambda b:b.update(dimension=210),up)
        reject('wrong PSD weight',z,lambda b:b['factors'][0]['weights'].__setitem__(0,'1'),up)
        reject('nonpositive PSD budget',z,lambda b:b['factors'][0].update(upper_numerator='-1'),up)
        reject('positive but false PSD budget',z,lambda b:b['factors'][0].update(upper_numerator='1',upper_denominator='1'),up)
        reject('bad PSD total budget',z,lambda b:b.update(upper_numerator='1'),up)
        opts=z['factors'][0]['options'];pair=next((i,j)for i in range(len(opts))for j in range(i+1,len(opts))if first.REL[opts[i]][opts[j]])
        reject('PSD nonzero at separated pair',z,lambda b:b['factors'][0]['offdiagonal'].append([*pair,'1','1']),up)
        cp=lambda b:check_candidate(b,c,raw,N,H,D)
        reject('wrong terminal cardinality',candidate,lambda b:b.update(N=str(int(b['N'])+1)),cp)
        reject('wrong terminal graph',candidate,lambda b:b.update(graph='SimpleGraph.cycleGraph 13'),cp)
        reject('wrong terminal dimension',candidate,lambda b:b.update(dimension=210),cp)
        reject('duplicate terminal word',candidate,lambda b:b['terminal_words'].append(b['terminal_words'][0]),cp)
        support=[[i for i,n in enumerate(H[ch])if n]for ch in c['nodes'][-1]['children']];existing=set(map(tuple,candidate['terminal_words']))
        badword=next(w for w in itertools.product(*support)if w not in existing and any(not any(first.REL[a][b]for a,b in zip(w,v))for v in existing))
        reject('conflicting terminal word',candidate,lambda b:b['terminal_words'].append(list(badword)),cp)
        gp=lambda b:check_refinement(b,c,H,N,actual,bound)
        reject('omitted exception rule',zg,lambda b:b['exception_rules'].pop(),gp)
        reject('understated exception budget',zg,lambda b:b.update(exception_total_weight='0'),gp)
        reject('impossible refinement gain bound',zg,lambda b:b.update(root_gain_limit_numerator='1',root_gain_limit_denominator='1000000000000'),gp)
        reject('spurious realized separation',zr,lambda b:b['node_conflict_matrices']['n10'][1].__setitem__(9,False),lambda b:check_relations(b,actual,T,c,H))
    result={'status':'PASS_C11_R10_FINITE_DIAGNOSTIC_CERTIFICATES','parent_R9_sha256':PARENT_SHA,'new_finite_construction':cr,'fixed_model_upper':br,'initial_clique_cover':cv,'exact_relation_diagnostic':gr,'node_relation_refinements':rd,'negative_controls_rejected':neg,'manifest_entries':mcount,'trust':'standard-library integer/rational replay; neither a new Lean run nor external review; no solver output is an acceptance premise'}
    print(json.dumps(result,indent=2,sort_keys=True))
if __name__=='__main__':main()
