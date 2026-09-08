/- Scope assertions and dependency inspection. This source is also UNBUILT. -/
import ShannonBounds.C11AuxiliaryTrade

set_option autoImplicit false
set_option pp.universes true
set_option pp.fullNames true
set_option pp.proofs false

open ShannonBounds

-- Fully stated aliases reject omitted hypotheses or a changed graph/dimension/cardinality.
theorem C11_scope_exact_set :
    ∃ S : Finset (Fin 207 → Fin 11),
      (SimpleGraph.strongPower (SimpleGraph.cycleGraph 11) 207).IsIndepSet ↑S ∧
      S.card = 705692619930489413584189552943991443716392885026759451863953624242911159057444856108323516589876967077721069272782760798453832061060020786354479288616 :=
  C11AuxiliaryTrade.exists_code207

theorem C11_scope_capacity :
    (5.295492477500681 : ℝ) ≤ shannonCapacity (SimpleGraph.cycleGraph 11) :=
  C11AuxiliaryTrade.shannonCapacity_cycleGraph_11_ge

theorem C11_scope_strict_root :
    ((705688158939417766083006128695703821080101605304173623991920300506716846627203440324635068341693109509608786929844839653207121849017872676157797788816 : ℕ) : ℝ) ^ ((1 : ℝ) / (207 : ℕ)) <
      ((705692619930489413584189552943991443716392885026759451863953624242911159057444856108323516589876967077721069272782760798453832061060020786354479288616 : ℕ) : ℝ) ^ ((1 : ℝ) / (207 : ℕ)) :=
  C11AuxiliaryTrade.candidate_root_strictly_improves

#check C11_scope_exact_set
#check C11_scope_capacity
#check C11_scope_strict_root

#print axioms ShannonBounds.C11AuxiliaryTrade.T3mix_eq_row_hybrid
#print axioms ShannonBounds.C11AuxiliaryTrade.S3mix
#print axioms ShannonBounds.C11AuxiliaryTrade.stepx27
#print axioms ShannonBounds.C11AuxiliaryTrade.card_code69
#print axioms ShannonBounds.C11AuxiliaryTrade.card_code207
#print axioms ShannonBounds.C11AuxiliaryTrade.independent_code207
#print axioms ShannonBounds.C11AuxiliaryTrade.exists_code207
#print axioms ShannonBounds.C11AuxiliaryTrade.shannonCapacity_cycleGraph_11_ge_root
#print axioms ShannonBounds.C11AuxiliaryTrade.shannonCapacity_cycleGraph_11_ge
#print axioms ShannonBounds.C11AuxiliaryTrade.candidate_root_strictly_improves
#print axioms C11_scope_exact_set
#print axioms C11_scope_capacity
#print axioms C11_scope_strict_root
