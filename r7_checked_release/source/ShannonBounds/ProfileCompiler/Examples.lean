/-
Copyright (c) 2026 Matthew Protti. Released under Apache 2.0.
Separate finite examples and explicit refutations of defective variants.
None of the universal modules imports this file. All computations use `decide`,
not native_decide, so their arithmetic evidence is reduced by the Lean kernel.
-/
import ShannonBounds.ProfileCompiler.Cardinality
import ShannonBounds.ProfileCompiler.Semantics
import ShannonBounds.PortRealisation

namespace ShannonBounds.ProfileCompiler.Examples

open Finset SimpleGraph
set_option maxRecDepth 4096
set_option maxHeartbeats 4000000

theorem bpz_alphabet_cardinality : Fintype.card (Ty Letter.sep) = 58 := by
  rw [alphabet_cardinality Letter.sep_irrefl]
  decide

def noSeparation : Fin 2 → Fin 2 → Bool := fun _ _ => false

def bOnly : Ty noSeparation := ⟨(0, {0}), by decide⟩
def nOnly : Ty noSeparation := ⟨(1, {1}), by decide⟩
def bBoth : Ty noSeparation := ⟨(0, {0, 1}), by decide⟩

def identityRule : Subst (Fin 2) noSeparation 1 where
  T a := {fun _ => a}
  hin := by decide
  hcross := by decide

def singletonCode (a : Fin 2) : Code (Fin 2) noSeparation 1 where
  C := {fun _ => a}
  hsep := by
    intro x hx y hy hne
    simp only [Finset.mem_singleton] at hx hy
    exact (hne (hx.trans hy.symm)).elim

def wordB : Fin 1 → Ty noSeparation := fun _ => bOnly
def wordN : Fin 1 → Ty noSeparation := fun _ => nOnly

/-- Deliberately defective: old masks are left stale after the new B addition. -/
def staleRows (p : Ty noSeparation) : Finset (Fin 1 → Ty noSeparation) :=
  univ.filter fun z => Old identityRule (fun _ m => m) p z ∨
    New identityRule (singletonCode 1) 0 p z

theorem stale_old_membership : wordN ∈ staleRows nOnly := by decide
theorem stale_new_membership : wordN ∈ staleRows bBoth := by decide
theorem stale_output_separated : apart bBoth nOnly = true := by decide

/-- Explicit same-word cross-row witness refutes stale-mask admissibility. -/
theorem stale_masks_refuted :
    ¬ ∃ S : Subst (Ty noSeparation) apart 1, S.T = staleRows := by
  rintro ⟨S, hs⟩
  have hn : wordN ∈ S.T nOnly := by rw [hs]; exact stale_old_membership
  have hb : wordN ∈ S.T bBoth := by rw [hs]; exact stale_new_membership
  obtain ⟨i, hi⟩ := S.hcross bBoth nOnly stale_output_separated wordN hb wordN hn
  simp at hi

/-- Deliberately defective: the guard protects neighbours but omits the target. -/
abbrev unprotectedNew (p : Ty noSeparation) (z : Fin 1 → Ty noSeparation) : Prop :=
  label p = 0 ∧ labels z ∈ (singletonCode 0).C ∧
    Disjoint (phi identityRule z) (neighbours noSeparation 0) ∧
    mask p = insert 0 (phi identityRule z)

theorem omitted_protection_collision :
    Old identityRule (update noSeparation 0) bOnly wordB ∧ unprotectedNew bOnly wordB := by
  decide

def emptyGraph : SimpleGraph (Fin 2) := ⊥
instance emptyGraphDecidable : DecidableRel emptyGraph.Adj :=
  fun _ _ => inferInstanceAs (Decidable False)

/-- Two distinct nonadjacent points with singleton coarse families. -/
def tinyRealisation : Realisation (Ty noSeparation) apart emptyGraph where
  P p := if p = bOnly then {0} else if p = nOnly then {1} else ∅
  hindep := by decide
  hsep := by
    unfold Sep
    decide

def unprotectedCells : Finset (Fin 1 → Ty noSeparation) :=
  univ.filter fun z => labels z ∈ (singletonCode 0).C ∧
    Disjoint (phi identityRule z) (neighbours noSeparation 0)

def oldTarget : Finset (Fin 1 → Fin 2) :=
  productSubstSet (fun _ => coarsen tinyRealisation) identityRule 0

def badAddition : Finset (Fin 1 → Fin 2) :=
  unprotectedCells.biUnion (rectangle (fun _ => tinyRealisation))

theorem omitted_self_has_overlap :
    (fun _ : Fin 1 => (0 : Fin 2)) ∈ oldTarget ∧
    (fun _ : Fin 1 => (0 : Fin 2)) ∈ badAddition := by decide

theorem omitted_self_counts :
    oldTarget.card = 1 ∧ badAddition.card = 1 ∧ (oldTarget ∪ badAddition).card = 1 := by
  decide

/-- The claimed additive-gain formula would say 1 = 2 without target protection. -/
theorem omitted_self_gain_refuted :
    (oldTarget ∪ badAddition).card ≠ oldTarget.card + badAddition.card := by decide

end ShannonBounds.ProfileCompiler.Examples
