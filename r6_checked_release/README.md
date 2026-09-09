# C11 R6: Lean-checked finite avoidance-profile constructions

**The three frozen R6 finite constructions pass the pinned Lean gate.**

| Dimension | Proved lower bound for the Shannon capacity of C11 |
|---:|---:|
| 186 | 5.295498536418623 |
| 198 | 5.295510441529957 |
| 213 | **5.295515544509239** |

Each bound is derived from an explicitly defined independent finite set in the corresponding strong power of Mathlib's `SimpleGraph.cycleGraph 11`, with exactly the full integer cardinality specified by the original R6 certificate. Each constructed root is strictly greater than its matching full R5 root and all four older frozen comparison roots. Upper decimal endpoints bound the constructed roots, not Shannon capacity.

## Formalization route and scope

R6's supplied ordinary certificates use 58 typed letters. This formalization defines precisely that enumeration and the supplied separation relation, reconstructs its base realization in the actual C11 cube, and proves every literal substitution and terminal code valid. BPZ's generic product-set theorems then provide the explicit sets and exact cardinalities.

The base proofs also check the coarse families against BPZ's actual base families, the exact neighborhood-type interpretation of the typed vertex lists, normalization of the 58 descriptors, their uniqueness and completeness, all typed separations, and all 58 base weights.

**The general avoidance-profile calculus remains a written proof.** This package does not claim Lean formalization of the arbitrary-graph product-propagation, filtered-augmentation, or conservative-update algorithm. The ordinary 58-letter certificate route is sufficient for the three finite graph-to-capacity results and does not assume those unformalized general claims.

The original R6 archive, profile recipes, typed certificates, parent R5 certificates, base data, table entries, and node order are unchanged. The received files are retained under `frozen/`; their earlier unbuilt status is historical input. The top-level status and build report describe this completed formalization.

## Read first

- [BUILD_SUMMARY.md](BUILD_SUMMARY.md): exact scope, checks, and trust.
- [CERTIFICATE_INDEX.json](CERTIFICATE_INDEX.json): full integers and headline theorem names.
- [BUILD_RESULT.json](BUILD_RESULT.json): measured fresh-replay result.
- [C11R6_AxiomAudit.lean](source/C11R6_AxiomAudit.lean): the 24 literal scope assertions.
- The [186](source/ShannonBounds/C11R6D186.lean), [198](source/ShannonBounds/C11R6D198.lean), and [213](source/ShannonBounds/C11R6D213.lean) construction modules.
- [C11R6Base.lean](source/ShannonBounds/C11R6Base.lean) and [C11R6ListChecks.lean](source/ShannonBounds/C11R6ListChecks.lean): typed base and efficient checks with proved logical bridges.

## Trust and review status

The formalization uses Lean 4.32.2, BPZ commit `aa21eeb12b75b0413d3fa9fb4208b5d0bf2c4d65`, and Mathlib commit `905b95818eb32af7874a58b427f50c1711a5e96c`. It uses the disclosed native-evaluation mechanism and a pinned dependency binary cache. This is not kernel-only arithmetic replay or a source rebuild of Lean and Mathlib.

The audit covers 232 declarations and all 234 distinct compiler-generated native-evaluation axioms in their dependency union. Every native axiom's actual type was checked as `Eq Bool e true`, with e closed and the declaration not unsafe. Standard Lean axioms are disclosed. No `sorryAx` or unapproved axiom was accepted. Six intentionally false compile probes failed for their expected mathematical reasons.

Independent informal-to-formal statement review, external expert endorsement, a new worldwide-priority review, and optimality are not claimed. There are no GitHub or VibeMathed updates in this local handoff.

## Integrity replay

Python 3.10 or newer, standard library only:

```sh
python3 -B VERIFY_RELEASE.py
```

This validates the sealed files, original inputs, source bindings, recorded build and axiom logs, negative-control diagnostics, and compiled hashes. It does not invoke Lean.

## Fresh Lean replay

With Git, network access, and Lean 4.32.2/Lake available on PATH or through Elan:

```sh
python3 -B RUN_R6_GATE.py --work-dir /absolute/path/new-c11-r6-run
```

The work directory must not exist and must be outside the source package. Use `--toolchain-bin /path/to/lean-4.32.2/bin` for an explicit installation. On macOS/APFS, `--dependency-cache /path/to/pinned/bpz/.lake/packages` can clone an already verified dependency cache; worktree and staged/index diffs and revisions are checked. BPZ and R6 build products are rebuilt in the fresh checkout.

The compiled `.olean` files are recorded evidence, not a standalone portable runtime. Compiler binaries and Mathlib build products are not bundled. `parent_formalization/` retains the checked R5 source templates used by the generator; the accepted R6 mathematical modules are under `source/`.

## Attribution

AI co-developed under Matthew Protti's direction with OpenAI's Astra 6 Pro and Codex GPT-6 Astra Extra-High. Codex prepared the local Lean formalization. The generic framework, original base construction, and prior source retain the attribution to Pjotr Buys, Sven Polak, and Jeroen Zuiddam and the seed authors they cite. This does not supersede BPZ's arbitrary-alphabet theorem. New formalization and harness code are provided under Apache-2.0; the received notices and original archive are preserved.
