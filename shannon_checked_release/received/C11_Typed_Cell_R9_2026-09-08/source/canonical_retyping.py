"""R9 canonical cell retyping: finite reference implementation, not a Lean proof.

A missing mask label is certified absence of confusability. No actual conflicts
are inferred from a present label. Input and output graphs need not be equal.
All checks raise exceptions under both ordinary Python and python -O.
"""
from itertools import product, combinations


def require(ok, message):
    if not ok:
        raise ValueError(message)


def validate_relation(sep):
    n = len(sep)
    require(all(len(row) == n for row in sep), 'relation not square')
    require(all(not sep[a][a] for a in range(n)), 'relation not irreflexive')
    require(all(sep[a][b] == sep[b][a] for a in range(n) for b in range(n)),
            'relation not symmetric')


def normalized_types(sep):
    validate_relation(sep)
    r = len(sep)
    return tuple((a, m) for a in range(r) for m in range(1 << r)
                 if m & (1 << a) and not any(sep[a][b] and m & (1 << b)
                                           for b in range(r)))


def refined_relation(types):
    return tuple(tuple((a == b and m != n) or not m & (1 << b) or not n & (1 << a)
                       for b, n in types) for a, m in types)


def apart(u, v, child_relations):
    return any(s[a][b] for s, a, b in zip(child_relations, u, v))


def validate_rows(rows, child_relations, output_relation):
    validate_relation(output_relation)
    for sep in child_relations:
        validate_relation(sep)
    q = len(child_relations)
    require(len(rows) == len(output_relation), 'wrong row count')
    for row in rows:
        require(len(set(row)) == len(row), 'duplicate generator')
        require(all(len(w) == q and all(type(a) is int and 0 <= a < len(s)
                    for a, s in zip(w, child_relations)) for w in row), 'bad word')
        require(all(apart(u, v, child_relations) for u, v in combinations(row, 2)),
                'nonseparated generators in one family')
    for a in range(len(rows)):
        for b in range(a):
            if output_relation[a][b]:
                require(all(apart(u, v, child_relations) for u in rows[a] for v in rows[b]),
                        'nonseparated required cross pair')


def canonical_masks(rows, child_relations):
    """Exact masks in the symbolic incompatibility graph, not in the real graphs."""
    words = set(w for row in rows for w in row)
    return {u: sum(1 << a for a, row in enumerate(rows)
                   if any(not apart(u, v, child_relations) for v in row))
            for u in words}


def compile_rows(rows, child_relations, coarse_relation):
    """Classify each generator by its coarse family and least universal cell mask.

    Rows must satisfy within-family and coarse cross-family separation. This
    precondition is validated. Admissibility of the refined output is not used
    by the compiler; it is the written theorem's conclusion and tested separately.
    Empty rows, empty alphabets, and arity zero are supported.
    """
    validate_rows(rows, child_relations, coarse_relation)
    types = normalized_types(coarse_relation)
    index = {t: i for i, t in enumerate(types)}
    masks = canonical_masks(rows, child_relations)
    result = [[] for _ in types]
    for a, row in enumerate(rows):
        for w in row:
            require((a, masks[w]) in index, 'output mask not normalized')
            result[index[(a, masks[w])]].append(w)
    return types, tuple(tuple(sorted(row)) for row in result)


def forget_masks(typed_rows, types, r):
    """Forget output tags without forgetting individual input generators."""
    result = [[] for _ in range(r)]
    for (a, _), row in zip(types, typed_rows):
        result[a].extend(row)
    for row in result:
        require(len(row) == len(set(row)), 'duplicate coarse generator')
    return tuple(tuple(sorted(row)) for row in result)


def tighten(typed_rows, child_relations, coarse_relation):
    types = normalized_types(coarse_relation)
    validate_rows(typed_rows, child_relations, refined_relation(types))
    rows = forget_masks(typed_rows, types, len(coarse_relation))
    return compile_rows(rows, child_relations, coarse_relation)[1]


def guarded_addition(rows, extension, target, child_relations, coarse_relation):
    """Add a separated typed code, filtered against the protected coarse outputs."""
    validate_rows(rows, child_relations, coarse_relation)
    validate_rows((extension,), child_relations, ((False,),))
    require(type(target) is int and 0 <= target < len(rows), 'bad target')
    protected = [a for a in range(len(rows))
                 if a == target or coarse_relation[target][a]]
    selected = tuple(w for w in extension
                     if all(apart(w, v, child_relations)
                            for a in protected for v in rows[a]))
    updated = list(rows)
    updated[target] = tuple(sorted(rows[target] + selected))
    # No deduplication: reflexive incompatibility excludes old/new collisions.
    require(len(set(updated[target])) == len(updated[target]), 'addition double counts')
    return tuple(updated), selected
