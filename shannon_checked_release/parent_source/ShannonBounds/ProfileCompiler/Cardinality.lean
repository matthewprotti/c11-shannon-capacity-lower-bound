/- Copyright (c) 2026 Matthew Protti. Released under Apache 2.0. -/
import ShannonBounds.ProfileCompiler.Core

namespace ShannonBounds.ProfileCompiler

open Finset
variable {A : Type*} [Fintype A] [DecidableEq A] {s : A → A → Bool}

def neighbours (s : A → A → Bool) (a : A) : Finset A := univ.filter fun b => s a b = true

def freeLabels (s : A → A → Bool) (a : A) : Finset A := univ \ insert a (neighbours s a)

@[simp] theorem mem_freeLabels (a b : A) : b ∈ freeLabels s a ↔ b ≠ a ∧ s a b = false := by
  simp [freeLabels, neighbours, Bool.not_eq_true]

def normalMasks (s : A → A → Bool) (a : A) : Finset (Finset A) :=
  univ.filter (Normal s a)

@[simp] theorem mem_normalMasks (a : A) (m : Finset A) :
    m ∈ normalMasks s a ↔ Normal s a m := by simp [normalMasks]

/-- Erasing the self-label is a bijection with arbitrary subsets of the free labels. -/
theorem card_normalMasks (a : A) (hi : s a a = false) :
    (normalMasks s a).card = 2 ^ (freeLabels s a).card := by
  rw [← Finset.card_powerset]
  apply Finset.card_bij (fun m _ => m.erase a)
  · intro m hm
    apply Finset.mem_powerset.mpr
    intro b hb
    have hb' := Finset.mem_erase.mp hb
    exact (mem_freeLabels a b).mpr ⟨hb'.1, ((mem_normalMasks a m).mp hm).2 b hb'.2⟩
  · intro m hm n hn he
    have hm' := ((mem_normalMasks a m).mp hm).1
    have hn' := ((mem_normalMasks a n).mp hn).1
    calc
      m = insert a (m.erase a) := (Finset.insert_erase hm').symm
      _ = insert a (n.erase a) := congrArg (insert a) he
      _ = n := Finset.insert_erase hn'
  · intro n hn
    have hsub := Finset.mem_powerset.mp hn
    have ha : a ∉ n := by
      intro ha
      exact ((mem_freeLabels a a).mp (hsub ha)).1 rfl
    refine ⟨insert a n, (mem_normalMasks a _).mpr ⟨mem_insert_self _ _, ?_⟩, ?_⟩
    · intro b hb
      rcases mem_insert.mp hb with rfl | hb
      · exact hi
      · exact ((mem_freeLabels a b).mp (hsub hb)).2
    · exact Finset.erase_insert ha

theorem card_freeLabels (a : A) (hi : s a a = false) :
    (freeLabels s a).card = Fintype.card A - 1 - (neighbours s a).card := by
  have ha : a ∉ neighbours s a := by simp [neighbours, hi]
  rw [freeLabels, Finset.card_sdiff_of_subset (Finset.subset_univ _),
    Finset.card_univ, Finset.card_insert_of_notMem ha]
  omega

/-- A normalized descriptor is a label paired with a normalized mask. -/
def typeSigmaEquiv (s : A → A → Bool) :
    Ty s ≃ (a : A) × {m : Finset A // Normal s a m} where
  toFun p := ⟨label p, ⟨mask p, p.property⟩⟩
  invFun p := ⟨(p.1, p.2.1), p.2.2⟩
  left_inv := fun _ => rfl
  right_inv := fun _ => rfl

/-- Equation (11); it counts alphabet positions, not runtime or search complexity. -/
theorem alphabet_cardinality (hi : ∀ a, s a a = false) :
    Fintype.card (Ty s) = ∑ a : A, 2 ^ (Fintype.card A - 1 - (neighbours s a).card) := by
  rw [Fintype.card_congr (typeSigmaEquiv s), Fintype.card_sigma]
  apply Finset.sum_congr rfl
  intro a _
  rw [Fintype.card_of_subtype (normalMasks s a) (fun m => mem_normalMasks a m),
    card_normalMasks a (hi a), card_freeLabels a (hi a)]

end ShannonBounds.ProfileCompiler
