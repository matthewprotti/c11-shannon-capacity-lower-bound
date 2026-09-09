# A bounded avoidance-profile refinement of the BPZ construction

Date: 8 September 2026. Status: written general proof and exact finite certificates;
not a new Lean build, external adversarial review, or priority clearance.

## Scope and attribution

BPZ's **generic** `Layered.lean` works with an arbitrary finite alphabet and a
separation relation. It already allows different admissible substitutions and
heterogeneous child dimensions. Nothing here supersedes that general theorem.
The refinement replaces the **particular seven-size abstraction** used in our
R3–R5 searches by a bounded, richer state. It remembers certified avoidance of
other families, permits filtered product subsets, and remains closed under
further composition by conservatively updating the avoidance information.

We also compile the resulting certificates back into ordinary BPZ-style
substitutions on **58 letters**. Thus the finite constructions can be checked
without trusting the new profile recurrence: the third checker verifies the
literal refined separation tables and their weights directly. A claim that
these constructions exceed the expressive power of BPZ's arbitrary-alphabet
formalism would be false.

The seed sets, private pairs, seven-family coarse separation relation, original
substitution tables, assembly DAGs and dimensions are unchanged from R5. All
new points enter through the augmentation primitive below. The underlying
strong-product method and seed data retain BPZ and their seed authors' credit.
A methodological novelty claim for this refinement is proposed for review,
not established by this document.

## 1. Realizations with certified avoidance types

Let G be a finite simple graph. Write x ~c y for confusability: x=y or xy is an
edge. Let A be an alphabet of r labels, with a fixed symmetric irreflexive
separation relation perpendicular. Suppose P_a, a in A, are independent sets,
and P_a and P_b are completely nonconfusable whenever a perpendicular b.

Partition each family into disjoint types:

\[
P_a=\bigsqcup_{m\subseteq A}P_{a,m},\qquad h_a(m)=|P_{a,m}|.
\]

Require these invariants for each nonempty type:

\[
a\in m,\qquad m\cap\{b:a\perp b\}=\varnothing,
\]

and, crucially,

\[
x\in P_{a,m},\ b\notin m\quad\Longrightarrow\quad
\forall y\in P_b,\ \neg(x\sim_c y).\tag{1}
\]

A missing label is a guarantee of avoidance. A present label permits a
conflict but need not witness one. Initially one may use the exact profile
m(x)={b: x is confusable with some member of P_b}. After augmentation the
algorithm generally uses conservative supersets. Counts are always exact
cardinalities of the assigned type classes, even when some present bits are
conservative.

For an alphabet with separation degrees deg(a), there are at most

\[
\sum_{a\in A}2^{r-1-\deg(a)}\tag{2}
\]

possible nonempty counter positions. For the seven BPZ labels B,N,A,D,O,H,V
and edges BO,BH,BV,NA,ND,NO,NH,NV,AD,AH,DV this is

\[
8+2+8+8+16+8+8=\boxed{58}.
\]

This is a state-count bound, not a polynomial-time guarantee for finding the
best construction. Arity, rule size, and integer bit lengths still matter.

## 2. Product propagation theorem

Let child i supply such a realization in a graph G_i. An admissible ordinary
substitution has rows T_a of words of length q. Distinct words in one row,
and every pair of words in separated output rows, must have a separated
pair of letters in some coordinate.

For a tuple of child types m_1,...,m_q define

\[
\Phi_T(m_1,\ldots,m_q)=
\{b\in A:\exists u\in T_b\ \forall i,\ u_i\in m_i\}.\tag{3}
\]

The ordinary output family is the union of the products indexed by T_a.
Assign a product point, whose child types are m_i, the output type Phi_T(m_i).
Its exact counters are

\[
h'_a(m)=\sum_{t\in T_a}
\sum_{\Phi_T(m_1,\ldots,m_q)=m}
\prod_i h^{(i)}_{t_i}(m_i).\tag{4}
\]

**Proof.** Within one product word the child type classes form a disjoint
partition. Different product words in the same output row are completely
nonconfusable by admissibility, hence disjoint. Therefore (4) counts actual
sets exactly. Every output point has a unique decomposition within its
output family. Its own output label belongs to Phi, using its defining word.

If b is absent from Phi, every u in T_b has a coordinate i with u_i absent
from m_i. By (1), that coordinate of the point avoids the whole child family
P^{(i)}_{u_i}. It consequently avoids every point of the corresponding output
product, and therefore the entire output family P'_b. This proves (1) at
the output. For a perpendicular b, ordinary substitution admissibility and
the child normalization give precisely such an absent coordinate for every
u in T_b. The normalized mask restrictions and independence also propagate.
No exactness assertion about *present* bits was used. QED.

The theorem permits different child graphs and dimensions. When G_i is a
strong power of C11, concatenation adds the dimensions as usual.

## 3. Filtered augmentation theorem

Fix a target output family a and put

\[
R_a=\{a\}\cup\{b:a\perp b\}.\tag{5}
\]

Let E be a pairwise-separated code of input words, not necessarily a row of
T. Its full product union is an independent set. Select only its type cells
that avoid all protected output families:

\[
Q=\bigcup_{t\in E}\ \bigcup_{\Phi_T(m_1,\ldots,m_q)\cap R_a=\varnothing}
\prod_i P^{(i)}_{t_i,m_i}.\tag{6}
\]

Then replacing P'_a by P'_a union Q, with the other output families unchanged,
preserves the entire coarse realization. Its exact increase is

\[
\gamma=\sum_{t\in E}\ \sum_{\Phi_T(m_1,\ldots,m_q)\cap R_a=\varnothing}
\prod_i h^{(i)}_{t_i}(m_i).\tag{7}
\]

**Proof.** All products within one E-word partition that product into disjoint
cells; distinct E-words are separated, so Q is independent and its cells are
disjoint. By the preceding theorem every selected point avoids P'_a and every
P'_b with a perpendicular b. In particular Q is disjoint from P'_a, because
confusability includes equality. Thus (7) is an exact gain, not a lower estimate
that may double-count overlap. The new target remains independent and keeps
all required cross-separations. Other families have not changed. QED.

### Conservative update and closure under recursion

One cannot simply retain all old absence claims after enlarging P'_a. A
point in another family might acquire a new neighbour in Q. Use this update:

* Existing points of the target a retain their assigned mask.
* Existing points in a family b separated from a retain their mask: Q avoids
  that whole family.
* Every other existing point has a inserted into its mask.
* A new point of Q has a inserted into its pre-augmentation mask Phi.

These updates preserve (1). For existing points only the target family has
changed; an unknown new adjacency to it is conservatively marked possible.
For new points, all non-target families are unchanged, and Phi already
certifies every missing label. Target self-confusability is marked present.
Normalization is preserved because the filter excludes the target's separated
neighbours. Regrouping the finite counters under these deterministic mask maps
is exact.

Consequently **ordinary product propagation and filtered augmentation can be
interleaved repeatedly**, while remaining within the 58-counter state bound.
The implementation selects one augmentation at a node, then continues to later
nodes. It does not assert that exact neighbourhood profiles remain exact after
that augmentation.

## 4. Compilation into the existing generic separation theorem

Use the 58 normalized pairs (a,m) as a new alphabet. Define their separation by

\[
(a,m)\perp_*(b,n)\quad\Longleftrightarrow\quad
[a=b\text{ and }m\ne n]\ \lor\ [b\notin m]\ \lor\ [a\notin n].\tag{8}
\]

This relation is symmetric and irreflexive. The typed sets P_{a,m} realize it:
different types in the same independent family are disjoint; either missing
cross-label supplies complete avoidance by (1).

Expand each product word into its child type words, route it to its assigned
output type, and include the selected extension cells. Apply the conservative
mask relabelling where required. Empty input types may be omitted for the
particular checked realization. The resulting ordinary finite tables are
literal objects, not assumed admissible because the compiler produced them.

`typed_replay.py` checks every within-row and required cross-row pair directly
using (8). It then computes all 58 weights through the same DAG and applies the
literal typed terminal code. Its base realization is reconstructed from the
actual C11 cube vertices and checked against (8). It imports neither profile
transfer nor the filtered-augmentation algorithm.

Therefore the supplied finite consequences have a second mathematical route:
ordinary BPZ-style product-set induction on the checked 58-letter tables.
This reinforces both the proof and the proper attribution boundary: the
refinement is expressible *within* BPZ's general arbitrary-alphabet framework.

## 5. A strict information-loss witness, not an alleged novelty theorem

Take m>=2 and a graph on B={b_1,...,b_m} and N={n_1,...,n_m}, with the sole
edge b_1 n_1. Realize the two named families B,N and leave the other five
families empty. All required seven-letter separations hold. The coarse
weights are (m,m,0,0,0,0,0), and B and N are not completely separated.

Every nonempty leaf word in the seven-letter abstraction uses only B and N,
which have no separation between them. Flattening any admissible recursive
assembly into leaf words shows that its terminal code has at most one
nonempty word. Thus its bound in k copies of this graph is at most m^k.

The avoidance profiles distinguish n_2,...,n_m from n_1. The augmentation
primitive adds those m-1 safe points to B, obtaining an independent set of
size 2m-1 and product codes of size (2m-1)^k. That is the exact capacity of
this simple graph: its vertices partition into one edge-clique and 2m-2
singleton cliques, whose k-fold products give (2m-1)^k covering cliques.

For m=2 this also demonstrates identical coarse weights and *all* Boolean
family-separation tests for K_{2,2} versus the one-edge graph, although their
independence numbers are 2 and 3. Direct enumeration is in the physical tests.

This elementary example shows that larger assembly searches alone need not
recover the information erased by a fixed coarse alphabet. It does not imply
that the gap for C11 is large, and is not offered as a novel result on these
simple graphs.

## 6. A particularly small C11 witness

At R5's dimension-24 node n20 (in the d213 assembly), the inputs are n1, n17,
and the original three-dimensional base v. Target family A has protected
labels {N,A,D,H}. Consider the reference rectangle BBA.

There is exactly one retained tuple of input types:

\[
(BA,\ BA,\ BAOV),
\]

where each string denotes the labels present in its mask. The three cell
cardinalities are

\[
9,\qquad244660887,\qquad3.
\]

For the existing node table, (3) sends this tuple to the mask {B}. It therefore
avoids every protected family and yields

\[
\gamma=9\cdot244660887\cdot3=\boxed{6605843949}
\]

additional points in A, at the **same dimension**. Its assigned mask after
insertion is BA. The whole BBA rectangle is forbidden in the coarse table:
it conflicts symbolically with N:ADA, N:DAB, A:BNA, A:NAB, and A:NDA.
The finite type-cell witness is retained in `evidence/LOCAL_WITNESS.json`.
The point is the selected safe subset, not inserting a forbidden whole block.

## 7. Finite C11 consequences

The original R5 trees and their coarse substitutions are untouched. Applying
5, 6, and 7 augmentation instructions respectively gives these exact brackets:

| Dimension | R5 lower endpoint | Refined lower endpoint | Refined upper endpoint |
|---|---:|---:|---:|
| 186 | 5.295498140339058 | 5.295498536418623 | 5.295498536418624 |
| 198 | 5.295509919114478 | 5.295510441529957 | 5.295510441529958 |
| 213 | 5.295514953483263 | **5.295515544509239** | 5.295515544509240 |

For each case with exact new cardinality N_d and lower numerator a, the checks
establish a^d <= N_d*(10^15)^d < (a+1)^d, and N_d exceeds the full cardinality
of the corresponding R5 construction in the same dimension. The upper endpoint
bounds that constructed root, **not** Shannon capacity. By product-set induction,
there is an actual independent set of exactly N_d elements in C11^d, so
Theta(C11) >= N_d^(1/d). The three full integers are in the certificates.

No new exponent compression is claimed here. All three dimensions, seeds,
private pairs, original tables, and DAGs are unchanged. The strongest refined
root improves the previous strongest root by about 5.91025976e-7: a modest
numerical consequence, but obtained by changing the carried information.

## 8. Verification, limitations, and next obligation

The forward integer-mask and reverse set-of-labels replays agree at every
node and every type counter. A third independent numerical route checks the
ordinary 58-letter tables and agrees on those same counters and dimensions.
The compiler is untrusted. All generated tables are checked afresh.

Physical checks enumerate the literal six-dimensional base product on the
11^6 torus, compare all actual profiles, and check family independence. Twelve
small graph examples, including overlapping families, explicitly construct
an augmentation and a further product, testing exact counters and sound
absence claims against the physical sets. A three-vertex counterexample
shows why omitting conservative widening is unsound. These tests supplement,
not replace, the general proof above.

The general argument and finite certificates were prepared in the same
research conversation. No new independent external review or Lean build has
occurred. The literature check is bounded: the ordinary product theorem,
partitions by neighbourhood behavior, and safe set augmentation are elementary
or existing ingredients. The novelty question is the particular bounded
refinement, its synthesis procedure, and its finite consequences. No worldwide
record, 20+ rating, full two-sided Tandon extension, optimality, or expressive
superiority to arbitrary-alphabet BPZ is claimed.

The next gate is adversarial review of (1), the conservative update, (8), and
the literal base realization. Formalization can either prove the profile
calculus generally or instantiate BPZ's existing generic theorem with the
compiled 58-letter certificates. A complete graph-to-capacity build, not just
new integer inequalities, remains necessary for a Lean-checked claim.
