# Canonical retyping of fixed generator cells

**Matthew Protti — AI co-developed — general methods follow-up to R7**

For arbitrary finite coarse labels, a finite coordinate set, and possibly
different input alphabets in each coordinate, let `U_a` be a finite row of
input words. Assume ordinary within-row and coarse cross-row separation.
For a word `u`, its canonical mask contains exactly the coarse labels whose
rows have a word with no separating coordinate from `u`.

Assign every coarse-labelled generator to its label and this unique mask.
The new [Lean core](shannon_checked_release/source/ShannonBounds/CellRetyping/Core.lean)
proves that the output types are normalized and the resulting typed table is
admissible, with every generator retained exactly once within its coarse label.
Refined admissibility is a conclusion, not an input assumption.

The [graph semantics](shannon_checked_release/source/ShannonBounds/CellRetyping/Semantics.lean)
prove exact independent-set construction, separation, sums of product
cardinalities, and preservation of coarse output sets. A missing label bit
excludes the entire coarse family. A canonical realization using singleton
input sets witnesses every present bit, proving that the mask is least in
inclusion among masks sound for all realizations of the fixed input relations
and generator cells.

For an existing admissible refined table, forgetting its masks and applying
this compiler only removes mask bits, preserves all coarse-labelled generators
and actual coarse sets/counts, and is idempotent. This is not merely a permutation
of type names: old rows can split or merge according to their generators' masks.
The normalized output alphabet remains the R7 alphabet.

[Guarded additions and pruning](shannon_checked_release/source/ShannonBounds/CellRetyping/Operations.lean)
have exact set and count conditions. Additions protect the target and its required
neighbours; all masks are recomputed afterward. Deletion alone preserves
admissibility, while preserving actual sets/counts additionally requires an
actual zero factor for every deleted rectangle.

The [BPZ bridge and recursion](shannon_checked_release/source/ShannonBounds/CellRetyping/Recursion.lean)
and [finite DAG proof](shannon_checked_release/source/ShannonBounds/CellRetyping/DAG.lean)
use the same refined alphabet at each node. Dimensions add over child occurrences,
including repeated references. Arbitrary finite dependent child graphs are
covered in one-step semantics; recursive dimensions use strong powers of a
common graph. [Examples](shannon_checked_release/source/ShannonBounds/CellRetyping/Examples.lean)
include an essential witnessed bit and an empty coordinate set.

The symbolic audit covers 261 declarations, with only `propext`, `Classical.choice`,
and `Quot.sound`; there are no new native-evaluation axioms. Numerical certificates
retain their separately disclosed native-check trust. Full statements, two-build
receipts, and limitations are in the [checked package](shannon_checked_release/README.md)
and [mathematical review](shannon_checked_release/MATHEMATICAL_REVIEW.md).

The claim is relative to fixed cells and input separation information. It does
not establish the tightest masks available from additional graph structure,
minimum type count, optimal search, universal positive numerical gain, or optimal
Shannon capacity. It does not formally verify the Python implementation.
The measured C11 R9/R10 gains come from terminal optimization, not an established
general benefit from retyping. The original [R7 compiler](R7_METHODS.md) and all
earlier sealed release packages remain unchanged.

The underlying product framework is due to Pjotr Buys, Sven Polak, and Jeroen
Zuiddam. This methods follow-up was AI co-developed with **OpenAI's Astra 6 Pro**
and **Codex GPT-6 Astra Extra-High**, under Matthew Protti's direction. Author-side
formalization is not independent human review or worldwide novelty clearance.
