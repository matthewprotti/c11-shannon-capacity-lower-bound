# R6 review and formalization handoff

Do not change the accepted or review-pending earlier constructions. R6 is a
new branch: the three exact cardinalities and refined constructions have not
yet undergone a Lean compilation or new external adversarial review.

## First review the actual new obligation

Read PROOF.md §§1–4. Check that missing mask bits guarantee absence of every
confusable point, including equality; that type partitions count each point
once within its family; and that absence statements are conservatively
updated after a target family is enlarged. Present bits are not required to
be exact adjacency witnesses after augmentation. Treating them as exact would
be a scope error.

Inspect the n20/BBA local witness and the 58-letter ordinary compilation.
The typed compilation is a deliberately independent proof route: its finite
admissibility, literal base realization and cardinality must be checked, not
assumed from a successful profile search. The third replay does this already.
Review the elementary information-loss example with the proper restricted
quantifier: it concerns the fixed coarse alphabet, not arbitrary BPZ alphabets.

## Exact targets

For d=186,198,213, obtain N_d verbatim from certificates/C11_AP_d{d}.json.
Prove an explicit independent set S_d in (SimpleGraph.cycleGraph 11)^strong d
has cardinality exactly N_d. Derive the capacity lower bound and its exact
15-decimal truncation, and prove strict comparison against the full matching
R5 cardinality. No hypothesis asserting independence, cardinality, or the
claimed capacity may be left in the final theorem.

## Two formalization routes

The short route is to use the compiled ordinary 58-letter certificates.
Define a finite alphabet whose exact enumeration is `letters` in each typed
certificate. Fix relation (8) from PROOF.md; do not replace it by a stronger
assumed relation. Construct its base realization from the literal C11^3
families and exact neighborhood types. Prove the 58 weights and all required
separations from actual vertex data.

Generate ordinary `Subst`/terminal `Code` instances using the finite tables in
compiled/. Every admissibility proposition must be proved. Use BPZ's generic
`Realisation.multiSubst`, `multiCodeSet`, exact weight/cardinality theorems,
and graph-isomorphism transports. The parent DAG and child exponent sums
control the dimensions, not the number of unique memoized nodes. Empty typed
rows are legitimate. Every numeric comparison uses full integers.

This route reuses the existing general framework rather than asking Lean to
accept a new axiomatized profile operation. It validates the finite results
without needing a formal general closure theorem as a prerequisite.

The longer methods route formalizes PROOF.md's general type-partition,
product propagation, filtered augmentation, and conservative update. It
should yield an arbitrary-finite-graph theorem with the stated invariant and
state bound. This is valuable for generality but must not delay or obscure
the finite construction claim.

## Environment and trust

Use the same BPZ commit and pinned Lean 4.32.2/mathlib configuration used for
R3 unless an explicitly reviewed derived branch is necessary. A successful
integer-only fragment is not an end-to-end build. Preserve all actual logs,
source identities and dependency identities. Check working-tree AND staged
changes with `git diff --exit-code` and `git diff --cached --exit-code`.

Inspect actual theorem types and axiom dependencies. Disclose native-evaluation
axioms and compiler/runtime trust; do not call the result kernel-only if it
uses native evaluation. Run a false-cardinality probe and a non-separated
refined-table probe, confirming that failures are mathematical, not merely
syntax/import failures. Do not publish, change a remote repository, or update
the public R3 submission as part of a local build task.
