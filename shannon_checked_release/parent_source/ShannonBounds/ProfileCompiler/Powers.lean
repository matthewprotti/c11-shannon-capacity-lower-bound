/- Copyright (c) 2026 Matthew Protti. Released under Apache 2.0. -/
import ShannonBounds.ProfileCompiler.Semantics

namespace ShannonBounds.ProfileCompiler

open Finset SimpleGraph
variable {A : Type*} [Fintype A] [DecidableEq A] {s : A → A → Bool}
variable {V : Type*} [Fintype V] [DecidableEq V]
variable {G : SimpleGraph V} [DecidableRel G.Adj] {q : ℕ}

/-- The exact coarse set identity after BPZ flattens heterogeneous powers into
one strong power of the summed dimension. -/
theorem bpz_augmented_sets (e : Fin q → ℕ)
    (R : (i : Fin q) → Realisation (Ty s) apart (strongPower G (e i)))
    (hs : ∀ b c, s b c = s c b) (hi : ∀ b, s b b = false)
    (T : Subst A s q) (E : Code A s q) (a b : A) :
    (coarsen (Realisation.multiSubst e R (augmented hs T E a))).P b =
      (productSubstSet (fun i => coarsen (R i)) T b ∪
        (if b = a then extensionSet R T E a else ∅)).image (flattenSumEquiv e V) := by
  change (coarsen ((Realisation.multiSubstFamily e R (augmented hs T E a)).mapIso
    (strongPower_sum_iso G e).symm)).P b = _
  rw [coarsen_mapIso]
  have he : (coarsen (Realisation.multiSubstFamily e R (augmented hs T E a))).P b =
      productSubstSet (fun i => coarsen (R i)) T b ∪
        (if b = a then extensionSet R T E a else ∅) := augmented_sets R hs hi T E a b
  rw [he]
  rfl

/-- The typed weights are unchanged by that isomorphism, with each occurrence
of a child contributing one independent factor. -/
theorem bpz_typed_weights (e : Fin q → ℕ)
    (R : (i : Fin q) → Realisation (Ty s) apart (strongPower G (e i)))
    (hs : ∀ b c, s b c = s c b) (T : Subst A s q) (E : Code A s q) (a : A) (p : Ty s) :
    (Realisation.multiSubst e R (augmented hs T E a)).w p =
      ∑ z ∈ augmentedRows T E a p, ∏ i, (R i).w (z i) :=
  w_multiSubst e R (augmented hs T E a) p

end ShannonBounds.ProfileCompiler
