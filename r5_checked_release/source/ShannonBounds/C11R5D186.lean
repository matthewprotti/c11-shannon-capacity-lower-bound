/-
Copyright (c) 2026 Matthew Protti. Released under Apache 2.0.
Generated from unchanged R5 certificate JSON; do not hand-edit the literals.
Uses BPZ's pinned framework (Buys, Polak, Zuiddam), without changing it.
-/
import ShannonBounds.C11R5Tables
import ShannonBounds.C11R5History

set_option autoImplicit false
set_option maxRecDepth 4000000
set_option maxHeartbeats 0
set_option synthInstance.maxSize 4000
set_option exponentiation.threshold 20000

namespace ShannonBounds.C11R5D186

open SimpleGraph C11R5Tables

def N : Nat := 443270157200265347115284826329865904474755713155493374073233878851201668185355198338517321290509706352279222882837542619589988350408464

section Generic

variable {α : Type*} [Fintype α] [DecidableEq α]
  {G : SimpleGraph α} [DecidableRel G.Adj]

def R_v (R : Realisation Letter Letter.sep G) :
    Realisation Letter Letter.sep (strongPower G 1) := CertC11.R1 R

def w_v : Letter → Nat := CertC11.w0

theorem step_v (R : Realisation Letter Letter.sep G)
    (h : ∀ a, R.w a = CertC11.w0 a) (a : Letter) :
    (R_v R).w a = w_v a := (CertC11.w_R1 R a).trans (h a)

def e_n1 : Fin 3 → Nat := (Fin.cases (1) (Fin.cases (1) (fun _ => 1)))

def ch_n1 (R : Realisation Letter Letter.sep G) :
    (i : Fin 3) → Realisation Letter Letter.sep (strongPower G (e_n1 i)) :=
  (Fin.cases (R_v R) (Fin.cases (R_v R) (fun _ => R_v R)))

def R_n1 (R : Realisation Letter Letter.sep G) :
    Realisation Letter Letter.sep (strongPower G 3) :=
  Realisation.multiSubst e_n1 (ch_n1 R) S_0ac0bf4804630912

def w_n1 : Letter → Nat
  | .B => 3056536
  | .N => 2867365
  | .A => 193005
  | .D => 181476
  | .O => 0
  | .H => 185310
  | .V => 189144

theorem step_n1 (R : Realisation Letter Letter.sep G)
    (h : ∀ a, R.w a = CertC11.w0 a) :
    ∀ a, (R_n1 R).w a = w_n1 a := by
  intro a
  change (Realisation.multiSubst e_n1 (ch_n1 R) S_0ac0bf4804630912).w a = w_n1 a
  rw [w_multiSubst]
  have h0 : ∀ b, (ch_n1 R 0).w b = w_v b :=
    fun b => step_v R h b
  have h1 : ∀ b, (ch_n1 R 1).w b = w_v b :=
    fun b => step_v R h b
  have h2 : ∀ b, (ch_n1 R 2).w b = w_v b :=
    fun b => step_v R h b
  simp only [Fin.prod_univ_three, h0, h1, h2]
  cases a <;> native_decide

def e_n2 : Fin 3 → Nat := (Fin.cases (1) (Fin.cases (1) (fun _ => 3)))

def ch_n2 (R : Realisation Letter Letter.sep G) :
    (i : Fin 3) → Realisation Letter Letter.sep (strongPower G (e_n2 i)) :=
  (Fin.cases (R_v R) (Fin.cases (R_v R) (fun _ => R_n1 R)))

def R_n2 (R : Realisation Letter Letter.sep G) :
    Realisation Letter Letter.sep (strongPower G 5) :=
  Realisation.multiSubst e_n2 (ch_n2 R) S_0c7cb632d1153343

def w_n2 : Letter → Nat
  | .B => 64649580904
  | .N => 58019734453
  | .A => 6102277044
  | .D => 6892444167
  | .O => 0
  | .H => 6627553476
  | .V => 6364921011

theorem step_n2 (R : Realisation Letter Letter.sep G)
    (h : ∀ a, R.w a = CertC11.w0 a) :
    ∀ a, (R_n2 R).w a = w_n2 a := by
  intro a
  change (Realisation.multiSubst e_n2 (ch_n2 R) S_0c7cb632d1153343).w a = w_n2 a
  rw [w_multiSubst]
  have h0 : ∀ b, (ch_n2 R 0).w b = w_v b :=
    fun b => step_v R h b
  have h1 : ∀ b, (ch_n2 R 1).w b = w_v b :=
    fun b => step_v R h b
  have h2 : ∀ b, (ch_n2 R 2).w b = w_n1 b :=
    fun b => step_n1 R h b
  simp only [Fin.prod_univ_three, h0, h1, h2]
  cases a <;> native_decide

def e_n3 : Fin 2 → Nat := (Fin.cases (5) (fun _ => 1))

def ch_n3 (R : Realisation Letter Letter.sep G) :
    (i : Fin 2) → Realisation Letter Letter.sep (strongPower G (e_n3 i)) :=
  (Fin.cases (R_n2 R) (fun _ => R_v R))

def R_n3 (R : Realisation Letter Letter.sep G) :
    Realisation Letter Letter.sep (strongPower G 6) :=
  Realisation.multiSubst e_n3 (ch_n3 R) S_e9ef2871c79d62be

def w_n3 : Letter → Nat
  | .B => 9413173394713
  | .N => 8259479624827
  | .A => 1210865305986
  | .D => 1040582543607
  | .O => 0
  | .H => 1096972749954
  | .V => 1154149220412

theorem step_n3 (R : Realisation Letter Letter.sep G)
    (h : ∀ a, R.w a = CertC11.w0 a) :
    ∀ a, (R_n3 R).w a = w_n3 a := by
  intro a
  change (Realisation.multiSubst e_n3 (ch_n3 R) S_e9ef2871c79d62be).w a = w_n3 a
  rw [w_multiSubst]
  have h0 : ∀ b, (ch_n3 R 0).w b = w_n2 b :=
    fun b => step_n2 R h b
  have h1 : ∀ b, (ch_n3 R 1).w b = w_v b :=
    fun b => step_v R h b
  simp only [Fin.prod_univ_two, h0, h1]
  cases a <;> native_decide

def e_n4 : Fin 2 → Nat := (Fin.cases (6) (fun _ => 1))

def ch_n4 (R : Realisation Letter Letter.sep G) :
    (i : Fin 2) → Realisation Letter Letter.sep (strongPower G (e_n4 i)) :=
  (Fin.cases (R_n3 R) (fun _ => R_v R))

def R_n4 (R : Realisation Letter Letter.sep G) :
    Realisation Letter Letter.sep (strongPower G 7) :=
  Realisation.multiSubst e_n4 (ch_n4 R) S_e788020168e26abb

def w_n4 : Letter → Nat
  | .B => 1371664485782164
  | .N => 1176478702643392
  | .A => 206766588926208
  | .D => 172541160066675
  | .O => 0
  | .H => 183839487617811
  | .V => 195420994084083

theorem step_n4 (R : Realisation Letter Letter.sep G)
    (h : ∀ a, R.w a = CertC11.w0 a) :
    ∀ a, (R_n4 R).w a = w_n4 a := by
  intro a
  change (Realisation.multiSubst e_n4 (ch_n4 R) S_e788020168e26abb).w a = w_n4 a
  rw [w_multiSubst]
  have h0 : ∀ b, (ch_n4 R 0).w b = w_n3 b :=
    fun b => step_n3 R h b
  have h1 : ∀ b, (ch_n4 R 1).w b = w_v b :=
    fun b => step_v R h b
  simp only [Fin.prod_univ_two, h0, h1]
  cases a <;> native_decide

def e_n5 : Fin 3 → Nat := (Fin.cases (1) (Fin.cases (1) (fun _ => 1)))

def ch_n5 (R : Realisation Letter Letter.sep G) :
    (i : Fin 3) → Realisation Letter Letter.sep (strongPower G (e_n5 i)) :=
  (Fin.cases (R_v R) (Fin.cases (R_v R) (fun _ => R_v R)))

def R_n5 (R : Realisation Letter Letter.sep G) :
    Realisation Letter Letter.sep (strongPower G 3) :=
  Realisation.multiSubst e_n5 (ch_n5 R) S_18277b0c484b4c41

def w_n5 : Letter → Nat
  | .B => 3056536
  | .N => 2867365
  | .A => 193005
  | .D => 181476
  | .O => 0
  | .H => 185310
  | .V => 189144

theorem step_n5 (R : Realisation Letter Letter.sep G)
    (h : ∀ a, R.w a = CertC11.w0 a) :
    ∀ a, (R_n5 R).w a = w_n5 a := by
  intro a
  change (Realisation.multiSubst e_n5 (ch_n5 R) S_18277b0c484b4c41).w a = w_n5 a
  rw [w_multiSubst]
  have h0 : ∀ b, (ch_n5 R 0).w b = w_v b :=
    fun b => step_v R h b
  have h1 : ∀ b, (ch_n5 R 1).w b = w_v b :=
    fun b => step_v R h b
  have h2 : ∀ b, (ch_n5 R 2).w b = w_v b :=
    fun b => step_v R h b
  simp only [Fin.prod_univ_three, h0, h1, h2]
  cases a <;> native_decide

def e_n6 : Fin 3 → Nat := (Fin.cases (3) (Fin.cases (1) (fun _ => 1)))

def ch_n6 (R : Realisation Letter Letter.sep G) :
    (i : Fin 3) → Realisation Letter Letter.sep (strongPower G (e_n6 i)) :=
  (Fin.cases (R_n5 R) (Fin.cases (R_v R) (fun _ => R_v R)))

def R_n6 (R : Realisation Letter Letter.sep G) :
    Realisation Letter Letter.sep (strongPower G 5) :=
  Realisation.multiSubst e_n6 (ch_n6 R) S_3daf90758a80fbb9

def w_n6 : Letter → Nat
  | .B => 64649580904
  | .N => 58019734453
  | .A => 6892444167
  | .D => 6102277044
  | .O => 0
  | .H => 6364921011
  | .V => 6627553476

theorem step_n6 (R : Realisation Letter Letter.sep G)
    (h : ∀ a, R.w a = CertC11.w0 a) :
    ∀ a, (R_n6 R).w a = w_n6 a := by
  intro a
  change (Realisation.multiSubst e_n6 (ch_n6 R) S_3daf90758a80fbb9).w a = w_n6 a
  rw [w_multiSubst]
  have h0 : ∀ b, (ch_n6 R 0).w b = w_n5 b :=
    fun b => step_n5 R h b
  have h1 : ∀ b, (ch_n6 R 1).w b = w_v b :=
    fun b => step_v R h b
  have h2 : ∀ b, (ch_n6 R 2).w b = w_v b :=
    fun b => step_v R h b
  simp only [Fin.prod_univ_three, h0, h1, h2]
  cases a <;> native_decide

def e_n7 : Fin 2 → Nat := (Fin.cases (5) (fun _ => 1))

def ch_n7 (R : Realisation Letter Letter.sep G) :
    (i : Fin 2) → Realisation Letter Letter.sep (strongPower G (e_n7 i)) :=
  (Fin.cases (R_n6 R) (fun _ => R_v R))

def R_n7 (R : Realisation Letter Letter.sep G) :
    Realisation Letter Letter.sep (strongPower G 6) :=
  Realisation.multiSubst e_n7 (ch_n7 R) S_e788020168e26abb

def w_n7 : Letter → Nat
  | .B => 9413173394713
  | .N => 8259479624827
  | .A => 1210865305986
  | .D => 1040582543607
  | .O => 0
  | .H => 1096972749954
  | .V => 1154149220412

theorem step_n7 (R : Realisation Letter Letter.sep G)
    (h : ∀ a, R.w a = CertC11.w0 a) :
    ∀ a, (R_n7 R).w a = w_n7 a := by
  intro a
  change (Realisation.multiSubst e_n7 (ch_n7 R) S_e788020168e26abb).w a = w_n7 a
  rw [w_multiSubst]
  have h0 : ∀ b, (ch_n7 R 0).w b = w_n6 b :=
    fun b => step_n6 R h b
  have h1 : ∀ b, (ch_n7 R 1).w b = w_v b :=
    fun b => step_v R h b
  simp only [Fin.prod_univ_two, h0, h1]
  cases a <;> native_decide

def e_n8 : Fin 3 → Nat := (Fin.cases (1) (Fin.cases (1) (fun _ => 1)))

def ch_n8 (R : Realisation Letter Letter.sep G) :
    (i : Fin 3) → Realisation Letter Letter.sep (strongPower G (e_n8 i)) :=
  (Fin.cases (R_v R) (Fin.cases (R_v R) (fun _ => R_v R)))

def R_n8 (R : Realisation Letter Letter.sep G) :
    Realisation Letter Letter.sep (strongPower G 3) :=
  Realisation.multiSubst e_n8 (ch_n8 R) S_6859b0ec25991d42

def w_n8 : Letter → Nat
  | .B => 3056536
  | .N => 2867365
  | .A => 193005
  | .D => 181476
  | .O => 0
  | .H => 185310
  | .V => 189144

theorem step_n8 (R : Realisation Letter Letter.sep G)
    (h : ∀ a, R.w a = CertC11.w0 a) :
    ∀ a, (R_n8 R).w a = w_n8 a := by
  intro a
  change (Realisation.multiSubst e_n8 (ch_n8 R) S_6859b0ec25991d42).w a = w_n8 a
  rw [w_multiSubst]
  have h0 : ∀ b, (ch_n8 R 0).w b = w_v b :=
    fun b => step_v R h b
  have h1 : ∀ b, (ch_n8 R 1).w b = w_v b :=
    fun b => step_v R h b
  have h2 : ∀ b, (ch_n8 R 2).w b = w_v b :=
    fun b => step_v R h b
  simp only [Fin.prod_univ_three, h0, h1, h2]
  cases a <;> native_decide

def e_n9 : Fin 3 → Nat := (Fin.cases (1) (Fin.cases (1) (fun _ => 3)))

def ch_n9 (R : Realisation Letter Letter.sep G) :
    (i : Fin 3) → Realisation Letter Letter.sep (strongPower G (e_n9 i)) :=
  (Fin.cases (R_v R) (Fin.cases (R_v R) (fun _ => R_n8 R)))

def R_n9 (R : Realisation Letter Letter.sep G) :
    Realisation Letter Letter.sep (strongPower G 5) :=
  Realisation.multiSubst e_n9 (ch_n9 R) S_f621e9dcab9f974c

def w_n9 : Letter → Nat
  | .B => 64649580904
  | .N => 58019734453
  | .A => 6892444167
  | .D => 6102277044
  | .O => 0
  | .H => 6364921011
  | .V => 6627553476

theorem step_n9 (R : Realisation Letter Letter.sep G)
    (h : ∀ a, R.w a = CertC11.w0 a) :
    ∀ a, (R_n9 R).w a = w_n9 a := by
  intro a
  change (Realisation.multiSubst e_n9 (ch_n9 R) S_f621e9dcab9f974c).w a = w_n9 a
  rw [w_multiSubst]
  have h0 : ∀ b, (ch_n9 R 0).w b = w_v b :=
    fun b => step_v R h b
  have h1 : ∀ b, (ch_n9 R 1).w b = w_v b :=
    fun b => step_v R h b
  have h2 : ∀ b, (ch_n9 R 2).w b = w_n8 b :=
    fun b => step_n8 R h b
  simp only [Fin.prod_univ_three, h0, h1, h2]
  cases a <;> native_decide

def e_n10 : Fin 2 → Nat := (Fin.cases (1) (fun _ => 1))

def ch_n10 (R : Realisation Letter Letter.sep G) :
    (i : Fin 2) → Realisation Letter Letter.sep (strongPower G (e_n10 i)) :=
  (Fin.cases (R_v R) (fun _ => R_v R))

def R_n10 (R : Realisation Letter Letter.sep G) :
    Realisation Letter Letter.sep (strongPower G 2) :=
  Realisation.multiSubst e_n10 (ch_n10 R) S_e788020168e26abb

def w_n10 : Letter → Nat
  | .B => 21043
  | .N => 20173
  | .A => 879
  | .D => 852
  | .O => 0
  | .H => 861
  | .V => 870

theorem step_n10 (R : Realisation Letter Letter.sep G)
    (h : ∀ a, R.w a = CertC11.w0 a) :
    ∀ a, (R_n10 R).w a = w_n10 a := by
  intro a
  change (Realisation.multiSubst e_n10 (ch_n10 R) S_e788020168e26abb).w a = w_n10 a
  rw [w_multiSubst]
  have h0 : ∀ b, (ch_n10 R 0).w b = w_v b :=
    fun b => step_v R h b
  have h1 : ∀ b, (ch_n10 R 1).w b = w_v b :=
    fun b => step_v R h b
  simp only [Fin.prod_univ_two, h0, h1]
  cases a <;> native_decide

def e_n11 : Fin 3 → Nat := (Fin.cases (5) (Fin.cases (2) (fun _ => 2)))

def ch_n11 (R : Realisation Letter Letter.sep G) :
    (i : Fin 3) → Realisation Letter Letter.sep (strongPower G (e_n11 i)) :=
  (Fin.cases (R_n9 R) (Fin.cases (R_n10 R) (fun _ => R_n10 R)))

def R_n11 (R : Realisation Letter Letter.sep G) :
    Realisation Letter Letter.sep (strongPower G 9) :=
  Realisation.multiSubst e_n11 (ch_n11 R) S_3e8694d6a5bfe173

def w_n11 : Letter → Nat
  | .B => 29212495446917744992
  | .N => 23925687218437507768
  | .A => 5684608536159502746
  | .D => 4477737513511238652
  | .O => 0
  | .H => 4876010178834443760
  | .V => 5274280514588803830

theorem step_n11 (R : Realisation Letter Letter.sep G)
    (h : ∀ a, R.w a = CertC11.w0 a) :
    ∀ a, (R_n11 R).w a = w_n11 a := by
  intro a
  change (Realisation.multiSubst e_n11 (ch_n11 R) S_3e8694d6a5bfe173).w a = w_n11 a
  rw [w_multiSubst]
  have h0 : ∀ b, (ch_n11 R 0).w b = w_n9 b :=
    fun b => step_n9 R h b
  have h1 : ∀ b, (ch_n11 R 1).w b = w_n10 b :=
    fun b => step_n10 R h b
  have h2 : ∀ b, (ch_n11 R 2).w b = w_n10 b :=
    fun b => step_n10 R h b
  simp only [Fin.prod_univ_three, h0, h1, h2]
  cases a <;> native_decide

def e_n12 : Fin 3 → Nat := (Fin.cases (1) (Fin.cases (1) (fun _ => 3)))

def ch_n12 (R : Realisation Letter Letter.sep G) :
    (i : Fin 3) → Realisation Letter Letter.sep (strongPower G (e_n12 i)) :=
  (Fin.cases (R_v R) (Fin.cases (R_v R) (fun _ => R_n8 R)))

def R_n12 (R : Realisation Letter Letter.sep G) :
    Realisation Letter Letter.sep (strongPower G 5) :=
  Realisation.multiSubst e_n12 (ch_n12 R) S_04339297651c9c49

def w_n12 : Letter → Nat
  | .B => 64649580904
  | .N => 58019734453
  | .A => 6892444167
  | .D => 6102277044
  | .O => 0
  | .H => 6364921011
  | .V => 6627553476

theorem step_n12 (R : Realisation Letter Letter.sep G)
    (h : ∀ a, R.w a = CertC11.w0 a) :
    ∀ a, (R_n12 R).w a = w_n12 a := by
  intro a
  change (Realisation.multiSubst e_n12 (ch_n12 R) S_04339297651c9c49).w a = w_n12 a
  rw [w_multiSubst]
  have h0 : ∀ b, (ch_n12 R 0).w b = w_v b :=
    fun b => step_v R h b
  have h1 : ∀ b, (ch_n12 R 1).w b = w_v b :=
    fun b => step_v R h b
  have h2 : ∀ b, (ch_n12 R 2).w b = w_n8 b :=
    fun b => step_n8 R h b
  simp only [Fin.prod_univ_three, h0, h1, h2]
  cases a <;> native_decide

def e_n13 : Fin 2 → Nat := (Fin.cases (1) (fun _ => 1))

def ch_n13 (R : Realisation Letter Letter.sep G) :
    (i : Fin 2) → Realisation Letter Letter.sep (strongPower G (e_n13 i)) :=
  (Fin.cases (R_v R) (fun _ => R_v R))

def R_n13 (R : Realisation Letter Letter.sep G) :
    Realisation Letter Letter.sep (strongPower G 2) :=
  Realisation.multiSubst e_n13 (ch_n13 R) S_e9ef2871c79d62be

def w_n13 : Letter → Nat
  | .B => 21043
  | .N => 20173
  | .A => 879
  | .D => 852
  | .O => 0
  | .H => 861
  | .V => 870

theorem step_n13 (R : Realisation Letter Letter.sep G)
    (h : ∀ a, R.w a = CertC11.w0 a) :
    ∀ a, (R_n13 R).w a = w_n13 a := by
  intro a
  change (Realisation.multiSubst e_n13 (ch_n13 R) S_e9ef2871c79d62be).w a = w_n13 a
  rw [w_multiSubst]
  have h0 : ∀ b, (ch_n13 R 0).w b = w_v b :=
    fun b => step_v R h b
  have h1 : ∀ b, (ch_n13 R 1).w b = w_v b :=
    fun b => step_v R h b
  simp only [Fin.prod_univ_two, h0, h1]
  cases a <;> native_decide

def e_n14 : Fin 3 → Nat := (Fin.cases (5) (Fin.cases (2) (fun _ => 2)))

def ch_n14 (R : Realisation Letter Letter.sep G) :
    (i : Fin 3) → Realisation Letter Letter.sep (strongPower G (e_n14 i)) :=
  (Fin.cases (R_n12 R) (Fin.cases (R_n13 R) (fun _ => R_n10 R)))

def R_n14 (R : Realisation Letter Letter.sep G) :
    Realisation Letter Letter.sep (strongPower G 9) :=
  Realisation.multiSubst e_n14 (ch_n14 R) S_7b6c163f0dc4b608

def w_n14 : Letter → Nat
  | .B => 29212495446917744992
  | .N => 23925687218437507768
  | .A => 5684608536159502746
  | .D => 4477737513511238652
  | .O => 0
  | .H => 4876010178834443760
  | .V => 5274280514588803830

theorem step_n14 (R : Realisation Letter Letter.sep G)
    (h : ∀ a, R.w a = CertC11.w0 a) :
    ∀ a, (R_n14 R).w a = w_n14 a := by
  intro a
  change (Realisation.multiSubst e_n14 (ch_n14 R) S_7b6c163f0dc4b608).w a = w_n14 a
  rw [w_multiSubst]
  have h0 : ∀ b, (ch_n14 R 0).w b = w_n12 b :=
    fun b => step_n12 R h b
  have h1 : ∀ b, (ch_n14 R 1).w b = w_n13 b :=
    fun b => step_n13 R h b
  have h2 : ∀ b, (ch_n14 R 2).w b = w_n10 b :=
    fun b => step_n10 R h b
  simp only [Fin.prod_univ_three, h0, h1, h2]
  cases a <;> native_decide

def e_n15 : Fin 3 → Nat := (Fin.cases (1) (Fin.cases (1) (fun _ => 2)))

def ch_n15 (R : Realisation Letter Letter.sep G) :
    (i : Fin 3) → Realisation Letter Letter.sep (strongPower G (e_n15 i)) :=
  (Fin.cases (R_v R) (Fin.cases (R_v R) (fun _ => R_n10 R)))

def R_n15 (R : Realisation Letter Letter.sep G) :
    Realisation Letter Letter.sep (strongPower G 4) :=
  Realisation.multiSubst e_n15 (ch_n15 R) S_04339297651c9c49

def w_n15 : Letter → Nat
  | .B => 444337309
  | .N => 407761396
  | .A => 37676271
  | .D => 34367124
  | .O => 0
  | .H => 35467563
  | .V => 36568002

theorem step_n15 (R : Realisation Letter Letter.sep G)
    (h : ∀ a, R.w a = CertC11.w0 a) :
    ∀ a, (R_n15 R).w a = w_n15 a := by
  intro a
  change (Realisation.multiSubst e_n15 (ch_n15 R) S_04339297651c9c49).w a = w_n15 a
  rw [w_multiSubst]
  have h0 : ∀ b, (ch_n15 R 0).w b = w_v b :=
    fun b => step_v R h b
  have h1 : ∀ b, (ch_n15 R 1).w b = w_v b :=
    fun b => step_v R h b
  have h2 : ∀ b, (ch_n15 R 2).w b = w_n10 b :=
    fun b => step_n10 R h b
  simp only [Fin.prod_univ_three, h0, h1, h2]
  cases a <;> native_decide

def e_n16 : Fin 3 → Nat := (Fin.cases (4) (Fin.cases (1) (fun _ => 1)))

def ch_n16 (R : Realisation Letter Letter.sep G) :
    (i : Fin 3) → Realisation Letter Letter.sep (strongPower G (e_n16 i)) :=
  (Fin.cases (R_n15 R) (Fin.cases (R_v R) (fun _ => R_v R)))

def R_n16 (R : Realisation Letter Letter.sep G) :
    Realisation Letter Letter.sep (strongPower G 6) :=
  Realisation.multiSubst e_n16 (ch_n16 R) S_01f11d8929277edb

def w_n16 : Letter → Nat
  | .B => 9413851746682
  | .N => 8259862493710
  | .A => 1040391397728
  | .D => 1210523865282
  | .O => 0
  | .H => 1153487243808
  | .V => 1096941023064

theorem step_n16 (R : Realisation Letter Letter.sep G)
    (h : ∀ a, R.w a = CertC11.w0 a) :
    ∀ a, (R_n16 R).w a = w_n16 a := by
  intro a
  change (Realisation.multiSubst e_n16 (ch_n16 R) S_01f11d8929277edb).w a = w_n16 a
  rw [w_multiSubst]
  have h0 : ∀ b, (ch_n16 R 0).w b = w_n15 b :=
    fun b => step_n15 R h b
  have h1 : ∀ b, (ch_n16 R 1).w b = w_v b :=
    fun b => step_v R h b
  have h2 : ∀ b, (ch_n16 R 2).w b = w_v b :=
    fun b => step_v R h b
  simp only [Fin.prod_univ_three, h0, h1, h2]
  cases a <;> native_decide

def e_n17 : Fin 3 → Nat := (Fin.cases (9) (Fin.cases (9) (fun _ => 6)))

def ch_n17 (R : Realisation Letter Letter.sep G) :
    (i : Fin 3) → Realisation Letter Letter.sep (strongPower G (e_n17 i)) :=
  (Fin.cases (R_n11 R) (Fin.cases (R_n14 R) (fun _ => R_n16 R)))

def R_n17 (R : Realisation Letter Letter.sep G) :
    Realisation Letter Letter.sep (strongPower G 24) :=
  Realisation.multiSubst e_n17 (ch_n17 R) S_787c56f586779bfd

def w_n17 : Letter → Nat
  | .B => 9283088848828256508093741458725331126966378818017952
  | .N => 5408218852455947897393035802212466839236988158275248
  | .A => 4537898185822354380807209939164771893140552468497848
  | .D => 2365366925106767813270576994230369893229968159876992
  | .O => 0
  | .H => 3041460027805963169155207182632074300087026421311744
  | .V => 3715858487830384145679254461045741717880533186342992

theorem step_n17 (R : Realisation Letter Letter.sep G)
    (h : ∀ a, R.w a = CertC11.w0 a) :
    ∀ a, (R_n17 R).w a = w_n17 a := by
  intro a
  change (Realisation.multiSubst e_n17 (ch_n17 R) S_787c56f586779bfd).w a = w_n17 a
  rw [w_multiSubst]
  have h0 : ∀ b, (ch_n17 R 0).w b = w_n11 b :=
    fun b => step_n11 R h b
  have h1 : ∀ b, (ch_n17 R 1).w b = w_n14 b :=
    fun b => step_n14 R h b
  have h2 : ∀ b, (ch_n17 R 2).w b = w_n16 b :=
    fun b => step_n16 R h b
  simp only [Fin.prod_univ_three, h0, h1, h2]
  cases a <;> native_decide

def e_n18 : Fin 3 → Nat := (Fin.cases (3) (Fin.cases (1) (fun _ => 1)))

def ch_n18 (R : Realisation Letter Letter.sep G) :
    (i : Fin 3) → Realisation Letter Letter.sep (strongPower G (e_n18 i)) :=
  (Fin.cases (R_n8 R) (Fin.cases (R_v R) (fun _ => R_v R)))

def R_n18 (R : Realisation Letter Letter.sep G) :
    Realisation Letter Letter.sep (strongPower G 5) :=
  Realisation.multiSubst e_n18 (ch_n18 R) S_f97d79adc1a9e27c

def w_n18 : Letter → Nat
  | .B => 64649580904
  | .N => 58019734453
  | .A => 6892444167
  | .D => 6102277044
  | .O => 0
  | .H => 6364921011
  | .V => 6627553476

theorem step_n18 (R : Realisation Letter Letter.sep G)
    (h : ∀ a, R.w a = CertC11.w0 a) :
    ∀ a, (R_n18 R).w a = w_n18 a := by
  intro a
  change (Realisation.multiSubst e_n18 (ch_n18 R) S_f97d79adc1a9e27c).w a = w_n18 a
  rw [w_multiSubst]
  have h0 : ∀ b, (ch_n18 R 0).w b = w_n8 b :=
    fun b => step_n8 R h b
  have h1 : ∀ b, (ch_n18 R 1).w b = w_v b :=
    fun b => step_v R h b
  have h2 : ∀ b, (ch_n18 R 2).w b = w_v b :=
    fun b => step_v R h b
  simp only [Fin.prod_univ_three, h0, h1, h2]
  cases a <;> native_decide

def e_n19 : Fin 3 → Nat := (Fin.cases (5) (Fin.cases (1) (fun _ => 1)))

def ch_n19 (R : Realisation Letter Letter.sep G) :
    (i : Fin 3) → Realisation Letter Letter.sep (strongPower G (e_n19 i)) :=
  (Fin.cases (R_n6 R) (Fin.cases (R_v R) (fun _ => R_v R)))

def R_n19 (R : Realisation Letter Letter.sep G) :
    Realisation Letter Letter.sep (strongPower G 7) :=
  Realisation.multiSubst e_n19 (ch_n19 R) S_7b6c163f0dc4b608

def w_n19 : Letter → Nat
  | .B => 1371904525046647
  | .N => 1176609562843039
  | .A => 206644550155167
  | .D => 172479128069172
  | .O => 0
  | .H => 183833029568649
  | .V => 195185702631522

theorem step_n19 (R : Realisation Letter Letter.sep G)
    (h : ∀ a, R.w a = CertC11.w0 a) :
    ∀ a, (R_n19 R).w a = w_n19 a := by
  intro a
  change (Realisation.multiSubst e_n19 (ch_n19 R) S_7b6c163f0dc4b608).w a = w_n19 a
  rw [w_multiSubst]
  have h0 : ∀ b, (ch_n19 R 0).w b = w_n6 b :=
    fun b => step_n6 R h b
  have h1 : ∀ b, (ch_n19 R 1).w b = w_v b :=
    fun b => step_v R h b
  have h2 : ∀ b, (ch_n19 R 2).w b = w_v b :=
    fun b => step_v R h b
  simp only [Fin.prod_univ_three, h0, h1, h2]
  cases a <;> native_decide

def e_n20 : Fin 2 → Nat := (Fin.cases (7) (fun _ => 1))

def ch_n20 (R : Realisation Letter Letter.sep G) :
    (i : Fin 2) → Realisation Letter Letter.sep (strongPower G (e_n20 i)) :=
  (Fin.cases (R_n19 R) (fun _ => R_v R))

def R_n20 (R : Realisation Letter Letter.sep G) :
    Realisation Letter Letter.sep (strongPower G 8) :=
  Realisation.multiSubst e_n20 (ch_n20 R) S_e788020168e26abb

def w_n20 : Letter → Nat
  | .B => 200063527166436832
  | .N => 167698491574177039
  | .A => 34562234189275737
  | .D => 28021864874351541
  | .O => 0
  | .H => 30185617975983222
  | .V => 32383254658805754

theorem step_n20 (R : Realisation Letter Letter.sep G)
    (h : ∀ a, R.w a = CertC11.w0 a) :
    ∀ a, (R_n20 R).w a = w_n20 a := by
  intro a
  change (Realisation.multiSubst e_n20 (ch_n20 R) S_e788020168e26abb).w a = w_n20 a
  rw [w_multiSubst]
  have h0 : ∀ b, (ch_n20 R 0).w b = w_n19 b :=
    fun b => step_n19 R h b
  have h1 : ∀ b, (ch_n20 R 1).w b = w_v b :=
    fun b => step_v R h b
  simp only [Fin.prod_univ_two, h0, h1]
  cases a <;> native_decide

def e_n21 : Fin 2 → Nat := (Fin.cases (8) (fun _ => 1))

def ch_n21 (R : Realisation Letter Letter.sep G) :
    (i : Fin 2) → Realisation Letter Letter.sep (strongPower G (e_n21 i)) :=
  (Fin.cases (R_n20 R) (fun _ => R_v R))

def R_n21 (R : Realisation Letter Letter.sep G) :
    Realisation Letter Letter.sep (strongPower G 9) :=
  Realisation.multiSubst e_n21 (ch_n21 R) S_e788020168e26abb

def w_n21 : Letter → Nat
  | .B => 29196963736324222474
  | .N => 23916872506100966749
  | .A => 5689243194975937035
  | .D => 4482200286880449939
  | .O => 0
  | .H => 4880010081240098307
  | .V => 5289224254177315113

theorem step_n21 (R : Realisation Letter Letter.sep G)
    (h : ∀ a, R.w a = CertC11.w0 a) :
    ∀ a, (R_n21 R).w a = w_n21 a := by
  intro a
  change (Realisation.multiSubst e_n21 (ch_n21 R) S_e788020168e26abb).w a = w_n21 a
  rw [w_multiSubst]
  have h0 : ∀ b, (ch_n21 R 0).w b = w_n20 b :=
    fun b => step_n20 R h b
  have h1 : ∀ b, (ch_n21 R 1).w b = w_v b :=
    fun b => step_v R h b
  simp only [Fin.prod_univ_two, h0, h1]
  cases a <;> native_decide

def e_n22 : Fin 2 → Nat := (Fin.cases (9) (fun _ => 1))

def ch_n22 (R : Realisation Letter Letter.sep G) :
    (i : Fin 2) → Realisation Letter Letter.sep (strongPower G (e_n22 i)) :=
  (Fin.cases (R_n21 R) (fun _ => R_v R))

def R_n22 (R : Realisation Letter Letter.sep G) :
    Realisation Letter Letter.sep (strongPower G 10) :=
  Realisation.multiSubst e_n22 (ch_n22 R) S_e788020168e26abb

def w_n22 : Letter → Nat
  | .B => 4264074072212581419652
  | .N => 3413263625451265089463
  | .A => 924777698518729021548
  | .D => 708223058255326791585
  | .O => 0
  | .H => 779352079298117154762
  | .V => 853328164617733886553

theorem step_n22 (R : Realisation Letter Letter.sep G)
    (h : ∀ a, R.w a = CertC11.w0 a) :
    ∀ a, (R_n22 R).w a = w_n22 a := by
  intro a
  change (Realisation.multiSubst e_n22 (ch_n22 R) S_e788020168e26abb).w a = w_n22 a
  rw [w_multiSubst]
  have h0 : ∀ b, (ch_n22 R 0).w b = w_n21 b :=
    fun b => step_n21 R h b
  have h1 : ∀ b, (ch_n22 R 1).w b = w_v b :=
    fun b => step_v R h b
  simp only [Fin.prod_univ_two, h0, h1]
  cases a <;> native_decide

def e_n23 : Fin 2 → Nat := (Fin.cases (10) (fun _ => 1))

def ch_n23 (R : Realisation Letter Letter.sep G) :
    (i : Fin 2) → Realisation Letter Letter.sep (strongPower G (e_n23 i)) :=
  (Fin.cases (R_n22 R) (fun _ => R_v R))

def R_n23 (R : Realisation Letter Letter.sep G) :
    Realisation Letter Letter.sep (strongPower G 11) :=
  Realisation.multiSubst e_n23 (ch_n23 R) S_e788020168e26abb

def w_n23 : Letter → Nat
  | .B => 623189742741146473288939
  | .N => 487457767909635829768390
  | .A => 148795309074916447353186
  | .D => 110807465148610199673459
  | .O => 0
  | .H => 123245842374580782708879
  | .V => 136310430983819560282860

theorem step_n23 (R : Realisation Letter Letter.sep G)
    (h : ∀ a, R.w a = CertC11.w0 a) :
    ∀ a, (R_n23 R).w a = w_n23 a := by
  intro a
  change (Realisation.multiSubst e_n23 (ch_n23 R) S_e788020168e26abb).w a = w_n23 a
  rw [w_multiSubst]
  have h0 : ∀ b, (ch_n23 R 0).w b = w_n22 b :=
    fun b => step_n22 R h b
  have h1 : ∀ b, (ch_n23 R 1).w b = w_v b :=
    fun b => step_v R h b
  simp only [Fin.prod_univ_two, h0, h1]
  cases a <;> native_decide

def e_n24 : Fin 2 → Nat := (Fin.cases (11) (fun _ => 1))

def ch_n24 (R : Realisation Letter Letter.sep G) :
    (i : Fin 2) → Realisation Letter Letter.sep (strongPower G (e_n24 i)) :=
  (Fin.cases (R_n23 R) (fun _ => R_v R))

def R_n24 (R : Realisation Letter Letter.sep G) :
    Realisation Letter Letter.sep (strongPower G 12) :=
  Realisation.multiSubst e_n24 (ch_n24 R) S_e788020168e26abb

def w_n24 : Letter → Nat
  | .B => 91141321020136818567976090
  | .N => 69665388970393037169170938
  | .A => 23739856805258864223888186
  | .D => 17197033354831555842936348
  | .O => 0
  | .H => 19333020448043120982092625
  | .V => 21597123323506486078446507

theorem step_n24 (R : Realisation Letter Letter.sep G)
    (h : ∀ a, R.w a = CertC11.w0 a) :
    ∀ a, (R_n24 R).w a = w_n24 a := by
  intro a
  change (Realisation.multiSubst e_n24 (ch_n24 R) S_e788020168e26abb).w a = w_n24 a
  rw [w_multiSubst]
  have h0 : ∀ b, (ch_n24 R 0).w b = w_n23 b :=
    fun b => step_n23 R h b
  have h1 : ∀ b, (ch_n24 R 1).w b = w_v b :=
    fun b => step_v R h b
  simp only [Fin.prod_univ_two, h0, h1]
  cases a <;> native_decide

def e_n25 : Fin 3 → Nat := (Fin.cases (4) (Fin.cases (2) (fun _ => 2)))

def ch_n25 (R : Realisation Letter Letter.sep G) :
    (i : Fin 3) → Realisation Letter Letter.sep (strongPower G (e_n25 i)) :=
  (Fin.cases (R_n15 R) (Fin.cases (R_n13 R) (fun _ => R_n10 R)))

def R_n25 (R : Realisation Letter Letter.sep G) :
    Realisation Letter Letter.sep (strongPower G 8) :=
  Realisation.multiSubst e_n25 (ch_n25 R) S_7b6c163f0dc4b608

def w_n25 : Letter → Nat
  | .B => 200128590952060915
  | .N => 167739069954494857
  | .A => 34546476248749572
  | .D => 28002411844863828
  | .O => 0
  | .H => 30161500251167742
  | .V => 32320616608529727

theorem step_n25 (R : Realisation Letter Letter.sep G)
    (h : ∀ a, R.w a = CertC11.w0 a) :
    ∀ a, (R_n25 R).w a = w_n25 a := by
  intro a
  change (Realisation.multiSubst e_n25 (ch_n25 R) S_7b6c163f0dc4b608).w a = w_n25 a
  rw [w_multiSubst]
  have h0 : ∀ b, (ch_n25 R 0).w b = w_n15 b :=
    fun b => step_n15 R h b
  have h1 : ∀ b, (ch_n25 R 1).w b = w_n13 b :=
    fun b => step_n13 R h b
  have h2 : ∀ b, (ch_n25 R 2).w b = w_n10 b :=
    fun b => step_n10 R h b
  simp only [Fin.prod_univ_three, h0, h1, h2]
  cases a <;> native_decide

def e_n26 : Fin 3 → Nat := (Fin.cases (5) (Fin.cases (12) (fun _ => 8)))

def ch_n26 (R : Realisation Letter Letter.sep G) :
    (i : Fin 3) → Realisation Letter Letter.sep (strongPower G (e_n26 i)) :=
  (Fin.cases (R_n18 R) (Fin.cases (R_n24 R) (fun _ => R_n25 R)))

def R_n26 (R : Realisation Letter Letter.sep G) :
    Realisation Letter Letter.sep (strongPower G 25) :=
  Realisation.multiSubst e_n26 (ch_n26 R) S_0058d965adce02f4

def w_n26 : Letter → Nat
  | .B => 1366131099406217819933390946243400882704666544545583504
  | .N => 780789816533198610153985328773178712661435812130797856
  | .A => 690890340542759492991554130478740932988345506614777188
  | .D => 351858210021271394177657146394138843542599890614563804
  | .O => 0
  | .H => 457886139992974822053999342829059565806373833772259310
  | .V => 565070846162920901785843780405242235942745083661695158

theorem step_n26 (R : Realisation Letter Letter.sep G)
    (h : ∀ a, R.w a = CertC11.w0 a) :
    ∀ a, (R_n26 R).w a = w_n26 a := by
  intro a
  change (Realisation.multiSubst e_n26 (ch_n26 R) S_0058d965adce02f4).w a = w_n26 a
  rw [w_multiSubst]
  have h0 : ∀ b, (ch_n26 R 0).w b = w_n18 b :=
    fun b => step_n18 R h b
  have h1 : ∀ b, (ch_n26 R 1).w b = w_n24 b :=
    fun b => step_n24 R h b
  have h2 : ∀ b, (ch_n26 R 2).w b = w_n25 b :=
    fun b => step_n25 R h b
  simp only [Fin.prod_univ_three, h0, h1, h2]
  cases a <;> native_decide

def e_n27 : Fin 4 → Nat := (Fin.cases (7) (Fin.cases (6) (Fin.cases (24) (fun _ => 25))))

def ch_n27 (R : Realisation Letter Letter.sep G) :
    (i : Fin 4) → Realisation Letter Letter.sep (strongPower G (e_n27 i)) :=
  (Fin.cases (R_n4 R) (Fin.cases (R_n7 R) (Fin.cases (R_n17 R) (fun _ => R_n26 R))))

theorem terminal_value (R : Realisation Letter Letter.sep G)
    (h : ∀ a, R.w a = CertC11.w0 a) :
    (∑ x ∈ S_adfa0199080b0c49.C, ∏ i, (ch_n27 R i).w (x i)) = N := by
  have h0 : ∀ b, (ch_n27 R 0).w b = w_n4 b :=
    fun b => step_n4 R h b
  have h1 : ∀ b, (ch_n27 R 1).w b = w_n7 b :=
    fun b => step_n7 R h b
  have h2 : ∀ b, (ch_n27 R 2).w b = w_n17 b :=
    fun b => step_n17 R h b
  have h3 : ∀ b, (ch_n27 R 3).w b = w_n26 b :=
    fun b => step_n26 R h b
  simp only [Fin.prod_univ_four, h0, h1, h2, h3]
  native_decide

def codeBase (R : Realisation Letter Letter.sep G) : Finset (Fin 62 → α) :=
  (multiCodeSet e_n27 (ch_n27 R) S_adfa0199080b0c49).image
    (strongPower_sum_iso G e_n27).symm

theorem independent_codeBase (R : Realisation Letter Letter.sep G) :
    (strongPower G 62).IsIndepSet ↑(codeBase R) :=
  isIndepSet_image_symm (strongPower_sum_iso G e_n27)
    (isIndepSet_multiCodeSet e_n27 (ch_n27 R) S_adfa0199080b0c49)

theorem card_codeBase (R : Realisation Letter Letter.sep G)
    (h : ∀ a, R.w a = CertC11.w0 a) : (codeBase R).card = N := by
  calc
    (codeBase R).card = (multiCodeSet e_n27 (ch_n27 R) S_adfa0199080b0c49).card :=
      Finset.card_image_of_injective _ (strongPower_sum_iso G e_n27).symm.injective
    _ = ∑ x ∈ S_adfa0199080b0c49.C, ∏ i, (ch_n27 R i).w (x i) :=
      card_multiCodeSet e_n27 (ch_n27 R) S_adfa0199080b0c49
    _ = N := terminal_value R h

end Generic

def isoPhysical : strongPower BaseC11.Cyc11 186 ≃g strongPower BaseC11.G3 62 :=
  (strongPower_mul_iso BaseC11.Cyc11 3 62).trans
    (strongPower_congr CapC11.G3_iso 62).symm

def code : Finset (Fin 186 → Fin 11) :=
  (codeBase BaseC11.base.toRealisation).image isoPhysical.symm

theorem card_code : code.card = N := by
  calc
    code.card = (codeBase BaseC11.base.toRealisation).card :=
      Finset.card_image_of_injective _ isoPhysical.symm.injective
    _ = N := card_codeBase BaseC11.base.toRealisation CapCertC11.base_fam_card

theorem independent_code_Cyc :
    (strongPower BaseC11.Cyc11 186).IsIndepSet ↑code :=
  isIndepSet_image_symm isoPhysical
    (independent_codeBase BaseC11.base.toRealisation)

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

theorem decimal_lower_integer : 5295498140339058 ^ 186 ≤
    N * (1000000000000000 : Nat) ^ 186 := by native_decide

theorem decimal_upper_integer : N * (1000000000000000 : Nat) ^ 186 <
    5295498140339059 ^ 186 := by native_decide

theorem root_bracket :
    (5295498140339058 : ℝ) / 1000000000000000 ≤ (N : ℝ) ^ ((1 : ℝ) / (186 : ℕ)) ∧
    (N : ℝ) ^ ((1 : ℝ) / (186 : ℕ)) < (5295498140339059 : ℝ) / 1000000000000000 := by
  constructor
  · exact Decimal.decimal_le (by norm_num) (by norm_num) decimal_lower_integer le_rfl
  · exact C11R5Common.root_lt_decimal (by norm_num) (by norm_num) decimal_upper_integer

theorem capacity_lower : (5.295498140339058 : ℝ) ≤
    shannonCapacity (SimpleGraph.cycleGraph 11) := by
  rw [show (5.295498140339058 : ℝ) =
    (5295498140339058 : ℝ) / 1000000000000000 by norm_num]
  exact root_bracket.1.trans capacity_root

theorem cross_power_BPZ_207 : C11R5History.BPZ_207 ^ 186 < N ^ 207 := by native_decide

theorem strict_root_BPZ_207 :
    (C11R5History.BPZ_207 : ℝ) ^ ((1 : ℝ) / (207 : ℕ)) <
    (N : ℝ) ^ ((1 : ℝ) / (186 : ℕ)) :=
  C11R5Common.root_lt_of_cross_power (by norm_num) (by norm_num) cross_power_BPZ_207

theorem cross_power_R3_207 : C11R5History.R3_207 ^ 186 < N ^ 207 := by native_decide

theorem strict_root_R3_207 :
    (C11R5History.R3_207 : ℝ) ^ ((1 : ℝ) / (207 : ℕ)) <
    (N : ℝ) ^ ((1 : ℝ) / (186 : ℕ)) :=
  C11R5Common.root_lt_of_cross_power (by norm_num) (by norm_num) cross_power_R3_207

theorem cross_power_R4_201 : C11R5History.R4_201 ^ 186 < N ^ 201 := by native_decide

theorem strict_root_R4_201 :
    (C11R5History.R4_201 : ℝ) ^ ((1 : ℝ) / (201 : ℕ)) <
    (N : ℝ) ^ ((1 : ℝ) / (186 : ℕ)) :=
  C11R5Common.root_lt_of_cross_power (by norm_num) (by norm_num) cross_power_R4_201

theorem cross_power_R4_210 : C11R5History.R4_210 ^ 186 < N ^ 210 := by native_decide

theorem strict_root_R4_210 :
    (C11R5History.R4_210 : ℝ) ^ ((1 : ℝ) / (210 : ℕ)) <
    (N : ℝ) ^ ((1 : ℝ) / (186 : ℕ)) :=
  C11R5Common.root_lt_of_cross_power (by norm_num) (by norm_num) cross_power_R4_210

end ShannonBounds.C11R5D186
