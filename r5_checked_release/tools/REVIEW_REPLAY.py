#!/usr/bin/env python3
"""Additional exact review of C11 R5. Imports none of the supplied checkers.

Uses explicit base-11 coordinate tuples and bit sets of symbolic confusable
words, then exact DAG arithmetic. This is a finite check, not a Lean proof
or an independent human expert endorsement.
"""
import collections
import functools
import hashlib
import io
import itertools
import json
import math
from pathlib import Path
import sys
import zipfile

ROOT = Path(sys.argv[1]) if len(sys.argv) > 1 else Path(__file__).parent / "source/C11_Recursive_Reassembly_R5_2026-09-08"
ALPHABET = "BNADOHV"
EDGES = ("BO", "BH", "BV", "NA", "ND", "NO", "NH", "NV", "AD", "AH", "DV")


def ensure(condition, message):
    if not condition:
        raise ValueError(message)


def digits(value, radix=11, length=3):
    result = []
    for _ in range(length):
        value, digit = divmod(value, radix)
        result.append(digit)
    ensure(value == 0, "coordinate overflow")
    return tuple(result)


def encode(word):
    return sum(ALPHABET.index(x) * 7 ** i for i, x in enumerate(word))


def mask(values):
    answer = 0
    for value in values:
        answer |= 1 << value
    return answer


def base_geometry(frozen):
    words = [digits(i) for i in range(1331)]
    nearby = []
    for word in words:
        neighbors = itertools.product(*[[(x + step) % 11 for step in (-1, 0, 1)] for x in word])
        nearby.append(mask(sum(x * 11 ** i for i, x in enumerate(neighbor)) for neighbor in neighbors))
    seed_i, seed_x = frozen["I"], frozen["X"]

    def independent(values):
        ensure(len(values) == len(set(values)), "duplicate concrete word")
        ensure(all(type(v) is int and 0 <= v < 1331 for v in values), "invalid concrete word")
        whole = mask(values)
        return all((nearby[v] & whole) == (1 << v) for v in values)

    ensure(len(seed_i) == len(seed_x) == 148, "seed size")
    ensure(independent(seed_i) and independent(seed_x), "seed independence")
    parents, alternatives = zip(*frozen["pairs"])
    ensure(len(set(parents)) == len(set(alternatives)) == 3, "distinct private pairs")
    for parent, alternative in frozen["pairs"]:
        ensure((nearby[alternative] & mask(seed_i)) == (1 << parent), "private pair")
    parent_neighborhood = functools.reduce(int.__or__, [nearby[v] for v in parents], 0)
    alternative_neighborhood = functools.reduce(int.__or__, [nearby[v] for v in alternatives], 0)
    a = {v for v in seed_x if parent_neighborhood & (1 << v)}
    d = {v for v in seed_x if alternative_neighborhood & (1 << v)}
    ensure(not (a & d), "overlapping auxiliary footprints")
    families = {"B": set(seed_i) - set(parents), "N": set(seed_x) - a - d,
                "A": a, "D": d, "O": set(parents), "H": set(alternatives), "V": set(parents)}
    ensure(all(independent(list(v)) for v in families.values()), "base family independence")
    actual_separation = set()
    for left, right in itertools.combinations(ALPHABET, 2):
        neighborhood = functools.reduce(int.__or__, [nearby[v] for v in families[left]], 0)
        if not neighborhood & mask(families[right]):
            actual_separation.add(frozenset((left, right)))
    required = {frozenset(pair) for pair in EDGES}
    ensure(required <= actual_separation, "required physical separation")
    ensure(set(frozen["sep"]) == set(EDGES), "fixed relation mismatch")
    return {key: len(families[key]) for key in ALPHABET}, len(actual_separation)


SAFE = {a: {b for pair in EDGES for b in pair if a in pair and b != a} for a in ALPHABET}


@functools.lru_cache(maxsize=None)
def symbolic_conflicts(word):
    choices = [[b for b in ALPHABET if b not in SAFE[a]] for a in word]
    return mask(encode(other) for other in itertools.product(*choices))


@functools.lru_cache(maxsize=None)
def check_table(serialized):
    table = json.loads(serialized)
    terminal = type(table) is list
    rows = {"terminal": table} if terminal else table
    ensure(terminal or set(rows) == set(ALPHABET), "table rows")
    arities = {len(word) for row in rows.values() for word in row}
    ensure(len(arities) == 1 and 1 <= next(iter(arities)) <= 4, "table arity")
    row_masks = {}
    neighborhood_masks = {}
    for name, row in rows.items():
        ensure(type(row) is list and len(row) == len(set(row)), "duplicate symbolic word")
        ensure(all(type(word) is str and set(word) <= set(ALPHABET) for word in row), "symbol alphabet")
        row_masks[name] = mask(encode(word) for word in row)
        neighborhood_masks[name] = 0
        for word in row:
            conflict = symbolic_conflicts(word)
            ensure((conflict & row_masks[name]) == (1 << encode(word)), "within-row separation")
            neighborhood_masks[name] |= conflict
    if not terminal:
        for left, right in EDGES:
            ensure(not (neighborhood_masks[left] & row_masks[right]), "cross-row separation")
    return next(iter(arities)), terminal


def replay(case, base, strict=True):
    table_info = {k: check_table(json.dumps(t, sort_keys=True)) for k, t in case["tables"].items()}
    values, dimensions, leaves, reaches, used = {}, {}, {}, {}, set()
    for node in case["nodes"]:
        name, kind = node["name"], node["kind"]
        ensure(name not in values, "duplicate node")
        if kind == "base":
            values[name], dimensions[name], leaves[name], reaches[name] = dict(base), 3, 1, {name}
            continue
        arity, terminal = table_info[kind]
        children = node["children"]
        ensure(len(children) == arity, "child arity")
        ensure(all(child in values and type(values[child]) is dict for child in children), "forward reference or terminal child")
        dimensions[name] = sum(dimensions[child] for child in children)
        leaves[name] = sum(leaves[child] for child in children)
        reaches[name] = {name}.union(*(reaches[child] for child in children))
        used.add(kind)

        def weighted(row):
            return sum(math.prod(values[child][letter] for child, letter in zip(children, word)) for word in row)

        table = case["tables"][kind]
        values[name] = weighted(table) if terminal else {a: weighted(table[a]) for a in ALPHABET}
    root = case["root"]
    ensure(type(values[root]) is int, "nonterminal root")
    if strict:
        ensure(reaches[root] == set(values), "unreachable nodes")
        ensure(used == set(case["tables"]), "unused tables")
    ensure(dimensions[root] == leaves[root] * 3, "dimension versus occurrences")
    return values[root], dimensions[root], leaves[root], values, dimensions


def main():
    raw = (ROOT / "FROZEN_INPUTS.json").read_bytes()
    ensure(hashlib.sha256(raw).hexdigest() == "bc3f401480f2b9a878ad24faa1d98c1ad848755a0537ceff0043f12f67bf7c26", "frozen input hash")
    frozen = json.loads(raw)
    base, actual_edges = base_geometry(frozen)
    ensure(tuple(base.values()) == (145, 142, 3, 3, 3, 3, 3), "base profile")
    historical = {"root": "root", "nodes": frozen["nodes"], "tables": frozen["tables"]}
    old_n, old_d, *_ = replay(historical, base, strict=False)
    ensure(old_n == int(frozen["N0"]) and old_d == 207, "BPZ reconstruction")
    history = {"BPZ_207": (old_n, old_d)}
    r3 = json.loads((ROOT / "R3_FROZEN_CANDIDATE.json").read_text())
    historical = json.loads(json.dumps(historical))
    historical["tables"]["review_r3"] = r3["replacement_table"]
    for node in historical["nodes"]:
        if node["name"] == "x27":
            node["kind"] = "review_r3"
    r3_n, r3_d, *_ = replay(historical, base, strict=False)
    ensure(r3_n == int(r3["N1"]) and r3_d == 207, "R3 reconstruction")
    history["R3_207"] = r3_n, r3_d
    with zipfile.ZipFile(ROOT / "ancestry/C11_Follow_On_Search_R4_2026-09-08.zip") as archive:
        for dim in (201, 210):
            case = json.loads(archive.read(f"C11_Follow_On_Search_R4_2026-09-08/certificates/C11_d{dim}.json"))
            n, d, *_ = replay(case, base)
            ensure(n == int(case["N"]) and d == dim, "R4 reconstruction")
            history[f"R4_{dim}"] = n, d
    reports = []
    expected_dimensions = {186, 198, 213}
    for path in sorted((ROOT / "certificates").glob("*.json")):
        case = json.loads(path.read_text())
        n, d, occurrences, values, dimensions = replay(case, base)
        ensure(case["graph"] == "SimpleGraph.cycleGraph 11" and case["base_graph_power"] == 3, "graph identity")
        ensure(d == case["dimension"] and n == int(case["N"]), "root identity")
        ensure(d in expected_dimensions, "unexpected dimension")
        den, low, high = (int(case[k]) for k in ("decimal_denominator", "decimal_lower_numerator", "decimal_upper_numerator"))
        ensure(den == 10 ** 15 and high == low + 1, "bracket scale")
        ensure(low ** d <= n * den ** d < high ** d, "exact bracket")
        ensure(all(n ** e > m ** d for m, e in history.values()), "strict root improvement")
        reports.append({"dimension": d, "N": str(n), "leaf_occurrences": occurrences,
                        "nodes": len(values), "all_four_historical_roots_beaten": True,
                        "decimal_lower": f"{low // den}.{low % den:015d}",
                        "terminal_input_dimensions": [dimensions[v] for v in case["nodes"][-1]["children"]],
                        "node_weights": {k: {a: str(x) for a, x in v.items()} if type(v) is dict else str(v) for k, v in values.items()},
                        "node_dimensions": dimensions})
    ensure({r["dimension"] for r in reports} == expected_dimensions and len(reports) == 3, "missing or extra case")
    return {"status": "PASS_ADDITIONAL_REVIEW_REPLAY", "supplied_checker_imports": False,
            "base_weights": base, "actual_base_separation_edges": actual_edges,
            "fixed_inductive_separation_edges": len(EDGES), "cases": reports,
            "history": {k: {"N": str(n), "dimension": d} for k, (n, d) in history.items()},
            "lean_compilation": False, "external_expert_endorsement": False}


if __name__ == "__main__":
    print(json.dumps(main(), indent=2))
