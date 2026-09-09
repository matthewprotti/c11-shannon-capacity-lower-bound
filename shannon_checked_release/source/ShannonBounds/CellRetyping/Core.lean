/- Copyright (c) 2026 Matthew Protti. Apache-2.0.
Canonical retyping of fixed generator cells. Arbitrary finite dependent input
alphabets and coordinate sets; no graph data, weights, or native evaluation. -/
import ShannonBounds.ProfileCompiler.Core

set_option autoImplicit false

namespace ShannonBounds.CellRetyping
open Finset ProfileCompiler

variable {A : Type*} [Fintype A] [DecidableEq A] {s : A → A → Bool}
variable {J : Type*} [Fintype J] [DecidableEq J] {K : J → Type*}
variable [∀ i, Fintype (K i)] [∀ i, DecidableEq (K i)]
variable {t : (i : J) → K i → K i → Bool}

abbrev WordSep (t : (i : J) → K i → K i → Bool) (u v : (i : J) → K i) : Prop :=
  ∃ i, t i (u i) (v i) = true

abbrev Conflict (t : (i : J) → K i → K i → Bool) (u v : (i : J) → K i) : Prop :=
  ¬ WordSep t u v

theorem wordSep_symm (hs : ∀ i a b, t i a b = t i b a)
    {u v : (i : J) → K i} (h : WordSep t u v) : WordSep t v u := by
  obtain ⟨i, hi⟩ := h
  exact ⟨i, (hs i _ _).symm.trans hi⟩

theorem conflict_refl (hi : ∀ i a, t i a a = false) (u : (i : J) → K i) :
    Conflict t u u := by
  rintro ⟨i, h⟩
  rw [hi] at h
  contradiction

/-- Output and input alphabets may differ. Only coarse pairwise validity is assumed. -/
structure Table (s : A → A → Bool) (t : (i : J) → K i → K i → Bool) where
  rows : A → Finset ((i : J) → K i)
  hin : ∀ a, ∀ u ∈ rows a, ∀ v ∈ rows a, u ≠ v → WordSep t u v
  hcross : ∀ a b, s a b = true → ∀ u ∈ rows a, ∀ v ∈ rows b, WordSep t u v

@[ext] theorem Table.ext {U V : Table s t} (h : U.rows = V.rows) : U = V := by
  cases U; cases V; cases h; rfl

def touchMask (U : Table s t) (u : (i : J) → K i) : Finset A :=
  univ.filter fun b => ∃ v ∈ U.rows b, Conflict t u v

@[simp] theorem mem_touchMask (U : Table s t) (u : (i : J) → K i) (b : A) :
    b ∈ touchMask U u ↔ ∃ v ∈ U.rows b, Conflict t u v := by
  simp [touchMask]

theorem normal (hi : ∀ i a, t i a a = false) (U : Table s t)
    {a : A} {u : (i : J) → K i} (hu : u ∈ U.rows a) : Normal s a (touchMask U u) := by
  refine ⟨(mem_touchMask U u a).mpr ⟨u, hu, conflict_refl hi u⟩, ?_⟩
  intro b hb
  obtain ⟨v, hv, hc⟩ := (mem_touchMask U u b).mp hb
  exact Bool.eq_false_of_not_eq_true (fun hs => hc (U.hcross a b hs u hu v hv))

def canonicalRows (U : Table s t) (p : Ty s) : Finset ((i : J) → K i) :=
  (U.rows (label p)).filter fun u => touchMask U u = mask p

@[simp] theorem mem_canonicalRows (U : Table s t) (p : Ty s) (u : (i : J) → K i) :
    u ∈ canonicalRows U p ↔ u ∈ U.rows (label p) ∧ touchMask U u = mask p := by
  simp [canonicalRows]

/-- Refined admissibility is a conclusion, not an extra input oracle. -/
def canonical (hs : ∀ i a b, t i a b = t i b a) (U : Table s t) : Table (apart (s := s)) t where
  rows := canonicalRows U
  hin := by
    intro p u hu v hv hne
    exact U.hin _ u (mem_canonicalRows U p u |>.mp hu).1 v
      (mem_canonicalRows U p v |>.mp hv).1 hne
  hcross := by
    intro p r hpr u hu v hv
    obtain ⟨hu, hmu⟩ := (mem_canonicalRows U p u).mp hu
    obtain ⟨hv, hmv⟩ := (mem_canonicalRows U r v).mp hv
    by_contra hc
    have hc' : Conflict t v u := fun h => hc (wordSep_symm hs h)
    apply ((not_apart_iff p r).mpr ?_) hpr
    refine ⟨?_, ?_, ?_⟩
    · rw [← hmu]; exact (mem_touchMask U u _).mpr ⟨v, hv, hc⟩
    · rw [← hmv]; exact (mem_touchMask U v _).mpr ⟨u, hu, hc'⟩
    · intro hl
      have huv : u = v := by
        by_contra hn
        exact hc (U.hin _ u hu v (hl ▸ hv) hn)
      rw [← hmu, ← hmv, huv]

theorem canonical_complete (hi : ∀ i a, t i a a = false) (U : Table s t)
    (a : A) (u : (i : J) → K i) (hu : u ∈ U.rows a) :
    ∃! p : Ty s, label p = a ∧ u ∈ canonicalRows U p := by
  let p : Ty s := ⟨(a, touchMask U u), normal hi U hu⟩
  refine ⟨p, ⟨rfl, (mem_canonicalRows U p u).mpr ⟨hu, rfl⟩⟩, ?_⟩
  intro r ⟨hr, hur⟩
  exact type_ext hr (mem_canonicalRows U r u |>.mp hur).2.symm

def forgetRows (S : Table (apart (s := s)) t) (a : A) : Finset ((i : J) → K i) :=
  (univ.filter fun p : Ty s => label p = a).biUnion S.rows

@[simp] theorem mem_forgetRows (S : Table (apart (s := s)) t)
    (a : A) (u : (i : J) → K i) :
    u ∈ forgetRows S a ↔ ∃ p : Ty s, label p = a ∧ u ∈ S.rows p := by
  simp [forgetRows]

def forget (S : Table (apart (s := s)) t) : Table s t where
  rows := forgetRows S
  hin := by
    intro a u hu v hv hne
    obtain ⟨p, hp, hu⟩ := (mem_forgetRows S a u).mp hu
    obtain ⟨r, hr, hv⟩ := (mem_forgetRows S a v).mp hv
    by_cases he : p = r
    · subst r; exact S.hin p u hu v hv hne
    · apply S.hcross p r ?_ u hu v hv
      exact (apart_iff p r).mpr (Or.inl ⟨hp.trans hr.symm,
        fun hm => he (type_ext (hp.trans hr.symm) hm)⟩)
  hcross := by
    intro a b hab u hu v hv
    obtain ⟨p, hp, hu⟩ := (mem_forgetRows S a u).mp hu
    obtain ⟨r, hr, hv⟩ := (mem_forgetRows S b v).mp hv
    exact S.hcross p r (coarse_lift (by simpa [hp, hr] using hab)) u hu v hv

theorem forget_canonical (hs : ∀ i a b, t i a b = t i b a)
    (hi : ∀ i a, t i a a = false) (U : Table s t) : forget (canonical hs U) = U := by
  apply Table.ext
  funext a
  ext u
  constructor
  · intro hu
    obtain ⟨p, hp, hu⟩ := (mem_forgetRows (canonical hs U) a u).mp hu
    have hm := (mem_canonicalRows U p u).mp hu
    simpa [hp] using hm.1
  · intro hu
    obtain ⟨p, hp, -⟩ := canonical_complete hi U a u hu
    exact (mem_forgetRows (canonical hs U) a u).mpr ⟨p, hp.1, hp.2⟩

def tighten (hs : ∀ i a b, t i a b = t i b a) (S : Table (apart (s := s)) t) :
    Table (apart (s := s)) t := canonical hs (forget S)

theorem tighten_retains (hs : ∀ i a b, t i a b = t i b a)
    (hi : ∀ i a, t i a a = false) (S : Table (apart (s := s)) t) :
    forget (tighten hs S) = forget S := forget_canonical hs hi (forget S)

theorem tighten_idempotent (hs : ∀ i a b, t i a b = t i b a)
    (hi : ∀ i a, t i a a = false) (S : Table (apart (s := s)) t) :
    tighten hs (tighten hs S) = tighten hs S := by
  unfold tighten
  rw [forget_canonical hs hi]

theorem precision (S : Table (apart (s := s)) t)
    (p : Ty s) (u : (i : J) → K i) (hu : u ∈ S.rows p) :
    touchMask (forget S) u ⊆ mask p := by
  intro b hb
  obtain ⟨v, hv, hc⟩ := (mem_touchMask (forget S) u b).mp hb
  obtain ⟨r, hr, hv⟩ := (mem_forgetRows S b v).mp hv
  by_contra hn
  have hpr : apart p r = true := (apart_iff p r).mpr (Or.inr (Or.inl (by simpa [hr] using hn)))
  exact hc (S.hcross p r hpr u hu v hv)

/-- Duplicated generators under different masks of a fixed label are impossible. -/
theorem unique_original_tag (hi : ∀ i a, t i a a = false) (S : Table (apart (s := s)) t)
    {p r : Ty s} (hl : label p = label r) {u : (i : J) → K i}
    (hp : u ∈ S.rows p) (hr : u ∈ S.rows r) : p = r := by
  by_contra hne
  have hs : apart p r = true := (apart_iff p r).mpr
    (Or.inl ⟨hl, fun hm => hne (type_ext hl hm)⟩)
  exact conflict_refl hi u (S.hcross p r hs u hp u hr)

end ShannonBounds.CellRetyping
