# Consolidation review addendum — 9 September 2026

This is the clarified standalone publication review for v0.5.0. It incorporates
Matthew's approved prose clarifications while preserving the
[original archived review](../shannon_checked_release/MATHEMATICAL_REVIEW.md)
and every sealed package unchanged. The v0.5.0 tag still identifies commit
`dfaef37e60e55c55b1744d9badd1f26c5364c7d5`. No mathematical source, theorem,
audit result, or numerical certificate is revised by this addendum.

Author-side review by Codex, 9 September 2026. This is an AI-assisted mathematical
and compiler review, not independent human peer review or a worldwide priority
clearance. The unchanged received packages retain their original, earlier status
labels; new Lean claims belong to the derived sources and new build receipts.

The numerical capacity theorems retain disclosed inherited and new
native-evaluation dependencies. The symbolic `CellRetyping` development has no
native-evaluation dependencies; its audited axioms are limited to `propext`,
`Classical.choice`, and `Quot.sound`. Both routes retain the disclosed pinned
compiler/kernel and dependency-cache trust.

The recorded builds have matching source, theorem types, and axiom dependencies.
Seven of twelve new compiled `.olean` files are byte-identical. The subsequent
[binary diagnosis](../diagnostics/olean-paths-2026-09-09/README.md) established that
the other five differ because Lean persists absolute source filenames in its
linter-warning metadata. Normalizing only those filename fields in separate
diagnostic copies makes all five pairs byte-identical. All 249 declarations in
those files have matching types and proof/definition values. A one-byte-longer
filename changes eight-byte object alignment in `DAG.olean`, accounting for its
extra eight bytes. Original artifacts and sealed packages remain unchanged.
This is a diagnosis of the existing files, not a new mathematical audit or a
claim that arbitrary Lean builds are byte-reproducible.

## Numerical constructions

| Result | Physical dimension | Certified capacity lower bound | Strict comparison proved |
|---|---:|---:|---|
| C11 R9 | 198 | 5.295515084805001 | Matching R6 d198 construction |
| C11 R9 | 213 | 5.295524149098711 | Matching R6 d213 construction |
| C11 R10 | 213 | 5.295526013632343 | R6 d213 and R9 d213 constructions |
| C13 R8 | 522 | 6.302927046770772 | Full original BPZ C13 cardinality, at the same dimension |

Each derived numerical module proves a closed existence statement for an actual
finite independent set in the stated strong power of Mathlib's cycle graph,
its exact integer cardinality, a capacity lower bound, and an exact rational
bracket around the constructed root. The upper bracket endpoint is not an upper
bound on the unknown Shannon capacity. R9 d198 does not exceed the previously
published R6 d213 root and should not be advertised as that numerical record.

The C11 follow-ons import the frozen R6 typed base and all child constructions
unchanged. Only terminal word lists change. R10 uses fewer terminal words than
R9, but their exact sum of product weights is larger; word count alone is not
the objective. The numerical gain is not evidence that canonical retyping drove
the improvement. The R9 experiments attribute most of the improvement to paired
terminal exchanges, a standard weighted-code optimization idea.

C13 uses actual unions of BPZ syndrome fibres, not an assumed vector of weights.
`C13R8Base` defines each cell as `BaseC13.Pre` of an explicit syndrome list,
proves independence and required pairwise separation in `BaseC13.G6`, and proves
cardinalities using BPZ's 169-point fibre theorem. The full typed DAG is then
transported from 87 six-dimensional blocks to `cycleGraph 13` in dimension 522.
This completes the ordinary typed-certificate route. The new Lean sources do
not additionally identify each base mask with an exact physical neighbourhood;
that finer interpretation remains checked by both finite Python implementations
and explained in the received proof. It is not needed as an assumption in any
of the closed capacity theorems.

## General canonical retyping

The new `CellRetyping` development treats arbitrary finite coarse alphabets,
arbitrary finite coordinate sets, and different finite input alphabets at
different coordinates. The input separation predicates are symmetric and
irreflexive, with the stated within-row and coarse cross-row admissibility
conditions. It permits empty alphabets and empty coordinate sets.
Its normalized output types and separation relation are the accepted R7 types.

The core hypothesis is ordinary within-row and coarse cross-row admissibility.
Refined output admissibility is proved, not assumed. The canonical mask records
all coarse rows containing an input word with no separating coordinate. The
formalization proves normalization and retention of every generator uniquely
within its coarse label, exact dependent-product set and sum-of-products
semantics, and avoidance of a whole coarse output family whenever its bit is
absent. A generator may legitimately occur under different coarse labels.

For sharpness, the child graph on each input alphabet joins two distinct letters
exactly when their separation predicate is false. Singleton child sets realize
the specified relation. In their product, actual conflict is exactly symbolic
conflict. Thus one canonical realization witnesses every required mask bit.
The formal proof establishes both soundness of all containing masks in every
realization and necessity of containment even on this canonical realization.
This is least inclusion relative to the fixed input relations and generator
cells. It is not a minimal-alphabet theorem, a claim of exact physical masks in
C11, or an optimality theorem for constructions or capacity.

For an existing refined substitution, forgetting its masks yields an admissible
coarse table. Tightening retains every generator uniquely within its coarse
label and preserves the actual coarse sets/counts, only removes possible-conflict
bits, and is idempotent. Guarded additions protect both the target and every
required coarse neighbour; their exact physical gain is proved. Retyping occurs after the addition, so
masks are recomputed against the complete new rows. Arbitrary deletion preserves
admissibility; set/count preservation additionally requires an actual zero
factor for every deleted rectangle. Retyping after such pruning preserves the
coarse sets.

A direct bridge makes the result an actual BPZ `Subst` in the same refined
alphabet. Separate finite recipe and well-founded DAG proofs establish actual
strong-power realizations and exact weights, adding dimensions over coordinate
occurrences. Shared children still consume separate coordinate blocks. This
avoids accidentally applying the R7 coarse compiler to an already refined
alphabet, which would introduce another layer of types.

All new symbolic declarations are audited to exclude native-evaluation axioms,
new mathematical axioms, unsafe declarations, and placeholders. Kernel-checked
examples cover the necessity of a witnessed bit and the singleton empty product.
Neither the Python compiler nor a search heuristic is formally verified.

## R10 diagnostic arguments

I find the supplied arguments sound within their explicitly fixed models.
Both normal and optimized Python replays agree, including exact rational LDL
and integer Bareiss checks, direct conflict recurrence replay, and negative
controls. These diagnostics retain an exact finite-certificate and written-proof
status. Formalizing the new R10 lower construction does not make its rational
matrix or optimization statements Lean theorems.

For the PSD certificate, write each factor matrix as `B_i = J_i + C_i`, with
`C_i` positive definite and hence positive semidefinite. The expansion of the
tensor product minus the all-ones matrix is a sum of tensor products of positive
semidefinite matrices. Restriction to an admissible terminal code eliminates
all off-diagonal entries. Testing the remaining PSD inequality on the vector
of positive cell weights gives `U W - W² >= 0`, hence `W <= U`; the empty code
is immediate. Off-diagonal entries not constrained to zero by a certified
separation may be negative. Certified separated pairs still have zero entries.
Neither numerical solver optimality nor floating eigenvalues are needed. All
53 rational LDL pivots and all 53 scaled leading principal minors are strictly
positive.

This proves a constructed-root ceiling below **5.296352308028325** for terminal
codes selected from the fixed 30,184 positive whole cells under the fixed
symbolic predicate. The earlier clique cover is valid but weaker. Neither
certificate bounds `Theta(C11)` or arbitrary internal constructions.

Exact actual conflict propagation adds just two final child separations:
types 47/54 at n19 and 14/51 at n30. The recurrence is exact because conflict
witnesses in independent coordinate blocks can be chosen separately, and
conflict between unions is an existential statement over their generators.
It remains valid when different coarse families overlap.

Every newly permitted pair touches an exceptional word whose third coordinate
is 54 or fourth coordinate is 51. Deleting those 4,158 candidates takes an
exact-relation feasible code back to a symbolically feasible code. If `F` and
`F+` are the two unknown maximum weights and `A` is the total exceptional weight,
then `0 <= F+ - F <= A`. With the independently certified R9 incumbent `N0 <= F`,
monotonicity and concavity of the 213th root bound the difference between the
two optimal roots by `N0^(1/213) A / (213 N0) < 2.1e-7`.

That is a difference between unknown optima, not an upper bound on improvement
over the heuristic incumbent. Combining the PSD budget and exceptional weight
gives a fixed actual-whole-cell ceiling below **5.296352509823009**. A gap of
roughly 8.26e-4 remains above the R10 incumbent, so this does not prove saturation
or rule out another 1e-4 improvement inside the original terminal model. The
180-second global MIP timeout is inconclusive, not an UNSAT or optimality result.

## Publication treatment

Use one consolidated versioned GitHub update with clearly separate numerical,
general-method, and fixed-model diagnostic statements. Keep all earlier release
tags and sealed packages unchanged. Update the public C11 entry coherently to
the R10 bound and dimension, with the version history and checked-source link;
do not change only its decimal while leaving the R3 construction description.
Offer C13 as a distinct numerical quantity. Present R7 and canonical retyping as
methods, not additional numerical steps in the C11 progression.

Classification: **AI co-developed**. Models: **OpenAI's Astra 6 Pro** and
**Codex GPT-6 Astra Extra-High**. No independent external endorsement or new
worldwide priority claim is inferred from this review. Routine numerical search
is parked after the completed diagnostic sprint. At the time of this addendum,
Codex has not sent the v0.5.0 curator update or any new submission arising from
this consolidation; Matthew’s earlier submissions are unaffected.

The public presentation retains three distinct contributions:

| Contribution | Public treatment |
|---|---|
| C11 and C13 lower constructions | Numerical results with exact certificates and disclosed Lean trust |
| R7 and canonical retyping | General methods with information-relative scope |
| R10 ceilings and refinement-gain limit | Fixed-model diagnostics, not capacity upper bounds |
