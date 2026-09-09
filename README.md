# An improved lower bound for the Shannon capacity of C11

**Matthew Protti — AI co-developed — constructions dated 8 September 2026**

**v0.3.0 — checked R6 finite avoidance-profile constructions.** An explicit independent set in the 213th strong power of the eleven-cycle gives

$$\Theta(C_{11})\ge N_{213}^{1/213}\ge 5.295515544509239.$$

R5 and R6 also give constructions in dimensions 186 and 198:

| Dimension | R5, v0.2.0 | R6, v0.3.0 |
|---:|---:|---:|
| 186 | 5.295498140339058 | 5.295498536418623 |
| 198 | 5.295509919114478 | 5.295510441529957 |
| 213 | 5.295514953483263 | **5.295515544509239** |

These are proved capacity lower bounds. The full cardinalities and theorem names are in the [R6 certificate index](r6_checked_release/CERTIFICATE_INDEX.json) and [R5 certificate index](r5_checked_release/CERTIFICATE_INDEX.json). Each R6 constructed root strictly exceeds its matching full R5 root and all four older frozen BPZ, R3, R4-201, and R4-210 roots. These fifteen comparisons use exact integer powers, including when dimensions differ. The dimension-186 result is not claimed to beat the strongest dimension-213 R5 result.

The original R3 release gives 5.295492477500681 in dimension 207. The BPZ baseline remains [commit aa21eeb12b75b0413d3fa9fb4208b5d0bf2c4d65](https://github.com/spectra-research/shannon-capacity-lean/blob/aa21eeb12b75b0413d3fa9fb4208b5d0bf2c4d65/ShannonBounds/CertC11.lean).

## What changed

R5 retains the original seeds and seven-family separation system while changing the recursive assembly and literal substitution/terminal tables. R6 retains those seeds, coarse tables, assembly graphs, and dimensions, and uses avoidance information to obtain stronger finite constructions. Its supplied ordinary certificates use 58 normalized family/mask descriptors and 49 distinct typed tables.

The R6 Lean development verifies those concrete typed certificates, their actual realization in the C11 base graph, all intermediate weights, and their final independent sets. It uses BPZ's existing arbitrary-alphabet framework. **The general avoidance-profile propagation, filtered-augmentation, and conservative-update calculus remains a written proof.** The numerical results do not assume that unformalized general algorithm is correct.

These are finite numerical improvements. They do not determine the exact capacity, establish optimality or minimum dimension, or replace BPZ's general theorem. The earlier public-source priority search concerned R3; no new exhaustive priority review or independent expert endorsement is claimed for R5 or R6.

## Checked theorem and evidence

The R6 sources for [dimension 186](r6_checked_release/source/ShannonBounds/C11R6D186.lean), [dimension 198](r6_checked_release/source/ShannonBounds/C11R6D198.lean), and [dimension 213](r6_checked_release/source/ShannonBounds/C11R6D213.lean) define finite independent sets in strong powers of Mathlib's `SimpleGraph.cycleGraph 11`, prove their exact cardinalities, and derive the capacity inequalities from those same sets. No independent-set existence or cardinality assumption remains in the headline theorems. Upper decimal endpoints bound the constructed roots, not Shannon capacity.

The [R6 build summary](r6_checked_release/BUILD_SUMMARY.md) and [measured build result](r6_checked_release/BUILD_RESULT.json) record a complete fresh replay with Lean 4.32.2 and pinned dependencies. The audit checks 24 typed scope aliases, dependencies of 232 declarations, and the actual types of all 234 native-evaluation axioms in their dependency union. Six false compile probes fail for their intended mathematical reasons. The strongest capacity theorem has 98 native dependencies; 234 is the audit-wide union.

The earlier [R5 build summary](r5_checked_release/BUILD_SUMMARY.md) records its separate fresh replay, 21 scope aliases, 191 audited declarations, 699 native axioms in the audit-wide union, and six negative compile controls.

This is **Lean-checked with disclosed native-evaluation and pinned dependency-cache trust**. It is not kernel-only arithmetic replay or a source rebuild of Lean and Mathlib. An [automated receiving-side receipt review](reviews/C11_R6_Lean_Receipt_Review_2026-09-08.md) reports no blocking discrepancy in R6 and describes additional finite source checks. The receiving runtime did not rerun Lean or import the compiled artifacts. Its separate receipt-evidence archive was not supplied for this publication. The review is not a human referee report or independent expert endorsement. See the [review provenance note](reviews/README.md).

The sealed packages under [r6_checked_release](r6_checked_release/), [r5_checked_release](r5_checked_release/), and [checked_release](checked_release/) are preserved unchanged. Statements in those snapshots about local-only status, earlier unbuilt inputs, or publication not yet occurring describe their preparation stage. This publication wrapper records the later release history without rewriting sealed evidence.

## Reproduce

From the repository root, verify the preserved files and recorded evidence:

```sh
python3 -B r6_checked_release/VERIFY_RELEASE.py
python3 -B r5_checked_release/VERIFY_RELEASE.py
python3 -B checked_release/VERIFY_RELEASE.py
```

These integrity checks do not run Lean. To perform a fresh compilation, put the pinned Lean 4.32.2 `lake` executable on PATH and run either gate:

```sh
python3 -B r6_checked_release/RUN_R6_GATE.py --work-dir /absolute/path/new-c11-r6-run
python3 -B r5_checked_release/RUN_R5_GATE.py --work-dir /absolute/path/new-c11-r5-run
```

Each work directory must not already exist and must be outside the source package. The gates fetch pinned upstream source and dependency cache, build the unchanged baseline and the new constructions, audit theorem dependencies, and run negative controls. See the [R6 release README](r6_checked_release/README.md) and [R5 release README](r5_checked_release/README.md) for explicit-toolchain and optional macOS/APFS cache-reuse options.

## Release history

- [v0.3.0](https://github.com/matthewprotti/c11-shannon-capacity-lower-bound/releases/tag/v0.3.0): checked R6 constructions in dimensions 186, 198, and 213. Original checked ZIP SHA256: `f9255ff24766c736593e31469df82857ee038809078274cbac5ed1e09a4feeb2`.
- [v0.2.0](https://github.com/matthewprotti/c11-shannon-capacity-lower-bound/releases/tag/v0.2.0): checked R5 constructions in the same three dimensions. Original checked ZIP SHA256: `0279dda29cb58ea2475446a5333694f476c3215e7d8d17ec72fe8e1ca57147a2`.
- [v0.1.0](https://github.com/matthewprotti/c11-shannon-capacity-lower-bound/releases/tag/v0.1.0): original dimension-207 R3 result, first pushed on 8 September 2026 at 19:43:42 UTC and released at 19:45:28 UTC. Original checked ZIP SHA256: `9ac3006b54d5c449db357819d88ea507b66778923c61c54623d72d905517a357`.

## Attribution and AI disclosure

The underlying construction framework and tables are due to **Pjotr Buys, Sven Polak, and Jeroen Zuiddam**, building on earlier work including Gao and Itty, Rosin, Carstensen, and Reichman. Ravi Tandon's heterogeneous-recursion work is related prior art concerning auxiliary structure. See [references and scope](REFERENCES.md).

This contribution was **AI co-developed** with **OpenAI's Astra 6 Pro** and **Codex GPT-6 Astra Extra-High**, under Matthew Protti's direction. [AI_DISCLOSURE.md](AI_DISCLOSURE.md) records the roles and limits. Source attribution, licenses, and original source archives are retained.
