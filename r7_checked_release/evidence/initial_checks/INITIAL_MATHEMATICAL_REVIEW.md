# R7 initial mathematical review

Reviewed on 9 September 2026 UTC (8 September in Edmonton).

**Assessment:** No blocking error found in this initial review of the written universal compiler proof. The finite regressions and an additional physical-graph semantics check pass. **R7 has not been compiled in Lean, and these checks do not prove the universal theorem.** This is an author-side automated review, not independent expert endorsement or a novelty assessment.

The received ZIP has SHA256 `f6c16059de6509b5040becfaa565b19535298705935d23eae31924bc39728ac7`. Its 18-entry manifest covers all files other than the manifest itself. The separate handoff matches the copy inside the archive. The embedded earlier R6 archive has the expected SHA256 `24b64ccbd1f38cd1ad7921993575d6ebff0638c5d3c694f8e78c8fca3b2be045`.

## Mathematical assessment

R7's new claim is uniform admissibility of a refinement compiler for an arbitrary finite separation alphabet and arbitrary arity. The compiled substitution's admissibility is a conclusion obtained from coarse admissibility and extension-code separation. The definition includes every normalized input type, including types that happen to be empty in a particular realization. This addresses the general-method obligation left outside R6's finite formalization. It adds no numerical capacity bound.

The core contraposition argument is coherent:

1. If two typed input words have no refined-separating coordinate, each coordinate's label lies in the other coordinate's mask. Equal labels also force equal masks. Consequently an old word from row b forces b into the other word's propagated mask.
2. For two old words, different output labels have both cross labels present, so their output types cannot be separated. Equal output labels force equality of the coarse words by coarse admissibility, then equality of the typed words by the coordinate lemma.
3. For an old word and an extension word, the protected-label filter forces the old output label to be distinct from the target and not its neighbour. Symmetry of the coarse relation is used here. The conservative old-mask update therefore inserts the target label. Both cross labels are present, excluding refined separation. In particular a collision in the target row would contradict target protection.
4. For two extension words, different coarse words are separated by the input code; equal coarse words and nonseparation force identical typed words and output masks.

Normalization also follows from the stated assumptions: an old output label belongs to its propagated mask because every input type contains its own label. A separated coarse output label cannot belong to that mask by the coarse substitution's cross-row condition. The conservative insertion and extension guard preserve normalization.

The exact-count argument needs both levels of disjointness: distinct typed words within an output row give disjoint rectangles, and different masks within the same coarse family give disjoint typed pieces. Different coarse families may overlap. The extension guard makes the addition disjoint from the old target because confusability includes equality. This supports the stated sum-of-products and exact filtered-gain formulas; present mask bits need not be actual conflict witnesses.

Arity zero is consistent with the argument and the usual empty-product convention. The empty alphabet has an ordinary compilation; the augmented statement is vacuous when there is no target. An augmentation with empty extension code may still widen masks while preserving coarse sets and counts, as the note correctly states.

The alphabet-size formula follows from choosing arbitrary extra mask elements outside the self-label and its separation neighbours. The BPZ specialization is 58 types. This counts types, not runtime or search complexity.

## Replayed evidence

Both `python3 -B VERIFY.py` and `python3 -O -B VERIFY.py` pass with identical output and leave the received files unchanged:

- 640 admissible ordinary-rule cases and 11,027 augmented-rule cases over the precisely listed small alphabet/arity scopes.
- 192 seeded randomized cases.
- Six deliberate defects rejected: stale masks, omitted target protection, omitted neighbour protection, omitted new self bit, a nonseparated extension code, and an inadmissible coarse input.
- Eleven full 58-type R6 augmented templates checked without support pruning.
- Exact literal specialization at all 91 R6 nodes, including the three bases, reproducing dimensions 186, 198, and 213 and their existing integers.

The omitted-target-protection fixture is rejected for an old/new duplicate cell. That specifically exposes the disjointness and exact-gain requirement; it should not be described merely as a compiler syntax failure or, without a further example, as failure of a deduplicated finite-set table's admissibility.

## Additional physical-graph check

`semantic_review.py` imports only `compile_rule` from the supplied implementation. Its physical graph, realization, avoidance, cardinality, and pruning checks are separate code. It tests 300 seeded nodes with initial (alphabet size, arity) scopes (1,0), (2,1), and (3,2), plus 50 further arity-two nodes using the same preceding realization in both coordinate positions. The initial graphs are the two loopless simple graphs on two vertices; the checker explicitly includes equality in confusability.

All 350 compilations pass the physical independence, typed separation, coarse partition, avoidance, exact rectangle-count, coarse-output, and exact-gain checks. The run includes 128 input states with overlapping coarse families, 83 with masks strictly wider than the actual conflict information, 37 positive-gain cases, 100 arity-zero cases, and 3,304 omitted empty rectangles whose removal preserves the sets. Ordinary compilation on the empty alphabet also passes for arities zero, one, and two. Normal and optimized Python outputs are identical.

These are bounded regression scopes, not exhaustive graph semantics or a universal proof. Reports and source hashes are in `evidence/REVIEW_RECEIPT.json`.

## Lean work still required

The next formal target is a symbolic arbitrary-alphabet, arbitrary-arity compiler theorem. Its dependency audit must demonstrate that compiled admissibility is derived rather than assumed and that finite example checks are not dependencies of the general theorem. Further interfaces must cover profile/realization equivalence, exact set and cardinality semantics, heterogeneous child graphs and dimension addition, finite DAG recursion with repeated children, alphabet cardinality, zero-weight pruning, and typed terminal expansion.

The current written iteration and pruning arguments look compatible with those goals, but this review is not a substitute for their explicit Lean statements and proofs. A formalization should preserve the distinction between deletion preserving admissibility and proved emptiness preserving the actual sets and counts.

The existing R5/R6 sealed packages and public numerical claims were not modified by this review. No R7 GitHub publication or VibeMathed update was made.
