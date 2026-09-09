# R8 search ledger

## Fixed starting point

Public BPZ C13 at commit `aa21eeb12b75b0413d3fa9fb4208b5d0bf2c4d65`:
six-dimensional coset-union base; 522-dimensional terminal; full baseline integer
reproduced. No seed mutation, table mutation, child permutation, reassembly,
terminal replacement, or dimension optimization was used.

C13 was selected after inspecting the C7/C13 baseline situation and the C13
coset representation. C7 has a separate stronger Tandon baseline, so merely
beating BPZ C7 would not establish improvement of that newer claim. C7, C15 and
other cycles were not experimentally benchmarked in this R8 run. The selection
is not random and the one positive result does not establish average performance.

## Executed experiments

1. Initial complete single-rectangle scout, with exact evaluation of its positive
   possibilities, produced 409 strictly improving one-node candidates. It took
   about 25.66 seconds in the recorded discovery process. This was exploratory,
   not an optimality proof and not part of an equal-wall-clock benchmark.
2. The coarse whole-block control scans all 17,150 output-family/rectangle pairs
   over the fixed internal nodes. Its 250 admissible positive additions are all
   in unused O; none enlarges a consumed family.
3. Reuse the R6 search policy: at most eight accepted-augmentation rounds,
   one augmentation per node, 20 greedy/randomized reference-code orderings per
   node/family, and exact comparisons of terminal integers. Exclude target O
   because the fixed downstream tables never consume it. No C13-specific table
   was invented and no new solver was used.
4. Round 0 considers 15 full candidate recipes and accepts x36 -> N.
   Round 1 considers 9 and accepts x34 -> N.
   Round 2 considers 3 and accepts c12 -> A.
   Round 3 has no remaining positive offer in a used family under this policy.
   STOP. This is not an exhaustive search of all extension codes or schedules.
5. A portable rerun reproduces all three selected augmentations and the full
   final integer exactly. The main optimization took roughly 1.5 seconds on
   this instance; input extraction, scouting, proof development, and independent
   verification are additional work. No comparison of total discovery time is
   claimed.
6. Compile the final profile recipe into ordinary supported 58-letter tables.
   Directly check the C13 base via physical torus neighborhoods, then every
   required literal table separation and every exact intermediate cardinality.

The safe selected pieces of reference words VAB and VHB disappear after the
upstream c12 augmentation; their final contribution is zero. The frozen recipe
retains these reference words, while its support-pruned typed output contains no
corresponding nonempty selected cells. This does not affect the result.

## Evidence files

`SCOUT_RESULT.json`, `SCOUT.log`: the preliminary scan.
`SEARCH_RESULT.json`, `SEARCH.log`: the original search and controls.
`SEARCH_PORTABLE_REPLAY.json`: a reproducible later rerun of the search policy.
`LOCAL_WITNESS.json`: one positive cell and its coarse blockers.
`VERIFICATION_NORMAL.json`, `VERIFICATION_OPTIMIZED.json`: final exact replays.

The `search/executed_*` files preserve the original, path-specific exploratory
scripts as historical records. Use top-level `SEARCH.py` for a portable rerun.
The exploratory scripts contain assertions; the release verifiers use explicit
checks and agree under Python -O.

## No-claim boundary

No fresh Lean build, external adversarial review, general speedup theorem,
positive-gain guarantee, minimum-dimension result, global search optimality, or
unqualified world-record claim is made. The publicly submitted C11 packages are
untouched. No GitHub or VibeMathed write was performed.
