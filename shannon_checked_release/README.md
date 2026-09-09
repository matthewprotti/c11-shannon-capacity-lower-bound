# Checked Shannon constructions and canonical cell retyping

Matthew Protti — **AI co-developed** with **OpenAI's Astra 6 Pro** and
**Codex GPT-6 Astra Extra-High**. Consolidation of frozen C13 R8, C11 R9, and
C11 R10 inputs, prepared 9 September 2026.

| Closed Lean result | Dimension | Capacity lower bound |
|---|---:|---:|
| `C11R9D198.capacity_lower` | 198 | 5.295515084805001 |
| `C11R9D213.capacity_lower` | 213 | 5.295524149098711 |
| `C11R10D213.capacity_lower` | 213 | **5.295526013632343** |
| `C13R8D522.capacity_lower` | 522 | **6.302927046770772** |

All names have prefix `ShannonBounds.`. Each module also proves `exists_code`,
`card_code`, `independent_code`, `capacity_root`, and `root_bracket`, with the
full exact integer `N` in its source. The C11 roots strictly exceed their
matching R6 parents; R10 also exceeds R9. The C13 root strictly exceeds BPZ's
full original same-dimension root. R9 d198 is not a numerical record over R6 d213.

The new symbolic `ShannonBounds.CellRetyping` development proves canonical
admissibility and generator retention for arbitrary finite dependent input
alphabets, exact graph/set/count semantics, least universally sound masks
relative to fixed generator cells, precision, idempotence, guarded additions,
justified zero-factor pruning, and BPZ-compatible finite recipes and DAGs.
Its output alphabet is the same normalized alphabet used by the frozen R7
compiler. Empty inputs and empty coordinates are allowed. See
[the mathematical review](MATHEMATICAL_REVIEW.md) for the theorem-to-source map
and the limits of the claims.

## What was checked

Two fresh BPZ checkouts built the new mathematics with pinned Lean 4.32.2 and
the unchanged BPZ commit `aa21eeb12b75b0413d3fa9fb4208b5d0bf2c4d65`.
The first development build needed a retry after a full disk prevented an
upstream C13 output file from being written; both original C11/C13 controls
subsequently built successfully. A separate clean replay rebuilt both controls
and all derived proof modules; its first attempt also needed a storage-recovery
retry while refreshing dependency records. No BPZ or derived proof artifacts were reused
between these runs. Exact pinned dependency binaries were reused.

Each run audits **184 numerical theorem declarations**, **261 new symbolic
declarations**, complete statement types, and all transitive axioms. The
symbolic development uses only `propext`, `Classical.choice`, and `Quot.sound`.
The numerical audit has **246 distinct native Boolean-check axioms**, counting
inherited and new dependencies together. Every native axiom's actual type is
inspected as a non-unsafe equality of a closed Bool expression to true. These
numerical certificates are not kernel-only arithmetic replay.

Each run rejects nine deliberate mathematical falsehoods: four incorrect
cardinalities, four supported but symbolically nonseparated terminal lists,
and one omitted mask bit with an actual singleton-graph witness. Incidental
import, instance, or file errors do not count as negative success. The exact
two-build source/type/axiom and artifact comparison is in `BUILD_COMPARISON.json`.

R8/R9/R10 finite verifiers also passed in both normal and optimized Python,
with identical outputs and all supplied negative controls. The frozen inputs
and their earlier status descriptions remain unchanged under `received/`.
The new Lean results and this receipt supersede only their earlier statements
that those new Lean builds had not yet occurred.

R10's rational matrix upper bounds and exact-relation gain bound remain exact
finite certificates plus a reviewed written proof, **not Lean-formalized upper
bounds**. They concern fixed whole-cell terminal models, not `Theta(C11)`.
The R8 typed base proves the actual sets' independence, separation, and sizes;
its exact physical mask interpretation is additionally finite-checked, not
separately identified by a new Lean theorem. No Python implementation equivalence,
search optimality, external human review, or worldwide priority is asserted.

## Reproduce

Integrity and recorded evidence only:

```sh
python3 -B VERIFY_RELEASE.py
```

Fresh Lean compilation, with an installed pinned toolchain:

```sh
python3 -B RUN_GATE.py /absolute/path/to/new-run \
  --toolchain-bin /absolute/path/to/lean-4.32.2/bin
```

The output directory must initially be absent and must be outside this sealed
package. On macOS/APFS, `--dependency-cache /absolute/path/to/bpz/.lake/packages`
can reuse a cache after every dependency's exact Git revision and clean worktree
are checked. Without it, pinned dependency binaries are downloaded. BPZ controls
and all new proof modules are rebuilt. Allow several gigabytes of storage.

Large raw statement/axiom data and logs are stored losslessly with gzip.
`COMPRESSED_EVIDENCE.json` records their original paths, byte lengths and SHA256
hashes. For example, `gzip -dc evidence/fresh/RAW_STATEMENT_TYPES.json.gz` yields
the complete raw expression data. Readable headline types are in
`STATEMENT_TYPES.txt`. Source hashes bind all 12 new mathematical modules and
the 20 unchanged inherited mathematical modules to both builds.

The product framework, base data, and original C11/C13 constructions are due to
Pjotr Buys, Sven Polak, and Jeroen Zuiddam. Original attribution and Apache-2.0
licensing are retained. This formalization does not claim their generic product
method or the theta-style PSD principle as new.
