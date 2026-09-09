/-
Copyright (c) 2026 Matthew Protti. Released under Apache 2.0.
Equivalence of the typed Realisation and coarse partition/avoidance semantics.
-/
import ShannonBounds.ProfileCompiler.Core

namespace ShannonBounds.ProfileCompiler

open Finset SimpleGraph
variable {A : Type*} [Fintype A] [DecidableEq A] {s : A → A → Bool}
variable {V : Type*} [Fintype V] [DecidableEq V]
variable {G : SimpleGraph V} [DecidableRel G.Adj]

def familyTypes (s : A → A → Bool) (a : A) : Finset (Ty s) :=
  univ.filter fun p => label p = a

@[simp] theorem mem_familyTypes (a : A) (p : Ty s) :
    p ∈ familyTypes s a ↔ label p = a := by simp [familyTypes]

def groupSets (Q : Ty s → Finset V) (a : A) : Finset V :=
  (familyTypes s a).biUnion Q

@[simp] theorem mem_groupSets (Q : Ty s → Finset V) (a : A) (x : V) :
    x ∈ groupSets Q a ↔ ∃ p, label p = a ∧ x ∈ Q p := by
  simp [groupSets]

theorem piece_subset_group (Q : Ty s → Finset V) (p : Ty s) :
    Q p ⊆ groupSets Q (label p) := by
  intro x hx
  exact (mem_groupSets Q (label p) x).mpr ⟨p, rfl, hx⟩

theorem same_label_apart {p r : Ty s} (hl : label p = label r) (hne : p ≠ r) :
    apart p r = true := by
  apply (apart_iff _ _).mpr
  left
  exact ⟨hl, fun hm => hne (type_ext hl hm)⟩

theorem pieces_disjoint (R : Realisation (Ty s) apart G) {p r : Ty s}
    (hl : label p = label r) (hne : p ≠ r) : Disjoint (R.P p) (R.P r) := by
  rw [Finset.disjoint_left]
  intro x hx hy
  exact R.hsep _ _ (same_label_apart hl hne) x hx x hy (Or.inl rfl)

/-- Grouping different normalized masks recovers coarse independent families.
Different coarse labels are not assumed disjoint. -/
def coarsen (R : Realisation (Ty s) apart G) : Realisation A s G where
  P := groupSets R.P
  hindep := by
    intro a x hx y hy hne ha
    obtain ⟨p, hp, hx⟩ := (mem_groupSets R.P a x).mp hx
    obtain ⟨r, hr, hy⟩ := (mem_groupSets R.P a y).mp hy
    by_cases hpr : p = r
    · subst r
      exact R.hindep p hx hy hne ha
    · exact R.hsep p r (same_label_apart (hp.trans hr.symm) hpr) x hx y hy (Or.inr ha)
  hsep := by
    intro a b hab x hx y hy hc
    obtain ⟨p, hp, hx⟩ := (mem_groupSets R.P a x).mp hx
    obtain ⟨r, hr, hy⟩ := (mem_groupSets R.P b y).mp hy
    have hpr : apart p r = true := coarse_lift (by simpa only [hp, hr] using hab)
    exact R.hsep p r hpr x hx y hy hc

theorem typed_avoidance (R : Realisation (Ty s) apart G) (p : Ty s) (b : A)
    (hb : b ∉ mask p) : Sep G (R.P p) ((coarsen R).P b) := by
  intro x hx y hy hc
  obtain ⟨r, hr, hy⟩ := (mem_groupSets R.P b y).mp hy
  have hpr : apart p r = true := (apart_iff _ _).mpr (Or.inr (Or.inl (hr ▸ hb)))
  exact R.hsep p r hpr x hx y hy hc

/-- Coarse independent families partitioned by normalized masks, with the
missing-bit avoidance invariant. No cross-family disjointness is required. -/
structure Profile (A : Type*) [Fintype A] [DecidableEq A] (s : A → A → Bool)
    (G : SimpleGraph V) [DecidableRel G.Adj] where
  coarse : Realisation A s G
  Q : Ty s → Finset V
  partition : ∀ a, groupSets Q a = coarse.P a
  disjoint : ∀ p r, label p = label r → p ≠ r → Disjoint (Q p) (Q r)
  avoidance : ∀ p b, b ∉ mask p → Sep G (Q p) (coarse.P b)

theorem Profile.piece_subset (P : Profile A s G) (p : Ty s) :
    P.Q p ⊆ P.coarse.P (label p) := by
  rw [← P.partition]
  exact piece_subset_group P.Q p

/-- Forward semantic bridge: a coarse avoidance profile realizes equation (1). -/
def Profile.toRealisation (P : Profile A s G) : Realisation (Ty s) apart G where
  P := P.Q
  hindep := by
    intro p x hx y hy hne ha
    exact P.coarse.hindep (label p) (P.piece_subset p hx) (P.piece_subset p hy) hne ha
  hsep := by
    intro p r hpr x hx y hy hc
    rcases (apart_iff _ _).mp hpr with ⟨hl, hm⟩ | hm | hm
    · have hne : p ≠ r := fun h => hm (congrArg mask h)
      have hxy : x ≠ y := by
        intro h
        subst y
        exact Finset.disjoint_left.mp (P.disjoint p r hl hne) hx hy
      rcases hc with he | ha
      · exact hxy he
      · exact P.coarse.hindep (label p) (P.piece_subset p hx)
          (hl ▸ P.piece_subset r hy) hxy ha
    · exact P.avoidance p (label r) hm x hx y (P.piece_subset r hy) hc
    · apply P.avoidance r (label p) hm y hy x (P.piece_subset p hx)
      rcases hc with he | ha
      · exact Or.inl he.symm
      · exact Or.inr ha.symm

/-- Reverse semantic bridge: every typed realization determines a profile. -/
def toProfile (R : Realisation (Ty s) apart G) : Profile A s G where
  coarse := coarsen R
  Q := R.P
  partition := fun _ => rfl
  disjoint := fun _ _ hl hne => pieces_disjoint R hl hne
  avoidance := typed_avoidance R

@[simp] theorem roundtrip_typed_sets (R : Realisation (Ty s) apart G) (p : Ty s) :
    (toProfile R).toRealisation.P p = R.P p := rfl

@[simp] theorem roundtrip_profile_sets (P : Profile A s G) (p : Ty s) :
    (toProfile P.toRealisation).Q p = P.Q p := rfl

@[simp] theorem roundtrip_coarse_sets (P : Profile A s G) (a : A) :
    (coarsen P.toRealisation).P a = P.coarse.P a := P.partition a

/-- Coarse cardinality is the sum of the disjoint type cardinalities. -/
theorem card_coarsen (R : Realisation (Ty s) apart G) (a : A) :
    ((coarsen R).P a).card = ∑ p ∈ familyTypes s a, (R.P p).card := by
  change ((familyTypes s a).biUnion R.P).card = _
  apply Finset.card_biUnion
  intro p hp r hr hne
  exact pieces_disjoint R (((mem_familyTypes a p).mp hp).trans
    ((mem_familyTypes a r).mp hr).symm) hne

/-- Grouping commutes with graph-isomorphism transport of the actual sets. -/
theorem coarsen_mapIso {U : Type*} [Fintype U] [DecidableEq U]
    {H : SimpleGraph U} [DecidableRel H.Adj]
    (R : Realisation (Ty s) apart G) (f : G ≃g H) (a : A) :
    (coarsen (R.mapIso f)).P a = ((coarsen R).P a).image f := by
  ext y
  constructor
  · intro hy
    obtain ⟨p, hp, hy⟩ := (mem_groupSets _ a y).mp hy
    obtain ⟨x, hx, rfl⟩ := Finset.mem_image.mp hy
    exact Finset.mem_image.mpr ⟨x, (mem_groupSets _ a x).mpr ⟨p, hp, hx⟩, rfl⟩
  · intro hy
    obtain ⟨x, hx, rfl⟩ := Finset.mem_image.mp hy
    obtain ⟨p, hp, hx⟩ := (mem_groupSets _ a x).mp hx
    exact (mem_groupSets _ a (f x)).mpr ⟨p, hp, Finset.mem_image.mpr ⟨x, hx, rfl⟩⟩

end ShannonBounds.ProfileCompiler
