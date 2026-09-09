/- Copyright (c) 2026 Matthew Protti. Apache-2.0.
Direct BPZ bridge and finite recursion for arbitrary admissible typed substitutions.
Retyping keeps the original refined alphabet at every node. -/
import ShannonBounds.CellRetyping.Operations

set_option autoImplicit false

namespace ShannonBounds.CellRetyping
open Finset SimpleGraph ProfileCompiler

variable {A : Type*} [Fintype A] [DecidableEq A] {s : A → A → Bool} {q : ℕ}

def toBPZ (U : Table s (fun _ : Fin q => s)) : Subst A s q where
  T := U.rows
  hin := U.hin
  hcross := U.hcross

def fromBPZ (S : Subst A s q) : Table s (fun _ : Fin q => s) where
  rows := S.T
  hin := S.hin
  hcross := S.hcross

def canonicalBPZ (U : Table s (fun _ : Fin q => apart (s := s))) : Subst (Ty s) apart q :=
  toBPZ (canonical (fun _ => apart_symm) U)

def tightenBPZ (S : Subst (Ty s) apart q) : Subst (Ty s) apart q :=
  toBPZ (tighten (fun _ => apart_symm) (fromBPZ S))

theorem tightenBPZ_idempotent (S : Subst (Ty s) apart q) :
    (tightenBPZ (tightenBPZ S)).T = (tightenBPZ S).T := by
  have h := tighten_idempotent (fun _ => apart_symm) (fun _ => apart_irrefl) (fromBPZ S)
  exact congrArg Table.rows h

variable {V : Type*} [Fintype V] [DecidableEq V]
variable {G : SimpleGraph V} [DecidableRel G.Adj]

/-- Literal typed cells are transported to the actual sum of child dimensions. -/
theorem bpz_canonical_sets (e : Fin q → ℕ)
    (R : (i : Fin q) → Realisation (Ty s) apart (strongPower G (e i)))
    (U : Table s (fun _ : Fin q => apart (s := s))) (p : Ty s) :
    (Realisation.multiSubst e R (canonicalBPZ U)).P p =
      (realizedRows R (canonical (fun _ => apart_symm) U) p).image (flattenSumEquiv e V) := rfl

theorem bpz_canonical_weights (e : Fin q → ℕ)
    (R : (i : Fin q) → Realisation (Ty s) apart (strongPower G (e i)))
    (U : Table s (fun _ : Fin q => apart (s := s))) (p : Ty s) :
    (Realisation.multiSubst e R (canonicalBPZ U)).w p =
      ∑ u ∈ canonicalRows U p, ∏ i, (R i).w (u i) := w_multiSubst e R (canonicalBPZ U) p

/-- Unlike R7's coarse-recipe constructor, this accepts an arbitrary admissible
substitution in the same alphabet, including canonicalBPZ and tightenBPZ. -/
inductive Recipe (A : Type*) [Fintype A] (s : A → A → Bool) (B : Type*) where
  | seed (b : B)
  | node {q : ℕ} (S : Subst A s q) (children : Fin q → Recipe A s B)

variable {B : Type*}

def Recipe.dimension (d : B → ℕ) : Recipe A s B → ℕ
  | .seed b => d b
  | .node _ children => ∑ i, (children i).dimension d

def Recipe.evaluate {d : B → ℕ}
    (base : (b : B) → Realisation A s (strongPower G (d b))) :
    (r : Recipe A s B) → Realisation A s (strongPower G (r.dimension d))
  | .seed b => base b
  | .node S children => Realisation.multiSubst
      (fun i => (children i).dimension d) (fun i => (children i).evaluate base) S

def Recipe.weights (w0 : B → A → ℕ) : Recipe A s B → A → ℕ
  | .seed b => w0 b
  | .node S children => fun a => ∑ u ∈ S.T a, ∏ i, (children i).weights w0 (u i)

theorem Recipe.weight_node {d : B → ℕ}
    (base : (b : B) → Realisation A s (strongPower G (d b)))
    (S : Subst A s q) (children : Fin q → Recipe A s B) (a : A) :
    ((Recipe.node S children).evaluate base).w a =
      ∑ u ∈ S.T a, ∏ i, ((children i).evaluate base).w (u i) := w_multiSubst _ _ S a

theorem Recipe.exact_weights {d : B → ℕ}
    (base : (b : B) → Realisation A s (strongPower G (d b))) (r : Recipe A s B) (a : A) :
    (r.evaluate base).w a = r.weights (fun b => (base b).w) a := by
  induction r generalizing a with
  | seed b => rfl
  | node S children ih =>
    rw [Recipe.weight_node]
    change _ = ∑ u ∈ S.T a, ∏ i, (children i).weights (fun b => (base b).w) (u i)
    apply Finset.sum_congr rfl
    intro u _
    apply Finset.prod_congr rfl
    intro i _
    exact ih i (u i)

theorem Recipe.independent {d : B → ℕ}
    (base : (b : B) → Realisation A s (strongPower G (d b))) (r : Recipe A s B) (a : A) :
    (strongPower G (r.dimension d)).IsIndepSet ↑((r.evaluate base).P a) :=
  (r.evaluate base).hindep a

theorem Recipe.repeated_dimension (d : B → ℕ) (S : Subst A s 2) (r : Recipe A s B) :
    (Recipe.node S (fun _ => r)).dimension d = 2 * r.dimension d := by
  simp [Recipe.dimension]

def Recipe.profile {d : B → ℕ}
    (base : (b : B) → Realisation (Ty s) apart (strongPower G (d b)))
    (r : Recipe (Ty s) apart B) : Profile A s (strongPower G (r.dimension d)) :=
  toProfile (r.evaluate base)

end ShannonBounds.CellRetyping
