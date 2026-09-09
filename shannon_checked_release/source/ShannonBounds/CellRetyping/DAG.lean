/- Copyright (c) 2026 Matthew Protti. Apache-2.0.
Well-founded finite DAGs over arbitrary admissible same-alphabet substitutions.
Adapted from the accepted R7 DAG proof, with retyping-compatible node semantics. -/
import ShannonBounds.CellRetyping.Recursion
import ShannonBounds.ProfileCompiler.Cardinality

set_option autoImplicit false

namespace ShannonBounds.CellRetyping
open Finset SimpleGraph ProfileCompiler

inductive Node (A : Type*) [Fintype A] (s : A → A → Bool) (B I : Type*) where
  | seed (b : B)
  | node {q : ℕ} (S : Subst A s q) (children : Fin q → I)

variable {A : Type*} [Fintype A] [DecidableEq A] {s : A → A → Bool} {B I : Type*}

def childOf (nodes : I → Node A s B I) (j i : I) : Prop :=
  match nodes i with
  | .seed _ => False
  | .node _ children => ∃ k, children k = j

structure DAG (A : Type*) [Fintype A] (s : A → A → Bool) (B I : Type*) [Fintype I] where
  node : I → Node A s B I
  wellFounded : WellFounded (childOf node)

variable [Fintype I]

def DAG.unfold (D : DAG A s B I) : I → Recipe A s B :=
  D.wellFounded.fix fun i rec =>
    match hn : D.node i with
    | .seed b => .seed b
    | .node S children => .node S (fun k => rec (children k) (by
        simp only [childOf, hn]
        exact ⟨k, rfl⟩))

theorem DAG.unfold_seed (D : DAG A s B I) (i : I) (b : B) (hn : D.node i = .seed b) :
    D.unfold i = .seed b := by
  unfold DAG.unfold
  rw [WellFounded.fix_eq]
  split <;> simp_all

theorem DAG.unfold_node (D : DAG A s B I) (i : I) {q : ℕ} (S : Subst A s q)
    (children : Fin q → I) (hn : D.node i = .node S children) :
    D.unfold i = .node S (fun k => D.unfold (children k)) := by
  unfold DAG.unfold
  rw [WellFounded.fix_eq]
  split <;> simp_all
  rcases hn with ⟨rfl, _, hchildren⟩
  cases hchildren
  rfl

def DAG.dimension (D : DAG A s B I) (d : B → ℕ) (i : I) : ℕ := (D.unfold i).dimension d

theorem DAG.dimension_node (D : DAG A s B I) (d : B → ℕ) (i : I) {q : ℕ}
    (S : Subst A s q) (children : Fin q → I) (hn : D.node i = .node S children) :
    D.dimension d i = ∑ k, D.dimension d (children k) := by
  unfold DAG.dimension
  rw [D.unfold_node i S children hn]
  rfl

theorem DAG.repeated_child_dimension (D : DAG A s B I) (d : B → ℕ) (i j : I)
    (S : Subst A s 2) (hn : D.node i = .node S (fun _ => j)) :
    D.dimension d i = 2 * D.dimension d j := by
  rw [D.dimension_node d i S (fun _ => j) hn]
  simp

variable {V : Type*} [Fintype V] [DecidableEq V]
variable {G : SimpleGraph V} [DecidableRel G.Adj] {d : B → ℕ}

def DAG.evaluate (D : DAG A s B I)
    (base : (b : B) → Realisation A s (strongPower G (d b))) (i : I) :
    Realisation A s (strongPower G (D.dimension d i)) := (D.unfold i).evaluate base

theorem DAG.independent (D : DAG A s B I)
    (base : (b : B) → Realisation A s (strongPower G (d b))) (i : I) (a : A) :
    (strongPower G (D.dimension d i)).IsIndepSet ↑((D.evaluate base i).P a) :=
  (D.evaluate base i).hindep a

theorem DAG.exact_weights (D : DAG A s B I)
    (base : (b : B) → Realisation A s (strongPower G (d b))) (i : I) (a : A) :
    (D.evaluate base i).w a = (D.unfold i).weights (fun b => (base b).w) a :=
  Recipe.exact_weights base (D.unfold i) a

theorem DAG.weight_node (D : DAG A s B I)
    (base : (b : B) → Realisation A s (strongPower G (d b))) (i : I)
    {q : ℕ} (S : Subst A s q) (children : Fin q → I)
    (hn : D.node i = .node S children) (a : A) :
    (D.evaluate base i).w a = ∑ u ∈ S.T a, ∏ k, (D.evaluate base (children k)).w (u k) := by
  exact (congrArg (fun r : Recipe A s B => (r.evaluate base).w a)
    (D.unfold_node i S children hn)).trans
      (Recipe.weight_node base S (fun k => D.unfold (children k)) a)

def DAG.profile (D : DAG (Ty s) apart B I)
    (base : (b : B) → Realisation (Ty s) apart (strongPower G (d b))) (i : I) :
    Profile A s (strongPower G (D.dimension d i)) := toProfile (D.evaluate base i)

end ShannonBounds.CellRetyping
