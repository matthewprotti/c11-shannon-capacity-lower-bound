# C11 Lean integration source — R2, 8 September 2026

**Formalization gate: NOT COMPLETED.** This is a full-chain source draft and replay harness, not a Lean-verified release. There is no successful Lean build transcript or measured axiom list in this package.

The source aims to formalize the unchanged R1 construction with cardinality N1 in `C11^207`, yielding `Theta(C11) >= 5.295492477500681`. The accepted finite construction is preserved; this release does not upgrade its mathematical or priority status by assertion.

## What was done

The supplied R1 verifier was rerun successfully. The pinned BPZ source interfaces were read through GitHub. The integration source defines the actual final finite set, proves its intended cardinality through the product-set lemmas, transports it to `SimpleGraph.cycleGraph 11`, and supplies the proposed capacity and strict-root theorems. All of those new Lean declarations remain **unelaborated** in the authoring session. Python source/data checks are not Lean checks.

## Files

- `lean/ShannonBounds/C11AuxiliaryTrade.lean`: new construction and proposed full theorem chain.
- `lean/C11_AxiomAudit.lean`: explicit literal theorem-scope aliases and dependency-print commands.
- `lean/NativeAxiomAudit.lean.in`: generates an additional check on the actual native-evaluation axioms printed by Lean 4.32.2.
- `RUN_LEAN_GATE.py`: clean pinned checkout, R1 replay, original baseline build, candidate build, scope and axiom checks, and compile-failure controls. It makes no remote writes.
- `SOURCE_CHECKS.py`: manifest, frozen-data, literal-table, x27-weight, and proof-bypass-token checks. Its success is explicitly source-only.
- `UPSTREAM_LOCK.json`: BPZ commit, Mathlib commit, toolchain, and retrieved Git blob identities.
- `THEOREM_SCOPE.md`, `TRUST_BOUNDARY.md`, `CODEX_HANDOFF.md`: review and execution instructions.
- `ancestry/`: the complete unchanged R1 ZIP.
- `evidence/`: actual replay, source-test and failed-environment reports; not fabricated Lean output.

## Reproduce the source-only checks

```bash
python3 -B SOURCE_CHECKS.py
python3 -O -B SOURCE_CHECKS.py
python3 -B TEST_HARNESS.py
```

`PASS_SOURCE_AND_FROZEN_DATA_CHECKS_ONLY` is not acceptance of the formal proof.

## Run the actual Lean gate

Use a machine with Python 3.10+, Git and Lake/Elan, enough RAM for the pinned C11 build, and network access for GitHub and the Mathlib cache. The working directory must not exist and must be outside this sealed source package.

```bash
python3 -B RUN_LEAN_GATE.py --work-dir /absolute/path/new-c11-lean-run
```

The runner first verifies the R1 ancestor, clones only the named commit into a new local checkout, checks source identity, obtains the pinned dependencies, and builds `ShannonBounds.CapCertC11` as a positive control. It then builds the new module and runs the explicit theorem-scope, axiom, and negative checks. It never treats an old success log as current evidence.

`BUILD_REPORT.json` begins as `NOT_COMPLETED` and can become `PASS_C11_PINNED_LEAN_GATE` only after every required stage succeeds. A missing executable, timeout, changed source, unexpected axiom, malformed output, or unrelated negative-test failure leaves it incomplete. The build reads this package without modifying it; all build products and logs go in the new working directory.

The source has not been typechecked, so elaboration repairs may be necessary. Make such repairs only in a derived copy, preserve the exact candidate, log every change, and reseal a new release. Do not erase or relabel this release's failed build attempt.

## Minimal build targets

Only `ShannonBounds.CapCertC11` and `ShannonBounds.C11AuxiliaryTrade` are requested, with their ordinary transitive dependencies. The seven-cycle all-results build is not required. Mathlib binary cache use is disclosed; a clean local BPZ/new-module build is not the same as rebuilding Lean and all of Mathlib from source.

## Attribution

The framework, baseline, substitutions and terminal code are by Pjotr Buys, Sven Polak and Jeroen Zuiddam, at the pinned commit. The mixed table uses the N/A rows of T3d and the other rows of T3c. The proposed integration adds the already accepted local trade; it does not claim a new general product theorem or Tandon's full two-sided extension.

Historical `CANDIDATE.json` language is preserved byte-for-byte even where later R1 review updates its status. `STATUS.json` controls the new formalization gate.
