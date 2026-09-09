/-
Copyright (c) 2026 Matthew Protti. Released under Apache 2.0.
Finite recipe trees and direct unfolding of well-founded finite construction DAGs.
Each child occurrence contributes a separate coordinate block.
-/
import ShannonBounds.ProfileCompiler.Pruning

namespace ShannonBounds.ProfileCompiler

open Finset SimpleGraph

/-- Finite recipes using the same normalized type alphabet at every node.
The seed index type may be arbitrary; each individual recipe is finite. -/
inductive Recipe (A : Type*) [Fintype A] (s : A → A → Bool) (B : Type*) where
  | seed (b : B)
  | plain {q : ℕ} (T : Subst A s q) (children : Fin q → Recipe A s B)
  | augment {q : ℕ} (T : Subst A s q) (E : Code A s q) (a : A)
      (children : Fin q → Recipe A s B)

variable {A : Type*} [Fintype A] [DecidableEq A] {s : A → A → Bool} {B : Type*}

/-- Dimensions add over coordinate occurrences, including repetitions. -/
def Recipe.dimension (d : B → ℕ) : Recipe A s B → ℕ
  | .seed b => d b
  | .plain _ children => ∑ i, Recipe.dimension d (children i)
  | .augment _ _ _ children => ∑ i, Recipe.dimension d (children i)

variable {V : Type*} [Fintype V] [DecidableEq V]
variable {G : SimpleGraph V} [DecidableRel G.Adj] {d : B → ℕ}

/-- Recursive construction in the actual summed strong power, using BPZ's
heterogeneous product and graph-isomorphism transport at each node. -/
def Recipe.evaluate (hs : ∀ b c, s b c = s c b)
    (base : (b : B) → Realisation (Ty s) apart (strongPower G (d b))) :
    (r : Recipe A s B) → Realisation (Ty s) apart (strongPower G (r.dimension d))
  | .seed b => base b
  | .plain T children => Realisation.multiSubst
      (fun i => (children i).dimension d)
      (fun i => (children i).evaluate hs base) (ordinary T)
  | .augment T E a children => Realisation.multiSubst
      (fun i => (children i).dimension d)
      (fun i => (children i).evaluate hs base) (augmented hs T E a)

/-- The corresponding formal weight computation, independent of graph vertices. -/
def Recipe.weights (w0 : B → Ty s → ℕ) : Recipe A s B → Ty s → ℕ
  | .seed b => w0 b
  | .plain T children => fun p =>
      ∑ z ∈ ordinaryRows T p, ∏ i, Recipe.weights w0 (children i) (z i)
  | .augment T E a children => fun p =>
      ∑ z ∈ augmentedRows T E a p, ∏ i, Recipe.weights w0 (children i) (z i)

theorem Recipe.weight_plain (hs : ∀ b c, s b c = s c b)
    (base : (b : B) → Realisation (Ty s) apart (strongPower G (d b)))
    {q : ℕ} (T : Subst A s q) (children : Fin q → Recipe A s B) (p : Ty s) :
    ((Recipe.plain T children).evaluate hs base).w p =
      ∑ z ∈ ordinaryRows T p, ∏ i, ((children i).evaluate hs base).w (z i) :=
  w_multiSubst _ _ (ordinary T) p

theorem Recipe.weight_augment (hs : ∀ b c, s b c = s c b)
    (base : (b : B) → Realisation (Ty s) apart (strongPower G (d b)))
    {q : ℕ} (T : Subst A s q) (E : Code A s q) (a : A)
    (children : Fin q → Recipe A s B) (p : Ty s) :
    ((Recipe.augment T E a children).evaluate hs base).w p =
      ∑ z ∈ augmentedRows T E a p, ∏ i, ((children i).evaluate hs base).w (z i) :=
  w_multiSubst _ _ (augmented hs T E a) p

/-- Exact cardinalities are preserved throughout every finite recipe. -/
theorem Recipe.exact_weights (hs : ∀ b c, s b c = s c b)
    (base : (b : B) → Realisation (Ty s) apart (strongPower G (d b)))
    (r : Recipe A s B) (p : Ty s) :
    (r.evaluate hs base).w p = r.weights (fun b => (base b).w) p := by
  induction r generalizing p with
  | seed b => rfl
  | plain T children ih =>
      rw [Recipe.weight_plain]
      change _ = ∑ z ∈ ordinaryRows T p, ∏ i, (children i).weights (fun b => (base b).w) (z i)
      apply Finset.sum_congr rfl
      intro z _
      apply Finset.prod_congr rfl
      intro i _
      exact ih i (z i)
  | augment T E a children ih =>
      rw [Recipe.weight_augment]
      change _ = ∑ z ∈ augmentedRows T E a p, ∏ i, (children i).weights (fun b => (base b).w) (z i)
      apply Finset.sum_congr rfl
      intro z _
      apply Finset.prod_congr rfl
      intro i _
      exact ih i (z i)

/-- Every finite recipe returns independent sets in the stated physical dimension. -/
theorem Recipe.independent (hs : ∀ b c, s b c = s c b)
    (base : (b : B) → Realisation (Ty s) apart (strongPower G (d b)))
    (r : Recipe A s B) (p : Ty s) :
    (strongPower G (r.dimension d)).IsIndepSet ↑((r.evaluate hs base).P p) :=
  (r.evaluate hs base).hindep p

/-- The avoidance invariant is available again after every node, so iteration
requires no fresh profile-validity hypothesis. -/
def Recipe.profile (hs : ∀ b c, s b c = s c b)
    (base : (b : B) → Realisation (Ty s) apart (strongPower G (d b)))
    (r : Recipe A s B) : Profile A s (strongPower G (r.dimension d)) :=
  toProfile (r.evaluate hs base)

end ShannonBounds.ProfileCompiler
