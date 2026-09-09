# Controlled C13 transfer: exact construction and proof

## 1. Claim and status

Let G be the ordinary cycle on 13 vertices and let confusability mean equality
or adjacency. R8 specifies an independent set in G^{boxtimes 522}, of the exact
cardinality N recorded below, proving

\[
\Theta(C_{13})\ge N^{1/522}\ge6.302927046770772.
\]

Both finite checker implementations agree. This document supplies the elementary
lifting argument. No new Lean build or independent external review is asserted.
The result is compared against the full BPZ cardinality M at commit
`aa21eeb12b75b0413d3fa9fb4208b5d0bf2c4d65`, not a rounded decimal.

## 2. The unchanged C13 base, in actual graph coordinates

Write a six-coordinate vertex as (a,b,c,d,e,f) in Z_13^6. BPZ uses

\[
\sigma(a,b,c,d,e,f)=(b-2a,d-11c,e,f-a).
\]

Each syndrome is encoded by its four base-13 digits, leading digit first.
For s=(s_0,s_1,s_2,s_3), its fibre is exactly

\[
\{(a,s_0+2a,c,s_1+11c,s_2,s_3+a):a,c\in\mathbb Z_{13}\}.
\]

It has 169 distinct elements. This formula proves surjectivity, the size of each
fibre, and that different fibres are disjoint. The kernel is the rank-two group
already identified by BPZ. No new quotient construction is claimed here.

Let D_0={-1,0,1}^6. The finite check establishes that the only offset in D_0
with zero syndrome is zero itself. Thus every fibre is an independent set.
Let Delta_0=sigma(D_0). It has 483 elements, including zero (BPZ's Delta excludes
zero and has 482 elements).

Two distinct fibres s and t have a confusable pair exactly when t-s is in Delta_0.
For necessity, apply sigma to the difference of the confusable vertices. For
sufficiency, take a suitable offset z and any x in the first fibre; then x+z is
in the second fibre and is confusable with x. In particular, either every point
of one fibre has a neighbour in the other full fibre, or none does.

All seven base families are unions of full fibres. In syndrome notation they are

\[
B=S\setminus S_P,\quad N=S_X\setminus(F_0\cup F_1),\quad
A=F_0,\quad D=F_1,\quad O=V=S_P,\quad H=S_A.
\]

The literal BPZ lists are in `inputs/BPZ_C13.json`. F_0 and F_1 are recomputed
from the parents and alternatives and checked against the stated lists.
Both independence of each family and every designated separation are checked.
The resulting weights are

\[
(B,N,A,D,O,H,V)=(61516,60502,1014,1014,1014,1014,1014).
\]

The second checker does not use quotient differences. For all 746 used syndromes,
it takes an actual six-coordinate representative and enumerates its 729 actual
torus neighbours, keeping multiplicities. It verifies that a representative has
exactly one closed-neighbourhood point in its own independent family (itself),
and none in each required separated family. Translation by the kernel preserves
both the families and the graph, so these representative checks prove the same
facts for all fibre members. It also explicitly constructs all 126,074 distinct
vertices in the 746 used fibres, verifying their cardinalities and syndromes.
This is an orbit argument, not a claim to enumerate every pair of the full torus.

## 3. Exact base profiles

Masks encode *possible conflict labels*, not graph vertices. With order BNADOHV,
the exact base histogram is

| Family | Mask labels | Count |
|---|---|---:|
| B | BN | 58136 |
| B | BND | 1521 |
| B | BNA | 1859 |
| N | BN | 60502 |
| A | BAOV | 1014 |
| D | BDH | 1014 |
| O | AOHV | 1014 |
| H | DOHV | 1014 |
| V | AOHV | 1014 |

Each histogram class is a union of full fibres and hence is an actual independent
finite set. The classes partition their own coarse family. Different coarse
families may overlap; no global disjointness assumption is used.

The normalized alphabet has 58 possible (family, mask) letters. Only 9 to 11
are nonempty at any node of this particular construction. The existence of this
small realized support is an observation about this instance, not a new universal
state-size theorem.

## 4. Original schedule and exact positive control

Let H=T2b, T=T3c, and K=K3a, using the literal BPZ tables. If w denotes the
six-dimensional base, retain exactly

\[
\begin{aligned}
a_3&=T(w,w,w),&a_{j+1}&=H(a_j,w)\quad(3\le j\le8),\\
b_2&=H(w,w),&b_{j+1}&=H(b_j,w)\quad(2\le j\le16),\\
c_{12}&=T(a_3,a_7,b_2),\\
x_{34}&=T(a_9,b_{13},c_{12}),&x_{36}&=T(a_7,b_{17},c_{12}).
\end{aligned}
\]

The terminal is K(x_34,x_36,b_17). Subscripts count six-dimensional blocks:
34+36+17=87, so its physical dimension is 522. Repeated references consume
separate coordinate blocks, even when the same symbolic node is reused.

Replaying without augmentations gives the complete integer M below, equal to
BPZ's `CertC13.M`. Thus the positive control includes the full original
cardinality, not only its number of digits or truncated root.

## 5. The only changes

At c_12 enlarge A using the guarded reference code {BAB,BBV}.
At x_34 and x_36 enlarge N using the guarded reference code

\[
\{BBA,BBH,BVB,VAB,VBH,VHB\}.
\]

Each reference code is pairwise separated in the original seven-letter relation.
It is important that a reference rectangle is not necessarily inserted in full.
Only its type cells whose propagated mask avoids the old target and all required
neighbours are retained. In the final three-node recipe, VAB and VHB have no
selected nonempty cells at the last two nodes; their contribution is exactly zero.
They are retained in the profile recipe to preserve the literal discovery output;
the typed compiler naturally omits those nonexistent supported cells.

For a substitution T and input masks m_i, propagate

\[
\Phi_T(m_1,\ldots,m_q)=\{b:\exists u\in T_b,\ u_i\in m_i\ \forall i\}.
\]

If b is absent, every output-b rectangle has a separating coordinate, so the
whole type cell avoids output family b. For target a protect
R_a={a} union {b:a is designated separated from b}. A selected extension cell
satisfies Phi_T intersection R_a = empty.

Old cells outside the target and its required neighbours acquire bit a, to avoid
stale absence claims. Selected new cells acquire their own target bit. These are
exactly the guarded augmentation and conservative-update operations used in R7.
They preserve the invariant that absence of a bit certifies whole-family
avoidance. Histogram bins retain exact cardinalities even when the masks become
conservative rather than exact neighbourhood descriptions.

The sets are independent because each type rectangle is a product of independent
sets, different reference words are separated, and selected cells avoid the old
target. Separation from all required neighbours follows from the guard. The old
target and the added cells are disjoint: self-confusability would contradict that
same guard. Consequently their cardinalities add exactly.

## 6. One inspectable witness

At c_12, take the reference word BBV and the input masks (BA,BA,AHV). The input
cell sizes are respectively

\[
183322205820,\quad17079235853279475335877211451436,\quad124754448.
\]

The propagated mask is {B}, which avoids protected {N,A,D,H}. Thus the exact
product of these three integers contributes new points to A. The entire BBV
rectangle fails the coarse test: it has symbolic blockers N:ADA, N:DBH, A:BNA,
A:NDA, and H:NBH. This exhibits a positive safe subset that the old whole-block
interface cannot certify. The literal witness and product are retained in
`evidence/LOCAL_WITNESS.json`.

## 7. Independent ordinary-table route

Treat each normalized pair (a,m) as one letter. Distinct type letters are
separated whenever they have the same coarse family but different masks, or
one type certifies avoidance of the other coarse family. This gives a fixed
58-letter symmetric irreflexive separation relation.

The untrusted compiler expands each supported product word into typed words and
assigns its output mask. Its entire output is stored in `compiled/C13_d522.json`.
It contains 27 tables and 1,804 tagged words in total. The terminal has 125 words.
The second checker directly verifies their 23,357 within-row and 56,168 required
cross-row pairs. It does not invoke Phi_T, guarded selection, or mask widening.

For every literal table, each row denotes a union of independent Cartesian
rectangles. The checked separations make the rectangles within that row pairwise
disjoint and mutually nonconfusable. Therefore the row's cardinality is exactly
the sum of products of child cardinalities. Required cross-row separations are
checked separately. Induction through the 28-node DAG, followed by the terminal
code, constructs the asserted independent set in the physical 522-dimensional
strong power. All 58-entry intermediate weight vectors agree with the profile
replay. Deterministic recompilation also reproduces the frozen typed table file.

A further arithmetic check divides the base weights by 169, replays the same
rules, and verifies at every node of physical dimension 6e that its weights are
169^e times the quotient replay. At the root the factor is 169^87. This is an
additional scaling check using BPZ's symmetry, not a new expressive framework.

## 8. Exact result

The two full integers are:

**M — frozen BPZ baseline**

```text
2296460381476588218557784714607916555821735215842235657422063709967472046388590671039445990314835453532287927129054300935809605566313640680416850619170792677088359272060919872915091855126481463077864366034595511602265113812807433166736895166001025727331303746555909789115142163380824770899805627970640032438106635377536797524856543870646748758850611538293943083007991697753785956882728113597379667638999165717627011072
```

**N — new R8 C13 construction**

```text
2296520760046177671269016219762581845035300301989793693950434078967856121219331644079823961654215868761567994845123235146387844131168723626738336411048745150267072127486335041217641086689531742900767281930283773656671394399395587955373737013991705820221965553928435109256249125264071030595813635132592862273008229715771522182506478718846045325751666889410917168900896498145167381703517151401483049658353402623180144640
```

The verifier establishes N>M. Both dimensions are 522, so N^(1/522)>M^(1/522).
For a=6302927046770772 and b=10^15, it additionally checks

\[
a^{522}\le N b^{522}<(a+1)^{522}.
\]

Thus

\[
6.302927046770772\le N^{1/522}<6.302927046770773.
\]

The upper endpoint concerns this constructed root, not the unknown capacity.
The approximate root gain is 3.1746066378701486e-7; floating point has no role
in acceptance of the inequalities.

## 9. Controlled coarse comparison and exclusions

At each of the 26 internal nodes, the control enumerates every output family and
every arity-matching product word: 17,150 pairs in total. Rectangles of zero
cardinality are not counted as positive additions; zero-cardinality old blockers
are also removed, which gives the coarse control the benefit of known emptiness.
No admissible nonempty addition exists for any of the six used families. The 250
admissible nonempty additions all target O, which occurs in no consumed coarse
word. They therefore cannot improve the unchanged terminal cardinality.

This excludes improvement in the enumerated fixed-schedule whole-block addition
neighbourhood. It does NOT establish optimality of BPZ's tables, a limitation of
arbitrary finite alphabets, an impossibility under deletion or exchange, or a
matched-budget global comparison against all reassembly searches.

R8 does not formally verify the Python compiler, does not add a new general
compiler theorem, and is not yet a Lean compilation of this C13 certificate.
A single second-cycle success is evidence of transfer, not proof of uniform
performance or guaranteed gain. Worldwide priority and external expert assessment
remain unresolved.
