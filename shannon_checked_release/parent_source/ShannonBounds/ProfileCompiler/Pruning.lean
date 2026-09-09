/- Copyright (c) 2026 Matthew Protti. Released under Apache 2.0. -/
import ShannonBounds.ProfileCompiler.Semantics

namespace ShannonBounds.ProfileCompiler

open Finset SimpleGraph
variable {A : Type*} [Fintype A] [DecidableEq A] {s : A → A → Bool}
variable {q : ℕ} {W : Fin q → Type*}
variable [∀ i, Fintype (W i)] [∀ i, DecidableEq (W i)]
variable {Gs : (i : Fin q) → SimpleGraph (W i)} [∀ i, DecidableRel (Gs i).Adj]

/-- Deletion alone preserves admissibility; this definition promises no count equality. -/
def restrictSubst (S : Subst A s q) (U : A → Finset (Fin q → A))
    (hu : ∀ a, U a ⊆ S.T a) : Subst A s q where
  T := U
  hin := fun a z hz w hw hne => S.hin a z (hu a hz) w (hu a hw) hne
  hcross := fun a b hab z hz w hw => S.hcross a b hab z (hu a hz) w (hu b hw)

theorem rectangle_empty_of_zero (R : (i : Fin q) → Realisation A s (Gs i))
    (z : Fin q → A) (hz : ∃ i, (R i).w (z i) = 0) : rectangle R z = ∅ := by
  obtain ⟨i, hi⟩ := hz
  have he : (R i).P (z i) = ∅ := Finset.card_eq_zero.mp hi
  ext x
  constructor
  · intro hx
    have hm := (mem_rectangle R z x).mp hx i
    simpa [he] using hm
  · simp

theorem product_weight_zero (R : (i : Fin q) → Realisation A s (Gs i))
    (z : Fin q → A) (hz : ∃ i, (R i).w (z i) = 0) : ∏ i, (R i).w (z i) = 0 := by
  obtain ⟨i, hi⟩ := hz
  exact Finset.prod_eq_zero (Finset.mem_univ i) hi

/-- Set preservation additionally requires an actually empty coordinate for
EVERY deleted rectangle. -/
theorem pruning_sets (R : (i : Fin q) → Realisation A s (Gs i))
    (S : Subst A s q) (U : A → Finset (Fin q → A)) (hu : ∀ a, U a ⊆ S.T a)
    (hz : ∀ a z, z ∈ S.T a → z ∉ U a → ∃ i, (R i).w (z i) = 0) (a : A) :
    productSubstSet R (restrictSubst S U hu) a = productSubstSet R S a := by
  ext x
  constructor
  · intro hx
    obtain ⟨z, hzu, hx⟩ := (mem_productSubstSet R _ a x).mp hx
    exact (mem_productSubstSet R S a x).mpr ⟨z, hu a hzu, hx⟩
  · intro hx
    obtain ⟨z, hzs, hx⟩ := (mem_productSubstSet R S a x).mp hx
    by_cases hzu : z ∈ U a
    · exact (mem_productSubstSet R _ a x).mpr ⟨z, hzu, hx⟩
    · rw [rectangle_empty_of_zero R z (hz a z hzs hzu)] at hx
      simp at hx

/-- The corresponding two exact sum-of-products counts agree. -/
theorem pruning_cardinalities (R : (i : Fin q) → Realisation A s (Gs i))
    (S : Subst A s q) (U : A → Finset (Fin q → A)) (hu : ∀ a, U a ⊆ S.T a)
    (hz : ∀ a z, z ∈ S.T a → z ∉ U a → ∃ i, (R i).w (z i) = 0) (a : A) :
    (∑ z ∈ U a, ∏ i, (R i).w (z i)) = ∑ z ∈ S.T a, ∏ i, (R i).w (z i) := by
  calc
    _ = (productSubstSet R (restrictSubst S U hu) a).card :=
      (card_productSubstSet R _ a).symm
    _ = (productSubstSet R S a).card := congrArg Finset.card (pruning_sets R S U hu hz a)
    _ = _ := card_productSubstSet R S a

def supportRows (R : (i : Fin q) → Realisation A s (Gs i))
    (S : Subst A s q) (a : A) : Finset (Fin q → A) :=
  (S.T a).filter fun z => ∀ i, (R i).w (z i) ≠ 0

def supportPrune (R : (i : Fin q) → Realisation A s (Gs i))
    (S : Subst A s q) : Subst A s q :=
  restrictSubst S (supportRows R S) (fun _ => Finset.filter_subset _ _)

theorem support_deleted_zero (R : (i : Fin q) → Realisation A s (Gs i))
    (S : Subst A s q) (a : A) (z : Fin q → A)
    (hz : z ∈ S.T a) (hu : z ∉ supportRows R S a) : ∃ i, (R i).w (z i) = 0 := by
  classical
  have hn : ¬ ∀ i, (R i).w (z i) ≠ 0 := fun h => hu (Finset.mem_filter.mpr ⟨hz, h⟩)
  push Not at hn
  exact hn

theorem support_pruning_sets (R : (i : Fin q) → Realisation A s (Gs i))
    (S : Subst A s q) (a : A) :
    productSubstSet R (supportPrune R S) a = productSubstSet R S a :=
  pruning_sets R S (supportRows R S) (fun _ => Finset.filter_subset _ _)
    (support_deleted_zero R S) a

theorem support_pruning_cardinalities (R : (i : Fin q) → Realisation A s (Gs i))
    (S : Subst A s q) (a : A) :
    (∑ z ∈ (supportPrune R S).T a, ∏ i, (R i).w (z i)) =
      ∑ z ∈ S.T a, ∏ i, (R i).w (z i) :=
  pruning_cardinalities R S (supportRows R S) (fun _ => Finset.filter_subset _ _)
    (support_deleted_zero R S) a

/-- Terminal expansion recovers the same actual set as the coarse code. -/
theorem terminal_sets (R : (i : Fin q) → Realisation (Ty s) apart (Gs i))
    (E : Code A s q) : productCodeSet R (terminal E) =
      productCodeSet (fun i => coarsen (R i)) E := by
  ext x
  constructor
  · intro hx
    obtain ⟨z, hz, hx⟩ := Finset.mem_biUnion.mp hx
    have hz' : labels z ∈ E.C := (Finset.mem_filter.mp hz).2
    exact Finset.mem_biUnion.mpr ⟨labels z, hz',
      (coarse_rectangle_iff R (labels z) x).mpr ⟨z, rfl, hx⟩⟩
  · intro hx
    obtain ⟨t, ht, hx⟩ := Finset.mem_biUnion.mp hx
    obtain ⟨z, hz, hx⟩ := (coarse_rectangle_iff R t x).mp hx
    exact Finset.mem_biUnion.mpr ⟨z, Finset.mem_filter.mpr ⟨Finset.mem_univ z, hz ▸ ht⟩, hx⟩

theorem terminal_cardinalities (R : (i : Fin q) → Realisation (Ty s) apart (Gs i))
    (E : Code A s q) :
    (∑ z ∈ (terminal E).C, ∏ i, (R i).w (z i)) =
      ∑ t ∈ E.C, ∏ i, (coarsen (R i)).w (t i) := by
  rw [← card_productCodeSet, terminal_sets, card_productCodeSet]

/-- Terminal deletion has the same explicit emptiness boundary as substitution deletion. -/
def restrictCode (E : Code A s q) (U : Finset (Fin q → A)) (hu : U ⊆ E.C) : Code A s q where
  C := U
  hsep := fun z hz w hw hne => E.hsep z (hu hz) w (hu hw) hne

theorem terminal_pruning_sets (R : (i : Fin q) → Realisation A s (Gs i))
    (E : Code A s q) (U : Finset (Fin q → A)) (hu : U ⊆ E.C)
    (hz : ∀ z ∈ E.C, z ∉ U → ∃ i, (R i).w (z i) = 0) :
    productCodeSet R (restrictCode E U hu) = productCodeSet R E := by
  ext x
  constructor
  · intro hx
    obtain ⟨z, hzu, hx⟩ := Finset.mem_biUnion.mp hx
    exact Finset.mem_biUnion.mpr ⟨z, hu hzu, hx⟩
  · intro hx
    obtain ⟨z, hze, hx⟩ := Finset.mem_biUnion.mp hx
    by_cases hzu : z ∈ U
    · exact Finset.mem_biUnion.mpr ⟨z, hzu, hx⟩
    · rw [rectangle_empty_of_zero R z (hz z hze hzu)] at hx
      simp at hx

theorem terminal_pruning_cardinalities (R : (i : Fin q) → Realisation A s (Gs i))
    (E : Code A s q) (U : Finset (Fin q → A)) (hu : U ⊆ E.C)
    (hz : ∀ z ∈ E.C, z ∉ U → ∃ i, (R i).w (z i) = 0) :
    (∑ z ∈ U, ∏ i, (R i).w (z i)) = ∑ z ∈ E.C, ∏ i, (R i).w (z i) := by
  calc
    _ = (productCodeSet R (restrictCode E U hu)).card := (card_productCodeSet R _).symm
    _ = (productCodeSet R E).card := congrArg Finset.card (terminal_pruning_sets R E U hu hz)
    _ = _ := card_productCodeSet R E

end ShannonBounds.ProfileCompiler
