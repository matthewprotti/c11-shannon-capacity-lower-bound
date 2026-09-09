# R9 bounded search ledger

## Frozen objects

No changes to R8 or its C13 code were made. Work occurred in a separate local
workspace using a copy of R6. The winning d198/d213 artifacts keep all internal
R6 typed tables and child lists. `evidence/R8_FREEZE_CHECK.json` verifies the
R8 archive hash and its exposed files against the original archive.

## Original hypothesis and control

The conservative R7 update can add a target bit even when an old typed generator
is separated from every selected extension cell. A witness-sensitive update was
implemented, followed by a more general canonical retyping of each cell against
all coarse output generators. Both are safe after separate literal-table checking.

With the d213 seed, assembly and extension recipes held fixed:

| Mode | Exact-root lower endpoint |
|---|---:|
| Reproduced R6 blanket update | 5.295515544509239 |
| Witness-sensitive update | 5.295515544581902 |
| Full canonical retyping | 5.295515544581902 |

This is a genuine but extremely small gain, about 7.27e-11. It is not the source
of the headline numerical advance. A broader typed-cell addition pass gave
5.295515546931651, still a small gain. All retained control tables and their
reported intermediate histograms are checked independently by `VERIFY.py`.

## Terminal attack

The fixed R6 terminal previously expanded the selected four-letter coarse code
into 58-letter cells. The new experiment searches the actual supported typed
product universe directly. For d213 it has 30,184 candidate words; d198 has
30,030. This is not the entire physical graph's vertex set and not all possible
recursive constructions.

1. Find all candidate typed words separated from the current terminal.
2. Use 100 fixed-seed greedy/local-improvement starts to select additions.
3. Run single-candidate exchanges against all current blockers, requiring exact
   positive integer gain. Up to eight sweeps, with seed 1.
4. Search mutually separated pairs sharing blockers. Include candidates with at
   most five current blockers; retain the top 3000 by a heuristic weight/loss
   ratio. Scan overlapping-blocker pairs; adopt exact positive gains. Restore
   up to three greedy single-exchange sweeps after each pair move.

For the final d213 result, the paired phase ran 12 rounds and then 20 more.
The d198 result ran 32 rounds. These bounded runs stopped without certifying
local optimality beyond the precise scan actually completed. Tiny positive
integer gains can persist when displayed floating-point roots no longer change.

## Matched-setting comparisons do not support attributing everything to retyping

Using the same first 12 pair rounds and search settings:

| Starting representation | Root lower endpoint after terminal optimization |
|---|---:|
| Unchanged R6 internal profiles | 5.295524120594342 |
| Canonically retyped internal profiles | 5.295518490100311 |
| Retyping plus extra internal typed additions | 5.295518492074507 |

These are matched algorithm settings, NOT equal wall-clock budgets or a proof
of comparative optimality. They enter different candidate spaces/local optima.
The old internal representation won this experiment. The numerical certificate
therefore deliberately keeps it. This does not contradict local mask minimality;
that theorem does not assert global heuristic performance.

Continued original-profile terminal search yielded 5.295524149098711 at d213.
The d198 result is 5.295515084805001, below the previous strongest d213 R6 root.
No new minimum-exponent benchmark was established.

An initial retyped-control job was interrupted by a tool timeout after six
reported pair rounds and produced no adopted final certificate. It was rerun
as an isolated process and completed all 12 intended rounds; that completed
output is the retained comparison. No interrupted result is presented as complete.

## Reproducibility and file roles

`search/executed/` retains the exploratory script text as run, including its
local workspace paths. `search/` contains path-parameterized copies used by
`REPLAY_SEARCH.py`. The latter extracts the embedded R6 archive to a new directory,
repeats the winning searches, and compares both resulting integers AND the
literal terminal tables against the sealed certificates. The executed portable
replay passed; its result and stage logs are retained under `evidence/`.

Floating point is used solely to order heuristic candidates. Every accepted
change and every final comparison is exact integer arithmetic. Search code is
not imported by either finite acceptance checker.
