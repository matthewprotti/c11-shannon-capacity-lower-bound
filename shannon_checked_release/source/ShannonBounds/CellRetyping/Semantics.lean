/- Copyright (c) 2026 Matthew Protti. Apache-2.0.
Dependent-product semantics and the canonical singleton sharpness witness.
Product proofs adapt the accepted R7/BPZ arguments to heterogeneous alphabets. -/
import ShannonBounds.CellRetyping.Core
import ShannonBounds.ProfileCompiler.Profiles

set_option autoImplicit false

namespace ShannonBounds.CellRetyping
open Finset SimpleGraph ProfileCompiler
variable {A : Type*} [Fintype A] [DecidableEq A] {s : A → A → Bool}
variable {J : Type*} [Fintype J] [DecidableEq J] {K : J → Type*}
variable [∀ i, Fintype (K i)] [∀ i, DecidableEq (K i)]
variable {t : (i : J) → K i → K i → Bool}
variable {V : J → Type*} [∀ i, Fintype (V i)] [∀ i, DecidableEq (V i)]

def productGraph (Gs : (i : J) → SimpleGraph (V i)) : SimpleGraph ((i : J) → V i) where
  Adj x y := x ≠ y ∧ ∀ i, x i = y i ∨ (Gs i).Adj (x i) (y i)
  symm := ⟨by
    intro x y ⟨hne, h⟩
    refine ⟨hne.symm, fun i => ?_⟩
    rcases h i with he | ha
    · exact Or.inl he.symm
    · exact Or.inr ha.symm⟩
  loopless := ⟨fun _ h => h.1 rfl⟩

instance productGraph_decidable (Gs : (i : J) → SimpleGraph (V i))
    [∀ i, DecidableRel (Gs i).Adj] : DecidableRel (productGraph Gs).Adj :=
  fun x y => inferInstanceAs (Decidable (x ≠ y ∧ ∀ i, conflict (Gs i) (x i) (y i)))

theorem conflict_productGraph (Gs : (i : J) → SimpleGraph (V i))
    [∀ i, DecidableRel (Gs i).Adj]
    (x y : (i : J) → V i) :
    conflict (productGraph Gs) x y ↔ ∀ i, conflict (Gs i) (x i) (y i) := by
  constructor
  · rintro (he | ha)
    · subst y; exact fun _ => Or.inl rfl
    · exact ha.2
  · intro h
    by_cases he : x = y
    · exact Or.inl he
    · exact Or.inr ⟨he, h⟩

variable {Gs : (i : J) → SimpleGraph (V i)} [∀ i, DecidableRel (Gs i).Adj]

def rectangle (R : (i : J) → Realisation (K i) (t i) (Gs i)) (u : (i : J) → K i) :
    Finset ((i : J) → V i) := Fintype.piFinset fun i => (R i).P (u i)

@[simp] theorem mem_rectangle (R : (i : J) → Realisation (K i) (t i) (Gs i))
    (u : (i : J) → K i) (x : (i : J) → V i) :
    x ∈ rectangle R u ↔ ∀ i, x i ∈ (R i).P (u i) := by simp [rectangle]

theorem card_rectangle (R : (i : J) → Realisation (K i) (t i) (Gs i)) (u : (i : J) → K i) :
    (rectangle R u).card = ∏ i, (R i).w (u i) := by
  simp [rectangle, Fintype.card_piFinset, Realisation.w]

theorem independent_rectangle (R : (i : J) → Realisation (K i) (t i) (Gs i))
    (u : (i : J) → K i) : (productGraph Gs).IsIndepSet ↑(rectangle R u) := by
  intro x hx y hy hne ha
  obtain ⟨i, hi⟩ := Function.ne_iff.mp hne
  rcases ha.2 i with he | hadj
  · exact hi he
  · exact (R i).hindep (u i) ((mem_rectangle R u x).mp hx i)
      ((mem_rectangle R u y).mp hy i) hi hadj

theorem separated_rectangles (R : (i : J) → Realisation (K i) (t i) (Gs i))
    {u v : (i : J) → K i} (h : WordSep t u v) :
    Sep (productGraph Gs) (rectangle R u) (rectangle R v) := by
  obtain ⟨i, hi⟩ := h
  intro x hx y hy hc
  exact (R i).hsep _ _ hi _ ((mem_rectangle R u x).mp hx i)
    _ ((mem_rectangle R v y).mp hy i) ((conflict_productGraph Gs x y).mp hc i)

theorem disjoint_rectangles (R : (i : J) → Realisation (K i) (t i) (Gs i))
    {u v : (i : J) → K i} (h : WordSep t u v) : Disjoint (rectangle R u) (rectangle R v) := by
  rw [Finset.disjoint_left]
  intro x hx hy
  exact separated_rectangles R h x hx x hy (Or.inl rfl)

def realizedRows (R : (i : J) → Realisation (K i) (t i) (Gs i)) (U : Table s t) (a : A) :
    Finset ((i : J) → V i) := (U.rows a).biUnion (rectangle R)

@[simp] theorem mem_realizedRows (R : (i : J) → Realisation (K i) (t i) (Gs i))
    (U : Table s t) (a : A) (x : (i : J) → V i) :
    x ∈ realizedRows R U a ↔ ∃ u ∈ U.rows a, x ∈ rectangle R u := by simp [realizedRows]

theorem card_realizedRows (R : (i : J) → Realisation (K i) (t i) (Gs i)) (U : Table s t) (a : A) :
    (realizedRows R U a).card = ∑ u ∈ U.rows a, ∏ i, (R i).w (u i) := by
  rw [realizedRows, Finset.card_biUnion]
  · exact Finset.sum_congr rfl fun u _ => card_rectangle R u
  · intro u hu v hv hne
    exact disjoint_rectangles R (U.hin a u hu v hv hne)

def realize (R : (i : J) → Realisation (K i) (t i) (Gs i)) (U : Table s t) :
    Realisation A s (productGraph Gs) where
  P := realizedRows R U
  hindep := by
    intro a x hx y hy hne ha
    obtain ⟨u, hu, hx⟩ := (mem_realizedRows R U a x).mp hx
    obtain ⟨v, hv, hy⟩ := (mem_realizedRows R U a y).mp hy
    by_cases he : u = v
    · subst v; exact independent_rectangle R u hx hy hne ha
    · exact separated_rectangles R (U.hin a u hu v hv he) x hx y hy (Or.inr ha)
  hsep := by
    intro a b hab x hx y hy hc
    obtain ⟨u, hu, hx⟩ := (mem_realizedRows R U a x).mp hx
    obtain ⟨v, hv, hy⟩ := (mem_realizedRows R U b y).mp hy
    exact separated_rectangles R (U.hcross a b hab u hu v hv) x hx y hy hc

theorem realize_weights (R : (i : J) → Realisation (K i) (t i) (Gs i)) (U : Table s t) (a : A) :
    (realize R U).w a = ∑ u ∈ U.rows a, ∏ i, (R i).w (u i) := card_realizedRows R U a

/-- Absent bits exclude the entire coarse output family in every realization. -/
theorem missing_sound (R : (i : J) → Realisation (K i) (t i) (Gs i)) (U : Table s t)
    (u : (i : J) → K i) (b : A) (hb : b ∉ touchMask U u) :
    Sep (productGraph Gs) (rectangle R u) (realizedRows R U b) := by
  intro x hx y hy hc
  obtain ⟨v, hv, hy⟩ := (mem_realizedRows R U b y).mp hy
  have hsep : WordSep t u v := by
    by_contra hn
    exact hb ((mem_touchMask U u b).mpr ⟨v, hv, hn⟩)
  exact separated_rectangles R hsep x hx y hy hc

theorem realize_forget (R : (i : J) → Realisation (K i) (t i) (Gs i))
    (S : Table (apart (s := s)) t) (a : A) :
    (coarsen (realize R S)).P a = realizedRows R (forget S) a := by
  ext x
  change x ∈ groupSets (realize R S).P a ↔ x ∈ realizedRows R (forget S) a
  simp only [mem_groupSets, realize, mem_realizedRows, forget, mem_forgetRows]
  constructor
  · rintro ⟨p, hp, u, hu, hx⟩
    exact ⟨u, ⟨p, hp, hu⟩, hx⟩
  · rintro ⟨u, ⟨p, hp, hu⟩, hx⟩
    exact ⟨p, hp, u, hu, hx⟩

theorem canonical_sets (hs : ∀ i a b, t i a b = t i b a)
    (hi : ∀ i a, t i a a = false) (R : (i : J) → Realisation (K i) (t i) (Gs i))
    (U : Table s t) (a : A) :
    (coarsen (realize R (canonical hs U))).P a = (realize R U).P a := by
  rw [realize_forget, forget_canonical hs hi]; rfl

theorem canonical_counts (hs : ∀ i a b, t i a b = t i b a)
    (hi : ∀ i a, t i a a = false) (R : (i : J) → Realisation (K i) (t i) (Gs i))
    (U : Table s t) (a : A) :
    (coarsen (realize R (canonical hs U))).w a = ∑ u ∈ U.rows a, ∏ i, (R i).w (u i) := by
  change ((coarsen (realize R (canonical hs U))).P a).card = _
  rw [canonical_sets hs hi]; exact card_realizedRows R U a

theorem tighten_sets (hs : ∀ i a b, t i a b = t i b a)
    (hi : ∀ i a, t i a a = false) (R : (i : J) → Realisation (K i) (t i) (Gs i))
    (S : Table (apart (s := s)) t) (a : A) :
    (coarsen (realize R (tighten hs S))).P a = (coarsen (realize R S)).P a := by
  rw [realize_forget, tighten_retains hs hi, realize_forget]

theorem tighten_counts (hs : ∀ i a b, t i a b = t i b a)
    (hi : ∀ i a, t i a a = false) (R : (i : J) → Realisation (K i) (t i) (Gs i))
    (S : Table (apart (s := s)) t) (a : A) :
    (coarsen (realize R (tighten hs S))).w a = (coarsen (realize R S)).w a :=
  congrArg Finset.card (tighten_sets hs hi R S a)

/-- One canonical graph realizes every possible-conflict witness at once. -/
def witnessGraph (hs : ∀ i a b, t i a b = t i b a) (i : J) : SimpleGraph (K i) where
  Adj a b := a ≠ b ∧ t i a b = false
  symm := ⟨fun _ _ h => ⟨h.1.symm, (hs i _ _).symm.trans h.2⟩⟩
  loopless := ⟨fun _ h => h.1 rfl⟩

instance witnessGraph_decidable (hs : ∀ i a b, t i a b = t i b a) (i : J) :
    DecidableRel (witnessGraph hs i).Adj := fun a b => inferInstanceAs (Decidable (a ≠ b ∧ t i a b = false))

theorem conflict_witnessGraph (hs : ∀ i a b, t i a b = t i b a)
    (hi : ∀ i a, t i a a = false) (i : J) (a b : K i) :
    conflict (witnessGraph hs i) a b ↔ t i a b = false := by
  constructor
  · rintro (he | ha)
    · subst b; exact hi i a
    · exact ha.2
  · intro h
    by_cases he : a = b
    · exact Or.inl he
    · exact Or.inr ⟨he, h⟩

def singletons (hs : ∀ i a b, t i a b = t i b a)
    (hi : ∀ i a, t i a a = false) (i : J) : Realisation (K i) (t i) (witnessGraph hs i) where
  P a := {a}
  hindep := by
    intro a x hx y hy hne _
    simp only [Finset.mem_coe, Finset.mem_singleton] at hx hy
    exact hne (hx.trans hy.symm)
  hsep := by
    intro a b hab x hx y hy hc
    simp only [Finset.mem_singleton] at hx hy
    subst x; subst y
    have hf := (conflict_witnessGraph hs hi i a b).mp hc
    rw [hab] at hf
    contradiction

theorem singleton_rectangle (hs : ∀ i a b, t i a b = t i b a)
    (hi : ∀ i a, t i a a = false) (u : (i : J) → K i) :
    rectangle (singletons hs hi) u = {u} := by
  ext x
  simp only [mem_rectangle, singletons, Finset.mem_singleton]
  exact ⟨fun h => funext h, fun h i => congrFun h i⟩

theorem singleton_rows (hs : ∀ i a b, t i a b = t i b a)
    (hi : ∀ i a, t i a a = false) (U : Table s t) (a : A) :
    realizedRows (singletons hs hi) U a = U.rows a := by
  ext x
  simp [mem_realizedRows, singleton_rectangle]

theorem singleton_conflict (hs : ∀ i a b, t i a b = t i b a)
    (hi : ∀ i a, t i a a = false) (u v : (i : J) → K i) :
    conflict (productGraph (witnessGraph hs)) u v ↔ Conflict t u v := by
  rw [conflict_productGraph]
  constructor
  · intro h ⟨i, hit⟩
    have hf := (conflict_witnessGraph hs hi i (u i) (v i)).mp (h i)
    rw [hit] at hf
    contradiction
  · intro h i
    apply (conflict_witnessGraph hs hi i (u i) (v i)).mpr
    exact Bool.eq_false_of_not_eq_true (fun hit => h ⟨i, hit⟩)

theorem exact_touch_witness (hs : ∀ i a b, t i a b = t i b a)
    (hi : ∀ i a, t i a a = false) (U : Table s t) (u : (i : J) → K i) (b : A) :
    b ∈ touchMask U u ↔ ∃ v ∈ realizedRows (singletons hs hi) U b,
      conflict (productGraph (witnessGraph hs)) u v := by
  simp only [mem_touchMask, singleton_rows, singleton_conflict hs hi]

/-- Any mask sound even on the canonical realization contains every canonical bit.
Combined with missing_sound, this is least inclusion among universally sound masks. -/
theorem least_sound_mask (hs : ∀ i a b, t i a b = t i b a)
    (hi : ∀ i a, t i a a = false) (U : Table s t) (u : (i : J) → K i) (m : Finset A)
    (sound : ∀ b, b ∉ m → Sep (productGraph (witnessGraph hs))
      (rectangle (singletons hs hi) u) (realizedRows (singletons hs hi) U b)) :
    touchMask U u ⊆ m := by
  intro b hb
  by_contra hm
  obtain ⟨v, hv, hc⟩ := (exact_touch_witness hs hi U u b).mp hb
  exact sound b hm u (by rw [singleton_rectangle]; simp) v hv hc

theorem containing_masks_sound (R : (i : J) → Realisation (K i) (t i) (Gs i))
    (U : Table s t) (u : (i : J) → K i) (m : Finset A) (hm : touchMask U u ⊆ m) :
    ∀ b, b ∉ m → Sep (productGraph Gs) (rectangle R u) (realizedRows R U b) := by
  intro b hb
  exact missing_sound R U u b (fun h => hb (hm h))

theorem witness_sound_iff_contains (hs : ∀ i a b, t i a b = t i b a)
    (hi : ∀ i a, t i a a = false) (U : Table s t) (u : (i : J) → K i) (m : Finset A) :
    (∀ b, b ∉ m → Sep (productGraph (witnessGraph hs))
      (rectangle (singletons hs hi) u) (realizedRows (singletons hs hi) U b)) ↔
    touchMask U u ⊆ m :=
  ⟨least_sound_mask hs hi U u m, containing_masks_sound (singletons hs hi) U u m⟩

end ShannonBounds.CellRetyping
