/- Copyright (c) 2026 Matthew Protti. Apache-2.0.
Kernel-checked boundary examples: mandatory witness bits and empty coordinates.
These are examples of the symbolic theorems, not a proof by finite exhaustion. -/
import ShannonBounds.CellRetyping.DAG

set_option autoImplicit false
namespace ShannonBounds.CellRetyping.Examples
open Finset ProfileCompiler

def noSep (_ _ : Bool) : Bool := false
def input (_ : Fin 1) (_ _ : Bool) : Bool := false
def word (a : Bool) : Fin 1 → Bool := fun _ => a
def twoRows : Table noSep input where
  rows a := {word a}
  hin := by
    intro a u hu v hv hne
    simp only [mem_singleton] at hu hv
    exact False.elim (hne (hu.trans hv.symm))
  hcross := by intro _ _ h; contradiction

theorem input_symm : ∀ i a b, input i a b = input i b a := by intros; rfl
theorem input_irrefl : ∀ i a, input i a a = false := by intros; rfl

theorem full_touch (a : Bool) : touchMask twoRows (word a) = univ := by
  cases a <;> decide

/-- The second label has an actual conflict witness in the canonical realization. -/
theorem actual_witness : ∃ v ∈ realizedRows (singletons input_symm input_irrefl) twoRows true,
    conflict (productGraph (witnessGraph input_symm)) (word false) v := by
  apply (exact_touch_witness input_symm input_irrefl twoRows (word false) true).mp
  rw [full_touch]; simp

theorem omitted_bit_refuted : ¬ (touchMask twoRows (word false) ⊆ {false}) := by
  rw [full_touch]
  intro h
  have bad := h (mem_univ true)
  simp at bad

abbrev EmptyWord := (i : Fin 0) → Fin 0
def emptyWord : EmptyWord := fun i => Fin.elim0 i
def emptyInput (i : Fin 0) : Fin 0 → Fin 0 → Bool := Fin.elim0 i
def emptyCoordinateRows : Table noSep emptyInput where
  rows _ := {emptyWord}
  hin := by
    intro a u hu v hv hne
    simp only [mem_singleton] at hu hv
    exact False.elim (hne (hu.trans hv.symm))
  hcross := by intro _ _ h; contradiction

theorem emptyCoordinate_retention :
    forget (canonical (fun i => Fin.elim0 i) emptyCoordinateRows) = emptyCoordinateRows :=
  forget_canonical (fun i => Fin.elim0 i) (fun i => Fin.elim0 i) emptyCoordinateRows

theorem emptyProduct_cardinality :
    (rectangle (singletons (t := emptyInput) (fun i : Fin 0 => Fin.elim0 i) (fun i => Fin.elim0 i)) emptyWord).card = 1 := by
  rw [singleton_rectangle]
  simp

end ShannonBounds.CellRetyping.Examples
