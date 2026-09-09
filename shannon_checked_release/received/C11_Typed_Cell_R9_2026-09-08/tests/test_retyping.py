"""Bounded regressions for the R9 written theorem; no finite test proves universality."""
from itertools import combinations, product
import json, sys
from pathlib import Path
sys.dont_write_bytecode=True
sys.path.insert(0,str(Path(__file__).resolve().parents[1]/'source'))
import canonical_retyping as c

def demand(p,message):
    if not p:raise RuntimeError(message)

def run():
    cases=0;strict=0;augment=0;zero_arity=0;hist={}
    for r in range(1,3):
        for bits in range(1 << (r*(r-1)//2)):
            pairs=list(combinations(range(r),2));s=[[False]*r for _ in range(r)]
            for k,(a,b)in enumerate(pairs):s[a][b]=s[b][a]=bool(bits>>k&1)
            types=c.normalized_types(s);rel=c.refined_relation(types)
            for q in range(3):
                children=[rel]*q;words=tuple(product(range(len(types)),repeat=q))
                codes=[()]+[(w,)for w in words]+[p for p in combinations(words,2)if c.apart(*p,children)]
                local=0
                for rows in product(codes,repeat=r):
                    try:c.validate_rows(rows,children,s)
                    except ValueError:continue
                    ts,out=c.compile_rows(rows,children,s)
                    c.validate_rows(out,children,c.refined_relation(ts))
                    demand(c.forget_masks(out,ts,r)==tuple(tuple(sorted(row))for row in rows),'retention')
                    demand(c.tighten(out,children,s)==out,'idempotence')
                    masks=c.canonical_masks(rows,children)
                    # Independently materialized maximal-conflict child graphs:
                    # vertices are letters; equality is reflexive conflict.
                    for a,row in enumerate(rows):
                        for w in row:
                            exact=0
                            for b,other in enumerate(rows):
                                if any(all(x==y or not children[i][x][y]
                                           for i,(x,y)in enumerate(zip(w,v)))for v in other):exact|=1<<b
                            demand(masks[w]==exact,'sharpness witness')
                            maximum=sum(1<<b for b in range(r)if not s[a][b])
                            demand(not masks[w]&~maximum,'not a tightening')
                            strict+=masks[w]!=maximum
                    # Weighted polynomial equality under a concrete positive assignment.
                    weights=[list(range(1,len(rel)+1))for _ in range(q)]
                    def value(row):
                        total=0
                        for w in row:
                            z=1
                            for i,a in enumerate(w):z*=weights[i][a]
                            total+=z
                        return total
                    for a,row in enumerate(rows):
                        demand(value(row)==sum(value(out[j])for j,(b,_)in enumerate(ts)if b==a),'count')
                    cases+=1;local+=1;zero_arity+=q==0
                    # A sparse, deterministic augmentation subcase on every 37th row tuple.
                    if cases%37==0:
                        E=codes[(cases//37)%len(codes)]
                        a=cases%r
                        updated,selected=c.guarded_addition(rows,E,a,children,s)
                        c.validate_rows(updated,children,s)
                        utypes,u=c.compile_rows(updated,children,s)
                        c.validate_rows(u,children,c.refined_relation(utypes))
                        demand(value(updated[a])==value(rows[a])+value(selected),'gain')
                        augment+=1
                hist[f'r{r}_relation{bits}_q{q}']=local
    # Empty alphabet and all-empty tables are legitimate.
    demand(c.compile_rows((),(),())[1]==(),'empty alphabet')
    negatives=[]
    def rejects(name,fn):
        try:fn()
        except ValueError:negatives.append(name);return
        raise RuntimeError('failed negative '+name)
    none=((False,False),(False,False));edge=((False,True),(True,False))
    rejects('within_family_conflict',lambda:c.compile_rows((((0,),(1,)),),[none],((False,),)))
    rejects('duplicate_generator',lambda:c.compile_rows((((0,),(0,)),),[none],((False,),)))
    rejects('required_cross_conflict',lambda:c.compile_rows((((0,),),((1,),)),[none],edge))
    rejects('asymmetric_relation',lambda:c.normalized_types(((False,True),(False,False))))
    rejects('reflexive_relation',lambda:c.normalized_types(((True,),)))
    rejects('nonseparated_extension',lambda:c.guarded_addition(((),),((0,),(1,)),0,[none],((False,),)))
    # Omission of self protection would count the same point twice; actual guard rejects it.
    updated,selected=c.guarded_addition((((0,),),),((0,),),0,[none],((False,),))
    demand(selected==() and updated==(((0,),),),'self-protection counterexample')
    negatives.append('omitted_self_protection_counterexample')
    return {'status':'PASS_R9_CANONICAL_RETYPE_FINITE_REGRESSIONS','ordinary_cases':cases,
            'strict_mask_improvements_counted_by_generator':strict,'augmentation_cases':augment,
            'zero_arity_cases':zero_arity,'case_breakdown':hist,'negative_controls':negatives,
            'proof_status':'written proof only; no R9 Lean build'}

if __name__=='__main__':print(json.dumps(run(),indent=2,sort_keys=True))
