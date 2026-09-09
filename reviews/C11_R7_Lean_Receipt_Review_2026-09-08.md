# R7 receiving review: uniform avoidance-profile compiler

## Disposition

**ACCEPT_PINNED_R7_GENERAL_FORMALIZATION_ON_DELIVERED_EVIDENCE.**

The previously missing checked archive has now been received and checked. I found no blocking mathematical defect, theorem-scope mismatch, or source/evidence inconsistency in the submitted R7 formalization. No mathematical source repair is requested from Codex.

This is an AI receiving review of supplied sources and recorded compiler evidence, supplemented by actual local Python replays and separately written checks. **No Lean compilation was performed in this receiving runtime:** Lean, Lake and Elan were not installed here. Acceptance of the pinned formalization rests on the delivered successful build records, their source and statement bindings, and the substantive source-level review. This is not independent human expert endorsement, worldwide novelty clearance, or cryptographic attestation of the remote execution.

## 1. Received identity and preservation

Checked archive: `C11_R7_Lean_Checked_2026-09-08.zip`.

- Actual SHA-256: `cc230eeaef95f974110827d149e07d7763ce136c58dfa85f5cf7b0b4648ea5c4`.
- Actual size: 2,433,140 bytes.
- Unique archive entries: 397, all files; archive CRC checks pass.
- Internal manifest: 396 entries, with no missing or unlisted files.
- All extracted file bytes agree with the checked ZIP.
- The embedded original R7 archive has SHA-256 `f6c16059de6509b5040becfaa565b19535298705935d23eae31924bc39728ac7`, matching both separately supplied copies.
- All 19 extracted frozen R7 files match that original archive byte for byte, including its embedded R6 finite ancestor.

All 397 files in the receiving extraction retained their contents and modification times through local replay. The original uploaded ZIP was not modified or resealed. New review reports are separate artifacts.

## 2. The central theorem is genuinely general and nonvacuous

The controlling declaration is `ShannonBounds.ProfileCompiler.universal_compilation` in `source/ShannonBounds/ProfileCompiler/Core.lean`.

Its complete recorded type quantifies over an arbitrary finite alphabet `A`, decidable equality, a Boolean relation `s`, and arbitrary natural arity `q`. Its explicit hypotheses are symmetry and irreflexivity of `s`, a coarse `Subst A s q`, a coarse `Code A s q`, and a target letter. It does **not** assume an output-validity oracle, solver success, a chosen C11 seed, nonempty type support, the output cardinality, or existence of a desired numerical code.

The conclusion gives an admissible refined substitution **whose rows equal the specified full augmented rows**, and includes every old and guarded extension generator with the exact prescribed label and mask. This is materially stronger than proving that some admissible refined substitution exists: the empty-table loophole is excluded.

The definitions `ordinaryRows` and `augmentedRows` filter the full finite universe of normalized typed words. They do not restrict compilation to types realized by a particular seed. `augmented_new_complete` uses the irreflexivity hypothesis to ensure the selected new output descriptor is a valid subtype member, rather than silently discarding selected generators during normalization.

`augmented` itself needs symmetry for its admissibility proof; the complete retention contract additionally states irreflexivity. This difference is appropriate, not a missing hypothesis in the full theorem.

## 3. Mathematical source review

I read all eleven mathematical modules, compared their definitions and the main closed statement types with the frozen R7 written theorem and handoff, and inspected the following load-bearing points.

### Normalized alphabet and separation

A descriptor `(a,m)` requires `a ∈ m` and excludes all coarse separation neighbours of `a`. The refined `apart` relation includes both missing-label directions and the same-family/different-mask separation. The latter is essential for disjoint partition pieces, not merely a cosmetic strengthening.

The source proves symmetry, irreflexivity and coarse lifting for that refined relation. The nonseparation lemma supplies mutual label membership and equality of masks when labels coincide. These are the premises actually used in the compiler proof.

### Old–old, new–new and mixed pairs

`old_pair` accounts for conservative supersets of propagated masks and uses coarse substitution admissibility to handle different underlying words. If nonseparated words share their underlying word, the same-label mask condition forces equality of typed words.

`new_pair` uses the separated extension code and deterministic new-mask assignment. It does not allow unrelated extension rectangles to overlap inside an output family.

`mixed_pair` is the critical step. Under assumed absence of a separating input coordinate, the old output label belongs to the new word's propagated possible-conflict mask. The guard then excludes the target and its neighbours. Symmetry converts the guard's orientation into the orientation used by `update`, so the old output receives the target bit. The new output mask contains the old label. Therefore the two output descriptors cannot incorrectly assert separation. The proof also excludes old/new collisions within one output label.

The conservative update is therefore used in the proof, not merely mentioned in a comment. The supplied negative example demonstrates why leaving old masks unchanged is unsound.

### Actual graph semantics and overlap

`Profiles.lean` gives both directions between typed realizations and coarse partition/avoidance profiles. Partition disjointness is required only among different masks of the **same coarse family**. Different coarse families may overlap; the proof never strengthens this into unjustified global disjointness.

`Products.lean` defines the componentwise strong product on genuinely arbitrary finite child vertex types and graphs. Its rectangle cardinality, independence and separated-union proofs connect the algebraic sums to actual finite sets.

`typed_output_iff` exposes the exact old/new branch and assigned mask. `augmented_sets` proves the actual coarse set identity: the old coarse substitution output, union the selected addition only at the target. `old_target_disjoint`, `extension_card`, `augmented_cardinalities`, and `exact_gain` prove the additive gain and exact sum of products without assuming a final cardinality.

Empty augmentation may conservatively relabel some masks even though the physical coarse sets are unchanged. The source explicitly proves that boundary rather than claiming equality of the full typed state.

### Recursion, DAGs and physical coordinates

`Recipe.evaluate` constructs realizations in actual summed strong powers using the BPZ product and isomorphism interfaces. `Recipe.weights` is a separately defined formal recurrence; `Recipe.exact_weights` proves equality with the constructed sets' weights.

`DAG` requires a finite node type and a **well-founded child relation**. It does not take a topological ordering as an input. Acyclicity is nevertheless an explicit mathematical requirement: this is not a claim about arbitrary finite directed graphs with cycles.

`DAG.unfold` performs well-founded unfolding into finite recipes while retaining each child occurrence. Summation is over coordinate indices, not distinct child nodes. `DAG.repeated_child_dimension` explicitly proves that a binary node using the same child twice has twice its dimension. This is consistent with independent coordinate copies and does not reuse physical coordinates.

One-step semantics permits arbitrary finite child graphs. The recursive dimension theorems concern heterogeneous strong powers of a **common finite graph**. The source and accompanying documentation respect that distinction.

### Counting types, pruning and terminal expansion

`alphabet_cardinality` proves the general formula

\[
|\widehat A|=\sum_{a\in A}2^{|A|-1-|N_s(a)|}.
\]

The separate example proves the BPZ value 58. This is a count of alphabet/counter positions, not a complexity, search-completeness, or positive-gain theorem.

`restrictSubst` and `restrictCode` promise admissibility only. Equality of actual sets and counts is obtained only under a hypothesis that each removed rectangle has an **actual child realization weight equal to zero**. This is not a condition on an unrelated guessed integer vector. The support-pruning construction proves that hypothesis for its own deletions.

Typed terminal expansion and terminal pruning are separate theorems; neither is silently inferred from substitution pruning.

## 4. Recorded builds, types and axioms

Both `evidence/clean_run/` and `evidence/second_fresh_run/` contain successful unchanged BPZ C11 positive-control builds followed by fresh build markers for all eleven R7 mathematical modules. The audit command was then separately elaborated and emitted its artifact.

A newly written receiving-side parser, importing no submitted checker modules, checked:

- 196 preparation/audit command records across the two fresh runs, with command headers, return codes, retained log hashes where recorded, and independently calculated hashes of all corresponding logs;
- all twelve source-file hashes against the actual files and source-binding index;
- all twelve retained authoritative compiled-artifact hashes;
- actual dependency revision outputs and empty worktree/index diff outputs for all nine dependencies, before and after the builds;
- the pinned BPZ and Mathlib identities and the recorded Lean 4.32.2 version;
- complete raw closed types for all 24 main interfaces, bound to the audit log and the audit-source requests;
- all 381 unique audited namespace declarations, including generated declarations: 346 general and 35 example declarations;
- transitive axiom dependency sets against the actual JSON lines emitted by the recorded environment audit;
- agreement of source hashes, raw statement types, and axiom sets between both fresh runs;
- membership of 185 explicitly named source declarations in the recorded audited environment. This count excludes generated declarations and is not a count of new theorems.

The audit command itself traverses the actual loaded namespace, rejects unsafe declarations and newly declared namespace axioms, and calls Lean's axiom-collection operation on each declaration. It does not merely print a hard-coded success list.

Every recorded R7 dependency set is contained in `propext`, `Classical.choice`, and `Quot.sound`. No native-evaluation dependency or `sorryAx` occurs in the audited R7 development, including the finite examples. Source inspection independently found no `sorry`, `admit`, new `axiom`, `unsafe`, `native_decide`, or implementation replacement in the eleven mathematical files after comments were excluded. General modules do not import `Examples.lean`.

This describes the R7 general development. It does **not** erase R5/R6's previously disclosed native-evaluation dependencies. The pinned compiler/kernel and reused binary dependency cache remain trusted; Lean and Mathlib were not rebuilt from source by the delivered runs or by this receiving review.

## 5. Negative compilation evidence

Both fresh runs reject two false Lean probes for their intended mathematical reasons.

1. The stale-mask probe asks for a separating coordinate between a typed word and itself, in the cross-row context forced by the defective compiler. Lean reports the proposition false. The positive theorem `stale_masks_refuted` rules out any admissible substitution with the entire defective rows.
2. The omitted-self-protection probe asks for an additive-gain equation that counts one point twice. The positive examples prove old size 1, addition size 1, and union size 1; the false equation is rejected.

The final negative logs contain neither a missing module/identifier/instance failure nor a resource-limit failure. The earlier missing-decidability diagnostic is preserved but is correctly not treated as a successful mathematical negative control.

These are inspected delivered compiler results, not new Lean executions here.

## 6. Actual local execution

The following were actually rerun here, normally and under Python `-O`, with identical outputs in both modes:

- The delivered `VERIFY_RELEASE.py`: 396 manifest entries and recorded Lean evidence pass.
- The frozen original R7 `VERIFY.py`: 640 ordinary cases, 11,027 augmented cases, 192 randomized cases, six defective variants, eleven full-type R6 templates, and exact R6 correspondence at 91 nodes including bases pass.
- The delivered physical-graph `SEMANTIC_REVIEW.py`: 350 compiled nodes in its bounded scopes, including 50 recursive repeated-child nodes, overlapping families, conservative masks, zero-arity cases and zero-weight pruning pass.

The frozen original verifier still prints its historical pre-formalization status. This is expected historical evidence, not a failure of the enclosing completed formalization.

### Separately written semantic tests

I wrote an additional standalone checker that imports none of the supplied compiler, generator or checker modules. It independently implements normalized descriptors, the full ordinary/augmented row definitions, actual Cartesian sets, conflict tests, and mask-invariant validation.

It passed 1,861 bounded node evaluations: 750 identity augmentations over all simple three-vertex graphs and all ordered independent-family pairs with the allowed declared cross-separation choices, 750 immediate second augmentations to test mask reuse, 180 deterministic randomized product augmentations, 180 ordinary product cases, and one empty-alphabet ordinary case. Conservative masks are sampled deterministically; this is not exhaustive over every possible profile. The randomized cases use 1–3 labels and arities 0–2, include empty child graphs and 15 repeated-child uses, and check exact gain and support pruning. There were 281 positive-gain nodes in the counted augmentation cases.

Both Python modes agree. These are additional finite regression checks, not a replacement for the universal proof and not a formal implementation-equivalence theorem between Python and Lean.

### Integrity mutations

On a disposable copy, six separate integrity mutations were rejected in both modes: missing manifest, unlisted file, changed mathematical source, changed compiled artifact, altered source with an updated internal manifest, and altered compiled artifact with an updated internal manifest. The resealed changes failed their independent source/build and artifact/build bindings. These tests do not claim protection against an attacker who rewrites every verifier and evidence file.

## 7. Nonblocking reproducibility observation

The two successful fresh runs record six byte-identical compiled artifacts and six differing artifacts. Five reported differences change size by eight bytes; the DAG artifact has the same size but a different digest. The package retains the twelve authoritative second-run artifacts, not both complete binary sets.

I verified the agreement of source, complete reported types and axiom dependency sets and the hashes of the retained artifacts. The cause of the differing binary representations remains unestablished. I cannot diagnose their exact byte differences without both binary sets and the relevant build environment.

This is **not a blocking mathematical defect** and is already accurately disclosed. Do not claim bit-for-bit reproducibility or attribute the mismatch to timestamps, metadata, ordering, or another cause without evidence. If investigation is useful later, preserve the first-run binaries and use a separate diagnostic branch; no source change or reseal of this accepted package is requested now.

## 8. Codex disposition and public claim boundary

**Required mathematical repairs: none identified. Required build-harness repairs for this acceptance: none identified.** Preserve the checked archive and its hash.

The supported methods statement is a Lean-checked uniform avoidance-profile compiler/preservation theorem within BPZ's arbitrary-alphabet substitution framework, with exact graph/set/count semantics, recursive closure, and justified pruning. It is not a replacement for BPZ's generic framework.

It adds no numerical C11 bound, does not certify optimality, does not promise positive gain for every valid input, and does not establish worldwide priority or significance. It formalizes the mathematical finite-set compiler defined in Lean, not all executions of the Python reference implementation. The R6 correspondence remains a finite regression rather than a separate general implementation-equivalence theorem.

The original R5/R6 numerical packages remain unchanged. The pending general-theorem formalization gate can now be closed on the delivered evidence, with the receiving-review limitation stated above.
