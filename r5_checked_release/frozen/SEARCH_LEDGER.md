# Bounded search ledger — R5

## Frozen starting point

The unchanged R4 release replayed successfully before search, including its
13 negative controls and 90-entry manifest. Its SHA-256 is
`d5ea7d939e0e28261fb87aceed1e46353ee3c31c549056f8c49e0e6c4f5ac76c`.
The actual receipt is retained as `search/r4_replay.json`.

No source from R3 or R4 was edited. All experiments used a separate working
copy. Original main and auxiliary seeds and the three selected private pairs
remained fixed throughout this run.

## Executed progression

1. Continuing R4's last fusion search at dimensions 201 and 210 produced no
   further improvement in that same neighborhood (`run201/`, `run210/`).
2. A new two-level reassociation search considered regroupings of the same
   frontier blocks, varying both inner and outer tables. Matrix products
   ranked proposals; every adopted root change was independently recomputed
   with integers. Small improvements were found at dimensions 201 and 210.
3. Forced base-block contractions explored lower dimensions. The first
   198-dimensional incumbents were below R3. These were valid constructions,
   but not successful improvement certificates.
4. Same-dimension subtree-bank crossover improved several profiles. The first
   implementation tripped an exact cardinality-change guard because it kept
   traversal references to nodes detached after replacing an ancestor. The
   traversal was repaired to bottom-up and rerun. Failed-run files remain
   historical search records, not successful optimizer verdicts. The final
   constructions were checked without importing this search implementation.
5. A context-directed dynamic-programming beam generated small subtree
   representatives. The short run reached 9 base blocks. The longer run was
   stopped at about 180 seconds, during the 28-block stage. Stages used beam
   pruning and floating-point proposal scores; even completed beam stages are
   not exhaustive enumerations of all realizations. The longer beam's raw
   profiles, contexts and summary are retained. A later bank query at dimension
   183 gave a small improvement but did not beat R4's strongest root.
6. Expanding the terminal's binary child exposed a four-block code. The exact
   `BNDH -> {ANDH,NNDH}` refinement improved both dimensions 198 and 210.
   `evidence/TERMINAL_REFINEMENT.json` and its checker verify this step separately.
7. Five terminal perturbation batches of 600 starts each were executed:
   `fourterminal_ils198`, `fourterminal_ils210`, `ilssecond`, `ilsthird`, and
   `cheap_ils183`. The seed was 20260908 in each batch; the starting construction
   and weights differed. A start means a heuristic perturbation/repair trial,
   not a complete independent-set optimization. The first two batches found
   a 52-word terminal and opened a new useful neighborhood. The second 210
   batch improved again. The third 210 batch and the cheap 183 batch did not.
8. Reassembling the surrounding tree after those terminal changes raised the
   roots substantially. Reusing the accumulated finite table library yielded
   a dimension-210 root above 5.29551430.
9. Dimension ascent inserted one base block and optimized its surrounding
   assembly, producing the retained dimension-213 strongest root.
10. Two controlled compression runs went down to dimension 168. Their best
    points were merged by exact cardinality at each dimension. Dimension 186
    was the lowest found above the full R4 strongest root. No impossibility
    claim is made for smaller dimensions.

The adopted files are identified with hashes in `evidence/METRICS.json`.
They are `search/compress/d186.json`,
`search/compress_strong/d198.json`, and
`search/grow_strong/d213.json`.
The public certificate versions contain the same tables, graph and integers,
with tightened scope/target metadata and exact decimal brackets.

## How to interpret the recorded counts

Each search summary retains its own attempted-neighborhood and accepted-move
counts. They are not counts of distinct isomorphism classes or globally
exhausted candidates. Timing bounds, floating-point shortlists and beam
selection are discovery controls, not acceptance evidence. Only exact
literal-table replay and integer root comparisons control positive claims.

Search failures and unsuccessful perturbations were retained. No SAT/UNSAT,
optimality, uniqueness, minimum-dimension, or global record conclusion is drawn
from a heuristic stop. No solver optimality claim is used in R5.

## Stop boundary

The investigation stopped with three representative, non-dominated retained
certificates. Additional valid sampled points are recorded in METRICS; they
are not all included as release candidates. The final proof targets use
terminal arity four and substitution arities at most three. Larger terminal
arity and a broader, unrestricted construction search were not exhausted.

No new Lean build, external adversarial review, public submission, repository
push, or upstream contact was performed. The accepted/public R3 object and the
R4 handoff remain untouched.
