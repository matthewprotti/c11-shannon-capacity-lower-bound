# Layered independent-set constructions

**Matthew Protti — AI co-developed**

**v0.5.0: checked C11 and C13 improvements, and canonical cell retyping.** The latest bounds are **Theta(C11) >= 5.295526013632343** in dimension 213 and **Theta(C13) >= 6.302927046770772** in dimension 522. The new symbolic methods development proves canonical admissibility, exact preservation, least sound masks relative to fixed generator cells, and idempotence. Read the [checked consolidation](shannon_checked_release/README.md), [mathematical review](shannon_checked_release/MATHEMATICAL_REVIEW.md), and [canonical retyping methods page](CANONICAL_RETYPING.md).

**R7, v0.4.0: A uniform avoidance-profile compiler for layered independent-set constructions.** R7 proves a compiler and preservation theorem for arbitrary finite separation alphabets and arbitrary arities, within the BPZ framework. The prescribed full typed rows are admissible, and every old and guarded extension generator is retained with its assigned mask. It adds no numerical C11 bound.

Read the [R7 methods landing page](R7_METHODS.md), [informal theorem and proof](r7_checked_release/frozen/THEOREM_AND_PROOF.md), and [controlling Lean source](r7_checked_release/source/ShannonBounds/ProfileCompiler/Core.lean), declaration `ShannonBounds.ProfileCompiler.universal_compilation`.

R7 also proves exact graph/set/count semantics, profile equivalence, filtered gain, finite well-founded DAG preservation, heterogeneous dimension addition with repeated children, the alphabet-cardinality formula and 58-letter specialization, justified zero-weight pruning, and terminal expansion. One-step semantics covers arbitrary finite child graphs; recursive dimension statements concern strong powers of a common finite graph. No universal positive gain, optimality, worldwide novelty clearance, or solution of the general two-sided extension is claimed.

## Numerical C11 constructions

The strongest released numerical C11 result is R10:

$$\Theta(C_{11})\ge N_{213}^{1/213}\ge5.295526013632343.$$

| Dimension | R5 | R6 | R9 | R10 |
|---:|---:|---:|---:|---:|
| 186 | 5.295498140339058 | 5.295498536418623 | — | — |
| 198 | 5.295509919114478 | 5.295510441529957 | 5.295515084805001 | — |
| 213 | 5.295514953483263 | 5.295515544509239 | 5.295524149098711 | **5.295526013632343** |

The R9/R10 C11 gains change only the terminal code; every R6 child construction is imported unchanged. The dimension-198 R9 root does not exceed the previously published dimension-213 R6 root. The C13 R8 construction retains BPZ's six-dimensional base and schedule, adds guarded typed cells at three nodes, and proves a bound of **6.302927046770772** in dimension **522**, strictly above BPZ's full original same-dimension construction.

Each new numerical module proves an actual finite independent set in the stated power of Mathlib's cycle graph, its full exact cardinality, capacity lower bound, constructed-root decimal bracket, and exact comparison to its matching parent. See [C11 R10](shannon_checked_release/source/ShannonBounds/C11R10D213.lean) and [C13 R8](shannon_checked_release/source/ShannonBounds/C13R8D522.lean). A bracket's upper endpoint concerns the constructed root, not the unknown capacity.

For the earlier releases, the full integers and theorem names are in the [R6 index](r6_checked_release/CERTIFICATE_INDEX.json) and [R5 index](r5_checked_release/CERTIFICATE_INDEX.json). Each R6 constructed root strictly exceeds its matching full R5 root and the four older frozen BPZ, R3, R4-201, and R4-210 roots. Comparisons use exact integer powers. The dimension-186 R6 root is not claimed to exceed the strongest dimension-213 R5 root.

R3 gives 5.295492477500681 in dimension 207. The BPZ comparison baseline is [commit aa21eeb12b75b0413d3fa9fb4208b5d0bf2c4d65](https://github.com/spectra-research/shannon-capacity-lean/blob/aa21eeb12b75b0413d3fa9fb4208b5d0bf2c4d65/ShannonBounds/CertC11.lean).

R5 changes the recursive assembly and finite substitution/terminal tables while retaining the seeds and seven-family system. R6 uses avoidance information to obtain stronger concrete constructions via ordinary 58-letter certificates. R7 supplies the subsequent general mathematical compiler theorem. The R5/R6 packages and their numerical claims are unchanged; the exact Shannon capacity and optimality are not established here.

## Verification and review

The new consolidation has a development build and a separate fresh compiler replay, with both unchanged BPZ C11/C13 controls, **184 numerical theorem audits**, **261 symbolic declaration audits**, and **nine mathematical negative compile controls per run**. Complete statement types and axiom dependencies agree. The symbolic retyping development has only the three standard Lean axioms; the numerical audit discloses **246 distinct native Boolean-check axioms** and inspects each actual closed axiom type. Seven of twelve new `.olean` files are byte-identical between runs; five differ. Their cause is unestablished, and byte-for-byte reproducibility is not claimed. [Exact build comparison](shannon_checked_release/BUILD_COMPARISON.json).

R10's rational matrix upper bounds and exact-relation gain bound remain finite certificates plus a reviewed written argument. They concern fixed whole-cell terminal models, not Shannon capacities. The new R10 Lean result is its lower construction. The C13 base has actual Lean-proved independent sets, separation and fibre cardinalities; its exact physical mask interpretation is additionally finite-checked. The [review](shannon_checked_release/MATHEMATICAL_REVIEW.md) states these boundaries explicitly.

The [R7 build summary](r7_checked_release/BUILD_SUMMARY.md) records two fresh Lean 4.32.2 builds, 24 complete main statement types, 381 audited declarations including generated declarations, and two mathematical negative compile controls per run. R7's audited dependencies are only `propext`, `Classical.choice`, and `Quot.sound`; no native-evaluation axioms occur in R7. Six of twelve compiled artifacts differ between runs, with matching source hashes, complete main statement types, and axiom dependency sets. The cause is unestablished; byte-for-byte reproducibility is not claimed.

The [R5](r5_checked_release/BUILD_SUMMARY.md) and [R6](r6_checked_release/BUILD_SUMMARY.md) builds retain their disclosed native-evaluation dependencies. Their audits cover 699 and 234 distinct native axioms respectively; those are audit-wide unions. R7 does not remove those earlier trust dependencies.

All releases trust the pinned compiler/kernel and binary dependency cache; Lean and Mathlib were not rebuilt from source. The supplied AI receiving reviews of [R7](reviews/C11_R7_Lean_Receipt_Review_2026-09-08.md) and [R6](reviews/C11_R6_Lean_Receipt_Review_2026-09-08.md) report additional source and finite checks. Neither receiving runtime reran Lean. These are not independent human expert endorsements. [Review provenance](reviews/README.md) distinguishes the supplied reports from the included compiler evidence.

## Reproduce

Verify the preserved files and recorded evidence from the repository root:

```sh
python3 -B shannon_checked_release/VERIFY_RELEASE.py
python3 -B r7_checked_release/VERIFY_RELEASE.py
python3 -B r6_checked_release/VERIFY_RELEASE.py
python3 -B r5_checked_release/VERIFY_RELEASE.py
python3 -B checked_release/VERIFY_RELEASE.py
```

These integrity verifiers do not run Lean. To rebuild the latest consolidation in an initially absent directory outside the sealed package:

```sh
python3 -B shannon_checked_release/RUN_GATE.py /absolute/path/new-shannon-run \
  --toolchain-bin /absolute/path/to/lean-4.32.2/bin
```

See the [package README](shannon_checked_release/README.md) for optional pinned dependency-cache reuse. The compiler, runtime and cached dependency binaries remain part of the trust boundary. Earlier R7 compilation uses:

```sh
python3 -B r7_checked_release/RUN_R7_GATE.py --work-dir /absolute/path/new-r7-run
```

The work directory must not exist and must be outside the source package. See the [R7 package README](r7_checked_release/README.md) for explicit-toolchain and optional macOS/APFS dependency-cache reuse. The R5/R6 packages retain their own replay gates.

## Release history and preserved evidence

- [v0.5.0](https://github.com/matthewprotti/c11-shannon-capacity-lower-bound/releases/tag/v0.5.0): C13 R8, C11 R9/R10, and the general canonical retyping follow-up. Checked ZIP SHA256: `4f7fe402600077f221d3459b904f7177fd38a169c5abb3fad3e3ce4bab0b323e`.

- [v0.4.0](https://github.com/matthewprotti/c11-shannon-capacity-lower-bound/releases/tag/v0.4.0): R7 general compiler and preservation theorem. Original checked ZIP SHA256: `cc230eeaef95f974110827d149e07d7763ce136c58dfa85f5cf7b0b4648ea5c4`.
- [v0.3.0](https://github.com/matthewprotti/c11-shannon-capacity-lower-bound/releases/tag/v0.3.0): R6 finite constructions. Original checked ZIP SHA256: `f9255ff24766c736593e31469df82857ee038809078274cbac5ed1e09a4feeb2`.
- [v0.2.0](https://github.com/matthewprotti/c11-shannon-capacity-lower-bound/releases/tag/v0.2.0): R5 finite constructions. Original checked ZIP SHA256: `0279dda29cb58ea2475446a5333694f476c3215e7d8d17ec72fe8e1ca57147a2`.
- [v0.1.0](https://github.com/matthewprotti/c11-shannon-capacity-lower-bound/releases/tag/v0.1.0): R3 dimension-207 result, first pushed 8 September 2026 at 19:43:42 UTC and released at 19:45:28 UTC. Original checked ZIP SHA256: `9ac3006b54d5c449db357819d88ea507b66778923c61c54623d72d905517a357`.

All sealed release directories and original archives are preserved unchanged. Their statements about local-only status, earlier unbuilt inputs, or publication not yet occurring describe their preparation stage. This wrapper records later publication without rewriting that evidence. GitHub's actual publication timestamps record disclosure of each version; dates in filenames do not establish public availability or worldwide priority.

## Attribution and AI disclosure

The underlying generic framework and base data are due to **Pjotr Buys, Sven Polak, and Jeroen Zuiddam**, building on earlier work including Gao and Itty, Rosin, Carstensen, and Reichman. Ravi Tandon's heterogeneous-recursion work is related prior art. See [references and scope](REFERENCES.md).

The new contributions were **AI co-developed** with **OpenAI's Astra 6 Pro** and **Codex GPT-6 Astra Extra-High**, under Matthew Protti's direction. [AI_DISCLOSURE.md](AI_DISCLOSURE.md) records their roles and limits. Licenses, source attribution, and original archives are retained.
