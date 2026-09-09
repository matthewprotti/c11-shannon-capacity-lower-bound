# Review provenance

[C11_R6_Lean_Receipt_Review_2026-09-08.md](C11_R6_Lean_Receipt_Review_2026-09-08.md) is the unchanged automated receiving-side review supplied by Matthew Protti for the checked R6 archive. Its SHA256 is `1429628661d2fd0078009216efd0b1179c0186845ccae58d821dca6b08992bf8`.

The reviewed checked archive has SHA256 `f9255ff24766c736593e31469df82857ee038809078274cbac5ed1e09a4feeb2`. Its sealed files are preserved under `r6_checked_release/`; this review does not modify or reseal them.

The report describes additional source parsing, finite replay, lineage, evidence, and mutation checks. Its receiving runtime did not run Lean or import the compiled artifacts. It is not a human referee report, independent expert endorsement, or global priority clearance. The separate receipt-evidence archive mentioned in the report was not supplied for this publication; those additional scripts and raw results are therefore not included or newly replayed here. The original Lean build sources, logs, audits, compiled hashes, and replay gate remain available in the sealed R6 package.

## R7 receiving review

[C11_R7_Lean_Receipt_Review_2026-09-08.md](C11_R7_Lean_Receipt_Review_2026-09-08.md) is the unchanged AI receiving review supplied by Matthew Protti. Its SHA256 is `825f2120ee0f0735bcc10b189e7baec0dd04924cd5821f93ae4a2f7a35a63a22`. It reviews the checked R7 archive with SHA256 `cc230eeaef95f974110827d149e07d7763ce136c58dfa85f5cf7b0b4648ea5c4` and requests no mathematical or build-harness repair.

The receiving runtime did not run Lean. The report accepts the formalization on supplied compilation evidence after source-level and finite Python checks; it is not independent human expert endorsement or worldwide novelty clearance. Its separately written additional receiving scripts and raw results are not included here or replayed as part of publication. The sealed R7 package contains the author's actual fresh-build evidence and reproducibility tools. The binary differences remain disclosed without an asserted cause.

## v0.5.0 publication clarification

[The dated consolidation addendum](2026-09-09_CONSOLIDATION_REVIEW_ADDENDUM.md)
is the current standalone publication review. It makes the numerical and
symbolic trust boundaries, input-relation assumptions, retention within each
coarse label, matrix-entry wording, and v0.5.0 communication status explicit.
It reproduces the review with those approved prose clarifications; it is not
another mathematical audit or an independent expert endorsement. The original
review and all sealed packages remain unchanged.

## v0.5.0 binary diagnosis

[The compiled-file diagnosis](../diagnostics/olean-paths-2026-09-09/README.md)
resolves the five differing v0.5.0 artifacts to persisted linter-warning
filenames and their serialization alignment. It includes recorded comparisons,
compressed declaration dumps, and a portable replay against the original sealed
artifacts. It supersedes the earlier unresolved-cause wording for these five
files only; it does not revise the separate historical R7 comparison or any
mathematical claim or trust boundary.
