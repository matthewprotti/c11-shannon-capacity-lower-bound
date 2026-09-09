/-
Copyright (c) 2026 Matthew Protti. Released under Apache 2.0.
Uniform profile compilation within the BPZ Realisation/Subst/Code framework.
The definitions enumerate all normalized types. No graph or weight data enter.
-/
import ShannonBounds.Layered
import Mathlib.Data.Fintype.Powerset
import Mathlib.Tactic

namespace ShannonBounds.ProfileCompiler

open Finset

variable {A : Type*} [Fintype A] [DecidableEq A] {s : A → A → Bool}

abbrev Normal (s : A → A → Bool) (a : A) (m : Finset A) : Prop :=
  a ∈ m ∧ ∀ b ∈ m, s a b = false

abbrev Ty (s : A → A → Bool) := {p : A × Finset A // Normal s p.1 p.2}

abbrev label (x : Ty s) : A := x.val.1
abbrev mask (x : Ty s) : Finset A := x.val.2

@[simp] theorem self_mem (x : Ty s) : label x ∈ mask x := x.property.1

theorem type_ext {x y : Ty s} (hl : label x = label y) (hm : mask x = mask y) :
    x = y := Subtype.ext (Prod.ext hl hm)

/-- Exactly equation (1), including separation of different masks of one family. -/
def apart (x y : Ty s) : Bool :=
  decide ((label x = label y ∧ mask x ≠ mask y) ∨
    label y ∉ mask x ∨ label x ∉ mask y)

@[simp] theorem apart_iff (x y : Ty s) : apart x y = true ↔
    (label x = label y ∧ mask x ≠ mask y) ∨ label y ∉ mask x ∨ label x ∉ mask y := by
  simp [apart]

@[simp] theorem apart_irrefl (x : Ty s) : apart x x = false := by
  simp [apart]

theorem apart_symm (x y : Ty s) : apart x y = apart y x := by
  apply Bool.eq_iff_iff.mpr
  simp only [apart_iff]
  constructor
  · rintro (⟨h, hm⟩ | h | h)
    · exact Or.inl ⟨h.symm, Ne.symm hm⟩
    · exact Or.inr (Or.inr h)
    · exact Or.inr (Or.inl h)
  · rintro (⟨h, hm⟩ | h | h)
    · exact Or.inl ⟨h.symm, Ne.symm hm⟩
    · exact Or.inr (Or.inr h)
    · exact Or.inr (Or.inl h)

theorem not_apart_iff (x y : Ty s) : apart x y ≠ true ↔
    label y ∈ mask x ∧ label x ∈ mask y ∧
      (label x = label y → mask x = mask y) := by
  simp only [ne_eq, apart_iff, not_or, not_and, not_not]
  tauto

theorem coarse_lift {x y : Ty s} (h : s (label x) (label y) = true) :
    apart x y = true := by
  apply (apart_iff x y).mpr
  right; left
  intro hm
  have hf := x.property.2 _ hm
  rw [h] at hf
  contradiction

variable {q : ℕ}

def labels (z : Fin q → Ty s) : Fin q → A := fun i => label (z i)

def WordApart (z w : Fin q → Ty s) : Prop := ∃ i, apart (z i) (w i) = true

theorem wordApart_symm {z w : Fin q → Ty s} (h : WordApart z w) : WordApart w z := by
  obtain ⟨i, hi⟩ := h
  exact ⟨i, (apart_symm _ _).symm.trans hi⟩

theorem nonsep_coords {z w : Fin q → Ty s} (h : ¬ WordApart z w) (i : Fin q) :
    label (w i) ∈ mask (z i) ∧ label (z i) ∈ mask (w i) ∧
      (label (z i) = label (w i) → mask (z i) = mask (w i)) := by
  apply (not_apart_iff _ _).mp
  intro hi
  exact h ⟨i, hi⟩

theorem eq_of_labels_of_nonsep {z w : Fin q → Ty s}
    (hl : labels z = labels w) (hn : ¬ WordApart z w) : z = w := by
  funext i
  have hi : label (z i) = label (w i) := congrFun hl i
  exact type_ext hi ((nonsep_coords hn i).2.2 hi)

/-- Propagation over all normalized input types, without support information. -/
def phi (T : Subst A s q) (z : Fin q → Ty s) : Finset A :=
  univ.filter fun b => ∃ u ∈ T.T b, ∀ i, u i ∈ mask (z i)

@[simp] theorem mem_phi (T : Subst A s q) (z : Fin q → Ty s) (b : A) :
    b ∈ phi T z ↔ ∃ u ∈ T.T b, ∀ i, u i ∈ mask (z i) := by
  simp [phi]

theorem label_mem_phi (T : Subst A s q) {z : Fin q → Ty s} {b : A}
    (hz : labels z ∈ T.T b) : b ∈ phi T z := by
  exact (mem_phi T z b).mpr ⟨labels z, hz, fun i => self_mem (z i)⟩

theorem old_normal (T : Subst A s q) {z : Fin q → Ty s} {b : A}
    (hz : labels z ∈ T.T b) : Normal s b (phi T z) := by
  refine ⟨label_mem_phi T hz, ?_⟩
  intro c hc
  by_contra h
  have hs : s b c = true := Bool.eq_true_of_not_eq_false h
  obtain ⟨u, hu, hm⟩ := (mem_phi T z c).mp hc
  obtain ⟨i, hi⟩ := T.hcross b c hs (labels z) hz u hu
  have hf := (z i).property.2 (u i) (hm i)
  change s (labels z i) (u i) = false at hf
  rw [hi] at hf
  contradiction

theorem mem_phi_of_nonsep (T : Subst A s q) {z w : Fin q → Ty s} {b : A}
    (hz : labels z ∈ T.T b) (hn : ¬ WordApart z w) : b ∈ phi T w := by
  exact (mem_phi T w b).mpr ⟨labels z, hz, fun i => (nonsep_coords hn i).2.1⟩

theorem eq_of_old_nonsep (T : Subst A s q) {z w : Fin q → Ty s} {b : A}
    (hz : labels z ∈ T.T b) (hw : labels w ∈ T.T b) (hn : ¬ WordApart z w) :
    z = w := by
  apply eq_of_labels_of_nonsep _ hn
  by_contra he
  obtain ⟨i, hi⟩ := T.hin b (labels z) hz (labels w) hw he
  exact hn ⟨i, coarse_lift hi⟩

theorem eq_of_code_nonsep (E : Code A s q) {z w : Fin q → Ty s}
    (hz : labels z ∈ E.C) (hw : labels w ∈ E.C) (hn : ¬ WordApart z w) : z = w := by
  apply eq_of_labels_of_nonsep _ hn
  by_contra he
  obtain ⟨i, hi⟩ := E.hsep (labels z) hz (labels w) hw he
  exact hn ⟨i, coarse_lift hi⟩

/-- Target plus its coarse separation neighbours. -/
def protectedLabels (s : A → A → Bool) (a : A) : Finset A :=
  insert a (univ.filter fun b => s a b = true)

@[simp] theorem mem_protected (a b : A) : b ∈ protectedLabels s a ↔ b = a ∨ s a b = true := by
  simp [protectedLabels]

/-- The conservative update is applied even if the extension code is empty. -/
def update (s : A → A → Bool) (a b : A) (m : Finset A) : Finset A :=
  if b = a ∨ s b a = true then m else insert a m

theorem subset_update (a b : A) (m : Finset A) : m ⊆ update s a b m := by
  unfold update
  split_ifs <;> simp

theorem update_normal (a b : A) {m : Finset A} (hm : Normal s b m) :
    Normal s b (update s a b m) := by
  unfold update
  split_ifs with h
  · exact hm
  · refine ⟨mem_insert_of_mem hm.1, ?_⟩
    intro c hc
    rcases mem_insert.mp hc with rfl | hc
    · exact Bool.eq_false_of_not_eq_true (fun hs => h (Or.inr hs))
    · exact hm.2 c hc

abbrev Guard (T : Subst A s q) (a : A) (z : Fin q → Ty s) : Prop :=
  Disjoint (phi T z) (protectedLabels s a)

theorem guard_excludes (T : Subst A s q) {a b : A} {z : Fin q → Ty s}
    (hg : Guard T a z) (hb : b ∈ phi T z) : b ≠ a ∧ s a b = false := by
  have hn : b ∉ protectedLabels s a := fun h => Finset.disjoint_left.mp hg hb h
  simp only [mem_protected, not_or] at hn
  exact ⟨hn.1, Bool.eq_false_of_not_eq_true hn.2⟩

theorem extension_normal (T : Subst A s q) {a : A} {z : Fin q → Ty s}
    (hi : s a a = false) (hg : Guard T a z) : Normal s a (insert a (phi T z)) := by
  refine ⟨mem_insert_self _ _, ?_⟩
  intro b hb
  rcases mem_insert.mp hb with rfl | hb
  · exact hi
  · exact (guard_excludes T hg hb).2

/-- A literal old generator, with its exact deterministic output mask. -/
abbrev Old (T : Subst A s q) (f : A → Finset A → Finset A)
    (p : Ty s) (z : Fin q → Ty s) : Prop :=
  labels z ∈ T.T (label p) ∧ mask p = f (label p) (phi T z)

/-- A literal selected extension generator, with target and neighbour protection. -/
abbrev New (T : Subst A s q) (E : Code A s q) (a : A)
    (p : Ty s) (z : Fin q → Ty s) : Prop :=
  label p = a ∧ labels z ∈ E.C ∧ Guard T a z ∧ mask p = insert a (phi T z)

theorem old_pair (T : Subst A s q) (f : A → Finset A → Finset A)
    (hf : ∀ b m, m ⊆ f b m) {p r : Ty s} {z w : Fin q → Ty s}
    (hz : Old T f p z) (hw : Old T f r w) (hn : ¬ WordApart z w) :
    apart p r ≠ true ∧ (label p = label r → z = w ∧ p = r) := by
  have hn' : ¬ WordApart w z := fun h => hn (wordApart_symm h)
  have hr : label r ∈ mask p := by
    rw [hz.2]
    exact hf _ _ (mem_phi_of_nonsep T hw.1 hn')
  have hp : label p ∈ mask r := by
    rw [hw.2]
    exact hf _ _ (mem_phi_of_nonsep T hz.1 hn)
  have he : label p = label r → z = w ∧ p = r := by
    intro h
    have hw' : labels w ∈ T.T (label p) := h ▸ hw.1
    have hzw := eq_of_old_nonsep T hz.1 hw' hn
    refine ⟨hzw, type_ext h ?_⟩
    rw [hz.2, hw.2, h, hzw]
  refine ⟨(not_apart_iff p r).mpr ⟨hr, hp, ?_⟩, he⟩
  intro h
  exact congrArg mask (he h).2

theorem new_pair (T : Subst A s q) (E : Code A s q) (a : A)
    {p r : Ty s} {z w : Fin q → Ty s}
    (hz : New T E a p z) (hw : New T E a r w) (hn : ¬ WordApart z w) :
    z = w ∧ p = r := by
  have he := eq_of_code_nonsep E hz.2.1 hw.2.1 hn
  refine ⟨he, type_ext (hz.1.trans hw.1.symm) ?_⟩
  rw [hz.2.2.2, hw.2.2.2, he]

theorem mixed_pair (T : Subst A s q) (E : Code A s q) (a : A)
    (hs : ∀ b c, s b c = s c b) {p r : Ty s} {z w : Fin q → Ty s}
    (hz : Old T (update s a) p z) (hw : New T E a r w) (hn : ¬ WordApart z w) :
    label p ≠ label r ∧ apart p r ≠ true := by
  have hp := mem_phi_of_nonsep T hz.1 hn
  have hg := guard_excludes T hw.2.2.1 hp
  have hba : s (label p) a = false := (hs _ _).trans hg.2
  have hne : label p ≠ label r := by simpa only [hw.1] using hg.1
  refine ⟨hne, (not_apart_iff p r).mpr ⟨?_, ?_, fun h => (hne h).elim⟩⟩
  · rw [hw.1, hz.2]
    simp [update, hg.1, hba]
  · rw [hw.2.2.2]
    exact mem_insert_of_mem hp

/-- Full ordinary table: all normalized input words are considered. -/
def ordinaryRows (T : Subst A s q) (p : Ty s) : Finset (Fin q → Ty s) :=
  univ.filter (Old T (fun _ m => m) p)

/-- Full augmented table, defined without graph, seed, weights, or a validity oracle. -/
def augmentedRows (T : Subst A s q) (E : Code A s q) (a : A) (p : Ty s) :
    Finset (Fin q → Ty s) :=
  univ.filter fun z => Old T (update s a) p z ∨ New T E a p z

@[simp] theorem mem_ordinaryRows (T : Subst A s q) (p : Ty s) (z : Fin q → Ty s) :
    z ∈ ordinaryRows T p ↔ Old T (fun _ m => m) p z := by simp [ordinaryRows]

@[simp] theorem mem_augmentedRows (T : Subst A s q) (E : Code A s q) (a : A)
    (p : Ty s) (z : Fin q → Ty s) : z ∈ augmentedRows T E a p ↔
      Old T (update s a) p z ∨ New T E a p z := by simp [augmentedRows]

/-- The universal ordinary compiler, with admissibility derived symbolically. -/
def ordinary (T : Subst A s q) : Subst (Ty s) apart q where
  T := ordinaryRows T
  hin := by
    intro p z hz w hw hne
    by_contra hn
    exact hne ((old_pair T (fun _ m => m) (fun _ _ => Subset.rfl)
      (mem_ordinaryRows T p z |>.mp hz) (mem_ordinaryRows T p w |>.mp hw) hn).2 rfl).1
  hcross := by
    intro p r hpr z hz w hw
    by_contra hn
    exact (old_pair T (fun _ m => m) (fun _ _ => Subset.rfl)
      (mem_ordinaryRows T p z |>.mp hz) (mem_ordinaryRows T r w |>.mp hw) hn).1 hpr

/-- The universal augmented compiler. Coarse admissibility and code separation
are its only recipe hypotheses; compiled admissibility is a conclusion. -/
def augmented (hs : ∀ b c, s b c = s c b) (T : Subst A s q)
    (E : Code A s q) (a : A) : Subst (Ty s) apart q where
  T := augmentedRows T E a
  hin := by
    intro p z hz w hw hne
    by_contra hn
    have hn' : ¬ WordApart w z := fun h => hn (wordApart_symm h)
    rcases (mem_augmentedRows T E a p z).mp hz with hz | hz <;>
      rcases (mem_augmentedRows T E a p w).mp hw with hw | hw
    · exact hne ((old_pair T (update s a) (subset_update a) hz hw hn).2 rfl).1
    · exact (mixed_pair T E a hs hz hw hn).1 rfl
    · exact (mixed_pair T E a hs hw hz hn').1 rfl
    · exact hne (new_pair T E a hz hw hn).1
  hcross := by
    intro p r hpr z hz w hw
    by_contra hn
    have hn' : ¬ WordApart w z := fun h => hn (wordApart_symm h)
    rcases (mem_augmentedRows T E a p z).mp hz with hz | hz <;>
      rcases (mem_augmentedRows T E a r w).mp hw with hw | hw
    · exact (old_pair T (update s a) (subset_update a) hz hw hn).1 hpr
    · exact (mixed_pair T E a hs hz hw hn).2 hpr
    · exact (mixed_pair T E a hs hw hz hn').2 ((apart_symm _ _).symm.trans hpr)
    · have he := (new_pair T E a hz hw hn).2
      subst r
      simp at hpr

/-- Old and new generators never collide in an augmented output row. -/
theorem old_new_disjoint (hs : ∀ b c, s b c = s c b) (T : Subst A s q)
    (E : Code A s q) (a : A) (p : Ty s) (z : Fin q → Ty s) :
    ¬ (Old T (update s a) p z ∧ New T E a p z) := by
  rintro ⟨ho, hn⟩
  apply (mixed_pair T E a hs ho hn ?_).1 rfl
  rintro ⟨i, hi⟩
  simp at hi

/-- Every refinement of a coarse terminal word is included. -/
def terminal (E : Code A s q) : Code (Ty s) apart q where
  C := univ.filter fun z => labels z ∈ E.C
  hsep := by
    intro z hz w hw hne
    simp only [mem_filter, mem_univ, true_and] at hz hw
    by_contra hn
    exact hne (eq_of_code_nonsep E hz hw hn)

/-- No old generator is lost by representing the output as a normalized subtype. -/
theorem augmented_old_complete (T : Subst A s q) (E : Code A s q) (a b : A)
    (z : Fin q → Ty s) (hz : labels z ∈ T.T b) :
    ∃ p : Ty s, label p = b ∧ mask p = update s a b (phi T z) ∧
      z ∈ augmentedRows T E a p := by
  let p : Ty s := ⟨(b, update s a b (phi T z)), update_normal a b (old_normal T hz)⟩
  exact ⟨p, rfl, rfl, (mem_augmentedRows T E a p z).mpr (Or.inl ⟨hz, rfl⟩)⟩

/-- Every selected extension generator is included, independently of realization or support. -/
theorem augmented_new_complete (hi : ∀ b, s b b = false)
    (T : Subst A s q) (E : Code A s q) (a : A) (z : Fin q → Ty s)
    (hz : labels z ∈ E.C) (hg : Guard T a z) :
    ∃ p : Ty s, label p = a ∧ mask p = insert a (phi T z) ∧
      z ∈ augmentedRows T E a p := by
  let p : Ty s := ⟨(a, insert a (phi T z)), extension_normal T (hi a) hg⟩
  exact ⟨p, rfl, rfl, (mem_augmentedRows T E a p z).mpr (Or.inr ⟨rfl, hz, hg, rfl⟩)⟩

/-- Full arbitrary-alphabet compiler contract: the stated rows are admissible,
and every old or guarded extension generator occurs with its exact assigned mask. -/
theorem universal_compilation (hs : ∀ b c, s b c = s c b) (hi : ∀ b, s b b = false)
    (T : Subst A s q) (E : Code A s q) (a : A) :
    ∃ S : Subst (Ty s) apart q, S.T = augmentedRows T E a ∧
      (∀ b z, labels z ∈ T.T b → ∃ p : Ty s,
        label p = b ∧ mask p = update s a b (phi T z) ∧ z ∈ S.T p) ∧
      (∀ z, labels z ∈ E.C → Guard T a z → ∃ p : Ty s,
        label p = a ∧ mask p = insert a (phi T z) ∧ z ∈ S.T p) := by
  exact ⟨augmented hs T E a, rfl, augmented_old_complete T E a,
    augmented_new_complete hi T E a⟩

end ShannonBounds.ProfileCompiler
