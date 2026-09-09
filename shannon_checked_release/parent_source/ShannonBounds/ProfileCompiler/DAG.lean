/- Copyright (c) 2026 Matthew Protti. Released under Apache 2.0. -/
import ShannonBounds.ProfileCompiler.Recursion

namespace ShannonBounds.ProfileCompiler

open Finset SimpleGraph

/-- A recipe node with indexed children; the same child index may occur repeatedly. -/
inductive Node (A : Type*) [Fintype A] (s : A → A → Bool) (B I : Type*) where
  | seed (b : B)
  | plain {q : ℕ} (T : Subst A s q) (children : Fin q → I)
  | augment {q : ℕ} (T : Subst A s q) (E : Code A s q) (a : A) (children : Fin q → I)

variable {A : Type*} [Fintype A] [DecidableEq A] {s : A → A → Bool}
variable {B I : Type*}

def childOf (nodes : I → Node A s B I) (j i : I) : Prop :=
  match nodes i with
  | .seed _ => False
  | .plain _ children => ∃ k, children k = j
  | .augment _ _ _ children => ∃ k, children k = j

/-- A finite acyclic construction graph, with acyclicity expressed as
well-foundedness of the child relation. No topological ordering is assumed. -/
structure DAG (A : Type*) [Fintype A] (s : A → A → Bool) (B I : Type*) [Fintype I] where
  node : I → Node A s B I
  wellFounded : WellFounded (childOf node)

variable [Fintype I]

/-- Direct well-founded unfolding into a finite recipe, retaining every child occurrence. -/
def DAG.unfold (D : DAG A s B I) : I → Recipe A s B :=
  D.wellFounded.fix fun i rec =>
    match hn : D.node i with
    | .seed b => .seed b
    | .plain T children => .plain T (fun k => rec (children k) (by
        simp only [childOf, hn]
        exact ⟨k, rfl⟩))
    | .augment T E a children => .augment T E a (fun k => rec (children k) (by
        simp only [childOf, hn]
        exact ⟨k, rfl⟩))

theorem DAG.unfold_seed (D : DAG A s B I) (i : I) (b : B) (hn : D.node i = .seed b) :
    D.unfold i = .seed b := by
  unfold DAG.unfold
  rw [WellFounded.fix_eq]
  split <;> simp_all

theorem DAG.unfold_plain (D : DAG A s B I) (i : I) {q : ℕ} (T : Subst A s q)
    (children : Fin q → I) (hn : D.node i = .plain T children) :
    D.unfold i = .plain T (fun k => D.unfold (children k)) := by
  unfold DAG.unfold
  rw [WellFounded.fix_eq]
  split <;> simp_all
  rcases hn with ⟨rfl, _, hchildren⟩
  cases hchildren
  rfl

theorem DAG.unfold_augment (D : DAG A s B I) (i : I) {q : ℕ} (T : Subst A s q)
    (E : Code A s q) (a : A) (children : Fin q → I)
    (hn : D.node i = .augment T E a children) :
    D.unfold i = .augment T E a (fun k => D.unfold (children k)) := by
  unfold DAG.unfold
  rw [WellFounded.fix_eq]
  split <;> simp_all
  rcases hn with ⟨rfl, _, _, _, hchildren⟩
  cases hchildren
  rfl

def DAG.dimension (D : DAG A s B I) (d : B → ℕ) (i : I) : ℕ :=
  (D.unfold i).dimension d

theorem DAG.dimension_plain (D : DAG A s B I) (d : B → ℕ) (i : I) {q : ℕ}
    (T : Subst A s q) (children : Fin q → I) (hn : D.node i = .plain T children) :
    D.dimension d i = ∑ k, D.dimension d (children k) := by
  unfold DAG.dimension
  rw [D.unfold_plain i T children hn]
  rfl

theorem DAG.dimension_augment (D : DAG A s B I) (d : B → ℕ) (i : I) {q : ℕ}
    (T : Subst A s q) (E : Code A s q) (a : A) (children : Fin q → I)
    (hn : D.node i = .augment T E a children) :
    D.dimension d i = ∑ k, D.dimension d (children k) := by
  unfold DAG.dimension
  rw [D.unfold_augment i T E a children hn]
  rfl

/-- Sharing a child never merges its two coordinate occurrences. -/
theorem DAG.repeated_child_dimension (D : DAG A s B I) (d : B → ℕ) (i j : I)
    (T : Subst A s 2) (hn : D.node i = .plain T (fun _ => j)) :
    D.dimension d i = 2 * D.dimension d j := by
  rw [D.dimension_plain d i T (fun _ => j) hn]
  simp

variable {V : Type*} [Fintype V] [DecidableEq V]
variable {G : SimpleGraph V} [DecidableRel G.Adj] {d : B → ℕ}

/-- The actual graph realization at any finite DAG node. -/
def DAG.evaluate (D : DAG A s B I) (hs : ∀ b c, s b c = s c b)
    (base : (b : B) → Realisation (Ty s) apart (strongPower G (d b))) (i : I) :
    Realisation (Ty s) apart (strongPower G (D.dimension d i)) :=
  (D.unfold i).evaluate hs base

theorem DAG.independent (D : DAG A s B I) (hs : ∀ b c, s b c = s c b)
    (base : (b : B) → Realisation (Ty s) apart (strongPower G (d b))) (i : I) (p : Ty s) :
    (strongPower G (D.dimension d i)).IsIndepSet ↑((D.evaluate hs base i).P p) :=
  (D.evaluate hs base i).hindep p

theorem DAG.exact_weights (D : DAG A s B I) (hs : ∀ b c, s b c = s c b)
    (base : (b : B) → Realisation (Ty s) apart (strongPower G (d b))) (i : I) (p : Ty s) :
    (D.evaluate hs base i).w p = (D.unfold i).weights (fun b => (base b).w) p :=
  Recipe.exact_weights hs base (D.unfold i) p

theorem DAG.weight_plain (D : DAG A s B I) (hs : ∀ b c, s b c = s c b)
    (base : (b : B) → Realisation (Ty s) apart (strongPower G (d b))) (i : I)
    {q : ℕ} (T : Subst A s q) (children : Fin q → I)
    (hn : D.node i = .plain T children) (p : Ty s) :
    (D.evaluate hs base i).w p =
      ∑ z ∈ ordinaryRows T p, ∏ k, (D.evaluate hs base (children k)).w (z k) := by
  exact (congrArg (fun r : Recipe A s B => (r.evaluate hs base).w p)
    (D.unfold_plain i T children hn)).trans
      (Recipe.weight_plain hs base T (fun k => D.unfold (children k)) p)

theorem DAG.weight_augment (D : DAG A s B I) (hs : ∀ b c, s b c = s c b)
    (base : (b : B) → Realisation (Ty s) apart (strongPower G (d b))) (i : I)
    {q : ℕ} (T : Subst A s q) (E : Code A s q) (a : A) (children : Fin q → I)
    (hn : D.node i = .augment T E a children) (p : Ty s) :
    (D.evaluate hs base i).w p =
      ∑ z ∈ augmentedRows T E a p, ∏ k, (D.evaluate hs base (children k)).w (z k) := by
  exact (congrArg (fun r : Recipe A s B => (r.evaluate hs base).w p)
    (D.unfold_augment i T E a children hn)).trans
      (Recipe.weight_augment hs base T E a (fun k => D.unfold (children k)) p)

/-- The same coarse partition and avoidance invariant survives at every DAG node. -/
def DAG.profile (D : DAG A s B I) (hs : ∀ b c, s b c = s c b)
    (base : (b : B) → Realisation (Ty s) apart (strongPower G (d b))) (i : I) :
    Profile A s (strongPower G (D.dimension d i)) := toProfile (D.evaluate hs base i)

end ShannonBounds.ProfileCompiler
