# Layered independent-set constructions

**Matthew Protti — AI co-developed**

**v0.4.0: A uniform avoidance-profile compiler for layered independent-set constructions.** R7 proves a compiler and preservation theorem for arbitrary finite separation alphabets and arbitrary arities, within the BPZ framework. The prescribed full typed rows are admissible, and every old and guarded extension generator is retained with its assigned mask. It adds no numerical C11 bound.

Read the [R7 methods landing page](R7_METHODS.md), [informal theorem and proof](r7_checked_release/frozen/THEOREM_AND_PROOF.md), and [controlling Lean source](r7_checked_release/source/ShannonBounds/ProfileCompiler/Core.lean), declaration `ShannonBounds.ProfileCompiler.universal_compilation`.

R7 also proves exact graph/set/count semantics, profile equivalence, filtered gain, finite well-founded DAG preservation, heterogeneous dimension addition with repeated children, the alphabet-cardinality formula and 58-letter specialization, justified zero-weight pruning, and terminal expansion. One-step semantics covers arbitrary finite child graphs; recursive dimension statements concern strong powers of a common finite graph. No universal positive gain, optimality, worldwide novelty clearance, or solution of the general two-sided extension is claimed.

## Numerical C11 constructions

The strongest released numerical result remains R6:

$$\Theta(C_{11})\ge N_{213}^{1/213}\ge5.295515544509239.$$

| Dimension | R5, v0.2.0 | R6, v0.3.0 |
|---:|---:|---:|
| 186 | 5.295498140339058 | 5.295498536418623 |
| 198 | 5.295509919114478 | 5.295510441529957 |
| 213 | 5.295514953483263 | **5.295515544509239** |

The full integers and theorem names are in the [R6 index](r6_checked_release/CERTIFICATE_INDEX.json) and [R5 index](r5_checked_release/CERTIFICATE_INDEX.json). Each R6 constructed root strictly exceeds its matching full R5 root and the four older frozen BPZ, R3, R4-201, and R4-210 roots. Comparisons use exact integer powers. The dimension-186 R6 root is not claimed to exceed the strongest dimension-213 R5 root.

R3 gives 5.295492477500681 in dimension 207. The BPZ comparison baseline is [commit aa21eeb12b75b0413d3fa9fb4208b5d0bf2c4d65](https://github.com/spectra-research/shannon-capacity-lean/blob/aa21eeb12b75b0413d3fa9fb4208b5d0bf2c4d65/ShannonBounds/CertC11.lean).

R5 changes the recursive assembly and finite substitution/terminal tables while retaining the seeds and seven-family system. R6 uses avoidance information to obtain stronger concrete constructions via ordinary 58-letter certificates. R7 supplies the subsequent general mathematical compiler theorem. The R5/R6 packages and their numerical claims are unchanged; the exact Shannon capacity and optimality are not established here.

## Verification and review

The [R7 build summary](r7_checked_release/BUILD_SUMMARY.md) records two fresh Lean 4.32.2 builds, 24 complete main statement types, 381 audited declarations including generated declarations, and two mathematical negative compile controls per run. R7's audited dependencies are only `propext`, `Classical.choice`, and `Quot.sound`; no native-evaluation axioms occur in R7. Six of twelve compiled artifacts differ between runs, with matching source hashes, complete main statement types, and axiom dependency sets. The cause is unestablished; byte-for-byte reproducibility is not claimed.

The [R5](r5_checked_release/BUILD_SUMMARY.md) and [R6](r6_checked_release/BUILD_SUMMARY.md) builds retain their disclosed native-evaluation dependencies. Their audits cover 699 and 234 distinct native axioms respectively; those are audit-wide unions. R7 does not remove those earlier trust dependencies.

All releases trust the pinned compiler/kernel and binary dependency cache; Lean and Mathlib were not rebuilt from source. The supplied AI receiving reviews of [R7](reviews/C11_R7_Lean_Receipt_Review_2026-09-08.md) and [R6](reviews/C11_R6_Lean_Receipt_Review_2026-09-08.md) report additional source and finite checks. Neither receiving runtime reran Lean. These are not independent human expert endorsements. [Review provenance](reviews/README.md) distinguishes the supplied reports from the included compiler evidence.

## Reproduce

Verify the preserved files and recorded evidence from the repository root:

```sh
python3 -B r7_checked_release/VERIFY_RELEASE.py
python3 -B r6_checked_release/VERIFY_RELEASE.py
python3 -B r5_checked_release/VERIFY_RELEASE.py
python3 -B checked_release/VERIFY_RELEASE.py
```

These integrity verifiers do not run Lean. With pinned Lean 4.32.2/Lake available, a fresh R7 compilation uses:

```sh
python3 -B r7_checked_release/RUN_R7_GATE.py --work-dir /absolute/path/new-r7-run
```

The work directory must not exist and must be outside the source package. See the [R7 package README](r7_checked_release/README.md) for explicit-toolchain and optional macOS/APFS dependency-cache reuse. The R5/R6 packages retain their own replay gates.

## Release history and preserved evidence

- [v0.4.0](https://github.com/matthewprotti/c11-shannon-capacity-lower-bound/releases/tag/v0.4.0): R7 general compiler and preservation theorem. Original checked ZIP SHA256: `cc230eeaef95f974110827d149e07d7763ce136c58dfa85f5cf7b0b4648ea5c4`.
- [v0.3.0](https://github.com/matthewprotti/c11-shannon-capacity-lower-bound/releases/tag/v0.3.0): R6 finite constructions. Original checked ZIP SHA256: `f9255ff24766c736593e31469df82857ee038809078274cbac5ed1e09a4feeb2`.
- [v0.2.0](https://github.com/matthewprotti/c11-shannon-capacity-lower-bound/releases/tag/v0.2.0): R5 finite constructions. Original checked ZIP SHA256: `0279dda29cb58ea2475446a5333694f476c3215e7d8d17ec72fe8e1ca57147a2`.
- [v0.1.0](https://github.com/matthewprotti/c11-shannon-capacity-lower-bound/releases/tag/v0.1.0): R3 dimension-207 result, first pushed 8 September 2026 at 19:43:42 UTC and released at 19:45:28 UTC. Original checked ZIP SHA256: `9ac3006b54d5c449db357819d88ea507b66778923c61c54623d72d905517a357`.

All sealed release directories and original archives are preserved unchanged. Their statements about local-only status, earlier unbuilt inputs, or publication not yet occurring describe their preparation stage. This wrapper records later publication without rewriting that evidence. GitHub's actual publication timestamps record disclosure of each version; dates in filenames do not establish public availability or worldwide priority.

## Attribution and AI disclosure

The underlying generic framework and base data are due to **Pjotr Buys, Sven Polak, and Jeroen Zuiddam**, building on earlier work including Gao and Itty, Rosin, Carstensen, and Reichman. Ravi Tandon's heterogeneous-recursion work is related prior art. See [references and scope](REFERENCES.md).

The new contributions were **AI co-developed** with **OpenAI's Astra 6 Pro** and **Codex GPT-6 Astra Extra-High**, under Matthew Protti's direction. [AI_DISCLOSURE.md](AI_DISCLOSURE.md) records their roles and limits. Licenses, source attribution, and original archives are retained.
