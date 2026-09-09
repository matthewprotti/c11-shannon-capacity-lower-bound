# Codex handoff: formalize the uniform compiler, not another fixed certificate

## Controlling status

R5 and R6 numerical constructions already have accepted pinned Lean returns.
Do not modify their mathematical source or frozen certificates. R7 is a
separate methods branch: a written universal theorem, finite regression tests,
and an exact specialization check. **No R7 Lean compilation has occurred.**
No publication, commit, push, pull-request merge, or VibeMathed change is
authorized by this local handoff.

## Pins and trusted scope

Use BPZ commit aa21eeb12b75b0413d3fa9fb4208b5d0bf2c4d65,
Lean 4.32.2, and the same pinned dependencies as the accepted R6 return.
Check both unstaged and staged changes before/after (`git diff --exit-code`
and `git diff --cached --exit-code`). Keep the accepted ancestor untouched.
The general symbolic proof should add no native-evaluation or problem-specific
axioms. Inherited BPZ dependencies must still be reported rather than hidden.
Finite examples may use native checks only in separately identified example
modules; they must not be load-bearing assumptions of the universal theorem.

## First tasks

Read THEOREM_AND_PROOF.md and adversarially examine the three pair cases in
Section 3. In particular, verify old-versus-new separation using the target
bit inserted into non-neighbour old masks. Verify the duplicate-generators
argument before translating the sum-of-products formula. Run VERIFY.py and
inspect the finite scopes rather than interpreting them as a universal proof.

The universal compiler is `general_compiler.py:compile_rule`. Its normal mode
uses every normalized input type. The `defect` parameter is only a negative-test
injection and must not enter the formal definition. The implementation is
reference code, not an oracle Lean may assume is correct.

## Required theorem interfaces

Choose names and implementation details as appropriate, but preserve these
quantifiers and conclusions:

1. For an arbitrary finite alphabet A and symmetric irreflexive Boolean
   separation s, define the normalized descriptor subtype `(a,m)` with
   a in m and m disjoint from s-neighbours(a). Define the refined relation
   exactly as Equation (1). Prove symmetry, irreflexivity, and coarse lifting.

2. Define the universal full ordinary compilation and the full compilation
   with one filtered augmentation, directly as finite sets of typed words.
   The definitions must enumerate all normalized types, not a chosen seed's
   nonempty support. The target and neighbour guard and conservative update
   must be explicit.

3. Prove an admissible coarse `Subst A s q`, an ordinary pairwise-separated
   `Code A s q`, and a target a produce a `Subst` on the normalized type
   alphabet. Admissibility of the compiled substitution is the conclusion.
   Do not assume it, a solver success, or a graph realization.

4. Prove equivalence between a typed realization and the coarse profile
   partition/avoidance invariant, or enough forward and reverse lemmas to
   recover both semantics. Different coarse families may overlap.

5. Prove exact semantics and cardinalities of full compilation: ordinary
   output plus the precisely filtered independent addition, with the stated
   mask updates. Cover old-old, old-new, and new-new disjointness within rows.
   Connect these to BPZ `Realisation`/product cardinality interfaces.

6. Prove finite-recursion preservation and dimension addition. Independent
   child graph/power dimensions may differ. Repeated DAG children still
   count as repeated coordinates. An explicit finite sequence induction may
   replace a DAG theorem initially if a proved DAG linearization is supplied.

7. Prove the alphabet cardinality formula and its 58-letter specialization.
   This is not a complexity or optimality theorem.

8. Prove support pruning preserves sets/counts when each deleted rectangle
   contains a child set of proved cardinality zero. Deletion alone only proves
   admissibility, not equal counts. Prove typed terminal expansion separately.

## A manageable proof order

First prove the purely symbolic nonseparation lemma: no refined-separating
coordinate implies mutual label membership, and equal labels imply equal
masks. Prove `underlying word in T_b -> b in the other word's Phi` under that
hypothesis. Then establish normalized output types and the three pair cases.
Only after the compiler theorem builds should you attach graph realizations,
counts, iteration, and pruning. The numerical C11 files are examples, not the
statement of the universal theorem.

## Actual R6 specialization regression

`test_r6_correspondence.py` reconstructs the typed base sets and checks every
R6 node against the output of the full compiler after zero-weight pruning.
The finite archive under inputs is preserved, including its historical
pre-Lean status files; those do not override the later accepted Lean return.
The correspondence test checks exact literal rows, not merely final numbers.
Keep this test as a regression. A formal specialization theorem should avoid
silently changing any published R6 table or numerical claim.

## Acceptance gate

Return an explicit arbitrary-A, arbitrary-q theorem with the stated finite
hypotheses, not a theorem about only the eleven R6 fixtures. Print the complete
types of the compiler theorem, the set/cardinality semantics theorem, and the
iteration/pruning theorems. Inspect axiom dependencies of each. No `sorryAx`,
new logical axiom, compiled-admissibility hypothesis, or numerical C11
assumption is allowed in the general core.

Keep a clean build transcript and a second fresh build when feasible. Retain
source identity, pins, compilation artifacts and their hashes, and the actual
negative-probe outputs. At least test a stale-mask variant and an omitted
self-protection variant: each should be refuted by an explicit small example,
not merely fail because of syntax, imports, or a missing executable.

If formalization exposes an error, report the precise narrowed claim or repair
in this new branch. Do not alter historical accepted source to conceal it.
The universal safety theorem need not establish priority, significance,
optimality, a positive gain for every input, or Tandon's broader extension.
