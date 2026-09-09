# R7: a uniform avoidance-profile compiler theorem

**Status: written general proof; finite tests and exact R6 correspondence;
NOT Lean-checked or externally reviewed.** No new capacity bound.

The theorem concerns arbitrary finite separation alphabets and admissible
recipes. Its output is an admissible ordinary substitution on the normalized
profile alphabet. For BPZ's seven coarse letters that alphabet has 58 letters.
The compiler does not consult vertex data, weights, or nonempty support.

Read THEOREM_AND_PROOF.md, then CODEX_GENERAL_THEOREM_HANDOFF.md.

Replay using Python's standard library:

```sh
python3 -B VERIFY.py
python3 -O -B VERIFY.py
```

These commands do **not** run Lean and cannot establish the universal theorem
by testing. They check the release manifest, replay the precise finite scopes,
exercise the deliberate defective variants, and confirm the generic compiler
specializes exactly to the preserved R6 tables after empty-product pruning.
The verifier is non-mutating. Report output goes to stdout.

The accepted R6 numerical return has SHA256
f9255ff24766c736593e31469df82857ee038809078274cbac5ed1e09a4feeb2.
The smaller inputs/R6_FROZEN.zip is its earlier finite-construction ancestor,
not that Lean return; its pre-Lean status text remains historical.

Nothing in this package updates a public listing or changes a remote repository.
BPZ attribution and source license notices are preserved.
