# R7 build summary

**PASS_R7_UNIFORM_COMPILER_PINNED_LEAN_GATE.** The complete local development and two separate fresh replays passed.

| Check | Result |
|---|---:|
| Lean source files, including audit command | 12 |
| R7 mathematical modules explicitly rebuilt per fresh run | 11 |
| Compiled artifacts per fresh run, including audit | 12 |
| Audited namespace declarations | 381 |
| General / separate-example declarations | 346 / 35 |
| Complete statement types retained | 24 |
| Native-evaluation axioms | 0 |
| New logical axioms / unsafe declarations / sorry dependencies | 0 |
| Deliberately false compile probes per fresh run | 2 |
| Completed fresh replays | 2 |
| Byte-identical compiled artifacts across fresh runs | 6 / 12 |

The theorem interfaces cover the universal compiler, generator completeness, profile equivalence, arbitrary-child-graph set/cardinality semantics, exact filtered gain, BPZ summed-power transport, finite DAG recursion, alphabet cardinality, zero-weight pruning, and typed terminal expansion. [SOURCE_BINDINGS.json](SOURCE_BINDINGS.json) maps these to source modules and names.

The universal compiler is graph-independent and support-independent. Symmetry, irreflexivity, coarse admissibility, and extension-code separation are explicit input conditions in its full contract. Compiled admissibility is the conclusion. Exact semantics uses actual child realizations, with no assumption that the desired final set or cardinality already exists.

The general DAG theorem takes a finite node type and a well-founded child relation. It unfolds that DAG directly, without assuming a topological ordering or treating the DAG as a fixed C11 fixture. Every occurrence of a child contributes a coordinate block, including repeated indices. Arbitrary finite child graphs are supported by the one-step semantics; recursive dimension statements concern heterogeneous strong powers of a common finite graph.

## Trust audit

The actual compiled environment was inspected for every declaration in the R7 namespace, including generated declarations. All 381 are safe and have axiom dependencies contained in `propext`, `Classical.choice`, and `Quot.sound`. The general theorem modules do not import the examples. No native-evaluation axiom was used even in the finite examples. The audit prints the three standard axiom types and retains complete closed expression types for 24 main interfaces.

The source identities, raw statement types, and axiom dependency sets agree between both fresh runs. Artifact differences, if any, are listed in [BUILD_COMPARISON.json](BUILD_COMPARISON.json); the packaged compiled files are those of the second fresh run and each is bound to its recorded hash. Compiled files are evidence, not a portable replacement for the pinned runtime.

## Negative controls

The stale-mask example assigns the same typed input word to two separated output rows. The positive Lean theorem `Examples.stale_masks_refuted` proves that no admissible `Subst` has those entire defective rows. The failing compiler probe asks for the specific separating-coordinate obligation forced by that pair; kernel `decide` reports it false.

The omitted-target-protection example uses two nonadjacent vertices. The old target and the supposed addition both contain the same point: each has size one and their union has size one. The positive Lean theorem `Examples.omitted_self_gain_refuted` rejects the proposed additive-gain equation; the failing probe asks Lean to prove that false equation and is rejected by `decide`.

The initial attempt to check the whole stale-row cross-condition directly with `decide` lacked a decidability instance. That was not counted as a successful negative control. Its log is preserved among the initial checks; the final probe uses the explicit violated obligation above. Both final fresh runs reject both probes for mathematical reasons, with no missing module, identifier, instance, or resource-limit failure.

## Regression replay

Each fresh gate reruns the original R7 verifier normally and under Python optimization, with matching outputs: 640 ordinary cases, 11,027 augmented cases, 192 random cases, six defective variants, eleven full-type R6 augmented templates, and exact correspondence at all 91 R6 nodes including bases. The original 18-entry manifest remains valid.

The separate physical-graph checker also agrees in normal and optimized modes: 350 compiled nodes, including 50 repeated-child recursive nodes; overlapping coarse families, conservative masks, exact counts, empty rectangles, positive gain, zero arity, and the empty-alphabet ordinary case are covered in their explicitly bounded scopes. These checks supplement the symbolic Lean proofs.

## Reproducibility boundary

Both fresh runs fetch the same BPZ commit and verify all nine dependency revisions plus both unstaged and staged/index differences. They rebuild the BPZ numerical positive control and all R7 modules. A pinned dependency binary cache is reused, and Lean/Mathlib are not source-rebuilt. The controlling receipts are `evidence/clean_run/` and `evidence/second_fresh_run/`; [BUILD_RESULT.json](BUILD_RESULT.json) is the byte-identical second-run report.

The original R7 package and its R6 ancestor are preserved exactly. Earlier diagnostic logs record ordinary implementation repairs; no accepted historical R5/R6 mathematical source or certificate was changed. No R7 publication or VibeMathed edit was performed.
