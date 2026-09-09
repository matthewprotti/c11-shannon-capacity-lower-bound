# Later R9 formalization handoff — do not alter the in-flight R8 C13 work

R8 remains frozen and its C13 build proceeds separately. R9 contains two distinct
review targets, which must not be conflated.

## A. Concrete C11 terminal-only changes

Start from accepted R6 Lean archive SHA256
`f9255ff24766c736593e31469df82857ee038809078274cbac5ed1e09a4feeb2`.
Pin BPZ `aa21eeb12b75b0413d3fa9fb4208b5d0bf2c4d65`, Lean 4.32.2 and the already
pinned dependency versions. Keep the R6 and R8 directories unchanged.

Run `python3 -B VERIFY.py --self-test --manifest` first. The R9 numerical targets
are `certificates/C11_R9_d198.json` and `certificates/C11_R9_d213.json`.
The existing source modules are `ShannonBounds.C11R6D198`, `C11R6D213`,
`C11R6Base`, `C11R6Common`, `C11R6Tables`, and `C11R6ListChecks`.
The base, all internal realizations, and ordered children are unchanged.
Define new terminal code objects from the R9 literal word lists. Prove their
pairwise separation using the accepted list-checking bridge, then instantiate
the unchanged child realizations. Do not unnecessarily rebuild a new search or
rewrite the accepted internal mathematical source.

Required explicit theorem types for each case:

- Actual independent Finset in `strongPower (SimpleGraph.cycleGraph 11) d`.
- Exact full integer cardinality from the corresponding R9 JSON.
- Derived exact root bound and stated decimal capacity inequality.
- Strict root comparison against the matching full R6 cardinality.
- Exact integer lower/upper bracket for the constructed root.

The d198 result is not greater than the old strongest d213 R6 root. Do not insert
that false comparison. Wrong-cardinality and nonseparated-terminal probes must
fail for mathematical reasons. Retain actual closed statement types and
transitive axiom inspection, including native-evaluation dependencies inherited
from concrete finite checks. State the dependency-cache trust. Check both staged
and unstaged dependency changes. A successful R7 general build is not an R9 build.

## B. General canonical-retyping theorem (independent gate)

Review `CANONICAL_RETYPING_THEOREM.md` before writing Lean. The generic conclusion
must include refined admissibility, exact retention/semantics, and coordinate
counting, not just a Boolean test of the current C11 tables. Define Tighten on an
arbitrary admissible refined substitution by forgetting only output masks and
retagging each generator with the labels having a symbolic incompatibility
witness. Prove every new mask is contained in its old assigned mask, and prove
idempotence without changing the child relations or generator decomposition.

Prove the relative sharpness theorem with the explicit canonical child graphs:
vertices are input letters; distinct letters are adjacent iff not required
separated; singleton letter realizations witness all possible bits at once.
Its optimality is local to fixed cells and input relations, not to actual C11
neighbourhoods, alphabet size, capacity, or search outcomes. Include empty
alphabets/rows, zero arity, arbitrary finite child graphs, and justified pruning.

This core should be symbolic and should not require new native-evaluation axioms.
Do not assume the compiled table's refined admissibility. A valid input
substitution or the explicit coarse pairwise admissibility conditions are allowed
hypotheses. Keep actual Python implementation equivalence separate from the
Lean-defined transformation. No universal numerical improvement is claimed.

Neither task authorizes publishing, replacing a public submission, contacting
researchers, or changing GitHub release tags. Preserve the frozen numerical
certificate if elaboration repairs are needed.
