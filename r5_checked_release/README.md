# C11 R5: completed pinned Lean formalization

**PASS_C11_R5_PINNED_LEAN_GATE — 8 September 2026.**

All three frozen R5 constructions have been formalized and compiled. Their literal certificate JSON files, tables, node sequences, exact integers, and the entire received R5 archive are unchanged.

| Dimension | Proved lower bound for the Shannon capacity of C11 |
|---:|---:|
| 186 | 5.295498140339058 |
| 198 | 5.295509919114478 |
| 213 | **5.295514953483263** |

Each bound is derived from an explicitly defined finite independent set in the actual strong power of Mathlib's `SimpleGraph.cycleGraph 11`, with cardinality exactly equal to its frozen integer. All three full constructed roots are proved strictly greater than the full BPZ, R3, R4-201, and R4-210 roots. The exact decimal brackets concern the constructed roots; their upper endpoints are not upper bounds on Shannon capacity.

Read [BUILD_SUMMARY.md](BUILD_SUMMARY.md) for the checks and limits, [CERTIFICATE_INDEX.json](CERTIFICATE_INDEX.json) for the exact integers and theorem names, and [BUILD_RESULT.json](BUILD_RESULT.json) for the measured clean-run evidence.

The scope assertions are in [C11R5_AxiomAudit.lean](source/C11R5_AxiomAudit.lean). The three construction modules are [dimension 186](source/ShannonBounds/C11R5D186.lean), [dimension 198](source/ShannonBounds/C11R5D198.lean), and [dimension 213](source/ShannonBounds/C11R5D213.lean). Shared literal tables and real-root comparison lemmas are in the same source directory.

## Verification status and trust

The development build and a separate complete fresh replay both passed. The fresh replay includes the unchanged BPZ positive control, all new modules, 21 typed scope aliases, dependency inspection for 191 declarations, actual type inspection of all 699 distinct native-evaluation axioms, and six deliberately false Lean probes.

This is **Lean-checked with disclosed native-evaluation trust**. Standard Lean axioms and compiler-generated closed Boolean-equality axioms occur in the proof dependencies. The finite native computations are not all independently reduced by the kernel. The pinned Mathlib/dependency binary cache was used; Lean and Mathlib were not rebuilt from source. Every pinned dependency's revision, worktree diff, and staged/index diff was checked before and after the proof build.

No independent statement anchoring, external expert endorsement, new worldwide-priority clearance, optimality proof, or public release update is implied. The original R5 search record is preserved as provenance; this formalization covers the three retained constructions, not every heuristic search snapshot.

`frozen/` is the received R5 package. Its status files correctly describe its earlier, unbuilt state and are retained byte for byte. This package's top-level `STATUS.json` and measured build report describe the new completed formalization.

## Integrity replay

Python 3.10 or newer, standard library only:

```sh
python3 -B VERIFY_RELEASE.py
```

This validates the package, frozen inputs, generated-source bindings, recorded compiler evidence, axiom reports, expected negative-control messages, and compiled-artifact hashes. It **does not invoke Lean**.

## Fresh Lean replay

Requirements: Python 3.10+, Git, network access, and the pinned Lean 4.32.2 Lake toolchain, either on PATH or available through Elan. Run from this package:

```sh
python3 -B RUN_R5_GATE.py --work-dir /absolute/path/new-r5-run
```

The destination must not exist and must be outside this package. The script fetches BPZ at the frozen commit, obtains its pinned dependency cache, builds the original C11 certificate, then builds and audits all R5 modules and runs the six negative probes.

For an explicit toolchain installation, add `--toolchain-bin /path/to/lean-4.32.2/bin`. On macOS/APFS, the optional `--dependency-cache /path/to/pinned/bpz/.lake/packages` reuses a verified dependency cache by copy-on-write cloning. It never reuses BPZ or R5 build products. Both cache-source and copied dependency revisions and diffs are checked.

Compiled `.olean` files are included as recorded build artifacts, not as a standalone portable runtime. Compiler binaries and Mathlib build products are omitted. Use the fresh source replay to reproduce the proof.

## Attribution

The base data, seven-family framework, and existing constructions are due to Pjotr Buys, Sven Polak, and Jeroen Zuiddam and the seed authors they cite. Their pinned repository is [spectra-research/shannon-capacity-lean](https://github.com/spectra-research/shannon-capacity-lean/tree/aa21eeb12b75b0413d3fa9fb4208b5d0bf2c4d65). The new R5 mathematical contribution is the particular finite recursive assembly, not a new general product theorem. Its research lineage is retained in `frozen/PROOF.md`, `frozen/SEARCH_LEDGER.md`, and the original archives.

AI co-developed under Matthew Protti's direction with OpenAI's Astra 6 Pro and Codex GPT-6 Astra Extra-High. Codex prepared and checked this Lean formalization. Existing licenses and notices are preserved; the new formalization and harness are provided under Apache-2.0.
