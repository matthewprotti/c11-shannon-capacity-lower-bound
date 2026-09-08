# C11 build result

**PASS — complete pinned Lean gate, including the fresh replay and both negative controls.**

The actual R2 candidate module compiled without any elaboration repair. Changes were confined to axiom-output compatibility, audit printing, regression tests for those formats, and pinned dependency-cache reuse/checking. The initial run's parser failure remains preserved in `evidence/initial_run`.

## Environment and fixed inputs

| Item | Verified value |
|---|---|
| Lean | 4.32.2, macOS ARM64 release |
| Lean source commit | `f3b06c705e6c85f5314019d5d3baab0fec5b580c` |
| BPZ source commit | `aa21eeb12b75b0413d3fa9fb4208b5d0bf2c4d65` |
| Mathlib commit | `905b95818eb32af7874a58b427f50c1711a5e96c` |
| Official toolchain archive SHA-256 | `ea99ead969901b9fe4c7e7bf350b812a0249e9a5cea20474a737c0cc64746bc0` |
| R2 archive SHA-256 | `50aa49d829dd21ce86a67fd32d2b3dbf16376106d860ae621dc5116c3c0a431a` |
| Unchanged R1 ancestor SHA-256 | `68604c46a4e58685811473251a3bbdcb209ec700454d50fd584b510e2afbd51d` |

All nine dependency Git revisions matched the pinned Lake manifest both before and after the clean build. Tracked upstream and dependency sources remained unchanged. The original official toolchain download was checksum-verified before execution; its native-evaluation source files also matched the Git blob identities in the supplied lock.

Mathlib's binary cache was used. The final replay used a fresh BPZ checkout and an APFS copy-on-write clone of the same verified dependency cache. BPZ's local build products, including the original C11 certificate and new candidate, were rebuilt. Lean and all of Mathlib were not rebuilt from source.

## What Lean accepted

The compiled scope aliases require:

1. A finite set `S : Finset (Fin 207 → Fin 11)` independent in the 207th strong power of Mathlib's `cycleGraph 11`, with cardinality equal to the full literal N1 in the frozen candidate.
2. The lower bound `(5.295492477500681 : ℝ) ≤ shannonCapacity (cycleGraph 11)`.
3. A strict comparison between the 207th roots of the two full literal integers N0 and N1.

The constructed set is `ShannonBounds.C11AuxiliaryTrade.code207`. Its cardinality is connected to the actual terminal construction through `card_multiCodeSet` and the graph isomorphisms. The capacity bound is derived from that same independent set. The result is not an isolated arithmetic check or a theorem conditional on an assumed cardinality.

The separate integer upper-endpoint statement concerns the root of the constructed set only. It is not an upper bound on Shannon capacity.

## Axiom inspection

Thirteen declarations were audited, including all three literal scope aliases. Across them there are 193 distinct compiler-generated native-evaluation axioms, together with the standard `propext`, `Classical.choice`, and `Quot.sound` where used.

| Scope alias | Native dependencies |
|---|---:|
| Exact finite set | 184 |
| Decimal capacity bound | 185 |
| Strict root comparison | 1 |

Every permitted native declaration was found in the actual Lean environment, checked to be a non-unsafe axiom, and checked to have the outer type `Eq Bool e true`, where e contains no free variables, metavariables or loose bound variables. Each actual type is printed in the retained log. No `sorryAx` or unapproved axiom was accepted.

This is the pinned compiler's disclosed native-evaluation mechanism. The compiler/runtime evaluates the closed Boolean and then adds the corresponding equality axiom; the kernel does not independently reduce all those finite computations. The result should be described as **Lean-checked with disclosed native-evaluation trust**, not axiom-free or kernel-only arithmetic replay.

## Deliberate compile failures

* **Wrong cardinality:** Lean rejected use of `card_code207` to prove cardinality `N1 + 1`. The log reports an exact type mismatch between the proved equality to N1 and the requested equality to N1+1.
* **Modified substitution table:** after reinserting the forbidden `ADA` block into the N-family, Lean reported that the separation proposition evaluated to false. The failure was not a syntax, import or typeclass error.

The positive baseline, candidate build, literal scope aliases, axiom audit and these two semantic failures all completed in the fresh run.

## Scope limits

This release establishes completion of the requested formalization gate for the frozen construction and frozen BPZ baseline. It does not establish optimality, worldwide priority, a new general two-sided composition theorem, a VibeMathed score or an external expert endorsement. No remote publication or submission was performed.
