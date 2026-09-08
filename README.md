# An improved lower bound for the Shannon capacity of C11

**Matthew Protti — AI co-developed — 8 September 2026**

**v0.2.0 — checked R5 recursive reassembly.** An explicit independent set in the 213th strong power of the eleven-cycle gives

$$\Theta(C_{11})\ge N_{213}^{1/213}\ge 5.295514953483263.$$

Two additional constructions provide stronger bounds in smaller dimensions:

| Construction | Dimension | Proved capacity lower bound |
|---|---:|---:|
| Original R3, v0.1.0 | 207 | 5.295492477500681 |
| R5 compact | 186 | 5.295498140339058 |
| R5 intermediate | 198 | 5.295509919114478 |
| R5 strongest | 213 | **5.295514953483263** |

The full integers and theorem names are in [CERTIFICATE_INDEX.json](r5_checked_release/CERTIFICATE_INDEX.json). Each R5 constructed root is proved strictly greater than the full BPZ, R3, R4-201, and R4-210 roots. These comparisons use exact integer powers, including when dimensions differ. The BPZ baseline remains [commit aa21eeb12b75b0413d3fa9fb4208b5d0bf2c4d65](https://github.com/spectra-research/shannon-capacity-lean/blob/aa21eeb12b75b0413d3fa9fb4208b5d0bf2c4d65/ShannonBounds/CertC11.lean).

R5 retains the original seeds and seven-family separation system while changing the recursive assembly and literal substitution/terminal tables. Four-block terminal constructions allow further useful replacements and reassembly. The three finite constructions are numerical improvements within BPZ's framework. They do not determine the exact capacity, establish optimality or minimum dimension, or prove a new general two-sided heterogeneous composition theorem.

The earlier public-source review concerned R3. R5 improves all the frozen comparison targets, but no new exhaustive priority review or independent expert endorsement is claimed.

## Checked theorem and evidence

The Lean sources for [dimension 186](r5_checked_release/source/ShannonBounds/C11R5D186.lean), [dimension 198](r5_checked_release/source/ShannonBounds/C11R5D198.lean), and [dimension 213](r5_checked_release/source/ShannonBounds/C11R5D213.lean) define actual finite independent sets in Mathlib's `SimpleGraph.cycleGraph 11` strong powers, prove their exact cardinalities, and derive the capacity inequalities from those same sets.

The [R5 build summary](r5_checked_release/BUILD_SUMMARY.md) and [measured build result](r5_checked_release/BUILD_RESULT.json) record a complete fresh replay with Lean 4.32.2 and pinned dependencies. It checks 21 typed scope aliases and the dependencies of 191 declarations, inspects all 699 distinct native-evaluation axioms, and rejects six false compile probes for the intended mathematical reasons.

This is **Lean-checked with disclosed native-evaluation trust**. `native_decide` is used; the finite computations are not all independently reduced by the kernel. Independent informal-to-formal statement review and independent expert review remain pending. Compiler and dependency-cache trust are described in the checked package.

The sealed R5 formalization is preserved under [r5_checked_release](r5_checked_release/). Its `frozen/` directory is the unchanged earlier R5 source package, whose historical status correctly says it was not yet formalized. The enclosing package's status and measured logs record the completed Lean work. Those snapshots are preserved as evidence rather than rewritten on publication.

## Reproduce

From the repository root, verify the preserved files and recorded evidence:

```sh
python3 -B r5_checked_release/VERIFY_RELEASE.py
```

This integrity check does not run Lean. To perform a fresh compilation, put the pinned Lean 4.32.2 `lake` executable on PATH and run:

```sh
python3 -B r5_checked_release/RUN_R5_GATE.py --work-dir /absolute/path/new-c11-r5-run
```

The work directory must not already exist and must be outside the source package. The gate fetches pinned upstream source and dependency cache, builds the unchanged baseline and all three R5 cases, audits the theorem dependencies, and runs the negative controls. See the [R5 release README](r5_checked_release/README.md) for explicit-toolchain and optional macOS/APFS cache-reuse options.

## Release history

- [v0.2.0](https://github.com/matthewprotti/c11-shannon-capacity-lower-bound/releases/tag/v0.2.0): the checked R5 constructions in dimensions 186, 198, and 213. Original checked ZIP SHA256: `0279dda29cb58ea2475446a5333694f476c3215e7d8d17ec72fe8e1ca57147a2`.
- [v0.1.0](https://github.com/matthewprotti/c11-shannon-capacity-lower-bound/releases/tag/v0.1.0): the original dimension-207 R3 result, first pushed on 8 September 2026 at 19:43:42 UTC and released at 19:45:28 UTC. Its [checked_release](checked_release/) files are unchanged. Original ZIP SHA256: `9ac3006b54d5c449db357819d88ea507b66778923c61c54623d72d905517a357`.

## Attribution and AI disclosure

The underlying construction framework and tables are due to **Pjotr Buys, Sven Polak, and Jeroen Zuiddam**, building on earlier work including Gao and Itty, Rosin, Carstensen, and Reichman. Ravi Tandon's heterogeneous-recursion work is related prior art concerning auxiliary structure. See [references and scope](REFERENCES.md).

This contribution was **AI co-developed** with **OpenAI's Astra 6 Pro** and **Codex GPT-6 Astra Extra-High**, under Matthew Protti's direction. [AI_DISCLOSURE.md](AI_DISCLOSURE.md) records the roles and limits. Source attribution, licenses, and the original source archives are retained.
