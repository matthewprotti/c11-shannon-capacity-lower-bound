# An improved lower bound for the Shannon capacity of C11

**Matthew Protti — AI co-developed — 8 September 2026**

An explicit independent set in the 207th strong power of the eleven-cycle gives

$$\Theta(C_{11})\ge N_1^{1/207}\ge 5.295492477500681.$$

The exact integer $N_1$ is recorded in [CANDIDATE.json](checked_release/frozen_inputs/CANDIDATE.json). It is strictly larger than the complete BPZ cardinality $N_0$ at the same dimension, giving a strict improvement over their constructed root, approximately $5.29549231578462014255$. The baseline is the [BPZ certificate](https://github.com/spectra-research/shannon-capacity-lean/blob/aa21eeb12b75b0413d3fa9fb4208b5d0bf2c4d65/ShannonBounds/CertC11.lean) at commit `aa21eeb12b75b0413d3fa9fb4208b5d0bf2c4d65`.

The change is a specific admissible hybrid of existing BPZ substitution rows: N and A from T3d, all other rows from T3c, used only at node x27 with its unchanged ordered children. The base construction, remaining schedule, and terminal code are retained. This is a numerical construction within the BPZ framework; it does not determine the exact capacity or establish a new general two-sided heterogeneous composition theorem.

A public-source review on 8 September 2026 located no equal or stronger C11 lower bound. Accordingly, this is described as an improvement of the best publicly documented bound **to our knowledge**, without a claim of exhaustive worldwide priority clearance or independent expert endorsement.

## Checked theorem and evidence

The [Lean construction](checked_release/derived_source/lean/ShannonBounds/C11AuxiliaryTrade.lean) proves existence of a finite set in the actual strong power of Mathlib's `SimpleGraph.cycleGraph 11`, with cardinality exactly $N_1$, and derives the capacity bound from that set. The strict comparison uses the full integers.

The [build summary](checked_release/BUILD_SUMMARY.md) records a successful fresh BPZ and candidate build with Lean 4.32.2 and pinned dependencies, actual axiom inspection, and two negative controls rejected for the expected mathematical reasons. This is **Lean-checked with disclosed native-evaluation trust**. `native_decide` is used; the finite computations are not all independently reduced by the kernel. Independent informal-to-formal statement review and independent expert review remain pending.

The full sealed R3 package is preserved under [checked_release](checked_release/). Its historical source-status files describe the uncompiled starting point; the top-level [release status](checked_release/STATUS.json) and [build result](checked_release/BUILD_RESULT.json) describe the completed check. The original archive has SHA256 `9ac3006b54d5c449db357819d88ea507b66778923c61c54623d72d905517a357`.

## Reproduce

From the repository root, verify the preserved files and recorded evidence:

```sh
python3 -B checked_release/VERIFY_RELEASE.py
```

This integrity check does not run Lean. To perform a fresh compilation, put the pinned Lean 4.32.2 `lake` executable on PATH and run:

```sh
python3 -B checked_release/derived_source/RUN_LEAN_GATE.py --work-dir /absolute/path/new-c11-lean-run
```

The work directory must not already exist. The gate fetches the pinned upstream source and dependency cache, builds the baseline and candidate, audits the theorem dependencies, and runs the negative controls. See the [release README](checked_release/README.md) and [trust boundary](checked_release/derived_source/TRUST_BOUNDARY.md).

## Attribution and AI disclosure

The underlying construction framework and tables are due to **Pjotr Buys, Sven Polak, and Jeroen Zuiddam**, building on earlier work including Gao and Itty, Rosin, Carstensen, and Reichman. Ravi Tandon's heterogeneous-recursion work is related prior art concerning auxiliary structure. See [references and scope](REFERENCES.md).

This contribution was **AI co-developed** with **OpenAI's Astra 6 Pro** and **Codex GPT-6 Astra Extra-High**, under Matthew Protti's direction. [AI_DISCLOSURE.md](AI_DISCLOSURE.md) records the roles and limits. Source attribution, licenses, and the original source archives are retained.
