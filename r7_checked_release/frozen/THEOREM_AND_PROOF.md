# Uniform avoidance-profile compilation

**R7 working theorem, 8 September 2026.** Complete written argument and finite
regression evidence; **not Lean-checked, not externally reviewed, and not a
priority-cleared novelty claim**. No new numerical Shannon-capacity bound is
claimed here. The accepted R5/R6 constructions and their Lean returns are not
modified.

## 1. The change in obligation

R6's concrete 58-letter tables have been checked individually. This note proves
at the written-proof level that the compiler always produces an admissible
ordinary substitution, for arbitrary finite alphabets and admissible input
recipes. The compiled table's admissibility is a **conclusion**, not a premise.
The compiler used for this theorem enumerates **all normalized types**. It does
not inspect a graph, weights, seeds, or which types happen to be nonempty.

The target is a uniform compiler-correctness and preservation theorem inside
BPZ's generic finite-alphabet framework. It is not a replacement for BPZ's
product theorem, a solution of Tandon's general two-sided problem, or a theorem
that every augmentation must improve a bound.

## 2. Definitions

Let A be a finite alphabet of size r, with a symmetric irreflexive relation
s(a,b), called coarse separation. An admissible arity-q substitution is a
family of finite sets T_b contained in A^q such that:

* distinct words in a single T_b have s-separated letters in some coordinate;
* if s(b,c), every word in T_b and every word in T_c have s-separated letters
  in some coordinate.

Let E be a finite code in A^q: any two distinct E-words have s-separated letters
in some coordinate. Fix a target a in A. E may be empty. Arity zero is allowed;
empty tuples and empty products have their usual meanings.

Write N_s(b)={c:s(b,c)}. The normalized type alphabet is

\[
\widehat A=\{(b,m):m\subseteq A,\ b\in m,\ m\cap N_s(b)=\varnothing\}.
\]

A type stores a family label and a conservative possible-conflict mask. Define

\[
(b,m)\widehat\perp(c,n)
\iff (b=c\text{ and }m\ne n)\ \lor\ c\notin m\ \lor\ b\notin n.\tag{1}
\]

This relation is symmetric. It is irreflexive because b belongs to m.
Every coarse separation is lifted: if s(b,c), every normalized b-type and
c-type are separated by (1).

For a typed word z=((b_i,m_i)) in the q-fold product of this alphabet, let its
underlying coarse word be lab(z)=(b_i). Define

\[
F(z)=\Phi_T(m_1,\ldots,m_q)
=\{c:\exists u\in T_c\ \forall i,\ u_i\in m_i\}.\tag{2}
\]

The protected labels are R_a={a} union N_s(a). For an old output in family b,
let

\[
U_b(m)=
\begin{cases}
m,&b=a\text{ or }s(b,a),\\
m\cup\{a\},&\text{otherwise}.
\end{cases}\tag{3}
\]

The **full compiled substitution** consists of the following tagged typed
words:

**Old branch.** For every b and every z with lab(z) in T_b, assign z to output
(b,U_b(F(z))).

**Extension branch.** For every z with lab(z) in E and F(z) disjoint from R_a,
assign z to output (a,F(z) union {a}).

An ordinary, unaugmented compile is obtained by omitting the extension branch
and using the identity update instead of (3). These are different choices:
an augmentation with empty E may still conservatively relabel old masks, but
leaves the underlying coarse sets and cardinalities unchanged.

All normalized input types are included. There is no support pruning in this
definition. Repeated tagged generators do not contribute multiplicity.
The proof below also shows that there is no duplicate generator within one
output row, so the explicit sum-of-products formula has no hidden overcount.

## 3. The uniform compilation theorem

**Theorem.** For every finite (A,s), every arity q, every admissible T, every
pairwise-separated E, and every target a, the preceding full compilation is an
admissible substitution on (widehat A, widehat perpendicular).
The unaugmented compilation is also admissible.

### 3.1 Every output descriptor is normalized

Consider an old typed word z whose underlying word t lies in T_b. Since each
input mask contains its own label, t witnesses b in F(z). If s(b,c), then for
every u in T_c, admissibility gives an i with s(t_i,u_i). Normalization of the
input mask m_i gives u_i not in m_i. Thus c is absent from F(z). Therefore
(b,F(z)) is normalized.

If the update inserts a, it does so only when a differs from b and is not a
separation neighbour of b. Normalization is preserved.

For an extension word the filter excludes a and all its separation neighbours
from F(z). Adding a creates a normalized a-type.

### 3.2 The nonseparation lemma

If two typed words z=((b_i,m_i)) and w=((c_i,n_i)) have **no** refined-separating
coordinate, then, for every i,

\[
c_i\in m_i,\qquad b_i\in n_i,
\qquad b_i=c_i\Longrightarrow m_i=n_i.\tag{4}
\]

This is just the negation of (1), coordinate by coordinate.

In particular, whenever lab(z) belongs to T_b, (4) implies

\[
b\in F(w).\tag{5}
\]

Any coarse separating coordinate would also be a refined separating
coordinate. Thus nonseparated typed words have nonseparated coarse projections.

We use (4) and (5) to prove both within-row and cross-row admissibility by
contraposition. In a within-row check the two input words must be distinct;
in a cross-row check the output types must be separated.

### 3.3 Two old words

Let old words z,w be tagged by output family labels b,c. If they have no
refined-separating coordinate, (5) gives

\[
c\in F(z)\subseteq U_b(F(z)),\qquad
b\in F(w)\subseteq U_c(F(w)).\tag{6}
\]

If b differs from c, (6) excludes both missing-label alternatives in (1), and
the same-label alternative does not apply. The output types are not separated.

If b=c, admissibility of T_b forces lab(z)=lab(w), since otherwise those two
coarse words have a separating coordinate. Now (4) forces equality of every
input mask, hence z=w. Their assigned masks and output types are also equal.

Consequently distinct old words in one output row are separated, and any old
words in separated output rows are separated.

### 3.4 One old and one extension word

Let z be an old word in coarse output family b and w a selected extension word
in target a. Suppose they have no refined-separating coordinate. By (5),

\[
b\in F(w).\tag{7}
\]

The extension filter requires F(w) disjoint from R_a. Hence b is neither a
nor a neighbour of a. The old-mask update therefore inserts a into U_b(F(z)).
The new word's assigned mask F(w) union {a} contains b by (7). These are distinct
family labels with both cross labels present, so their output types are not
refined-separated.

They also cannot belong to the same output family: b=a would contradict the
filter and (7). In particular the old and extension branches cannot generate
the same typed input word within the target row. Equality would imply no
separating coordinate and hence the same contradiction.

### 3.5 Two extension words

Both are assigned to family a. If their underlying E-words differ, E provides
a coarse, and therefore refined, separating coordinate. If their underlying
words agree and there is no separating coordinate, (4) forces equality of all
input masks. The two typed words coincide and receive the same output mask.

Thus distinct extension words in one output row are separated, and extension
words assigned different a-masks are separated as required by (1).

### 3.6 Conclusion

The three cases cover every pair of tagged generators. They establish both
admissibility clauses. Normalization was proved in 3.1. Within-row duplicates
are impossible: an old generator is determined by its typed input and output
family, an extension generator by its typed input, and old/new collisions in
the target were excluded in 3.4. The unaugmented case uses only 3.1–3.3 with
the identity update. This proves the theorem. QED.

## 4. Realization and arbitrary-graph preservation

Let G be any finite simple graph and confusability mean equality or adjacency.
Suppose coarse independent families P_b are partitioned into typed sets
Q_(b,m), with the normalized descriptors above, satisfying

\[
x\in Q_{(b,m)},\ c\notin m
\Longrightarrow\forall y\in P_c,\ \neg\operatorname{conflict}_G(x,y).\tag{8}
\]

The typed sets realize the refined separation relation (1). Different masks
within one independent family are disjoint, so they are separated. Either
missing cross label gives separation by (8).

Conversely, **any** realization of (widehat A, widehat perpendicular) determines
a valid coarse profile by P_b=union_m Q_(b,m). The union is independent, and its
pieces are disjoint because different b-masks are separated by (1). Coarse
neighbours are separated since their normalized types are. If c is absent
from m, (1) separates Q_(b,m) from every c-type, establishing (8). This direction
does not assume global disjointness between different coarse families.

Apply the compilation theorem to such realizations in arbitrary child graphs
G_i. BPZ's ordinary Cartesian-product argument gives independent output typed
families, all required separations, and exact output weights

\[
\widehat w'_{(b,m)}
=\sum_{z\in\widehat T_{(b,m)}}\prod_i\widehat w^{(i)}_{z_i}.\tag{9}
\]

For strong powers of a common graph, the dimensions add under concatenation.
Grouping output types by their coarse labels gives the ordinary T-output,
with precisely the selected safe extension cells added to target a. The
assignment of masks is exactly (2)–(3). Therefore ordinary propagation,
filtered augmentation, conservative updating, and all typed counts have the
claimed set-theoretic meaning for arbitrary finite child graphs.

The old target and the added set are disjoint: the filter certifies avoidance
of the whole old target, and conflict includes equality. Distinct E-words are
separated and the type cells within a word partition it. Hence the exact gain
is

\[
\gamma=\sum_{t\in E}\sum_{\Phi_T(m_i)\cap R_a=\varnothing}
\prod_i |Q^{(i)}_{(t_i,m_i)}|.\tag{10}
\]

There is no claim that present mask bits are actual conflict witnesses.
After widening, masks are in general strict supersets of the true conflict
neighbourhoods.

## 5. Iteration, state size, and certified pruning

Since every output is again a realization of the **same fixed refined
alphabet**, it can be used as an input to another compiled node. Induction on
a finite well-founded construction DAG proves preservation for any finite
recipe of these operations. DAG sharing is memoization of a realization;
using a child twice in one product still consumes two coordinate blocks.
A terminal coarse code expands to all of its typed words and is a refined
code: different coarse words are separated, and different refinements of the
same coarse word differ in a type of the same family in some coordinate.

For b in A, a normalized mask is {b} union an arbitrary subset of
A minus ({b} union N_s(b)). Thus

\[
|\widehat A|=\sum_{b\in A}2^{r-1-\deg_s(b)}.\tag{11}
\]

For BPZ's seven-letter relation this is 8+2+8+8+16+8+8=58. This bounds the
number of counter positions, **not** total runtime, integer bit length, number
of product words, or search complexity.

An implementation can omit a typed word with an empty child type, but this is
a **specialization** of the universal table. Deleting words preserves
admissibility. If the deleted word has a child of proved cardinality zero,
its Cartesian rectangle is empty and its weight product is zero. Deletion
therefore preserves all output sets and counts. Without that emptiness proof,
deletion preserves admissibility but need not preserve the construction or
its cardinality. This is the precise support-pruning boundary.

The delivered finite correspondence test reconstructs the actual base profile
from the frozen C11 vertices, evaluates the full universal rules, and checks
that support pruning yields exactly the R6 literal tables, at every node.
It is not a formal proof of this specialization lemma.

## 6. Why the conservative update is load-bearing

Use a two-vertex graph with no edges, coarse families B={x}, N={y}, and an
empty declared coarse separation relation. Their exact masks are {B} and
{N}. Use the identity substitution and extend B by the safe point y from N.
The coarse output B={x,y}, N={y} is valid: overlapping coarse families are
allowed when no separation is declared.

Leaving y's old N-mask equal to {N} now falsely says that y avoids B, although
y belongs to B and is confusable with itself. It would also force a false
separation between the old N-type and the new B-type in (1). Inserting B into
the old N-mask fixes exactly this defect. This example needs no graph edge;
forgetting self-confusability alone makes the stale-mask update invalid.

The negative tests also deliberately omit target protection, neighbour
protection, or the new point's self-label, and deliberately allow a
nonseparated extension code. Each defective compiler is rejected.

## 7. Evidence, limits, and next formalization

The tests exhaust the stated small (alphabet,arity) classes only. They are
regression evidence, not an exhaustive proof of the theorem for arbitrary
finite alphabets. Randomized tests are similarly bounded. Full 58-letter
checks include types not realized by the current seed; this removes a
particular support-dependent loophole, not every possible implementation bug.

The universal theorem's next formalization should prove (1)–(11) symbolically.
The resulting `Subst` must be constructed from only the coarse admissibility,
extension-code separation, and normalization definitions. Do not insert an
assumption that the compiled table passes an external checker. Do not replace
the universal quantifiers by the current eleven numerical test fixtures.

BPZ's `Layered.lean` already supports arbitrary finite alphabets and admissible
substitutions. Their framework and the R6 source data retain their original
attribution. R7's contribution under review is the uniform refinement compiler
and its preservation theorem, not generic product separation or a claim to
express constructions outside BPZ.
