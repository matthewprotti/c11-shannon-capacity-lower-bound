# R10: exact fixed-model bounds and a terminal-only improvement

## 1. Frozen objects and three distinct claims

All constructions use the frozen R9 d213 internal realization, inherited from R6 and BPZ. Its ordered final children are

\[
(n_{10},n_{15},n_{19},n_{30}),\qquad (d_1,d_2,d_3,d_4)=(78,30,21,84).
\]

The active typed alphabets have sizes \((11,14,14,14)\), giving \(30,184\) positive-weight product cells. A cell is an entire Cartesian product of four independent typed sets. Its weight is the product of their exact cardinalities. A terminal code must have disjoint, mutually nonconfusable cells; overlap-based inclusion–exclusion constructions are not part of this model.

There are three separate statements:

* A new feasible terminal code increases the lower construction root to 5.295526013632343, at the same dimension.
* An upper bound applies to the optimal terminal code certified by the fixed symbolic separation relation, with the four children fixed.
* A second calculation bounds the difference between that optimum and the optimum obtained using all actual pairwise whole-cell separations, still with those four sets of cells fixed.

Neither upper bound bounds \(\Theta(C_{11})\), arbitrary BPZ constructions, alternative seeds, subcell splitting, correlated subsets, changed dimensions, or a changed recursive assembly.

## 2. The new lower certificate

`NEW_TERMINAL.json` records 1,568 distinct typed terminal words. The parent terminal had 1,591. Symbolic word count alone is not the objective: their exact product weights are summed.

Both verification paths reconstruct the unchanged actual C11-cube base, the specified typed partition, every required substitution separation, all node cardinalities and dimensions, and the final terminal separation. The induction is the original Cartesian-product argument: each product cell is independent, a separating coordinate makes different cells disjoint and nonconfusable, and their union has the sum of their product cardinalities.

Writing \(N_0\) for the full R9 integer and \(N_1\) for the new one, the verifier checks \(N_1>N_0\) and

\[
5295526013632343^{213}\le N_1(10^{15})^{213}
<5295526013632344^{213}.
\]

This proves the lower construction bound. It does not supply a new Lean build. The exact integers are preserved in the candidate and parent JSON files rather than rounded to decimals.

## 3. Weighted clique-cover control

For each factor conflict graph, the certificate gives nonnegative rational masses on cliques covering each vertex weight. An independent set meets a clique at most once, so the sum of masses is an upper bound. Taking products of factor cliques gives a cover of the full product conflict graph: clique membership and coverage tensorize. `CLIQUE_COVER.json` is repaired against the full integer weights, including any coordinates ignored by floating-point tolerances.

Its exact derived root lies in

\[
[5.301135843940013,5.301135843940014).
\]

That certificate is too loose to exclude a target of 5.3. It is a verified feasible cover, not a proof that its LP value or every possible cover is optimal.

## 4. The rational PSD certificate

For factor \(i\), let its positive weight vector be \(w_i\). The certificate supplies a positive rational budget \(U_i\) and a symmetric rational matrix \(B_i\) with

\[
(B_i)_{aa}=U_i/w_i(a),\qquad
(B_i)_{ab}=0\quad\text{for every separated pair }a\ne b,
\qquad B_i-J_i\succeq0.
\]

Here \(J_i\) is the all-ones matrix. There is no positivity requirement on off-diagonal edge entries. In fact the supplied matrices satisfy strict positive definiteness of \(B_i-J_i\), established twice: by exact rational LDL pivots and by the signs of exact integer-scaled leading principal minors using fraction-free Bareiss determinants. All 53 pivots and all 53 leading minors are positive. Floating eigenvalues are not used for acceptance.

Set \(B=\bigotimes_{i=1}^4B_i\) and \(U=\prod_iU_i\). Since each \(B_i=J_i+(B_i-J_i)\), expansion of the tensor product shows

\[
B-J\succeq0:
\]

the difference is a sum of tensor products of positive-semidefinite matrices. For two distinct words in any admissible terminal code, at least one factor pair is separated, and therefore their corresponding entry in \(B\) is zero. The terminal principal submatrix is diagonal, with diagonal entries \(U/w(u)\), and still dominates the all-ones matrix.

For a nonempty terminal code \(S\), evaluate that PSD inequality on the vector with components \(w(u)\), \(u\in S\). It yields

\[
U\sum_{u\in S}w(u)-\left(\sum_{u\in S}w(u)\right)^2\ge0,
\]

and hence \(\sum_{u\in S}w(u)\le U\). The empty case is immediate.

`FIXED_TERMINAL_UPPER.json` supplies the rational matrices and exact rational product. Integer-power comparisons establish

\[
U^{1/213}<5.296352308028325<5.3.
\]

This is a weighted theta-style certificate. The semidefinite/tensor principle is existing mathematics, not a claimed new general upper-bound theorem. We do not claim to have found an optimal SDP solution; any rational feasible certificate proves the stated bound.

## 5. Exact whole-cell conflict propagation

Let \(P_{i,a}\) denote an actual nonempty typed set at child \(i\), and let \(C_i(a,b)\) mean that some pair of points in these sets are confusable, including equality. A pair of nonempty product cells are confusable if and only if their type pairs are confusable in every coordinate: witnesses can be independently chosen and concatenated.

If output sets are unions of the product generators in rows \(T_a,T_b\), it follows that

\[
C'(a,b)\iff \exists u\in T_a,\ v\in T_b\ \forall i\ C_i(u_i,v_i).
\]

Empty product cells are removed before this existential test. The union can have overlapping generators in distinct output families; the existential conflict calculation remains valid. Existing within-family independence and cardinality are justified separately by the unchanged admissible construction.

The base matrices are derived from the actual finite C11-cube vertices. Induction makes the propagated matrices exact, not merely sound overapproximations. One implementation propagates bitsets of product-word conflicts; the receiving verifier independently uses direct quantified row-pair comparisons. Every matrix agrees.

At the four terminal children, only two additional unordered separations survive beyond the existing fixed predicate:

* child n19: types 47 and 54;
* child n30: types 14 and 51.

Type numbers refer to the complete frozen 58-letter list, not newly chosen labels. These correspond to \(H_{104}\) versus \(V_{96}\), and \(A_{68}\) versus \(V_{68}\). The exact product conflict graph loses 194,688 unordered edges.

## 6. A certified limit on the value of this exactification

Let \(F\) be the maximum terminal weight under the old symbolic predicate and \(F^+\) the maximum under the exact whole-cell conflict relation. Both optimizations are on exactly the same candidate cells and exact weights.

Delete the exceptional candidate set

\[
E=\{u:u_3=54\text{ or }u_4=51\}.
\]

Here coordinates are numbered one through four; the JSON uses zero-based indices 2 and 3. Every newly allowed pair has an endpoint in \(E\). Outside \(E\), the old and exact graphs coincide. Thus any exact-relation terminal code becomes an old-relation code on deleting its vertices in \(E\), proving

\[
0\le F^+-F\le A,\qquad A=\sum_{u\in E}w(u).
\]

There are exactly 4,158 exceptional candidates. Their *total* weight (a conservative bound, not a claim they can all coexist) is recorded in `REFINEMENT_GAIN_LIMIT.json` and verified by enumeration of all 30,184 product words. It is approximately \(8.3903437398\times10^{-6}N_0\).

Since \(F\ge N_0>0\) and \(x^{1/213}\) is increasing and concave,

\[
0\le (F^+)^{1/213}-F^{1/213}
\le (N_0+A)^{1/213}-N_0^{1/213}
\le \frac{N_0^{1/213}A}{213N_0}.
\]

The last inequality also follows directly from the binomial inequality \((1+t)^{213}\ge1+213t\). Replacing the parent root by its certified upper decimal endpoint produces a rational quantity strictly below

\[
2.1\times10^{-7}.
\]

This is a limit on the **difference between two unknown optimal values**, not the difference from our current heuristic solution. Exactifying the graph might help a heuristic find a better old-feasible solution; that algorithmic benefit is not bounded by this argument. The claim is that the additional compatibility facts themselves expand the optimum by less than this amount.

Combining \(F\le U\) with \(F^+\le F+A\) gives the slightly weaker but more inclusive fixed-model ceiling

\[
(F^+)^{1/213}\le(U+A)^{1/213}<5.296352509823009<5.3.
\]

This does not cover splitting cells or altering any internal realization. It explains why merely retaining all available pairwise whole-cell facts is not a route to the preselected 1e-4 gain on this fixed instance.

## 7. What is unresolved

The interval between the new feasible root and the fixed-model upper bound remains roughly 8.26e-4 wide. The bound does not prove saturation and does not rule out another 1e-4 terminal improvement. The global mixed-integer attempt reached its 180-second limit without a new feasible solution; it was not UNSAT and did not certify an optimality gap. Local solver statuses are numerical search information, not exact local-optimality theorems.

No smaller-exponent investigation was run, and no claim about dimension 180 or less follows. R10 adds neither a global Shannon-capacity upper bound nor a new formalization of its lower construction. The exact rational/finite checks support the written proofs and remain separate from independent external review.
