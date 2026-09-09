# A uniform avoidance-profile compiler for layered independent-set constructions

**Matthew Protti — AI co-developed — R7 methods release, v0.4.0**

For an arbitrary finite alphabet with symmetric irreflexive Boolean separation, any arity, an admissible coarse substitution, a separated extension code, and a target letter, R7 constructs the prescribed full admissible substitution on a normalized family/mask alphabet. Every old and guarded extension generator is retained with its exact assigned label and mask.

This statement is proved by **`ShannonBounds.ProfileCompiler.universal_compilation`** in [Core.lean](r7_checked_release/source/ShannonBounds/ProfileCompiler/Core.lean). The [original theorem and proof note](r7_checked_release/frozen/THEOREM_AND_PROOF.md) gives the mathematical argument; the [printed Lean types](r7_checked_release/STATEMENT_TYPES.txt) and [source index](r7_checked_release/SOURCE_BINDINGS.json) connect that argument to the checked development.

## The compiler

Let $A$ be finite and let $s$ be its symmetric irreflexive separation relation. A coarse substitution $T$ assigns a finite set of words $T_b\subseteq A^q$ to every label $b$. Distinct words within one row, and all words in coarsely separated rows, must have a separating coordinate. The extension code $E\subseteq A^q$ is also pairwise separated.

A normalized type records a label and a conservative possible-conflict mask:

$$\widehat A=\{(b,m):b\in m\subseteq A,\ m\cap N_s(b)=\varnothing\}.$$

The refined separation relation is exactly

$$(b,m)\widehat\perp(c,n)\iff (b=c\text{ and }m\ne n)\lor c\notin m\lor b\notin n.$$

For a typed input word $z=((b_i,m_i))_i$, propagate possible conflicts by

$$\Phi_T(z)=\{c:\exists u\in T_c,\ \forall i,\ u_i\in m_i\}.$$

Every old refinement whose label word lies in $T_b$ is assigned to label $b$, with mask $\Phi_T(z)$ unless $b$ is neither the target $a$ nor its separation neighbour. In that case the compiler inserts $a$ into the old mask. An extension refinement is selected precisely when its label word belongs to $E$ and its propagated mask avoids $\{a\}\cup N_s(a)$; its output is $(a,\Phi_T(z)\cup\{a\})$.

The insertion into old masks is essential. Enlarging the target can make an old point conflict with that target through equality or adjacency. Its old mask must therefore cease claiming that the enlarged target is certainly avoided. The Lean mixed-pair argument uses this insertion directly.

The compiler enumerates **all normalized input types**, including ones empty in a particular realization. Coarse admissibility and extension-code separation are inputs; compiled admissibility is a conclusion. No graph, chosen seed, nonempty support, or output-validity oracle is an input to the compiler theorem. Arity zero and empty extension codes are included.

## Preservation and exact counts

The formalization proves both directions between typed realizations and coarse partition/avoidance profiles. Pieces with different masks within one coarse family are disjoint; different coarse families may overlap.

For arbitrary finite child graphs, the resulting typed families are actual independent finite sets, with cardinalities equal to the corresponding sums of products. Grouping types recovers the ordinary coarse output plus precisely the filtered addition at the target. The old target and that addition are disjoint, so the gain is counted exactly. The prescribed mask updates are part of the set semantics.

Finite well-founded construction DAGs preserve these properties. Recursive dimension statements use heterogeneous strong powers of a common finite graph, transported through BPZ's summed-power isomorphism. Every occurrence of a child contributes a separate coordinate block, including repeated child indices. Acyclicity is required; a topological ordering need not be supplied.

The number of normalized types is

$$|\widehat A|=\sum_{b\in A}2^{|A|-1-|N_s(b)|},$$

which specializes to **58** for BPZ's seven-letter relation. This counts alphabet positions, not runtime or search complexity. Deleting words preserves admissibility; preserving their actual sets and counts additionally requires a proved zero-cardinality child in every deleted rectangle. Typed terminal expansion and pruning have separate proofs.

## Evidence and scope

The unchanged [checked R7 package](r7_checked_release/) records two fresh Lean 4.32.2 builds, 24 complete main statement types, and an audit of 381 declarations, including generated declarations. All audited R7 dependencies are among `propext`, `Classical.choice`, and `Quot.sound`; no native-evaluation axioms occur in R7, including its separate finite examples. Two explicit false compile probes are rejected for their mathematical reasons.

The pinned compiler/kernel and binary dependency cache remain trusted; Lean and Mathlib were not rebuilt from source. Six of twelve compiled artifacts differ between successful runs despite agreement on source hashes, complete main statement types, and axiom sets. Their cause is unestablished, and no bit-for-bit reproducibility is claimed. [BUILD_SUMMARY.md](r7_checked_release/BUILD_SUMMARY.md) records the details.

The supplied [AI receiving review](reviews/C11_R7_Lean_Receipt_Review_2026-09-08.md) found no blocking defect. It inspected sources and delivered build evidence and reports additional Python checks. **It did not rerun Lean and is not independent human expert review.**

R7 is a compiler/preservation theorem **within BPZ's arbitrary-alphabet framework**. It adds no numerical C11 bound, does not replace that framework or solve the general two-sided extension, and does not guarantee positive gain for every input. General equivalence of the Python reference implementation with the Lean compiler is not proved; exact R6 correspondence is a finite regression. External expert endorsement and worldwide novelty clearance are not claimed.

R5/R6 retain their original numerical claims and disclosed native-evaluation dependencies. Their strongest released lower bound remains $\Theta(C_{11})\ge5.295515544509239$.

## Attribution and release

The underlying framework is due to **Pjotr Buys, Sven Polak, and Jeroen Zuiddam**. The new work was **AI co-developed** under Matthew Protti's direction with **OpenAI's Astra 6 Pro** and **Codex GPT-6 Astra Extra-High**. See [AI_DISCLOSURE.md](AI_DISCLOSURE.md), [REFERENCES.md](REFERENCES.md), and [NOTICE](NOTICE).

The [v0.4.0 release](https://github.com/matthewprotti/c11-shannon-capacity-lower-bound/releases/tag/v0.4.0) preserves `C11_R7_Lean_Checked_2026-09-08.zip` unchanged, with SHA256 `cc230eeaef95f974110827d149e07d7763ce136c58dfa85f5cf7b0b4648ea5c4`. GitHub's actual publication timestamp records disclosure of this version; the filename date is not a timestamp or proof of worldwide priority.

## Subsequent methods follow-up

The [canonical cell retyping development](CANONICAL_RETYPING.md), released with v0.5.0, is a separate follow-up. It tightens masks against fixed generator cells, proves least sound masks relative to that information, and preserves coarse sets/counts idempotently. It keeps the R7 normalized alphabet and does not alter this frozen R7 theorem or its release package.
