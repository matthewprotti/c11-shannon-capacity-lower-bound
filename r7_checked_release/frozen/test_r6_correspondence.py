"""Compare the universal compiler, pruned by proved zero weights, to frozen R6 tables.

Does not import the R6 generator, profile recurrence, or any R6 checker.
This is finite consistency evidence, not a Lean proof of the universal theorem.
"""
from pathlib import Path
from itertools import product
from collections import Counter
import zipfile, json, hashlib, math
from general_compiler import compile_rule, types_for, require
ROOT=Path(__file__).resolve().parent
LETTERS='BNADOHV'
idx={c:i for i,c in enumerate(LETTERS)}
def main():
    source=ROOT/'inputs/R6_FROZEN.zip'
    require(hashlib.sha256(source.read_bytes()).hexdigest()==
      '24b64ccbd1f38cd1ad7921993575d6ebff0638c5d3c694f8e78c8fca3b2be045','R6 ancestor hash')
    prefix='C11_Avoidance_Profile_R6_2026-09-08/'
    cache={}
    with zipfile.ZipFile(source) as z:
        def read(name):return json.loads(z.read(prefix+name))
        frozen=read('FROZEN_INPUTS.json')
        sep=[[False]*7 for _ in range(7)]
        for a,b in frozen['sep']:sep[idx[a]][idx[b]]=sep[idx[b]][idx[a]]=True
        types=types_for(sep); tid={v:i for i,v in enumerate(types)}
        def conf(a,b):return all(((a//p-b//p)%11) in (0,1,10) for p in (1,11,121))
        I=set(frozen['I']);X=set(frozen['X']);parents={p[0] for p in frozen['pairs']};alts={p[1] for p in frozen['pairs']}
        A={x for x in X if any(conf(x,y) for y in parents)}
        D={x for x in X if any(conf(x,y) for y in alts)}
        fam=[I-parents,X-A-D,A,D,parents,alts,parents]
        base=[0]*len(types)
        for a,F in enumerate(fam):
            for x in F:
                m=sum(1<<b for b,Fb in enumerate(fam) if any(conf(x,y) for y in Fb))
                require((a,m) in tid,'base normalization')
                base[tid[a,m]]+=1
        reports=[]
        for dim in [186,198,213]:
            parent=read(f'parent/C11_d{dim}.json');candidate=read(f'certificates/C11_AP_d{dim}.json')
            literal=read(f'compiled/C11_TYPED_d{dim}.json')
            require(literal['letters']==[dict(family=LETTERS[a],mask=m) for a,m in types], 'descriptor order')
            augment={a['node']:a for a in candidate['augmentations']}
            values={};dimensions={};nodes=[]
            for nd in parent['nodes']:
                name=nd['name'];kind=nd['kind']
                if kind=='base':values[name]=tuple(base);dimensions[name]=3;continue
                children=nd['children'];xs=[values[n] for n in children];q=len(children)
                dimensions[name]=sum(dimensions[n] for n in children)
                table=parent['tables'][kind]
                stored=literal['tables'][name]['rows']
                if isinstance(table,list):
                    # Universal terminal expansion; zero-weight products are then omitted.
                    full=[]
                    for word in table:
                        full.extend(product(*(tuple(i for i,(a,m) in enumerate(types) if a==idx[c]) for c in word)))
                    pruned=[w for w in full if all(xs[i][a]>0 for i,a in enumerate(w))]
                    require(len(pruned)==len(set(pruned)), 'terminal expansion duplicates')
                    require(set(pruned)=={tuple(w) for w in stored}, 'terminal source mismatch')
                    N=sum(math.prod(xs[i][a] for i,a in enumerate(w)) for w in pruned)
                    require(N==int(candidate['N'])==int(literal['N']), 'final cardinality')
                    require(dimensions[name]==dim,'final dimension')
                    nodes.append(dict(node=name,dimension=dim,kind='terminal',retained_words=len(pruned),universal_words=len(full)))
                    continue
                rule=tuple(tuple(tuple(idx[c] for c in w) for w in table[a]) for a in LETTERS)
                patch=augment.get(name);target=idx[patch['target_family']] if patch else None
                extension=tuple(tuple(idx[c] for c in w) for w in patch['extension_words']) if patch else ()
                key=(rule,target,extension)
                if key not in cache:cache[key]=compile_rule(sep,q,rule,target,extension)[1]
                full=cache[key]
                pruned=[tuple(w for w in row if all(xs[i][a]>0 for i,a in enumerate(w))) for row in full]
                require(len(stored)==len(pruned),'literal row count')
                require(all(set(row)=={tuple(w) for w in r} for row,r in zip(pruned,stored)),f'literal table mismatch: d{dim}/{name}')
                values[name]=tuple(sum(math.prod(xs[i][a] for i,a in enumerate(w)) for w in row) for row in full)
                values_pruned=tuple(sum(math.prod(xs[i][a] for i,a in enumerate(w)) for w in row) for row in pruned)
                require(values[name]==values_pruned,'zero pruning changed weight')
                nodes.append(dict(node=name,dimension=dimensions[name],kind='substitution',
                    retained_words=sum(map(len,pruned)),universal_words=sum(map(len,full))))
            reports.append(dict(dimension=dim,N=candidate['N'],nonbase_nodes=len(nodes),nodes=nodes))
    print(json.dumps(dict(status='PASS_UNIVERSAL_COMPILER_SPECIALIZES_TO_FROZEN_R6',
      base_typed_weights=base,distinct_universal_rules=len(cache),constructions=reports,
      scope='Exact finite specialization checks; no new Lean execution or universal proof by testing.'),sort_keys=True,indent=2))
if __name__=='__main__':main()
