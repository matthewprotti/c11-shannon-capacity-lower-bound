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

namespace ShannonBounds.C11R5D213

open SimpleGraph C11R5Tables

def N : Nat := 15575655426175670262980356243306221873167074980689569793363838130479999529429857666850517103134244772329978664731663687319144867678577766570404657587474324

section Generic

variable {α : Type*} [Fintype α] [DecidableEq α]
  {G : SimpleGraph α} [DecidableRel G.Adj]

def R_v (R : Realisation Letter Letter.sep G) :
    Realisation Letter Letter.sep (strongPower G 1) := CertC11.R1 R

def w_v : Letter → Nat := CertC11.w0

theorem step_v (R : Realisation Letter Letter.sep G)
    (h : ∀ a, R.w a = CertC11.w0 a) (a : Letter) :
    (R_v R).w a = w_v a := (CertC11.w_R1 R a).trans (h a)

def e_n1 : Fin 2 → Nat := (Fin.cases (1) (fun _ => 1))

def ch_n1 (R : Realisation Letter Letter.sep G) :
    (i : Fin 2) → Realisation Letter Letter.sep (strongPower G (e_n1 i)) :=
  (Fin.cases (R_v R) (fun _ => R_v R))

def R_n1 (R : Realisation Letter Letter.sep G) :
    Realisation Letter Letter.sep (strongPower G 2) :=
  Realisation.multiSubst e_n1 (ch_n1 R) S_e788020168e26abb

def w_n1 : Letter → Nat
  | .B => 21043
  | .N => 20173
  | .A => 879
  | .D => 852
  | .O => 0
  | .H => 861
  | .V => 870

theorem step_n1 (R : Realisation Letter Letter.sep G)
    (h : ∀ a, R.w a = CertC11.w0 a) :
    ∀ a, (R_n1 R).w a = w_n1 a := by
  intro a
  change (Realisation.multiSubst e_n1 (ch_n1 R) S_e788020168e26abb).w a = w_n1 a
  rw [w_multiSubst]
  have h0 : ∀ b, (ch_n1 R 0).w b = w_v b :=
    fun b => step_v R h b
  have h1 : ∀ b, (ch_n1 R 1).w b = w_v b :=
    fun b => step_v R h b
  simp only [Fin.prod_univ_two, h0, h1]
  cases a <;> native_decide

def e_n2 : Fin 3 → Nat := (Fin.cases (1) (Fin.cases (1) (fun _ => 1)))

def ch_n2 (R : Realisation Letter Letter.sep G) :
    (i : Fin 3) → Realisation Letter Letter.sep (strongPower G (e_n2 i)) :=
  (Fin.cases (R_v R) (Fin.cases (R_v R) (fun _ => R_v R)))

def R_n2 (R : Realisation Letter Letter.sep G) :
    Realisation Letter Letter.sep (strongPower G 3) :=
  Realisation.multiSubst e_n2 (ch_n2 R) S_3b145410351af05c

def w_n2 : Letter → Nat
  | .B => 3056536
  | .N => 2867365
  | .A => 193005
  | .D => 181476
  | .O => 0
  | .H => 185310
  | .V => 189144

theorem step_n2 (R : Realisation Letter Letter.sep G)
    (h : ∀ a, R.w a = CertC11.w0 a) :
    ∀ a, (R_n2 R).w a = w_n2 a := by
  intro a
  change (Realisation.multiSubst e_n2 (ch_n2 R) S_3b145410351af05c).w a = w_n2 a
  rw [w_multiSubst]
  have h0 : ∀ b, (ch_n2 R 0).w b = w_v b :=
    fun b => step_v R h b
  have h1 : ∀ b, (ch_n2 R 1).w b = w_v b :=
    fun b => step_v R h b
  have h2 : ∀ b, (ch_n2 R 2).w b = w_v b :=
    fun b => step_v R h b
  simp only [Fin.prod_univ_three, h0, h1, h2]
  cases a <;> native_decide

def e_n3 : Fin 3 → Nat := (Fin.cases (2) (Fin.cases (3) (fun _ => 2)))

def ch_n3 (R : Realisation Letter Letter.sep G) :
    (i : Fin 3) → Realisation Letter Letter.sep (strongPower G (e_n3 i)) :=
  (Fin.cases (R_n1 R) (Fin.cases (R_n2 R) (fun _ => R_n1 R)))

def R_n3 (R : Realisation Letter Letter.sep G) :
    Realisation Letter Letter.sep (strongPower G 7) :=
  Realisation.multiSubst e_n3 (ch_n3 R) S_6859b0ec25991d42

def w_n3 : Letter → Nat
  | .B => 1372105792563796
  | .N => 1176747600597757
  | .A => 206636480980932
  | .D => 172416720778284
  | .O => 0
  | .H => 183703991497293
  | .V => 194991257087544

theorem step_n3 (R : Realisation Letter Letter.sep G)
    (h : ∀ a, R.w a = CertC11.w0 a) :
    ∀ a, (R_n3 R).w a = w_n3 a := by
  intro a
  change (Realisation.multiSubst e_n3 (ch_n3 R) S_6859b0ec25991d42).w a = w_n3 a
  rw [w_multiSubst]
  have h0 : ∀ b, (ch_n3 R 0).w b = w_n1 b :=
    fun b => step_n1 R h b
  have h1 : ∀ b, (ch_n3 R 1).w b = w_n2 b :=
    fun b => step_n2 R h b
  have h2 : ∀ b, (ch_n3 R 2).w b = w_n1 b :=
    fun b => step_n1 R h b
  simp only [Fin.prod_univ_three, h0, h1, h2]
  cases a <;> native_decide

def e_n4 : Fin 3 → Nat := (Fin.cases (1) (Fin.cases (1) (fun _ => 1)))

def ch_n4 (R : Realisation Letter Letter.sep G) :
    (i : Fin 3) → Realisation Letter Letter.sep (strongPower G (e_n4 i)) :=
  (Fin.cases (R_v R) (Fin.cases (R_v R) (fun _ => R_v R)))

def R_n4 (R : Realisation Letter Letter.sep G) :
    Realisation Letter Letter.sep (strongPower G 3) :=
  Realisation.multiSubst e_n4 (ch_n4 R) S_6859b0ec25991d42

def w_n4 : Letter → Nat
  | .B => 3056536
  | .N => 2867365
  | .A => 193005
  | .D => 181476
  | .O => 0
  | .H => 185310
  | .V => 189144

theorem step_n4 (R : Realisation Letter Letter.sep G)
    (h : ∀ a, R.w a = CertC11.w0 a) :
    ∀ a, (R_n4 R).w a = w_n4 a := by
  intro a
  change (Realisation.multiSubst e_n4 (ch_n4 R) S_6859b0ec25991d42).w a = w_n4 a
  rw [w_multiSubst]
  have h0 : ∀ b, (ch_n4 R 0).w b = w_v b :=
    fun b => step_v R h b
  have h1 : ∀ b, (ch_n4 R 1).w b = w_v b :=
    fun b => step_v R h b
  have h2 : ∀ b, (ch_n4 R 2).w b = w_v b :=
    fun b => step_v R h b
  simp only [Fin.prod_univ_three, h0, h1, h2]
  cases a <;> native_decide

def e_n5 : Fin 3 → Nat := (Fin.cases (1) (Fin.cases (1) (fun _ => 3)))

def ch_n5 (R : Realisation Letter Letter.sep G) :
    (i : Fin 3) → Realisation Letter Letter.sep (strongPower G (e_n5 i)) :=
  (Fin.cases (R_v R) (Fin.cases (R_v R) (fun _ => R_n4 R)))

def R_n5 (R : Realisation Letter Letter.sep G) :
    Realisation Letter Letter.sep (strongPower G 5) :=
  Realisation.multiSubst e_n5 (ch_n5 R) S_a41106e52a48b9a6

def w_n5 : Letter → Nat
  | .B => 64649580904
  | .N => 58019734453
  | .A => 6892444167
  | .D => 6102277044
  | .O => 0
  | .H => 6364921011
  | .V => 6627553476

theorem step_n5 (R : Realisation Letter Letter.sep G)
    (h : ∀ a, R.w a = CertC11.w0 a) :
    ∀ a, (R_n5 R).w a = w_n5 a := by
  intro a
  change (Realisation.multiSubst e_n5 (ch_n5 R) S_a41106e52a48b9a6).w a = w_n5 a
  rw [w_multiSubst]
  have h0 : ∀ b, (ch_n5 R 0).w b = w_v b :=
    fun b => step_v R h b
  have h1 : ∀ b, (ch_n5 R 1).w b = w_v b :=
    fun b => step_v R h b
  have h2 : ∀ b, (ch_n5 R 2).w b = w_n4 b :=
    fun b => step_n4 R h b
  simp only [Fin.prod_univ_three, h0, h1, h2]
  cases a <;> native_decide

def e_n6 : Fin 3 → Nat := (Fin.cases (5) (Fin.cases (2) (fun _ => 3)))

def ch_n6 (R : Realisation Letter Letter.sep G) :
    (i : Fin 3) → Realisation Letter Letter.sep (strongPower G (e_n6 i)) :=
  (Fin.cases (R_n5 R) (Fin.cases (R_n1 R) (fun _ => R_n2 R)))

def R_n6 (R : Realisation Letter Letter.sep G) :
    Realisation Letter Letter.sep (strongPower G 10) :=
  Realisation.multiSubst e_n6 (ch_n6 R) S_3e8694d6a5bfe173

def w_n6 : Letter → Nat
  | .B => 4267928089927644825565
  | .N => 3415456343474828453815
  | .A => 923662251400099544769
  | .D => 707123428502479877964
  | .O => 0
  | .H => 778311516040759943058
  | .V => 849621819766550349963

theorem step_n6 (R : Realisation Letter Letter.sep G)
    (h : ∀ a, R.w a = CertC11.w0 a) :
    ∀ a, (R_n6 R).w a = w_n6 a := by
  intro a
  change (Realisation.multiSubst e_n6 (ch_n6 R) S_3e8694d6a5bfe173).w a = w_n6 a
  rw [w_multiSubst]
  have h0 : ∀ b, (ch_n6 R 0).w b = w_n5 b :=
    fun b => step_n5 R h b
  have h1 : ∀ b, (ch_n6 R 1).w b = w_n1 b :=
    fun b => step_n1 R h b
  have h2 : ∀ b, (ch_n6 R 2).w b = w_n2 b :=
    fun b => step_n2 R h b
  simp only [Fin.prod_univ_three, h0, h1, h2]
  cases a <;> native_decide

def e_n7 : Fin 3 → Nat := (Fin.cases (1) (Fin.cases (1) (fun _ => 2)))

def ch_n7 (R : Realisation Letter Letter.sep G) :
    (i : Fin 3) → Realisation Letter Letter.sep (strongPower G (e_n7 i)) :=
  (Fin.cases (R_v R) (Fin.cases (R_v R) (fun _ => R_n1 R)))

def R_n7 (R : Realisation Letter Letter.sep G) :
    Realisation Letter Letter.sep (strongPower G 4) :=
  Realisation.multiSubst e_n7 (ch_n7 R) S_77a9709d00257692

def w_n7 : Letter → Nat
  | .B => 444337309
  | .N => 407761396
  | .A => 34367124
  | .D => 37676271
  | .O => 0
  | .H => 36568002
  | .V => 35467563

theorem step_n7 (R : Realisation Letter Letter.sep G)
    (h : ∀ a, R.w a = CertC11.w0 a) :
    ∀ a, (R_n7 R).w a = w_n7 a := by
  intro a
  change (Realisation.multiSubst e_n7 (ch_n7 R) S_77a9709d00257692).w a = w_n7 a
  rw [w_multiSubst]
  have h0 : ∀ b, (ch_n7 R 0).w b = w_v b :=
    fun b => step_v R h b
  have h1 : ∀ b, (ch_n7 R 1).w b = w_v b :=
    fun b => step_v R h b
  have h2 : ∀ b, (ch_n7 R 2).w b = w_n1 b :=
    fun b => step_n1 R h b
  simp only [Fin.prod_univ_three, h0, h1, h2]
  cases a <;> native_decide

def e_n8 : Fin 3 → Nat := (Fin.cases (1) (Fin.cases (1) (fun _ => 1)))

def ch_n8 (R : Realisation Letter Letter.sep G) :
    (i : Fin 3) → Realisation Letter Letter.sep (strongPower G (e_n8 i)) :=
  (Fin.cases (R_v R) (Fin.cases (R_v R) (fun _ => R_v R)))

def R_n8 (R : Realisation Letter Letter.sep G) :
    Realisation Letter Letter.sep (strongPower G 3) :=
  Realisation.multiSubst e_n8 (ch_n8 R) S_f509c81899188c6f

def w_n8 : Letter → Nat
  | .B => 3056536
  | .N => 2867365
  | .A => 181476
  | .D => 193005
  | .O => 0
  | .H => 189144
  | .V => 185310

theorem step_n8 (R : Realisation Letter Letter.sep G)
    (h : ∀ a, R.w a = CertC11.w0 a) :
    ∀ a, (R_n8 R).w a = w_n8 a := by
  intro a
  change (Realisation.multiSubst e_n8 (ch_n8 R) S_f509c81899188c6f).w a = w_n8 a
  rw [w_multiSubst]
  have h0 : ∀ b, (ch_n8 R 0).w b = w_v b :=
    fun b => step_v R h b
  have h1 : ∀ b, (ch_n8 R 1).w b = w_v b :=
    fun b => step_v R h b
  have h2 : ∀ b, (ch_n8 R 2).w b = w_v b :=
    fun b => step_v R h b
  simp only [Fin.prod_univ_three, h0, h1, h2]
  cases a <;> native_decide

def e_n9 : Fin 3 → Nat := (Fin.cases (4) (Fin.cases (3) (fun _ => 2)))

def ch_n9 (R : Realisation Letter Letter.sep G) :
    (i : Fin 3) → Realisation Letter Letter.sep (strongPower G (e_n9 i)) :=
  (Fin.cases (R_n7 R) (Fin.cases (R_n8 R) (fun _ => R_n1 R)))

def R_n9 (R : Realisation Letter Letter.sep G) :
    Realisation Letter Letter.sep (strongPower G 9) :=
  Realisation.multiSubst e_n9 (ch_n9 R) S_15769811f129f696

def w_n9 : Letter → Nat
  | .B => 29215469594877720067
  | .N => 23927454948961993150
  | .A => 5684877090550740618
  | .D => 4476848720881226868
  | .O => 0
  | .H => 4873949464677330429
  | .V => 5271374572577799399

theorem step_n9 (R : Realisation Letter Letter.sep G)
    (h : ∀ a, R.w a = CertC11.w0 a) :
    ∀ a, (R_n9 R).w a = w_n9 a := by
  intro a
  change (Realisation.multiSubst e_n9 (ch_n9 R) S_15769811f129f696).w a = w_n9 a
  rw [w_multiSubst]
  have h0 : ∀ b, (ch_n9 R 0).w b = w_n7 b :=
    fun b => step_n7 R h b
  have h1 : ∀ b, (ch_n9 R 1).w b = w_n8 b :=
    fun b => step_n8 R h b
  have h2 : ∀ b, (ch_n9 R 2).w b = w_n1 b :=
    fun b => step_n1 R h b
  simp only [Fin.prod_univ_three, h0, h1, h2]
  cases a <;> native_decide

def e_n10 : Fin 3 → Nat := (Fin.cases (7) (Fin.cases (10) (fun _ => 9)))

def ch_n10 (R : Realisation Letter Letter.sep G) :
    (i : Fin 3) → Realisation Letter Letter.sep (strongPower G (e_n10 i)) :=
  (Fin.cases (R_n3 R) (Fin.cases (R_n6 R) (fun _ => R_n9 R)))

def R_n10 (R : Realisation Letter Letter.sep G) :
    Realisation Letter Letter.sep (strongPower G 26) :=
  Realisation.multiSubst e_n10 (ch_n10 R) S_0058d965adce02f4

def w_n10 : Letter → Nat
  | .B => 202267319441212719393389821898295240698430375650358944080
  | .N => 113361611507426301513396635069545273743718764205571439949
  | .A => 104901499970541385441088423468410287604861644511477822155
  | .D => 51993653571247996512604587225493206165844272593296090140
  | .O => 0
  | .H => 68361804031252776979256995250381749278647164939606181910
  | .V => 84688088253814631376809021357964267478309447880496940194

theorem step_n10 (R : Realisation Letter Letter.sep G)
    (h : ∀ a, R.w a = CertC11.w0 a) :
    ∀ a, (R_n10 R).w a = w_n10 a := by
  intro a
  change (Realisation.multiSubst e_n10 (ch_n10 R) S_0058d965adce02f4).w a = w_n10 a
  rw [w_multiSubst]
  have h0 : ∀ b, (ch_n10 R 0).w b = w_n3 b :=
    fun b => step_n3 R h b
  have h1 : ∀ b, (ch_n10 R 1).w b = w_n6 b :=
    fun b => step_n6 R h b
  have h2 : ∀ b, (ch_n10 R 2).w b = w_n9 b :=
    fun b => step_n9 R h b
  simp only [Fin.prod_univ_three, h0, h1, h2]
  cases a <;> native_decide

def e_n11 : Fin 3 → Nat := (Fin.cases (1) (Fin.cases (1) (fun _ => 1)))

def ch_n11 (R : Realisation Letter Letter.sep G) :
    (i : Fin 3) → Realisation Letter Letter.sep (strongPower G (e_n11 i)) :=
  (Fin.cases (R_v R) (Fin.cases (R_v R) (fun _ => R_v R)))

def R_n11 (R : Realisation Letter Letter.sep G) :
    Realisation Letter Letter.sep (strongPower G 3) :=
  Realisation.multiSubst e_n11 (ch_n11 R) S_36518f191584a644

def w_n11 : Letter → Nat
  | .B => 3056536
  | .N => 2867365
  | .A => 193005
  | .D => 181476
  | .O => 0
  | .H => 185310
  | .V => 189144

theorem step_n11 (R : Realisation Letter Letter.sep G)
    (h : ∀ a, R.w a = CertC11.w0 a) :
    ∀ a, (R_n11 R).w a = w_n11 a := by
  intro a
  change (Realisation.multiSubst e_n11 (ch_n11 R) S_36518f191584a644).w a = w_n11 a
  rw [w_multiSubst]
  have h0 : ∀ b, (ch_n11 R 0).w b = w_v b :=
    fun b => step_v R h b
  have h1 : ∀ b, (ch_n11 R 1).w b = w_v b :=
    fun b => step_v R h b
  have h2 : ∀ b, (ch_n11 R 2).w b = w_v b :=
    fun b => step_v R h b
  simp only [Fin.prod_univ_three, h0, h1, h2]
  cases a <;> native_decide

def e_n12 : Fin 3 → Nat := (Fin.cases (1) (Fin.cases (3) (fun _ => 1)))

def ch_n12 (R : Realisation Letter Letter.sep G) :
    (i : Fin 3) → Realisation Letter Letter.sep (strongPower G (e_n12 i)) :=
  (Fin.cases (R_v R) (Fin.cases (R_n11 R) (fun _ => R_v R)))

def R_n12 (R : Realisation Letter Letter.sep G) :
    Realisation Letter Letter.sep (strongPower G 5) :=
  Realisation.multiSubst e_n12 (ch_n12 R) S_6859b0ec25991d42

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
  change (Realisation.multiSubst e_n12 (ch_n12 R) S_6859b0ec25991d42).w a = w_n12 a
  rw [w_multiSubst]
  have h0 : ∀ b, (ch_n12 R 0).w b = w_v b :=
    fun b => step_v R h b
  have h1 : ∀ b, (ch_n12 R 1).w b = w_n11 b :=
    fun b => step_n11 R h b
  have h2 : ∀ b, (ch_n12 R 2).w b = w_v b :=
    fun b => step_v R h b
  simp only [Fin.prod_univ_three, h0, h1, h2]
  cases a <;> native_decide

def e_n13 : Fin 3 → Nat := (Fin.cases (1) (Fin.cases (1) (fun _ => 5)))

def ch_n13 (R : Realisation Letter Letter.sep G) :
    (i : Fin 3) → Realisation Letter Letter.sep (strongPower G (e_n13 i)) :=
  (Fin.cases (R_v R) (Fin.cases (R_v R) (fun _ => R_n12 R)))

def R_n13 (R : Realisation Letter Letter.sep G) :
    Realisation Letter Letter.sep (strongPower G 7) :=
  Realisation.multiSubst e_n13 (ch_n13 R) S_59b3ea5954777333

def w_n13 : Letter → Nat
  | .B => 1371904525359388
  | .N => 1176609562843039
  | .A => 172479128069172
  | .D => 206644550155167
  | .O => 0
  | .H => 195185702631522
  | .V => 183833029568649

theorem step_n13 (R : Realisation Letter Letter.sep G)
    (h : ∀ a, R.w a = CertC11.w0 a) :
    ∀ a, (R_n13 R).w a = w_n13 a := by
  intro a
  change (Realisation.multiSubst e_n13 (ch_n13 R) S_59b3ea5954777333).w a = w_n13 a
  rw [w_multiSubst]
  have h0 : ∀ b, (ch_n13 R 0).w b = w_v b :=
    fun b => step_v R h b
  have h1 : ∀ b, (ch_n13 R 1).w b = w_v b :=
    fun b => step_v R h b
  have h2 : ∀ b, (ch_n13 R 2).w b = w_n12 b :=
    fun b => step_n12 R h b
  simp only [Fin.prod_univ_three, h0, h1, h2]
  cases a <;> native_decide

def e_n14 : Fin 3 → Nat := (Fin.cases (1) (Fin.cases (1) (fun _ => 7)))

def ch_n14 (R : Realisation Letter Letter.sep G) :
    (i : Fin 3) → Realisation Letter Letter.sep (strongPower G (e_n14 i)) :=
  (Fin.cases (R_v R) (Fin.cases (R_v R) (fun _ => R_n13 R)))

def R_n14 (R : Realisation Letter Letter.sep G) :
    Realisation Letter Letter.sep (strongPower G 9) :=
  Realisation.multiSubst e_n14 (ch_n14 R) S_cc0e5d2202d76d5d

def w_n14 : Letter → Nat
  | .B => 29204049845213461576
  | .N => 23917595507872972489
  | .A => 4480340485929053436
  | .D => 5687253854546559471
  | .O => 0
  | .H => 5282343494376294798
  | .V => 4881378566458304163

theorem step_n14 (R : Realisation Letter Letter.sep G)
    (h : ∀ a, R.w a = CertC11.w0 a) :
    ∀ a, (R_n14 R).w a = w_n14 a := by
  intro a
  change (Realisation.multiSubst e_n14 (ch_n14 R) S_cc0e5d2202d76d5d).w a = w_n14 a
  rw [w_multiSubst]
  have h0 : ∀ b, (ch_n14 R 0).w b = w_v b :=
    fun b => step_v R h b
  have h1 : ∀ b, (ch_n14 R 1).w b = w_v b :=
    fun b => step_v R h b
  have h2 : ∀ b, (ch_n14 R 2).w b = w_n13 b :=
    fun b => step_n13 R h b
  simp only [Fin.prod_univ_three, h0, h1, h2]
  cases a <;> native_decide

def e_n15 : Fin 2 → Nat := (Fin.cases (9) (fun _ => 1))

def ch_n15 (R : Realisation Letter Letter.sep G) :
    (i : Fin 2) → Realisation Letter Letter.sep (strongPower G (e_n15 i)) :=
  (Fin.cases (R_n14 R) (fun _ => R_v R))

def R_n15 (R : Realisation Letter Letter.sep G) :
    Realisation Letter Letter.sep (strongPower G 10) :=
  Realisation.multiSubst e_n15 (ch_n15 R) S_e9ef2871c79d62be

def w_n15 : Letter → Nat
  | .B => 4265090010577378767241
  | .N => 3413360323681601771851
  | .A => 924490248822167874312
  | .D => 707961135525544505379
  | .O => 0
  | .H => 779552678660073021102
  | .V => 852336728907556575666

theorem step_n15 (R : Realisation Letter Letter.sep G)
    (h : ∀ a, R.w a = CertC11.w0 a) :
    ∀ a, (R_n15 R).w a = w_n15 a := by
  intro a
  change (Realisation.multiSubst e_n15 (ch_n15 R) S_e9ef2871c79d62be).w a = w_n15 a
  rw [w_multiSubst]
  have h0 : ∀ b, (ch_n15 R 0).w b = w_n14 b :=
    fun b => step_n14 R h b
  have h1 : ∀ b, (ch_n15 R 1).w b = w_v b :=
    fun b => step_v R h b
  simp only [Fin.prod_univ_two, h0, h1]
  cases a <;> native_decide

def e_n16 : Fin 3 → Nat := (Fin.cases (1) (Fin.cases (1) (fun _ => 1)))

def ch_n16 (R : Realisation Letter Letter.sep G) :
    (i : Fin 3) → Realisation Letter Letter.sep (strongPower G (e_n16 i)) :=
  (Fin.cases (R_v R) (Fin.cases (R_v R) (fun _ => R_v R)))

def R_n16 (R : Realisation Letter Letter.sep G) :
    Realisation Letter Letter.sep (strongPower G 3) :=
  Realisation.multiSubst e_n16 (ch_n16 R) S_18277b0c484b4c41

def w_n16 : Letter → Nat
  | .B => 3056536
  | .N => 2867365
  | .A => 193005
  | .D => 181476
  | .O => 0
  | .H => 185310
  | .V => 189144

theorem step_n16 (R : Realisation Letter Letter.sep G)
    (h : ∀ a, R.w a = CertC11.w0 a) :
    ∀ a, (R_n16 R).w a = w_n16 a := by
  intro a
  change (Realisation.multiSubst e_n16 (ch_n16 R) S_18277b0c484b4c41).w a = w_n16 a
  rw [w_multiSubst]
  have h0 : ∀ b, (ch_n16 R 0).w b = w_v b :=
    fun b => step_v R h b
  have h1 : ∀ b, (ch_n16 R 1).w b = w_v b :=
    fun b => step_v R h b
  have h2 : ∀ b, (ch_n16 R 2).w b = w_v b :=
    fun b => step_v R h b
  simp only [Fin.prod_univ_three, h0, h1, h2]
  cases a <;> native_decide

def e_n17 : Fin 3 → Nat := (Fin.cases (3) (Fin.cases (1) (fun _ => 1)))

def ch_n17 (R : Realisation Letter Letter.sep G) :
    (i : Fin 3) → Realisation Letter Letter.sep (strongPower G (e_n17 i)) :=
  (Fin.cases (R_n16 R) (Fin.cases (R_v R) (fun _ => R_v R)))

def R_n17 (R : Realisation Letter Letter.sep G) :
    Realisation Letter Letter.sep (strongPower G 5) :=
  Realisation.multiSubst e_n17 (ch_n17 R) S_3daf90758a80fbb9

def w_n17 : Letter → Nat
  | .B => 64649580904
  | .N => 58019734453
  | .A => 6892444167
  | .D => 6102277044
  | .O => 0
  | .H => 6364921011
  | .V => 6627553476

theorem step_n17 (R : Realisation Letter Letter.sep G)
    (h : ∀ a, R.w a = CertC11.w0 a) :
    ∀ a, (R_n17 R).w a = w_n17 a := by
  intro a
  change (Realisation.multiSubst e_n17 (ch_n17 R) S_3daf90758a80fbb9).w a = w_n17 a
  rw [w_multiSubst]
  have h0 : ∀ b, (ch_n17 R 0).w b = w_n16 b :=
    fun b => step_n16 R h b
  have h1 : ∀ b, (ch_n17 R 1).w b = w_v b :=
    fun b => step_v R h b
  have h2 : ∀ b, (ch_n17 R 2).w b = w_v b :=
    fun b => step_v R h b
  simp only [Fin.prod_univ_three, h0, h1, h2]
  cases a <;> native_decide

def e_n18 : Fin 2 → Nat := (Fin.cases (5) (fun _ => 1))

def ch_n18 (R : Realisation Letter Letter.sep G) :
    (i : Fin 2) → Realisation Letter Letter.sep (strongPower G (e_n18 i)) :=
  (Fin.cases (R_n17 R) (fun _ => R_v R))

def R_n18 (R : Realisation Letter Letter.sep G) :
    Realisation Letter Letter.sep (strongPower G 6) :=
  Realisation.multiSubst e_n18 (ch_n18 R) S_e788020168e26abb

def w_n18 : Letter → Nat
  | .B => 9413173394713
  | .N => 8259479624827
  | .A => 1210865305986
  | .D => 1040582543607
  | .O => 0
  | .H => 1096972749954
  | .V => 1154149220412

theorem step_n18 (R : Realisation Letter Letter.sep G)
    (h : ∀ a, R.w a = CertC11.w0 a) :
    ∀ a, (R_n18 R).w a = w_n18 a := by
  intro a
  change (Realisation.multiSubst e_n18 (ch_n18 R) S_e788020168e26abb).w a = w_n18 a
  rw [w_multiSubst]
  have h0 : ∀ b, (ch_n18 R 0).w b = w_n17 b :=
    fun b => step_n17 R h b
  have h1 : ∀ b, (ch_n18 R 1).w b = w_v b :=
    fun b => step_v R h b
  simp only [Fin.prod_univ_two, h0, h1]
  cases a <;> native_decide

def e_n19 : Fin 2 → Nat := (Fin.cases (6) (fun _ => 1))

def ch_n19 (R : Realisation Letter Letter.sep G) :
    (i : Fin 2) → Realisation Letter Letter.sep (strongPower G (e_n19 i)) :=
  (Fin.cases (R_n18 R) (fun _ => R_v R))

def R_n19 (R : Realisation Letter Letter.sep G) :
    Realisation Letter Letter.sep (strongPower G 7) :=
  Realisation.multiSubst e_n19 (ch_n19 R) S_e788020168e26abb

def w_n19 : Letter → Nat
  | .B => 1371664485782164
  | .N => 1176478702643392
  | .A => 206766588926208
  | .D => 172541160066675
  | .O => 0
  | .H => 183839487617811
  | .V => 195420994084083

theorem step_n19 (R : Realisation Letter Letter.sep G)
    (h : ∀ a, R.w a = CertC11.w0 a) :
    ∀ a, (R_n19 R).w a = w_n19 a := by
  intro a
  change (Realisation.multiSubst e_n19 (ch_n19 R) S_e788020168e26abb).w a = w_n19 a
  rw [w_multiSubst]
  have h0 : ∀ b, (ch_n19 R 0).w b = w_n18 b :=
    fun b => step_n18 R h b
  have h1 : ∀ b, (ch_n19 R 1).w b = w_v b :=
    fun b => step_v R h b
  simp only [Fin.prod_univ_two, h0, h1]
  cases a <;> native_decide

def e_n20 : Fin 3 → Nat := (Fin.cases (2) (Fin.cases (5) (fun _ => 1)))

def ch_n20 (R : Realisation Letter Letter.sep G) :
    (i : Fin 3) → Realisation Letter Letter.sep (strongPower G (e_n20 i)) :=
  (Fin.cases (R_n1 R) (Fin.cases (R_n17 R) (fun _ => R_v R)))

def R_n20 (R : Realisation Letter Letter.sep G) :
    Realisation Letter Letter.sep (strongPower G 8) :=
  Realisation.multiSubst e_n20 (ch_n20 R) S_6859b0ec25991d42

def w_n20 : Letter → Nat
  | .B => 200099001231195094
  | .N => 167721649486571659
  | .A => 34550112878653803
  | .D => 28011131205245763
  | .O => 0
  | .H => 30175060397009127
  | .V => 32349134241561273

theorem step_n20 (R : Realisation Letter Letter.sep G)
    (h : ∀ a, R.w a = CertC11.w0 a) :
    ∀ a, (R_n20 R).w a = w_n20 a := by
  intro a
  change (Realisation.multiSubst e_n20 (ch_n20 R) S_6859b0ec25991d42).w a = w_n20 a
  rw [w_multiSubst]
  have h0 : ∀ b, (ch_n20 R 0).w b = w_n1 b :=
    fun b => step_n1 R h b
  have h1 : ∀ b, (ch_n20 R 1).w b = w_n17 b :=
    fun b => step_n17 R h b
  have h2 : ∀ b, (ch_n20 R 2).w b = w_v b :=
    fun b => step_v R h b
  simp only [Fin.prod_univ_three, h0, h1, h2]
  cases a <;> native_decide

def e_n21 : Fin 2 → Nat := (Fin.cases (8) (fun _ => 1))

def ch_n21 (R : Realisation Letter Letter.sep G) :
    (i : Fin 2) → Realisation Letter Letter.sep (strongPower G (e_n21 i)) :=
  (Fin.cases (R_n20 R) (fun _ => R_v R))

def R_n21 (R : Realisation Letter Letter.sep G) :
    Realisation Letter Letter.sep (strongPower G 9) :=
  Realisation.multiSubst e_n21 (ch_n21 R) S_e788020168e26abb

def w_n21 : Letter → Nat
  | .B => 29202038910774987328
  | .N => 23920124565729136987
  | .A => 5687493828802846416
  | .D => 4480745579604613323
  | .O => 0
  | .H => 4878548706026038392
  | .V => 5284314594677126943

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
  | .B => 4264800360287595541777
  | .N => 3413720169819945991402
  | .A => 924525420945174373854
  | .D => 708026246001042502827
  | .O => 0
  | .H => 779149936070962977801
  | .V => 852621636043448932872

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
  | .B => 623293707242540004187708
  | .N => 487521840377267853900646
  | .A => 148758954501211022019696
  | .D => 110780887441607873375640
  | .O => 0
  | .H => 123217901239749469755351
  | .V => 136208747543972822174049

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
  | .B => 91156207075996757293403668
  | .N => 69674378197075668319950820
  | .A => 23734621565856327226009023
  | .D => 17193451537840121581042818
  | .O => 0
  | .H => 19329161200895476676227833
  | .V => 21582487618727111186205096

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

def e_n25 : Fin 3 → Nat := (Fin.cases (1) (Fin.cases (1) (fun _ => 2)))

def ch_n25 (R : Realisation Letter Letter.sep G) :
    (i : Fin 3) → Realisation Letter Letter.sep (strongPower G (e_n25 i)) :=
  (Fin.cases (R_v R) (Fin.cases (R_v R) (fun _ => R_n1 R)))

def R_n25 (R : Realisation Letter Letter.sep G) :
    Realisation Letter Letter.sep (strongPower G 4) :=
  Realisation.multiSubst e_n25 (ch_n25 R) S_04339297651c9c49

def w_n25 : Letter → Nat
  | .B => 444337309
  | .N => 407761396
  | .A => 37676271
  | .D => 34367124
  | .O => 0
  | .H => 35467563
  | .V => 36568002

theorem step_n25 (R : Realisation Letter Letter.sep G)
    (h : ∀ a, R.w a = CertC11.w0 a) :
    ∀ a, (R_n25 R).w a = w_n25 a := by
  intro a
  change (Realisation.multiSubst e_n25 (ch_n25 R) S_04339297651c9c49).w a = w_n25 a
  rw [w_multiSubst]
  have h0 : ∀ b, (ch_n25 R 0).w b = w_v b :=
    fun b => step_v R h b
  have h1 : ∀ b, (ch_n25 R 1).w b = w_v b :=
    fun b => step_v R h b
  have h2 : ∀ b, (ch_n25 R 2).w b = w_n1 b :=
    fun b => step_n1 R h b
  simp only [Fin.prod_univ_three, h0, h1, h2]
  cases a <;> native_decide

def e_n26 : Fin 3 → Nat := (Fin.cases (4) (Fin.cases (3) (fun _ => 3)))

def ch_n26 (R : Realisation Letter Letter.sep G) :
    (i : Fin 3) → Realisation Letter Letter.sep (strongPower G (e_n26 i)) :=
  (Fin.cases (R_n25 R) (Fin.cases (R_n11 R) (fun _ => R_n4 R)))

def R_n26 (R : Realisation Letter Letter.sep G) :
    Realisation Letter Letter.sep (strongPower G 10) :=
  Realisation.multiSubst e_n26 (ch_n26 R) S_7b6c163f0dc4b608

def w_n26 : Letter → Nat
  | .B => 4268695667221914515614
  | .N => 3415744172780326130974
  | .A => 923778862034791533969
  | .D => 706922755496914360980
  | .O => 0
  | .H => 777903005727862749030
  | .V => 848880412293644017554

theorem step_n26 (R : Realisation Letter Letter.sep G)
    (h : ∀ a, R.w a = CertC11.w0 a) :
    ∀ a, (R_n26 R).w a = w_n26 a := by
  intro a
  change (Realisation.multiSubst e_n26 (ch_n26 R) S_7b6c163f0dc4b608).w a = w_n26 a
  rw [w_multiSubst]
  have h0 : ∀ b, (ch_n26 R 0).w b = w_n25 b :=
    fun b => step_n25 R h b
  have h1 : ∀ b, (ch_n26 R 1).w b = w_n11 b :=
    fun b => step_n11 R h b
  have h2 : ∀ b, (ch_n26 R 2).w b = w_n4 b :=
    fun b => step_n4 R h b
  simp only [Fin.prod_univ_three, h0, h1, h2]
  cases a <;> native_decide

def e_n27 : Fin 2 → Nat := (Fin.cases (1) (fun _ => 1))

def ch_n27 (R : Realisation Letter Letter.sep G) :
    (i : Fin 2) → Realisation Letter Letter.sep (strongPower G (e_n27 i)) :=
  (Fin.cases (R_v R) (fun _ => R_v R))

def R_n27 (R : Realisation Letter Letter.sep G) :
    Realisation Letter Letter.sep (strongPower G 2) :=
  Realisation.multiSubst e_n27 (ch_n27 R) S_cd41b86686c50a10

def w_n27 : Letter → Nat
  | .B => 21043
  | .N => 20173
  | .A => 852
  | .D => 879
  | .O => 0
  | .H => 870
  | .V => 861

theorem step_n27 (R : Realisation Letter Letter.sep G)
    (h : ∀ a, R.w a = CertC11.w0 a) :
    ∀ a, (R_n27 R).w a = w_n27 a := by
  intro a
  change (Realisation.multiSubst e_n27 (ch_n27 R) S_cd41b86686c50a10).w a = w_n27 a
  rw [w_multiSubst]
  have h0 : ∀ b, (ch_n27 R 0).w b = w_v b :=
    fun b => step_v R h b
  have h1 : ∀ b, (ch_n27 R 1).w b = w_v b :=
    fun b => step_v R h b
  simp only [Fin.prod_univ_two, h0, h1]
  cases a <;> native_decide

def e_n28 : Fin 3 → Nat := (Fin.cases (1) (Fin.cases (1) (fun _ => 2)))

def ch_n28 (R : Realisation Letter Letter.sep G) :
    (i : Fin 3) → Realisation Letter Letter.sep (strongPower G (e_n28 i)) :=
  (Fin.cases (R_v R) (Fin.cases (R_v R) (fun _ => R_n27 R)))

def R_n28 (R : Realisation Letter Letter.sep G) :
    Realisation Letter Letter.sep (strongPower G 4) :=
  Realisation.multiSubst e_n28 (ch_n28 R) S_e620baced0654ce9

def w_n28 : Letter → Nat
  | .B => 444337309
  | .N => 407761396
  | .A => 37676271
  | .D => 34367124
  | .O => 0
  | .H => 35467563
  | .V => 36568002

theorem step_n28 (R : Realisation Letter Letter.sep G)
    (h : ∀ a, R.w a = CertC11.w0 a) :
    ∀ a, (R_n28 R).w a = w_n28 a := by
  intro a
  change (Realisation.multiSubst e_n28 (ch_n28 R) S_e620baced0654ce9).w a = w_n28 a
  rw [w_multiSubst]
  have h0 : ∀ b, (ch_n28 R 0).w b = w_v b :=
    fun b => step_v R h b
  have h1 : ∀ b, (ch_n28 R 1).w b = w_v b :=
    fun b => step_v R h b
  have h2 : ∀ b, (ch_n28 R 2).w b = w_n27 b :=
    fun b => step_n27 R h b
  simp only [Fin.prod_univ_three, h0, h1, h2]
  cases a <;> native_decide

def e_n29 : Fin 3 → Nat := (Fin.cases (1) (Fin.cases (4) (fun _ => 1)))

def ch_n29 (R : Realisation Letter Letter.sep G) :
    (i : Fin 3) → Realisation Letter Letter.sep (strongPower G (e_n29 i)) :=
  (Fin.cases (R_v R) (Fin.cases (R_n28 R) (fun _ => R_v R)))

def R_n29 (R : Realisation Letter Letter.sep G) :
    Realisation Letter Letter.sep (strongPower G 6) :=
  Realisation.multiSubst e_n29 (ch_n29 R) S_31d500a381a04d9a

def w_n29 : Letter → Nat
  | .B => 9413851747411
  | .N => 8259862493710
  | .A => 1210523865282
  | .D => 1040391397728
  | .O => 0
  | .H => 1096941023064
  | .V => 1153487243808

theorem step_n29 (R : Realisation Letter Letter.sep G)
    (h : ∀ a, R.w a = CertC11.w0 a) :
    ∀ a, (R_n29 R).w a = w_n29 a := by
  intro a
  change (Realisation.multiSubst e_n29 (ch_n29 R) S_31d500a381a04d9a).w a = w_n29 a
  rw [w_multiSubst]
  have h0 : ∀ b, (ch_n29 R 0).w b = w_v b :=
    fun b => step_v R h b
  have h1 : ∀ b, (ch_n29 R 1).w b = w_n28 b :=
    fun b => step_n28 R h b
  have h2 : ∀ b, (ch_n29 R 2).w b = w_v b :=
    fun b => step_v R h b
  simp only [Fin.prod_univ_three, h0, h1, h2]
  cases a <;> native_decide

def e_n30 : Fin 3 → Nat := (Fin.cases (12) (Fin.cases (10) (fun _ => 6)))

def ch_n30 (R : Realisation Letter Letter.sep G) :
    (i : Fin 3) → Realisation Letter Letter.sep (strongPower G (e_n30 i)) :=
  (Fin.cases (R_n24 R) (Fin.cases (R_n26 R) (fun _ => R_n29 R)))

def R_n30 (R : Realisation Letter Letter.sep G) :
    Realisation Letter Letter.sep (strongPower G 28) :=
  Realisation.multiSubst e_n30 (ch_n30 R) S_660b0244997e1b9c

def w_n30 : Letter → Nat
  | .B => 4404316027802394413681710182016855220017570805322532866522532
  | .N => 2373621977115656557708933032207800796539969479185208364762308
  | .A => 2418976328991169008574426349388947362833032233567674047413230
  | .D => 1139525965507253805043545349351249876665291355874243904590760
  | .O => 0
  | .H => 1533498474795507007111086683468271683304573128506388338634682
  | .V => 1930374672433685766411991523622490922915127429983953877195124

theorem step_n30 (R : Realisation Letter Letter.sep G)
    (h : ∀ a, R.w a = CertC11.w0 a) :
    ∀ a, (R_n30 R).w a = w_n30 a := by
  intro a
  change (Realisation.multiSubst e_n30 (ch_n30 R) S_660b0244997e1b9c).w a = w_n30 a
  rw [w_multiSubst]
  have h0 : ∀ b, (ch_n30 R 0).w b = w_n24 b :=
    fun b => step_n24 R h b
  have h1 : ∀ b, (ch_n30 R 1).w b = w_n26 b :=
    fun b => step_n26 R h b
  have h2 : ∀ b, (ch_n30 R 2).w b = w_n29 b :=
    fun b => step_n29 R h b
  simp only [Fin.prod_univ_three, h0, h1, h2]
  cases a <;> native_decide

def e_n31 : Fin 4 → Nat := (Fin.cases (26) (Fin.cases (10) (Fin.cases (7) (fun _ => 28))))

def ch_n31 (R : Realisation Letter Letter.sep G) :
    (i : Fin 4) → Realisation Letter Letter.sep (strongPower G (e_n31 i)) :=
  (Fin.cases (R_n10 R) (Fin.cases (R_n15 R) (Fin.cases (R_n19 R) (fun _ => R_n30 R))))

theorem terminal_value (R : Realisation Letter Letter.sep G)
    (h : ∀ a, R.w a = CertC11.w0 a) :
    (∑ x ∈ S_cfb0e1863855bcb0.C, ∏ i, (ch_n31 R i).w (x i)) = N := by
  have h0 : ∀ b, (ch_n31 R 0).w b = w_n10 b :=
    fun b => step_n10 R h b
  have h1 : ∀ b, (ch_n31 R 1).w b = w_n15 b :=
    fun b => step_n15 R h b
  have h2 : ∀ b, (ch_n31 R 2).w b = w_n19 b :=
    fun b => step_n19 R h b
  have h3 : ∀ b, (ch_n31 R 3).w b = w_n30 b :=
    fun b => step_n30 R h b
  simp only [Fin.prod_univ_four, h0, h1, h2, h3]
  native_decide

def codeBase (R : Realisation Letter Letter.sep G) : Finset (Fin 71 → α) :=
  (multiCodeSet e_n31 (ch_n31 R) S_cfb0e1863855bcb0).image
    (strongPower_sum_iso G e_n31).symm

theorem independent_codeBase (R : Realisation Letter Letter.sep G) :
    (strongPower G 71).IsIndepSet ↑(codeBase R) :=
  isIndepSet_image_symm (strongPower_sum_iso G e_n31)
    (isIndepSet_multiCodeSet e_n31 (ch_n31 R) S_cfb0e1863855bcb0)

theorem card_codeBase (R : Realisation Letter Letter.sep G)
    (h : ∀ a, R.w a = CertC11.w0 a) : (codeBase R).card = N := by
  calc
    (codeBase R).card = (multiCodeSet e_n31 (ch_n31 R) S_cfb0e1863855bcb0).card :=
      Finset.card_image_of_injective _ (strongPower_sum_iso G e_n31).symm.injective
    _ = ∑ x ∈ S_cfb0e1863855bcb0.C, ∏ i, (ch_n31 R i).w (x i) :=
      card_multiCodeSet e_n31 (ch_n31 R) S_cfb0e1863855bcb0
    _ = N := terminal_value R h

end Generic

def isoPhysical : strongPower BaseC11.Cyc11 213 ≃g strongPower BaseC11.G3 71 :=
  (strongPower_mul_iso BaseC11.Cyc11 3 71).trans
    (strongPower_congr CapC11.G3_iso 71).symm

def code : Finset (Fin 213 → Fin 11) :=
  (codeBase BaseC11.base.toRealisation).image isoPhysical.symm

theorem card_code : code.card = N := by
  calc
    code.card = (codeBase BaseC11.base.toRealisation).card :=
      Finset.card_image_of_injective _ isoPhysical.symm.injective
    _ = N := card_codeBase BaseC11.base.toRealisation CapCertC11.base_fam_card

theorem independent_code_Cyc :
    (strongPower BaseC11.Cyc11 213).IsIndepSet ↑code :=
  isIndepSet_image_symm isoPhysical
    (independent_codeBase BaseC11.base.toRealisation)

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

theorem decimal_lower_integer : 5295514953483263 ^ 213 ≤
    N * (1000000000000000 : Nat) ^ 213 := by native_decide

theorem decimal_upper_integer : N * (1000000000000000 : Nat) ^ 213 <
    5295514953483264 ^ 213 := by native_decide

theorem root_bracket :
    (5295514953483263 : ℝ) / 1000000000000000 ≤ (N : ℝ) ^ ((1 : ℝ) / (213 : ℕ)) ∧
    (N : ℝ) ^ ((1 : ℝ) / (213 : ℕ)) < (5295514953483264 : ℝ) / 1000000000000000 := by
  constructor
  · exact Decimal.decimal_le (by norm_num) (by norm_num) decimal_lower_integer le_rfl
  · exact C11R5Common.root_lt_decimal (by norm_num) (by norm_num) decimal_upper_integer

theorem capacity_lower : (5.295514953483263 : ℝ) ≤
    shannonCapacity (SimpleGraph.cycleGraph 11) := by
  rw [show (5.295514953483263 : ℝ) =
    (5295514953483263 : ℝ) / 1000000000000000 by norm_num]
  exact root_bracket.1.trans capacity_root

theorem cross_power_BPZ_207 : C11R5History.BPZ_207 ^ 213 < N ^ 207 := by native_decide

theorem strict_root_BPZ_207 :
    (C11R5History.BPZ_207 : ℝ) ^ ((1 : ℝ) / (207 : ℕ)) <
    (N : ℝ) ^ ((1 : ℝ) / (213 : ℕ)) :=
  C11R5Common.root_lt_of_cross_power (by norm_num) (by norm_num) cross_power_BPZ_207

theorem cross_power_R3_207 : C11R5History.R3_207 ^ 213 < N ^ 207 := by native_decide

theorem strict_root_R3_207 :
    (C11R5History.R3_207 : ℝ) ^ ((1 : ℝ) / (207 : ℕ)) <
    (N : ℝ) ^ ((1 : ℝ) / (213 : ℕ)) :=
  C11R5Common.root_lt_of_cross_power (by norm_num) (by norm_num) cross_power_R3_207

theorem cross_power_R4_201 : C11R5History.R4_201 ^ 213 < N ^ 201 := by native_decide

theorem strict_root_R4_201 :
    (C11R5History.R4_201 : ℝ) ^ ((1 : ℝ) / (201 : ℕ)) <
    (N : ℝ) ^ ((1 : ℝ) / (213 : ℕ)) :=
  C11R5Common.root_lt_of_cross_power (by norm_num) (by norm_num) cross_power_R4_201

theorem cross_power_R4_210 : C11R5History.R4_210 ^ 213 < N ^ 210 := by native_decide

theorem strict_root_R4_210 :
    (C11R5History.R4_210 : ℝ) ^ ((1 : ℝ) / (210 : ℕ)) <
    (N : ℝ) ^ ((1 : ℝ) / (213 : ℕ)) :=
  C11R5Common.root_lt_of_cross_power (by norm_num) (by norm_num) cross_power_R4_210

end ShannonBounds.C11R5D213
