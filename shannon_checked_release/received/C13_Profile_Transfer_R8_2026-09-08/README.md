# C13 controlled transfer of the avoidance-profile compiler — R8

**Matthew Protti — AI co-developed — research label 8 September 2026.**

An explicit finite construction gives

\[
\Theta(C_{13})\ge 6.302927046770772
\]

in dimension **522**, strictly exceeding the complete pinned BPZ cardinality at
that same dimension. This is a **new finite certificate with a written lifting
proof**, not a newly Lean-checked bound and not an externally reviewed record.

The experiment transfers the previously developed avoidance-profile method from
C11 to C13. The original BPZ C13 seeds, pairing, seven-family relation, schedule,
coarse substitutions, terminal code and dimension stay fixed. Three guarded
augmentations enlarge selected auxiliary families.

## Main experiment

| | Frozen BPZ | Refined C13 |
|---|---:|---:|
| Dimension | 522 | 522 |
| Constructed root, truncated | 6.302926729310108 | **6.302927046770772** |
| Changed seeds / assembly / terminal | — | **None** |
| Guarded augmented nodes | 0 | 3 |

The numerical root gain is about 3.174606638e-7. The experiment is interesting
principally as a controlled second application, not as a large numerical jump.

A full scan of 17,150 (output-family, product-rectangle) pairs in the fixed
one-node whole-block addition neighbourhood finds no admissible nonempty addition
to a family consumed downstream. All 250 admissible additions target unused O.
The refined method instead adds safe portions of blocked rectangles to A and N.
This is an exact local ablation, not a global impossibility theorem for coarse
BPZ constructions, reassembly, deletions, or enlarged alphabets.

## Reproduce

Python 3.10+; standard library only. These commands do not invoke Lean.

```sh
python3 -B VERIFY.py --self-test --manifest
python3 -O -B VERIFY.py --self-test --manifest
```

Expected marker: `PASS_C13_R8_CONTROLLED_PROFILE_TRANSFER`.

The first checker uses syndrome differences and profile recurrences. The second
uses actual six-dimensional torus neighbourhoods and ordinary 58-letter tables;
it imports no profile, search, or compiler implementation. All 28 nodes,
including base and terminal, agree; every intermediate type count agrees.

Optional reproducible search and untrusted compilation write OUTSIDE this package:

```sh
python3 -B SEARCH.py --output /absolute/path/new-search-result.json
python3 -B COMPILE.py --output /absolute/path/new-typed-certificate.json
```

See `PROOF.md`, `SEARCH_LEDGER.md`, `SOURCES_AND_SCOPE.md`, and `CODEX_HANDOFF.md`.
The 418-digit integers are in `certificates/C13_d522.json` and `PROOF.md`.

## Trust and scope

The general R7 mathematical compiler has its own accepted pinned Lean return.
That does not automatically verify a new Python output or this new C13 base.
R8 supplies two finite replays and independently checks the compiled literal
output. New C13-specific Lean integration and external review remain pending.
No external solver, remote write, or new publication was performed for R8.

BPZ's seeds, coset representation, generic framework and original tables retain
their attribution. The quotient compression is BPZ prior work, not an R8 invention.
The historical R7 receipt is retained solely as context; its publication-status
sentences describe its own build time, not the user's subsequent submission.
