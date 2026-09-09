# R7: Lean-checked uniform avoidance-profile compilation

**The general R7 compiler and preservation theorems pass the pinned Lean gate.**
This is a methods result. It adds no new numerical bound for the Shannon capacity of C11.

The development covers arbitrary finite alphabets, symmetric irreflexive Boolean separation relations, arbitrary arities (including zero), admissible coarse substitutions, separated extension codes, and a target letter. The full compiler enumerates all normalized input types. Its admissibility is proved from the input hypotheses; no compiled-table validity oracle, chosen seed, nonempty support, or numerical C11 assumption is used.

## Formal scope

- Normalized descriptors, the exact refined separation relation, and coarse lifting.
- Full ordinary and augmented compilation, with every old and selected extension generator retained with its assigned mask.
- Forward and reverse bridges between typed realizations and coarse partition/avoidance profiles, allowing different coarse families to overlap.
- Exact set and cardinality semantics in arbitrary finite child graphs, including disjoint filtered gain and the stated conservative mask updates.
- BPZ graph-isomorphism transport into the strong power of the summed dimension.
- Finite recipe and well-founded finite-DAG preservation, exact recursive weights, and separate coordinate blocks for repeated children.
- The alphabet-cardinality formula and its 58-letter BPZ specialization.
- Set/count preservation under deletion only when the deleted rectangles have a proved zero-cardinality child; terminal expansion and pruning are proved separately.

Start with [BUILD_SUMMARY.md](BUILD_SUMMARY.md), [SOURCE_BINDINGS.json](SOURCE_BINDINGS.json), and the [printed statement types](STATEMENT_TYPES.txt). The complete raw Lean expression types are retained in each fresh run's `RAW_STATEMENT_TYPES.json`.

The universal compiler contract is [Core.lean](source/ShannonBounds/ProfileCompiler/Core.lean), theorem `ShannonBounds.ProfileCompiler.universal_compilation`. The general entry module is [ProfileCompiler.lean](source/ShannonBounds/ProfileCompiler.lean). It does not import the [finite examples](source/ShannonBounds/ProfileCompiler/Examples.lean).

## Checks and trust

Two complete fresh checkouts rebuilt the unchanged BPZ C11 positive control and all eleven R7 mathematical modules. Their source files, statement types, and axiom dependency sets agree. The audit covers 381 declarations, including generated declarations: 346 in the general namespace and 35 in the separate examples namespace. This is not a count of 381 new theorems.

**No native-evaluation axioms, new logical axioms, unsafe declarations, or sorry dependencies occur in the audited R7 development.** The only standard axioms used are `propext`, `Classical.choice`, and `Quot.sound`. The small finite examples use ordinary `decide` and kernel reduction. Both deliberately false compile probes fail because their propositions are false.

The environment is Lean 4.32.2, BPZ commit `aa21eeb12b75b0413d3fa9fb4208b5d0bf2c4d65`, and Mathlib commit `905b95818eb32af7874a58b427f50c1711a5e96c`. The pinned binary dependency cache was reused; Lean and Mathlib were not rebuilt from source. All nine dependency revisions and both worktree and staged/index diffs were checked before and after.

Independent expert review, worldwide novelty clearance, optimality, a positive gain for every input, and Tandon's broader extension are not claimed. The reference Python compiler is not treated as an oracle; this package proves the corresponding mathematical finite-set compiler in Lean and separately replays the supplied finite Python regressions.

The original R7 files and archive are unchanged under `frozen/` and `ancestry/`. Their pre-Lean status is historical input. The accepted R5/R6 numerical results are unchanged. This package was prepared locally; it does not publish to GitHub or submit to VibeMathed.

## Verify the package

Python 3.10 or newer, standard library only:

```sh
python3 -B VERIFY_RELEASE.py
```

This checks file integrity and recorded compiler evidence. It does not run Lean.

## Perform a fresh Lean replay

With Git, network access, and the pinned Lean 4.32.2/Lake available:

```sh
python3 -B RUN_R7_GATE.py --work-dir /absolute/path/new-r7-run
```

The work directory must not exist and must be outside the source package. Use `--toolchain-bin /path/to/lean-4.32.2/bin` for an explicit installation. On macOS/APFS, `--dependency-cache /path/to/pinned/bpz/.lake/packages` can clone an existing dependency cache after checking every revision and both kinds of diff. BPZ and R7 proof modules are rebuilt.

`SEMANTIC_REVIEW.py` provides an additional bounded physical-graph check. It differs from the original initial-review script only in its input-directory path, to support this package layout. Its tests are not the universal proof.

## Attribution

AI co-developed with **OpenAI's Astra 6 Pro** and **Codex GPT-6 Astra Extra-High**, under Matthew Protti's direction. The ChatGPT research collaboration supplied the R7 written theorem and finite reference implementation. Codex wrote and compiled this local general Lean formalization and its verification tooling. BPZ's existing arbitrary-alphabet framework and source retain their original attribution. See [LICENSE](LICENSE) and [NOTICE](NOTICE).
