#!/usr/bin/env python3
"""Replay R9 finite certificates and bounded theorem tests. Does not invoke Lean."""
import sys
sys.dont_write_bytecode=True
import json, hashlib, argparse, copy, re, itertools
from pathlib import Path
ROOT=Path(__file__).resolve().parent
sys.path.insert(0,str(ROOT/'source'))
sys.path.insert(0,str(ROOT/'tests'))
import verify_literal as v
import inherited_typed_replay as ref
import test_retyping

def manifest():
    p=ROOT/'MANIFEST.sha256'
    v.need(p.is_file(),'missing manifest');entries={}
    for line in p.read_text().splitlines():
        digest,name=line.split('  ',1)
        v.need(re.fullmatch('[0-9a-f]{64}',digest)is not None,'bad manifest hash')
        v.need(name not in entries and name!='MANIFEST.sha256'and not Path(name).is_absolute()and '..'not in Path(name).parts,'bad manifest path')
        entries[name]=digest
    actual={x.relative_to(ROOT).as_posix()for x in ROOT.rglob('*')if x.is_file()}
    v.need(actual==set(entries)|{'MANIFEST.sha256'},'unlisted or missing file')
    for name,digest in entries.items():v.need(v.sha((ROOT/name).read_bytes())==digest,'file changed: '+name)
    return len(entries)

def second(c):
    f=json.loads((ROOT/'inputs/FROZEN_INPUTS.json').read_text());w0,bchecks=ref.literal_base(f)
    tc={k:ref.inspect_table(t)for k,t in c['tables'].items()}
    nodes={n['name']:n for n in c['nodes']};weights={};dims={};busy=set()
    def evaluate(k):
        if k in weights:return weights[k]
        v.need(k not in busy,'reference cycle');busy.add(k);n=nodes[k]
        if n['kind']=='base':out=w0;d=3
        else:
            args=[evaluate(x)for x in n['children']];d=sum(dims[x]for x in n['children']);T=c['tables'][n['kind']]
            rows=[T['rows']]if T['kind']=='terminal'else T['rows'];out=[]
            for row in rows:
                total=0
                for word in row:
                    z=1
                    for i,a in enumerate(word):z*=args[i][a]
                    total+=z
                out.append(total)
            if T['kind']=='terminal':out=out[0]
        busy.remove(k);weights[k]=out;dims[k]=d;return out
    N=evaluate(c['root']);v.need(str(N)==c['N']and dims[c['root']]==c['dimension'],'reference cardinality/dimension')
    return weights,{'N':str(N),'dimension':dims[c['root']],'base_pairs':bchecks,
                    'table_pairs':sum(a+b for _,a,b in tc.values())}

def pair_witness():
    z=json.loads((ROOT/'evidence/PAIRED_EXCHANGE_WITNESS.json').read_text())
    v.need(z['dimension']==213,'witness dimension')
    decoded=[[{'family':v.L[v.TYPES[i][0]],'possible_conflicts':''.join(v.L[a]for a in range(7)if v.TYPES[i][1]>>a&1),'mask':v.TYPES[i][1]}for i in w]for w in z['added_words']]
    v.need(decoded==z['added_decoded'],'witness descriptors')
    old=json.loads((ROOT/'inputs/C11_R6_d213.json').read_text())
    h0,_=v.base((ROOT/'inputs/FROZEN_INPUTS.json').read_bytes())
    _,_,W,_,_=v.evaluate(old,h0);kids=[W[k]for k in z['child_order']]
    v.need(z['node']==old['root']and z['child_order']==old['nodes'][-1]['children'],'witness child order')
    before=[tuple(w)for w in z['before_terminal']];added=[tuple(w)for w in z['added_words']]
    def cost(w):
        ans=1
        for i,a in enumerate(w):ans*=kids[i][a]
        return ans
    def conflict(u,w):return all(not v.REL[a][b]for a,b in zip(u,w))
    v.inspect({'kind':'terminal','rows':z['before_terminal']})
    v.need(str(sum(map(cost,before)))==z['before_N'],'witness before cardinality')
    blockers=[set(w for w in before if conflict(u,w))for u in added]
    for j,(u,B)in enumerate(zip(added,blockers)):
        v.need(B==set(map(tuple,z['individual_blockers'][j])),'witness blocker set')
        v.need(str(cost(u))==z['individual_added_weights'][j],'witness added weight')
        v.need(str(sum(map(cost,B)))==z['individual_blocker_weights'][j],'witness blocker weight')
        v.need(str(cost(u)-sum(map(cost,B)))==z['individual_gains'][j],'witness individual gain')
        v.need(cost(u)<=sum(map(cost,B)),'individual improvement unexpected')
    removed=set.union(*blockers)
    v.need(removed==set(map(tuple,z['removed_words'])),'witness removed set')
    after=[w for w in before if w not in removed]+added
    v.inspect({'kind':'terminal','rows':list(map(list,after))})
    gain=sum(map(cost,added))-sum(map(cost,removed))
    v.need(gain>0 and str(gain)==z['paired_gain'],'witness paired gain')
    v.need(str(sum(map(cost,after)))==z['after_pair_N'],'witness after count')
    v.need(str(sum(map(cost,blockers[0]&blockers[1])))==z['shared_blocker_weight'],'witness shared cost')
    return {'dimension':213,'two_individual_nonpositive_moves':True,'removed_blocks':len(removed),
            'added_blocks':len(added),'exact_positive_paired_gain':str(gain)}

def main(selftest=False,do_manifest=False):
    mc=manifest()if do_manifest else None;reports=[];controls=[]
    for file in sorted((ROOT/'certificates').glob('*.json')):
        c=json.loads(file.read_text());report,w=v.verify(c,ROOT);w2,r2=second(c)
        v.need(w==w2,'two verifier node disagreement');report['second_checker']=r2
        report['all_node_values_sha256']=hashlib.sha256(json.dumps(w,sort_keys=True,separators=(',',':')).encode()).hexdigest();reports.append(report)
    # Recheck literal outputs of all retained exploratory controls, independently of their reported histograms.
    h0,_=v.base((ROOT/'inputs/FROZEN_INPUTS.json').read_bytes())
    for f in sorted(list((ROOT/'evidence').glob('scout_*.json'))+list((ROOT/'evidence').glob('autocells_*.json'))):
        c=json.loads(f.read_text());c['letters']=[{'family':v.L[a],'mask':m}for a,m in v.TYPES]
        N,d,w,_,_=v.evaluate(c,h0);v.need(str(N)==c['N']and d==c['dimension'],'control count')
        for name,H in c['hist'].items():
            vector=[int(H[a].get(str(m),0))for a,m in v.TYPES];v.need(vector==w[name],'control profile mismatch')
        controls.append({'file':f.name,'N':str(N),'dimension':d})
    negatives=[]
    if selftest:
        base=json.loads((ROOT/'certificates/C11_R9_d213.json').read_text())
        def reject(name,mut):
            b=copy.deepcopy(base);mut(b)
            try:v.verify(b,ROOT)
            except (ValueError,KeyError,TypeError):negatives.append(name);return
            raise RuntimeError('accepted corruption: '+name)
        reject('schema',lambda c:c.update(schema='bad'))
        reject('wrong_graph',lambda c:c.update(graph='SimpleGraph.cycleGraph 13'))
        reject('wrong_dimension',lambda c:c.update(dimension=210))
        reject('wrong_cardinality',lambda c:c.update(N=str(int(c['N'])+1)))
        reject('duplicate_terminal_word',lambda c:c['tables'][c['root']]['rows'].append(c['tables'][c['root']]['rows'][0][:]))
        def add_conflict(c):
            row=c['tables'][c['root']]['rows'];w=row[0]
            for i in range(len(w)):
                for a in range(58):
                    z=w[:];z[i]=a
                    if a!=w[i]and not v.REL[a][w[i]]and z not in row:row.append(z);return
            raise RuntimeError('no conflict mutation')
        reject('distinct_nonseparated_terminal_word',add_conflict)
        reject('bad_child',lambda c:c['nodes'][-1]['children'].__setitem__(0,'absent'))
        reject('altered_internal_table',lambda c:c['tables'][c['nodes'][1]['kind']]['rows'][0].append([0,0]))
        reject('bad_decimal',lambda c:c.update(decimal_lower_numerator='6000000000000000',decimal_upper_numerator='6000000000000001'))
        reject('wrong_parent_hash',lambda c:c.update(parent_typed_sha256='0'*64))
        reject('wrong_base_hash',lambda c:c.update(base_sha256='0'*64))
        reject('wrong_scope',lambda c:c.update(change_scope='NO_CHANGE'))
        reject('wrong_status',lambda c:c.update(status='LEAN_CHECKED'))
    return {'status':'PASS_R9_TWO_CHECKER_FINITE_CERTIFICATES_AND_RETYPING_TESTS','manifest_entries':mc,
            'cases':reports,'retained_controls':controls,'certificate_negative_controls':negatives,
            'paired_exchange_witness':pair_witness(),'general_theorem_tests':test_retyping.run(),'R9_Lean_build':False,'external_review':False,
            'scope':'new literal C11 certificates and a written general theorem; R8 C13 remains frozen'}

if __name__=='__main__':
    a=argparse.ArgumentParser();a.add_argument('--self-test',action='store_true');a.add_argument('--manifest',action='store_true');args=a.parse_args()
    print(json.dumps(main(args.self_test,args.manifest),indent=2,sort_keys=True))
