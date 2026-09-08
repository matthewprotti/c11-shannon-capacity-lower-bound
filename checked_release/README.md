# C11 Lean-checked release R3 — 8 September 2026

**Result: PASS_C11_PINNED_LEAN_GATE.** The frozen R1 construction has now been compiled through the complete R2 theorem chain, using the specified Lean 4.32.2, Mathlib and BPZ commits. The mathematical Lean construction file, `CANDIDATE.json`, `FROZEN_INPUTS.json`, and the R1 ancestor are unchanged byte-for-byte.

The checked conclusion is

\[
\Theta(C_{11})\ge 5.295492477500681.
\]

This follows from an explicitly defined independent finite set of exactly the frozen N1 occurrences in the actual 207th strong power of `SimpleGraph.cycleGraph 11`. The exact constructed root is strictly greater than the full frozen BPZ root. This is not a worldwide-priority or optimality claim.

## Read first

* `BUILD_SUMMARY.md`: results, theorem scope and trust boundary.
* `CHANGELOG.md`: every source/harness change from R2.
* `STATUS.json`: the current release status.
* `BUILD_RESULT.json`: the measured successful clean-run report.
* `evidence/clean_run/logs/12_scope_and_axioms.log`: actual scope statements and axiom reports.
* `evidence/clean_run/logs/12b_native_axiom_shapes.log`: all 193 native-axiom type inspections.
* `evidence/clean_run/logs/13_wrong_cardinality.log` and `14_forbidden_block.log`: deliberate semantic failures.

`ancestry/` contains the unchanged original R2 source archive and R1 ancestor. `derived_source/` is the exact source package used for the successful build. Its inherited R2 authoring-status files describe the uncompiled starting point and are intentionally retained as historical input; this release's top-level `STATUS.json` and measured build report describe the completed run.

`compiled/bpz/` contains the local BPZ/candidate build products and compiled scope audit. All included build products have hashes in `COMPILED_ARTIFACTS.json`. `SOURCE_HASHES.json` records the source identities in the checked upstream checkout plus the new construction module. Mathlib and the compiler binaries are not bundled; their pins, toolchain release checksum and cache provenance are recorded in the evidence.

## Integrity replay

Run `python3 -B VERIFY_RELEASE.py` from this directory. It checks the package, preserved inputs, recorded gate, axiom-log correspondence and expected negative-control messages. It does not invoke Lean and does not substitute for a fresh compilation.

## Fresh Lean replay

Make the specified Lean 4.32.2 `lake` executable available on PATH, then run:

```sh
python3 -B derived_source/RUN_LEAN_GATE.py --work-dir /absolute/path/new-c11-lean-run
```

The new directory must not exist. The command downloads the pinned dependencies/cache and builds the original C11 positive control and the candidate. On macOS/APFS, `--reuse-pinned-deps /path/to/previous/bpz/.lake/packages --skip-cache-download` can reuse the verified dependency cache without reusing any BPZ or candidate build products; exact dependency commits and clean tracked sources are checked before and after the build.

The native-evaluation trust disclosure is essential: this is a successful pinned Lean build with standard Lean axioms and actual compiler-generated closed Boolean-equality axioms. It is not kernel-only re-evaluation of the finite arithmetic. See `BUILD_SUMMARY.md` and the retained original `TRUST_BOUNDARY.md`.

The construction and baseline framework retain the BPZ attribution and licenses in the source archives. No construction optimization, changed seed, schedule change, toolchain upgrade or baseline substitution was made.
