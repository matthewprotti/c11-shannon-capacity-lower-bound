/- Copyright (c) 2026 Matthew Protti. Apache-2.0.
Guarded input-typed additions and zero-factor pruning with exact set semantics. -/
import ShannonBounds.CellRetyping.Semantics

set_option autoImplicit false

namespace ShannonBounds.CellRetyping
open Finset SimpleGraph ProfileCompiler
variable {A : Type*} [Fintype A] [DecidableEq A] {s : A → A → Bool}
variable {J : Type*} [Fintype J] [DecidableEq J] {K : J → Type*}
variable [∀ i, Fintype (K i)] [∀ i, DecidableEq (K i)]
variable {t : (i : J) → K i → K i → Bool}

abbrev Guard (U : Table s t) (a : A) (u : (i : J) → K i) : Prop :=
  ∀ b ∈ protectedLabels s a, ∀ v ∈ U.rows b, WordSep t u v

def selected (U : Table s t) (a : A) (E : Finset ((i : J) → K i)) : Finset ((i : J) → K i) :=
  E.filter (Guard U a)

theorem selected_guard (U : Table s t) (a : A) (E : Finset ((i : J) → K i))
    {u : (i : J) → K i} (hu : u ∈ selected U a E) : Guard U a u := (mem_filter.mp hu).2

theorem selected_disjoint (hi : ∀ i a, t i a a = false) (U : Table s t)
    (a : A) (E : Finset ((i : J) → K i)) : Disjoint (U.rows a) (selected U a E) := by
  rw [Finset.disjoint_left]
  intro u hu hf
  exact conflict_refl hi u (selected_guard U a E hf a (mem_protected a a |>.mpr (Or.inl rfl)) u hu)

def addRows (U : Table s t) (a : A) (E : Finset ((i : J) → K i)) (b : A) :
    Finset ((i : J) → K i) := if b = a then U.rows b ∪ selected U a E else U.rows b

def add (hs : ∀ a b, s a b = s b a) (hi : ∀ a, s a a = false)
    (ht : ∀ i a b, t i a b = t i b a) (U : Table s t) (a : A)
    (E : Finset ((i : J) → K i))
    (hE : ∀ u ∈ E, ∀ v ∈ E, u ≠ v → WordSep t u v) : Table s t where
  rows := addRows U a E
  hin := by
    intro b u hu v hv hne
    by_cases hb : b = a
    · subst b
      simp [addRows] at hu hv
      rcases hu with hu | hu <;> rcases hv with hv | hv
      · exact U.hin a u hu v hv hne
      · exact wordSep_symm ht (selected_guard U a E hv a (mem_protected a a |>.mpr (Or.inl rfl)) u hu)
      · exact selected_guard U a E hu a (mem_protected a a |>.mpr (Or.inl rfl)) v hv
      · exact hE u (mem_filter.mp hu).1 v (mem_filter.mp hv).1 hne
    · simp only [addRows, if_neg hb] at hu hv
      exact U.hin b u hu v hv hne
  hcross := by
    intro b c hbc u hu v hv
    by_cases hb : b = a
    · subst b
      have hc : c ≠ a := by intro he; subst c; rw [hi] at hbc; contradiction
      simp [addRows] at hu
      simp only [addRows, if_neg hc] at hv
      rcases hu with hu | hu
      · exact U.hcross a c hbc u hu v hv
      · exact selected_guard U a E hu c (mem_protected a c |>.mpr (Or.inr hbc)) v hv
    · by_cases hc : c = a
      · subst c
        simp only [addRows, if_neg hb] at hu
        simp [addRows] at hv
        rcases hv with hv | hv
        · exact U.hcross b a hbc u hu v hv
        · exact wordSep_symm ht (selected_guard U a E hv b
            (mem_protected a b |>.mpr (Or.inr ((hs _ _).symm.trans hbc))) u hu)
      · simp only [addRows, if_neg hb] at hu
        simp only [addRows, if_neg hc] at hv
        exact U.hcross b c hbc u hu v hv

/-- Add first, then calculate every mask against all updated coarse rows. -/
def addThenRetype (hs : ∀ a b, s a b = s b a) (hi : ∀ a, s a a = false)
    (ht : ∀ i a b, t i a b = t i b a) (U : Table s t) (a : A)
    (E : Finset ((i : J) → K i))
    (hE : ∀ u ∈ E, ∀ v ∈ E, u ≠ v → WordSep t u v) : Table (apart (s := s)) t :=
  canonical ht (add hs hi ht U a E hE)

/-- Arbitrary deletion preserves validity, without promising unchanged sets or counts. -/
def restrict (U : Table s t) (F : A → Finset ((i : J) → K i)) (hF : ∀ a, F a ⊆ U.rows a) : Table s t where
  rows := F
  hin := fun a u hu v hv hn => U.hin a u (hF a hu) v (hF a hv) hn
  hcross := fun a b hab u hu v hv => U.hcross a b hab u (hF a hu) v (hF b hv)

variable {V : J → Type*} [∀ i, Fintype (V i)] [∀ i, DecidableEq (V i)]
variable {Gs : (i : J) → SimpleGraph (V i)} [∀ i, DecidableRel (Gs i).Adj]

theorem exact_addition_gain (hs : ∀ a b, s a b = s b a) (hi : ∀ a, s a a = false)
    (ht : ∀ i a b, t i a b = t i b a) (hti : ∀ i a, t i a a = false)
    (R : (i : J) → Realisation (K i) (t i) (Gs i)) (U : Table s t) (a : A)
    (E : Finset ((i : J) → K i)) (hE : ∀ u ∈ E, ∀ v ∈ E, u ≠ v → WordSep t u v) :
    (realize R (add hs hi ht U a E hE)).w a = (realize R U).w a +
      ∑ u ∈ selected U a E, ∏ i, (R i).w (u i) := by
  rw [realize_weights, realize_weights]
  change (∑ u ∈ addRows U a E a, ∏ i, (R i).w (u i)) = _
  simp only [addRows, if_pos rfl]
  exact Finset.sum_union (selected_disjoint hti U a E)

theorem rectangle_empty_of_zero (R : (i : J) → Realisation (K i) (t i) (Gs i))
    (u : (i : J) → K i) (hu : ∃ i, (R i).w (u i) = 0) : rectangle R u = ∅ := by
  obtain ⟨i, hi⟩ := hu
  have he : (R i).P (u i) = ∅ := Finset.card_eq_zero.mp hi
  ext x
  constructor
  · intro hx
    have hm := (mem_rectangle R u x).mp hx i
    simpa [he] using hm
  · simp

theorem pruning_sets (R : (i : J) → Realisation (K i) (t i) (Gs i))
    (U : Table s t) (F : A → Finset ((i : J) → K i)) (hF : ∀ a, F a ⊆ U.rows a)
    (hz : ∀ a u, u ∈ U.rows a → u ∉ F a → ∃ i, (R i).w (u i) = 0) (a : A) :
    realizedRows R (restrict U F hF) a = realizedRows R U a := by
  ext x
  constructor
  · intro hx
    obtain ⟨u, hu, hx⟩ := (mem_realizedRows R _ a x).mp hx
    exact (mem_realizedRows R U a x).mpr ⟨u, hF a hu, hx⟩
  · intro hx
    obtain ⟨u, hu, hx⟩ := (mem_realizedRows R U a x).mp hx
    by_cases hf : u ∈ F a
    · exact (mem_realizedRows R _ a x).mpr ⟨u, hf, hx⟩
    · rw [rectangle_empty_of_zero R u (hz a u hu hf)] at hx
      simp at hx

theorem pruning_counts (R : (i : J) → Realisation (K i) (t i) (Gs i))
    (U : Table s t) (F : A → Finset ((i : J) → K i)) (hF : ∀ a, F a ⊆ U.rows a)
    (hz : ∀ a u, u ∈ U.rows a → u ∉ F a → ∃ i, (R i).w (u i) = 0) (a : A) :
    (∑ u ∈ F a, ∏ i, (R i).w (u i)) = ∑ u ∈ U.rows a, ∏ i, (R i).w (u i) := by
  calc
    _ = (realizedRows R (restrict U F hF) a).card := (card_realizedRows R _ a).symm
    _ = (realizedRows R U a).card := congrArg Finset.card (pruning_sets R U F hF hz a)
    _ = _ := card_realizedRows R U a

/-- Pruning followed by retyping still preserves exactly the actual coarse sets. -/
theorem prune_retype_sets (ht : ∀ i a b, t i a b = t i b a)
    (hi : ∀ i a, t i a a = false) (R : (i : J) → Realisation (K i) (t i) (Gs i))
    (U : Table s t) (F : A → Finset ((i : J) → K i)) (hF : ∀ a, F a ⊆ U.rows a)
    (hz : ∀ a u, u ∈ U.rows a → u ∉ F a → ∃ i, (R i).w (u i) = 0) (a : A) :
    (coarsen (realize R (canonical ht (restrict U F hF)))).P a = realizedRows R U a := by
  rw [canonical_sets ht hi]
  exact pruning_sets R U F hF hz a

end ShannonBounds.CellRetyping
