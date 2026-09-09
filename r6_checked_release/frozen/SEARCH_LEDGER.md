# Bounded discovery record

## Inputs frozen

R5 archive SHA-256:
`a57b1ba556ff2d74cfa5654a6b5677299dfac5308995bb2ea2cc7aa5c329d8a3`.

The current session extracted that archive and successfully replayed its
existing verifier with self-tests and manifest. The three parent certificates,
base data, coarse tables, DAGs and dimensions were then held fixed. No new
seed, private-pair selection, tree rearrangement, dimension change, or imported
unverified literature result is responsible for the adopted R6 gains.

## Mechanism tested

Exact initial neighborhood masks were computed from the literal C11 cube.
They were propagated through each old substitution, then used to search for
safe fractions of reference rectangles at an internal node. After each adopted
augmentation, absent bits that could cease to be valid were conservatively
widened before subsequent recursion.

An initial whole-rectangle insertion/deletion diagnostic at the d213 terminal
found no positive gain in its tested class. A safe-fraction terminal diagnostic
found small positive subsets, but no such extra terminal step is used in the
retained certificates. Internal auxiliary augmentation was more valuable.

## Restricted search policy

At each iteration, examine unused internal nodes and six target families
(all except O, which is unused downstream in these parent certificates).
Enumerate all seven-letter reference words at that node's existing arity.
Count their safe filtered subsets exactly using the current type state.

For each target, seek a pairwise-separated collection of reference words with
large total safe weight. This uses 20 deterministic-seeded greedy starts and
single-insertion repairs. It is a heuristic, not an exact maximum-weight
independent-set proof. Float logarithms guide some orderings only; final
candidate counts and adoption comparisons use full integers.

Evaluate each offered augmentation by replaying the entire DAG, including
conservative effects on existing downstream augmentations. Adopt the offer
with the largest strictly positive final-cardinality improvement. Use at most
one augmentation per node and at most eight adoption rounds.

The runs adopted 5 instructions at d186, 6 at d198, and 7 at d213, then found
no positive unused-node offer under the current restricted policy. This does
not establish local or global optimality for broader profile refinements,
revisiting already-augmented nodes, alternative type updates, tree changes,
other terminal codes, new base sets, or different dimensions.

The saved histories include each adoption, exact cardinality, tested-offer
count, and extension-word list. The initial final schedules contained some
reference words whose selected type cells became empty after later changes.
A final exact pruning removed 7 such words at d186, 4 at d198, and 6 at d213.
This leaves 22, 24, and 25 nonempty reference rectangles, respectively.
All three output cardinalities and type histograms remained unchanged.

## Independent checks

The forward mask replayer was rewritten independently of the discovery
scripts. A second implementation uses frozensets and reverse-recursive
traversal, routing all labeled type tuples to output rows. Their whole node
states agree, not just the final decimal.

An untrusted compiler translates each recipe into ordinary 58-letter finite
substitution tables. A third checker validates the literal refined base
realization and every pairwise separation in those tables, and evaluates the
resulting ordinary recurrence without importing mask transfer or widening.
Its counts, dimensions, and all node states match both profile replayers.

The ordinary typed certificates contain respectively 4,424, 4,847, and 5,187
symbolic words across all nodes. Largest individual tables have 1,289, 1,365,
and 1,370 words. The refined alphabet has exactly 58 labels; the retained
profile replays use at most 14, 15, and 14 nonempty counters per output node.

The physical test explicitly constructs 12 small graph examples, including
non-separated overlapping families, then checks an augmentation and a further
product against literal graph confusability. A separate direct computation
on all 1,771,561 vertices of C11^6 checks the first binary construction's
independence and exact neighborhood-type counts.

The d186 discovery search was rerun after making paths portable and reproduced
the same full final cardinality. The d198/d213 histories preserve their original
runs; all three final constructions receive all three independent finite
replays. Search reproduction is not the proof of a finite certificate.

## Negative conclusions not established

No best-possible C11 root, minimum exponent, upper bound for the coarse C11
framework, worldwide priority, VibeMathed significance score, or full Tandon
two-sided extension is established. The elementary information-loss example
in PROOF.md is a witness about the coarse representation, not a new discovery
about the Shannon capacity of a graph with one edge.
