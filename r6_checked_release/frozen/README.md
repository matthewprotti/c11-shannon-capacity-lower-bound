# C11 R6: avoidance-profile refinement

This package proposes and tests a bounded refinement of the seven-family
search representation used in R3–R5. It retains certified avoidance types,
selects safe parts of otherwise forbidden product blocks, and conservatively
updates the type information so that recursion can continue.

**This refines the seven-state model; it does not supersede BPZ's generic
arbitrary-alphabet substitution theorem.** The resulting constructions are
also supplied as ordinary separation certificates on a 58-letter alphabet.

## Finite consequences

| Dimension | Exact-integer-certified lower endpoint |
|---|---:|
| 186 | 5.295498536418623 |
| 198 | 5.295510441529957 |
| 213 | **5.295515544509239** |

Each is strictly stronger than the corresponding full R5 constructed root.
The original seeds, coarse substitution tables, DAGs, and dimensions are
unchanged. The new points come from filtered auxiliary augmentation.

Three finite replays agree: integer masks, set-of-labels types, and ordinary
58-letter separation tables. Normal and optimized Python agree. There are
20 profile-certificate negative controls and 8 typed-certificate controls.
No R6 Lean compilation, new external review, global novelty clearance, or
optimality claim is included.

## Replay

Python 3.10+; the main verifier requires only the standard library:

```sh
python3 -B VERIFY.py --self-test --manifest
python3 -O -B VERIFY.py --self-test --manifest
```

Expected marker: `PASS_C11_R6_AVOIDANCE_PROFILE_FINITE_CERTIFICATES`.
Replay reads but does not mutate the package. Compiling the generated typed
certificates or running search writes outputs and is not part of replay.

The optional direct physical check uses NumPy and SciPy for the six-dimensional
torus check, while its 12 toy-graph tests use only the standard library:

```sh
python3 -B verification/physical_checks.py --c11-six
```

The restricted discovery search can be rerun, with output outside this sealed
package. Dimension 186 was rerun after making the scripts portable:

```sh
python3 -B search/avoidance.py 186 --output-dir ../r6-search-output
```

## Reader route

`PROOF.md` states the general invariants, product rule, augmentation rule,
conservative update, 58-letter compilation, and a strict information-loss
example. `evidence/LOCAL_WITNESS.json` isolates a 6,605,843,949-point auxiliary
addition at a dimension-24 node. `certificates/` contains the compact recipes;
`compiled/` contains the independently checked ordinary typed tables.
`SEARCH_LEDGER.md` records the bounded search and empty-piece pruning.
`REVIEW_AND_LEAN_HANDOFF.md` fixes the remaining proof and formalization scope.

The upstream R5 archive is not redundantly embedded. The exact three parent
certificates and frozen base file needed for replay are included and hashed;
`LINEAGE.json` also records the confirmed R5 archive hash. No earlier package
or public submission was modified.
