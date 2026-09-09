# Exact finite construction note — C11 reassembly R5

## Claim and boundary

For each of the three supplied certificates there exists an independent set
\(S_d\subseteq V(C_{11}^{\boxtimes d})\) with cardinality exactly \(N_d\), for
\(d=186,198,213\). Consequently,

\[
\Theta(C_{11})\ge N_d^{1/d}.
\]

The strongest retained consequence is

\[
\boxed{\Theta(C_{11})\ge 5.295514953483263.}
\]

This is a finite construction claim with two exact replays and the lifting
argument below. It is not a new Lean-checked theorem in this package. Nor is
it a globally priority-cleared record, an exact value of Shannon capacity,
or a solution of a general two-sided extension problem.

The underlying framework and seed data are due to BPZ and their cited seed
authors. The pinned BPZ commit is
`aa21eeb12b75b0413d3fa9fb4208b5d0bf2c4d65`.
The novelty claimed for review is the particular new finite constructions,
not a new general strong-product or substitution theorem.

## 1. Unchanged literal base

Vertices of \(C_{11}\) are labelled by \(\mathbb Z/11\mathbb Z\). Two symbols
are confusable when equal or adjacent. Two length-\(d\) words are confusable
when this holds in every coordinate. Thus distinct codewords are independent
exactly when some coordinate has cyclic distance at least two.

The frozen file specifies two 148-word independent sets in \(C_{11}^3\) and
three selected private pairs. The seven concrete families are
\(B,N,A,D,O,H,V\), with sizes

\[
(145,142,3,3,3,3,3).
\]

The separation edges are

\[
BO,\ BH,\ BV,\ NA,\ ND,\ NO,\ NH,\ NV,\ AD,\ AH,\ DV.
\]

An edge means every word in one family is nonconfusable with every word in
the other. The relation is symmetric. Each family is itself independent.
Both replays derive these facts from the literal cycle-conflict test rather
than accepting the seven sizes as an assumed realizability certificate.
The complete frozen input is byte-for-byte the R4 input, with SHA-256
`bc3f401480f2b9a878ad24faa1d98c1ad848755a0537ceff0043f12f67bf7c26`.

## 2. Product-set induction

Suppose child \(j\) realizes seven independent families \(P_{j,a}\) in
\(C_{11}^{\boxtimes d_j}\), satisfying the same designated separations.
A symbolic word \(w=w_1\cdots w_q\) denotes the Cartesian product

\[
P_w=P_{1,w_1}\times\cdots\times P_{q,w_q}.
\]

Its cardinality is \(\prod_j |P_{j,w_j}|\). This product is independent:
two different elements differ in some block, and the child family in that
block is independent. If two different symbolic words are separated in some
coordinate, then their product sets are disjoint and mutually nonconfusable.

For an output family \(a\), a literal table row \(T_a\) therefore produces

\[
P'_a=\bigcup_{w\in T_a}P_w,
\qquad
|P'_a|=\sum_{w\in T_a}\prod_j |P_{j,w_j}|.
\]

The verifier checks separation of every pair within a row and every pair
between rows whose output letters are designated separated. Thus the output
again realizes the seven-family separation system, in dimension
\(\sum_j d_j\).

The terminal table is a single pairwise-separated word list. The same
argument gives one independent set, with its cardinality exactly equal to
the sum of product cardinalities. Coordinate concatenation identifies the
product graph with \(C_{11}^{\boxtimes \sum_j d_j}\).

Repeated references to a DAG node are copies in disjoint coordinate blocks;
they do not impose equality of the choices in those blocks. Accordingly,
dimension counts leaf **occurrences**, not unique DAG nodes. The three roots
have 62, 66 and 71 base-leaf occurrences, respectively, giving dimensions
186, 198 and 213.

This establishes the existence-to-cardinality bridge. No enumeration of the
enormous terminal independent set is required, and no assumed independence
or cardinality hypothesis remains beyond the checked base and finite tables.

## 3. What changed in this search

The search changed only recursive assembly and finite substitution/terminal
tables. The seed sets, private pairs and separation system stayed fixed.

The initial three-block terminal representation concealed useful smaller
product cells. Expanding a binary child of the terminal produces a four-block
terminal code without changing the independent set or its dimension. In two
specific intermediate configurations, the expanded terminal contains 50 words.
The following replacement preserves all required separation:

\[
\{BNDH\}\quad\longrightarrow\quad\{ANDH,NNDH\}.
\]

For ordered input weight vectors \(u,v,w,z\), its cardinality gain is exactly

\[
\Delta=(u_A+u_N-u_B)\,v_N\,w_D\,z_H.
\]

Every factor is positive in both recorded intermediate instances, and all
pairs with the rest of the terminal code are checked. The new terminal has
51 words, and the coordinate count is unchanged. The separate witness
`verification/CHECK_TERMINAL_REFINEMENT.py` reconstructs both exact gains and
checks the old and new literal terminal codes. It does not assert that this
replacement is valid in every possible terminal context.

This was the useful opening, not the final full construction. Perturbing and
repairing the four-block terminal code subsequently found a 52-word code.
Re-optimizing the surrounding subtrees against that changed terminal objective
then yielded much larger improvements than the first local trade. Later
passes could prefer a 51-word terminal again: symbolic word count is not the
objective; the weighted sum of product cardinalities is.

The retained terminal word counts are 52, 51 and 51 for dimensions 186, 198
and 213. The full literal tables in the certificates control the claim.

## 4. Exact root comparisons

Write \(M_e\) for a full historical cardinality in dimension \(e\). Each new
certificate is checked against the full integers of BPZ (207), R3 (207), R4's
shorter certificate (201), and R4's stronger certificate (210). The test is

\[
N_d^e>M_e^d.
\]

This is equivalent to strict comparison of the positive constructed roots.
All three retained certificates pass against all four historical targets.
The two R4 integers are reconstructed from the preserved parent archive;
BPZ and R3 are reconstructed from their original complete recurrences.

For each displayed truncation \(a/10^{15}\), the checker establishes

\[
a^d\le N_d(10^{15})^d<(a+1)^d.
\]

The resulting upper endpoint bounds the constructed root, not Shannon
capacity. In particular, the strongest constructed root also proves the
coarser, easily readable lower bound \(\Theta(C_{11})\ge5.29551\).

## 5. Verification and trust

`INDEPENDENT_REPLAY.py` performs a fresh recursive exact replay using literal
cycle conflicts and a separately rebuilt separation relation. The unchanged
received R4 checker performs a second topological replay. The wrapper compares
every node weight and dimension between them. Search code is not imported by
either checker. No floating-point computation is used for acceptance.

Normal and optimized Python outputs agree. The 24 negative controls include
cardinality, dimension, graph, comparison-target, status, typed-metadata,
cyclic-reference, extra-node, extra-table, duplicate-word and separation
failures. This is a defined regression set, not proof that every possible
verifier implementation error has been excluded.

Both checkers and the mathematical note were prepared in the same research
conversation; this is not a new external adversarial review. No new Lean
compilation has occurred. No claim of kernel-only or native-evaluation-checked
R5 formalization is made. Prior R3 formal verification does not automatically
validate changed R5 constructions.

## 6. Boundedness

The search used several successive, bounded neighborhoods, including a
finite table library, two-level reassociation, same-dimension subtree reuse,
four-block terminal perturbations, and controlled insertion/deletion of base
blocks. It did not classify all possible recursive constructions.

Dimension 186 is the smallest dimension *found in this run* whose root beats
R4's strongest full certificate. The recorded dimension-183 incumbent beats
R3 and the shorter R4 root but remains below R4's strongest root. This is not
a nonexistence result for dimension 183 or any smaller dimension.

The 213-dimensional code is the best root retained in this run, not a proven
optimum. The general capacity problem and the broader extension questions
are not resolved by these finite improvements.

## Appendix: exact retained cardinalities

### Dimension 186

```text
N_186 = 443270157200265347115284826329865904474755713155493374073233878851201668185355198338517321290509706352279222882837542619589988350408464
```

The exact constructed-root bracket is

\[
5.295498140339058\le N_{186}^{1/186}<5.295498140339059.
\]

### Dimension 198

```text
N_198 = 215646095940880307358247576980823349483595594251592326034771350156505941167027753389393565833792562656142818333030435546482415612817144515859336
```

The exact constructed-root bracket is

\[
5.295509919114478\le N_{198}^{1/198}<5.295509919114479.
\]

### Dimension 213

```text
N_213 = 15575655426175670262980356243306221873167074980689569793363838130479999529429857666850517103134244772329978664731663687319144867678577766570404657587474324
```

The exact constructed-root bracket is

\[
5.295514953483263\le N_{213}^{1/213}<5.295514953483264.
\]

