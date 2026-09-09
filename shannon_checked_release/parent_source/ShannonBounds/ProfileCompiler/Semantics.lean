/-
Copyright (c) 2026 Matthew Protti. Released under Apache 2.0.
Exact sets, deterministic mask updates, disjoint additions, and their counts.
-/
import ShannonBounds.ProfileCompiler.Products

namespace ShannonBounds.ProfileCompiler

open Finset SimpleGraph
variable {A : Type*} [Fintype A] [DecidableEq A] {s : A → A → Bool}
variable {q : ℕ} {W : Fin q → Type*}
variable [∀ i, Fintype (W i)] [∀ i, DecidableEq (W i)]
variable {Gs : (i : Fin q) → SimpleGraph (W i)} [∀ i, DecidableRel (Gs i).Adj]

/-- A coarse rectangle is the union of all its type refinements, even when
coarse families with different labels overlap. -/
theorem coarse_rectangle_iff (R : (i : Fin q) → Realisation (Ty s) apart (Gs i))
    (t : Fin q → A) (x : (i : Fin q) → W i) :
    x ∈ rectangle (fun i => coarsen (R i)) t ↔
      ∃ z : Fin q → Ty s, labels z = t ∧ x ∈ rectangle R z := by
  classical
  constructor
  · intro hx
    have hi : ∀ i, ∃ p : Ty s, label p = t i ∧ x i ∈ (R i).P p := by
      intro i
      exact (mem_groupSets (R i).P (t i) (x i)).mp
        ((mem_rectangle (fun i => coarsen (R i)) t x).mp hx i)
    choose z hz hm using hi
    exact ⟨z, funext hz, (mem_rectangle R z x).mpr hm⟩
  · rintro ⟨z, rfl, hx⟩
    apply (mem_rectangle (fun i => coarsen (R i)) (labels z) x).mpr
    intro i
    exact piece_subset_group (R i).P (z i) ((mem_rectangle R z x).mp hx i)

theorem coarse_subst_iff (R : (i : Fin q) → Realisation (Ty s) apart (Gs i))
    (T : Subst A s q) (b : A) (x : (i : Fin q) → W i) :
    x ∈ productSubstSet (fun i => coarsen (R i)) T b ↔
      ∃ z : Fin q → Ty s, labels z ∈ T.T b ∧ x ∈ rectangle R z := by
  constructor
  · intro hx
    obtain ⟨t, ht, hx⟩ := (mem_productSubstSet _ T b x).mp hx
    obtain ⟨z, hz, hx⟩ := (coarse_rectangle_iff R t x).mp hx
    exact ⟨z, hz ▸ ht, hx⟩
  · rintro ⟨z, hz, hx⟩
    exact (mem_productSubstSet _ T b x).mpr
      ⟨labels z, hz, (coarse_rectangle_iff R (labels z) x).mpr ⟨z, rfl, hx⟩⟩

/-- All normalized refinements satisfying the precise target/neighbour guard. -/
def selectedCells (T : Subst A s q) (E : Code A s q) (a : A) :
    Finset (Fin q → Ty s) := univ.filter fun z => labels z ∈ E.C ∧ Guard T a z

@[simp] theorem mem_selectedCells (T : Subst A s q) (E : Code A s q) (a : A)
    (z : Fin q → Ty s) : z ∈ selectedCells T E a ↔ labels z ∈ E.C ∧ Guard T a z := by
  simp [selectedCells]

def selectedCode (T : Subst A s q) (E : Code A s q) (a : A) : Code (Ty s) apart q where
  C := selectedCells T E a
  hsep := by
    intro z hz w hw hne
    by_contra hn
    exact hne (eq_of_code_nonsep E ((mem_selectedCells T E a z).mp hz).1
      ((mem_selectedCells T E a w).mp hw).1 hn)

/-- The actual filtered independent addition, not the entire unfiltered code. -/
def extensionSet (R : (i : Fin q) → Realisation (Ty s) apart (Gs i))
    (T : Subst A s q) (E : Code A s q) (a : A) : Finset ((i : Fin q) → W i) :=
  (selectedCells T E a).biUnion (rectangle R)

@[simp] theorem mem_extensionSet (R : (i : Fin q) → Realisation (Ty s) apart (Gs i))
    (T : Subst A s q) (E : Code A s q) (a : A) (x : (i : Fin q) → W i) :
    x ∈ extensionSet R T E a ↔ ∃ z, labels z ∈ E.C ∧ Guard T a z ∧ x ∈ rectangle R z := by
  simp [extensionSet, and_assoc]

theorem extension_independent (R : (i : Fin q) → Realisation (Ty s) apart (Gs i))
    (T : Subst A s q) (E : Code A s q) (a : A) :
    (productGraph Gs).IsIndepSet ↑(extensionSet R T E a) :=
  independent_productCodeSet R (selectedCode T E a)

theorem extension_card (R : (i : Fin q) → Realisation (Ty s) apart (Gs i))
    (T : Subst A s q) (E : Code A s q) (a : A) :
    (extensionSet R T E a).card =
      ∑ z ∈ selectedCells T E a, ∏ i, (R i).w (z i) :=
  card_productCodeSet R (selectedCode T E a)

/-- Membership exposes the exact old/new branch and its output mask. -/
theorem typed_output_iff (R : (i : Fin q) → Realisation (Ty s) apart (Gs i))
    (hs : ∀ b c, s b c = s c b) (T : Subst A s q) (E : Code A s q)
    (a : A) (p : Ty s) (x : (i : Fin q) → W i) :
    x ∈ (productSubstitute R (augmented hs T E a)).P p ↔
      ∃ z, (Old T (update s a) p z ∨ New T E a p z) ∧
        ∀ i, x i ∈ (R i).P (z i) := by
  simp [productSubstitute, augmented]

theorem coarse_augmented_iff (R : (i : Fin q) → Realisation (Ty s) apart (Gs i))
    (hs : ∀ b c, s b c = s c b) (hi : ∀ b, s b b = false)
    (T : Subst A s q) (E : Code A s q) (a b : A) (x : (i : Fin q) → W i) :
    x ∈ (coarsen (productSubstitute R (augmented hs T E a))).P b ↔
      x ∈ productSubstSet (fun i => coarsen (R i)) T b ∨
        (b = a ∧ x ∈ extensionSet R T E a) := by
  constructor
  · intro hx
    obtain ⟨p, hp, hx⟩ := (mem_groupSets _ b x).mp hx
    obtain ⟨z, hz, hx⟩ := (mem_productSubstSet R (augmented hs T E a) p x).mp hx
    rcases (mem_augmentedRows T E a p z).mp hz with ho | hn
    · left
      exact (coarse_subst_iff R T b x).mpr ⟨z, hp ▸ ho.1, hx⟩
    · right
      exact ⟨hp.symm.trans hn.1,
        (mem_extensionSet R T E a x).mpr ⟨z, hn.2.1, hn.2.2.1, hx⟩⟩
  · rintro (ho | ⟨hba, hn⟩)
    · obtain ⟨z, hz, hx⟩ := (coarse_subst_iff R T b x).mp ho
      let p : Ty s := ⟨(b, update s a b (phi T z)), update_normal a b (old_normal T hz)⟩
      apply (mem_groupSets _ b x).mpr
      refine ⟨p, rfl, (mem_productSubstSet R (augmented hs T E a) p x).mpr ?_⟩
      exact ⟨z, (mem_augmentedRows T E a p z).mpr (Or.inl ⟨hz, rfl⟩), hx⟩
    · subst b
      obtain ⟨z, hz, hg, hx⟩ := (mem_extensionSet R T E a x).mp hn
      let p : Ty s := ⟨(a, insert a (phi T z)), extension_normal T (hi a) hg⟩
      apply (mem_groupSets _ a x).mpr
      refine ⟨p, rfl, (mem_productSubstSet R (augmented hs T E a) p x).mpr ?_⟩
      exact ⟨z, (mem_augmentedRows T E a p z).mpr (Or.inr ⟨rfl, hz, hg, rfl⟩), hx⟩

/-- Exact set semantics: ordinary output plus precisely the selected addition. -/
theorem augmented_sets (R : (i : Fin q) → Realisation (Ty s) apart (Gs i))
    (hs : ∀ b c, s b c = s c b) (hi : ∀ b, s b b = false)
    (T : Subst A s q) (E : Code A s q) (a b : A) :
    (coarsen (productSubstitute R (augmented hs T E a))).P b =
      productSubstSet (fun i => coarsen (R i)) T b ∪
        (if b = a then extensionSet R T E a else ∅) := by
  ext x
  rw [coarse_augmented_iff R hs hi T E a b x]
  by_cases hb : b = a <;> simp [hb]

/-- Two rectangles containing the same point cannot be typed-separated. -/
theorem nonsep_of_common_point (R : (i : Fin q) → Realisation (Ty s) apart (Gs i))
    {z w : Fin q → Ty s} {x : (i : Fin q) → W i}
    (hz : x ∈ rectangle R z) (hw : x ∈ rectangle R w) : ¬ WordApart z w := by
  intro h
  exact rectangle_separated R h x hz x hw (Or.inl rfl)

/-- Target protection includes equality/confusability with the whole old target. -/
theorem old_target_disjoint (R : (i : Fin q) → Realisation (Ty s) apart (Gs i))
    (T : Subst A s q) (E : Code A s q) (a : A) :
    Disjoint (productSubstSet (fun i => coarsen (R i)) T a) (extensionSet R T E a) := by
  rw [Finset.disjoint_left]
  intro x hx hy
  obtain ⟨z, hz, hx⟩ := (coarse_subst_iff R T a x).mp hx
  obtain ⟨w, _, hg, hy⟩ := (mem_extensionSet R T E a x).mp hy
  have ha := mem_phi_of_nonsep T hz (nonsep_of_common_point R hx hy)
  exact (guard_excludes T hg ha).1 rfl

/-- All distinct generators in a compiled row have disjoint physical rectangles;
this covers old-old, old-new, and new-new pairs. -/
theorem compiled_rectangles_disjoint
    (R : (i : Fin q) → Realisation (Ty s) apart (Gs i))
    (hs : ∀ b c, s b c = s c b) (T : Subst A s q) (E : Code A s q) (a : A)
    (p : Ty s) {z w : Fin q → Ty s} (hz : z ∈ augmentedRows T E a p)
    (hw : w ∈ augmentedRows T E a p) (hne : z ≠ w) :
    Disjoint (rectangle R z) (rectangle R w) :=
  rectangle_disjoint R ((augmented hs T E a).hin p z hz w hw hne)

/-- The exact typed weight formula, with no assumed compiled admissibility. -/
theorem typed_weights (R : (i : Fin q) → Realisation (Ty s) apart (Gs i))
    (hs : ∀ b c, s b c = s c b) (T : Subst A s q) (E : Code A s q) (a : A)
    (p : Ty s) : (productSubstitute R (augmented hs T E a)).w p =
      ∑ z ∈ augmentedRows T E a p, ∏ i, (R i).w (z i) :=
  weight_productSubstitute R (augmented hs T E a) p

/-- Coarse counts equal the ordinary polynomial plus exactly the filtered gain. -/
theorem augmented_cardinalities (R : (i : Fin q) → Realisation (Ty s) apart (Gs i))
    (hs : ∀ b c, s b c = s c b) (hi : ∀ b, s b b = false)
    (T : Subst A s q) (E : Code A s q) (a b : A) :
    (coarsen (productSubstitute R (augmented hs T E a))).w b =
      (∑ t ∈ T.T b, ∏ i, (coarsen (R i)).w (t i)) +
        (if b = a then ∑ z ∈ selectedCells T E a, ∏ i, (R i).w (z i) else 0) := by
  change ((coarsen (productSubstitute R (augmented hs T E a))).P b).card = _
  rw [augmented_sets R hs hi T E a b]
  by_cases hb : b = a
  · subst b
    simp only [ite_true]
    rw [Finset.card_union_of_disjoint (old_target_disjoint R T E a),
      card_productSubstSet, extension_card]
  · simp only [hb, if_false, Finset.union_empty, Nat.add_zero]
    exact card_productSubstSet _ T b

/-- Without augmentation, grouping the full compiled output exactly recovers
ordinary substitution on the coarse input families. -/
theorem ordinary_sets (R : (i : Fin q) → Realisation (Ty s) apart (Gs i))
    (T : Subst A s q) (b : A) :
    (coarsen (productSubstitute R (ordinary T))).P b =
      productSubstSet (fun i => coarsen (R i)) T b := by
  ext x
  constructor
  · intro hx
    obtain ⟨p, hp, hx⟩ := (mem_groupSets _ b x).mp hx
    obtain ⟨z, hz, hx⟩ := (mem_productSubstSet R (ordinary T) p x).mp hx
    have ho := (mem_ordinaryRows T p z).mp hz
    exact (coarse_subst_iff R T b x).mpr ⟨z, hp ▸ ho.1, hx⟩
  · intro hx
    obtain ⟨z, hz, hx⟩ := (coarse_subst_iff R T b x).mp hx
    let p : Ty s := ⟨(b, phi T z), old_normal T hz⟩
    apply (mem_groupSets _ b x).mpr
    refine ⟨p, rfl, (mem_productSubstSet R (ordinary T) p x).mpr ?_⟩
    exact ⟨z, (mem_ordinaryRows T p z).mpr ⟨hz, rfl⟩, hx⟩

theorem extensionSet_empty (R : (i : Fin q) → Realisation (Ty s) apart (Gs i))
    (T : Subst A s q) (E : Code A s q) (a : A) (he : E.C = ∅) :
    extensionSet R T E a = ∅ := by
  simp [extensionSet, selectedCells, he]

/-- Empty augmentation may relabel masks, but does not change coarse sets. -/
theorem empty_augmentation_sets (R : (i : Fin q) → Realisation (Ty s) apart (Gs i))
    (hs : ∀ b c, s b c = s c b) (hi : ∀ b, s b b = false)
    (T : Subst A s q) (E : Code A s q) (a b : A) (he : E.C = ∅) :
    (coarsen (productSubstitute R (augmented hs T E a))).P b =
      productSubstSet (fun i => coarsen (R i)) T b := by
  rw [augmented_sets R hs hi T E a b, extensionSet_empty R T E a he]
  simp

/-- Selected refinements of one fixed coarse extension word. -/
def selectedRefinements (T : Subst A s q) (a : A) (t : Fin q → A) :
    Finset (Fin q → Ty s) := univ.filter fun z => labels z = t ∧ Guard T a z

@[simp] theorem mem_selectedRefinements (T : Subst A s q) (a : A)
    (t : Fin q → A) (z : Fin q → Ty s) :
    z ∈ selectedRefinements T a t ↔ labels z = t ∧ Guard T a z := by
  simp [selectedRefinements]

theorem selectedCells_fibres (T : Subst A s q) (E : Code A s q) (a : A) :
    selectedCells T E a = E.C.biUnion (selectedRefinements T a) := by
  ext z
  simp only [mem_selectedCells, mem_biUnion, mem_selectedRefinements]
  constructor
  · rintro ⟨hz, hg⟩
    exact ⟨labels z, hz, rfl, hg⟩
  · rintro ⟨t, ht, hz, hg⟩
    exact ⟨hz ▸ ht, hg⟩

theorem selectedRefinements_disjoint (T : Subst A s q) (a : A)
    {t u : Fin q → A} (h : t ≠ u) :
    Disjoint (selectedRefinements T a t) (selectedRefinements T a u) := by
  rw [Finset.disjoint_left]
  intro z hz hu
  exact h (((mem_selectedRefinements T a t z).mp hz).1.symm.trans
    ((mem_selectedRefinements T a u z).mp hu).1)

/-- Equation (10), indexed first by the coarse code word and then its guarded
normalized refinements. There is no multiplicity from duplicate generators. -/
theorem exact_gain (R : (i : Fin q) → Realisation (Ty s) apart (Gs i))
    (T : Subst A s q) (E : Code A s q) (a : A) :
    (extensionSet R T E a).card =
      ∑ t ∈ E.C, ∑ z ∈ selectedRefinements T a t, ∏ i, (R i).w (z i) := by
  rw [extension_card, selectedCells_fibres]
  exact Finset.sum_biUnion (fun _ _ _ _ h => selectedRefinements_disjoint T a h)

end ShannonBounds.ProfileCompiler
