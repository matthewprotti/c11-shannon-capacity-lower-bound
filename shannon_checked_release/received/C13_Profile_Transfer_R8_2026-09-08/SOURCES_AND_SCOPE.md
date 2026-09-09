# Sources and claim boundaries

## Primary source reads in this session

BPZ, `spectra-research/shannon-capacity-lean`, pinned commit
`aa21eeb12b75b0413d3fa9fb4208b5d0bf2c4d65`:

- `README.md` on main: stated C13 baseline 6.302926729310108 in dimension 522;
  the repository was checked, not a search-result decimal alone.
- `ShannonBounds/CertC13.lean`, opening 100 lines: full baseline integer,
  initial family weights, exact symbolic schedule, and physical block multiplier 6.
- `ShannonBounds/BaseC13.lean`, lines 1–150: assembled system and cardinalities.
- `ShannonBounds/BaseC13Data.lean`: sigma and kernel description; literal Sraw,
  SXraw, SPraw, SAraw, SF0raw, SF1raw and pair representatives. The data-file Git
  blob SHA returned by the API was `87e9a19ed5426b2400f6abd5ed35286cd871fe15`.
- `ShannonBounds/BaseC13Ports.lean`, lines 1–150: both transversal definitions
  and the fact that all listed sides are false.

Canonical source entry:
https://github.com/spectra-research/shannon-capacity-lean/tree/aa21eeb12b75b0413d3fa9fb4208b5d0bf2c4d65

Related primary records checked:
https://arxiv.org/abs/2607.29681
https://arxiv.org/abs/2608.30273

The literal T2b, T3c and K3a tables are unchanged copies of the same pinned BPZ
tables previously preserved and checked in the C11 input corpus. R8 checks their
admissibility again. The exact original C13 cardinality is reproduced from them.

## Prior work and authorship

BPZ supply the underlying separation framework, base coset representation,
original C13 construction, tables and numerical benchmark, building on earlier
seed constructions attributed in their papers. The syndrome quotient is not an
R8 discovery. R7 supplies the project's general avoidance-profile compiler and
preservation theorem; R8 adds an experimental transfer and new particular output.

AI-assisted development in this session used ChatGPT under Matthew Protti's
direction for target selection, mathematical reasoning, implementation, and
finite verification. No external human referee or new Codex/Lean execution took
part in the R8 discovery run. The separate implementation paths are not separate
independent researchers.

## Novelty boundary

The test establishes a strict improvement over the named frozen C13 certificate.
Targeted searches and the live BPZ README did not supply a new comparison target
in this check. That is a bounded search result, not exhaustive priority clearance.
No claim about VibeMathed acceptance or significance is made. No new general
method theorem is asserted in R8. The positive second application is evidence
of usefulness beyond C11, not a guarantee across all cycles or inputs.

The R7 receipt is historical evidence about its own formalization. This new
C13 implementation and new certificate have their own explicit pending Lean and
external-review gates. A formally proved mathematical compiler is not, by itself,
a verified implementation of the Python program that generated these tables.
