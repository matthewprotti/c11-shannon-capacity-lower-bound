/- Copyright (c) 2026 Matthew Protti. Apache-2.0.
Generated from the frozen R6 certificates; the BPZ framework is unchanged. -/
import ShannonBounds.C11R6Tables
import ShannonBounds.C11R6History

set_option autoImplicit false
set_option maxRecDepth 4000000
set_option maxHeartbeats 0
set_option synthInstance.maxSize 4000
set_option exponentiation.threshold 20000

namespace ShannonBounds.C11R6D213

open SimpleGraph C11R6Base C11R6Tables

def N : Nat := 15576025705482926919349953542643365905237782337909670850715691763072207372542781005458638810301625659402522397392173748140017563747809127752382797850207774

section Generic

variable {α : Type*} [Fintype α] [DecidableEq α]
  {G : SimpleGraph α} [DecidableRel G.Adj]

def R_v (R : Realisation Ty typedSep G) :
    Realisation Ty typedSep (strongPower G 1) := R.mapIso (strongPower_one_iso G).symm
def w_v : Ty → Nat := C11R6Base.w0
theorem step_v (R : Realisation Ty typedSep G)
    (h : ∀ a, R.w a = C11R6Base.w0 a) (a : Ty) : (R_v R).w a = w_v a := by
  rw [R_v, Realisation.w_mapIso]
  exact h a

def e_n1 : Fin 2 → Nat := (Fin.cases (1) (fun _ => 1))

def ch_n1 (R : Realisation Ty typedSep G) :
    (i : Fin 2) → Realisation Ty typedSep (strongPower G (e_n1 i)) :=
  (Fin.cases (R_v R) (fun _ => R_v R))

def R_n1 (R : Realisation Ty typedSep G) :
    Realisation Ty typedSep (strongPower G 2) :=
  Realisation.multiSubst e_n1 (ch_n1 R) S_564505af0066fa9bc893

def w_n1 (a : Ty) : Nat :=
  match a.val with
  | 0 => 0
  | 1 => 16129
  | 2 => 9
  | 3 => 2376
  | 4 => 0
  | 5 => 2367
  | 6 => 0
  | 7 => 162
  | 8 => 0
  | 9 => 20173
  | 10 => 0
  | 11 => 0
  | 12 => 0
  | 13 => 0
  | 14 => 0
  | 15 => 879
  | 16 => 0
  | 17 => 0
  | 18 => 0
  | 19 => 0
  | 20 => 0
  | 21 => 0
  | 22 => 0
  | 23 => 852
  | 24 => 0
  | 25 => 0
  | 26 => 0
  | 27 => 0
  | 28 => 0
  | 29 => 0
  | 30 => 0
  | 31 => 0
  | 32 => 0
  | 33 => 0
  | 34 => 0
  | 35 => 0
  | 36 => 0
  | 37 => 0
  | 38 => 0
  | 39 => 0
  | 40 => 0
  | 41 => 0
  | 42 => 0
  | 43 => 0
  | 44 => 0
  | 45 => 0
  | 46 => 0
  | 47 => 861
  | 48 => 0
  | 49 => 0
  | 50 => 0
  | 51 => 0
  | 52 => 0
  | 53 => 0
  | 54 => 0
  | 55 => 870
  | 56 => 0
  | 57 => 0
  | _ => 0

theorem polynomial_n1 : ∀ a : Ty,
    (∑ x ∈ S_564505af0066fa9bc893.T a, w_v (x 0) * w_v (x 1)) = w_n1 a := by native_decide

theorem step_n1 (R : Realisation Ty typedSep G)
    (h : ∀ a, R.w a = C11R6Base.w0 a) :
    ∀ a, (R_n1 R).w a = w_n1 a := by
  intro a
  change (Realisation.multiSubst e_n1 (ch_n1 R) S_564505af0066fa9bc893).w a = w_n1 a
  rw [w_multiSubst]
  have h0 : ∀ b, (ch_n1 R 0).w b = w_v b :=
    fun b => step_v R h b
  have h1 : ∀ b, (ch_n1 R 1).w b = w_v b :=
    fun b => step_v R h b
  simp only [Fin.prod_univ_two, h0, h1]
  exact polynomial_n1 a

def e_n2 : Fin 3 → Nat := (Fin.cases (1) (Fin.cases (1) (fun _ => 1)))

def ch_n2 (R : Realisation Ty typedSep G) :
    (i : Fin 3) → Realisation Ty typedSep (strongPower G (e_n2 i)) :=
  (Fin.cases (R_v R) (Fin.cases (R_v R) (fun _ => R_v R)))

def R_n2 (R : Realisation Ty typedSep G) :
    Realisation Ty typedSep (strongPower G 3) :=
  Realisation.multiSubst e_n2 (ch_n2 R) S_bc598aabfc397b015309

def w_n2 (a : Ty) : Nat :=
  match a.val with
  | 0 => 0
  | 1 => 2051020
  | 2 => 3645
  | 3 => 468702
  | 4 => 0
  | 5 => 467073
  | 6 => 0
  | 7 => 66096
  | 8 => 0
  | 9 => 2867365
  | 10 => 0
  | 11 => 0
  | 12 => 0
  | 13 => 0
  | 14 => 0
  | 15 => 193005
  | 16 => 0
  | 17 => 0
  | 18 => 0
  | 19 => 0
  | 20 => 0
  | 21 => 0
  | 22 => 0
  | 23 => 181476
  | 24 => 0
  | 25 => 0
  | 26 => 0
  | 27 => 0
  | 28 => 0
  | 29 => 0
  | 30 => 0
  | 31 => 0
  | 32 => 0
  | 33 => 0
  | 34 => 0
  | 35 => 0
  | 36 => 0
  | 37 => 0
  | 38 => 0
  | 39 => 0
  | 40 => 0
  | 41 => 0
  | 42 => 0
  | 43 => 0
  | 44 => 0
  | 45 => 0
  | 46 => 0
  | 47 => 185310
  | 48 => 0
  | 49 => 0
  | 50 => 0
  | 51 => 0
  | 52 => 0
  | 53 => 0
  | 54 => 0
  | 55 => 189144
  | 56 => 0
  | 57 => 0
  | _ => 0

theorem polynomial_n2 : ∀ a : Ty,
    (∑ x ∈ S_bc598aabfc397b015309.T a, w_v (x 0) * w_v (x 1) * w_v (x 2)) = w_n2 a := by native_decide

theorem step_n2 (R : Realisation Ty typedSep G)
    (h : ∀ a, R.w a = C11R6Base.w0 a) :
    ∀ a, (R_n2 R).w a = w_n2 a := by
  intro a
  change (Realisation.multiSubst e_n2 (ch_n2 R) S_bc598aabfc397b015309).w a = w_n2 a
  rw [w_multiSubst]
  have h0 : ∀ b, (ch_n2 R 0).w b = w_v b :=
    fun b => step_v R h b
  have h1 : ∀ b, (ch_n2 R 1).w b = w_v b :=
    fun b => step_v R h b
  have h2 : ∀ b, (ch_n2 R 2).w b = w_v b :=
    fun b => step_v R h b
  simp only [Fin.prod_univ_three, h0, h1, h2]
  exact polynomial_n2 a

def e_n3 : Fin 3 → Nat := (Fin.cases (2) (Fin.cases (3) (fun _ => 2)))

def ch_n3 (R : Realisation Ty typedSep G) :
    (i : Fin 3) → Realisation Ty typedSep (strongPower G (e_n3 i)) :=
  (Fin.cases (R_n1 R) (Fin.cases (R_n2 R) (fun _ => R_n1 R)))

def R_n3 (R : Realisation Ty typedSep G) :
    Realisation Ty typedSep (strongPower G 7) :=
  Realisation.multiSubst e_n3 (ch_n3 R) S_1de129ef1fff89d74bef

def w_n3 (a : Ty) : Nat :=
  match a.val with
  | 0 => 0
  | 1 => 0
  | 2 => 10348241425191
  | 3 => 873910628711659
  | 4 => 0
  | 5 => 0
  | 6 => 0
  | 7 => 487846922426946
  | 8 => 0
  | 9 => 1176747600597757
  | 10 => 0
  | 11 => 123883688790
  | 12 => 0
  | 13 => 0
  | 14 => 0
  | 15 => 206512641465897
  | 16 => 0
  | 17 => 0
  | 18 => 0
  | 19 => 0
  | 20 => 0
  | 21 => 0
  | 22 => 0
  | 23 => 172416720778284
  | 24 => 0
  | 25 => 0
  | 26 => 0
  | 27 => 0
  | 28 => 0
  | 29 => 0
  | 30 => 0
  | 31 => 0
  | 32 => 0
  | 33 => 0
  | 34 => 0
  | 35 => 0
  | 36 => 0
  | 37 => 0
  | 38 => 0
  | 39 => 0
  | 40 => 0
  | 41 => 0
  | 42 => 0
  | 43 => 0
  | 44 => 0
  | 45 => 0
  | 46 => 119173372740
  | 47 => 183584818124553
  | 48 => 0
  | 49 => 0
  | 50 => 0
  | 51 => 0
  | 52 => 0
  | 53 => 0
  | 54 => 0
  | 55 => 194991257087544
  | 56 => 0
  | 57 => 0
  | _ => 0

theorem polynomial_n3 : ∀ a : Ty,
    (∑ x ∈ S_1de129ef1fff89d74bef.T a, w_n1 (x 0) * w_n2 (x 1) * w_n1 (x 2)) = w_n3 a := by native_decide

theorem step_n3 (R : Realisation Ty typedSep G)
    (h : ∀ a, R.w a = C11R6Base.w0 a) :
    ∀ a, (R_n3 R).w a = w_n3 a := by
  intro a
  change (Realisation.multiSubst e_n3 (ch_n3 R) S_1de129ef1fff89d74bef).w a = w_n3 a
  rw [w_multiSubst]
  have h0 : ∀ b, (ch_n3 R 0).w b = w_n1 b :=
    fun b => step_n1 R h b
  have h1 : ∀ b, (ch_n3 R 1).w b = w_n2 b :=
    fun b => step_n2 R h b
  have h2 : ∀ b, (ch_n3 R 2).w b = w_n1 b :=
    fun b => step_n1 R h b
  simp only [Fin.prod_univ_three, h0, h1, h2]
  exact polynomial_n3 a

def e_n4 : Fin 3 → Nat := (Fin.cases (1) (Fin.cases (1) (fun _ => 1)))

def ch_n4 (R : Realisation Ty typedSep G) :
    (i : Fin 3) → Realisation Ty typedSep (strongPower G (e_n4 i)) :=
  (Fin.cases (R_v R) (Fin.cases (R_v R) (fun _ => R_v R)))

def R_n4 (R : Realisation Ty typedSep G) :
    Realisation Ty typedSep (strongPower G 3) :=
  Realisation.multiSubst e_n4 (ch_n4 R) S_275feb4472b545b7b61b

def w_n4 (a : Ty) : Nat :=
  match a.val with
  | 0 => 0
  | 1 => 2051020
  | 2 => 3645
  | 3 => 468702
  | 4 => 0
  | 5 => 467073
  | 6 => 0
  | 7 => 66096
  | 8 => 0
  | 9 => 2867365
  | 10 => 0
  | 11 => 0
  | 12 => 0
  | 13 => 0
  | 14 => 0
  | 15 => 193005
  | 16 => 0
  | 17 => 0
  | 18 => 0
  | 19 => 0
  | 20 => 0
  | 21 => 0
  | 22 => 0
  | 23 => 181476
  | 24 => 0
  | 25 => 0
  | 26 => 0
  | 27 => 0
  | 28 => 0
  | 29 => 0
  | 30 => 0
  | 31 => 0
  | 32 => 0
  | 33 => 0
  | 34 => 0
  | 35 => 0
  | 36 => 0
  | 37 => 0
  | 38 => 0
  | 39 => 0
  | 40 => 0
  | 41 => 0
  | 42 => 0
  | 43 => 0
  | 44 => 0
  | 45 => 0
  | 46 => 0
  | 47 => 185310
  | 48 => 0
  | 49 => 0
  | 50 => 0
  | 51 => 0
  | 52 => 0
  | 53 => 0
  | 54 => 0
  | 55 => 189144
  | 56 => 0
  | 57 => 0
  | _ => 0

theorem polynomial_n4 : ∀ a : Ty,
    (∑ x ∈ S_275feb4472b545b7b61b.T a, w_v (x 0) * w_v (x 1) * w_v (x 2)) = w_n4 a := by native_decide

theorem step_n4 (R : Realisation Ty typedSep G)
    (h : ∀ a, R.w a = C11R6Base.w0 a) :
    ∀ a, (R_n4 R).w a = w_n4 a := by
  intro a
  change (Realisation.multiSubst e_n4 (ch_n4 R) S_275feb4472b545b7b61b).w a = w_n4 a
  rw [w_multiSubst]
  have h0 : ∀ b, (ch_n4 R 0).w b = w_v b :=
    fun b => step_v R h b
  have h1 : ∀ b, (ch_n4 R 1).w b = w_v b :=
    fun b => step_v R h b
  have h2 : ∀ b, (ch_n4 R 2).w b = w_v b :=
    fun b => step_v R h b
  simp only [Fin.prod_univ_three, h0, h1, h2]
  exact polynomial_n4 a

def e_n5 : Fin 3 → Nat := (Fin.cases (1) (Fin.cases (1) (fun _ => 3)))

def ch_n5 (R : Realisation Ty typedSep G) :
    (i : Fin 3) → Realisation Ty typedSep (strongPower G (e_n5 i)) :=
  (Fin.cases (R_v R) (Fin.cases (R_v R) (fun _ => R_n4 R)))

def R_n5 (R : Realisation Ty typedSep G) :
    Realisation Ty typedSep (strongPower G 5) :=
  Realisation.multiSubst e_n5 (ch_n5 R) S_562e2180d94b76a35d8a

def w_n5 (a : Ty) : Nat :=
  match a.val with
  | 0 => 0
  | 1 => 33192561655
  | 2 => 244660887
  | 3 => 13630103199
  | 4 => 0
  | 5 => 13493746548
  | 6 => 0
  | 7 => 4088508615
  | 8 => 0
  | 9 => 58019734453
  | 10 => 0
  | 11 => 1552770
  | 12 => 0
  | 13 => 0
  | 14 => 0
  | 15 => 6890891397
  | 16 => 0
  | 17 => 0
  | 18 => 0
  | 19 => 0
  | 20 => 0
  | 21 => 0
  | 22 => 0
  | 23 => 6102277044
  | 24 => 0
  | 25 => 0
  | 26 => 0
  | 27 => 0
  | 28 => 0
  | 29 => 0
  | 30 => 0
  | 31 => 0
  | 32 => 0
  | 33 => 0
  | 34 => 0
  | 35 => 0
  | 36 => 0
  | 37 => 0
  | 38 => 0
  | 39 => 0
  | 40 => 0
  | 41 => 0
  | 42 => 0
  | 43 => 0
  | 44 => 0
  | 45 => 0
  | 46 => 1552770
  | 47 => 6363368241
  | 48 => 0
  | 49 => 0
  | 50 => 0
  | 51 => 0
  | 52 => 0
  | 53 => 0
  | 54 => 0
  | 55 => 6627553476
  | 56 => 0
  | 57 => 0
  | _ => 0

theorem polynomial_n5 : ∀ a : Ty,
    (∑ x ∈ S_562e2180d94b76a35d8a.T a, w_v (x 0) * w_v (x 1) * w_n4 (x 2)) = w_n5 a := by native_decide

theorem step_n5 (R : Realisation Ty typedSep G)
    (h : ∀ a, R.w a = C11R6Base.w0 a) :
    ∀ a, (R_n5 R).w a = w_n5 a := by
  intro a
  change (Realisation.multiSubst e_n5 (ch_n5 R) S_562e2180d94b76a35d8a).w a = w_n5 a
  rw [w_multiSubst]
  have h0 : ∀ b, (ch_n5 R 0).w b = w_v b :=
    fun b => step_v R h b
  have h1 : ∀ b, (ch_n5 R 1).w b = w_v b :=
    fun b => step_v R h b
  have h2 : ∀ b, (ch_n5 R 2).w b = w_n4 b :=
    fun b => step_n4 R h b
  simp only [Fin.prod_univ_three, h0, h1, h2]
  exact polynomial_n5 a

def e_n6 : Fin 3 → Nat := (Fin.cases (5) (Fin.cases (2) (fun _ => 3)))

def ch_n6 (R : Realisation Ty typedSep G) :
    (i : Fin 3) → Realisation Ty typedSep (strongPower G (e_n6 i)) :=
  (Fin.cases (R_n5 R) (Fin.cases (R_n1 R) (fun _ => R_n2 R)))

def R_n6 (R : Realisation Ty typedSep G) :
    Realisation Ty typedSep (strongPower G 10) :=
  Realisation.multiSubst e_n6 (ch_n6 R) S_cc72ba3cc3d211951e7b

def w_n6 (a : Ty) : Nat :=
  match a.val with
  | 0 => 0
  | 1 => 0
  | 2 => 62543165304176719785
  | 3 => 2252876316634287098722
  | 4 => 0
  | 5 => 0
  | 6 => 0
  | 7 => 1952508607989181007058
  | 8 => 0
  | 9 => 3415456343474828453815
  | 10 => 0
  | 11 => 1432058283936597150
  | 12 => 0
  | 13 => 0
  | 14 => 0
  | 15 => 922231237847622180204
  | 16 => 0
  | 17 => 0
  | 18 => 0
  | 19 => 0
  | 20 => 0
  | 21 => 0
  | 22 => 0
  | 23 => 707123428502479877964
  | 24 => 0
  | 25 => 0
  | 26 => 0
  | 27 => 0
  | 28 => 0
  | 29 => 0
  | 30 => 0
  | 31 => 0
  | 32 => 0
  | 33 => 0
  | 34 => 0
  | 35 => 0
  | 36 => 0
  | 37 => 0
  | 38 => 0
  | 39 => 0
  | 40 => 0
  | 41 => 0
  | 42 => 0
  | 43 => 0
  | 44 => 0
  | 45 => 0
  | 46 => 1264429052521558470
  | 47 => 777047086988238384588
  | 48 => 0
  | 49 => 0
  | 50 => 0
  | 51 => 0
  | 52 => 0
  | 53 => 0
  | 54 => 0
  | 55 => 849621819766550349963
  | 56 => 0
  | 57 => 0
  | _ => 0

theorem polynomial_n6 : ∀ a : Ty,
    (∑ x ∈ S_cc72ba3cc3d211951e7b.T a, w_n5 (x 0) * w_n1 (x 1) * w_n2 (x 2)) = w_n6 a := by native_decide

theorem step_n6 (R : Realisation Ty typedSep G)
    (h : ∀ a, R.w a = C11R6Base.w0 a) :
    ∀ a, (R_n6 R).w a = w_n6 a := by
  intro a
  change (Realisation.multiSubst e_n6 (ch_n6 R) S_cc72ba3cc3d211951e7b).w a = w_n6 a
  rw [w_multiSubst]
  have h0 : ∀ b, (ch_n6 R 0).w b = w_n5 b :=
    fun b => step_n5 R h b
  have h1 : ∀ b, (ch_n6 R 1).w b = w_n1 b :=
    fun b => step_n1 R h b
  have h2 : ∀ b, (ch_n6 R 2).w b = w_n2 b :=
    fun b => step_n2 R h b
  simp only [Fin.prod_univ_three, h0, h1, h2]
  exact polynomial_n6 a

def e_n7 : Fin 3 → Nat := (Fin.cases (1) (Fin.cases (1) (fun _ => 2)))

def ch_n7 (R : Realisation Ty typedSep G) :
    (i : Fin 3) → Realisation Ty typedSep (strongPower G (e_n7 i)) :=
  (Fin.cases (R_v R) (Fin.cases (R_v R) (fun _ => R_n1 R)))

def R_n7 (R : Realisation Ty typedSep G) :
    Realisation Ty typedSep (strongPower G 4) :=
  Realisation.multiSubst e_n7 (ch_n7 R) S_074e7a7a1e957b03d9a5

def w_n7 (a : Ty) : Nat :=
  match a.val with
  | 0 => 0
  | 1 => 260724547
  | 2 => 0
  | 3 => 81957375
  | 4 => 1040148
  | 5 => 82601244
  | 6 => 0
  | 7 => 18013995
  | 8 => 0
  | 9 => 407761396
  | 10 => 0
  | 11 => 0
  | 12 => 0
  | 13 => 0
  | 14 => 0
  | 15 => 34367124
  | 16 => 0
  | 17 => 0
  | 18 => 0
  | 19 => 3834
  | 20 => 0
  | 21 => 0
  | 22 => 0
  | 23 => 37672437
  | 24 => 0
  | 25 => 0
  | 26 => 0
  | 27 => 0
  | 28 => 0
  | 29 => 0
  | 30 => 0
  | 31 => 0
  | 32 => 0
  | 33 => 0
  | 34 => 0
  | 35 => 0
  | 36 => 0
  | 37 => 0
  | 38 => 0
  | 39 => 0
  | 40 => 0
  | 41 => 0
  | 42 => 0
  | 43 => 0
  | 44 => 0
  | 45 => 0
  | 46 => 0
  | 47 => 36568002
  | 48 => 0
  | 49 => 0
  | 50 => 0
  | 51 => 0
  | 52 => 0
  | 53 => 0
  | 54 => 3834
  | 55 => 35463729
  | 56 => 0
  | 57 => 0
  | _ => 0

theorem polynomial_n7 : ∀ a : Ty,
    (∑ x ∈ S_074e7a7a1e957b03d9a5.T a, w_v (x 0) * w_v (x 1) * w_n1 (x 2)) = w_n7 a := by native_decide

theorem step_n7 (R : Realisation Ty typedSep G)
    (h : ∀ a, R.w a = C11R6Base.w0 a) :
    ∀ a, (R_n7 R).w a = w_n7 a := by
  intro a
  change (Realisation.multiSubst e_n7 (ch_n7 R) S_074e7a7a1e957b03d9a5).w a = w_n7 a
  rw [w_multiSubst]
  have h0 : ∀ b, (ch_n7 R 0).w b = w_v b :=
    fun b => step_v R h b
  have h1 : ∀ b, (ch_n7 R 1).w b = w_v b :=
    fun b => step_v R h b
  have h2 : ∀ b, (ch_n7 R 2).w b = w_n1 b :=
    fun b => step_n1 R h b
  simp only [Fin.prod_univ_three, h0, h1, h2]
  exact polynomial_n7 a

def e_n8 : Fin 3 → Nat := (Fin.cases (1) (Fin.cases (1) (fun _ => 1)))

def ch_n8 (R : Realisation Ty typedSep G) :
    (i : Fin 3) → Realisation Ty typedSep (strongPower G (e_n8 i)) :=
  (Fin.cases (R_v R) (Fin.cases (R_v R) (fun _ => R_v R)))

def R_n8 (R : Realisation Ty typedSep G) :
    Realisation Ty typedSep (strongPower G 3) :=
  Realisation.multiSubst e_n8 (ch_n8 R) S_eb2a8ddaf8495ec01f08

def w_n8 (a : Ty) : Nat :=
  match a.val with
  | 0 => 0
  | 1 => 2051020
  | 2 => 0
  | 3 => 467073
  | 4 => 3645
  | 5 => 468702
  | 6 => 0
  | 7 => 66096
  | 8 => 0
  | 9 => 2867365
  | 10 => 0
  | 11 => 0
  | 12 => 0
  | 13 => 0
  | 14 => 0
  | 15 => 181476
  | 16 => 0
  | 17 => 0
  | 18 => 0
  | 19 => 0
  | 20 => 0
  | 21 => 0
  | 22 => 0
  | 23 => 193005
  | 24 => 0
  | 25 => 0
  | 26 => 0
  | 27 => 0
  | 28 => 0
  | 29 => 0
  | 30 => 0
  | 31 => 0
  | 32 => 0
  | 33 => 0
  | 34 => 0
  | 35 => 0
  | 36 => 0
  | 37 => 0
  | 38 => 0
  | 39 => 0
  | 40 => 0
  | 41 => 0
  | 42 => 0
  | 43 => 0
  | 44 => 0
  | 45 => 0
  | 46 => 0
  | 47 => 189144
  | 48 => 0
  | 49 => 0
  | 50 => 0
  | 51 => 0
  | 52 => 0
  | 53 => 0
  | 54 => 0
  | 55 => 185310
  | 56 => 0
  | 57 => 0
  | _ => 0

theorem polynomial_n8 : ∀ a : Ty,
    (∑ x ∈ S_eb2a8ddaf8495ec01f08.T a, w_v (x 0) * w_v (x 1) * w_v (x 2)) = w_n8 a := by native_decide

theorem step_n8 (R : Realisation Ty typedSep G)
    (h : ∀ a, R.w a = C11R6Base.w0 a) :
    ∀ a, (R_n8 R).w a = w_n8 a := by
  intro a
  change (Realisation.multiSubst e_n8 (ch_n8 R) S_eb2a8ddaf8495ec01f08).w a = w_n8 a
  rw [w_multiSubst]
  have h0 : ∀ b, (ch_n8 R 0).w b = w_v b :=
    fun b => step_v R h b
  have h1 : ∀ b, (ch_n8 R 1).w b = w_v b :=
    fun b => step_v R h b
  have h2 : ∀ b, (ch_n8 R 2).w b = w_v b :=
    fun b => step_v R h b
  simp only [Fin.prod_univ_three, h0, h1, h2]
  exact polynomial_n8 a

def e_n9 : Fin 3 → Nat := (Fin.cases (4) (Fin.cases (3) (fun _ => 2)))

def ch_n9 (R : Realisation Ty typedSep G) :
    (i : Fin 3) → Realisation Ty typedSep (strongPower G (e_n9 i)) :=
  (Fin.cases (R_n7 R) (Fin.cases (R_n8 R) (fun _ => R_n1 R)))

def R_n9 (R : Realisation Ty typedSep G) :
    Realisation Ty typedSep (strongPower G 9) :=
  Realisation.multiSubst e_n9 (ch_n9 R) S_44a85870cefbc01c28eb

def w_n9 (a : Ty) : Nat :=
  match a.val with
  | 0 => 0
  | 1 => 0
  | 2 => 353548069904268180
  | 3 => 16404219939555775063
  | 4 => 0
  | 5 => 0
  | 6 => 0
  | 7 => 12457701585417676824
  | 8 => 0
  | 9 => 23927454948961993150
  | 10 => 0
  | 11 => 6680378906696250
  | 12 => 0
  | 13 => 0
  | 14 => 0
  | 15 => 5678201351680571943
  | 16 => 0
  | 17 => 0
  | 18 => 0
  | 19 => 0
  | 20 => 0
  | 21 => 0
  | 22 => 0
  | 23 => 4476848720881226868
  | 24 => 0
  | 25 => 0
  | 26 => 0
  | 27 => 0
  | 28 => 0
  | 29 => 0
  | 30 => 0
  | 31 => 0
  | 32 => 0
  | 33 => 0
  | 34 => 0
  | 35 => 0
  | 36 => 0
  | 37 => 0
  | 38 => 0
  | 39 => 0
  | 40 => 0
  | 41 => 0
  | 42 => 0
  | 43 => 0
  | 44 => 0
  | 45 => 0
  | 46 => 6092050342264677
  | 47 => 4867857414335065752
  | 48 => 0
  | 49 => 0
  | 50 => 0
  | 51 => 0
  | 52 => 0
  | 53 => 0
  | 54 => 0
  | 55 => 5271374572577799399
  | 56 => 0
  | 57 => 0
  | _ => 0

theorem polynomial_n9 : ∀ a : Ty,
    (∑ x ∈ S_44a85870cefbc01c28eb.T a, w_n7 (x 0) * w_n8 (x 1) * w_n1 (x 2)) = w_n9 a := by native_decide

theorem step_n9 (R : Realisation Ty typedSep G)
    (h : ∀ a, R.w a = C11R6Base.w0 a) :
    ∀ a, (R_n9 R).w a = w_n9 a := by
  intro a
  change (Realisation.multiSubst e_n9 (ch_n9 R) S_44a85870cefbc01c28eb).w a = w_n9 a
  rw [w_multiSubst]
  have h0 : ∀ b, (ch_n9 R 0).w b = w_n7 b :=
    fun b => step_n7 R h b
  have h1 : ∀ b, (ch_n9 R 1).w b = w_n8 b :=
    fun b => step_n8 R h b
  have h2 : ∀ b, (ch_n9 R 2).w b = w_n1 b :=
    fun b => step_n1 R h b
  simp only [Fin.prod_univ_three, h0, h1, h2]
  exact polynomial_n9 a

def e_n10 : Fin 3 → Nat := (Fin.cases (7) (Fin.cases (10) (fun _ => 9)))

def ch_n10 (R : Realisation Ty typedSep G) :
    (i : Fin 3) → Realisation Ty typedSep (strongPower G (e_n10 i)) :=
  (Fin.cases (R_n3 R) (Fin.cases (R_n6 R) (fun _ => R_n9 R)))

def R_n10 (R : Realisation Ty typedSep G) :
    Realisation Ty typedSep (strongPower G 26) :=
  Realisation.multiSubst e_n10 (ch_n10 R) S_01c047685d920c22640e

def w_n10 (a : Ty) : Nat :=
  match a.val with
  | 0 => 0
  | 1 => 9563989373664339282009105222106360768080113478922196523
  | 2 => 0
  | 3 => 59716190414400560586860869194568093483994151961661614906
  | 4 => 0
  | 5 => 0
  | 6 => 0
  | 7 => 132987155364737123719474368329197707172098750802380193026
  | 8 => 0
  | 9 => 113369277646951555098331588376730617483170583675295529834
  | 10 => 0
  | 11 => 1084897903071942761182316818398349020014506906933629234
  | 12 => 0
  | 13 => 0
  | 14 => 0
  | 15 => 103816669417930285013784771447486296880659296483531971186
  | 16 => 0
  | 17 => 0
  | 18 => 0
  | 19 => 0
  | 20 => 0
  | 21 => 0
  | 22 => 0
  | 23 => 51993653571247996512604587225493206165844272593296090140
  | 24 => 0
  | 25 => 0
  | 26 => 0
  | 27 => 0
  | 28 => 0
  | 29 => 0
  | 30 => 0
  | 31 => 0
  | 32 => 0
  | 33 => 0
  | 34 => 0
  | 35 => 0
  | 36 => 0
  | 37 => 0
  | 38 => 0
  | 39 => 0
  | 40 => 0
  | 41 => 0
  | 42 => 0
  | 43 => 0
  | 44 => 0
  | 45 => 0
  | 46 => 856348432038600878188126383592862400661813439600520525
  | 47 => 67505455599214176101068868866788886877985351500005661385
  | 48 => 0
  | 49 => 0
  | 50 => 0
  | 51 => 0
  | 52 => 0
  | 53 => 0
  | 54 => 20139789727613210321101394900866218097811201025010200
  | 55 => 84667958265381387027997412629210614288394749079649338374
  | 56 => 0
  | 57 => 0
  | _ => 0

theorem polynomial_n10 : ∀ a : Ty,
    (∑ x ∈ S_01c047685d920c22640e.T a, w_n3 (x 0) * w_n6 (x 1) * w_n9 (x 2)) = w_n10 a := by native_decide

theorem step_n10 (R : Realisation Ty typedSep G)
    (h : ∀ a, R.w a = C11R6Base.w0 a) :
    ∀ a, (R_n10 R).w a = w_n10 a := by
  intro a
  change (Realisation.multiSubst e_n10 (ch_n10 R) S_01c047685d920c22640e).w a = w_n10 a
  rw [w_multiSubst]
  have h0 : ∀ b, (ch_n10 R 0).w b = w_n3 b :=
    fun b => step_n3 R h b
  have h1 : ∀ b, (ch_n10 R 1).w b = w_n6 b :=
    fun b => step_n6 R h b
  have h2 : ∀ b, (ch_n10 R 2).w b = w_n9 b :=
    fun b => step_n9 R h b
  simp only [Fin.prod_univ_three, h0, h1, h2]
  exact polynomial_n10 a

def e_n11 : Fin 3 → Nat := (Fin.cases (1) (Fin.cases (1) (fun _ => 1)))

def ch_n11 (R : Realisation Ty typedSep G) :
    (i : Fin 3) → Realisation Ty typedSep (strongPower G (e_n11 i)) :=
  (Fin.cases (R_v R) (Fin.cases (R_v R) (fun _ => R_v R)))

def R_n11 (R : Realisation Ty typedSep G) :
    Realisation Ty typedSep (strongPower G 3) :=
  Realisation.multiSubst e_n11 (ch_n11 R) S_51b4bb7e33ca836fee10

def w_n11 (a : Ty) : Nat :=
  match a.val with
  | 0 => 0
  | 1 => 2051020
  | 2 => 3645
  | 3 => 468702
  | 4 => 0
  | 5 => 467073
  | 6 => 0
  | 7 => 66096
  | 8 => 0
  | 9 => 2867365
  | 10 => 0
  | 11 => 0
  | 12 => 0
  | 13 => 0
  | 14 => 0
  | 15 => 193005
  | 16 => 0
  | 17 => 0
  | 18 => 0
  | 19 => 0
  | 20 => 0
  | 21 => 0
  | 22 => 0
  | 23 => 181476
  | 24 => 0
  | 25 => 0
  | 26 => 0
  | 27 => 0
  | 28 => 0
  | 29 => 0
  | 30 => 0
  | 31 => 0
  | 32 => 0
  | 33 => 0
  | 34 => 0
  | 35 => 0
  | 36 => 0
  | 37 => 0
  | 38 => 0
  | 39 => 0
  | 40 => 0
  | 41 => 0
  | 42 => 0
  | 43 => 0
  | 44 => 0
  | 45 => 0
  | 46 => 0
  | 47 => 185310
  | 48 => 0
  | 49 => 0
  | 50 => 0
  | 51 => 0
  | 52 => 0
  | 53 => 0
  | 54 => 0
  | 55 => 189144
  | 56 => 0
  | 57 => 0
  | _ => 0

theorem polynomial_n11 : ∀ a : Ty,
    (∑ x ∈ S_51b4bb7e33ca836fee10.T a, w_v (x 0) * w_v (x 1) * w_v (x 2)) = w_n11 a := by native_decide

theorem step_n11 (R : Realisation Ty typedSep G)
    (h : ∀ a, R.w a = C11R6Base.w0 a) :
    ∀ a, (R_n11 R).w a = w_n11 a := by
  intro a
  change (Realisation.multiSubst e_n11 (ch_n11 R) S_51b4bb7e33ca836fee10).w a = w_n11 a
  rw [w_multiSubst]
  have h0 : ∀ b, (ch_n11 R 0).w b = w_v b :=
    fun b => step_v R h b
  have h1 : ∀ b, (ch_n11 R 1).w b = w_v b :=
    fun b => step_v R h b
  have h2 : ∀ b, (ch_n11 R 2).w b = w_v b :=
    fun b => step_v R h b
  simp only [Fin.prod_univ_three, h0, h1, h2]
  exact polynomial_n11 a

def e_n12 : Fin 3 → Nat := (Fin.cases (1) (Fin.cases (3) (fun _ => 1)))

def ch_n12 (R : Realisation Ty typedSep G) :
    (i : Fin 3) → Realisation Ty typedSep (strongPower G (e_n12 i)) :=
  (Fin.cases (R_v R) (Fin.cases (R_n11 R) (fun _ => R_v R)))

def R_n12 (R : Realisation Ty typedSep G) :
    Realisation Ty typedSep (strongPower G 5) :=
  Realisation.multiSubst e_n12 (ch_n12 R) S_7461db4595a77df35801

def w_n12 (a : Ty) : Nat :=
  match a.val with
  | 0 => 0
  | 1 => 33190824610
  | 2 => 244660887
  | 3 => 13631840244
  | 4 => 0
  | 5 => 13493746548
  | 6 => 0
  | 7 => 4088508615
  | 8 => 0
  | 9 => 58019734453
  | 10 => 0
  | 11 => 1552770
  | 12 => 0
  | 13 => 0
  | 14 => 0
  | 15 => 6890891397
  | 16 => 0
  | 17 => 0
  | 18 => 0
  | 19 => 0
  | 20 => 0
  | 21 => 0
  | 22 => 0
  | 23 => 6102277044
  | 24 => 0
  | 25 => 0
  | 26 => 0
  | 27 => 0
  | 28 => 0
  | 29 => 0
  | 30 => 0
  | 31 => 0
  | 32 => 0
  | 33 => 0
  | 34 => 0
  | 35 => 0
  | 36 => 0
  | 37 => 0
  | 38 => 0
  | 39 => 0
  | 40 => 0
  | 41 => 0
  | 42 => 0
  | 43 => 0
  | 44 => 0
  | 45 => 0
  | 46 => 1552770
  | 47 => 6363368241
  | 48 => 0
  | 49 => 0
  | 50 => 0
  | 51 => 0
  | 52 => 0
  | 53 => 0
  | 54 => 0
  | 55 => 6627553476
  | 56 => 0
  | 57 => 0
  | _ => 0

theorem polynomial_n12 : ∀ a : Ty,
    (∑ x ∈ S_7461db4595a77df35801.T a, w_v (x 0) * w_n11 (x 1) * w_v (x 2)) = w_n12 a := by native_decide

theorem step_n12 (R : Realisation Ty typedSep G)
    (h : ∀ a, R.w a = C11R6Base.w0 a) :
    ∀ a, (R_n12 R).w a = w_n12 a := by
  intro a
  change (Realisation.multiSubst e_n12 (ch_n12 R) S_7461db4595a77df35801).w a = w_n12 a
  rw [w_multiSubst]
  have h0 : ∀ b, (ch_n12 R 0).w b = w_v b :=
    fun b => step_v R h b
  have h1 : ∀ b, (ch_n12 R 1).w b = w_n11 b :=
    fun b => step_n11 R h b
  have h2 : ∀ b, (ch_n12 R 2).w b = w_v b :=
    fun b => step_v R h b
  simp only [Fin.prod_univ_three, h0, h1, h2]
  exact polynomial_n12 a

def e_n13 : Fin 3 → Nat := (Fin.cases (1) (Fin.cases (1) (fun _ => 5)))

def ch_n13 (R : Realisation Ty typedSep G) :
    (i : Fin 3) → Realisation Ty typedSep (strongPower G (e_n13 i)) :=
  (Fin.cases (R_v R) (Fin.cases (R_v R) (fun _ => R_n12 R)))

def R_n13 (R : Realisation Ty typedSep G) :
    Realisation Ty typedSep (strongPower G 7) :=
  Realisation.multiSubst e_n13 (ch_n13 R) S_669343cc17cb8eaf6957

def w_n13 (a : Ty) : Nat :=
  match a.val with
  | 0 => 0
  | 1 => 538814688117805
  | 2 => 0
  | 3 => 328143018003678
  | 4 => 10416679396011
  | 5 => 334591723627731
  | 6 => 0
  | 7 => 159938416214163
  | 8 => 0
  | 9 => 1176609562843039
  | 10 => 0
  | 11 => 0
  | 12 => 0
  | 13 => 0
  | 14 => 0
  | 15 => 172479128069172
  | 16 => 0
  | 17 => 0
  | 18 => 0
  | 19 => 136197072162
  | 20 => 0
  | 21 => 0
  | 22 => 0
  | 23 => 206508353083005
  | 24 => 0
  | 25 => 0
  | 26 => 0
  | 27 => 0
  | 28 => 0
  | 29 => 0
  | 30 => 0
  | 31 => 0
  | 32 => 0
  | 33 => 0
  | 34 => 0
  | 35 => 0
  | 36 => 0
  | 37 => 0
  | 38 => 0
  | 39 => 0
  | 40 => 0
  | 41 => 0
  | 42 => 0
  | 43 => 0
  | 44 => 0
  | 45 => 0
  | 46 => 1322960040
  | 47 => 195184379671482
  | 48 => 0
  | 49 => 0
  | 50 => 0
  | 51 => 0
  | 52 => 0
  | 53 => 0
  | 54 => 136197072162
  | 55 => 183696832496487
  | 56 => 0
  | 57 => 0
  | _ => 0

theorem polynomial_n13 : ∀ a : Ty,
    (∑ x ∈ S_669343cc17cb8eaf6957.T a, w_v (x 0) * w_v (x 1) * w_n12 (x 2)) = w_n13 a := by native_decide

theorem step_n13 (R : Realisation Ty typedSep G)
    (h : ∀ a, R.w a = C11R6Base.w0 a) :
    ∀ a, (R_n13 R).w a = w_n13 a := by
  intro a
  change (Realisation.multiSubst e_n13 (ch_n13 R) S_669343cc17cb8eaf6957).w a = w_n13 a
  rw [w_multiSubst]
  have h0 : ∀ b, (ch_n13 R 0).w b = w_v b :=
    fun b => step_v R h b
  have h1 : ∀ b, (ch_n13 R 1).w b = w_v b :=
    fun b => step_v R h b
  have h2 : ∀ b, (ch_n13 R 2).w b = w_n12 b :=
    fun b => step_n12 R h b
  simp only [Fin.prod_univ_three, h0, h1, h2]
  exact polynomial_n13 a

def e_n14 : Fin 3 → Nat := (Fin.cases (1) (Fin.cases (1) (fun _ => 7)))

def ch_n14 (R : Realisation Ty typedSep G) :
    (i : Fin 3) → Realisation Ty typedSep (strongPower G (e_n14 i)) :=
  (Fin.cases (R_v R) (Fin.cases (R_v R) (fun _ => R_n13 R)))

def R_n14 (R : Realisation Ty typedSep G) :
    Realisation Ty typedSep (strongPower G 9) :=
  Realisation.multiSubst e_n14 (ch_n14 R) S_95e5655d1469530ce7ff

def w_n14 (a : Ty) : Nat :=
  match a.val with
  | 0 => 0
  | 1 => 8786830159270337626
  | 2 => 0
  | 3 => 7344707627770872723
  | 4 => 362943104331211182
  | 5 => 7583519611877345199
  | 6 => 0
  | 7 => 5126049341963694846
  | 8 => 0
  | 9 => 23917595507872972489
  | 10 => 0
  | 11 => 0
  | 12 => 0
  | 13 => 0
  | 14 => 0
  | 15 => 4480340485929053436
  | 16 => 0
  | 17 => 0
  | 18 => 0
  | 19 => 7242378626133666
  | 20 => 0
  | 21 => 0
  | 22 => 563580977040
  | 23 => 5680010912339448765
  | 24 => 0
  | 25 => 0
  | 26 => 0
  | 27 => 0
  | 28 => 0
  | 29 => 0
  | 30 => 0
  | 31 => 0
  | 32 => 0
  | 33 => 0
  | 34 => 0
  | 35 => 0
  | 36 => 0
  | 37 => 0
  | 38 => 0
  | 39 => 0
  | 40 => 0
  | 41 => 0
  | 42 => 0
  | 43 => 0
  | 44 => 0
  | 45 => 0
  | 46 => 142716071728584
  | 47 => 5282200778304566214
  | 48 => 0
  | 49 => 0
  | 50 => 0
  | 51 => 0
  | 52 => 0
  | 53 => 0
  | 54 => 7241803138516266
  | 55 => 4874136763319787897
  | 56 => 0
  | 57 => 0
  | _ => 0

theorem polynomial_n14 : ∀ a : Ty,
    (∑ x ∈ S_95e5655d1469530ce7ff.T a, w_v (x 0) * w_v (x 1) * w_n13 (x 2)) = w_n14 a := by native_decide

theorem step_n14 (R : Realisation Ty typedSep G)
    (h : ∀ a, R.w a = C11R6Base.w0 a) :
    ∀ a, (R_n14 R).w a = w_n14 a := by
  intro a
  change (Realisation.multiSubst e_n14 (ch_n14 R) S_95e5655d1469530ce7ff).w a = w_n14 a
  rw [w_multiSubst]
  have h0 : ∀ b, (ch_n14 R 0).w b = w_v b :=
    fun b => step_v R h b
  have h1 : ∀ b, (ch_n14 R 1).w b = w_v b :=
    fun b => step_v R h b
  have h2 : ∀ b, (ch_n14 R 2).w b = w_n13 b :=
    fun b => step_n13 R h b
  simp only [Fin.prod_univ_three, h0, h1, h2]
  exact polynomial_n14 a

def e_n15 : Fin 2 → Nat := (Fin.cases (9) (fun _ => 1))

def ch_n15 (R : Realisation Ty typedSep G) :
    (i : Fin 2) → Realisation Ty typedSep (strongPower G (e_n15 i)) :=
  (Fin.cases (R_n14 R) (fun _ => R_v R))

def R_n15 (R : Realisation Ty typedSep G) :
    Realisation Ty typedSep (strongPower G 10) :=
  Realisation.multiSubst e_n15 (ch_n15 R) S_a40f1a6f9aa075037da0

def w_n15 (a : Ty) : Nat :=
  match a.val with
  | 0 => 0
  | 1 => 1115949157363211279500
  | 2 => 62801283646831881060
  | 3 => 1130746661015494163751
  | 4 => 0
  | 5 => 1077961708810271728962
  | 6 => 0
  | 7 => 877631199741569713968
  | 8 => 0
  | 9 => 3413360323681601771851
  | 10 => 0
  | 11 => 2117247077904614118
  | 12 => 0
  | 13 => 0
  | 14 => 508176713925432
  | 15 => 922372493567549334762
  | 16 => 0
  | 17 => 0
  | 18 => 0
  | 19 => 0
  | 20 => 0
  | 21 => 0
  | 22 => 0
  | 23 => 707961135525544505379
  | 24 => 0
  | 25 => 0
  | 26 => 0
  | 27 => 0
  | 28 => 0
  | 29 => 0
  | 30 => 0
  | 31 => 0
  | 32 => 0
  | 33 => 0
  | 34 => 0
  | 35 => 0
  | 36 => 0
  | 37 => 0
  | 38 => 0
  | 39 => 0
  | 40 => 0
  | 41 => 0
  | 42 => 0
  | 43 => 0
  | 44 => 0
  | 45 => 0
  | 46 => 1050061455084858570
  | 47 => 778502617204988162532
  | 48 => 0
  | 49 => 0
  | 50 => 0
  | 51 => 0
  | 52 => 0
  | 53 => 0
  | 54 => 41991091601007726
  | 55 => 852294737815955567940
  | 56 => 0
  | 57 => 0
  | _ => 0

theorem polynomial_n15 : ∀ a : Ty,
    (∑ x ∈ S_a40f1a6f9aa075037da0.T a, w_n14 (x 0) * w_v (x 1)) = w_n15 a := by native_decide

theorem step_n15 (R : Realisation Ty typedSep G)
    (h : ∀ a, R.w a = C11R6Base.w0 a) :
    ∀ a, (R_n15 R).w a = w_n15 a := by
  intro a
  change (Realisation.multiSubst e_n15 (ch_n15 R) S_a40f1a6f9aa075037da0).w a = w_n15 a
  rw [w_multiSubst]
  have h0 : ∀ b, (ch_n15 R 0).w b = w_n14 b :=
    fun b => step_n14 R h b
  have h1 : ∀ b, (ch_n15 R 1).w b = w_v b :=
    fun b => step_v R h b
  simp only [Fin.prod_univ_two, h0, h1]
  exact polynomial_n15 a

def e_n16 : Fin 3 → Nat := (Fin.cases (1) (Fin.cases (1) (fun _ => 1)))

def ch_n16 (R : Realisation Ty typedSep G) :
    (i : Fin 3) → Realisation Ty typedSep (strongPower G (e_n16 i)) :=
  (Fin.cases (R_v R) (Fin.cases (R_v R) (fun _ => R_v R)))

def R_n16 (R : Realisation Ty typedSep G) :
    Realisation Ty typedSep (strongPower G 3) :=
  Realisation.multiSubst e_n16 (ch_n16 R) S_9783e6b9166dfb4049c4

def w_n16 (a : Ty) : Nat :=
  match a.val with
  | 0 => 0
  | 1 => 2051020
  | 2 => 3645
  | 3 => 468702
  | 4 => 0
  | 5 => 467073
  | 6 => 0
  | 7 => 66096
  | 8 => 0
  | 9 => 2867365
  | 10 => 0
  | 11 => 0
  | 12 => 0
  | 13 => 0
  | 14 => 0
  | 15 => 193005
  | 16 => 0
  | 17 => 0
  | 18 => 0
  | 19 => 0
  | 20 => 0
  | 21 => 0
  | 22 => 0
  | 23 => 181476
  | 24 => 0
  | 25 => 0
  | 26 => 0
  | 27 => 0
  | 28 => 0
  | 29 => 0
  | 30 => 0
  | 31 => 0
  | 32 => 0
  | 33 => 0
  | 34 => 0
  | 35 => 0
  | 36 => 0
  | 37 => 0
  | 38 => 0
  | 39 => 0
  | 40 => 0
  | 41 => 0
  | 42 => 0
  | 43 => 0
  | 44 => 0
  | 45 => 0
  | 46 => 0
  | 47 => 185310
  | 48 => 0
  | 49 => 0
  | 50 => 0
  | 51 => 0
  | 52 => 0
  | 53 => 0
  | 54 => 0
  | 55 => 189144
  | 56 => 0
  | 57 => 0
  | _ => 0

theorem polynomial_n16 : ∀ a : Ty,
    (∑ x ∈ S_9783e6b9166dfb4049c4.T a, w_v (x 0) * w_v (x 1) * w_v (x 2)) = w_n16 a := by native_decide

theorem step_n16 (R : Realisation Ty typedSep G)
    (h : ∀ a, R.w a = C11R6Base.w0 a) :
    ∀ a, (R_n16 R).w a = w_n16 a := by
  intro a
  change (Realisation.multiSubst e_n16 (ch_n16 R) S_9783e6b9166dfb4049c4).w a = w_n16 a
  rw [w_multiSubst]
  have h0 : ∀ b, (ch_n16 R 0).w b = w_v b :=
    fun b => step_v R h b
  have h1 : ∀ b, (ch_n16 R 1).w b = w_v b :=
    fun b => step_v R h b
  have h2 : ∀ b, (ch_n16 R 2).w b = w_v b :=
    fun b => step_v R h b
  simp only [Fin.prod_univ_three, h0, h1, h2]
  exact polynomial_n16 a

def e_n17 : Fin 3 → Nat := (Fin.cases (3) (Fin.cases (1) (fun _ => 1)))

def ch_n17 (R : Realisation Ty typedSep G) :
    (i : Fin 3) → Realisation Ty typedSep (strongPower G (e_n17 i)) :=
  (Fin.cases (R_n16 R) (Fin.cases (R_v R) (fun _ => R_v R)))

def R_n17 (R : Realisation Ty typedSep G) :
    Realisation Ty typedSep (strongPower G 5) :=
  Realisation.multiSubst e_n17 (ch_n17 R) S_988a6e27a74069e613e5

def w_n17 (a : Ty) : Nat :=
  match a.val with
  | 0 => 0
  | 1 => 33190824610
  | 2 => 244660887
  | 3 => 13631840244
  | 4 => 0
  | 5 => 13493746548
  | 6 => 0
  | 7 => 4088508615
  | 8 => 0
  | 9 => 58019734453
  | 10 => 0
  | 11 => 1552770
  | 12 => 0
  | 13 => 0
  | 14 => 0
  | 15 => 6890891397
  | 16 => 0
  | 17 => 0
  | 18 => 0
  | 19 => 0
  | 20 => 0
  | 21 => 0
  | 22 => 0
  | 23 => 6102277044
  | 24 => 0
  | 25 => 0
  | 26 => 0
  | 27 => 0
  | 28 => 0
  | 29 => 0
  | 30 => 0
  | 31 => 0
  | 32 => 0
  | 33 => 0
  | 34 => 0
  | 35 => 0
  | 36 => 0
  | 37 => 0
  | 38 => 0
  | 39 => 0
  | 40 => 0
  | 41 => 0
  | 42 => 0
  | 43 => 0
  | 44 => 0
  | 45 => 0
  | 46 => 1552770
  | 47 => 6363368241
  | 48 => 0
  | 49 => 0
  | 50 => 0
  | 51 => 0
  | 52 => 0
  | 53 => 0
  | 54 => 0
  | 55 => 6627553476
  | 56 => 0
  | 57 => 0
  | _ => 0

theorem polynomial_n17 : ∀ a : Ty,
    (∑ x ∈ S_988a6e27a74069e613e5.T a, w_n16 (x 0) * w_v (x 1) * w_v (x 2)) = w_n17 a := by native_decide

theorem step_n17 (R : Realisation Ty typedSep G)
    (h : ∀ a, R.w a = C11R6Base.w0 a) :
    ∀ a, (R_n17 R).w a = w_n17 a := by
  intro a
  change (Realisation.multiSubst e_n17 (ch_n17 R) S_988a6e27a74069e613e5).w a = w_n17 a
  rw [w_multiSubst]
  have h0 : ∀ b, (ch_n17 R 0).w b = w_n16 b :=
    fun b => step_n16 R h b
  have h1 : ∀ b, (ch_n17 R 1).w b = w_v b :=
    fun b => step_v R h b
  have h2 : ∀ b, (ch_n17 R 2).w b = w_v b :=
    fun b => step_v R h b
  simp only [Fin.prod_univ_three, h0, h1, h2]
  exact polynomial_n17 a

def e_n18 : Fin 2 → Nat := (Fin.cases (5) (fun _ => 1))

def ch_n18 (R : Realisation Ty typedSep G) :
    (i : Fin 2) → Realisation Ty typedSep (strongPower G (e_n18 i)) :=
  (Fin.cases (R_n17 R) (fun _ => R_v R))

def R_n18 (R : Realisation Ty typedSep G) :
    Realisation Ty typedSep (strongPower G 6) :=
  Realisation.multiSubst e_n18 (ch_n18 R) S_e6624479a4e7b8218273

def w_n18 (a : Ty) : Nat :=
  match a.val with
  | 0 => 0
  | 1 => 4215239383780
  | 2 => 51580711764
  | 3 => 2175522316848
  | 4 => 0
  | 5 => 2133866952018
  | 6 => 0
  | 7 => 836964030303
  | 8 => 0
  | 9 => 8259479624827
  | 10 => 0
  | 11 => 954476001
  | 12 => 0
  | 13 => 0
  | 14 => 0
  | 15 => 1209910829985
  | 16 => 0
  | 17 => 0
  | 18 => 0
  | 19 => 0
  | 20 => 0
  | 21 => 0
  | 22 => 0
  | 23 => 1040582543607
  | 24 => 0
  | 25 => 0
  | 26 => 0
  | 27 => 0
  | 28 => 0
  | 29 => 0
  | 30 => 0
  | 31 => 0
  | 32 => 0
  | 33 => 0
  | 34 => 0
  | 35 => 0
  | 36 => 0
  | 37 => 0
  | 38 => 0
  | 39 => 0
  | 40 => 0
  | 41 => 0
  | 42 => 0
  | 43 => 0
  | 44 => 0
  | 45 => 0
  | 46 => 225151650
  | 47 => 1096747598304
  | 48 => 0
  | 49 => 0
  | 50 => 0
  | 51 => 0
  | 52 => 0
  | 53 => 0
  | 54 => 4658310
  | 55 => 1154144562102
  | 56 => 0
  | 57 => 0
  | _ => 0

theorem polynomial_n18 : ∀ a : Ty,
    (∑ x ∈ S_e6624479a4e7b8218273.T a, w_n17 (x 0) * w_v (x 1)) = w_n18 a := by native_decide

theorem step_n18 (R : Realisation Ty typedSep G)
    (h : ∀ a, R.w a = C11R6Base.w0 a) :
    ∀ a, (R_n18 R).w a = w_n18 a := by
  intro a
  change (Realisation.multiSubst e_n18 (ch_n18 R) S_e6624479a4e7b8218273).w a = w_n18 a
  rw [w_multiSubst]
  have h0 : ∀ b, (ch_n18 R 0).w b = w_n17 b :=
    fun b => step_n17 R h b
  have h1 : ∀ b, (ch_n18 R 1).w b = w_v b :=
    fun b => step_v R h b
  simp only [Fin.prod_univ_two, h0, h1]
  exact polynomial_n18 a

def e_n19 : Fin 2 → Nat := (Fin.cases (6) (fun _ => 1))

def ch_n19 (R : Realisation Ty typedSep G) :
    (i : Fin 2) → Realisation Ty typedSep (strongPower G (e_n19 i)) :=
  (Fin.cases (R_n18 R) (fun _ => R_v R))

def R_n19 (R : Realisation Ty typedSep G) :
    Realisation Ty typedSep (strongPower G 7) :=
  Realisation.multiSubst e_n19 (ch_n19 R) S_22cac8b4c63f11109b61

def w_n19 (a : Ty) : Nat :=
  match a.val with
  | 0 => 0
  | 1 => 535338265168063
  | 2 => 10136724430725
  | 3 => 337902148441179
  | 4 => 0
  | 5 => 328143059928468
  | 6 => 0
  | 7 => 160144287813729
  | 8 => 0
  | 9 => 1176478702643392
  | 10 => 0
  | 11 => 290277727434
  | 12 => 0
  | 13 => 0
  | 14 => 13974930
  | 15 => 206476297223844
  | 16 => 0
  | 17 => 0
  | 18 => 0
  | 19 => 0
  | 20 => 0
  | 21 => 0
  | 22 => 0
  | 23 => 172541160066675
  | 24 => 0
  | 25 => 0
  | 26 => 0
  | 27 => 0
  | 28 => 0
  | 29 => 0
  | 30 => 0
  | 31 => 0
  | 32 => 0
  | 33 => 0
  | 34 => 0
  | 35 => 0
  | 36 => 0
  | 37 => 0
  | 38 => 0
  | 39 => 0
  | 40 => 0
  | 41 => 0
  | 42 => 0
  | 43 => 0
  | 44 => 0
  | 45 => 0
  | 46 => 32646989250
  | 47 => 183806840628561
  | 48 => 0
  | 49 => 0
  | 50 => 0
  | 51 => 0
  | 52 => 0
  | 53 => 0
  | 54 => 1336934970
  | 55 => 195419657149113
  | 56 => 0
  | 57 => 0
  | _ => 0

theorem polynomial_n19 : ∀ a : Ty,
    (∑ x ∈ S_22cac8b4c63f11109b61.T a, w_n18 (x 0) * w_v (x 1)) = w_n19 a := by native_decide

theorem step_n19 (R : Realisation Ty typedSep G)
    (h : ∀ a, R.w a = C11R6Base.w0 a) :
    ∀ a, (R_n19 R).w a = w_n19 a := by
  intro a
  change (Realisation.multiSubst e_n19 (ch_n19 R) S_22cac8b4c63f11109b61).w a = w_n19 a
  rw [w_multiSubst]
  have h0 : ∀ b, (ch_n19 R 0).w b = w_n18 b :=
    fun b => step_n18 R h b
  have h1 : ∀ b, (ch_n19 R 1).w b = w_v b :=
    fun b => step_v R h b
  simp only [Fin.prod_univ_two, h0, h1]
  exact polynomial_n19 a

def e_n20 : Fin 3 → Nat := (Fin.cases (2) (Fin.cases (5) (fun _ => 1)))

def ch_n20 (R : Realisation Ty typedSep G) :
    (i : Fin 3) → Realisation Ty typedSep (strongPower G (e_n20 i)) :=
  (Fin.cases (R_n1 R) (Fin.cases (R_n17 R) (fun _ => R_v R)))

def R_n20 (R : Realisation Ty typedSep G) :
    Realisation Ty typedSep (strongPower G 8) :=
  Realisation.multiSubst e_n20 (ch_n20 R) S_8d02c2ed12c9b02124d5

def w_n20 (a : Ty) : Nat :=
  match a.val with
  | 0 => 0
  | 1 => 0
  | 2 => 1943375287891752
  | 3 => 119562792420619252
  | 4 => 0
  | 5 => 0
  | 6 => 0
  | 7 => 78592833522684090
  | 8 => 0
  | 9 => 167721649486571659
  | 10 => 0
  | 11 => 36832149447048
  | 12 => 0
  | 13 => 0
  | 14 => 0
  | 15 => 34513287335050704
  | 16 => 0
  | 17 => 0
  | 18 => 0
  | 19 => 0
  | 20 => 0
  | 21 => 0
  | 22 => 0
  | 23 => 28011131205245763
  | 24 => 0
  | 25 => 0
  | 26 => 0
  | 27 => 0
  | 28 => 0
  | 29 => 0
  | 30 => 0
  | 31 => 0
  | 32 => 0
  | 33 => 0
  | 34 => 0
  | 35 => 0
  | 36 => 0
  | 37 => 0
  | 38 => 0
  | 39 => 0
  | 40 => 0
  | 41 => 0
  | 42 => 0
  | 43 => 0
  | 44 => 0
  | 45 => 0
  | 46 => 27578858185971
  | 47 => 30147481538823156
  | 48 => 0
  | 49 => 0
  | 50 => 0
  | 51 => 0
  | 52 => 0
  | 53 => 0
  | 54 => 0
  | 55 => 32349134241561273
  | 56 => 0
  | 57 => 0
  | _ => 0

theorem polynomial_n20 : ∀ a : Ty,
    (∑ x ∈ S_8d02c2ed12c9b02124d5.T a, w_n1 (x 0) * w_n17 (x 1) * w_v (x 2)) = w_n20 a := by native_decide

theorem step_n20 (R : Realisation Ty typedSep G)
    (h : ∀ a, R.w a = C11R6Base.w0 a) :
    ∀ a, (R_n20 R).w a = w_n20 a := by
  intro a
  change (Realisation.multiSubst e_n20 (ch_n20 R) S_8d02c2ed12c9b02124d5).w a = w_n20 a
  rw [w_multiSubst]
  have h0 : ∀ b, (ch_n20 R 0).w b = w_n1 b :=
    fun b => step_n1 R h b
  have h1 : ∀ b, (ch_n20 R 1).w b = w_n17 b :=
    fun b => step_n17 R h b
  have h2 : ∀ b, (ch_n20 R 2).w b = w_v b :=
    fun b => step_v R h b
  simp only [Fin.prod_univ_three, h0, h1, h2]
  exact polynomial_n20 a

def e_n21 : Fin 2 → Nat := (Fin.cases (8) (fun _ => 1))

def ch_n21 (R : Realisation Ty typedSep G) :
    (i : Fin 2) → Realisation Ty typedSep (strongPower G (e_n21 i)) :=
  (Fin.cases (R_n20 R) (fun _ => R_v R))

def R_n21 (R : Realisation Ty typedSep G) :
    Realisation Ty typedSep (strongPower G 9) :=
  Realisation.multiSubst e_n21 (ch_n21 R) S_1b00b10f49b6c4e9759e

def w_n21 (a : Ty) : Nat :=
  match a.val with
  | 0 => 0
  | 1 => 110496448341144
  | 2 => 348332432769015561
  | 3 => 16381570008800396152
  | 4 => 0
  | 5 => 0
  | 6 => 0
  | 7 => 12472025992574766318
  | 8 => 0
  | 9 => 23920124585546668834
  | 10 => 0
  | 11 => 11060291085156072
  | 12 => 0
  | 13 => 0
  | 14 => 0
  | 15 => 5676434475747531102
  | 16 => 0
  | 17 => 0
  | 18 => 0
  | 19 => 0
  | 20 => 0
  | 21 => 0
  | 22 => 0
  | 23 => 4480745579604613323
  | 24 => 0
  | 25 => 0
  | 26 => 0
  | 27 => 0
  | 28 => 0
  | 29 => 0
  | 30 => 0
  | 31 => 0
  | 32 => 0
  | 33 => 0
  | 34 => 0
  | 35 => 0
  | 36 => 0
  | 37 => 0
  | 38 => 0
  | 39 => 0
  | 40 => 0
  | 41 => 0
  | 42 => 0
  | 43 => 0
  | 44 => 0
  | 45 => 0
  | 46 => 3998934436965795
  | 47 => 4874549771589072597
  | 48 => 0
  | 49 => 0
  | 50 => 0
  | 51 => 0
  | 52 => 0
  | 53 => 0
  | 54 => 82736574557913
  | 55 => 5284231858102569030
  | 56 => 0
  | 57 => 0
  | _ => 0

theorem polynomial_n21 : ∀ a : Ty,
    (∑ x ∈ S_1b00b10f49b6c4e9759e.T a, w_n20 (x 0) * w_v (x 1)) = w_n21 a := by native_decide

theorem step_n21 (R : Realisation Ty typedSep G)
    (h : ∀ a, R.w a = C11R6Base.w0 a) :
    ∀ a, (R_n21 R).w a = w_n21 a := by
  intro a
  change (Realisation.multiSubst e_n21 (ch_n21 R) S_1b00b10f49b6c4e9759e).w a = w_n21 a
  rw [w_multiSubst]
  have h0 : ∀ b, (ch_n21 R 0).w b = w_n20 b :=
    fun b => step_n20 R h b
  have h1 : ∀ b, (ch_n21 R 1).w b = w_v b :=
    fun b => step_v R h b
  simp only [Fin.prod_univ_two, h0, h1]
  exact polynomial_n21 a

def e_n22 : Fin 2 → Nat := (Fin.cases (9) (fun _ => 1))

def ch_n22 (R : Realisation Ty typedSep G) :
    (i : Fin 2) → Realisation Ty typedSep (strongPower G (e_n22 i)) :=
  (Fin.cases (R_n21 R) (fun _ => R_v R))

def R_n22 (R : Realisation Ty typedSep G) :
    Realisation Ty typedSep (strongPower G 10) :=
  Realisation.multiSubst e_n22 (ch_n22 R) S_090125a02835a8ea74a1

def w_n22 (a : Ty) : Nat :=
  match a.val with
  | 0 => 0
  | 1 => 47213922194793504
  | 2 => 60815447595399956265
  | 3 => 2248058810987052680323
  | 4 => 0
  | 5 => 994468035070296
  | 6 => 0
  | 7 => 1955877899002544681478
  | 8 => 0
  | 9 => 3413720175448125035950
  | 10 => 0
  | 11 => 2615558632399208907
  | 12 => 0
  | 13 => 0
  | 14 => 248209723673739
  | 15 => 921909747362741474385
  | 16 => 0
  | 17 => 0
  | 18 => 0
  | 19 => 0
  | 20 => 0
  | 21 => 0
  | 22 => 0
  | 23 => 708026246060495098368
  | 24 => 0
  | 25 => 0
  | 26 => 0
  | 27 => 0
  | 28 => 0
  | 29 => 0
  | 30 => 0
  | 31 => 0
  | 32 => 0
  | 33 => 0
  | 34 => 0
  | 35 => 0
  | 36 => 0
  | 37 => 0
  | 38 => 0
  | 39 => 0
  | 40 => 0
  | 41 => 0
  | 42 => 0
  | 43 => 0
  | 44 => 0
  | 45 => 0
  | 46 => 579845493360040275
  | 47 => 778570090637055533067
  | 48 => 0
  | 49 => 0
  | 50 => 0
  | 51 => 0
  | 52 => 0
  | 53 => 0
  | 54 => 23745396898121031
  | 55 => 852597890706003407382
  | 56 => 0
  | 57 => 0
  | _ => 0

theorem polynomial_n22 : ∀ a : Ty,
    (∑ x ∈ S_090125a02835a8ea74a1.T a, w_n21 (x 0) * w_v (x 1)) = w_n22 a := by native_decide

theorem step_n22 (R : Realisation Ty typedSep G)
    (h : ∀ a, R.w a = C11R6Base.w0 a) :
    ∀ a, (R_n22 R).w a = w_n22 a := by
  intro a
  change (Realisation.multiSubst e_n22 (ch_n22 R) S_090125a02835a8ea74a1).w a = w_n22 a
  rw [w_multiSubst]
  have h0 : ∀ b, (ch_n22 R 0).w b = w_n21 b :=
    fun b => step_n21 R h b
  have h1 : ∀ b, (ch_n22 R 1).w b = w_v b :=
    fun b => step_v R h b
  simp only [Fin.prod_univ_two, h0, h1]
  exact polynomial_n22 a

def e_n23 : Fin 2 → Nat := (Fin.cases (10) (fun _ => 1))

def ch_n23 (R : Realisation Ty typedSep G) :
    (i : Fin 2) → Realisation Ty typedSep (strongPower G (e_n23 i)) :=
  (Fin.cases (R_n22 R) (fun _ => R_v R))

def R_n23 (R : Realisation Ty typedSep G) :
    Realisation Ty typedSep (strongPower G 11) :=
  Realisation.multiSubst e_n23 (ch_n23 R) S_73383c091e7d3a586822

def w_n23 (a : Ty) : Nat :=
  match a.val with
  | 0 => 0
  | 1 => 13842844015936401729
  | 2 => 10394979611155879347144
  | 3 => 309049492234614912716221
  | 4 => 0
  | 5 => 560172952522701792
  | 6 => 0
  | 7 => 303834833604464768569881
  | 8 => 0
  | 9 => 487521841576248348175993
  | 10 => 0
  | 11 => 553855668586887533589
  | 12 => 0
  | 13 => 0
  | 14 => 106481971456034031
  | 15 => 148205011290948266556723
  | 16 => 0
  | 17 => 0
  | 18 => 0
  | 19 => 0
  | 20 => 0
  | 21 => 0
  | 22 => 0
  | 23 => 110780887466934679076106
  | 24 => 0
  | 25 => 0
  | 26 => 0
  | 27 => 0
  | 28 => 0
  | 29 => 0
  | 30 => 0
  | 31 => 0
  | 32 => 0
  | 33 => 0
  | 34 => 0
  | 35 => 0
  | 36 => 0
  | 37 => 0
  | 38 => 0
  | 39 => 0
  | 40 => 0
  | 41 => 0
  | 42 => 0
  | 43 => 0
  | 44 => 0
  | 45 => 0
  | 46 => 84077596537205839875
  | 47 => 123133823668717427402565
  | 48 => 0
  | 49 => 0
  | 50 => 0
  | 51 => 0
  | 52 => 0
  | 53 => 0
  | 54 => 5111382839613307227
  | 55 => 136203636186816730140534
  | 56 => 0
  | 57 => 0
  | _ => 0

theorem polynomial_n23 : ∀ a : Ty,
    (∑ x ∈ S_73383c091e7d3a586822.T a, w_n22 (x 0) * w_v (x 1)) = w_n23 a := by native_decide

theorem step_n23 (R : Realisation Ty typedSep G)
    (h : ∀ a, R.w a = C11R6Base.w0 a) :
    ∀ a, (R_n23 R).w a = w_n23 a := by
  intro a
  change (Realisation.multiSubst e_n23 (ch_n23 R) S_73383c091e7d3a586822).w a = w_n23 a
  rw [w_multiSubst]
  have h0 : ∀ b, (ch_n23 R 0).w b = w_n22 b :=
    fun b => step_n22 R h b
  have h1 : ∀ b, (ch_n23 R 1).w b = w_v b :=
    fun b => step_v R h b
  simp only [Fin.prod_univ_two, h0, h1]
  exact polynomial_n23 a

def e_n24 : Fin 2 → Nat := (Fin.cases (11) (fun _ => 1))

def ch_n24 (R : Realisation Ty typedSep G) :
    (i : Fin 2) → Realisation Ty typedSep (strongPower G (e_n24 i)) :=
  (Fin.cases (R_n23 R) (fun _ => R_v R))

def R_n24 (R : Realisation Ty typedSep G) :
    Realisation Ty typedSep (strongPower G 12) :=
  Realisation.multiSubst e_n24 (ch_n24 R) S_73383c091e7d3a586822

def w_n24 (a : Ty) : Nat :=
  match a.val with
  | 0 => 0
  | 1 => 3419608195784585620350
  | 2 => 1746059889518003628439902
  | 3 => 42569025699322933638918175
  | 4 => 0
  | 5 => 200769117686515059273
  | 6 => 0
  | 7 => 46837501344315498361394862
  | 8 => 0
  | 9 => 69674378424151785271364035
  | 10 => 0
  | 11 => 109832443772805667811070
  | 12 => 0
  | 13 => 0
  | 14 => 30454588465596754083
  | 15 => 23624761360844052499873455
  | 16 => 0
  | 17 => 0
  | 18 => 0
  | 19 => 0
  | 20 => 0
  | 21 => 0
  | 22 => 0
  | 23 => 17193451545033469473335031
  | 24 => 0
  | 25 => 0
  | 26 => 0
  | 27 => 0
  | 28 => 0
  | 29 => 0
  | 30 => 0
  | 31 => 0
  | 32 => 0
  | 33 => 0
  | 34 => 0
  | 35 => 0
  | 36 => 0
  | 37 => 0
  | 38 => 0
  | 39 => 0
  | 40 => 0
  | 41 => 0
  | 42 => 0
  | 43 => 0
  | 44 => 0
  | 45 => 0
  | 46 => 12191251497894846781875
  | 47 => 19316969956692772017899904
  | 48 => 0
  | 49 => 0
  | 50 => 0
  | 51 => 0
  | 52 => 0
  | 53 => 0
  | 54 => 978049152836707145859
  | 55 => 21581509576971842037034785
  | 56 => 0
  | 57 => 0
  | _ => 0

theorem polynomial_n24 : ∀ a : Ty,
    (∑ x ∈ S_73383c091e7d3a586822.T a, w_n23 (x 0) * w_v (x 1)) = w_n24 a := by native_decide

theorem step_n24 (R : Realisation Ty typedSep G)
    (h : ∀ a, R.w a = C11R6Base.w0 a) :
    ∀ a, (R_n24 R).w a = w_n24 a := by
  intro a
  change (Realisation.multiSubst e_n24 (ch_n24 R) S_73383c091e7d3a586822).w a = w_n24 a
  rw [w_multiSubst]
  have h0 : ∀ b, (ch_n24 R 0).w b = w_n23 b :=
    fun b => step_n23 R h b
  have h1 : ∀ b, (ch_n24 R 1).w b = w_v b :=
    fun b => step_v R h b
  simp only [Fin.prod_univ_two, h0, h1]
  exact polynomial_n24 a

def e_n25 : Fin 3 → Nat := (Fin.cases (1) (Fin.cases (1) (fun _ => 2)))

def ch_n25 (R : Realisation Ty typedSep G) :
    (i : Fin 3) → Realisation Ty typedSep (strongPower G (e_n25 i)) :=
  (Fin.cases (R_v R) (Fin.cases (R_v R) (fun _ => R_n1 R)))

def R_n25 (R : Realisation Ty typedSep G) :
    Realisation Ty typedSep (strongPower G 4) :=
  Realisation.multiSubst e_n25 (ch_n25 R) S_2d78eefa50581f5d0332

def w_n25 (a : Ty) : Nat :=
  match a.val with
  | 0 => 0
  | 1 => 260716636
  | 2 => 1040148
  | 3 => 82609155
  | 4 => 0
  | 5 => 81957375
  | 6 => 0
  | 7 => 18013995
  | 8 => 0
  | 9 => 407761396
  | 10 => 0
  | 11 => 3834
  | 12 => 0
  | 13 => 0
  | 14 => 0
  | 15 => 37672437
  | 16 => 0
  | 17 => 0
  | 18 => 0
  | 19 => 0
  | 20 => 0
  | 21 => 0
  | 22 => 0
  | 23 => 34367124
  | 24 => 0
  | 25 => 0
  | 26 => 0
  | 27 => 0
  | 28 => 0
  | 29 => 0
  | 30 => 0
  | 31 => 0
  | 32 => 0
  | 33 => 0
  | 34 => 0
  | 35 => 0
  | 36 => 0
  | 37 => 0
  | 38 => 0
  | 39 => 0
  | 40 => 0
  | 41 => 0
  | 42 => 0
  | 43 => 0
  | 44 => 0
  | 45 => 0
  | 46 => 3834
  | 47 => 35463729
  | 48 => 0
  | 49 => 0
  | 50 => 0
  | 51 => 0
  | 52 => 0
  | 53 => 0
  | 54 => 0
  | 55 => 36568002
  | 56 => 0
  | 57 => 0
  | _ => 0

theorem polynomial_n25 : ∀ a : Ty,
    (∑ x ∈ S_2d78eefa50581f5d0332.T a, w_v (x 0) * w_v (x 1) * w_n1 (x 2)) = w_n25 a := by native_decide

theorem step_n25 (R : Realisation Ty typedSep G)
    (h : ∀ a, R.w a = C11R6Base.w0 a) :
    ∀ a, (R_n25 R).w a = w_n25 a := by
  intro a
  change (Realisation.multiSubst e_n25 (ch_n25 R) S_2d78eefa50581f5d0332).w a = w_n25 a
  rw [w_multiSubst]
  have h0 : ∀ b, (ch_n25 R 0).w b = w_v b :=
    fun b => step_v R h b
  have h1 : ∀ b, (ch_n25 R 1).w b = w_v b :=
    fun b => step_v R h b
  have h2 : ∀ b, (ch_n25 R 2).w b = w_n1 b :=
    fun b => step_n1 R h b
  simp only [Fin.prod_univ_three, h0, h1, h2]
  exact polynomial_n25 a

def e_n26 : Fin 3 → Nat := (Fin.cases (4) (Fin.cases (3) (fun _ => 3)))

def ch_n26 (R : Realisation Ty typedSep G) :
    (i : Fin 3) → Realisation Ty typedSep (strongPower G (e_n26 i)) :=
  (Fin.cases (R_n25 R) (Fin.cases (R_n11 R) (fun _ => R_n4 R)))

def R_n26 (R : Realisation Ty typedSep G) :
    Realisation Ty typedSep (strongPower G 10) :=
  Realisation.multiSubst e_n26 (ch_n26 R) S_ece408aa34da4a12a217

def w_n26 (a : Ty) : Nat :=
  match a.val with
  | 0 => 0
  | 1 => 0
  | 2 => 62982090036086778855
  | 3 => 2253895531262161872562
  | 4 => 0
  | 5 => 0
  | 6 => 0
  | 7 => 1951818045923665864197
  | 8 => 0
  | 9 => 3415744172780326130974
  | 10 => 0
  | 11 => 1316304440471473560
  | 12 => 0
  | 13 => 0
  | 14 => 0
  | 15 => 922463818039765819524
  | 16 => 0
  | 17 => 0
  | 18 => 0
  | 19 => 0
  | 20 => 0
  | 21 => 0
  | 22 => 0
  | 23 => 706922755496914360980
  | 24 => 0
  | 25 => 0
  | 26 => 0
  | 27 => 0
  | 28 => 0
  | 29 => 0
  | 30 => 0
  | 31 => 0
  | 32 => 0
  | 33 => 0
  | 34 => 0
  | 35 => 0
  | 36 => 0
  | 37 => 0
  | 38 => 0
  | 39 => 0
  | 40 => 0
  | 41 => 0
  | 42 => 0
  | 43 => 0
  | 44 => 0
  | 45 => 0
  | 46 => 1232361291883757985
  | 47 => 776670644435978991045
  | 48 => 0
  | 49 => 0
  | 50 => 0
  | 51 => 0
  | 52 => 0
  | 53 => 0
  | 54 => 0
  | 55 => 848880412293644017554
  | 56 => 0
  | 57 => 0
  | _ => 0

theorem polynomial_n26 : ∀ a : Ty,
    (∑ x ∈ S_ece408aa34da4a12a217.T a, w_n25 (x 0) * w_n11 (x 1) * w_n4 (x 2)) = w_n26 a := by native_decide

theorem step_n26 (R : Realisation Ty typedSep G)
    (h : ∀ a, R.w a = C11R6Base.w0 a) :
    ∀ a, (R_n26 R).w a = w_n26 a := by
  intro a
  change (Realisation.multiSubst e_n26 (ch_n26 R) S_ece408aa34da4a12a217).w a = w_n26 a
  rw [w_multiSubst]
  have h0 : ∀ b, (ch_n26 R 0).w b = w_n25 b :=
    fun b => step_n25 R h b
  have h1 : ∀ b, (ch_n26 R 1).w b = w_n11 b :=
    fun b => step_n11 R h b
  have h2 : ∀ b, (ch_n26 R 2).w b = w_n4 b :=
    fun b => step_n4 R h b
  simp only [Fin.prod_univ_three, h0, h1, h2]
  exact polynomial_n26 a

def e_n27 : Fin 2 → Nat := (Fin.cases (1) (fun _ => 1))

def ch_n27 (R : Realisation Ty typedSep G) :
    (i : Fin 2) → Realisation Ty typedSep (strongPower G (e_n27 i)) :=
  (Fin.cases (R_v R) (fun _ => R_v R))

def R_n27 (R : Realisation Ty typedSep G) :
    Realisation Ty typedSep (strongPower G 2) :=
  Realisation.multiSubst e_n27 (ch_n27 R) S_9b70f31dd1696e52e328

def w_n27 (a : Ty) : Nat :=
  match a.val with
  | 0 => 0
  | 1 => 16129
  | 2 => 0
  | 3 => 2367
  | 4 => 9
  | 5 => 2376
  | 6 => 0
  | 7 => 162
  | 8 => 0
  | 9 => 20173
  | 10 => 0
  | 11 => 0
  | 12 => 0
  | 13 => 0
  | 14 => 0
  | 15 => 852
  | 16 => 0
  | 17 => 0
  | 18 => 0
  | 19 => 0
  | 20 => 0
  | 21 => 0
  | 22 => 0
  | 23 => 879
  | 24 => 0
  | 25 => 0
  | 26 => 0
  | 27 => 0
  | 28 => 0
  | 29 => 0
  | 30 => 0
  | 31 => 0
  | 32 => 0
  | 33 => 0
  | 34 => 0
  | 35 => 0
  | 36 => 0
  | 37 => 0
  | 38 => 0
  | 39 => 0
  | 40 => 0
  | 41 => 0
  | 42 => 0
  | 43 => 0
  | 44 => 0
  | 45 => 0
  | 46 => 0
  | 47 => 870
  | 48 => 0
  | 49 => 0
  | 50 => 0
  | 51 => 0
  | 52 => 0
  | 53 => 0
  | 54 => 0
  | 55 => 861
  | 56 => 0
  | 57 => 0
  | _ => 0

theorem polynomial_n27 : ∀ a : Ty,
    (∑ x ∈ S_9b70f31dd1696e52e328.T a, w_v (x 0) * w_v (x 1)) = w_n27 a := by native_decide

theorem step_n27 (R : Realisation Ty typedSep G)
    (h : ∀ a, R.w a = C11R6Base.w0 a) :
    ∀ a, (R_n27 R).w a = w_n27 a := by
  intro a
  change (Realisation.multiSubst e_n27 (ch_n27 R) S_9b70f31dd1696e52e328).w a = w_n27 a
  rw [w_multiSubst]
  have h0 : ∀ b, (ch_n27 R 0).w b = w_v b :=
    fun b => step_v R h b
  have h1 : ∀ b, (ch_n27 R 1).w b = w_v b :=
    fun b => step_v R h b
  simp only [Fin.prod_univ_two, h0, h1]
  exact polynomial_n27 a

def e_n28 : Fin 3 → Nat := (Fin.cases (1) (Fin.cases (1) (fun _ => 2)))

def ch_n28 (R : Realisation Ty typedSep G) :
    (i : Fin 3) → Realisation Ty typedSep (strongPower G (e_n28 i)) :=
  (Fin.cases (R_v R) (Fin.cases (R_v R) (fun _ => R_n27 R)))

def R_n28 (R : Realisation Ty typedSep G) :
    Realisation Ty typedSep (strongPower G 4) :=
  Realisation.multiSubst e_n28 (ch_n28 R) S_c28c6dd5607aacbad7ef

def w_n28 (a : Ty) : Nat :=
  match a.val with
  | 0 => 0
  | 1 => 260716636
  | 2 => 1040148
  | 3 => 82609155
  | 4 => 0
  | 5 => 81957375
  | 6 => 0
  | 7 => 18013995
  | 8 => 0
  | 9 => 407761396
  | 10 => 0
  | 11 => 3834
  | 12 => 0
  | 13 => 0
  | 14 => 0
  | 15 => 37672437
  | 16 => 0
  | 17 => 0
  | 18 => 0
  | 19 => 0
  | 20 => 0
  | 21 => 0
  | 22 => 0
  | 23 => 34367124
  | 24 => 0
  | 25 => 0
  | 26 => 0
  | 27 => 0
  | 28 => 0
  | 29 => 0
  | 30 => 0
  | 31 => 0
  | 32 => 0
  | 33 => 0
  | 34 => 0
  | 35 => 0
  | 36 => 0
  | 37 => 0
  | 38 => 0
  | 39 => 0
  | 40 => 0
  | 41 => 0
  | 42 => 0
  | 43 => 0
  | 44 => 0
  | 45 => 0
  | 46 => 3834
  | 47 => 35463729
  | 48 => 0
  | 49 => 0
  | 50 => 0
  | 51 => 0
  | 52 => 0
  | 53 => 0
  | 54 => 0
  | 55 => 36568002
  | 56 => 0
  | 57 => 0
  | _ => 0

theorem polynomial_n28 : ∀ a : Ty,
    (∑ x ∈ S_c28c6dd5607aacbad7ef.T a, w_v (x 0) * w_v (x 1) * w_n27 (x 2)) = w_n28 a := by native_decide

theorem step_n28 (R : Realisation Ty typedSep G)
    (h : ∀ a, R.w a = C11R6Base.w0 a) :
    ∀ a, (R_n28 R).w a = w_n28 a := by
  intro a
  change (Realisation.multiSubst e_n28 (ch_n28 R) S_c28c6dd5607aacbad7ef).w a = w_n28 a
  rw [w_multiSubst]
  have h0 : ∀ b, (ch_n28 R 0).w b = w_v b :=
    fun b => step_v R h b
  have h1 : ∀ b, (ch_n28 R 1).w b = w_v b :=
    fun b => step_v R h b
  have h2 : ∀ b, (ch_n28 R 2).w b = w_n27 b :=
    fun b => step_n27 R h b
  simp only [Fin.prod_univ_three, h0, h1, h2]
  exact polynomial_n28 a

def e_n29 : Fin 3 → Nat := (Fin.cases (1) (Fin.cases (4) (fun _ => 1)))

def ch_n29 (R : Realisation Ty typedSep G) :
    (i : Fin 3) → Realisation Ty typedSep (strongPower G (e_n29 i)) :=
  (Fin.cases (R_v R) (Fin.cases (R_n28 R) (fun _ => R_v R)))

def R_n29 (R : Realisation Ty typedSep G) :
    Realisation Ty typedSep (strongPower G 6) :=
  Realisation.multiSubst e_n29 (ch_n29 R) S_37294a683db0ad79cd1a

def w_n29 (a : Ty) : Nat :=
  match a.val with
  | 0 => 0
  | 1 => 4225225119175
  | 2 => 52373671740
  | 3 => 2166083976807
  | 4 => 0
  | 5 => 2132999885412
  | 6 => 0
  | 7 => 837169094277
  | 8 => 0
  | 9 => 8259862493710
  | 10 => 0
  | 11 => 522045108
  | 12 => 0
  | 13 => 0
  | 14 => 0
  | 15 => 1210001820174
  | 16 => 0
  | 17 => 0
  | 18 => 0
  | 19 => 0
  | 20 => 0
  | 21 => 0
  | 22 => 0
  | 23 => 1040391397728
  | 24 => 0
  | 25 => 0
  | 26 => 0
  | 27 => 0
  | 28 => 0
  | 29 => 0
  | 30 => 0
  | 31 => 0
  | 32 => 0
  | 33 => 0
  | 34 => 0
  | 35 => 0
  | 36 => 0
  | 37 => 0
  | 38 => 0
  | 39 => 0
  | 40 => 0
  | 41 => 0
  | 42 => 0
  | 43 => 0
  | 44 => 0
  | 45 => 0
  | 46 => 522045108
  | 47 => 1096418977956
  | 48 => 0
  | 49 => 0
  | 50 => 0
  | 51 => 0
  | 52 => 0
  | 53 => 0
  | 54 => 3266568
  | 55 => 1153483977240
  | 56 => 0
  | 57 => 0
  | _ => 0

theorem polynomial_n29 : ∀ a : Ty,
    (∑ x ∈ S_37294a683db0ad79cd1a.T a, w_v (x 0) * w_n28 (x 1) * w_v (x 2)) = w_n29 a := by native_decide

theorem step_n29 (R : Realisation Ty typedSep G)
    (h : ∀ a, R.w a = C11R6Base.w0 a) :
    ∀ a, (R_n29 R).w a = w_n29 a := by
  intro a
  change (Realisation.multiSubst e_n29 (ch_n29 R) S_37294a683db0ad79cd1a).w a = w_n29 a
  rw [w_multiSubst]
  have h0 : ∀ b, (ch_n29 R 0).w b = w_v b :=
    fun b => step_v R h b
  have h1 : ∀ b, (ch_n29 R 1).w b = w_n28 b :=
    fun b => step_n28 R h b
  have h2 : ∀ b, (ch_n29 R 2).w b = w_v b :=
    fun b => step_v R h b
  simp only [Fin.prod_univ_three, h0, h1, h2]
  exact polynomial_n29 a

def e_n30 : Fin 3 → Nat := (Fin.cases (12) (Fin.cases (10) (fun _ => 6)))

def ch_n30 (R : Realisation Ty typedSep G) :
    (i : Fin 3) → Realisation Ty typedSep (strongPower G (e_n30 i)) :=
  (Fin.cases (R_n24 R) (Fin.cases (R_n26 R) (fun _ => R_n29 R)))

def R_n30 (R : Realisation Ty typedSep G) :
    Realisation Ty typedSep (strongPower G 28) :=
  Realisation.multiSubst e_n30 (ch_n30 R) S_c166eae8054ce1f6ee50

def w_n30 (a : Ty) : Nat :=
  match a.val with
  | 0 => 0
  | 1 => 0
  | 2 => 270662786015284645086504439328267964370369966168683661928649
  | 3 => 1226695168245840315968330144444850297275840408289346939589863
  | 4 => 0
  | 5 => 0
  | 6 => 0
  | 7 => 2906958416539844966851984435815828774336289534196064077597640
  | 8 => 48027336610306421606243859615904438931410322304720
  | 9 => 2373622063480123388161091128081399916762144422635651027603280
  | 10 => 17941762966940139401085860893522595531326413325248
  | 11 => 30007765567043294708843638060542942316347933086147102107893
  | 12 => 0
  | 13 => 0
  | 14 => 4046721567255953415246048170865492537123731523376803360
  | 15 => 2389134396929788046989725918305296623255420248267739842743938
  | 16 => 0
  | 17 => 0
  | 18 => 0
  | 19 => 0
  | 20 => 0
  | 21 => 0
  | 22 => 0
  | 23 => 1139525967843083435037831345363069771172823065214423470888260
  | 24 => 0
  | 25 => 0
  | 26 => 0
  | 27 => 0
  | 28 => 0
  | 29 => 0
  | 30 => 0
  | 31 => 0
  | 32 => 0
  | 33 => 0
  | 34 => 0
  | 35 => 0
  | 36 => 0
  | 37 => 0
  | 38 => 0
  | 39 => 0
  | 40 => 0
  | 41 => 0
  | 42 => 0
  | 43 => 0
  | 44 => 0
  | 45 => 0
  | 46 => 20943539447465293175820305360394115291278482460216197447610
  | 47 => 1512554938152483583220396055704038386818910881634865194982956
  | 48 => 0
  | 49 => 0
  | 50 => 0
  | 51 => 195682055757745026542425197395820690478419099919107900
  | 52 => 0
  | 53 => 0
  | 54 => 0
  | 55 => 1930374593609373105841894133867411380510201253184055413931260
  | 56 => 0
  | 57 => 0
  | _ => 0

theorem polynomial_n30 : ∀ a : Ty,
    (∑ x ∈ S_c166eae8054ce1f6ee50.T a, w_n24 (x 0) * w_n26 (x 1) * w_n29 (x 2)) = w_n30 a := by native_decide

theorem step_n30 (R : Realisation Ty typedSep G)
    (h : ∀ a, R.w a = C11R6Base.w0 a) :
    ∀ a, (R_n30 R).w a = w_n30 a := by
  intro a
  change (Realisation.multiSubst e_n30 (ch_n30 R) S_c166eae8054ce1f6ee50).w a = w_n30 a
  rw [w_multiSubst]
  have h0 : ∀ b, (ch_n30 R 0).w b = w_n24 b :=
    fun b => step_n24 R h b
  have h1 : ∀ b, (ch_n30 R 1).w b = w_n26 b :=
    fun b => step_n26 R h b
  have h2 : ∀ b, (ch_n30 R 2).w b = w_n29 b :=
    fun b => step_n29 R h b
  simp only [Fin.prod_univ_three, h0, h1, h2]
  exact polynomial_n30 a

def e_n31 : Fin 4 → Nat := (Fin.cases (26) (Fin.cases (10) (Fin.cases (7) (fun _ => 28))))

def ch_n31 (R : Realisation Ty typedSep G) :
    (i : Fin 4) → Realisation Ty typedSep (strongPower G (e_n31 i)) :=
  (Fin.cases (R_n10 R) (Fin.cases (R_n15 R) (Fin.cases (R_n19 R) (fun _ => R_n30 R))))

theorem terminal_polynomial : (∑ x ∈ S_3d79de065120229628e3.C, w_n10 (x 0) * w_n15 (x 1) * w_n19 (x 2) * w_n30 (x 3)) = N := by native_decide

theorem terminal_value (R : Realisation Ty typedSep G)
    (h : ∀ a, R.w a = C11R6Base.w0 a) :
    (∑ x ∈ S_3d79de065120229628e3.C, ∏ i, (ch_n31 R i).w (x i)) = N := by
  have h0 : ∀ b, (ch_n31 R 0).w b = w_n10 b :=
    fun b => step_n10 R h b
  have h1 : ∀ b, (ch_n31 R 1).w b = w_n15 b :=
    fun b => step_n15 R h b
  have h2 : ∀ b, (ch_n31 R 2).w b = w_n19 b :=
    fun b => step_n19 R h b
  have h3 : ∀ b, (ch_n31 R 3).w b = w_n30 b :=
    fun b => step_n30 R h b
  simp only [Fin.prod_univ_four, h0, h1, h2, h3]
  exact terminal_polynomial

def codeBase (R : Realisation Ty typedSep G) : Finset (Fin 71 → α) :=
  (multiCodeSet e_n31 (ch_n31 R) S_3d79de065120229628e3).image
    (strongPower_sum_iso G e_n31).symm

theorem independent_codeBase (R : Realisation Ty typedSep G) :
    (strongPower G 71).IsIndepSet ↑(codeBase R) :=
  isIndepSet_image_symm (strongPower_sum_iso G e_n31)
    (isIndepSet_multiCodeSet e_n31 (ch_n31 R) S_3d79de065120229628e3)

theorem card_codeBase (R : Realisation Ty typedSep G)
    (h : ∀ a, R.w a = C11R6Base.w0 a) : (codeBase R).card = N := by
  calc
    (codeBase R).card = (multiCodeSet e_n31 (ch_n31 R) S_3d79de065120229628e3).card :=
      Finset.card_image_of_injective _ (strongPower_sum_iso G e_n31).symm.injective
    _ = ∑ x ∈ S_3d79de065120229628e3.C, ∏ i, (ch_n31 R i).w (x i) :=
      card_multiCodeSet e_n31 (ch_n31 R) S_3d79de065120229628e3
    _ = N := terminal_value R h

end Generic

def isoPhysical : strongPower BaseC11.Cyc11 213 ≃g strongPower BaseC11.G3 71 :=
  (strongPower_mul_iso BaseC11.Cyc11 3 71).trans
    (strongPower_congr CapC11.G3_iso 71).symm

def code : Finset (Fin 213 → Fin 11) :=
  (codeBase C11R6Base.base).image isoPhysical.symm

theorem card_code : code.card = N := by
  calc
    code.card = (codeBase C11R6Base.base).card :=
      Finset.card_image_of_injective _ isoPhysical.symm.injective
    _ = N := card_codeBase C11R6Base.base C11R6Base.base_weights

theorem independent_code_Cyc :
    (strongPower BaseC11.Cyc11 213).IsIndepSet ↑code :=
  isIndepSet_image_symm isoPhysical
    (independent_codeBase C11R6Base.base)

theorem independent_code :
    (strongPower (SimpleGraph.cycleGraph 11) 213).IsIndepSet ↑code := by
  rw [← CapC11.Cyc_eq_cycleGraph]
  exact independent_code_Cyc

theorem exists_code :
    ∃ S : Finset (Fin 213 → Fin 11),
      (strongPower (SimpleGraph.cycleGraph 11) 213).IsIndepSet ↑S ∧ S.card = N :=
  ⟨code, independent_code, card_code⟩

theorem alpha_ge : N ≤ (strongPower (SimpleGraph.cycleGraph 11) 213).indepNum := by
  rw [← card_code]
  exact SimpleGraph.IsIndepSet.card_le_indepNum independent_code

theorem capacity_root : (N : ℝ) ^ ((1 : ℝ) / (213 : ℕ)) ≤
    shannonCapacity (SimpleGraph.cycleGraph 11) := by
  calc
    (N : ℝ) ^ ((1 : ℝ) / (213 : ℕ)) ≤
        (((strongPower (SimpleGraph.cycleGraph 11) 213).indepNum : ℕ) : ℝ) ^
          ((1 : ℝ) / (213 : ℕ)) := by
      apply Real.rpow_le_rpow (by positivity) _ (by positivity)
      exact_mod_cast alpha_ge
    _ ≤ shannonCapacity (SimpleGraph.cycleGraph 11) :=
      shannonCapacity_ge_root (SimpleGraph.cycleGraph 11) 213 (by norm_num)

theorem decimal_lower_integer : 5295515544509239 ^ 213 ≤
    N * (1000000000000000 : Nat) ^ 213 := by native_decide

theorem decimal_upper_integer : N * (1000000000000000 : Nat) ^ 213 <
    5295515544509240 ^ 213 := by native_decide

theorem root_bracket :
    (5295515544509239 : ℝ) / 1000000000000000 ≤ (N : ℝ) ^ ((1 : ℝ) / (213 : ℕ)) ∧
    (N : ℝ) ^ ((1 : ℝ) / (213 : ℕ)) < (5295515544509240 : ℝ) / 1000000000000000 := by
  constructor
  · exact Decimal.decimal_le (by norm_num) (by norm_num) decimal_lower_integer le_rfl
  · exact C11R6Common.root_lt_decimal (by norm_num) (by norm_num) decimal_upper_integer

theorem capacity_lower : (5.295515544509239 : ℝ) ≤
    shannonCapacity (SimpleGraph.cycleGraph 11) := by
  rw [show (5.295515544509239 : ℝ) =
    (5295515544509239 : ℝ) / 1000000000000000 by norm_num]
  exact root_bracket.1.trans capacity_root

theorem cross_power_BPZ_207 : C11R6History.BPZ_207 ^ 213 < N ^ 207 := by native_decide

theorem strict_root_BPZ_207 :
    (C11R6History.BPZ_207 : ℝ) ^ ((1 : ℝ) / (207 : ℕ)) <
    (N : ℝ) ^ ((1 : ℝ) / (213 : ℕ)) :=
  C11R6Common.root_lt_of_cross_power (by norm_num) (by norm_num) cross_power_BPZ_207

theorem cross_power_R3_207 : C11R6History.R3_207 ^ 213 < N ^ 207 := by native_decide

theorem strict_root_R3_207 :
    (C11R6History.R3_207 : ℝ) ^ ((1 : ℝ) / (207 : ℕ)) <
    (N : ℝ) ^ ((1 : ℝ) / (213 : ℕ)) :=
  C11R6Common.root_lt_of_cross_power (by norm_num) (by norm_num) cross_power_R3_207

theorem cross_power_R4_201 : C11R6History.R4_201 ^ 213 < N ^ 201 := by native_decide

theorem strict_root_R4_201 :
    (C11R6History.R4_201 : ℝ) ^ ((1 : ℝ) / (201 : ℕ)) <
    (N : ℝ) ^ ((1 : ℝ) / (213 : ℕ)) :=
  C11R6Common.root_lt_of_cross_power (by norm_num) (by norm_num) cross_power_R4_201

theorem cross_power_R4_210 : C11R6History.R4_210 ^ 213 < N ^ 210 := by native_decide

theorem strict_root_R4_210 :
    (C11R6History.R4_210 : ℝ) ^ ((1 : ℝ) / (210 : ℕ)) <
    (N : ℝ) ^ ((1 : ℝ) / (213 : ℕ)) :=
  C11R6Common.root_lt_of_cross_power (by norm_num) (by norm_num) cross_power_R4_210

theorem strictly_larger_R5 : C11R6History.R5_213 < N := by native_decide

theorem cross_power_R5 : C11R6History.R5_213 ^ 213 < N ^ 213 := by native_decide

theorem strict_root_R5 : (C11R6History.R5_213 : ℝ) ^ ((1 : ℝ) / (213 : ℕ)) <
    (N : ℝ) ^ ((1 : ℝ) / (213 : ℕ)) :=
  C11R6Common.root_lt_of_cross_power (by norm_num) (by norm_num) cross_power_R5

end ShannonBounds.C11R6D213
