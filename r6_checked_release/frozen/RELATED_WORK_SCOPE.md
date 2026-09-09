# Related-work and claim boundary

Primary material inspected on 8 September 2026:

* BPZ, *Lean-verified lower bounds for the Shannon capacity of odd cycles*,
  arXiv:2607.29681v1, https://arxiv.org/html/2607.29681v1 .
* BPZ repository, pinned commit
  `aa21eeb12b75b0413d3fa9fb4208b5d0bf2c4d65`, especially
  `ShannonBounds/Layered.lean` and the seven-family interface inherited in R5:
  https://github.com/spectra-research/shannon-capacity-lean .
  The freshly retrieved `Layered.lean` explicitly takes an arbitrary alphabet
  and separation relation. Its ordinary and heterogeneous product interfaces
  already allow the underlying composition mechanism used here.
* Ravi Tandon, *Strengthening Recursive Constructions for Zero-Error Shannon
  Capacity*, arXiv:2608.30273v1,
  https://arxiv.org/html/2608.30273v1 . Remark 3 retains a fixed-side separation
  hypothesis in the heterogeneous construction and leaves a two-sided
  extension requiring additional coordination for future work.

A bounded keyword search for Shannon capacity with neighborhood profiles,
recursive avoidance, and Boolean substitutions did not establish priority.
It returned insufficiently relevant material to justify a novelty clearance.
No inference of originality is drawn from those negative search results.

## Appropriate description

“A bounded avoidance-profile refinement of the seven-family BPZ search model,
with a closed conservative propagation/augmentation rule and explicit improved
C11 constructions; compiled back into BPZ's general separation framework on
58 letters.”

## Inappropriate descriptions

This is not a theorem stronger than BPZ's arbitrary-alphabet product theorem.
It is not a claim that BPZ failed to retain actual sets in their formalization.
Their abstract `Realisation` does retain sets; the limitation studied here is
the fixed seven-letter separation/weight interface used for synthesis.

The elementary partition, product, and safe-augmentation arguments by
themselves should not be marketed as new general graph theory. The precise
novelty question is whether the bounded state scheme, its conservative closure,
and the resulting efficient certificate construction add a useful distinct
method beyond existing formulations. That requires expert related-work review.
The typed compilation also makes clear that the refinement can be viewed as
a concrete richer realization inside existing BPZ infrastructure.

The result does not resolve Tandon's general two-sided extension or provide
new primary-literature status for any worldwide numerical record.
