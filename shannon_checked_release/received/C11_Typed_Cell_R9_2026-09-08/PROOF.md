# R9 finite construction and paired terminal exchange

**Status:** exact finite certificates checked by two implementations; not yet
Lean-checked as R9 and not externally reviewed. The original R8 C13 work is
unchanged. This note does not assert global priority or optimality.

## 1. Frozen base and unchanged recursion

Use the accepted R6 C11 base, with words in the cube encoded as
x0 + 11 x1 + 121 x2. Two vertices are confusable precisely when their differences
in every coordinate belong to {0,1,-1} modulo 11; equality is included.
The literal 148-element sets I and X and the three private pairs are in
`inputs/FROZEN_INPUTS.json`. Writing V for the parents and H for the alternatives,
define A and D as the footprints of V and H in X. The seven independent families
are I\V, X\(A union D), A, D, V, H, V, labelled B,N,A,D,O,H,V.
Their eleven prescribed separation pairs are
BO, BH, BV, NA, ND, NO, NH, NV, AD, AH, DV.
The literal base checker verifies independence, private pairs, footprints, and
all required type separations directly in the cube.

For each vertex in family a, record the labels of all coarse families with which
it is confusable. Partitioning by those exact base masks yields the same 58-letter
realization as R6. Later masks may be conservative. The refined separation is

  (a,m) apart (b,n) iff
  (a=b and m differs from n) or b is absent from m or a is absent from n.

Both R9 winning certificates retain EVERY R6 internal substitution table and
ordered child list literally. The d198 certificate uses the 30-table, 31-node
R6 construction; the d213 certificate uses its 31-table, 32-node construction.
Only the terminal table is changed. The verification program rejects any other
internal-table or assembly change, not merely a change in total dimensions.

## 2. From listed product cells to an independent set

A terminal word of four refined letters denotes the Cartesian product of those
four child families. Each such rectangle is independent. Whenever two words
have a separating coordinate, their rectangles are mutually nonconfusable and
disjoint. Thus a pairwise-separated terminal word set K yields an independent
set of exact size

\[
 N=\sum_{u\in K}\prod_{i=1}^4 w_i(u_i).
\]

No global disjointness of the underlying seven or 58 families is assumed.
The actual ordered child-block dimensions add to 198 or 213, respectively.
Repeated references consume distinct coordinate blocks, as in the unchanged
R6 construction. The verifier checks every listed within-table and required
cross-table pair and replays all intermediate sizes, not only the last sum.

The new terminal codes have 1548 words for d198 and 1591 for d213. Compared with
their R6 terminals, these remove/add 367/550 and 380/601 words, respectively.
Their different sizes do not alone demonstrate improvement: product weights
are not equal.

## 3. A genuine paired improvement

For a current terminal code K and a candidate word u, let B(u) be its set of
conflicting current codewords. One can replace B(u) by u whenever
w(u) exceeds the total removed weight. For two mutually separated candidates
u,v, the correct pair gain is

\[
 \Delta=w(u)+w(v)-\sum_{z\in B(u)\cup B(v)}w(z).
\]

Equivalently it is the sum of their individual gains PLUS the shared blocker
weight. Shared blockers must be removed and charged only once.

`evidence/PAIRED_EXCHANGE_WITNESS.json` records a concrete d213 exchange.
Its two added words, written as family[mask] in the unchanged four child blocks,
are

  A[BAV] B[BA] B[BN] N[BN]
  N[BN]  B[BA] B[BN] N[BN].

They are separated in their first coordinate. Individually, the first has four
blockers and the second has three; two blockers are shared. Their individual
gains are both nonpositive, but replacing their five distinct blockers by the
two words has the strictly positive exact gain recorded in the witness.
The witness checker reconstructs both blocker sets, validates the before/after
terminal codes, and recomputes every weight. This is an instance of a standard
weighted-code exchange, not a claimed new general graph-theoretic principle.

## 4. Exact cardinalities and root brackets

The dimension-198 cardinality is

```
215687751130752410160905163126592993639447487258849695596989720693762468075180357048816041772795828075570883971110728856152981023985620088860224
```

The dimension-213 cardinality is

```
15581417495499244082365919592642781336557169190184505729531184988512265817617037617125618829671532871759899754343522415371430987488600093437366857505800109
```

Writing these N198 and N213, exact integer inequalities prove

\[
 5.295515084805001\le N198^{1/198}<5.295515084805002,
\]

\[
 5.295524149098711\le N213^{1/213}<5.295524149098712.
\]

Each endpoint a/10^15 is checked using

\[
 a^d\le N_d(10^{15})^d<(a+1)^d.
\]

Both cardinalities are strictly larger than their FULL corresponding R6
cardinalities. Consequently their roots strictly improve their respective R6
roots. The d213 certificate supports the new bound

\[
 \Theta(C_{11})\ge 5.295524149098711.
\]

The bracket's upper endpoint bounds the constructed root, not the capacity.
The d198 root remains below the old R6 d213 root. It is not a shorter witness
beating that previously strongest benchmark. No root or dimension is claimed
optimal.

## 5. Relationship to the separate retyping theorem

The initial mask-tightening experiment gives only a 7.27e-11-scale increase in
the fixed d213 construction. The stronger result above does NOT use changed
internal masks, the new canonical-retyping theorem, or modified internal tables.
It uses the already accepted R6 refined realization and a better typed terminal.
`CANONICAL_RETYPING_THEOREM.md` supplies a written, separately scoped refinement
lemma; it is not used as an unproved premise in this numerical certificate.

## 6. Verification boundary

The bitset verifier and unchanged direct-pair reference checker agree at all
63 node values across both certificates. They check 1,409,777 and 1,499,947
required table-pair obligations, respectively. Thirteen numerical/metadata
negative controls are rejected. Separately, the written retyping theorem has
16,314 ordinary finite regression cases, 440 augmentation cases, and seven
negative controls/counterexamples. Finite tests do not prove its universal claim.

The winning search was replayed from the embedded R6 ancestor using fixed seeds
and iteration limits, reproducing both exact terminal tables. This is search
reproducibility, not exhaustive search or an optimality certificate.

Lean formalization of these changed concrete terminals, and review/formalization
of the general retyping theorem, are independent pending obligations.
