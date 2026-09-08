# Changes from R2 to the build input used for R3

The exact machine-readable changes and unified diff are in `evidence/host_and_diagnostics/DERIVED_CHANGES_FINAL.json` and `DERIVED_REPAIR.patch`.

## Preserved byte-for-byte

* `CANDIDATE.json`
* `FROZEN_INPUTS.json`
* The complete R1 ancestor archive
* `lean/ShannonBounds/C11AuxiliaryTrade.lean`
* All pinned upstream mathematical sources, seeds, substitutions and the original certificate

No theorem statement or construction proof was weakened or replaced. No mathematical Lean-source elaboration repair was needed.

## Compatibility and build changes

1. **`lean/C11_AxiomAudit.lean`:** added `pp.fullNames true`. The actual first-run axiom output abbreviated names under the open namespace; environment lookup needs full declaration names. The literal scope aliases and their types are unchanged.
2. **`SOURCE_CHECKS.py`:** normalized only the observed standard print forms `Classical.choice.{u}` and `Quot.sound.{u}` to their allowlisted constant names. Extended the native suffix pattern to accept up to two numeric underscore suffixes, covering the observed `ax_1_1` form as well as `ax_1`. Missing/duplicate reports, arbitrary axioms, placeholder dependencies and malformed native names still fail closed. Every accepted native declaration must still pass the compiled type audit.
3. **`lean/NativeAxiomAudit.lean.in`:** enabled full-name and universe printing for the recorded actual types. Its declaration-kind, safety, Boolean-equality and closed-expression checks are unchanged.
4. **`TEST_HARNESS.py`:** added a positive test of the observed print forms and negative tests for nonnumeric native suffixes and arbitrary universe-annotated assumptions. All 19 tests passed in normal and optimized Python modes.
5. **`RUN_LEAN_GATE.py`:** added optional macOS/APFS copy-on-write reuse of pinned dependency directories, so the fresh replay did not duplicate roughly 7.3 GiB of dependency cache. No BPZ or candidate build products are copied. The runner verifies actual dependency revisions and clean tracked sources before reuse, after setup and after the build; the Mathlib revision must match the supplied explicit lock. Normal replay without this optional argument continues to fetch dependencies/cache as before.
6. **`MANIFEST.sha256`:** regenerated for the exact derived build-input package after these changes.

The original R2 source archive and its `NOT_COMPLETED` authoring evidence are retained unchanged. The initial local run successfully compiled the mathematical source but stopped at the incompatible parser. The successful result comes from the subsequent fresh checkout after the compatibility changes, not from relabelling that failed first run.
