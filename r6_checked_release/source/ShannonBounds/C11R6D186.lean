/- Copyright (c) 2026 Matthew Protti. Apache-2.0.
Generated from the frozen R6 certificates; the BPZ framework is unchanged. -/
import ShannonBounds.C11R6Tables
import ShannonBounds.C11R6History

set_option autoImplicit false
set_option maxRecDepth 4000000
set_option maxHeartbeats 0
set_option synthInstance.maxSize 4000
set_option exponentiation.threshold 20000

namespace ShannonBounds.C11R6D186

open SimpleGraph C11R6Base C11R6Tables

def N : Nat := 443276324003031783611356421181113884309761038339701682272503913637018224991280684849272770480887399420629190490478636970970895319532912

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

def e_n1 : Fin 3 → Nat := (Fin.cases (1) (Fin.cases (1) (fun _ => 1)))

def ch_n1 (R : Realisation Ty typedSep G) :
    (i : Fin 3) → Realisation Ty typedSep (strongPower G (e_n1 i)) :=
  (Fin.cases (R_v R) (Fin.cases (R_v R) (fun _ => R_v R)))

def R_n1 (R : Realisation Ty typedSep G) :
    Realisation Ty typedSep (strongPower G 3) :=
  Realisation.multiSubst e_n1 (ch_n1 R) S_d49651680030e3710982

def w_n1 (a : Ty) : Nat :=
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

theorem polynomial_n1 : ∀ a : Ty,
    (∑ x ∈ S_d49651680030e3710982.T a, w_v (x 0) * w_v (x 1) * w_v (x 2)) = w_n1 a := by native_decide

theorem step_n1 (R : Realisation Ty typedSep G)
    (h : ∀ a, R.w a = C11R6Base.w0 a) :
    ∀ a, (R_n1 R).w a = w_n1 a := by
  intro a
  change (Realisation.multiSubst e_n1 (ch_n1 R) S_d49651680030e3710982).w a = w_n1 a
  rw [w_multiSubst]
  have h0 : ∀ b, (ch_n1 R 0).w b = w_v b :=
    fun b => step_v R h b
  have h1 : ∀ b, (ch_n1 R 1).w b = w_v b :=
    fun b => step_v R h b
  have h2 : ∀ b, (ch_n1 R 2).w b = w_v b :=
    fun b => step_v R h b
  simp only [Fin.prod_univ_three, h0, h1, h2]
  exact polynomial_n1 a

def e_n2 : Fin 3 → Nat := (Fin.cases (1) (Fin.cases (1) (fun _ => 3)))

def ch_n2 (R : Realisation Ty typedSep G) :
    (i : Fin 3) → Realisation Ty typedSep (strongPower G (e_n2 i)) :=
  (Fin.cases (R_v R) (Fin.cases (R_v R) (fun _ => R_n1 R)))

def R_n2 (R : Realisation Ty typedSep G) :
    Realisation Ty typedSep (strongPower G 5) :=
  Realisation.multiSubst e_n2 (ch_n2 R) S_953611f4b154a3d6901c

def w_n2 (a : Ty) : Nat :=
  match a.val with
  | 0 => 0
  | 1 => 33190824610
  | 2 => 0
  | 3 => 13493746548
  | 4 => 244660887
  | 5 => 13631840244
  | 6 => 0
  | 7 => 4088508615
  | 8 => 0
  | 9 => 58019734453
  | 10 => 0
  | 11 => 0
  | 12 => 0
  | 13 => 0
  | 14 => 0
  | 15 => 6102277044
  | 16 => 0
  | 17 => 0
  | 18 => 0
  | 19 => 1552770
  | 20 => 0
  | 21 => 0
  | 22 => 0
  | 23 => 6890891397
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
  | 47 => 6627553476
  | 48 => 0
  | 49 => 0
  | 50 => 0
  | 51 => 0
  | 52 => 0
  | 53 => 0
  | 54 => 1552770
  | 55 => 6363368241
  | 56 => 0
  | 57 => 0
  | _ => 0

theorem polynomial_n2 : ∀ a : Ty,
    (∑ x ∈ S_953611f4b154a3d6901c.T a, w_v (x 0) * w_v (x 1) * w_n1 (x 2)) = w_n2 a := by native_decide

theorem step_n2 (R : Realisation Ty typedSep G)
    (h : ∀ a, R.w a = C11R6Base.w0 a) :
    ∀ a, (R_n2 R).w a = w_n2 a := by
  intro a
  change (Realisation.multiSubst e_n2 (ch_n2 R) S_953611f4b154a3d6901c).w a = w_n2 a
  rw [w_multiSubst]
  have h0 : ∀ b, (ch_n2 R 0).w b = w_v b :=
    fun b => step_v R h b
  have h1 : ∀ b, (ch_n2 R 1).w b = w_v b :=
    fun b => step_v R h b
  have h2 : ∀ b, (ch_n2 R 2).w b = w_n1 b :=
    fun b => step_n1 R h b
  simp only [Fin.prod_univ_three, h0, h1, h2]
  exact polynomial_n2 a

def e_n3 : Fin 2 → Nat := (Fin.cases (5) (fun _ => 1))

def ch_n3 (R : Realisation Ty typedSep G) :
    (i : Fin 2) → Realisation Ty typedSep (strongPower G (e_n3 i)) :=
  (Fin.cases (R_n2 R) (fun _ => R_v R))

def R_n3 (R : Realisation Ty typedSep G) :
    Realisation Ty typedSep (strongPower G 6) :=
  Realisation.multiSubst e_n3 (ch_n3 R) S_25f0774c2afeeb30a0e8

def w_n3 (a : Ty) : Nat :=
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

theorem polynomial_n3 : ∀ a : Ty,
    (∑ x ∈ S_25f0774c2afeeb30a0e8.T a, w_n2 (x 0) * w_v (x 1)) = w_n3 a := by native_decide

theorem step_n3 (R : Realisation Ty typedSep G)
    (h : ∀ a, R.w a = C11R6Base.w0 a) :
    ∀ a, (R_n3 R).w a = w_n3 a := by
  intro a
  change (Realisation.multiSubst e_n3 (ch_n3 R) S_25f0774c2afeeb30a0e8).w a = w_n3 a
  rw [w_multiSubst]
  have h0 : ∀ b, (ch_n3 R 0).w b = w_n2 b :=
    fun b => step_n2 R h b
  have h1 : ∀ b, (ch_n3 R 1).w b = w_v b :=
    fun b => step_v R h b
  simp only [Fin.prod_univ_two, h0, h1]
  exact polynomial_n3 a

def e_n4 : Fin 2 → Nat := (Fin.cases (6) (fun _ => 1))

def ch_n4 (R : Realisation Ty typedSep G) :
    (i : Fin 2) → Realisation Ty typedSep (strongPower G (e_n4 i)) :=
  (Fin.cases (R_n3 R) (fun _ => R_v R))

def R_n4 (R : Realisation Ty typedSep G) :
    Realisation Ty typedSep (strongPower G 7) :=
  Realisation.multiSubst e_n4 (ch_n4 R) S_22cac8b4c63f11109b61

def w_n4 (a : Ty) : Nat :=
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

theorem polynomial_n4 : ∀ a : Ty,
    (∑ x ∈ S_22cac8b4c63f11109b61.T a, w_n3 (x 0) * w_v (x 1)) = w_n4 a := by native_decide

theorem step_n4 (R : Realisation Ty typedSep G)
    (h : ∀ a, R.w a = C11R6Base.w0 a) :
    ∀ a, (R_n4 R).w a = w_n4 a := by
  intro a
  change (Realisation.multiSubst e_n4 (ch_n4 R) S_22cac8b4c63f11109b61).w a = w_n4 a
  rw [w_multiSubst]
  have h0 : ∀ b, (ch_n4 R 0).w b = w_n3 b :=
    fun b => step_n3 R h b
  have h1 : ∀ b, (ch_n4 R 1).w b = w_v b :=
    fun b => step_v R h b
  simp only [Fin.prod_univ_two, h0, h1]
  exact polynomial_n4 a

def e_n5 : Fin 3 → Nat := (Fin.cases (1) (Fin.cases (1) (fun _ => 1)))

def ch_n5 (R : Realisation Ty typedSep G) :
    (i : Fin 3) → Realisation Ty typedSep (strongPower G (e_n5 i)) :=
  (Fin.cases (R_v R) (Fin.cases (R_v R) (fun _ => R_v R)))

def R_n5 (R : Realisation Ty typedSep G) :
    Realisation Ty typedSep (strongPower G 3) :=
  Realisation.multiSubst e_n5 (ch_n5 R) S_9783e6b9166dfb4049c4

def w_n5 (a : Ty) : Nat :=
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

theorem polynomial_n5 : ∀ a : Ty,
    (∑ x ∈ S_9783e6b9166dfb4049c4.T a, w_v (x 0) * w_v (x 1) * w_v (x 2)) = w_n5 a := by native_decide

theorem step_n5 (R : Realisation Ty typedSep G)
    (h : ∀ a, R.w a = C11R6Base.w0 a) :
    ∀ a, (R_n5 R).w a = w_n5 a := by
  intro a
  change (Realisation.multiSubst e_n5 (ch_n5 R) S_9783e6b9166dfb4049c4).w a = w_n5 a
  rw [w_multiSubst]
  have h0 : ∀ b, (ch_n5 R 0).w b = w_v b :=
    fun b => step_v R h b
  have h1 : ∀ b, (ch_n5 R 1).w b = w_v b :=
    fun b => step_v R h b
  have h2 : ∀ b, (ch_n5 R 2).w b = w_v b :=
    fun b => step_v R h b
  simp only [Fin.prod_univ_three, h0, h1, h2]
  exact polynomial_n5 a

def e_n6 : Fin 3 → Nat := (Fin.cases (3) (Fin.cases (1) (fun _ => 1)))

def ch_n6 (R : Realisation Ty typedSep G) :
    (i : Fin 3) → Realisation Ty typedSep (strongPower G (e_n6 i)) :=
  (Fin.cases (R_n5 R) (Fin.cases (R_v R) (fun _ => R_v R)))

def R_n6 (R : Realisation Ty typedSep G) :
    Realisation Ty typedSep (strongPower G 5) :=
  Realisation.multiSubst e_n6 (ch_n6 R) S_988a6e27a74069e613e5

def w_n6 (a : Ty) : Nat :=
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

theorem polynomial_n6 : ∀ a : Ty,
    (∑ x ∈ S_988a6e27a74069e613e5.T a, w_n5 (x 0) * w_v (x 1) * w_v (x 2)) = w_n6 a := by native_decide

theorem step_n6 (R : Realisation Ty typedSep G)
    (h : ∀ a, R.w a = C11R6Base.w0 a) :
    ∀ a, (R_n6 R).w a = w_n6 a := by
  intro a
  change (Realisation.multiSubst e_n6 (ch_n6 R) S_988a6e27a74069e613e5).w a = w_n6 a
  rw [w_multiSubst]
  have h0 : ∀ b, (ch_n6 R 0).w b = w_n5 b :=
    fun b => step_n5 R h b
  have h1 : ∀ b, (ch_n6 R 1).w b = w_v b :=
    fun b => step_v R h b
  have h2 : ∀ b, (ch_n6 R 2).w b = w_v b :=
    fun b => step_v R h b
  simp only [Fin.prod_univ_three, h0, h1, h2]
  exact polynomial_n6 a

def e_n7 : Fin 2 → Nat := (Fin.cases (5) (fun _ => 1))

def ch_n7 (R : Realisation Ty typedSep G) :
    (i : Fin 2) → Realisation Ty typedSep (strongPower G (e_n7 i)) :=
  (Fin.cases (R_n6 R) (fun _ => R_v R))

def R_n7 (R : Realisation Ty typedSep G) :
    Realisation Ty typedSep (strongPower G 6) :=
  Realisation.multiSubst e_n7 (ch_n7 R) S_e6624479a4e7b8218273

def w_n7 (a : Ty) : Nat :=
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

theorem polynomial_n7 : ∀ a : Ty,
    (∑ x ∈ S_e6624479a4e7b8218273.T a, w_n6 (x 0) * w_v (x 1)) = w_n7 a := by native_decide

theorem step_n7 (R : Realisation Ty typedSep G)
    (h : ∀ a, R.w a = C11R6Base.w0 a) :
    ∀ a, (R_n7 R).w a = w_n7 a := by
  intro a
  change (Realisation.multiSubst e_n7 (ch_n7 R) S_e6624479a4e7b8218273).w a = w_n7 a
  rw [w_multiSubst]
  have h0 : ∀ b, (ch_n7 R 0).w b = w_n6 b :=
    fun b => step_n6 R h b
  have h1 : ∀ b, (ch_n7 R 1).w b = w_v b :=
    fun b => step_v R h b
  simp only [Fin.prod_univ_two, h0, h1]
  exact polynomial_n7 a

def e_n8 : Fin 3 → Nat := (Fin.cases (1) (Fin.cases (1) (fun _ => 1)))

def ch_n8 (R : Realisation Ty typedSep G) :
    (i : Fin 3) → Realisation Ty typedSep (strongPower G (e_n8 i)) :=
  (Fin.cases (R_v R) (Fin.cases (R_v R) (fun _ => R_v R)))

def R_n8 (R : Realisation Ty typedSep G) :
    Realisation Ty typedSep (strongPower G 3) :=
  Realisation.multiSubst e_n8 (ch_n8 R) S_275feb4472b545b7b61b

def w_n8 (a : Ty) : Nat :=
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

theorem polynomial_n8 : ∀ a : Ty,
    (∑ x ∈ S_275feb4472b545b7b61b.T a, w_v (x 0) * w_v (x 1) * w_v (x 2)) = w_n8 a := by native_decide

theorem step_n8 (R : Realisation Ty typedSep G)
    (h : ∀ a, R.w a = C11R6Base.w0 a) :
    ∀ a, (R_n8 R).w a = w_n8 a := by
  intro a
  change (Realisation.multiSubst e_n8 (ch_n8 R) S_275feb4472b545b7b61b).w a = w_n8 a
  rw [w_multiSubst]
  have h0 : ∀ b, (ch_n8 R 0).w b = w_v b :=
    fun b => step_v R h b
  have h1 : ∀ b, (ch_n8 R 1).w b = w_v b :=
    fun b => step_v R h b
  have h2 : ∀ b, (ch_n8 R 2).w b = w_v b :=
    fun b => step_v R h b
  simp only [Fin.prod_univ_three, h0, h1, h2]
  exact polynomial_n8 a

def e_n9 : Fin 3 → Nat := (Fin.cases (1) (Fin.cases (1) (fun _ => 3)))

def ch_n9 (R : Realisation Ty typedSep G) :
    (i : Fin 3) → Realisation Ty typedSep (strongPower G (e_n9 i)) :=
  (Fin.cases (R_v R) (Fin.cases (R_v R) (fun _ => R_n8 R)))

def R_n9 (R : Realisation Ty typedSep G) :
    Realisation Ty typedSep (strongPower G 5) :=
  Realisation.multiSubst e_n9 (ch_n9 R) S_f7172ffe1ee10decfde4

def w_n9 (a : Ty) : Nat :=
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

theorem polynomial_n9 : ∀ a : Ty,
    (∑ x ∈ S_f7172ffe1ee10decfde4.T a, w_v (x 0) * w_v (x 1) * w_n8 (x 2)) = w_n9 a := by native_decide

theorem step_n9 (R : Realisation Ty typedSep G)
    (h : ∀ a, R.w a = C11R6Base.w0 a) :
    ∀ a, (R_n9 R).w a = w_n9 a := by
  intro a
  change (Realisation.multiSubst e_n9 (ch_n9 R) S_f7172ffe1ee10decfde4).w a = w_n9 a
  rw [w_multiSubst]
  have h0 : ∀ b, (ch_n9 R 0).w b = w_v b :=
    fun b => step_v R h b
  have h1 : ∀ b, (ch_n9 R 1).w b = w_v b :=
    fun b => step_v R h b
  have h2 : ∀ b, (ch_n9 R 2).w b = w_n8 b :=
    fun b => step_n8 R h b
  simp only [Fin.prod_univ_three, h0, h1, h2]
  exact polynomial_n9 a

def e_n10 : Fin 2 → Nat := (Fin.cases (1) (fun _ => 1))

def ch_n10 (R : Realisation Ty typedSep G) :
    (i : Fin 2) → Realisation Ty typedSep (strongPower G (e_n10 i)) :=
  (Fin.cases (R_v R) (fun _ => R_v R))

def R_n10 (R : Realisation Ty typedSep G) :
    Realisation Ty typedSep (strongPower G 2) :=
  Realisation.multiSubst e_n10 (ch_n10 R) S_564505af0066fa9bc893

def w_n10 (a : Ty) : Nat :=
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

theorem polynomial_n10 : ∀ a : Ty,
    (∑ x ∈ S_564505af0066fa9bc893.T a, w_v (x 0) * w_v (x 1)) = w_n10 a := by native_decide

theorem step_n10 (R : Realisation Ty typedSep G)
    (h : ∀ a, R.w a = C11R6Base.w0 a) :
    ∀ a, (R_n10 R).w a = w_n10 a := by
  intro a
  change (Realisation.multiSubst e_n10 (ch_n10 R) S_564505af0066fa9bc893).w a = w_n10 a
  rw [w_multiSubst]
  have h0 : ∀ b, (ch_n10 R 0).w b = w_v b :=
    fun b => step_v R h b
  have h1 : ∀ b, (ch_n10 R 1).w b = w_v b :=
    fun b => step_v R h b
  simp only [Fin.prod_univ_two, h0, h1]
  exact polynomial_n10 a

def e_n11 : Fin 3 → Nat := (Fin.cases (5) (Fin.cases (2) (fun _ => 2)))

def ch_n11 (R : Realisation Ty typedSep G) :
    (i : Fin 3) → Realisation Ty typedSep (strongPower G (e_n11 i)) :=
  (Fin.cases (R_n9 R) (Fin.cases (R_n10 R) (fun _ => R_n10 R)))

def R_n11 (R : Realisation Ty typedSep G) :
    Realisation Ty typedSep (strongPower G 9) :=
  Realisation.multiSubst e_n11 (ch_n11 R) S_cc72ba3cc3d211951e7b

def w_n11 (a : Ty) : Nat :=
  match a.val with
  | 0 => 0
  | 1 => 0
  | 2 => 357729198937165719
  | 3 => 16393872252457874971
  | 4 => 0
  | 5 => 0
  | 6 => 0
  | 7 => 12460893995522704302
  | 8 => 0
  | 9 => 23925687218437507768
  | 10 => 0
  | 11 => 6762240402518448
  | 12 => 0
  | 13 => 0
  | 14 => 0
  | 15 => 5677849063939933395
  | 16 => 0
  | 17 => 0
  | 18 => 0
  | 19 => 0
  | 20 => 0
  | 21 => 0
  | 22 => 0
  | 23 => 4477737513511238652
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
  | 46 => 6513563963914875
  | 47 => 4869496614870528885
  | 48 => 0
  | 49 => 0
  | 50 => 0
  | 51 => 0
  | 52 => 0
  | 53 => 0
  | 54 => 0
  | 55 => 5274280514588803830
  | 56 => 0
  | 57 => 0
  | _ => 0

theorem polynomial_n11 : ∀ a : Ty,
    (∑ x ∈ S_cc72ba3cc3d211951e7b.T a, w_n9 (x 0) * w_n10 (x 1) * w_n10 (x 2)) = w_n11 a := by native_decide

theorem step_n11 (R : Realisation Ty typedSep G)
    (h : ∀ a, R.w a = C11R6Base.w0 a) :
    ∀ a, (R_n11 R).w a = w_n11 a := by
  intro a
  change (Realisation.multiSubst e_n11 (ch_n11 R) S_cc72ba3cc3d211951e7b).w a = w_n11 a
  rw [w_multiSubst]
  have h0 : ∀ b, (ch_n11 R 0).w b = w_n9 b :=
    fun b => step_n9 R h b
  have h1 : ∀ b, (ch_n11 R 1).w b = w_n10 b :=
    fun b => step_n10 R h b
  have h2 : ∀ b, (ch_n11 R 2).w b = w_n10 b :=
    fun b => step_n10 R h b
  simp only [Fin.prod_univ_three, h0, h1, h2]
  exact polynomial_n11 a

def e_n12 : Fin 3 → Nat := (Fin.cases (1) (Fin.cases (1) (fun _ => 3)))

def ch_n12 (R : Realisation Ty typedSep G) :
    (i : Fin 3) → Realisation Ty typedSep (strongPower G (e_n12 i)) :=
  (Fin.cases (R_v R) (Fin.cases (R_v R) (fun _ => R_n8 R)))

def R_n12 (R : Realisation Ty typedSep G) :
    Realisation Ty typedSep (strongPower G 5) :=
  Realisation.multiSubst e_n12 (ch_n12 R) S_2d78eefa50581f5d0332

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
    (∑ x ∈ S_2d78eefa50581f5d0332.T a, w_v (x 0) * w_v (x 1) * w_n8 (x 2)) = w_n12 a := by native_decide

theorem step_n12 (R : Realisation Ty typedSep G)
    (h : ∀ a, R.w a = C11R6Base.w0 a) :
    ∀ a, (R_n12 R).w a = w_n12 a := by
  intro a
  change (Realisation.multiSubst e_n12 (ch_n12 R) S_2d78eefa50581f5d0332).w a = w_n12 a
  rw [w_multiSubst]
  have h0 : ∀ b, (ch_n12 R 0).w b = w_v b :=
    fun b => step_v R h b
  have h1 : ∀ b, (ch_n12 R 1).w b = w_v b :=
    fun b => step_v R h b
  have h2 : ∀ b, (ch_n12 R 2).w b = w_n8 b :=
    fun b => step_n8 R h b
  simp only [Fin.prod_univ_three, h0, h1, h2]
  exact polynomial_n12 a

def e_n13 : Fin 2 → Nat := (Fin.cases (1) (fun _ => 1))

def ch_n13 (R : Realisation Ty typedSep G) :
    (i : Fin 2) → Realisation Ty typedSep (strongPower G (e_n13 i)) :=
  (Fin.cases (R_v R) (fun _ => R_v R))

def R_n13 (R : Realisation Ty typedSep G) :
    Realisation Ty typedSep (strongPower G 2) :=
  Realisation.multiSubst e_n13 (ch_n13 R) S_5ca90dee5abae9298a15

def w_n13 (a : Ty) : Nat :=
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

theorem polynomial_n13 : ∀ a : Ty,
    (∑ x ∈ S_5ca90dee5abae9298a15.T a, w_v (x 0) * w_v (x 1)) = w_n13 a := by native_decide

theorem step_n13 (R : Realisation Ty typedSep G)
    (h : ∀ a, R.w a = C11R6Base.w0 a) :
    ∀ a, (R_n13 R).w a = w_n13 a := by
  intro a
  change (Realisation.multiSubst e_n13 (ch_n13 R) S_5ca90dee5abae9298a15).w a = w_n13 a
  rw [w_multiSubst]
  have h0 : ∀ b, (ch_n13 R 0).w b = w_v b :=
    fun b => step_v R h b
  have h1 : ∀ b, (ch_n13 R 1).w b = w_v b :=
    fun b => step_v R h b
  simp only [Fin.prod_univ_two, h0, h1]
  exact polynomial_n13 a

def e_n14 : Fin 3 → Nat := (Fin.cases (5) (Fin.cases (2) (fun _ => 2)))

def ch_n14 (R : Realisation Ty typedSep G) :
    (i : Fin 3) → Realisation Ty typedSep (strongPower G (e_n14 i)) :=
  (Fin.cases (R_n12 R) (Fin.cases (R_n13 R) (fun _ => R_n10 R)))

def R_n14 (R : Realisation Ty typedSep G) :
    Realisation Ty typedSep (strongPower G 9) :=
  Realisation.multiSubst e_n14 (ch_n14 R) S_ece408aa34da4a12a217

def w_n14 (a : Ty) : Nat :=
  match a.val with
  | 0 => 0
  | 1 => 0
  | 2 => 357729198937165719
  | 3 => 16393872252457874971
  | 4 => 0
  | 5 => 0
  | 6 => 0
  | 7 => 12460893995522704302
  | 8 => 0
  | 9 => 23925687218437507768
  | 10 => 0
  | 11 => 6762240402518448
  | 12 => 0
  | 13 => 0
  | 14 => 0
  | 15 => 5677849063939933395
  | 16 => 0
  | 17 => 0
  | 18 => 0
  | 19 => 0
  | 20 => 0
  | 21 => 0
  | 22 => 0
  | 23 => 4477737513511238652
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
  | 46 => 6513563963914875
  | 47 => 4869496614870528885
  | 48 => 0
  | 49 => 0
  | 50 => 0
  | 51 => 0
  | 52 => 0
  | 53 => 0
  | 54 => 0
  | 55 => 5274280514588803830
  | 56 => 0
  | 57 => 0
  | _ => 0

theorem polynomial_n14 : ∀ a : Ty,
    (∑ x ∈ S_ece408aa34da4a12a217.T a, w_n12 (x 0) * w_n13 (x 1) * w_n10 (x 2)) = w_n14 a := by native_decide

theorem step_n14 (R : Realisation Ty typedSep G)
    (h : ∀ a, R.w a = C11R6Base.w0 a) :
    ∀ a, (R_n14 R).w a = w_n14 a := by
  intro a
  change (Realisation.multiSubst e_n14 (ch_n14 R) S_ece408aa34da4a12a217).w a = w_n14 a
  rw [w_multiSubst]
  have h0 : ∀ b, (ch_n14 R 0).w b = w_n12 b :=
    fun b => step_n12 R h b
  have h1 : ∀ b, (ch_n14 R 1).w b = w_n13 b :=
    fun b => step_n13 R h b
  have h2 : ∀ b, (ch_n14 R 2).w b = w_n10 b :=
    fun b => step_n10 R h b
  simp only [Fin.prod_univ_three, h0, h1, h2]
  exact polynomial_n14 a

def e_n15 : Fin 3 → Nat := (Fin.cases (1) (Fin.cases (1) (fun _ => 2)))

def ch_n15 (R : Realisation Ty typedSep G) :
    (i : Fin 3) → Realisation Ty typedSep (strongPower G (e_n15 i)) :=
  (Fin.cases (R_v R) (Fin.cases (R_v R) (fun _ => R_n10 R)))

def R_n15 (R : Realisation Ty typedSep G) :
    Realisation Ty typedSep (strongPower G 4) :=
  Realisation.multiSubst e_n15 (ch_n15 R) S_2d78eefa50581f5d0332

def w_n15 (a : Ty) : Nat :=
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

theorem polynomial_n15 : ∀ a : Ty,
    (∑ x ∈ S_2d78eefa50581f5d0332.T a, w_v (x 0) * w_v (x 1) * w_n10 (x 2)) = w_n15 a := by native_decide

theorem step_n15 (R : Realisation Ty typedSep G)
    (h : ∀ a, R.w a = C11R6Base.w0 a) :
    ∀ a, (R_n15 R).w a = w_n15 a := by
  intro a
  change (Realisation.multiSubst e_n15 (ch_n15 R) S_2d78eefa50581f5d0332).w a = w_n15 a
  rw [w_multiSubst]
  have h0 : ∀ b, (ch_n15 R 0).w b = w_v b :=
    fun b => step_v R h b
  have h1 : ∀ b, (ch_n15 R 1).w b = w_v b :=
    fun b => step_v R h b
  have h2 : ∀ b, (ch_n15 R 2).w b = w_n10 b :=
    fun b => step_n10 R h b
  simp only [Fin.prod_univ_three, h0, h1, h2]
  exact polynomial_n15 a

def e_n16 : Fin 3 → Nat := (Fin.cases (4) (Fin.cases (1) (fun _ => 1)))

def ch_n16 (R : Realisation Ty typedSep G) :
    (i : Fin 3) → Realisation Ty typedSep (strongPower G (e_n16 i)) :=
  (Fin.cases (R_n15 R) (Fin.cases (R_v R) (fun _ => R_v R)))

def R_n16 (R : Realisation Ty typedSep G) :
    Realisation Ty typedSep (strongPower G 6) :=
  Realisation.multiSubst e_n16 (ch_n16 R) S_bd87a4825e888e5d22f9

def w_n16 (a : Ty) : Nat :=
  match a.val with
  | 0 => 0
  | 1 => 4224886066513
  | 2 => 0
  | 3 => 2132999885412
  | 4 => 52373671740
  | 5 => 2166423028740
  | 6 => 0
  | 7 => 837169094277
  | 8 => 0
  | 9 => 8259862493710
  | 10 => 0
  | 11 => 0
  | 12 => 0
  | 13 => 0
  | 14 => 0
  | 15 => 1040391397728
  | 16 => 0
  | 17 => 0
  | 18 => 0
  | 19 => 522045108
  | 20 => 0
  | 21 => 0
  | 22 => 0
  | 23 => 1210001820174
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
  | 46 => 3266568
  | 47 => 1153483977240
  | 48 => 0
  | 49 => 0
  | 50 => 0
  | 51 => 0
  | 52 => 0
  | 53 => 0
  | 54 => 522045108
  | 55 => 1096418977956
  | 56 => 0
  | 57 => 0
  | _ => 0

theorem polynomial_n16 : ∀ a : Ty,
    (∑ x ∈ S_bd87a4825e888e5d22f9.T a, w_n15 (x 0) * w_v (x 1) * w_v (x 2)) = w_n16 a := by native_decide

theorem step_n16 (R : Realisation Ty typedSep G)
    (h : ∀ a, R.w a = C11R6Base.w0 a) :
    ∀ a, (R_n16 R).w a = w_n16 a := by
  intro a
  change (Realisation.multiSubst e_n16 (ch_n16 R) S_bd87a4825e888e5d22f9).w a = w_n16 a
  rw [w_multiSubst]
  have h0 : ∀ b, (ch_n16 R 0).w b = w_n15 b :=
    fun b => step_n15 R h b
  have h1 : ∀ b, (ch_n16 R 1).w b = w_v b :=
    fun b => step_v R h b
  have h2 : ∀ b, (ch_n16 R 2).w b = w_v b :=
    fun b => step_v R h b
  simp only [Fin.prod_univ_three, h0, h1, h2]
  exact polynomial_n16 a

def e_n17 : Fin 3 → Nat := (Fin.cases (9) (Fin.cases (9) (fun _ => 6)))

def ch_n17 (R : Realisation Ty typedSep G) :
    (i : Fin 3) → Realisation Ty typedSep (strongPower G (e_n17 i)) :=
  (Fin.cases (R_n11 R) (Fin.cases (R_n14 R) (fun _ => R_n16 R)))

def R_n17 (R : Realisation Ty typedSep G) :
    Realisation Ty typedSep (strongPower G 24) :=
  Realisation.multiSubst e_n17 (ch_n17 R) S_cf346b778e5d726ffeff

def w_n17 (a : Ty) : Nat :=
  match a.val with
  | 0 => 0
  | 1 => 396997860726894182256107433149150178464680988419464
  | 2 => 0
  | 3 => 2809469848933377476247638435283495298237949786362591
  | 4 => 0
  | 5 => 0
  | 6 => 0
  | 7 => 6076621426994891831143929034379797413433512577222545
  | 8 => 128562876534652755953725479820158977238000
  | 9 => 5408453421361025533318701624672352737475235377073638
  | 10 => 0
  | 11 => 40953368944330377083308729388720632226181597901782
  | 12 => 0
  | 13 => 0
  | 14 => 412210783097339484389766321912464737993057920
  | 15 => 4496945812777754511702819913461121784091791643517866
  | 16 => 0
  | 17 => 0
  | 18 => 0
  | 19 => 0
  | 20 => 0
  | 21 => 0
  | 22 => 0
  | 23 => 2365366925106767813270576994230369893229968159876992
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
  | 46 => 33277974900983274347470284212377641241028388065850
  | 47 => 3008182052904979894807736898419696658845998033245894
  | 48 => 0
  | 49 => 0
  | 50 => 0
  | 51 => 0
  | 52 => 0
  | 53 => 0
  | 54 => 680059162718686076596142478308983277714548178496
  | 55 => 3715178612807863500594459039894535063941098249155440
  | 56 => 0
  | 57 => 0
  | _ => 0

theorem polynomial_n17 : ∀ a : Ty,
    (∑ x ∈ S_cf346b778e5d726ffeff.T a, w_n11 (x 0) * w_n14 (x 1) * w_n16 (x 2)) = w_n17 a := by native_decide

theorem step_n17 (R : Realisation Ty typedSep G)
    (h : ∀ a, R.w a = C11R6Base.w0 a) :
    ∀ a, (R_n17 R).w a = w_n17 a := by
  intro a
  change (Realisation.multiSubst e_n17 (ch_n17 R) S_cf346b778e5d726ffeff).w a = w_n17 a
  rw [w_multiSubst]
  have h0 : ∀ b, (ch_n17 R 0).w b = w_n11 b :=
    fun b => step_n11 R h b
  have h1 : ∀ b, (ch_n17 R 1).w b = w_n14 b :=
    fun b => step_n14 R h b
  have h2 : ∀ b, (ch_n17 R 2).w b = w_n16 b :=
    fun b => step_n16 R h b
  simp only [Fin.prod_univ_three, h0, h1, h2]
  exact polynomial_n17 a

def e_n18 : Fin 3 → Nat := (Fin.cases (3) (Fin.cases (1) (fun _ => 1)))

def ch_n18 (R : Realisation Ty typedSep G) :
    (i : Fin 3) → Realisation Ty typedSep (strongPower G (e_n18 i)) :=
  (Fin.cases (R_n8 R) (Fin.cases (R_v R) (fun _ => R_v R)))

def R_n18 (R : Realisation Ty typedSep G) :
    Realisation Ty typedSep (strongPower G 5) :=
  Realisation.multiSubst e_n18 (ch_n18 R) S_6d1e67cc209acfd23ff3

def w_n18 (a : Ty) : Nat :=
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

theorem polynomial_n18 : ∀ a : Ty,
    (∑ x ∈ S_6d1e67cc209acfd23ff3.T a, w_n8 (x 0) * w_v (x 1) * w_v (x 2)) = w_n18 a := by native_decide

theorem step_n18 (R : Realisation Ty typedSep G)
    (h : ∀ a, R.w a = C11R6Base.w0 a) :
    ∀ a, (R_n18 R).w a = w_n18 a := by
  intro a
  change (Realisation.multiSubst e_n18 (ch_n18 R) S_6d1e67cc209acfd23ff3).w a = w_n18 a
  rw [w_multiSubst]
  have h0 : ∀ b, (ch_n18 R 0).w b = w_n8 b :=
    fun b => step_n8 R h b
  have h1 : ∀ b, (ch_n18 R 1).w b = w_v b :=
    fun b => step_v R h b
  have h2 : ∀ b, (ch_n18 R 2).w b = w_v b :=
    fun b => step_v R h b
  simp only [Fin.prod_univ_three, h0, h1, h2]
  exact polynomial_n18 a

def e_n19 : Fin 3 → Nat := (Fin.cases (5) (Fin.cases (1) (fun _ => 1)))

def ch_n19 (R : Realisation Ty typedSep G) :
    (i : Fin 3) → Realisation Ty typedSep (strongPower G (e_n19 i)) :=
  (Fin.cases (R_n6 R) (Fin.cases (R_v R) (fun _ => R_v R)))

def R_n19 (R : Realisation Ty typedSep G) :
    Realisation Ty typedSep (strongPower G 7) :=
  Realisation.multiSubst e_n19 (ch_n19 R) S_5c2653637645ea08c462

def w_n19 (a : Ty) : Nat :=
  match a.val with
  | 0 => 0
  | 1 => 538752669782491
  | 2 => 10416679396011
  | 3 => 334653741650304
  | 4 => 0
  | 5 => 328143018003678
  | 6 => 0
  | 7 => 159938416214163
  | 8 => 0
  | 9 => 1176609562843039
  | 10 => 0
  | 11 => 136197072162
  | 12 => 0
  | 13 => 0
  | 14 => 0
  | 15 => 206508353083005
  | 16 => 0
  | 17 => 0
  | 18 => 0
  | 19 => 0
  | 20 => 0
  | 21 => 0
  | 22 => 0
  | 23 => 172479128069172
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
  | 46 => 136197072162
  | 47 => 183696832496487
  | 48 => 0
  | 49 => 0
  | 50 => 0
  | 51 => 0
  | 52 => 0
  | 53 => 0
  | 54 => 1322960040
  | 55 => 195184379671482
  | 56 => 0
  | 57 => 0
  | _ => 0

theorem polynomial_n19 : ∀ a : Ty,
    (∑ x ∈ S_5c2653637645ea08c462.T a, w_n6 (x 0) * w_v (x 1) * w_v (x 2)) = w_n19 a := by native_decide

theorem step_n19 (R : Realisation Ty typedSep G)
    (h : ∀ a, R.w a = C11R6Base.w0 a) :
    ∀ a, (R_n19 R).w a = w_n19 a := by
  intro a
  change (Realisation.multiSubst e_n19 (ch_n19 R) S_5c2653637645ea08c462).w a = w_n19 a
  rw [w_multiSubst]
  have h0 : ∀ b, (ch_n19 R 0).w b = w_n6 b :=
    fun b => step_n6 R h b
  have h1 : ∀ b, (ch_n19 R 1).w b = w_v b :=
    fun b => step_v R h b
  have h2 : ∀ b, (ch_n19 R 2).w b = w_v b :=
    fun b => step_v R h b
  simp only [Fin.prod_univ_three, h0, h1, h2]
  exact polynomial_n19 a

def e_n20 : Fin 2 → Nat := (Fin.cases (7) (fun _ => 1))

def ch_n20 (R : Realisation Ty typedSep G) :
    (i : Fin 2) → Realisation Ty typedSep (strongPower G (e_n20 i)) :=
  (Fin.cases (R_n19 R) (fun _ => R_v R))

def R_n20 (R : Realisation Ty typedSep G) :
    Realisation Ty typedSep (strongPower G 8) :=
  Realisation.multiSubst e_n20 (ch_n20 R) S_22cac8b4c63f11109b61

def w_n20 (a : Ty) : Nat :=
  match a.val with
  | 0 => 0
  | 1 => 68421997653592843
  | 2 => 1934105782065012
  | 3 => 51074958066296877
  | 4 => 0
  | 5 => 49476224476542627
  | 6 => 0
  | 7 => 29156241187939473
  | 8 => 0
  | 9 => 167698491574177039
  | 10 => 0
  | 11 => 50590022435037
  | 12 => 0
  | 13 => 0
  | 14 => 3968880120
  | 15 => 34511640197960580
  | 16 => 0
  | 17 => 0
  | 18 => 0
  | 19 => 0
  | 20 => 0
  | 21 => 0
  | 22 => 0
  | 23 => 28021864874351541
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
  | 46 => 19748575463490
  | 47 => 30165869400519732
  | 48 => 0
  | 49 => 0
  | 50 => 0
  | 51 => 0
  | 52 => 0
  | 53 => 0
  | 54 => 596451542166
  | 55 => 32382658207263588
  | 56 => 0
  | 57 => 0
  | _ => 0

theorem polynomial_n20 : ∀ a : Ty,
    (∑ x ∈ S_22cac8b4c63f11109b61.T a, w_n19 (x 0) * w_v (x 1)) = w_n20 a := by native_decide

theorem step_n20 (R : Realisation Ty typedSep G)
    (h : ∀ a, R.w a = C11R6Base.w0 a) :
    ∀ a, (R_n20 R).w a = w_n20 a := by
  intro a
  change (Realisation.multiSubst e_n20 (ch_n20 R) S_22cac8b4c63f11109b61).w a = w_n20 a
  rw [w_multiSubst]
  have h0 : ∀ b, (ch_n20 R 0).w b = w_n19 b :=
    fun b => step_n19 R h b
  have h1 : ∀ b, (ch_n20 R 1).w b = w_v b :=
    fun b => step_v R h b
  simp only [Fin.prod_univ_two, h0, h1]
  exact polynomial_n20 a

def e_n21 : Fin 2 → Nat := (Fin.cases (8) (fun _ => 1))

def ch_n21 (R : Realisation Ty typedSep G) :
    (i : Fin 2) → Realisation Ty typedSep (strongPower G (e_n21 i)) :=
  (Fin.cases (R_n20 R) (fun _ => R_v R))

def R_n21 (R : Realisation Ty typedSep G) :
    Realisation Ty typedSep (strongPower G 9) :=
  Realisation.multiSubst e_n21 (ch_n21 R) S_73383c091e7d3a586822

def w_n21 (a : Ty) : Nat :=
  match a.val with
  | 0 => 0
  | 1 => 8689745472073596172
  | 2 => 347103980983896255
  | 3 => 7682934160437818067
  | 4 => 0
  | 5 => 7344564507692132859
  | 6 => 0
  | 7 => 5132615615136779121
  | 8 => 0
  | 9 => 23916872506100966749
  | 10 => 0
  | 11 => 12986100531970290
  | 12 => 0
  | 13 => 0
  | 14 => 2352935603538
  | 15 => 5676254741508363207
  | 16 => 0
  | 17 => 0
  | 18 => 0
  | 19 => 0
  | 20 => 0
  | 21 => 0
  | 22 => 0
  | 23 => 4482200286880449939
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
  | 46 => 2863543442206050
  | 47 => 4877146537797892257
  | 48 => 0
  | 49 => 0
  | 50 => 0
  | 51 => 0
  | 52 => 0
  | 53 => 0
  | 54 => 143941845378042
  | 55 => 5289080312331937071
  | 56 => 0
  | 57 => 0
  | _ => 0

theorem polynomial_n21 : ∀ a : Ty,
    (∑ x ∈ S_73383c091e7d3a586822.T a, w_n20 (x 0) * w_v (x 1)) = w_n21 a := by native_decide

theorem step_n21 (R : Realisation Ty typedSep G)
    (h : ∀ a, R.w a = C11R6Base.w0 a) :
    ∀ a, (R_n21 R).w a = w_n21 a := by
  intro a
  change (Realisation.multiSubst e_n21 (ch_n21 R) S_73383c091e7d3a586822).w a = w_n21 a
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
  Realisation.multiSubst e_n22 (ch_n22 R) S_73383c091e7d3a586822

def w_n22 (a : Ty) : Nat :=
  match a.val with
  | 0 => 0
  | 1 => 1103636633254942624714
  | 2 => 60652742274451240497
  | 3 => 1143239462180392589190
  | 4 => 0
  | 5 => 1077068482294792434372
  | 6 => 0
  | 7 => 879476752208002530879
  | 8 => 0
  | 9 => 3413263625451265089463
  | 10 => 0
  | 11 => 2885338218491469945
  | 12 => 0
  | 13 => 0
  | 14 => 765942391836522
  | 15 => 921891594357845715081
  | 16 => 0
  | 17 => 0
  | 18 => 0
  | 19 => 0
  | 20 => 0
  | 21 => 0
  | 22 => 0
  | 23 => 708223058255326791585
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
  | 46 => 415213799119877250
  | 47 => 778936865498997277512
  | 48 => 0
  | 49 => 0
  | 50 => 0
  | 51 => 0
  | 52 => 0
  | 53 => 0
  | 54 => 29030372370300114
  | 55 => 853299134245363586439
  | 56 => 0
  | 57 => 0
  | _ => 0

theorem polynomial_n22 : ∀ a : Ty,
    (∑ x ∈ S_73383c091e7d3a586822.T a, w_n21 (x 0) * w_v (x 1)) = w_n22 a := by native_decide

theorem step_n22 (R : Realisation Ty typedSep G)
    (h : ∀ a, R.w a = C11R6Base.w0 a) :
    ∀ a, (R_n22 R).w a = w_n22 a := by
  intro a
  change (Realisation.multiSubst e_n22 (ch_n22 R) S_73383c091e7d3a586822).w a = w_n22 a
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
  | 1 => 140170508438033187748513
  | 2 => 10373442124091349082347
  | 3 => 168724848317198649571548
  | 4 => 0
  | 5 => 156414043291386254697018
  | 6 => 0
  | 7 => 147506900570437032189513
  | 8 => 0
  | 9 => 487457767909635829768390
  | 10 => 0
  | 11 => 591676253849142453681
  | 12 => 0
  | 13 => 0
  | 14 => 195854936751686466
  | 15 => 148203436966130553213039
  | 16 => 0
  | 17 => 0
  | 18 => 0
  | 19 => 0
  | 20 => 0
  | 21 => 0
  | 22 => 0
  | 23 => 110807465148610199673459
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
  | 46 => 60206000872382201250
  | 47 => 123185636373708400507629
  | 48 => 0
  | 49 => 0
  | 50 => 0
  | 51 => 0
  | 52 => 0
  | 53 => 0
  | 54 => 5367954273942247938
  | 55 => 136305063029545618034922
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
  | 1 => 17803429600391762271422194
  | 2 => 1743210524322254074219569
  | 3 => 24746085824661339087906783
  | 4 => 0
  | 5 => 22533844463570829328531065
  | 6 => 0
  | 7 => 24314750607190633805896479
  | 8 => 0
  | 9 => 69665388970393037169170938
  | 10 => 0
  | 11 => 115138354418852275669743
  | 12 => 0
  | 13 => 0
  | 14 => 43915263840566221986
  | 15 => 23624674535576171381996457
  | 16 => 0
  | 17 => 0
  | 18 => 0
  | 19 => 0
  | 20 => 0
  | 21 => 0
  | 22 => 0
  | 23 => 17197033354831555842936348
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
  | 46 => 8729870126495419181250
  | 47 => 19324290577916625562911375
  | 48 => 0
  | 49 => 0
  | 50 => 0
  | 51 => 0
  | 52 => 0
  | 53 => 0
  | 54 => 942867509516945810946
  | 55 => 21596180455996969132635561
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

def e_n25 : Fin 3 → Nat := (Fin.cases (4) (Fin.cases (2) (fun _ => 2)))

def ch_n25 (R : Realisation Ty typedSep G) :
    (i : Fin 3) → Realisation Ty typedSep (strongPower G (e_n25 i)) :=
  (Fin.cases (R_n15 R) (Fin.cases (R_n13 R) (fun _ => R_n10 R)))

def R_n25 (R : Realisation Ty typedSep G) :
    Realisation Ty typedSep (strongPower G 8) :=
  Realisation.multiSubst e_n25 (ch_n25 R) S_ece408aa34da4a12a217

def w_n25 (a : Ty) : Nat :=
  match a.val with
  | 0 => 0
  | 1 => 0
  | 2 => 1958551202703213
  | 3 => 119609226775161361
  | 4 => 0
  | 5 => 0
  | 6 => 0
  | 7 => 78560812974196341
  | 8 => 0
  | 9 => 167739069954494857
  | 10 => 0
  | 11 => 30435253769970
  | 12 => 0
  | 13 => 0
  | 14 => 0
  | 15 => 34516052917536705
  | 16 => 0
  | 17 => 0
  | 18 => 0
  | 19 => 0
  | 20 => 0
  | 21 => 0
  | 22 => 0
  | 23 => 28002411844863828
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
  | 46 => 29292247711827
  | 47 => 30132208003455915
  | 48 => 0
  | 49 => 0
  | 50 => 0
  | 51 => 0
  | 52 => 0
  | 53 => 0
  | 54 => 0
  | 55 => 32320616608529727
  | 56 => 0
  | 57 => 0
  | _ => 0

theorem polynomial_n25 : ∀ a : Ty,
    (∑ x ∈ S_ece408aa34da4a12a217.T a, w_n15 (x 0) * w_n13 (x 1) * w_n10 (x 2)) = w_n25 a := by native_decide

theorem step_n25 (R : Realisation Ty typedSep G)
    (h : ∀ a, R.w a = C11R6Base.w0 a) :
    ∀ a, (R_n25 R).w a = w_n25 a := by
  intro a
  change (Realisation.multiSubst e_n25 (ch_n25 R) S_ece408aa34da4a12a217).w a = w_n25 a
  rw [w_multiSubst]
  have h0 : ∀ b, (ch_n25 R 0).w b = w_n15 b :=
    fun b => step_n15 R h b
  have h1 : ∀ b, (ch_n25 R 1).w b = w_n13 b :=
    fun b => step_n13 R h b
  have h2 : ∀ b, (ch_n25 R 2).w b = w_n10 b :=
    fun b => step_n10 R h b
  simp only [Fin.prod_univ_three, h0, h1, h2]
  exact polynomial_n25 a

def e_n26 : Fin 3 → Nat := (Fin.cases (5) (Fin.cases (12) (fun _ => 8)))

def ch_n26 (R : Realisation Ty typedSep G) :
    (i : Fin 3) → Realisation Ty typedSep (strongPower G (e_n26 i)) :=
  (Fin.cases (R_n18 R) (Fin.cases (R_n24 R) (fun _ => R_n25 R)))

def R_n26 (R : Realisation Ty typedSep G) :
    Realisation Ty typedSep (strongPower G 25) :=
  Realisation.multiSubst e_n26 (ch_n26 R) S_bed27dc006b01fbbbcf8

def w_n26 (a : Ty) : Nat :=
  match a.val with
  | 0 => 0
  | 1 => 0
  | 2 => 78882871816379075056470945663237215407684871899899651
  | 3 => 384544212152154073000472983558885108209592171458115735
  | 4 => 0
  | 5 => 0
  | 6 => 0
  | 7 => 902704035360207094135182420239644796872386688213829376
  | 8 => 1909492982979077307057720484940503263470160
  | 9 => 780789819934795232280442011194438845794488927504330404
  | 10 => 0
  | 11 => 7171923340305673558915228921627407277708460036998005
  | 12 => 0
  | 13 => 0
  | 14 => 1048185486113605248079738288108673974318226313672
  | 15 => 683744495364035559558451857175182071321155666705945290
  | 16 => 0
  | 17 => 0
  | 18 => 0
  | 19 => 0
  | 20 => 0
  | 21 => 0
  | 22 => 0
  | 23 => 351858210021271394177657146394138843542599890614563804
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
  | 46 => 4980096729067605463746543476346587260846739208783324
  | 47 => 452906043263907216590252799352712978545527094563475986
  | 48 => 0
  | 49 => 0
  | 50 => 0
  | 51 => 76850053273209679229612537662305861199879360236
  | 52 => 0
  | 53 => 0
  | 54 => 0
  | 55 => 565070774599504685756593343894859514700074473359627676
  | 56 => 0
  | 57 => 0
  | _ => 0

theorem polynomial_n26 : ∀ a : Ty,
    (∑ x ∈ S_bed27dc006b01fbbbcf8.T a, w_n18 (x 0) * w_n24 (x 1) * w_n25 (x 2)) = w_n26 a := by native_decide

theorem step_n26 (R : Realisation Ty typedSep G)
    (h : ∀ a, R.w a = C11R6Base.w0 a) :
    ∀ a, (R_n26 R).w a = w_n26 a := by
  intro a
  change (Realisation.multiSubst e_n26 (ch_n26 R) S_bed27dc006b01fbbbcf8).w a = w_n26 a
  rw [w_multiSubst]
  have h0 : ∀ b, (ch_n26 R 0).w b = w_n18 b :=
    fun b => step_n18 R h b
  have h1 : ∀ b, (ch_n26 R 1).w b = w_n24 b :=
    fun b => step_n24 R h b
  have h2 : ∀ b, (ch_n26 R 2).w b = w_n25 b :=
    fun b => step_n25 R h b
  simp only [Fin.prod_univ_three, h0, h1, h2]
  exact polynomial_n26 a

def e_n27 : Fin 4 → Nat := (Fin.cases (7) (Fin.cases (6) (Fin.cases (24) (fun _ => 25))))

def ch_n27 (R : Realisation Ty typedSep G) :
    (i : Fin 4) → Realisation Ty typedSep (strongPower G (e_n27 i)) :=
  (Fin.cases (R_n4 R) (Fin.cases (R_n7 R) (Fin.cases (R_n17 R) (fun _ => R_n26 R))))

theorem terminal_polynomial : (∑ x ∈ S_d101ee426b09eceb0f46.C, w_n4 (x 0) * w_n7 (x 1) * w_n17 (x 2) * w_n26 (x 3)) = N := by native_decide

theorem terminal_value (R : Realisation Ty typedSep G)
    (h : ∀ a, R.w a = C11R6Base.w0 a) :
    (∑ x ∈ S_d101ee426b09eceb0f46.C, ∏ i, (ch_n27 R i).w (x i)) = N := by
  have h0 : ∀ b, (ch_n27 R 0).w b = w_n4 b :=
    fun b => step_n4 R h b
  have h1 : ∀ b, (ch_n27 R 1).w b = w_n7 b :=
    fun b => step_n7 R h b
  have h2 : ∀ b, (ch_n27 R 2).w b = w_n17 b :=
    fun b => step_n17 R h b
  have h3 : ∀ b, (ch_n27 R 3).w b = w_n26 b :=
    fun b => step_n26 R h b
  simp only [Fin.prod_univ_four, h0, h1, h2, h3]
  exact terminal_polynomial

def codeBase (R : Realisation Ty typedSep G) : Finset (Fin 62 → α) :=
  (multiCodeSet e_n27 (ch_n27 R) S_d101ee426b09eceb0f46).image
    (strongPower_sum_iso G e_n27).symm

theorem independent_codeBase (R : Realisation Ty typedSep G) :
    (strongPower G 62).IsIndepSet ↑(codeBase R) :=
  isIndepSet_image_symm (strongPower_sum_iso G e_n27)
    (isIndepSet_multiCodeSet e_n27 (ch_n27 R) S_d101ee426b09eceb0f46)

theorem card_codeBase (R : Realisation Ty typedSep G)
    (h : ∀ a, R.w a = C11R6Base.w0 a) : (codeBase R).card = N := by
  calc
    (codeBase R).card = (multiCodeSet e_n27 (ch_n27 R) S_d101ee426b09eceb0f46).card :=
      Finset.card_image_of_injective _ (strongPower_sum_iso G e_n27).symm.injective
    _ = ∑ x ∈ S_d101ee426b09eceb0f46.C, ∏ i, (ch_n27 R i).w (x i) :=
      card_multiCodeSet e_n27 (ch_n27 R) S_d101ee426b09eceb0f46
    _ = N := terminal_value R h

end Generic

def isoPhysical : strongPower BaseC11.Cyc11 186 ≃g strongPower BaseC11.G3 62 :=
  (strongPower_mul_iso BaseC11.Cyc11 3 62).trans
    (strongPower_congr CapC11.G3_iso 62).symm

def code : Finset (Fin 186 → Fin 11) :=
  (codeBase C11R6Base.base).image isoPhysical.symm

theorem card_code : code.card = N := by
  calc
    code.card = (codeBase C11R6Base.base).card :=
      Finset.card_image_of_injective _ isoPhysical.symm.injective
    _ = N := card_codeBase C11R6Base.base C11R6Base.base_weights

theorem independent_code_Cyc :
    (strongPower BaseC11.Cyc11 186).IsIndepSet ↑code :=
  isIndepSet_image_symm isoPhysical
    (independent_codeBase C11R6Base.base)

theorem independent_code :
    (strongPower (SimpleGraph.cycleGraph 11) 186).IsIndepSet ↑code := by
  rw [← CapC11.Cyc_eq_cycleGraph]
  exact independent_code_Cyc

theorem exists_code :
    ∃ S : Finset (Fin 186 → Fin 11),
      (strongPower (SimpleGraph.cycleGraph 11) 186).IsIndepSet ↑S ∧ S.card = N :=
  ⟨code, independent_code, card_code⟩

theorem alpha_ge : N ≤ (strongPower (SimpleGraph.cycleGraph 11) 186).indepNum := by
  rw [← card_code]
  exact SimpleGraph.IsIndepSet.card_le_indepNum independent_code

theorem capacity_root : (N : ℝ) ^ ((1 : ℝ) / (186 : ℕ)) ≤
    shannonCapacity (SimpleGraph.cycleGraph 11) := by
  calc
    (N : ℝ) ^ ((1 : ℝ) / (186 : ℕ)) ≤
        (((strongPower (SimpleGraph.cycleGraph 11) 186).indepNum : ℕ) : ℝ) ^
          ((1 : ℝ) / (186 : ℕ)) := by
      apply Real.rpow_le_rpow (by positivity) _ (by positivity)
      exact_mod_cast alpha_ge
    _ ≤ shannonCapacity (SimpleGraph.cycleGraph 11) :=
      shannonCapacity_ge_root (SimpleGraph.cycleGraph 11) 186 (by norm_num)

theorem decimal_lower_integer : 5295498536418623 ^ 186 ≤
    N * (1000000000000000 : Nat) ^ 186 := by native_decide

theorem decimal_upper_integer : N * (1000000000000000 : Nat) ^ 186 <
    5295498536418624 ^ 186 := by native_decide

theorem root_bracket :
    (5295498536418623 : ℝ) / 1000000000000000 ≤ (N : ℝ) ^ ((1 : ℝ) / (186 : ℕ)) ∧
    (N : ℝ) ^ ((1 : ℝ) / (186 : ℕ)) < (5295498536418624 : ℝ) / 1000000000000000 := by
  constructor
  · exact Decimal.decimal_le (by norm_num) (by norm_num) decimal_lower_integer le_rfl
  · exact C11R6Common.root_lt_decimal (by norm_num) (by norm_num) decimal_upper_integer

theorem capacity_lower : (5.295498536418623 : ℝ) ≤
    shannonCapacity (SimpleGraph.cycleGraph 11) := by
  rw [show (5.295498536418623 : ℝ) =
    (5295498536418623 : ℝ) / 1000000000000000 by norm_num]
  exact root_bracket.1.trans capacity_root

theorem cross_power_BPZ_207 : C11R6History.BPZ_207 ^ 186 < N ^ 207 := by native_decide

theorem strict_root_BPZ_207 :
    (C11R6History.BPZ_207 : ℝ) ^ ((1 : ℝ) / (207 : ℕ)) <
    (N : ℝ) ^ ((1 : ℝ) / (186 : ℕ)) :=
  C11R6Common.root_lt_of_cross_power (by norm_num) (by norm_num) cross_power_BPZ_207

theorem cross_power_R3_207 : C11R6History.R3_207 ^ 186 < N ^ 207 := by native_decide

theorem strict_root_R3_207 :
    (C11R6History.R3_207 : ℝ) ^ ((1 : ℝ) / (207 : ℕ)) <
    (N : ℝ) ^ ((1 : ℝ) / (186 : ℕ)) :=
  C11R6Common.root_lt_of_cross_power (by norm_num) (by norm_num) cross_power_R3_207

theorem cross_power_R4_201 : C11R6History.R4_201 ^ 186 < N ^ 201 := by native_decide

theorem strict_root_R4_201 :
    (C11R6History.R4_201 : ℝ) ^ ((1 : ℝ) / (201 : ℕ)) <
    (N : ℝ) ^ ((1 : ℝ) / (186 : ℕ)) :=
  C11R6Common.root_lt_of_cross_power (by norm_num) (by norm_num) cross_power_R4_201

theorem cross_power_R4_210 : C11R6History.R4_210 ^ 186 < N ^ 210 := by native_decide

theorem strict_root_R4_210 :
    (C11R6History.R4_210 : ℝ) ^ ((1 : ℝ) / (210 : ℕ)) <
    (N : ℝ) ^ ((1 : ℝ) / (186 : ℕ)) :=
  C11R6Common.root_lt_of_cross_power (by norm_num) (by norm_num) cross_power_R4_210

theorem strictly_larger_R5 : C11R6History.R5_186 < N := by native_decide

theorem cross_power_R5 : C11R6History.R5_186 ^ 186 < N ^ 186 := by native_decide

theorem strict_root_R5 : (C11R6History.R5_186 : ℝ) ^ ((1 : ℝ) / (186 : ℕ)) <
    (N : ℝ) ^ ((1 : ℝ) / (186 : ℕ)) :=
  C11R6Common.root_lt_of_cross_power (by norm_num) (by norm_num) cross_power_R5

end ShannonBounds.C11R6D186
