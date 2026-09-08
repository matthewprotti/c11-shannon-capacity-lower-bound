# C11 recursive reassembly — R5

8 September 2026. New exact finite constructions; R3 and R4 are preserved unchanged.

## Retained results

| Construction | Dimension | Exact 15-decimal truncation of its constructed root |
|---|---:|---:|
| Frozen BPZ | 207 | 5.295492315784620 |
| Accepted R3 | 207 | 5.295492477500681 |
| R4 shorter | 201 | 5.295493012564320 |
| R4 stronger | 210 | 5.295494464537079 |
| R5: shorter exponent | 186 | 5.295498140339058 |
| R5: balanced | 198 | 5.295509919114478 |
| R5: stronger root | 213 | 5.295514953483263 |

All three R5 roots strictly exceed **both full R4 roots**, as well as the full
BPZ and R3 roots. These are integer-power comparisons, not decimal comparisons.
The 186-dimensional code uses 15 fewer coordinates than R4's shorter code
(7.46% less), and 24 fewer than R4's stronger code (11.43% less).
The new strongest root is approximately 0.00002048894618338 above R4's best.
Its total gain over BPZ is about 139.98 times the first R3 gain, or 10.54 times
the total R4 gain. These ratios describe small numerical improvements, not
corresponding multiples of mathematical significance.

## Evidence and status

The literal seeds, private pairs and base seven-family system are unchanged.
Two separately implemented standard-library checkers agree on all 91 node
values and dimensions in the three retained certificates. One checker is the
unchanged R4 verifier; the second was written separately for R5. Normal and
optimized Python runs agree. All 24 negative controls are rejected.

The code and mathematical construction argument are available for review.
**No R5 Lean build and no external adversarial review have been performed.**
No worldwide-priority claim, exact-capacity claim, minimum-exponent claim, or
optimality claim is made. The existing R3 formalization does not transfer to R5.
The checkers were not independently authored by a new external reviewer.

## Replay

Python 3.10 or newer; standard library only:

```sh
python3 -B VERIFY.py --self-test --manifest
python3 -O -B VERIFY.py --self-test --manifest
python3 -B verification/CHECK_TERMINAL_REFINEMENT.py
```

The controlling marker is `PASS_C11_R5_TWO_CHECKER_FINITE_CERTIFICATES`.
The terminal-refinement witness has its own distinct pass marker.
Verification does not write files. A manifest is an integrity record, not a signature.

## Reading order

`PROOF.md` explains the construction, exact comparisons and four-block refinement.
`certificates/` contains complete literal-table DAGs and full integers.
`SEARCH_LEDGER.md` describes the bounded repeated-assembly search and failures.
`evidence/` contains reports, metrics, and provenance.
`CODEX_HANDOFF.md` fixes the scope for a later end-to-end Lean build.
`ancestry/` contains the unchanged R4 package, which contains the prior lineage.

Search code uses floating-point proposal rankings and NumPy/Numba. It is not
part of the mathematical trusted base. Search programs can write files and
must only be run in a scratch copy, never in a sealed verification tree.
To recreate the original layout for exploratory search, extract the R4 archive
under `search/parent/`, giving `search/parent/C11_Follow_On_Search_R4_2026-09-08/`.
Recorded absolute working paths are historical provenance, not portable commands.
The exact literal certificates, not bit-for-bit reproduction of timing-limited
heuristic runs, are the proof evidence.

Fewer coordinates do not establish a faster Lean build or a smaller formal
proof. No such performance claim is made.
