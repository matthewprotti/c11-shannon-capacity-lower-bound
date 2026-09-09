/-
Copyright (c) 2026 Matthew Protti. Released under Apache 2.0.
Dependent products of arbitrary finite child graphs. The rectangle and union
arguments adapt BPZ's Layered.lean product proofs, retaining their framework.
-/
import ShannonBounds.ProfileCompiler.Profiles

namespace ShannonBounds.ProfileCompiler

open Finset SimpleGraph
variable {A : Type*} [Fintype A] [DecidableEq A] {s : A → A → Bool}
variable {q : ℕ} {W : Fin q → Type*}
variable [∀ i, Fintype (W i)] [∀ i, DecidableEq (W i)]

/-- Componentwise strong product, allowing a different graph in each coordinate. -/
def productGraph (Gs : (i : Fin q) → SimpleGraph (W i)) : SimpleGraph ((i : Fin q) → W i) where
  Adj x y := x ≠ y ∧ ∀ i, x i = y i ∨ (Gs i).Adj (x i) (y i)
  symm := ⟨by
    intro x y ⟨hne, hall⟩
    refine ⟨hne.symm, fun i => ?_⟩
    rcases hall i with he | ha
    · exact Or.inl he.symm
    · exact Or.inr ha.symm⟩
  loopless := ⟨fun _ h => h.1 rfl⟩

instance productGraph_decidable (Gs : (i : Fin q) → SimpleGraph (W i))
    [∀ i, DecidableRel (Gs i).Adj] : DecidableRel (productGraph Gs).Adj :=
  fun x y => inferInstanceAs (Decidable (x ≠ y ∧ ∀ i, conflict (Gs i) (x i) (y i)))

variable {Gs : (i : Fin q) → SimpleGraph (W i)} [∀ i, DecidableRel (Gs i).Adj]

/-- The exact Cartesian rectangle assigned to one word. -/
def rectangle (R : (i : Fin q) → Realisation A s (Gs i)) (z : Fin q → A) :
    Finset ((i : Fin q) → W i) := Fintype.piFinset fun i => (R i).P (z i)

@[simp] theorem mem_rectangle (R : (i : Fin q) → Realisation A s (Gs i))
    (z : Fin q → A) (x : (i : Fin q) → W i) :
    x ∈ rectangle R z ↔ ∀ i, x i ∈ (R i).P (z i) := by simp [rectangle]

theorem card_rectangle (R : (i : Fin q) → Realisation A s (Gs i)) (z : Fin q → A) :
    (rectangle R z).card = ∏ i, (R i).w (z i) := by
  simp [rectangle, Fintype.card_piFinset, Realisation.w]

theorem rectangle_independent (R : (i : Fin q) → Realisation A s (Gs i))
    (z : Fin q → A) : (productGraph Gs).IsIndepSet ↑(rectangle R z) := by
  intro x hx y hy hne ha
  have hx' := (mem_rectangle R z x).mp hx
  have hy' := (mem_rectangle R z y).mp hy
  obtain ⟨i, hi⟩ := Function.ne_iff.mp hne
  rcases ha.2 i with he | hadj
  · exact hi he
  · exact (R i).hindep (z i) (hx' i) (hy' i) hi hadj

theorem rectangle_separated (R : (i : Fin q) → Realisation A s (Gs i))
    {z w : Fin q → A} (h : ∃ i, s (z i) (w i) = true) :
    Sep (productGraph Gs) (rectangle R z) (rectangle R w) := by
  obtain ⟨i, hi⟩ := h
  intro x hx y hy hc
  apply (R i).hsep _ _ hi (x i) ((mem_rectangle R z x).mp hx i)
    (y i) ((mem_rectangle R w y).mp hy i)
  rcases hc with he | ha
  · exact Or.inl (congrFun he i)
  · exact ha.2 i

theorem rectangle_disjoint (R : (i : Fin q) → Realisation A s (Gs i))
    {z w : Fin q → A} (h : ∃ i, s (z i) (w i) = true) :
    Disjoint (rectangle R z) (rectangle R w) := by
  rw [Finset.disjoint_left]
  intro x hx hy
  exact rectangle_separated R h x hx x hy (Or.inl rfl)

def productSubstSet (R : (i : Fin q) → Realisation A s (Gs i))
    (S : Subst A s q) (a : A) : Finset ((i : Fin q) → W i) :=
  (S.T a).biUnion (rectangle R)

@[simp] theorem mem_productSubstSet (R : (i : Fin q) → Realisation A s (Gs i))
    (S : Subst A s q) (a : A) (x : (i : Fin q) → W i) :
    x ∈ productSubstSet R S a ↔ ∃ z ∈ S.T a, x ∈ rectangle R z := by
  simp [productSubstSet]

theorem card_productSubstSet (R : (i : Fin q) → Realisation A s (Gs i))
    (S : Subst A s q) (a : A) :
    (productSubstSet R S a).card = ∑ z ∈ S.T a, ∏ i, (R i).w (z i) := by
  rw [productSubstSet, Finset.card_biUnion]
  · exact Finset.sum_congr rfl fun z _ => card_rectangle R z
  · intro z hz w hw hne
    exact rectangle_disjoint R (S.hin a z hz w hw hne)

/-- An arbitrary admissible ordinary substitution acts on arbitrary child graphs. -/
def productSubstitute (R : (i : Fin q) → Realisation A s (Gs i))
    (S : Subst A s q) : Realisation A s (productGraph Gs) where
  P := productSubstSet R S
  hindep := by
    intro a x hx y hy hne ha
    obtain ⟨z, hz, hx⟩ := (mem_productSubstSet R S a x).mp hx
    obtain ⟨w, hw, hy⟩ := (mem_productSubstSet R S a y).mp hy
    by_cases hzw : z = w
    · subst w
      exact rectangle_independent R z hx hy hne ha
    · exact rectangle_separated R (S.hin a z hz w hw hzw) x hx y hy (Or.inr ha)
  hsep := by
    intro a b hab x hx y hy hc
    obtain ⟨z, hz, hx⟩ := (mem_productSubstSet R S a x).mp hx
    obtain ⟨w, hw, hy⟩ := (mem_productSubstSet R S b y).mp hy
    exact rectangle_separated R (S.hcross a b hab z hz w hw) x hx y hy hc

@[simp] theorem weight_productSubstitute (R : (i : Fin q) → Realisation A s (Gs i))
    (S : Subst A s q) (a : A) :
    (productSubstitute R S).w a = ∑ z ∈ S.T a, ∏ i, (R i).w (z i) :=
  card_productSubstSet R S a

def productCodeSet (R : (i : Fin q) → Realisation A s (Gs i))
    (E : Code A s q) : Finset ((i : Fin q) → W i) := E.C.biUnion (rectangle R)

theorem card_productCodeSet (R : (i : Fin q) → Realisation A s (Gs i))
    (E : Code A s q) :
    (productCodeSet R E).card = ∑ z ∈ E.C, ∏ i, (R i).w (z i) := by
  rw [productCodeSet, Finset.card_biUnion]
  · exact Finset.sum_congr rfl fun z _ => card_rectangle R z
  · intro z hz w hw hne
    exact rectangle_disjoint R (E.hsep z hz w hw hne)

theorem independent_productCodeSet (R : (i : Fin q) → Realisation A s (Gs i))
    (E : Code A s q) : (productGraph Gs).IsIndepSet ↑(productCodeSet R E) := by
  intro x hx y hy hne ha
  obtain ⟨z, hz, hx⟩ := Finset.mem_biUnion.mp hx
  obtain ⟨w, hw, hy⟩ := Finset.mem_biUnion.mp hy
  by_cases hzw : z = w
  · subst w
    exact rectangle_independent R z hx hy hne ha
  · exact rectangle_separated R (E.hsep z hz w hw hzw) x hx y hy (Or.inr ha)

/-- Direct connection with the pinned BPZ heterogeneous-power rectangle. -/
theorem rectangle_eq_bpz {V : Type*} [Fintype V] [DecidableEq V]
    {G : SimpleGraph V} [DecidableRel G.Adj] (e : Fin q → ℕ)
    (R : (i : Fin q) → Realisation A s (strongPower G (e i))) (z : Fin q → A) :
    rectangle R z = multiWordSet e R z := rfl

theorem productSubstSet_eq_bpz {V : Type*} [Fintype V] [DecidableEq V]
    {G : SimpleGraph V} [DecidableRel G.Adj] (e : Fin q → ℕ)
    (R : (i : Fin q) → Realisation A s (strongPower G (e i)))
    (S : Subst A s q) (a : A) : productSubstSet R S a = multiSubstSet e R S a := rfl

theorem productCodeSet_eq_bpz {V : Type*} [Fintype V] [DecidableEq V]
    {G : SimpleGraph V} [DecidableRel G.Adj] (e : Fin q → ℕ)
    (R : (i : Fin q) → Realisation A s (strongPower G (e i)))
    (E : Code A s q) : productCodeSet R E = multiCodeSet e R E := rfl

end ShannonBounds.ProfileCompiler
