# R7 local Lean formalization receipt

**PASS_R7_UNIFORM_COMPILER_PINNED_LEAN_GATE.** The R7 general compiler formalization is complete locally.

## Delivered artifact

- ZIP: `C11_R7_Lean_Checked_2026-09-08.zip`
- SHA256: `cc230eeaef95f974110827d149e07d7763ce136c58dfa85f5cf7b0b4648ea5c4`
- Size: 2,433,140 bytes
- Files: 397 including the 396-entry manifest
- Prepared: 2026-09-09T03:10:49.887419+00:00

The original R7 archive has SHA256 `f6c16059de6509b5040becfaa565b19535298705935d23eae31924bc39728ac7` and is preserved unchanged, along with all 19 extracted original files and the embedded R6 finite ancestor.

## What is formalized

The result is an arbitrary-finite-alphabet, arbitrary-arity compiler theorem. Its full contract includes admissibility and retention of every old and selected extension generator with the exact assigned mask. It does not assume compiled admissibility, solver success, a chosen seed, nonempty support, or a numerical C11 construction.

The package additionally proves profile/realization equivalence, exact sets and counts in arbitrary finite child graphs, filtered gain and conservative updating, BPZ summed-power transport, finite recipe and well-founded finite-DAG preservation, repeated-child dimension addition, the alphabet cardinality formula and its 58-letter specialization, certified zero-weight pruning, and typed terminal expansion/pruning.

The recursive dimension statements concern heterogeneous strong powers of a common finite graph; the one-step set/cardinality semantics permits arbitrary finite child graphs. No topological ordering is assumed for the finite-DAG theorem.

## Executed verification

- Development compilation and two complete fresh checkouts passed with Lean 4.32.2.
- Both fresh checkouts rebuilt the unchanged BPZ C11 positive control and all eleven R7 mathematical modules.
- Twelve Lean source files, including the audit command, and twelve compiled artifacts are recorded per run.
- The actual namespace audit covers 381 declarations: 346 general and 35 separate-example declarations, including generated declarations.
- Complete readable and raw closed statement types are retained for 24 main interfaces.
- No native-evaluation axioms, new logical axioms, unsafe declarations, or sorry dependencies occur in the audited R7 development. The only standard axioms used are `propext`, `Classical.choice`, and `Quot.sound`.
- Both fresh runs reject the stale-mask separating-coordinate obligation and the omitted-self-protection gain equation because the propositions are false. Positive Lean theorems establish the corresponding counterexamples.
- Original finite regressions agree in normal and optimized Python: 640 ordinary cases, 11,027 augmented cases, 192 random cases, six defective variants, eleven full-type R6 templates, and exact correspondence at all 91 R6 nodes including bases.
- The additional physical-graph checker agrees across modes on 350 compiled nodes, including repeated children, overlapping coarse families, conservative masks, exact gain, and zero-weight pruning in its stated bounded scopes.
- The completed ZIP was extracted and its release verifier passed normally and under `-O`. Four targeted integrity mutations were rejected in both modes: a missing manifest, an unlisted file, changed Lean source, and a changed compiled artifact.

Both fresh builds agree on source hashes, complete statement types, and axiom dependency sets. Six of twelve compiled artifacts are byte-identical. Five differing files have an eight-byte size difference; the differing DAG file has the same size. The cause of those binary differences was not established. Both builds passed, and the package retains the authoritative second-run artifacts with their exact hashes. No bit-for-bit reproducibility claim is made.

## Pins and review boundary

BPZ: `aa21eeb12b75b0413d3fa9fb4208b5d0bf2c4d65`.
Mathlib: `905b95818eb32af7874a58b427f50c1711a5e96c`.
All nine dependency revisions and both unstaged and staged/index differences were checked before and after. The pinned binary dependency cache was reused; Lean and Mathlib were not rebuilt from source.

This is an author-side compiler/verification receipt, not independent expert endorsement or worldwide novelty clearance. It adds no new numerical C11 bound and does not change the accepted R5/R6 source or certificate packages. R7 has not been published or added to VibeMathed in this work.

`VERIFY_RELEASE.py` checks package integrity and recorded evidence without invoking Lean. `RUN_R7_GATE.py` performs a new compiler replay. A receiving review that runs only the former should not describe that as rerunning Lean.

AI co-developed with OpenAI's Astra 6 Pro and Codex GPT-6 Astra Extra-High under Matthew Protti's direction. The BPZ framework and source retain their attribution.
