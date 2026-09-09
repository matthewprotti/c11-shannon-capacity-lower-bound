/- Copyright (c) 2026 Matthew Protti. Apache-2.0.
Generated from the frozen R6 certificates; the BPZ framework is unchanged. -/
import ShannonBounds.C11R6Tables
import ShannonBounds.C11R6History

set_option autoImplicit false
set_option maxRecDepth 4000000
set_option maxHeartbeats 0
set_option synthInstance.maxSize 4000
set_option exponentiation.threshold 20000

namespace ShannonBounds.C11R6D198

open SimpleGraph C11R6Base C11R6Tables

def N : Nat := 215650308240559271076661927763289270756233042340399408085079498236580156319151638131903708724387292184834844476542038069560746092535997639387752

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
  Realisation.multiSubst e_n1 (ch_n1 R) S_51b4bb7e33ca836fee10

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
    (∑ x ∈ S_51b4bb7e33ca836fee10.T a, w_v (x 0) * w_v (x 1) * w_v (x 2)) = w_n1 a := by native_decide

theorem step_n1 (R : Realisation Ty typedSep G)
    (h : ∀ a, R.w a = C11R6Base.w0 a) :
    ∀ a, (R_n1 R).w a = w_n1 a := by
  intro a
  change (Realisation.multiSubst e_n1 (ch_n1 R) S_51b4bb7e33ca836fee10).w a = w_n1 a
  rw [w_multiSubst]
  have h0 : ∀ b, (ch_n1 R 0).w b = w_v b :=
    fun b => step_v R h b
  have h1 : ∀ b, (ch_n1 R 1).w b = w_v b :=
    fun b => step_v R h b
  have h2 : ∀ b, (ch_n1 R 2).w b = w_v b :=
    fun b => step_v R h b
  simp only [Fin.prod_univ_three, h0, h1, h2]
  exact polynomial_n1 a

def e_n2 : Fin 3 → Nat := (Fin.cases (1) (Fin.cases (3) (fun _ => 1)))

def ch_n2 (R : Realisation Ty typedSep G) :
    (i : Fin 3) → Realisation Ty typedSep (strongPower G (e_n2 i)) :=
  (Fin.cases (R_v R) (Fin.cases (R_n1 R) (fun _ => R_v R)))

def R_n2 (R : Realisation Ty typedSep G) :
    Realisation Ty typedSep (strongPower G 5) :=
  Realisation.multiSubst e_n2 (ch_n2 R) S_7461db4595a77df35801

def w_n2 (a : Ty) : Nat :=
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

theorem polynomial_n2 : ∀ a : Ty,
    (∑ x ∈ S_7461db4595a77df35801.T a, w_v (x 0) * w_n1 (x 1) * w_v (x 2)) = w_n2 a := by native_decide

theorem step_n2 (R : Realisation Ty typedSep G)
    (h : ∀ a, R.w a = C11R6Base.w0 a) :
    ∀ a, (R_n2 R).w a = w_n2 a := by
  intro a
  change (Realisation.multiSubst e_n2 (ch_n2 R) S_7461db4595a77df35801).w a = w_n2 a
  rw [w_multiSubst]
  have h0 : ∀ b, (ch_n2 R 0).w b = w_v b :=
    fun b => step_v R h b
  have h1 : ∀ b, (ch_n2 R 1).w b = w_n1 b :=
    fun b => step_n1 R h b
  have h2 : ∀ b, (ch_n2 R 2).w b = w_v b :=
    fun b => step_v R h b
  simp only [Fin.prod_univ_three, h0, h1, h2]
  exact polynomial_n2 a

def e_n3 : Fin 2 → Nat := (Fin.cases (1) (fun _ => 5))

def ch_n3 (R : Realisation Ty typedSep G) :
    (i : Fin 2) → Realisation Ty typedSep (strongPower G (e_n3 i)) :=
  (Fin.cases (R_v R) (fun _ => R_n2 R))

def R_n3 (R : Realisation Ty typedSep G) :
    Realisation Ty typedSep (strongPower G 6) :=
  Realisation.multiSubst e_n3 (ch_n3 R) S_e91967edd2b512831205

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
    (∑ x ∈ S_e91967edd2b512831205.T a, w_v (x 0) * w_n2 (x 1)) = w_n3 a := by native_decide

theorem step_n3 (R : Realisation Ty typedSep G)
    (h : ∀ a, R.w a = C11R6Base.w0 a) :
    ∀ a, (R_n3 R).w a = w_n3 a := by
  intro a
  change (Realisation.multiSubst e_n3 (ch_n3 R) S_e91967edd2b512831205).w a = w_n3 a
  rw [w_multiSubst]
  have h0 : ∀ b, (ch_n3 R 0).w b = w_v b :=
    fun b => step_v R h b
  have h1 : ∀ b, (ch_n3 R 1).w b = w_n2 b :=
    fun b => step_n2 R h b
  simp only [Fin.prod_univ_two, h0, h1]
  exact polynomial_n3 a

def e_n4 : Fin 2 → Nat := (Fin.cases (1) (fun _ => 6))

def ch_n4 (R : Realisation Ty typedSep G) :
    (i : Fin 2) → Realisation Ty typedSep (strongPower G (e_n4 i)) :=
  (Fin.cases (R_v R) (fun _ => R_n3 R))

def R_n4 (R : Realisation Ty typedSep G) :
    Realisation Ty typedSep (strongPower G 7) :=
  Realisation.multiSubst e_n4 (ch_n4 R) S_2ed8d12cfe031f31782c

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
    (∑ x ∈ S_2ed8d12cfe031f31782c.T a, w_v (x 0) * w_n3 (x 1)) = w_n4 a := by native_decide

theorem step_n4 (R : Realisation Ty typedSep G)
    (h : ∀ a, R.w a = C11R6Base.w0 a) :
    ∀ a, (R_n4 R).w a = w_n4 a := by
  intro a
  change (Realisation.multiSubst e_n4 (ch_n4 R) S_2ed8d12cfe031f31782c).w a = w_n4 a
  rw [w_multiSubst]
  have h0 : ∀ b, (ch_n4 R 0).w b = w_v b :=
    fun b => step_v R h b
  have h1 : ∀ b, (ch_n4 R 1).w b = w_n3 b :=
    fun b => step_n3 R h b
  simp only [Fin.prod_univ_two, h0, h1]
  exact polynomial_n4 a

def e_n5 : Fin 2 → Nat := (Fin.cases (7) (fun _ => 1))

def ch_n5 (R : Realisation Ty typedSep G) :
    (i : Fin 2) → Realisation Ty typedSep (strongPower G (e_n5 i)) :=
  (Fin.cases (R_n4 R) (fun _ => R_v R))

def R_n5 (R : Realisation Ty typedSep G) :
    Realisation Ty typedSep (strongPower G 8) :=
  Realisation.multiSubst e_n5 (ch_n5 R) S_73383c091e7d3a586822

def w_n5 (a : Ty) : Nat :=
  match a.val with
  | 0 => 0
  | 1 => 67988830509526303
  | 2 => 1896218002778625
  | 3 => 51483396027985758
  | 4 => 0
  | 5 => 49445500536784215
  | 6 => 0
  | 7 => 29215328608317528
  | 8 => 0
  | 9 => 167680275542140288
  | 10 => 0
  | 11 => 71629610587803
  | 12 => 0
  | 13 => 0
  | 14 => 5995244970
  | 15 => 34508099941487529
  | 16 => 0
  | 17 => 0
  | 18 => 0
  | 19 => 0
  | 20 => 0
  | 21 => 0
  | 22 => 0
  | 23 => 28030280837398026
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
  | 46 => 4733813441250
  | 47 => 30181427999071521
  | 48 => 0
  | 49 => 0
  | 50 => 0
  | 51 => 0
  | 52 => 0
  | 53 => 0
  | 54 => 287785733490
  | 55 => 32416710927242154
  | 56 => 0
  | 57 => 0
  | _ => 0

theorem polynomial_n5 : ∀ a : Ty,
    (∑ x ∈ S_73383c091e7d3a586822.T a, w_n4 (x 0) * w_v (x 1)) = w_n5 a := by native_decide

theorem step_n5 (R : Realisation Ty typedSep G)
    (h : ∀ a, R.w a = C11R6Base.w0 a) :
    ∀ a, (R_n5 R).w a = w_n5 a := by
  intro a
  change (Realisation.multiSubst e_n5 (ch_n5 R) S_73383c091e7d3a586822).w a = w_n5 a
  rw [w_multiSubst]
  have h0 : ∀ b, (ch_n5 R 0).w b = w_n4 b :=
    fun b => step_n4 R h b
  have h1 : ∀ b, (ch_n5 R 1).w b = w_v b :=
    fun b => step_v R h b
  simp only [Fin.prod_univ_two, h0, h1]
  exact polynomial_n5 a

def e_n6 : Fin 2 → Nat := (Fin.cases (1) (fun _ => 8))

def ch_n6 (R : Realisation Ty typedSep G) :
    (i : Fin 2) → Realisation Ty typedSep (strongPower G (e_n6 i)) :=
  (Fin.cases (R_v R) (fun _ => R_n5 R))

def R_n6 (R : Realisation Ty typedSep G) :
    Realisation Ty typedSep (strongPower G 9) :=
  Realisation.multiSubst e_n6 (ch_n6 R) S_bfd644574c544c933581

def w_n6 (a : Ty) : Nat :=
  match a.val with
  | 0 => 0
  | 1 => 8634796363541603890
  | 2 => 341976490890087078
  | 3 => 7734231614227004937
  | 4 => 0
  | 5 => 7336487547588389967
  | 6 => 0
  | 7 => 5144582717288971317
  | 8 => 0
  | 9 => 23914338333625881802
  | 10 => 0
  | 11 => 15860058711803901
  | 12 => 0
  | 13 => 0
  | 14 => 1714681986210
  | 15 => 5675890334032991070
  | 16 => 0
  | 17 => 0
  | 18 => 0
  | 19 => 0
  | 20 => 0
  | 21 => 0
  | 22 => 0
  | 23 => 4483340705536940556
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
  | 46 => 686402948981250
  | 47 => 4879347886491791409
  | 48 => 0
  | 49 => 0
  | 50 => 0
  | 51 => 0
  | 52 => 0
  | 53 => 0
  | 54 => 55067014479330
  | 55 => 5294009058430948227
  | 56 => 0
  | 57 => 0
  | _ => 0

theorem polynomial_n6 : ∀ a : Ty,
    (∑ x ∈ S_bfd644574c544c933581.T a, w_v (x 0) * w_n5 (x 1)) = w_n6 a := by native_decide

theorem step_n6 (R : Realisation Ty typedSep G)
    (h : ∀ a, R.w a = C11R6Base.w0 a) :
    ∀ a, (R_n6 R).w a = w_n6 a := by
  intro a
  change (Realisation.multiSubst e_n6 (ch_n6 R) S_bfd644574c544c933581).w a = w_n6 a
  rw [w_multiSubst]
  have h0 : ∀ b, (ch_n6 R 0).w b = w_v b :=
    fun b => step_v R h b
  have h1 : ∀ b, (ch_n6 R 1).w b = w_n5 b :=
    fun b => step_n5 R h b
  simp only [Fin.prod_univ_two, h0, h1]
  exact polynomial_n6 a

def e_n7 : Fin 3 → Nat := (Fin.cases (1) (Fin.cases (1) (fun _ => 1)))

def ch_n7 (R : Realisation Ty typedSep G) :
    (i : Fin 3) → Realisation Ty typedSep (strongPower G (e_n7 i)) :=
  (Fin.cases (R_v R) (Fin.cases (R_v R) (fun _ => R_v R)))

def R_n7 (R : Realisation Ty typedSep G) :
    Realisation Ty typedSep (strongPower G 3) :=
  Realisation.multiSubst e_n7 (ch_n7 R) S_9783e6b9166dfb4049c4

def w_n7 (a : Ty) : Nat :=
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

theorem polynomial_n7 : ∀ a : Ty,
    (∑ x ∈ S_9783e6b9166dfb4049c4.T a, w_v (x 0) * w_v (x 1) * w_v (x 2)) = w_n7 a := by native_decide

theorem step_n7 (R : Realisation Ty typedSep G)
    (h : ∀ a, R.w a = C11R6Base.w0 a) :
    ∀ a, (R_n7 R).w a = w_n7 a := by
  intro a
  change (Realisation.multiSubst e_n7 (ch_n7 R) S_9783e6b9166dfb4049c4).w a = w_n7 a
  rw [w_multiSubst]
  have h0 : ∀ b, (ch_n7 R 0).w b = w_v b :=
    fun b => step_v R h b
  have h1 : ∀ b, (ch_n7 R 1).w b = w_v b :=
    fun b => step_v R h b
  have h2 : ∀ b, (ch_n7 R 2).w b = w_v b :=
    fun b => step_v R h b
  simp only [Fin.prod_univ_three, h0, h1, h2]
  exact polynomial_n7 a

def e_n8 : Fin 3 → Nat := (Fin.cases (3) (Fin.cases (1) (fun _ => 1)))

def ch_n8 (R : Realisation Ty typedSep G) :
    (i : Fin 3) → Realisation Ty typedSep (strongPower G (e_n8 i)) :=
  (Fin.cases (R_n7 R) (Fin.cases (R_v R) (fun _ => R_v R)))

def R_n8 (R : Realisation Ty typedSep G) :
    Realisation Ty typedSep (strongPower G 5) :=
  Realisation.multiSubst e_n8 (ch_n8 R) S_988a6e27a74069e613e5

def w_n8 (a : Ty) : Nat :=
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

theorem polynomial_n8 : ∀ a : Ty,
    (∑ x ∈ S_988a6e27a74069e613e5.T a, w_n7 (x 0) * w_v (x 1) * w_v (x 2)) = w_n8 a := by native_decide

theorem step_n8 (R : Realisation Ty typedSep G)
    (h : ∀ a, R.w a = C11R6Base.w0 a) :
    ∀ a, (R_n8 R).w a = w_n8 a := by
  intro a
  change (Realisation.multiSubst e_n8 (ch_n8 R) S_988a6e27a74069e613e5).w a = w_n8 a
  rw [w_multiSubst]
  have h0 : ∀ b, (ch_n8 R 0).w b = w_n7 b :=
    fun b => step_n7 R h b
  have h1 : ∀ b, (ch_n8 R 1).w b = w_v b :=
    fun b => step_v R h b
  have h2 : ∀ b, (ch_n8 R 2).w b = w_v b :=
    fun b => step_v R h b
  simp only [Fin.prod_univ_three, h0, h1, h2]
  exact polynomial_n8 a

def e_n9 : Fin 2 → Nat := (Fin.cases (5) (fun _ => 1))

def ch_n9 (R : Realisation Ty typedSep G) :
    (i : Fin 2) → Realisation Ty typedSep (strongPower G (e_n9 i)) :=
  (Fin.cases (R_n8 R) (fun _ => R_v R))

def R_n9 (R : Realisation Ty typedSep G) :
    Realisation Ty typedSep (strongPower G 6) :=
  Realisation.multiSubst e_n9 (ch_n9 R) S_e6624479a4e7b8218273

def w_n9 (a : Ty) : Nat :=
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

theorem polynomial_n9 : ∀ a : Ty,
    (∑ x ∈ S_e6624479a4e7b8218273.T a, w_n8 (x 0) * w_v (x 1)) = w_n9 a := by native_decide

theorem step_n9 (R : Realisation Ty typedSep G)
    (h : ∀ a, R.w a = C11R6Base.w0 a) :
    ∀ a, (R_n9 R).w a = w_n9 a := by
  intro a
  change (Realisation.multiSubst e_n9 (ch_n9 R) S_e6624479a4e7b8218273).w a = w_n9 a
  rw [w_multiSubst]
  have h0 : ∀ b, (ch_n9 R 0).w b = w_n8 b :=
    fun b => step_n8 R h b
  have h1 : ∀ b, (ch_n9 R 1).w b = w_v b :=
    fun b => step_v R h b
  simp only [Fin.prod_univ_two, h0, h1]
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

def e_n11 : Fin 3 → Nat := (Fin.cases (1) (Fin.cases (1) (fun _ => 1)))

def ch_n11 (R : Realisation Ty typedSep G) :
    (i : Fin 3) → Realisation Ty typedSep (strongPower G (e_n11 i)) :=
  (Fin.cases (R_v R) (Fin.cases (R_v R) (fun _ => R_v R)))

def R_n11 (R : Realisation Ty typedSep G) :
    Realisation Ty typedSep (strongPower G 3) :=
  Realisation.multiSubst e_n11 (ch_n11 R) S_bc598aabfc397b015309

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
    (∑ x ∈ S_bc598aabfc397b015309.T a, w_v (x 0) * w_v (x 1) * w_v (x 2)) = w_n11 a := by native_decide

theorem step_n11 (R : Realisation Ty typedSep G)
    (h : ∀ a, R.w a = C11R6Base.w0 a) :
    ∀ a, (R_n11 R).w a = w_n11 a := by
  intro a
  change (Realisation.multiSubst e_n11 (ch_n11 R) S_bc598aabfc397b015309).w a = w_n11 a
  rw [w_multiSubst]
  have h0 : ∀ b, (ch_n11 R 0).w b = w_v b :=
    fun b => step_v R h b
  have h1 : ∀ b, (ch_n11 R 1).w b = w_v b :=
    fun b => step_v R h b
  have h2 : ∀ b, (ch_n11 R 2).w b = w_v b :=
    fun b => step_v R h b
  simp only [Fin.prod_univ_three, h0, h1, h2]
  exact polynomial_n11 a

def e_n12 : Fin 3 → Nat := (Fin.cases (2) (Fin.cases (3) (fun _ => 2)))

def ch_n12 (R : Realisation Ty typedSep G) :
    (i : Fin 3) → Realisation Ty typedSep (strongPower G (e_n12 i)) :=
  (Fin.cases (R_n10 R) (Fin.cases (R_n11 R) (fun _ => R_n10 R)))

def R_n12 (R : Realisation Ty typedSep G) :
    Realisation Ty typedSep (strongPower G 7) :=
  Realisation.multiSubst e_n12 (ch_n12 R) S_1de129ef1fff89d74bef

def w_n12 (a : Ty) : Nat :=
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

theorem polynomial_n12 : ∀ a : Ty,
    (∑ x ∈ S_1de129ef1fff89d74bef.T a, w_n10 (x 0) * w_n11 (x 1) * w_n10 (x 2)) = w_n12 a := by native_decide

theorem step_n12 (R : Realisation Ty typedSep G)
    (h : ∀ a, R.w a = C11R6Base.w0 a) :
    ∀ a, (R_n12 R).w a = w_n12 a := by
  intro a
  change (Realisation.multiSubst e_n12 (ch_n12 R) S_1de129ef1fff89d74bef).w a = w_n12 a
  rw [w_multiSubst]
  have h0 : ∀ b, (ch_n12 R 0).w b = w_n10 b :=
    fun b => step_n10 R h b
  have h1 : ∀ b, (ch_n12 R 1).w b = w_n11 b :=
    fun b => step_n11 R h b
  have h2 : ∀ b, (ch_n12 R 2).w b = w_n10 b :=
    fun b => step_n10 R h b
  simp only [Fin.prod_univ_three, h0, h1, h2]
  exact polynomial_n12 a

def e_n13 : Fin 3 → Nat := (Fin.cases (1) (Fin.cases (1) (fun _ => 1)))

def ch_n13 (R : Realisation Ty typedSep G) :
    (i : Fin 3) → Realisation Ty typedSep (strongPower G (e_n13 i)) :=
  (Fin.cases (R_v R) (Fin.cases (R_v R) (fun _ => R_v R)))

def R_n13 (R : Realisation Ty typedSep G) :
    Realisation Ty typedSep (strongPower G 3) :=
  Realisation.multiSubst e_n13 (ch_n13 R) S_275feb4472b545b7b61b

def w_n13 (a : Ty) : Nat :=
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

theorem polynomial_n13 : ∀ a : Ty,
    (∑ x ∈ S_275feb4472b545b7b61b.T a, w_v (x 0) * w_v (x 1) * w_v (x 2)) = w_n13 a := by native_decide

theorem step_n13 (R : Realisation Ty typedSep G)
    (h : ∀ a, R.w a = C11R6Base.w0 a) :
    ∀ a, (R_n13 R).w a = w_n13 a := by
  intro a
  change (Realisation.multiSubst e_n13 (ch_n13 R) S_275feb4472b545b7b61b).w a = w_n13 a
  rw [w_multiSubst]
  have h0 : ∀ b, (ch_n13 R 0).w b = w_v b :=
    fun b => step_v R h b
  have h1 : ∀ b, (ch_n13 R 1).w b = w_v b :=
    fun b => step_v R h b
  have h2 : ∀ b, (ch_n13 R 2).w b = w_v b :=
    fun b => step_v R h b
  simp only [Fin.prod_univ_three, h0, h1, h2]
  exact polynomial_n13 a

def e_n14 : Fin 3 → Nat := (Fin.cases (1) (Fin.cases (1) (fun _ => 3)))

def ch_n14 (R : Realisation Ty typedSep G) :
    (i : Fin 3) → Realisation Ty typedSep (strongPower G (e_n14 i)) :=
  (Fin.cases (R_v R) (Fin.cases (R_v R) (fun _ => R_n13 R)))

def R_n14 (R : Realisation Ty typedSep G) :
    Realisation Ty typedSep (strongPower G 5) :=
  Realisation.multiSubst e_n14 (ch_n14 R) S_562e2180d94b76a35d8a

def w_n14 (a : Ty) : Nat :=
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

theorem polynomial_n14 : ∀ a : Ty,
    (∑ x ∈ S_562e2180d94b76a35d8a.T a, w_v (x 0) * w_v (x 1) * w_n13 (x 2)) = w_n14 a := by native_decide

theorem step_n14 (R : Realisation Ty typedSep G)
    (h : ∀ a, R.w a = C11R6Base.w0 a) :
    ∀ a, (R_n14 R).w a = w_n14 a := by
  intro a
  change (Realisation.multiSubst e_n14 (ch_n14 R) S_562e2180d94b76a35d8a).w a = w_n14 a
  rw [w_multiSubst]
  have h0 : ∀ b, (ch_n14 R 0).w b = w_v b :=
    fun b => step_v R h b
  have h1 : ∀ b, (ch_n14 R 1).w b = w_v b :=
    fun b => step_v R h b
  have h2 : ∀ b, (ch_n14 R 2).w b = w_n13 b :=
    fun b => step_n13 R h b
  simp only [Fin.prod_univ_three, h0, h1, h2]
  exact polynomial_n14 a

def e_n15 : Fin 3 → Nat := (Fin.cases (5) (Fin.cases (2) (fun _ => 3)))

def ch_n15 (R : Realisation Ty typedSep G) :
    (i : Fin 3) → Realisation Ty typedSep (strongPower G (e_n15 i)) :=
  (Fin.cases (R_n14 R) (Fin.cases (R_n10 R) (fun _ => R_n11 R)))

def R_n15 (R : Realisation Ty typedSep G) :
    Realisation Ty typedSep (strongPower G 10) :=
  Realisation.multiSubst e_n15 (ch_n15 R) S_cc72ba3cc3d211951e7b

def w_n15 (a : Ty) : Nat :=
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

theorem polynomial_n15 : ∀ a : Ty,
    (∑ x ∈ S_cc72ba3cc3d211951e7b.T a, w_n14 (x 0) * w_n10 (x 1) * w_n11 (x 2)) = w_n15 a := by native_decide

theorem step_n15 (R : Realisation Ty typedSep G)
    (h : ∀ a, R.w a = C11R6Base.w0 a) :
    ∀ a, (R_n15 R).w a = w_n15 a := by
  intro a
  change (Realisation.multiSubst e_n15 (ch_n15 R) S_cc72ba3cc3d211951e7b).w a = w_n15 a
  rw [w_multiSubst]
  have h0 : ∀ b, (ch_n15 R 0).w b = w_n14 b :=
    fun b => step_n14 R h b
  have h1 : ∀ b, (ch_n15 R 1).w b = w_n10 b :=
    fun b => step_n10 R h b
  have h2 : ∀ b, (ch_n15 R 2).w b = w_n11 b :=
    fun b => step_n11 R h b
  simp only [Fin.prod_univ_three, h0, h1, h2]
  exact polynomial_n15 a

def e_n16 : Fin 2 → Nat := (Fin.cases (1) (fun _ => 1))

def ch_n16 (R : Realisation Ty typedSep G) :
    (i : Fin 2) → Realisation Ty typedSep (strongPower G (e_n16 i)) :=
  (Fin.cases (R_v R) (fun _ => R_v R))

def R_n16 (R : Realisation Ty typedSep G) :
    Realisation Ty typedSep (strongPower G 2) :=
  Realisation.multiSubst e_n16 (ch_n16 R) S_9b70f31dd1696e52e328

def w_n16 (a : Ty) : Nat :=
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

theorem polynomial_n16 : ∀ a : Ty,
    (∑ x ∈ S_9b70f31dd1696e52e328.T a, w_v (x 0) * w_v (x 1)) = w_n16 a := by native_decide

theorem step_n16 (R : Realisation Ty typedSep G)
    (h : ∀ a, R.w a = C11R6Base.w0 a) :
    ∀ a, (R_n16 R).w a = w_n16 a := by
  intro a
  change (Realisation.multiSubst e_n16 (ch_n16 R) S_9b70f31dd1696e52e328).w a = w_n16 a
  rw [w_multiSubst]
  have h0 : ∀ b, (ch_n16 R 0).w b = w_v b :=
    fun b => step_v R h b
  have h1 : ∀ b, (ch_n16 R 1).w b = w_v b :=
    fun b => step_v R h b
  simp only [Fin.prod_univ_two, h0, h1]
  exact polynomial_n16 a

def e_n17 : Fin 3 → Nat := (Fin.cases (1) (Fin.cases (2) (fun _ => 1)))

def ch_n17 (R : Realisation Ty typedSep G) :
    (i : Fin 3) → Realisation Ty typedSep (strongPower G (e_n17 i)) :=
  (Fin.cases (R_v R) (Fin.cases (R_n16 R) (fun _ => R_v R)))

def R_n17 (R : Realisation Ty typedSep G) :
    Realisation Ty typedSep (strongPower G 4) :=
  Realisation.multiSubst e_n17 (ch_n17 R) S_b0b2c46dc9f8db336b46

def w_n17 (a : Ty) : Nat :=
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

theorem polynomial_n17 : ∀ a : Ty,
    (∑ x ∈ S_b0b2c46dc9f8db336b46.T a, w_v (x 0) * w_n16 (x 1) * w_v (x 2)) = w_n17 a := by native_decide

theorem step_n17 (R : Realisation Ty typedSep G)
    (h : ∀ a, R.w a = C11R6Base.w0 a) :
    ∀ a, (R_n17 R).w a = w_n17 a := by
  intro a
  change (Realisation.multiSubst e_n17 (ch_n17 R) S_b0b2c46dc9f8db336b46).w a = w_n17 a
  rw [w_multiSubst]
  have h0 : ∀ b, (ch_n17 R 0).w b = w_v b :=
    fun b => step_v R h b
  have h1 : ∀ b, (ch_n17 R 1).w b = w_n16 b :=
    fun b => step_n16 R h b
  have h2 : ∀ b, (ch_n17 R 2).w b = w_v b :=
    fun b => step_v R h b
  simp only [Fin.prod_univ_three, h0, h1, h2]
  exact polynomial_n17 a

def e_n18 : Fin 3 → Nat := (Fin.cases (2) (Fin.cases (2) (fun _ => 4)))

def ch_n18 (R : Realisation Ty typedSep G) :
    (i : Fin 3) → Realisation Ty typedSep (strongPower G (e_n18 i)) :=
  (Fin.cases (R_n10 R) (Fin.cases (R_n10 R) (fun _ => R_n17 R)))

def R_n18 (R : Realisation Ty typedSep G) :
    Realisation Ty typedSep (strongPower G 8) :=
  Realisation.multiSubst e_n18 (ch_n18 R) S_960de25190a3bed445b8

def w_n18 (a : Ty) : Nat :=
  match a.val with
  | 0 => 0
  | 1 => 0
  | 2 => 1958557612606785
  | 3 => 119609220365257789
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

theorem polynomial_n18 : ∀ a : Ty,
    (∑ x ∈ S_960de25190a3bed445b8.T a, w_n10 (x 0) * w_n10 (x 1) * w_n17 (x 2)) = w_n18 a := by native_decide

theorem step_n18 (R : Realisation Ty typedSep G)
    (h : ∀ a, R.w a = C11R6Base.w0 a) :
    ∀ a, (R_n18 R).w a = w_n18 a := by
  intro a
  change (Realisation.multiSubst e_n18 (ch_n18 R) S_960de25190a3bed445b8).w a = w_n18 a
  rw [w_multiSubst]
  have h0 : ∀ b, (ch_n18 R 0).w b = w_n10 b :=
    fun b => step_n10 R h b
  have h1 : ∀ b, (ch_n18 R 1).w b = w_n10 b :=
    fun b => step_n10 R h b
  have h2 : ∀ b, (ch_n18 R 2).w b = w_n17 b :=
    fun b => step_n17 R h b
  simp only [Fin.prod_univ_three, h0, h1, h2]
  exact polynomial_n18 a

def e_n19 : Fin 3 → Nat := (Fin.cases (7) (Fin.cases (10) (fun _ => 8)))

def ch_n19 (R : Realisation Ty typedSep G) :
    (i : Fin 3) → Realisation Ty typedSep (strongPower G (e_n19 i)) :=
  (Fin.cases (R_n12 R) (Fin.cases (R_n15 R) (fun _ => R_n18 R)))

def R_n19 (R : Realisation Ty typedSep G) :
    Realisation Ty typedSep (strongPower G 25) :=
  Realisation.multiSubst e_n19 (ch_n19 R) S_01c047685d920c22640e

def w_n19 (a : Ty) : Nat :=
  match a.val with
  | 0 => 0
  | 1 => 59371986104239656822428399238834563527160888278101834
  | 2 => 0
  | 3 => 411296435086230307902198669496332111271459793823713425
  | 4 => 0
  | 5 => 0
  | 6 => 0
  | 7 => 899375103236409276290920462850736346242493297386870378
  | 8 => 0
  | 9 => 783856355041011264518883001598076458028113575880285608
  | 10 => 0
  | 11 => 6672756365045305608725203187441198879650096500872781
  | 12 => 0
  | 13 => 0
  | 14 => 0
  | 15 => 682742720274936190043530429674213776572867787995238748
  | 16 => 0
  | 17 => 0
  | 18 => 0
  | 19 => 0
  | 20 => 0
  | 21 => 0
  | 22 => 0
  | 23 => 350900470291160952937904154805428891172807436493621996
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
  | 46 => 5314111876047290192271306594271124313455854022328081
  | 47 => 450865355994952721739675218933029012548592034511413430
  | 48 => 0
  | 49 => 0
  | 50 => 0
  | 51 => 0
  | 52 => 0
  | 53 => 0
  | 54 => 124147205805114664702797334009803213123798803662500
  | 55 => 561152445757363136814249055625626477622248579136789190
  | 56 => 0
  | 57 => 0
  | _ => 0

theorem polynomial_n19 : ∀ a : Ty,
    (∑ x ∈ S_01c047685d920c22640e.T a, w_n12 (x 0) * w_n15 (x 1) * w_n18 (x 2)) = w_n19 a := by native_decide

theorem step_n19 (R : Realisation Ty typedSep G)
    (h : ∀ a, R.w a = C11R6Base.w0 a) :
    ∀ a, (R_n19 R).w a = w_n19 a := by
  intro a
  change (Realisation.multiSubst e_n19 (ch_n19 R) S_01c047685d920c22640e).w a = w_n19 a
  rw [w_multiSubst]
  have h0 : ∀ b, (ch_n19 R 0).w b = w_n12 b :=
    fun b => step_n12 R h b
  have h1 : ∀ b, (ch_n19 R 1).w b = w_n15 b :=
    fun b => step_n15 R h b
  have h2 : ∀ b, (ch_n19 R 2).w b = w_n18 b :=
    fun b => step_n18 R h b
  simp only [Fin.prod_univ_three, h0, h1, h2]
  exact polynomial_n19 a

def e_n20 : Fin 3 → Nat := (Fin.cases (1) (Fin.cases (1) (fun _ => 5)))

def ch_n20 (R : Realisation Ty typedSep G) :
    (i : Fin 3) → Realisation Ty typedSep (strongPower G (e_n20 i)) :=
  (Fin.cases (R_v R) (Fin.cases (R_v R) (fun _ => R_n8 R)))

def R_n20 (R : Realisation Ty typedSep G) :
    Realisation Ty typedSep (strongPower G 7) :=
  Realisation.multiSubst e_n20 (ch_n20 R) S_669343cc17cb8eaf6957

def w_n20 (a : Ty) : Nat :=
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

theorem polynomial_n20 : ∀ a : Ty,
    (∑ x ∈ S_669343cc17cb8eaf6957.T a, w_v (x 0) * w_v (x 1) * w_n8 (x 2)) = w_n20 a := by native_decide

theorem step_n20 (R : Realisation Ty typedSep G)
    (h : ∀ a, R.w a = C11R6Base.w0 a) :
    ∀ a, (R_n20 R).w a = w_n20 a := by
  intro a
  change (Realisation.multiSubst e_n20 (ch_n20 R) S_669343cc17cb8eaf6957).w a = w_n20 a
  rw [w_multiSubst]
  have h0 : ∀ b, (ch_n20 R 0).w b = w_v b :=
    fun b => step_v R h b
  have h1 : ∀ b, (ch_n20 R 1).w b = w_v b :=
    fun b => step_v R h b
  have h2 : ∀ b, (ch_n20 R 2).w b = w_n8 b :=
    fun b => step_n8 R h b
  simp only [Fin.prod_univ_three, h0, h1, h2]
  exact polynomial_n20 a

def e_n21 : Fin 2 → Nat := (Fin.cases (7) (fun _ => 1))

def ch_n21 (R : Realisation Ty typedSep G) :
    (i : Fin 2) → Realisation Ty typedSep (strongPower G (e_n21 i)) :=
  (Fin.cases (R_n20 R) (fun _ => R_v R))

def R_n21 (R : Realisation Ty typedSep G) :
    Realisation Ty typedSep (strongPower G 8) :=
  Realisation.multiSubst e_n21 (ch_n21 R) S_f95d1e072279bb3bfc11

def w_n21 (a : Ty) : Nat :=
  match a.val with
  | 0 => 0
  | 1 => 68429873982177721
  | 2 => 1934105782065012
  | 3 => 51067081780244775
  | 4 => 0
  | 5 => 49476782641560453
  | 6 => 0
  | 7 => 29155683025736316
  | 8 => 0
  | 9 => 167698491574177039
  | 10 => 0
  | 11 => 50590022435037
  | 12 => 0
  | 13 => 0
  | 14 => 3968880120
  | 15 => 34511640198898803
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

theorem polynomial_n21 : ∀ a : Ty,
    (∑ x ∈ S_f95d1e072279bb3bfc11.T a, w_n20 (x 0) * w_v (x 1)) = w_n21 a := by native_decide

theorem step_n21 (R : Realisation Ty typedSep G)
    (h : ∀ a, R.w a = C11R6Base.w0 a) :
    ∀ a, (R_n21 R).w a = w_n21 a := by
  intro a
  change (Realisation.multiSubst e_n21 (ch_n21 R) S_f95d1e072279bb3bfc11).w a = w_n21 a
  rw [w_multiSubst]
  have h0 : ∀ b, (ch_n21 R 0).w b = w_n20 b :=
    fun b => step_n20 R h b
  have h1 : ∀ b, (ch_n21 R 1).w b = w_v b :=
    fun b => step_v R h b
  simp only [Fin.prod_univ_two, h0, h1]
  exact polynomial_n21 a

def e_n22 : Fin 2 → Nat := (Fin.cases (8) (fun _ => 1))

def ch_n22 (R : Realisation Ty typedSep G) :
    (i : Fin 2) → Realisation Ty typedSep (strongPower G (e_n22 i)) :=
  (Fin.cases (R_n21 R) (fun _ => R_v R))

def R_n22 (R : Realisation Ty typedSep G) :
    Realisation Ty typedSep (strongPower G 9) :=
  Realisation.multiSubst e_n22 (ch_n22 R) S_73383c091e7d3a586822

def w_n22 (a : Ty) : Nat :=
  match a.val with
  | 0 => 0
  | 1 => 8690745765803875678
  | 2 => 347103980983896255
  | 3 => 7681933872494810766
  | 4 => 0
  | 5 => 7344711305091821097
  | 6 => 0
  | 7 => 5132468818528012872
  | 8 => 0
  | 9 => 23916872506103781418
  | 10 => 0
  | 11 => 12986100531970290
  | 12 => 0
  | 13 => 0
  | 14 => 2352935603538
  | 15 => 5676254741777633208
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

def e_n23 : Fin 2 → Nat := (Fin.cases (9) (fun _ => 1))

def ch_n23 (R : Realisation Ty typedSep G) :
    (i : Fin 2) → Realisation Ty typedSep (strongPower G (e_n23 i)) :=
  (Fin.cases (R_n22 R) (fun _ => R_v R))

def R_n23 (R : Realisation Ty typedSep G) :
    Realisation Ty typedSep (strongPower G 10) :=
  Realisation.multiSubst e_n23 (ch_n23 R) S_73383c091e7d3a586822

def w_n23 (a : Ty) : Nat :=
  match a.val with
  | 0 => 0
  | 1 => 1103763670558688121976
  | 2 => 60652742274451240497
  | 3 => 1143112425664523921811
  | 4 => 0
  | 5 => 1077097449384722550294
  | 6 => 0
  | 7 => 879447785284841553207
  | 8 => 0
  | 9 => 3413263625452472582464
  | 10 => 0
  | 11 => 2885338218491469945
  | 12 => 0
  | 13 => 0
  | 14 => 765942391836522
  | 15 => 921891594415816637805
  | 16 => 0
  | 17 => 0
  | 18 => 0
  | 19 => 0
  | 20 => 0
  | 21 => 0
  | 22 => 0
  | 23 => 708223058255335235592
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
  | 47 => 778936865499005721519
  | 48 => 0
  | 49 => 0
  | 50 => 0
  | 51 => 0
  | 52 => 0
  | 53 => 0
  | 54 => 29030372370300114
  | 55 => 853299134245372030446
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

def e_n24 : Fin 2 → Nat := (Fin.cases (10) (fun _ => 1))

def ch_n24 (R : Realisation Ty typedSep G) :
    (i : Fin 2) → Realisation Ty typedSep (strongPower G (e_n24 i)) :=
  (Fin.cases (R_n23 R) (fun _ => R_v R))

def R_n24 (R : Realisation Ty typedSep G) :
    Realisation Ty typedSep (strongPower G 11) :=
  Realisation.multiSubst e_n24 (ch_n24 R) S_73383c091e7d3a586822

def w_n24 (a : Ty) : Nat :=
  match a.val with
  | 0 => 0
  | 1 => 140186642175608865900787
  | 2 => 10373442124091374414368
  | 3 => 168708714686948133051534
  | 4 => 0
  | 5 => 156419126151350459937768
  | 6 => 0
  | 7 => 147501817741745243463960
  | 8 => 0
  | 9 => 487457767909981206542704
  | 10 => 0
  | 11 => 591676253849142453681
  | 12 => 0
  | 13 => 0
  | 14 => 195854936751686466
  | 15 => 148203436977226412808288
  | 16 => 0
  | 17 => 0
  | 18 => 0
  | 19 => 0
  | 20 => 0
  | 21 => 0
  | 22 => 0
  | 23 => 110807465148615021201456
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
  | 47 => 123185636373713247367647
  | 48 => 0
  | 49 => 0
  | 50 => 0
  | 51 => 0
  | 52 => 0
  | 53 => 0
  | 54 => 5367954273942247938
  | 55 => 136305063029550490226961
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

def e_n25 : Fin 3 → Nat := (Fin.cases (1) (Fin.cases (1) (fun _ => 3)))

def ch_n25 (R : Realisation Ty typedSep G) :
    (i : Fin 3) → Realisation Ty typedSep (strongPower G (e_n25 i)) :=
  (Fin.cases (R_v R) (Fin.cases (R_v R) (fun _ => R_n1 R)))

def R_n25 (R : Realisation Ty typedSep G) :
    Realisation Ty typedSep (strongPower G 5) :=
  Realisation.multiSubst e_n25 (ch_n25 R) S_2d78eefa50581f5d0332

def w_n25 (a : Ty) : Nat :=
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

def e_n26 : Fin 3 → Nat := (Fin.cases (5) (Fin.cases (2) (fun _ => 2)))

def ch_n26 (R : Realisation Ty typedSep G) :
    (i : Fin 3) → Realisation Ty typedSep (strongPower G (e_n26 i)) :=
  (Fin.cases (R_n25 R) (Fin.cases (R_n10 R) (fun _ => R_n10 R)))

def R_n26 (R : Realisation Ty typedSep G) :
    Realisation Ty typedSep (strongPower G 9) :=
  Realisation.multiSubst e_n26 (ch_n26 R) S_ece408aa34da4a12a217

def w_n26 (a : Ty) : Nat :=
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

theorem polynomial_n26 : ∀ a : Ty,
    (∑ x ∈ S_ece408aa34da4a12a217.T a, w_n25 (x 0) * w_n10 (x 1) * w_n10 (x 2)) = w_n26 a := by native_decide

theorem step_n26 (R : Realisation Ty typedSep G)
    (h : ∀ a, R.w a = C11R6Base.w0 a) :
    ∀ a, (R_n26 R).w a = w_n26 a := by
  intro a
  change (Realisation.multiSubst e_n26 (ch_n26 R) S_ece408aa34da4a12a217).w a = w_n26 a
  rw [w_multiSubst]
  have h0 : ∀ b, (ch_n26 R 0).w b = w_n25 b :=
    fun b => step_n25 R h b
  have h1 : ∀ b, (ch_n26 R 1).w b = w_n10 b :=
    fun b => step_n10 R h b
  have h2 : ∀ b, (ch_n26 R 2).w b = w_n10 b :=
    fun b => step_n10 R h b
  simp only [Fin.prod_univ_three, h0, h1, h2]
  exact polynomial_n26 a

def e_n27 : Fin 3 → Nat := (Fin.cases (1) (Fin.cases (1) (fun _ => 2)))

def ch_n27 (R : Realisation Ty typedSep G) :
    (i : Fin 3) → Realisation Ty typedSep (strongPower G (e_n27 i)) :=
  (Fin.cases (R_v R) (Fin.cases (R_v R) (fun _ => R_n16 R)))

def R_n27 (R : Realisation Ty typedSep G) :
    Realisation Ty typedSep (strongPower G 4) :=
  Realisation.multiSubst e_n27 (ch_n27 R) S_c28c6dd5607aacbad7ef

def w_n27 (a : Ty) : Nat :=
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

theorem polynomial_n27 : ∀ a : Ty,
    (∑ x ∈ S_c28c6dd5607aacbad7ef.T a, w_v (x 0) * w_v (x 1) * w_n16 (x 2)) = w_n27 a := by native_decide

theorem step_n27 (R : Realisation Ty typedSep G)
    (h : ∀ a, R.w a = C11R6Base.w0 a) :
    ∀ a, (R_n27 R).w a = w_n27 a := by
  intro a
  change (Realisation.multiSubst e_n27 (ch_n27 R) S_c28c6dd5607aacbad7ef).w a = w_n27 a
  rw [w_multiSubst]
  have h0 : ∀ b, (ch_n27 R 0).w b = w_v b :=
    fun b => step_v R h b
  have h1 : ∀ b, (ch_n27 R 1).w b = w_v b :=
    fun b => step_v R h b
  have h2 : ∀ b, (ch_n27 R 2).w b = w_n16 b :=
    fun b => step_n16 R h b
  simp only [Fin.prod_univ_three, h0, h1, h2]
  exact polynomial_n27 a

def e_n28 : Fin 3 → Nat := (Fin.cases (1) (Fin.cases (4) (fun _ => 1)))

def ch_n28 (R : Realisation Ty typedSep G) :
    (i : Fin 3) → Realisation Ty typedSep (strongPower G (e_n28 i)) :=
  (Fin.cases (R_v R) (Fin.cases (R_n27 R) (fun _ => R_v R)))

def R_n28 (R : Realisation Ty typedSep G) :
    Realisation Ty typedSep (strongPower G 6) :=
  Realisation.multiSubst e_n28 (ch_n28 R) S_37294a683db0ad79cd1a

def w_n28 (a : Ty) : Nat :=
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

theorem polynomial_n28 : ∀ a : Ty,
    (∑ x ∈ S_37294a683db0ad79cd1a.T a, w_v (x 0) * w_n27 (x 1) * w_v (x 2)) = w_n28 a := by native_decide

theorem step_n28 (R : Realisation Ty typedSep G)
    (h : ∀ a, R.w a = C11R6Base.w0 a) :
    ∀ a, (R_n28 R).w a = w_n28 a := by
  intro a
  change (Realisation.multiSubst e_n28 (ch_n28 R) S_37294a683db0ad79cd1a).w a = w_n28 a
  rw [w_multiSubst]
  have h0 : ∀ b, (ch_n28 R 0).w b = w_v b :=
    fun b => step_v R h b
  have h1 : ∀ b, (ch_n28 R 1).w b = w_n27 b :=
    fun b => step_n27 R h b
  have h2 : ∀ b, (ch_n28 R 2).w b = w_v b :=
    fun b => step_v R h b
  simp only [Fin.prod_univ_three, h0, h1, h2]
  exact polynomial_n28 a

def e_n29 : Fin 3 → Nat := (Fin.cases (11) (Fin.cases (9) (fun _ => 6)))

def ch_n29 (R : Realisation Ty typedSep G) :
    (i : Fin 3) → Realisation Ty typedSep (strongPower G (e_n29 i)) :=
  (Fin.cases (R_n24 R) (Fin.cases (R_n26 R) (fun _ => R_n28 R)))

def R_n29 (R : Realisation Ty typedSep G) :
    Realisation Ty typedSep (strongPower G 26) :=
  Realisation.multiSubst e_n29 (ch_n29 R) S_7586a2b6c341612c9fdc

def w_n29 (a : Ty) : Nat :=
  match a.val with
  | 0 => 0
  | 1 => 9518531467461581038565686597783969782583413188574617088
  | 2 => 0
  | 3 => 59243602513390387945549847275748340681287101659843797959
  | 4 => 0
  | 5 => 0
  | 6 => 0
  | 7 => 133170406060624103028189598679349815673534062975040276405
  | 8 => 1796517923701499188698244977748873960762355856
  | 9 => 113160360431450272095580118797142154861408173944642355950
  | 10 => 419531844916472803187485353955165370432138112
  | 11 => 1145217243620701220545914352391045928767159436482388816
  | 12 => 0
  | 13 => 0
  | 14 => 156542558771260622492347936672918039787091771649920
  | 15 => 103868301188896030137035527404329741624129806191405682278
  | 16 => 0
  | 17 => 0
  | 18 => 0
  | 19 => 0
  | 20 => 0
  | 21 => 0
  | 22 => 0
  | 23 => 52060795852449015640778710013480410283173754817658536576
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
  | 46 => 817308807076978887588456222175187798868586737026466090
  | 47 => 67661065574626464430366336700233426701301694301928917918
  | 48 => 0
  | 49 => 0
  | 50 => 0
  | 51 => 7888091577132054005519387615601260648678342913600
  | 52 => 0
  | 53 => 0
  | 54 => 31752984647461320888162096549043980690052828422160224
  | 55 => 84988338297892043665801641796228644472858919330583886656
  | 56 => 0
  | 57 => 0
  | _ => 0

theorem polynomial_n29 : ∀ a : Ty,
    (∑ x ∈ S_7586a2b6c341612c9fdc.T a, w_n24 (x 0) * w_n26 (x 1) * w_n28 (x 2)) = w_n29 a := by native_decide

theorem step_n29 (R : Realisation Ty typedSep G)
    (h : ∀ a, R.w a = C11R6Base.w0 a) :
    ∀ a, (R_n29 R).w a = w_n29 a := by
  intro a
  change (Realisation.multiSubst e_n29 (ch_n29 R) S_7586a2b6c341612c9fdc).w a = w_n29 a
  rw [w_multiSubst]
  have h0 : ∀ b, (ch_n29 R 0).w b = w_n24 b :=
    fun b => step_n24 R h b
  have h1 : ∀ b, (ch_n29 R 1).w b = w_n26 b :=
    fun b => step_n26 R h b
  have h2 : ∀ b, (ch_n29 R 2).w b = w_n28 b :=
    fun b => step_n28 R h b
  simp only [Fin.prod_univ_three, h0, h1, h2]
  exact polynomial_n29 a

def e_n30 : Fin 4 → Nat := (Fin.cases (9) (Fin.cases (6) (Fin.cases (25) (fun _ => 26))))

def ch_n30 (R : Realisation Ty typedSep G) :
    (i : Fin 4) → Realisation Ty typedSep (strongPower G (e_n30 i)) :=
  (Fin.cases (R_n6 R) (Fin.cases (R_n9 R) (Fin.cases (R_n19 R) (fun _ => R_n29 R))))

theorem terminal_polynomial : (∑ x ∈ S_d1d88f72dc4352a983e3.C, w_n6 (x 0) * w_n9 (x 1) * w_n19 (x 2) * w_n29 (x 3)) = N := by native_decide

theorem terminal_value (R : Realisation Ty typedSep G)
    (h : ∀ a, R.w a = C11R6Base.w0 a) :
    (∑ x ∈ S_d1d88f72dc4352a983e3.C, ∏ i, (ch_n30 R i).w (x i)) = N := by
  have h0 : ∀ b, (ch_n30 R 0).w b = w_n6 b :=
    fun b => step_n6 R h b
  have h1 : ∀ b, (ch_n30 R 1).w b = w_n9 b :=
    fun b => step_n9 R h b
  have h2 : ∀ b, (ch_n30 R 2).w b = w_n19 b :=
    fun b => step_n19 R h b
  have h3 : ∀ b, (ch_n30 R 3).w b = w_n29 b :=
    fun b => step_n29 R h b
  simp only [Fin.prod_univ_four, h0, h1, h2, h3]
  exact terminal_polynomial

def codeBase (R : Realisation Ty typedSep G) : Finset (Fin 66 → α) :=
  (multiCodeSet e_n30 (ch_n30 R) S_d1d88f72dc4352a983e3).image
    (strongPower_sum_iso G e_n30).symm

theorem independent_codeBase (R : Realisation Ty typedSep G) :
    (strongPower G 66).IsIndepSet ↑(codeBase R) :=
  isIndepSet_image_symm (strongPower_sum_iso G e_n30)
    (isIndepSet_multiCodeSet e_n30 (ch_n30 R) S_d1d88f72dc4352a983e3)

theorem card_codeBase (R : Realisation Ty typedSep G)
    (h : ∀ a, R.w a = C11R6Base.w0 a) : (codeBase R).card = N := by
  calc
    (codeBase R).card = (multiCodeSet e_n30 (ch_n30 R) S_d1d88f72dc4352a983e3).card :=
      Finset.card_image_of_injective _ (strongPower_sum_iso G e_n30).symm.injective
    _ = ∑ x ∈ S_d1d88f72dc4352a983e3.C, ∏ i, (ch_n30 R i).w (x i) :=
      card_multiCodeSet e_n30 (ch_n30 R) S_d1d88f72dc4352a983e3
    _ = N := terminal_value R h

end Generic

def isoPhysical : strongPower BaseC11.Cyc11 198 ≃g strongPower BaseC11.G3 66 :=
  (strongPower_mul_iso BaseC11.Cyc11 3 66).trans
    (strongPower_congr CapC11.G3_iso 66).symm

def code : Finset (Fin 198 → Fin 11) :=
  (codeBase C11R6Base.base).image isoPhysical.symm

theorem card_code : code.card = N := by
  calc
    code.card = (codeBase C11R6Base.base).card :=
      Finset.card_image_of_injective _ isoPhysical.symm.injective
    _ = N := card_codeBase C11R6Base.base C11R6Base.base_weights

theorem independent_code_Cyc :
    (strongPower BaseC11.Cyc11 198).IsIndepSet ↑code :=
  isIndepSet_image_symm isoPhysical
    (independent_codeBase C11R6Base.base)

theorem independent_code :
    (strongPower (SimpleGraph.cycleGraph 11) 198).IsIndepSet ↑code := by
  rw [← CapC11.Cyc_eq_cycleGraph]
  exact independent_code_Cyc

theorem exists_code :
    ∃ S : Finset (Fin 198 → Fin 11),
      (strongPower (SimpleGraph.cycleGraph 11) 198).IsIndepSet ↑S ∧ S.card = N :=
  ⟨code, independent_code, card_code⟩

theorem alpha_ge : N ≤ (strongPower (SimpleGraph.cycleGraph 11) 198).indepNum := by
  rw [← card_code]
  exact SimpleGraph.IsIndepSet.card_le_indepNum independent_code

theorem capacity_root : (N : ℝ) ^ ((1 : ℝ) / (198 : ℕ)) ≤
    shannonCapacity (SimpleGraph.cycleGraph 11) := by
  calc
    (N : ℝ) ^ ((1 : ℝ) / (198 : ℕ)) ≤
        (((strongPower (SimpleGraph.cycleGraph 11) 198).indepNum : ℕ) : ℝ) ^
          ((1 : ℝ) / (198 : ℕ)) := by
      apply Real.rpow_le_rpow (by positivity) _ (by positivity)
      exact_mod_cast alpha_ge
    _ ≤ shannonCapacity (SimpleGraph.cycleGraph 11) :=
      shannonCapacity_ge_root (SimpleGraph.cycleGraph 11) 198 (by norm_num)

theorem decimal_lower_integer : 5295510441529957 ^ 198 ≤
    N * (1000000000000000 : Nat) ^ 198 := by native_decide

theorem decimal_upper_integer : N * (1000000000000000 : Nat) ^ 198 <
    5295510441529958 ^ 198 := by native_decide

theorem root_bracket :
    (5295510441529957 : ℝ) / 1000000000000000 ≤ (N : ℝ) ^ ((1 : ℝ) / (198 : ℕ)) ∧
    (N : ℝ) ^ ((1 : ℝ) / (198 : ℕ)) < (5295510441529958 : ℝ) / 1000000000000000 := by
  constructor
  · exact Decimal.decimal_le (by norm_num) (by norm_num) decimal_lower_integer le_rfl
  · exact C11R6Common.root_lt_decimal (by norm_num) (by norm_num) decimal_upper_integer

theorem capacity_lower : (5.295510441529957 : ℝ) ≤
    shannonCapacity (SimpleGraph.cycleGraph 11) := by
  rw [show (5.295510441529957 : ℝ) =
    (5295510441529957 : ℝ) / 1000000000000000 by norm_num]
  exact root_bracket.1.trans capacity_root

theorem cross_power_BPZ_207 : C11R6History.BPZ_207 ^ 198 < N ^ 207 := by native_decide

theorem strict_root_BPZ_207 :
    (C11R6History.BPZ_207 : ℝ) ^ ((1 : ℝ) / (207 : ℕ)) <
    (N : ℝ) ^ ((1 : ℝ) / (198 : ℕ)) :=
  C11R6Common.root_lt_of_cross_power (by norm_num) (by norm_num) cross_power_BPZ_207

theorem cross_power_R3_207 : C11R6History.R3_207 ^ 198 < N ^ 207 := by native_decide

theorem strict_root_R3_207 :
    (C11R6History.R3_207 : ℝ) ^ ((1 : ℝ) / (207 : ℕ)) <
    (N : ℝ) ^ ((1 : ℝ) / (198 : ℕ)) :=
  C11R6Common.root_lt_of_cross_power (by norm_num) (by norm_num) cross_power_R3_207

theorem cross_power_R4_201 : C11R6History.R4_201 ^ 198 < N ^ 201 := by native_decide

theorem strict_root_R4_201 :
    (C11R6History.R4_201 : ℝ) ^ ((1 : ℝ) / (201 : ℕ)) <
    (N : ℝ) ^ ((1 : ℝ) / (198 : ℕ)) :=
  C11R6Common.root_lt_of_cross_power (by norm_num) (by norm_num) cross_power_R4_201

theorem cross_power_R4_210 : C11R6History.R4_210 ^ 198 < N ^ 210 := by native_decide

theorem strict_root_R4_210 :
    (C11R6History.R4_210 : ℝ) ^ ((1 : ℝ) / (210 : ℕ)) <
    (N : ℝ) ^ ((1 : ℝ) / (198 : ℕ)) :=
  C11R6Common.root_lt_of_cross_power (by norm_num) (by norm_num) cross_power_R4_210

theorem strictly_larger_R5 : C11R6History.R5_198 < N := by native_decide

theorem cross_power_R5 : C11R6History.R5_198 ^ 198 < N ^ 198 := by native_decide

theorem strict_root_R5 : (C11R6History.R5_198 : ℝ) ^ ((1 : ℝ) / (198 : ℕ)) <
    (N : ℝ) ^ ((1 : ℝ) / (198 : ℕ)) :=
  C11R6Common.root_lt_of_cross_power (by norm_num) (by norm_num) cross_power_R5

end ShannonBounds.C11R6D198
