# R6 build summary

**PASS_C11_R6_PINNED_LEAN_GATE.** All three finite constructions passed a development build and a separate complete fresh replay, including the original BPZ positive control and the false compile probes.

| Item | Value |
|---|---|
| Received R6 ZIP SHA256 | `24b64ccbd1f38cd1ad7921993575d6ebff0638c5d3c694f8e78c8fca3b2be045` |
| Lean | 4.32.2, macOS ARM64 |
| BPZ commit | `aa21eeb12b75b0413d3fa9fb4208b5d0bf2c4d65` |
| Mathlib commit | `905b95818eb32af7874a58b427f50c1711a5e96c` |
| Alphabet | Exact supplied 58 normalized family/mask descriptors |
| Distinct typed tables | 49, including three terminal codes |
| Nodes across the three certificates | 91 |
| Literal scope aliases | 24 |
| Audited declarations | 232 |
| Distinct native-evaluation axioms inspected | 234 |

## Base and table validity

The Lean base realization is built from actual vertices in BPZ's explicit C11 cube. Its coarse family lists are proved equal to the corresponding BPZ families. Each typed base list is proved equal to filtering its coarse list by the exact neighborhood mask. The descriptor enumeration is proved normalized, injective, and complete. All required typed separations, family independence, and 58 base cardinalities are checked.

The typed relation is exactly the supplied relation: distinct masks in the same coarse family, or either missing cross-family bit, certify separation. It is not replaced by a stronger assumed relation. Literal lists are checked by finite Boolean folds, with ordinary Lean proofs connecting those checks to the `Subst` and `Code` structure fields. This avoids enumerating the enormous ambient set of all possible 58-letter words; it does not omit any required pair of supplied table entries.

Every node has its exact 58 weight values proved from its actual child realizations. The terminal word counts are 1289, 1365, and 1370 for dimensions 186, 198, and 213. The final sets are connected to these same tables through `multiCodeSet`, its exact cardinality theorem, and graph-isomorphism transports into the intended C11 strong powers.

## Headline claims

The capacity lower bounds are 5.295498536418623, 5.295510441529957, and 5.295515544509239. Each exact cardinality equals its frozen R6 integer. No independent-set existence, realizability, or cardinality hypothesis remains in the headline theorem.

The 24 explicitly typed aliases fix three exact finite-set claims, three capacity inequalities, three constructed-root brackets, and fifteen strict comparisons: the matching R5 root plus BPZ, R3, R4-201, and R4-210 for each dimension. Comparisons use the full integers. A proved general real-number bridge turns integer-power inequalities into full-root comparisons even when dimensions differ.

## Audits and negative controls

The actual dependency output was parsed for all 232 requested declarations. The native dependency union contains 234 declarations. Each actual declaration is non-unsafe and has outer type `Eq Bool e true`; e has no free variables, metavariables, or loose bound variables. All actual types are retained in the log. The allowed standard axioms are `propext`, `Classical.choice`, and `Quot.sound` where used.

| Case | Native dependencies of exact-set alias | Native dependencies of capacity alias |
|---|---:|---:|
| 186 | 74 | 76 |
| 198 | 89 | 91 |
| 213 | 96 | 98 |

The count is a union over audited declarations, not a measure of proof strength. The list-fold and whole-vector checks group finite computations differently from R5.

For each dimension, Lean rejects a claim that the actual set has cardinality `N + 1`, with the intended type mismatch. It also rejects construction of a `Code` from a mutated typed terminal list because its required separation check evaluates to false. The inserted words, using the frozen 58-letter indices, are `[2,23,11,46]`, `[2,11,46,1]`, and `[2,11,54,2]`; each conflicts with an existing listed word. These are failures of the symbolic typed-table validity requirement, not claims that an explicitly enumerated enormous physical set was tested.

The received Python verifier was rerun in normal and optimized modes, including all three numerical routes, 20 profile negative controls, 8 typed controls, and the 43-file manifest. The outputs agree. All parent R5 certificate files were also matched byte for byte against the previously checked R5 release.

## Implementation history and boundary

Two initial helper elaboration errors were repaired: the Boolean-disjunction proof was expressed through simplification, and the terminal `Code` proof field was corrected to `hsep`. No literal construction data was changed. The typed base and complete construction modules then compiled, and the final authoritative run rebuilt the baseline and R6 sequentially from a fresh checkout. Initial diagnostic logs are preserved separately.

All nine dependency revisions and both worktree and staged/index diffs were checked before and after. The pinned binary dependency cache was reused; BPZ and R6 proof modules were rebuilt. Lean and Mathlib were not rebuilt from source. Native execution trusts the pinned compiler/runtime and its decision procedures; this is not kernel-only arithmetic replay.

This formalization follows the ordinary 58-letter certificate route. The arbitrary-graph avoidance-profile propagation, augmentation, conservative-update calculus, and information-loss examples remain written mathematical arguments in the original package, not new general Lean theorems. Independent statement anchoring, external expert review, global priority clearance, and optimality are not claimed.

Controlling evidence: `BUILD_RESULT.json`, `evidence/clean_run/PREPARATION.json`, and `evidence/clean_run/logs/`. The top-level integrity verifier checks the recorded evidence without invoking Lean.
