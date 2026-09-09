# R9: canonical, witness-sensitive cell retyping

**Status:** complete written argument for review; finite regression tests passed.
No new R9 Lean compilation, external review, or priority clearance is claimed.
This is a normalization/refinement inside BPZ's finite-separation framework,
not a stronger replacement for the generic product theorem. The author-side R7
formalization remains a separate frozen artifact.

## 1. Inputs and the information boundary

Let A be a finite coarse alphabet with symmetric irreflexive separation s.
Let J be a finite coordinate index set. Each coordinate i has a finite input
alphabet K_i with a symmetric irreflexive relation t_i. Empty alphabets, empty
rows, and J empty are permitted.

For words u,v in the dependent product of the K_i, write

\[
 u\perp_J v\iff\exists i\in J\;t_i(u_i,v_i),\qquad
 C_J(u,v)\iff\forall i\in J\;\neg t_i(u_i,v_i).
\]

Let U_a be a finite set of words for every a in A. Assume:

1. distinct words of each U_a are separated by perpendicular_J;
2. if s(a,b), every word of U_a is separated from every word of U_b.

These are ordinary within-family and coarse cross-family admissibility. They
are NOT a premise asserting that the refined compiler output is admissible.
They can be inherited from an admissible refined substitution by forgetting its
output masks, as proved in Section 4.

The symbolic possible-conflict mask of a word is

\[
 M_U(u)=\{b\in A:\exists v\in U_b\ C_J(u,v)\}.                 \tag{1}
\]

This is exact in the symbolic incompatibility graph. It need not be the exact
neighbourhood in a particular graph realization. In particular, a present bit
is NOT asserted to be a real conflict in our C11 sets.

Use the normalized profile alphabet

\[
 \widehat A=\{(a,m):a\in m\subseteq A\setminus N_s(a)\}
\]

and the R7 separation relation

\[
 (a,m)\widehat\perp(b,n)
 \iff (a=b\land m\ne n)\;\lor\;b\notin m\;\lor\;a\notin n.   \tag{2}
\]

Define the canonical output table by

\[
 \mathcal C(U)_{(a,m)}=\{u\in U_a:M_U(u)=m\}.                  \tag{3}
\]

## 2. Compilation and exact semantics theorem

**Theorem 1.** Under the assumptions above, every generated descriptor is
normalized, the table (3) is admissible for refined output separation (2), and
its generator sets partition each U_a without losses or duplication.

**Proof.** If u belongs to U_a, reflexivity of C_J gives a in M_U(u). If s(a,b),
assumption 2 says C_J(u,v) is false for every v in U_b; hence b is absent from
M_U(u). The descriptor (a,M_U(u)) is normalized.

Within a refined row, distinct words belong to the same U_a and are separated
by assumption 1. For the cross-row clause, suppose u in U_a and v in U_b are
not separated. Then b belongs to M_U(u) and a belongs to M_U(v). This excludes
both missing-label alternatives of (2). If a=b, assumption 1 forces u=v, so
the two assigned masks coincide and the same-label/different-mask alternative
is excluded too. Thus nonseparated input words never receive separated output
types. That is exactly the contrapositive of refined cross-row admissibility.
Each generator receives its unique mask (1), which proves retention and the
partition statement. QED.

**Graph semantics.** In arbitrary finite child graphs G_i let independent sets
P_i(k) realize t_i: a required separation forbids equality as well as adjacency.
Associate to u the Cartesian rectangle R_u=product_i P_i(u_i).
Each rectangle is independent in the strong product. Separated words yield
separated, and therefore disjoint, rectangles. Thus Theorem 1 and the ordinary
BPZ product argument realize the refined output tables and prove

\[
 \widehat P_{a,m}=\bigcup_{u\in U_a,\;M_U(u)=m}R_u,\qquad
 |\widehat P_{a,m}|=\sum_{u\in U_a,\;M_U(u)=m}\prod_i|P_i(u_i)|. \tag{4}
\]

Forgetting output masks recovers exactly the original coarse output sets and
cardinalities. Different coarse output families need not be disjoint. No
unproved global-disjointness condition is used.

A missing b bit in a generated type excludes every rectangle from U_b. Indeed,
for each such rectangle there is an input separating coordinate. Consequently
(4) supplies the intended avoidance invariant relative to the full coarse
output family, including all augmentation rectangles already present in U_b.

## 3. Sharpness relative to fixed generator cells

**Theorem 2.** M_U is the least universally sound possible-conflict mask for each
fixed generator rectangle when only the input separation relations and U are
known. It is least in inclusion, not merely minimum in cardinality.

**Proof of sufficiency.** This is the missing-label argument following (4).

**Proof of necessity.** For every i take G_i to have vertex set K_i, with distinct
vertices k,l adjacent exactly when t_i(k,l) is false, and let P_i(k)={k}.
These are independent singleton sets satisfying every required input separation.
Equality or adjacency is exactly the relation not t_i. Every R_u is now the
singleton {u}. Actual confusability of u and v in the product is C_J(u,v).
The actual set of coarse output families touched by u is therefore exactly
M_U(u). Every bit in (1) has a real witness in this one canonical realization.
Deleting any such bit would be unsound on that realization. QED.

This optimality is deliberately local and information-relative. It does not
assert minimum type count, the tightest masks obtainable by inspecting actual
C11 vertices, a best construction, or optimal Shannon capacity. Extra graph
structure or further cell splitting can yield information not included here.

## 4. A canonical idempotent tightener for an existing refined substitution

Suppose S is already admissible with output alphabet widehat A, and define
U_a as the union of S_(a,m) over all masks m of family a.

Different masks of the same family are refined-separated. Therefore a word
cannot occur in two such rows: the cross-row clause would require a word to
be separated from itself. Distinct words in the coarse union are separated by
either the original within-row clause or the same-family/different-mask clause.
Coarse neighbours lift to every pair of their normalized types. Hence U meets
both assumptions of Theorem 1.

Set Tighten(S)=C(U).

**Corollary 3 (precision, retention, and idempotence).** Tighten(S) is admissible,
preserves every coarse-labelled generator and every coarse realized set/count,
and, if u was tagged (a,m) in S, then M_U(u) is a subset of m. Furthermore

\[
 \operatorname{Tighten}(\operatorname{Tighten}(S))
       =\operatorname{Tighten}(S).                              \tag{5}
\]

**Proof of precision.** If b belongs to M_U(u), choose a witness v from a row
S_(b,n) with C_J(u,v). If b were absent from m, the original output types would
be separated under (2), contradicting admissibility. Thus b belongs to m.
Retention and admissibility follow from Theorem 1. Forgetting the output masks
of Tighten(S) recovers the identical U, and (1) depends only on that U and the
fixed input relations. A second application therefore makes no change. QED.

This is not merely a permutation of output letters. Generators formerly given
one mask may split among several tighter masks, and generators may also merge
into a common refined output row. The set of possible output descriptors does
not grow:

\[
 |\widehat A|=\sum_{a\in A}2^{|A|-1-\deg_s(a)}.
\]

For the fixed BPZ seven-family relation it remains 58. The computation may
retain a temporary generator-compatibility index; bounded histogram size does
not imply bounded table size or polynomial-time optimal search.

There is NO theorem here that tightening at every recursive node monotonically
improves a final searched root. Later guarded additions can change, merging
can alter available whole-cell moves, and bounded heuristics can get trapped
in different local optima. The measured R9 control illustrates that caveat.

## 5. Guarded additions in the typed alphabet

Let E be any input-typed code (not necessarily the refinement of a coarse code).
For target a protect R_a={a} union N_s(a), and select

\[
 F=\{u\in E:\forall b\in R_a\ \forall v\in U_b,\ u\perp_Jv\}.
\]

Replacing U_a by U_a union F preserves assumptions 1 and 2. All other coarse
rows are unchanged. F and U_a are disjoint: a shared word could not be separated
from itself. The exact gain is sum_(u in F) product_i |P_i(u_i)|.

Applying Theorem 1 AFTER the addition computes possible conflicts against the
new full output rows. Thus no stale mask is retained. Applied to an R7-generated
table, Corollary 3 removes only bits whose absence is now certified by all the
actual typed generator words. This can be less conservative than adding a target
bit to every member of every unprotected old family.

## 6. Iteration and support pruning

An output realizing the fixed refined alphabet can be used at the next node.
Induction on a finite well-founded recipe preserves the typed realizations;
strong-power exponents add over coordinate occurrences, including repeated
references to one child. This is the same product/transport discipline as R7.

Deleting generators preserves table admissibility. Deletion preserves actual
coarse sets and cardinalities only when each deleted rectangle is proved empty,
for example by a zero-size input factor. After such a deletion, recomputing (1)
can remove additional symbolic possibilities without invalidating actual-set
semantics. It must not silently delete positive-weight rectangles.

## 7. Executed checks and remaining gate

The reference implementation is `source/canonical_retyping.py`. Separate literal
validation and singleton-graph semantic checks cover 16,314 bounded ordinary
cases, 440 augmentation cases, empty alphabets/rows, and arity zero; seven
negative controls/counterexamples are checked. These are finite regressions,
not a proof by exhaustion of the theorem.

The next general formalization would establish Theorem 1, the exact semantics,
Corollary 3, and the canonical realization establishing Theorem 2 symbolically,
without native-evaluation axioms in the new core. No such R9 Lean build is claimed.
