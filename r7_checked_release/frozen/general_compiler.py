"""Reference compiler for the R7 written theorem; not a Lean proof.

Masks are conservative possible-conflict supersets. No realized weights, graph
vertices, seed data, or support pruning enter this universal symbolic compiler.
The checker is a separate literal-table test, not assumed by compilation.
"""
from __future__ import annotations
from itertools import product
from typing import Sequence

Word = tuple[int, ...]
Rule = tuple[tuple[Word, ...], ...]
Type = tuple[int, int]

class Invalid(ValueError):
    pass

def require(p: bool, message: str) -> None:
    if not p:
        raise Invalid(message)

def valid_relation(sep: Sequence[Sequence[bool]]) -> None:
    r = len(sep)
    require(all(len(row) == r for row in sep), 'square relation required')
    require(all(not sep[a][a] for a in range(r)), 'irreflexive relation required')
    require(all(sep[a][b] == sep[b][a] for a in range(r) for b in range(r)), 'symmetric relation required')

def types_for(sep: Sequence[Sequence[bool]]) -> tuple[Type, ...]:
    valid_relation(sep)
    r = len(sep)
    return tuple((a, m) for a in range(r) for m in range(1 << r)
                 if m & (1 << a) and not any(sep[a][b] and (m & (1 << b)) for b in range(r)))

def refined_sep(types: Sequence[Type]) -> tuple[tuple[bool, ...], ...]:
    return tuple(tuple((a == b and m != n) or not bool(m & (1 << b)) or not bool(n & (1 << a))
                       for b, n in types) for a, m in types)

def word_sep(u: Word, v: Word, sep: Sequence[Sequence[bool]]) -> bool:
    return any(sep[a][b] for a, b in zip(u, v))

def check_code(words: Sequence[Word], sep: Sequence[Sequence[bool]], q: int) -> None:
    r = len(sep)
    require(q >= 0, 'nonnegative arity required')
    require(len(set(words)) == len(words), 'duplicate code word')
    require(all(len(w) == q and all(0 <= a < r for a in w) for w in words), 'invalid word')
    for j, u in enumerate(words):
        for v in words[:j]:
            require(word_sep(u, v, sep), f'nonseparated code words: {u}, {v}')

def check_rule(rule: Rule, sep: Sequence[Sequence[bool]], q: int) -> None:
    valid_relation(sep)
    require(len(rule) == len(sep), 'wrong number of rows')
    for row in rule:
        check_code(row, sep, q)
    for a, row in enumerate(rule):
        for b in range(a):
            if sep[a][b]:
                for u in row:
                    for v in rule[b]:
                        require(word_sep(u, v, sep), 'nonseparated required cross-row pair')

def phi(rule: Rule, masks: tuple[int, ...]) -> int:
    return sum(1 << b for b, row in enumerate(rule)
               if any(all(m & (1 << a) for a, m in zip(w, masks)) for w in row))

def compile_rule(sep: Sequence[Sequence[bool]], q: int, rule: Rule,
                 target: int | None = None, extension: tuple[Word, ...] = (),
                 *, defect: str | None = None) -> tuple[tuple[Type, ...], Rule]:
    """Compile an ordinary rule, optionally followed by one filtered augmentation.

    All normalized input types are enumerated, including unrealized/empty ones.
    ``defect`` is solely for negative controls; normal callers must omit it.
    """
    check_rule(rule, sep, q)
    types = types_for(sep)
    ids = {pair: j for j, pair in enumerate(types)}
    r = len(sep)
    require(target is None or 0 <= target < r, 'bad target')
    require(target is not None or not extension, 'extension without target')
    if defect != 'unseparated_extension':
        check_code(extension, sep, q)
    by_label = [tuple(j for j, (a, _) in enumerate(types) if a == b) for b in range(r)]
    output: list[list[Word]] = [[] for _ in types]

    def typed_words(w: Word):
        for z in product(*(by_label[a] for a in w)):
            yield z, tuple(types[i][1] for i in z)

    def append(b: int, m: int, w: Word) -> None:
        require((b, m) in ids, f'non-normalized output type: {(b, m)}')
        output[ids[(b, m)]].append(w)

    for b, row in enumerate(rule):
        for w in row:
            for tw, masks in typed_words(w):
                m = phi(rule, masks)
                if target is not None and b != target and not sep[b][target] and defect != 'stale_masks':
                    m |= 1 << target
                append(b, m, tw)
    if target is not None:
        protected = (1 << target) | sum(1 << b for b in range(r) if sep[target][b])
        if defect == 'omit_self_protection':
            protected &= ~(1 << target)
        if defect == 'omit_neighbor_protection':
            protected = 1 << target
        for w in extension:
            for tw, masks in typed_words(w):
                m = phi(rule, masks)
                if not (m & protected):
                    if defect != 'omit_new_self_bit':
                        m |= 1 << target
                    append(target, m, tw)
    # Fail instead of silently discarding duplicates: exact count must not double count.
    for row in output:
        require(len(row) == len(set(row)), 'old/new collision or duplicate generated cell')
    return types, tuple(tuple(sorted(row)) for row in output)

def literal_check(rule: Rule, sep: Sequence[Sequence[bool]], q: int) -> dict[str, int]:
    """Literal output-table verification using independently assembled bitsets.

    Does not call the compiler, phi, or conservative-update procedure.
    """
    valid_relation(sep)
    r = len(sep)
    require(len(rule) == r, 'output row count')
    all_words = sorted(set(w for row in rule for w in row))
    index = {w: j for j, w in enumerate(all_words)}
    for row in rule:
        require(len(row) == len(set(row)), 'duplicate literal cell')
        require(all(len(w) == q and all(0 <= a < r for a in w) for w in row), 'literal word shape')
    universal = (1 << len(all_words)) - 1
    postings = [[0] * r for _ in range(q)]
    for j, w in enumerate(all_words):
        for i, a in enumerate(w):
            postings[i][a] |= 1 << j
    conflict_at = [[sum(postings[i][b] for b in range(r) if not sep[a][b])
                    for a in range(r)] for i in range(q)]
    conflicts = []
    for w in all_words:
        mask = universal
        for i, a in enumerate(w):
            mask &= conflict_at[i][a]
        conflicts.append(mask)
    row_masks = [sum(1 << index[w] for w in row) for row in rule]
    pair_count = 0
    for a, row in enumerate(rule):
        same = row_masks[a]
        cross = 0
        for b in range(a):
            if sep[a][b]:
                cross |= row_masks[b]
                pair_count += len(row) * len(rule[b])
        pair_count += len(row) * (len(row) - 1) // 2
        for w in row:
            j = index[w]
            require(not (conflicts[j] & (same ^ (1 << j))), 'literal within-row violation')
            require(not (conflicts[j] & cross), 'literal cross-row violation')
    return {'typed_letters': r, 'unique_input_words': len(all_words),
            'tagged_cells': sum(map(len, rule)), 'required_unordered_pairs': pair_count}
