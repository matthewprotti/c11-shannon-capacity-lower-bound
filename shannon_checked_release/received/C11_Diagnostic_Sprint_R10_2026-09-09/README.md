# R10: a bounded Shannon diagnostic sprint

Three exact finite outputs, each supported by a written proof and standard-library replay:

1. A terminal-only construction in dimension 213 with root at least **5.295526013632343**, above the full R9 root. This is not yet a new Lean-checked result.
2. A rational positive-semidefinite upper certificate placing **every admissible fixed-symbolic terminal code** below **5.296352308028325**. This is NOT an upper bound on Shannon capacity.
3. An exact realized-conflict calculation showing that replacing the fixed terminal separation predicate by all actual whole-cell separations can increase its unknown optimum root by **less than 2.1e-7**. The resulting enlarged fixed model is still below **5.296352509823009**.

The 1e-4 additional-root target was not met. There was no exponent-compression search and no claimed optimality. The recommended disposition is to park routine numerical refinement, not declare Shannon capacity exhausted.

## Read and replay

Read `PROOF.md`, `SEARCH_LEDGER.md`, and `evidence/METRICS.json`. The numerical data are in `certificates/`.

```sh
python3 -B VERIFY.py --self-test --manifest
python3 -O -B VERIFY.py --self-test --manifest
```

Expected status: `PASS_C11_R10_FINITE_DIAGNOSTIC_CERTIFICATES`.
The verifier needs only Python's standard library. It neither imports the search scripts nor trusts their optimizer statuses. It proves positivity of four rational matrices with two exact algebra implementations, checks all finite table/graph premises, and reconstructs the new lower certificate by two implementations.

`evidence/VERIFICATION_NORMAL.json` and `VERIFICATION_OPTIMIZED.json` are pre-seal mathematical replays; their manifest-count field is null because the final manifest was added afterwards. A separate release receipt records fresh-extraction replay with manifest checking.

The embedded R9 archive and original uploaded R8/R7 archives are preserved unchanged. Nothing was published or sent to Codex by this sprint.

## Search versus verification

Search used SciPy 1.17.0's bundled HiGHS and floating-point ordering/objectives. All adopted changes were re-evaluated with exact integer cardinalities and checked for literal compatibility. No MILP optimality or dual objective is an acceptance premise. The matrix search used a local NumPy log-determinant barrier; its rationalized output is checked exactly. The delivered source documents search experiments, not a proof that their bounded heuristics find the optimum.

This package is a new finite-certificate and written-proof checkpoint, not an independent external referee report or a Lean compilation receipt. No new global priority claim is made.
