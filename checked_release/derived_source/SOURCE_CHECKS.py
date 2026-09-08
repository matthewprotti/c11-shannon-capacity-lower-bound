#!/usr/bin/env python3
"""Source/data checks, not a Lean type checker. Standard library only."""
from __future__ import annotations
import hashlib
import json
import math
import re
from pathlib import Path
from typing import Any

PIN = 'aa21eeb12b75b0413d3fa9fb4208b5d0bf2c4d65'
R1_SHA256 = '68604c46a4e58685811473251a3bbdcb209ec700454d50fd584b510e2afbd51d'
NS = 'ShannonBounds.C11AuxiliaryTrade.'
AUDITED_NAMES = [NS + s for s in (
    'T3mix_eq_row_hybrid', 'S3mix', 'stepx27', 'card_code69', 'card_code207',
    'independent_code207', 'exists_code207', 'shannonCapacity_cycleGraph_11_ge_root',
    'shannonCapacity_cycleGraph_11_ge', 'candidate_root_strictly_improves')]
AUDITED_NAMES += ['C11_scope_exact_set', 'C11_scope_capacity', 'C11_scope_strict_root']
# An unexpected name fails closed and requires examination in the pinned Lean source.
ALLOWED_AXIOMS = {'propext', 'Classical.choice', 'Quot.sound'}
# Lean 4.32.2 creates a fresh Bool-equality axiom for each successful native check.
# Matching the name is only stage one: RUN_LEAN_GATE also checks its actual Lean type.
NATIVE_AXIOM_PATTERN = re.compile(r'(?:[A-Za-z0-9_]+\.)*_native\.(?:native_decide|decide|bv_decide)\.ax(?:_\d+){0,2}')
# Observed with pp.universes=true in the pinned compiler. These are universe
# annotations on the same three standard constants, not additional axioms.
STANDARD_AXIOM_PRINT_FORMS = {
    'Classical.choice.{u}': 'Classical.choice',
    'Quot.sound.{u}': 'Quot.sound',
}

def is_native_axiom(name: str) -> bool:
    return NATIVE_AXIOM_PATTERN.fullmatch(name) is not None

class CheckError(RuntimeError):
    pass

def require(condition: bool, message: str) -> None:
    if not condition:
        raise CheckError(message)

def sha256(path: Path) -> str:
    return hashlib.sha256(path.read_bytes()).hexdigest()

def strip_lean_comments(text: str) -> str:
    """Remove nested block and line comments, preserving code line boundaries."""
    out: list[str] = []
    i = 0
    depth = 0
    while i < len(text):
        if depth:
            if text.startswith('/-', i): depth += 1; i += 2
            elif text.startswith('-/', i): depth -= 1; i += 2
            else:
                out.append('\n' if text[i] == '\n' else ' '); i += 1
        elif text.startswith('/-', i): depth = 1; i += 2
        elif text.startswith('--', i):
            j = text.find('\n', i)
            if j < 0: break
            out.append('\n'); i = j + 1
        else:
            out.append(text[i]); i += 1
    require(depth == 0, 'unterminated Lean block comment')
    return ''.join(out)

def lean_body(text: str, name: str) -> str:
    text = strip_lean_comments(text)
    m = re.search(r'(?m)^def\s+' + re.escape(name) + r'\s*:', text)
    require(m is not None, f'missing definition {name}')
    tail = text[m.end():]
    end = re.search(r'(?m)^(?:def|abbrev|theorem|lemma|section|end|namespace|variable)\b', tail)
    return tail[:end.start()] if end else tail

def literal(text: str, name: str) -> int:
    m = re.fullmatch(r'\s*Nat\s*:=\s*(\d+)\s*', lean_body(text, name))
    require(m is not None, f'{name} is not an explicit Nat literal')
    return int(m.group(1))

def table_from_lean(text: str, name: str) -> dict[str, list[str]]:
    body = lean_body(text, name)
    rows = re.findall(r'\|\s*\.?([BNADOHV])\s*=>\s*(.*?)(?=\n\s*\||\Z)', body, re.S)
    require(len(rows) == 7 and len({a for a, _ in rows}) == 7, f'{name}: seven rows required')
    ans: dict[str, list[str]] = {}
    for a, row in rows:
        words = re.findall(r'!\[([^\]]+)\]', row)
        ans[a] = [''.join(x.strip().lstrip('.') for x in w.split(',')) for w in words]
        require(len(ans[a]) == len(set(ans[a])), f'{name}: repeated word')
    return ans

def replay(f: dict[str, Any], c: dict[str, Any]) -> tuple[dict[str, dict[str, int]], int]:
    weights: dict[str, Any] = {}
    exponents: dict[str, int] = {}
    for n in f['nodes']:
        name, kind = n['name'], n['kind']
        if kind == 'base':
            weights[name] = dict(zip('BNADOHV', [145, 142, 3, 3, 3, 3, 3]))
            exponents[name] = 1
            continue
        kids = n['children']
        exponents[name] = sum(exponents[k] for k in kids)
        def value(word: str) -> int:
            require(len(word) == len(kids), 'wrong word arity')
            return math.prod(weights[k][a] for k, a in zip(kids, word))
        if kind == 'K3a':
            weights[name] = sum(value(w) for w in f['tables'][kind])
        else:
            table = c['replacement_table'] if name == 'x27' else f['tables'][kind]
            weights[name] = {a: sum(value(w) for w in table[a]) for a in 'BNADOHV'}
    require(exponents['root'] * 3 == 207, 'physical dimension mismatch')
    require(weights['root'] == int(c['N1']), 'N1 arithmetic replay mismatch')
    return weights, exponents['root'] * 3

def check_axiom_output(text: str) -> dict[str, list[str]]:
    """Parse actual `#print axioms` output; never infer unprinted dependencies."""
    found: dict[str, list[str]] = {}
    pattern = re.compile(r"'([^']+)'\s+(?:depends on axioms:\s*\[([^\]]*)\]|does not depend on any axioms)", re.S)
    for m in pattern.finditer(text):
        name = m.group(1)
        if name not in AUDITED_NAMES:
            continue
        require(name not in found, f'duplicate axiom report for {name}')
        printed_deps = [x.strip() for x in (m.group(2) or '').split(',') if x.strip()]
        deps = [STANDARD_AXIOM_PRINT_FORMS.get(d, d) for d in printed_deps]
        require(all(d in ALLOWED_AXIOMS or is_native_axiom(d) for d in deps), f'unapproved axioms for {name}: {deps}')
        found[name] = deps
    require(set(found) == set(AUDITED_NAMES), 'missing one or more required axiom reports')
    require(not re.search(r"\bsorryAx\b|\bdeclaration uses ['`]sorry", text), 'placeholder dependency')
    return found

def manifest_check(root: Path) -> int:
    manifest = root/'MANIFEST.sha256'
    require(manifest.is_file(), 'missing manifest')
    listed: dict[str, str] = {}
    for line in manifest.read_text().splitlines():
        m = re.fullmatch(r'([0-9a-f]{64})  (.+)', line)
        require(m is not None, 'malformed manifest row')
        digest, name = m.groups()
        rel = Path(name)
        require(not rel.is_absolute() and '..' not in rel.parts and name not in listed, 'unsafe or duplicate manifest path')
        path = root/rel
        require(path.is_file() and not path.is_symlink(), f'missing/unsafe file {name}')
        require(sha256(path) == digest, f'hash mismatch: {name}')
        listed[name] = digest
    actual = {p.relative_to(root).as_posix() for p in root.rglob('*') if p.is_file() and p != manifest}
    require(actual == set(listed), 'manifest does not cover exactly the package files')
    return len(listed)

def verify_sources(root: Path, check_manifest: bool = True) -> dict[str, Any]:
    count = manifest_check(root) if check_manifest else None
    lock = json.loads((root/'UPSTREAM_LOCK.json').read_text())
    require(lock['commit'] == PIN, 'wrong upstream commit')
    require(sha256(root/'ancestry'/'C11_Auxiliary_Trade_R1_2026-09-08.zip') == R1_SHA256, 'wrong R1 ancestor')
    for name, digest in lock['frozen_file_sha256'].items():
        require(sha256(root/name) == digest, f'frozen data changed: {name}')
    c = json.loads((root/'CANDIDATE.json').read_text())
    f = json.loads((root/'FROZEN_INPUTS.json').read_text())
    require(c['schema'] == 'C11_AUXILIARY_TRADE_CERTIFICATE_V1', 'wrong candidate schema')
    require(c['source_commit'] == f['source_commit'] == PIN and c['dimension'] == 207, 'wrong frozen scope')
    src = (root/'lean'/'ShannonBounds'/'C11AuxiliaryTrade.lean').read_text()
    audit = (root/'lean'/'C11_AxiomAudit.lean').read_text()
    for name, text in [('construction', src), ('audit', audit)]:
        code = strip_lean_comments(text)
        require(not re.search(r'\b(sorry|admit|axiom|unsafe|run_elab|run_tac)\b|implemented_by|skipKernelTC|\[extern', code), f'forbidden proof-bypass token in {name}')
    require(literal(src, 'N0') == int(c['N0']) and literal(src, 'N1') == int(c['N1']), 'Lean integer literal mismatch')
    got = table_from_lean(src, 'T3mix')
    require({a: set(v) for a, v in got.items()} == {a: set(v) for a, v in c['replacement_table'].items()}, 'Lean table differs from frozen candidate')
    weights, dim = replay(f, c)
    row_pairs = re.findall(r'\|\s*\.([BNADOHV])\s*=>\s*(\d+)', lean_body(src, 'wx27'))
    require(len(row_pairs) == 7 and {a: int(v) for a, v in row_pairs} == weights['x27'], 'Lean x27 weight mismatch')
    # Direct source checks are only supplementary; the compiled scope aliases are controlling.
    require('Realisation.multiSubst CertC11.ex27 (CertC11.chx27 R) S3mix' in src, 'wrong x27 interface')
    require('Fin.cases (Rx27 R) (Fin.cases (CertC11.Rx29 R) (fun _ => CertC11.Rb13 R))' in src, 'wrong terminal children')
    require('isIndepSet_multiCodeSet' in src and 'card_multiCodeSet' in src and 'code207' in src, 'missing explicit-set connection')
    require(c['N0'] in audit and c['N1'] in audit, 'scope audit lacks full frozen literals')
    for name in AUDITED_NAMES:
        require('#print axioms ' + name in audit, f'missing axiom command: {name}')
    return {'status': 'PASS_SOURCE_AND_FROZEN_DATA_CHECKS_ONLY', 'lean_build': 'NOT_COMPLETED',
            'typechecking_or_axiom_audit_executed': False, 'manifest_files_checked': count,
            'dimension': dim, 'N1': str(weights['root']), 'candidate_table_words': sum(map(len, got.values())),
            'note': 'Static checks and Python arithmetic do not establish Lean elaboration or kernel acceptance.'}

if __name__ == '__main__':
    import sys
    sys.dont_write_bytecode = True
    try:
        print(json.dumps(verify_sources(Path(__file__).resolve().parent), indent=2))
    except (CheckError, OSError, ValueError, KeyError) as exc:
        print(json.dumps({'status': 'FAIL_SOURCE_CHECKS', 'error': str(exc)}, indent=2))
        raise SystemExit(1)
