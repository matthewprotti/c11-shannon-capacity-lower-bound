# Codex handoff — R5 finite constructions, formalization still pending

Preserve R3 and R4. This is a new branch. Do not weaken a statement or change a
literal construction to obtain a build. No permission to publish or push is
implied by this handoff.

## First gate: exact finite review

Run `python3 -B VERIFY.py --self-test --manifest` and its `-O` equivalent.
Run `python3 -B verification/CHECK_TERMINAL_REFINEMENT.py`.
Inspect PROOF.md, the literal cycle/strong-product convention, and all three
complete certificates. Confirm the full integers and historical comparison
constants, not merely printed decimals. Investigate any discrepancy before
starting formal integration.

## Frozen target

Three explicit independent sets, in Mathlib's `SimpleGraph.cycleGraph 11`
strong powers of dimensions **186, 198 and 213**, with exact cardinalities
specified in `certificates/C11_d186.json`, `C11_d198.json`, and
`C11_d213.json`. They respectively use 62, 66 and 71 occurrences of the
unchanged dimension-three base realization. Repeated DAG references consume
separate coordinate blocks.

The terminal arity is **four**, not the arity-three terminal of R3. The
terminal lists have 52, 51 and 51 words. All required literal tables are
in the certificates. Do not replace them with a similar named BPZ table.

## End-to-end Lean gate

Use BPZ commit `aa21eeb12b75b0413d3fa9fb4208b5d0bf2c4d65` and the same
Lean 4.32.2 / pinned Mathlib environment as R3. The previous accepted build
and environment details are inside the preserved lineage, not a new build
claim for R5.

Build the original C11 certificate as a positive control. Then formalize
all new literal substitution/terminal tables, each node realization and
its seven exact weights, the explicit terminal independent set and exact
cardinality, transport to the stated single strong power of the actual cycle
graph, and the capacity bound. The final statements must not assume existence,
independence, cardinality or realizability of the constructed set.

Explicitly prove each integer comparison against the full BPZ/R3/R4 targets,
including `N_d ^ 210 > R4_210_N ^ d`. Bind these to a comparison of the full
constructed roots. A proof about rounded decimals alone is insufficient.
Prove each exact decimal lower bound and bracket for the constructed root;
never turn the bracket's upper endpoint into an upper bound on capacity.

Use typed scope assertions that fix graph, dimension, exact cardinality and
absence of extra hypotheses. Test a false cardinality and an invalid terminal
word for the intended mathematical failure, not an incidental syntax/import
failure. Inspect actual axiom dependencies, including all generated native
Boolean-equality axioms in the pinned compiler. Disclose native/compiler and
cache trust; do not call the result kernel-only or axiom-free.

Check both unstaged and staged/index changes of every pinned dependency:
`git diff --exit-code` and `git diff --cached --exit-code`, and record revisions.
Keep source, logs, negative-control diagnostics and the measured axiom report.
No Lean source for R5 has been compiled or supplied as an already-built object
in this package. R3's successful build does not discharge this gate.

## Return boundary

Return either a completed new build with auditable evidence or the precise
failure and unchanged scope. Keep the accepted construction JSON files
byte-for-byte unchanged; put any independently proposed optimization in a
separate branch. Seek separate adversarial review before updating the public
research claim. Worldwide priority and significance remain separate questions.
