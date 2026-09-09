# R9: typed-terminal exchanges and canonical cell retyping

**Session date: 8 September 2026.** Research branch separate from frozen R8.
Two new exact finite C11 certificates passed two verification implementations.
No R9 Lean build, external expert endorsement, optimality, or worldwide priority
clearance is claimed. The general retyping result is a written proof for review.

| Dimension | Accepted R6 constructed root, truncated | R9 constructed root, truncated |
|---:|---:|---:|
| 198 | 5.295510441529957 | 5.295515084805001 |
| 213 | 5.295515544509239 | **5.295524149098711** |

Both winning certificates change ONLY the last, four-coordinate typed terminal
code. All internal 58-letter tables, base data, nodes, child orders, and physical
exponents are exactly the corresponding R6 data. The d198 result still lies
below the old strongest d213 R6 root; it is not a shorter construction beating
that benchmark. These are smaller/larger-exponent alternatives, not optimality
claims.

The experiment began by tightening conservative possible-conflict masks. That
produced only about 7.27e-11 improvement in the fixed d213 recipe. A separate
canonical-retyping theorem identifies the least sound masks for a fixed cell
decomposition and proves idempotence. However, the main numerical gain came
from typed terminal replacements, especially pairs of individually unprofitable
moves that share blockers. Matched-setting controls are retained rather than
crediting the new numerical gain to the retyping theorem.

## Reading order

- `PROOF.md`: numerical construction, exact comparison, and paired-exchange witness.
- `CANONICAL_RETYPING_THEOREM.md`: the general written theorem and its precise limits.
- `SEARCH_LEDGER.md`: controls, scopes, stopped searches, and causal interpretation.
- `CODEX_HANDOFF.md`: a later terminal-only formalization; do not interrupt or change R8.

## Verify

```sh
python3 -B VERIFY.py --self-test --manifest
python3 -O -B VERIFY.py --self-test --manifest
```

Expected marker: `PASS_R9_TWO_CHECKER_FINITE_CERTIFICATES_AND_RETYPING_TESTS`.
This is finite replay, NOT a Lean build. Standard library only.
The first verifier uses coordinate-neighbourhood reconstruction and bitset table
checks. The second uses the unchanged R6 direct-pair base/table checker and an
independent recursive evaluation. The source imports no optimization routine
into either acceptance path.

`REPLAY_SEARCH.py --work-dir /absolute/path/to/new-work-dir` repeats the winning
searches outside this sealed package. Fixed seeds/round counts reproduce the
exact terminal tables in the executed replay. Search arithmetic is accepted
only through the separate finite verifier; heuristic rankings use floating
point and provide no optimality proof.

## Preservation and trust

R8's archive remains SHA256
`4617612b6330a8dd3726bb3ee91b5f1dcd29177cf76b3c9cf47c29e1edcd0caf`.
Its seven exposed files also match that archive. No C13 computation or file was
modified in this R9 branch. See `evidence/R8_FREEZE_CHECK.json`.

The R6 finite ancestor is embedded unchanged. The accepted R6/R7 Lean artifacts
are referenced by hash, not reclassified as builds of R9. Compilation of the
new terminal code remains a separate gate. `LINEAGE.json` records the actual
creation time in UTC separately from the mathematical session date.

The original BPZ framework/source attribution is retained. This work was
AI co-developed with OpenAI's GPT-6 Astra Pro under Matthew Protti's direction.
No automatic claim of a new general zero-error-capacity framework is made.
