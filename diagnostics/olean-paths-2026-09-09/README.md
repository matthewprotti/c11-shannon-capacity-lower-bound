# Cause of the v0.5.0 compiled-file differences

**Finding, 9 September 2026:** all five differing `.olean` pairs are explained
by absolute source filenames stored in Lean's persistent linter-warning log.
Changing only those filenames in separate diagnostic copies makes each pair
byte-identical. The original run artifacts and sealed release remain unchanged.

## What differs

The two recorded builds used different absolute source locations:

- `.../runs/01_development/bpz/ShannonBounds/CellRetyping/...`
- `.../runs/02_fresh_replay/bpz/ShannonBounds/CellRetyping/...`

Lean 4.32.2 stores tagged linter messages in the persistent `Lean.Linter.lintLogExt`
environment extension. Both `LintEntry.file` and the embedded
`LintEntry.message.fileName` contain the source filename. The five affected
modules have these entries; the seven already-identical modules do not.

This is documented directly in the pinned compiler implementation:
[PersistentLintLog.lean](https://github.com/leanprover/lean4/blob/f3b06c705e6c85f5314019d5d3baab0fec5b580c/src/Lean/Linter/PersistentLintLog.lean#L18-L57).
The recorded warning kinds concern unused section variables, unused simplifier
arguments, and an unnecessary `simpa`; their contents agree across the builds.

Four files have the same byte length and differ only in the stored pathname
string and its length fields. The fresh-build pathname is one byte longer.
In `DAG.olean`, the serialized string changes from 152 bytes including its
header to 153 bytes. Lean's serializer rounds allocations to an 8-byte boundary
on this host, changing that allocation from 152 to 160 bytes. That accounts for
the eight-byte increase in the file and relocation of following internal pointers.
See the pinned [object compactor](https://github.com/leanprover/lean4/blob/f3b06c705e6c85f5314019d5d3baab0fec5b580c/src/runtime/compact.cpp#L152-L169).

## Checks performed

The inspection is bound to the original development and fresh hashes in the
published `BUILD_COMPARISON.json`. Every inspected run artifact was first
verified byte-for-byte equal to its sealed-package copy.

For every affected module:

1. Read the original artifact with the pinned Lean module reader and save it
   unchanged. The roundtrip reproduces the original file exactly.
2. Compare complete exported constant types and available theorem proof terms,
   definition bodies, and opaque values between the two inputs. All agree.
3. Change only the two filename fields in the persisted linter entries to the
   same relative source path, writing separate diagnostic files.
4. Compare those complete files. Every normalized pair is byte-identical.

This covers **249 constant declarations** across the five differing modules.

| Module | Constant declarations | Lint entries per build | Path-normalized files identical |
|---|---:|---:|---|
| Core | 51 | 12 | Yes |
| Semantics | 60 | 12 | Yes |
| Operations | 19 | 3 | Yes |
| Recursion | 60 | 2 | Yes |
| DAG | 59 | 4 | Yes |

The raw inspection and normalization results are in
`LINT_PATH_NORMALIZATION_RESULT.json`, `STRING_ALIGNMENT.json`, and the
per-module `evidence/*.decls.json.gz` and `evidence/*.lint.json` files.
The declaration dumps are losslessly compressed; original byte lengths and
SHA256 hashes are recorded in `COMPRESSED_EVIDENCE.json`. `REPLAY.py` reproduces
the comparison from the unchanged compiled files in `shannon_checked_release/`.
`InspectModule.lean` reads types and values;
`NormalizeLintPaths.lean` uses a narrowly scoped unsafe cast to the extension's
actual registered `LintEntry` type, solely in this diagnostic tool. Neither tool
is part of the mathematical formalization, and the normalized files are not
replacement proof artifacts.

No numerical search, mathematical source edit, or new mathematical proof was
performed. This identifies the cause of these particular binary differences;
it does not claim that all Lean builds are generally byte-reproducible under
arbitrary environments. Existing compiler/kernel, dependency-cache and numerical
native-evaluation trust disclosures are unchanged.

## Publication wording now supported by evidence

The recorded builds have matching source, theorem types, axiom dependencies,
and matching constant proof/definition values in the five investigated modules.
Seven of twelve compiled `.olean` files are byte-identical. The other five differ
because Lean persists absolute source paths in its linter-warning metadata;
normalizing only those filename fields in separate diagnostic copies makes all
five pairs byte-identical. One longer filename also changes eight-byte object
alignment in `DAG.olean`. Original artifacts and sealed packages are preserved.

## Reproduce or verify the diagnostic record

Verify the recorded data and its bindings to the unchanged sealed artifacts:

```sh
python3 -B diagnostics/olean-paths-2026-09-09/VERIFY.py
```

Replay the byte-level diagnosis with the pinned Lean 4.32.2 toolchain, writing
only to a new directory outside this repository:

```sh
python3 -B diagnostics/olean-paths-2026-09-09/REPLAY.py \
  --toolchain-bin /absolute/path/to/lean-4.32.2/bin \
  --output /absolute/path/to/new-diagnostic-run
```

The packaged replay was also run successfully against the sealed artifacts;
its command/result receipt is in `evidence/PORTABLE_REPLAY_RESULT.json`.

This reads existing proof artifacts and compares diagnostic copies. It does
not rebuild or modify the mathematical development. No normalized `.olean`
files are published as replacement certificates. The original v0.5.0 hashes
remain authoritative.

This diagnosis covers only the five differing files in v0.5.0. The separate
historical R7/v0.4.0 binary comparison has not been investigated here.
