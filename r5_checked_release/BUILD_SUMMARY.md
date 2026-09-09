# Build summary

**All required formalization gates passed.** The new Lean mathematical source compiled on its first attempt. A separate complete replay from a fresh BPZ checkout then confirmed the same conclusions through the packaged reproduction procedure.

| Fixed input | Value |
|---|---|
| Original R5 ZIP SHA256 | `a57b1ba556ff2d74cfa5654a6b5677299dfac5308995bb2ea2cc7aa5c329d8a3` |
| BPZ commit | `aa21eeb12b75b0413d3fa9fb4208b5d0bf2c4d65` |
| Mathlib commit | `905b95818eb32af7874a58b427f50c1711a5e96c` |
| Lean | 4.32.2, macOS ARM64 |
| Lean source commit | `f3b06c705e6c85f5314019d5d3baab0fec5b580c` |
| Dimensions | 186, 198, 213 |
| Base-leaf occurrences | 62, 66, 71 |
| Unique DAG nodes across the three certificates | 91 |
| Distinct literal tables, including terminals | 32 |

## Formal construction

Each of the 29 substitution tables is certified as a `Subst` for the fixed seven-letter separation system; all three four-argument terminal tables are certified as `Code` objects. Every nonterminal node is realized using the exact ordered children from the frozen JSON. All seven node weights are proved from the corresponding product-set cardinality formula. Repeated references consume separate coordinate blocks.

The terminal construction produces an actual `Finset`, whose exact cardinality is proved using disjointness and BPZ's `card_multiCodeSet`. Graph isomorphisms then transport this same set into `SimpleGraph.strongPower (SimpleGraph.cycleGraph 11) d`. Independence and the exact literal cardinality give the lower bound on the independence number and hence the Shannon-capacity bound. No existence, independence, cardinality, or realizability assumption remains in the headline theorems.

Each of the twelve historical comparisons is a proved integer inequality between full cardinality powers. A common Lean theorem converts that inequality directly to a strict comparison between full real roots of different dimensions. The comparison does not rely on rounded decimals. Separate theorems prove each decimal lower endpoint and the strict upper endpoint for its constructed root.

## Scope and dependency audit

Twenty-one explicitly typed aliases fix the intended graph, dimension, complete integer cardinality, capacity lower bound, root bracket, and four historical-root comparisons for each case. Their source contains the full integers rather than an unspecified placeholder or a hypothesis naming an unknown size.

The actual `#print axioms` output was parsed for 191 declarations, including all node-weight theorems, literal table validity objects, physical set/cardinality theorems, comparison theorems, and scope aliases. No `sorryAx` or unapproved axiom was accepted.

Across that audit, 699 distinct compiler-generated native-evaluation axioms occur. Every one was found in the compiled environment, checked not to be unsafe, and checked to have type `Eq Bool e true` with no free variables, metavariables, or loose bound variables in e. Every actual type is printed in the retained log.

| Case | Native dependencies of exact-set alias | Native dependencies of capacity alias |
|---|---:|---:|
| 186 | 236 | 238 |
| 198 | 265 | 267 |
| 213 | 276 | 278 |

The other allowed dependencies are the standard Lean axioms `propext`, `Classical.choice`, and `Quot.sound`, where used. The count 699 is the union over the entire declared audit, not the number used by each final theorem.

## Negative compile controls

For each dimension, Lean rejected a proof that the actual constructed set has cardinality `N + 1`, with an exact type mismatch against the proved cardinality N.

It also rejected the claimed validity of each mutated terminal code because the proposition evaluated to false:

| Case | Inserted invalid word | An existing word it conflicts with |
|---|---|---|
| 186 | BBBD | ADAH |
| 198 | BBDB | AAHB |
| 213 | BBAB | AAVB |

These are mathematical rejections, not syntax, import, or typeclass failures. Their source files and compiler diagnostics are included.

## Reproducibility and limits

The complete fresh replay rebuilt the unchanged original C11 certificate as a positive control and rebuilt all BPZ/R5 proof modules required by the result. Only the pinned dependency binary cache was reused. All nine dependency revisions matched before and after; both worktree and staged/index diffs were empty. The upstream tracked files and dependency lock remained unchanged. The replay ran the received R5 finite verifier in normal and optimized Python modes, including its 24 negative controls and 660-file manifest, with identical outputs.

All 661 received R5 files, including the original manifest, are preserved byte for byte inside `frozen/` and checked against the original archive. Additional source-binding checks compare all literal Lean tables with those frozen JSON tables and check ordered children, exponents, node weights, full integers, and headline decimal strings.

The only failed command during setup of the final replay attempted to put its work directory inside the source package. The driver correctly refused it; the subsequent run used a new sibling directory. No Lean mathematical proof was weakened or repaired in response to a compiler failure.

Native execution trusts the pinned Lean compiler/runtime and its compiled decision procedures. The Mathlib cache is a disclosed dependency; this package does not claim a source rebuild of the compiler or Mathlib, kernel-only arithmetic replay, independent expert endorsement, independently audited statement correspondence, or global novelty clearance. The proof does not establish optimality or minimum dimension.

The controlling evidence is `BUILD_RESULT.json`, `evidence/clean_run/PREPARATION.json`, and the logs under `evidence/clean_run/logs/`. The first development run is retained separately. The top-level integrity verifier rechecks this recorded evidence but does not compile Lean.
