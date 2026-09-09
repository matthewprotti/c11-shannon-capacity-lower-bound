"""Finite stress tests of a universal written theorem; not a proof by exhaustion."""
from __future__ import annotations
from itertools import product, combinations
from pathlib import Path
import json, random, hashlib
from general_compiler import (Invalid, require, types_for, refined_sep, compile_rule,
                              literal_check, check_rule, check_code, word_sep)

ROOT = Path(__file__).resolve().parent

def relations(r):
    pairs = list(combinations(range(r), 2))
    for flags in product((False, True), repeat=len(pairs)):
        s = [[False] * r for _ in range(r)]
        for (a, b), v in zip(pairs, flags):
            s[a][b] = s[b][a] = v
        yield tuple(map(tuple, s))

def codes(r, q, s):
    words = tuple(product(range(r), repeat=q))
    for flags in product((False, True), repeat=len(words)):
        row = tuple(w for w, use in zip(words, flags) if use)
        if all(word_sep(u, v, s) for u, v in combinations(row, 2)):
            yield row

def run_exhaustive():
    counts = []
    scopes = [(r, q) for r in (1, 2) for q in (0, 1, 2)] + [(3, 0), (3, 1)]
    for r, q in scopes:
        n_rules = n_augmentations = n_relations = 0
        for s in relations(r):
            n_relations += 1
            cs = tuple(codes(r, q, s))
            for t in product(cs, repeat=r):
                try:
                    check_rule(t, s, q)
                except Invalid:
                    continue
                n_rules += 1
                types, out = compile_rule(s, q, t)
                literal_check(out, refined_sep(types), q)
                check_rule(out, refined_sep(types), q)
                for a in range(r):
                    for e in cs:
                        types, out = compile_rule(s, q, t, a, e)
                        literal_check(out, refined_sep(types), q)
                        check_rule(out, refined_sep(types), q)
                        n_augmentations += 1
        counts.append(dict(r=r, arity=q, relations=n_relations, ordinary_rules=n_rules,
                           augmented_rules=n_augmentations, all_normalized_types=True))
    return counts

def random_rule(r, q, s, rng):
    rows = [[] for _ in range(r)]
    pool = [(a, w) for a in range(r) for w in product(range(r), repeat=q)]
    rng.shuffle(pool)
    for a, w in pool:
        if rng.random() > .55:
            continue
        if all(word_sep(w, v, s) for b in range(r) if a == b or s[a][b] for v in rows[b]):
            rows[a].append(w)
    return tuple(tuple(sorted(row)) for row in rows)

def run_random():
    rng = random.Random(20260908)
    count = 0
    for s in relations(3):
        for q in (2, 3):
            for _ in range(12):
                t = random_rule(3, q, s, rng)
                e = random_rule(3, q, s, rng)[rng.randrange(3)]
                types, out = compile_rule(s, q, t, rng.randrange(3), e)
                literal_check(out, refined_sep(types), q)
                count += 1
    return dict(seed=20260908, alphabet_size=3, arities=[2,3], count=count,
                all_eight_separation_relations=True)

def run_negative():
    no = ((False,False),(False,False))
    yes = ((False,True),(True,False))
    identity = (((0,),), ((1,),))
    cases = [
        ('stale_masks', no, identity, 0, ((1,),)),
        ('omit_self_protection', no, identity, 0, ((0,),)),
        ('omit_neighbor_protection', yes, identity, 0, ((1,),)),
        ('omit_new_self_bit', no, ((),()), 0, ((1,),)),
        ('unseparated_extension', no, ((),()), 0, ((0,),(1,))),
    ]
    results = []
    for defect, s, t, a, e in cases:
        try:
            types, out = compile_rule(s, 1, t, a, e, defect=defect)
            literal_check(out, refined_sep(types), 1)
        except Invalid as ex:
            results.append(dict(defect=defect, rejected=True, reason=str(ex)))
        else:
            raise RuntimeError(f'Negative control not rejected: {defect}')
    try:
        compile_rule(no, 1, (((0,),(1,)),()), 0, ())
    except Invalid as ex:
        results.append(dict(defect='nonadmissible_coarse_input', rejected=True, reason=str(ex)))
    else:
        raise RuntimeError('Bad input accepted')
    # A valid augmented rule must actually add a positive-weight cell in this case.
    types, out = compile_rule(no, 1, identity, 0, ((1,),))
    weights = {pair: int(pair in [(0,1),(1,2)]) for pair in types}
    totals = [sum(weights[types[w[0]]] for w in row) for row in out]
    require(sum(totals[i] for i, (a,m) in enumerate(types) if a == 0) == 2,
            'positive augmentation control failed')
    return results

def r6_fixture_tests():
    data = json.loads((ROOT/'R6_RULE_FIXTURES.json').read_text())
    s = tuple(tuple(v for v in row) for row in data['separation'])
    types = types_for(s)
    require(len(types) == 58, 'BPZ descriptor count')
    results = []
    for case in data['rules']:
        t = tuple(tuple(tuple(w) for w in row) for row in case['table'])
        e = tuple(tuple(w) for w in case['extension'])
        types, out = compile_rule(s, case['arity'], t, case['target'], e)
        report = literal_check(out, refined_sep(types), case['arity'])
        serial = json.dumps(out,separators=(',',':')).encode()
        report.update(label=case['label'], output_sha256=hashlib.sha256(serial).hexdigest(),
                      support_pruning=False)
        results.append(report)
    return results

def main():
    report = dict(status='PASS_FINITE_TESTS_OF_UNFORMALIZED_GENERAL_COMPILER',
                  exhaustive=run_exhaustive(), randomized=run_random(),
                  negatives=run_negative(), full_alphabet_R6_rules=r6_fixture_tests(),
                  disclaimer='Finite tests corroborate but do not prove universal correctness. No Lean execution.')
    print(json.dumps(report,sort_keys=True,indent=2))

if __name__ == '__main__':
    main()
