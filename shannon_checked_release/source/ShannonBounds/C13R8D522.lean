/- Copyright (c) 2026 Matthew Protti. Apache-2.0.
Frozen C13 R8 literal certificate. Exporter is untrusted; all mathematical
acceptance obligations below are proved in Lean. BPZ sources are unchanged. -/
import ShannonBounds.C13R8Tables
import ShannonBounds.CapCertC13

set_option autoImplicit false
set_option maxRecDepth 4000000
set_option maxHeartbeats 0
set_option synthInstance.maxSize 4000
set_option exponentiation.threshold 20000

namespace ShannonBounds.C13R8D522
open SimpleGraph
open C11R6Base (Ty typedSep)
open C13R8Tables

def N : Nat := 2296520760046177671269016219762581845035300301989793693950434078967856121219331644079823961654215868761567994845123235146387844131168723626738336411048745150267072127486335041217641086689531742900767281930283773656671394399395587955373737013991705820221965553928435109256249125264071030595813635132592862273008229715771522182506478718846045325751666889410917168900896498145167381703517151401483049658353402623180144640

section Generic
variable {α : Type*} [Fintype α] [DecidableEq α]
  {G : SimpleGraph α} [DecidableRel G.Adj]

def R_base (R : Realisation Ty typedSep G) : Realisation Ty typedSep (strongPower G 1) :=
  R.mapIso (strongPower_one_iso G).symm
def w_base : Ty → Nat := C13R8Base.w0
theorem step_base (R : Realisation Ty typedSep G) (h : ∀ a, R.w a = C13R8Base.w0 a)
    (a : Ty) : (R_base R).w a = w_base a := by
  rw [R_base, Realisation.w_mapIso]; exact h a

def e_a3 : Fin 3 → Nat := (Fin.cases (1) (Fin.cases (1) (fun _ => 1)))
def ch_a3 (R : Realisation Ty typedSep G) :
    (i : Fin 3) → Realisation Ty typedSep (strongPower G (e_a3 i)) :=
  (Fin.cases (R_base R) (Fin.cases (R_base R) (fun _ => R_base R)))
def R_a3 (R : Realisation Ty typedSep G) : Realisation Ty typedSep (strongPower G 3) :=
  Realisation.multiSubst e_a3 (ch_a3 R) S_a3
def w_a3 (a : Ty) : Nat :=
  match a.val with
  | 0 => 0
  | 1 => 196615276420472
  | 2 => 183322205820
  | 3 => 19530036676631
  | 4 => 0
  | 5 => 15829003646937
  | 6 => 0
  | 7 => 1014962089284
  | 8 => 0
  | 9 => 221663094285880
  | 10 => 0
  | 11 => 0
  | 12 => 0
  | 13 => 0
  | 14 => 0
  | 15 => 11696130496440
  | 16 => 0
  | 17 => 0
  | 18 => 0
  | 19 => 0
  | 20 => 0
  | 21 => 0
  | 22 => 0
  | 23 => 11135216676168
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
  | 47 => 11321840419344
  | 48 => 0
  | 49 => 0
  | 50 => 0
  | 51 => 0
  | 52 => 0
  | 53 => 0
  | 54 => 0
  | 55 => 11508464162520
  | 56 => 0
  | 57 => 0
  | _ => 0

theorem polynomial_a3 : ∀ a : Ty, (∑ x ∈ S_a3.T a, w_base (x 0) * w_base (x 1) * w_base (x 2)) = w_a3 a := by native_decide
theorem step_a3 (R : Realisation Ty typedSep G) (h : ∀ a, R.w a = C13R8Base.w0 a) :
    ∀ a, (R_a3 R).w a = w_a3 a := by
  intro a
  change (Realisation.multiSubst e_a3 (ch_a3 R) S_a3).w a = w_a3 a
  rw [w_multiSubst]
  have h0 : ∀ b, (ch_a3 R 0).w b = w_base b := fun b => step_base R h b
  have h1 : ∀ b, (ch_a3 R 1).w b = w_base b := fun b => step_base R h b
  have h2 : ∀ b, (ch_a3 R 2).w b = w_base b := fun b => step_base R h b
  simp only [Fin.prod_univ_three, h0, h1, h2]
  exact polynomial_a3 a

def e_a4 : Fin 2 → Nat := (Fin.cases (3) (fun _ => 1))
def ch_a4 (R : Realisation Ty typedSep G) :
    (i : Fin 2) → Realisation Ty typedSep (strongPower G (e_a4 i)) :=
  (Fin.cases (R_a3 R) (fun _ => R_base R))
def R_a4 (R : Realisation Ty typedSep G) : Realisation Ty typedSep (strongPower G 4) :=
  Realisation.multiSubst e_a4 (ch_a4 R) S_a4
def w_a4 (a : Ty) : Nat :=
  match a.val with
  | 0 => 0
  | 1 => 11430425709980560192
  | 2 => 22227562542238092
  | 3 => 1476355905757323019
  | 4 => 0
  | 5 => 1315168872663642763
  | 6 => 0
  | 7 => 122818660613242750
  | 8 => 0
  | 9 => 13422920406807701920
  | 10 => 0
  | 11 => 185888716701480
  | 12 => 0
  | 13 => 0
  | 14 => 0
  | 15 => 966851108403033048
  | 16 => 0
  | 17 => 0
  | 18 => 0
  | 19 => 0
  | 20 => 0
  | 21 => 0
  | 22 => 0
  | 23 => 898469256947398656
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
  | 47 => 921240712842247824
  | 48 => 0
  | 49 => 0
  | 50 => 0
  | 51 => 0
  | 52 => 0
  | 53 => 0
  | 54 => 0
  | 55 => 944201405212677456
  | 56 => 0
  | 57 => 0
  | _ => 0

theorem polynomial_a4 : ∀ a : Ty, (∑ x ∈ S_a4.T a, w_a3 (x 0) * w_base (x 1)) = w_a4 a := by native_decide
theorem step_a4 (R : Realisation Ty typedSep G) (h : ∀ a, R.w a = C13R8Base.w0 a) :
    ∀ a, (R_a4 R).w a = w_a4 a := by
  intro a
  change (Realisation.multiSubst e_a4 (ch_a4 R) S_a4).w a = w_a4 a
  rw [w_multiSubst]
  have h0 : ∀ b, (ch_a4 R 0).w b = w_a3 b := fun b => step_a3 R h b
  have h1 : ∀ b, (ch_a4 R 1).w b = w_base b := fun b => step_base R h b
  simp only [Fin.prod_univ_two, h0, h1]
  exact polynomial_a4 a

def e_a5 : Fin 2 → Nat := (Fin.cases (4) (fun _ => 1))
def ch_a5 (R : Realisation Ty typedSep G) :
    (i : Fin 2) → Realisation Ty typedSep (strongPower G (e_a5 i)) :=
  (Fin.cases (R_a4 R) (fun _ => R_base R))
def R_a5 (R : Realisation Ty typedSep G) : Realisation Ty typedSep (strongPower G 5) :=
  Realisation.multiSubst e_a5 (ch_a5 R) S_a5
def w_a5 (a : Ty) : Nat :=
  match a.val with
  | 0 => 0
  | 1 => 664519417566588582622832
  | 2 => 2237077525126960091628
  | 3 => 106482349837331747520215
  | 4 => 0
  | 5 => 100152717910309108963113
  | 6 => 0
  | 7 => 12300230210408505143844
  | 8 => 0
  | 9 => 813094105967758992375232
  | 10 => 0
  | 11 => 33785387555702368248
  | 12 => 0
  | 13 => 0
  | 14 => 0
  | 15 => 74910489729131598133800
  | 16 => 0
  | 17 => 0
  | 18 => 0
  | 19 => 0
  | 20 => 0
  | 21 => 0
  | 22 => 0
  | 23 => 67970028276334523232192
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
  | 47 => 70281884983706726888064
  | 48 => 0
  | 49 => 0
  | 50 => 0
  | 51 => 0
  | 52 => 0
  | 53 => 0
  | 54 => 0
  | 55 => 72628473018388115423712
  | 56 => 0
  | 57 => 0
  | _ => 0

theorem polynomial_a5 : ∀ a : Ty, (∑ x ∈ S_a5.T a, w_a4 (x 0) * w_base (x 1)) = w_a5 a := by native_decide
theorem step_a5 (R : Realisation Ty typedSep G) (h : ∀ a, R.w a = C13R8Base.w0 a) :
    ∀ a, (R_a5 R).w a = w_a5 a := by
  intro a
  change (Realisation.multiSubst e_a5 (ch_a5 R) S_a5).w a = w_a5 a
  rw [w_multiSubst]
  have h0 : ∀ b, (ch_a5 R 0).w b = w_a4 b := fun b => step_a4 R h b
  have h1 : ∀ b, (ch_a5 R 1).w b = w_base b := fun b => step_base R h b
  simp only [Fin.prod_univ_two, h0, h1]
  exact polynomial_a5 a

def e_a6 : Fin 2 → Nat := (Fin.cases (5) (fun _ => 1))
def ch_a6 (R : Realisation Ty typedSep G) :
    (i : Fin 2) → Realisation Ty typedSep (strongPower G (e_a6 i)) :=
  (Fin.cases (R_a5 R) (fun _ => R_base R))
def R_a6 (R : Realisation Ty typedSep G) : Realisation Ty typedSep (strongPower G 6) :=
  Realisation.multiSubst e_a6 (ch_a6 R) S_a6
def w_a6 (a : Ty) : Nat :=
  match a.val with
  | 0 => 0
  | 1 => 38632535118034175321562364624
  | 2 => 202378942588702264743694284
  | 3 => 7443269542069031755300803379
  | 4 => 0
  | 5 => 7244003908285283167337809123
  | 6 => 0
  | 7 => 1106943933912669475801682062
  | 8 => 0
  | 9 => 49269813094229675479395363136
  | 10 => 0
  | 11 => 4312480128373842216651288
  | 12 => 0
  | 13 => 0
  | 14 => 0
  | 15 => 5570624411446751581357758312
  | 16 => 0
  | 17 => 0
  | 18 => 0
  | 19 => 0
  | 20 => 0
  | 21 => 0
  | 22 => 0
  | 23 => 4936800074226098942862565632
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
  | 47 => 5147937860109010629514630272
  | 48 => 0
  | 49 => 0
  | 50 => 0
  | 51 => 0
  | 52 => 0
  | 53 => 0
  | 54 => 0
  | 55 => 5363556401023949547738049536
  | 56 => 0
  | 57 => 0
  | _ => 0

theorem polynomial_a6 : ∀ a : Ty, (∑ x ∈ S_a6.T a, w_a5 (x 0) * w_base (x 1)) = w_a6 a := by native_decide
theorem step_a6 (R : Realisation Ty typedSep G) (h : ∀ a, R.w a = C13R8Base.w0 a) :
    ∀ a, (R_a6 R).w a = w_a6 a := by
  intro a
  change (Realisation.multiSubst e_a6 (ch_a6 R) S_a6).w a = w_a6 a
  rw [w_multiSubst]
  have h0 : ∀ b, (ch_a6 R 0).w b = w_a5 b := fun b => step_a5 R h b
  have h1 : ∀ b, (ch_a6 R 1).w b = w_base b := fun b => step_base R h b
  simp only [Fin.prod_univ_two, h0, h1]
  exact polynomial_a6 a

def e_a7 : Fin 2 → Nat := (Fin.cases (6) (fun _ => 1))
def ch_a7 (R : Realisation Ty typedSep G) :
    (i : Fin 2) → Realisation Ty typedSep (strongPower G (e_a7 i)) :=
  (Fin.cases (R_a6 R) (fun _ => R_base R))
def R_a7 (R : Realisation Ty typedSep G) : Realisation Ty typedSep (strongPower G 7) :=
  Realisation.multiSubst e_a7 (ch_a7 R) S_a7
def w_a7 (a : Ty) : Nat :=
  match a.val with
  | 0 => 0
  | 1 => 2245945434476884987570357314186896
  | 2 => 17079235853279475335877211451436
  | 3 => 508828052593221611703731678376431
  | 4 => 0
  | 5 => 506421897262001095547216294170401
  | 6 => 0
  | 7 => 92949931061780021204041274883636
  | 8 => 0
  | 9 => 2986575217835141003033882711788672
  | 10 => 0
  | 11 => 466125920511818298241942230552
  | 12 => 0
  | 13 => 0
  | 14 => 0
  | 15 => 402667206644588289300858813589608
  | 16 => 0
  | 17 => 0
  | 18 => 0
  | 19 => 0
  | 20 => 0
  | 21 => 0
  | 22 => 0
  | 23 => 348645868568376329177177844087168
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
  | 47 => 366640135880014788821328894032256
  | 48 => 0
  | 49 => 0
  | 50 => 0
  | 51 => 0
  | 52 => 0
  | 53 => 0
  | 54 => 0
  | 55 => 385124135033088708093088588572288
  | 56 => 0
  | 57 => 0
  | _ => 0

theorem polynomial_a7 : ∀ a : Ty, (∑ x ∈ S_a7.T a, w_a6 (x 0) * w_base (x 1)) = w_a7 a := by native_decide
theorem step_a7 (R : Realisation Ty typedSep G) (h : ∀ a, R.w a = C13R8Base.w0 a) :
    ∀ a, (R_a7 R).w a = w_a7 a := by
  intro a
  change (Realisation.multiSubst e_a7 (ch_a7 R) S_a7).w a = w_a7 a
  rw [w_multiSubst]
  have h0 : ∀ b, (ch_a7 R 0).w b = w_a6 b := fun b => step_a6 R h b
  have h1 : ∀ b, (ch_a7 R 1).w b = w_base b := fun b => step_base R h b
  simp only [Fin.prod_univ_two, h0, h1]
  exact polynomial_a7 a

def e_a8 : Fin 2 → Nat := (Fin.cases (7) (fun _ => 1))
def ch_a8 (R : Realisation Ty typedSep G) :
    (i : Fin 2) → Realisation Ty typedSep (strongPower G (e_a8 i)) :=
  (Fin.cases (R_a7 R) (fun _ => R_base R))
def R_a8 (R : Realisation Ty typedSep G) : Realisation Ty typedSep (strongPower G 8) :=
  Realisation.multiSubst e_a8 (ch_a8 R) S_a8
def w_a8 (a : Ty) : Nat :=
  match a.val with
  | 0 => 0
  | 1 => 130570756430431584621144710146991165584
  | 2 => 1372422884027427257898085137462705804
  | 3 => 34211292986382022825504500784849095019
  | 4 => 0
  | 5 => 34557994288926284919248535815826647659
  | 6 => 0
  | 7 => 7434087014702762426872356239276717326
  | 8 => 0
  | 9 => 181102551028682712474661459995039875584
  | 10 => 0
  | 11 => 45519895598031418670813481244613208
  | 12 => 0
  | 13 => 0
  | 14 => 0
  | 15 => 28507317469872168371122311515995158696
  | 16 => 0
  | 17 => 0
  | 18 => 0
  | 19 => 0
  | 20 => 0
  | 21 => 0
  | 22 => 0
  | 23 => 24122159611008737644953970992715551744
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
  | 47 => 25582621869679822726209225315041973504
  | 48 => 0
  | 49 => 0
  | 50 => 0
  | 51 => 0
  | 52 => 0
  | 53 => 0
  | 54 => 0
  | 55 => 27091456659362652939995622182915289600
  | 56 => 0
  | 57 => 0
  | _ => 0

theorem polynomial_a8 : ∀ a : Ty, (∑ x ∈ S_a8.T a, w_a7 (x 0) * w_base (x 1)) = w_a8 a := by native_decide
theorem step_a8 (R : Realisation Ty typedSep G) (h : ∀ a, R.w a = C13R8Base.w0 a) :
    ∀ a, (R_a8 R).w a = w_a8 a := by
  intro a
  change (Realisation.multiSubst e_a8 (ch_a8 R) S_a8).w a = w_a8 a
  rw [w_multiSubst]
  have h0 : ∀ b, (ch_a8 R 0).w b = w_a7 b := fun b => step_a7 R h b
  have h1 : ∀ b, (ch_a8 R 1).w b = w_base b := fun b => step_base R h b
  simp only [Fin.prod_univ_two, h0, h1]
  exact polynomial_a8 a

def e_a9 : Fin 2 → Nat := (Fin.cases (8) (fun _ => 1))
def ch_a9 (R : Realisation Ty typedSep G) :
    (i : Fin 2) → Realisation Ty typedSep (strongPower G (e_a9 i)) :=
  (Fin.cases (R_a8 R) (fun _ => R_base R))
def R_a9 (R : Realisation Ty typedSep G) : Realisation Ty typedSep (strongPower G 9) :=
  Realisation.multiSubst e_a9 (ch_a9 R) S_a9
def w_a9 (a : Ty) : Nat :=
  match a.val with
  | 0 => 0
  | 1 => 7590907653013707007393401073975460440184336
  | 2 => 106334501837987087896409391632226209617644
  | 3 => 2270998980275136141910633671603078285409127
  | 4 => 0
  | 5 => 2316037903568304779541023922433776303122361
  | 6 => 0
  | 7 => 573476799771596193246269756350253341755876
  | 8 => 0
  | 9 => 10986019119425948252728817881367103681293824
  | 10 => 0
  | 11 => 4145681527875908131930215571648771995672
  | 12 => 0
  | 13 => 0
  | 14 => 0
  | 15 => 1986349297010891372802649863249589600894440
  | 16 => 0
  | 17 => 0
  | 18 => 0
  | 19 => 0
  | 20 => 0
  | 21 => 0
  | 22 => 0
  | 23 => 1643076887528334915444311873436246745457664
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
  | 47 => 1757378553678308245274793424915092475914240
  | 48 => 0
  | 49 => 0
  | 50 => 0
  | 51 => 0
  | 52 => 0
  | 53 => 0
  | 54 => 0
  | 55 => 1876136813176292568950453569108639950008832
  | 56 => 0
  | 57 => 0
  | _ => 0

theorem polynomial_a9 : ∀ a : Ty, (∑ x ∈ S_a9.T a, w_a8 (x 0) * w_base (x 1)) = w_a9 a := by native_decide
theorem step_a9 (R : Realisation Ty typedSep G) (h : ∀ a, R.w a = C13R8Base.w0 a) :
    ∀ a, (R_a9 R).w a = w_a9 a := by
  intro a
  change (Realisation.multiSubst e_a9 (ch_a9 R) S_a9).w a = w_a9 a
  rw [w_multiSubst]
  have h0 : ∀ b, (ch_a9 R 0).w b = w_a8 b := fun b => step_a8 R h b
  have h1 : ∀ b, (ch_a9 R 1).w b = w_base b := fun b => step_base R h b
  simp only [Fin.prod_univ_two, h0, h1]
  exact polynomial_a9 a

def e_b2 : Fin 2 → Nat := (Fin.cases (1) (fun _ => 1))
def ch_b2 (R : Realisation Ty typedSep G) :
    (i : Fin 2) → Realisation Ty typedSep (strongPower G (e_b2 i)) :=
  (Fin.cases (R_base R) (fun _ => R_base R))
def R_b2 (R : Realisation Ty typedSep G) : Realisation Ty typedSep (strongPower G 2) :=
  Realisation.multiSubst e_b2 (ch_b2 R) S_b2
def w_b2 (a : Ty) : Nat :=
  match a.val with
  | 0 => 0
  | 1 => 3379794496
  | 2 => 1028196
  | 3 => 200355415
  | 4 => 0
  | 5 => 199327219
  | 6 => 0
  | 7 => 5769322
  | 8 => 0
  | 9 => 3661520200
  | 10 => 0
  | 11 => 0
  | 12 => 0
  | 13 => 0
  | 14 => 0
  | 15 => 125782644
  | 16 => 0
  | 17 => 0
  | 18 => 0
  | 19 => 0
  | 20 => 0
  | 21 => 0
  | 22 => 0
  | 23 => 122698056
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
  | 47 => 123726252
  | 48 => 0
  | 49 => 0
  | 50 => 0
  | 51 => 0
  | 52 => 0
  | 53 => 0
  | 54 => 0
  | 55 => 124754448
  | 56 => 0
  | 57 => 0
  | _ => 0

theorem polynomial_b2 : ∀ a : Ty, (∑ x ∈ S_b2.T a, w_base (x 0) * w_base (x 1)) = w_b2 a := by native_decide
theorem step_b2 (R : Realisation Ty typedSep G) (h : ∀ a, R.w a = C13R8Base.w0 a) :
    ∀ a, (R_b2 R).w a = w_b2 a := by
  intro a
  change (Realisation.multiSubst e_b2 (ch_b2 R) S_b2).w a = w_b2 a
  rw [w_multiSubst]
  have h0 : ∀ b, (ch_b2 R 0).w b = w_base b := fun b => step_base R h b
  have h1 : ∀ b, (ch_b2 R 1).w b = w_base b := fun b => step_base R h b
  simp only [Fin.prod_univ_two, h0, h1]
  exact polynomial_b2 a

def e_b3 : Fin 2 → Nat := (Fin.cases (2) (fun _ => 1))
def ch_b3 (R : Realisation Ty typedSep G) :
    (i : Fin 2) → Realisation Ty typedSep (strongPower G (e_b3 i)) :=
  (Fin.cases (R_b2 R) (fun _ => R_base R))
def R_b3 (R : Realisation Ty typedSep G) : Realisation Ty typedSep (strongPower G 3) :=
  Realisation.multiSubst e_b3 (ch_b3 R) S_b3
def w_b3 (a : Ty) : Nat :=
  match a.val with
  | 0 => 0
  | 1 => 196487732819456
  | 2 => 185754917556
  | 3 => 17222725438451
  | 4 => 0
  | 5 => 18241674471969
  | 6 => 0
  | 7 => 1030543028736
  | 8 => 0
  | 9 => 221656838741416
  | 10 => 0
  | 11 => 1042590744
  | 12 => 0
  | 13 => 0
  | 14 => 0
  | 15 => 11699258268672
  | 16 => 0
  | 17 => 0
  | 18 => 0
  | 19 => 0
  | 20 => 0
  | 21 => 0
  | 22 => 0
  | 23 => 11136259266912
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
  | 47 => 11323925600832
  | 48 => 0
  | 49 => 0
  | 50 => 0
  | 51 => 0
  | 52 => 0
  | 53 => 0
  | 54 => 0
  | 55 => 11512634525496
  | 56 => 0
  | 57 => 0
  | _ => 0

theorem polynomial_b3 : ∀ a : Ty, (∑ x ∈ S_b3.T a, w_b2 (x 0) * w_base (x 1)) = w_b3 a := by native_decide
theorem step_b3 (R : Realisation Ty typedSep G) (h : ∀ a, R.w a = C13R8Base.w0 a) :
    ∀ a, (R_b3 R).w a = w_b3 a := by
  intro a
  change (Realisation.multiSubst e_b3 (ch_b3 R) S_b3).w a = w_b3 a
  rw [w_multiSubst]
  have h0 : ∀ b, (ch_b3 R 0).w b = w_b2 b := fun b => step_b2 R h b
  have h1 : ∀ b, (ch_b3 R 1).w b = w_base b := fun b => step_base R h b
  simp only [Fin.prod_univ_two, h0, h1]
  exact polynomial_b3 a

def e_b4 : Fin 2 → Nat := (Fin.cases (3) (fun _ => 1))
def ch_b4 (R : Realisation Ty typedSep G) :
    (i : Fin 2) → Realisation Ty typedSep (strongPower G (e_b4 i)) :=
  (Fin.cases (R_b3 R) (fun _ => R_base R))
def R_b4 (R : Realisation Ty typedSep G) : Realisation Ty typedSep (strongPower G 4) :=
  Realisation.multiSubst e_b4 (ch_b4 R) S_b4
def w_b4 (a : Ty) : Nat :=
  match a.val with
  | 0 => 0
  | 1 => 11423011892378908432
  | 2 => 22373748013287060
  | 3 => 1338522339376233895
  | 4 => 0
  | 5 => 1459679955257148859
  | 6 => 0
  | 7 => 123157518417669034
  | 8 => 0
  | 9 => 13422546162604598656
  | 10 => 0
  | 11 => 251434311595272
  | 12 => 0
  | 13 => 0
  | 14 => 0
  | 15 => 967038935295927624
  | 16 => 0
  | 17 => 0
  | 18 => 0
  | 19 => 0
  | 20 => 0
  | 21 => 0
  | 22 => 0
  | 23 => 898525992650505648
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
  | 47 => 921362641744577136
  | 48 => 0
  | 49 => 0
  | 50 => 0
  | 51 => 0
  | 52 => 0
  | 53 => 0
  | 54 => 0
  | 55 => 944453720513451408
  | 56 => 0
  | 57 => 0
  | _ => 0

theorem polynomial_b4 : ∀ a : Ty, (∑ x ∈ S_b4.T a, w_b3 (x 0) * w_base (x 1)) = w_b4 a := by native_decide
theorem step_b4 (R : Realisation Ty typedSep G) (h : ∀ a, R.w a = C13R8Base.w0 a) :
    ∀ a, (R_b4 R).w a = w_b4 a := by
  intro a
  change (Realisation.multiSubst e_b4 (ch_b4 R) S_b4).w a = w_b4 a
  rw [w_multiSubst]
  have h0 : ∀ b, (ch_b4 R 0).w b = w_b3 b := fun b => step_b3 R h b
  have h1 : ∀ b, (ch_b4 R 1).w b = w_base b := fun b => step_base R h b
  simp only [Fin.prod_univ_two, h0, h1]
  exact polynomial_b4 a

def e_b5 : Fin 2 → Nat := (Fin.cases (4) (fun _ => 1))
def ch_b5 (R : Realisation Ty typedSep G) :
    (i : Fin 2) → Realisation Ty typedSep (strongPower G (e_b5 i)) :=
  (Fin.cases (R_b4 R) (fun _ => R_base R))
def R_b5 (R : Realisation Ty typedSep G) : Realisation Ty typedSep (strongPower G 5) :=
  Realisation.multiSubst e_b5 (ch_b5 R) S_b5
def w_b5 (a : Ty) : Nat :=
  match a.val with
  | 0 => 0
  | 1 => 664088474329732178208560
  | 2 => 2245856041776278865492
  | 3 => 98248798566423076454363
  | 4 => 0
  | 5 => 108808878023585036570793
  | 6 => 0
  | 7 => 12284644143827870520888
  | 8 => 0
  | 9 => 813071720364685456101856
  | 10 => 0
  | 11 => 37899259205610225384
  | 12 => 0
  | 13 => 0
  | 14 => 0
  | 15 => 74921764001728445225112
  | 16 => 0
  | 17 => 0
  | 18 => 0
  | 19 => 0
  | 20 => 0
  | 21 => 0
  | 22 => 0
  | 23 => 67973081416221955752480
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
  | 47 => 70289006078440470135360
  | 48 => 0
  | 49 => 0
  | 50 => 0
  | 51 => 0
  | 52 => 0
  | 53 => 0
  | 54 => 0
  | 55 => 72643738598715541067616
  | 56 => 0
  | 57 => 0
  | _ => 0

theorem polynomial_b5 : ∀ a : Ty, (∑ x ∈ S_b5.T a, w_b4 (x 0) * w_base (x 1)) = w_b5 a := by native_decide
theorem step_b5 (R : Realisation Ty typedSep G) (h : ∀ a, R.w a = C13R8Base.w0 a) :
    ∀ a, (R_b5 R).w a = w_b5 a := by
  intro a
  change (Realisation.multiSubst e_b5 (ch_b5 R) S_b5).w a = w_b5 a
  rw [w_multiSubst]
  have h0 : ∀ b, (ch_b5 R 0).w b = w_b4 b := fun b => step_b4 R h b
  have h1 : ∀ b, (ch_b5 R 1).w b = w_base b := fun b => step_base R h b
  simp only [Fin.prod_univ_two, h0, h1]
  exact polynomial_b5 a

def e_b6 : Fin 2 → Nat := (Fin.cases (5) (fun _ => 1))
def ch_b6 (R : Realisation Ty typedSep G) :
    (i : Fin 2) → Realisation Ty typedSep (strongPower G (e_b6 i)) :=
  (Fin.cases (R_b5 R) (fun _ => R_base R))
def R_b6 (R : Realisation Ty typedSep G) : Realisation Ty typedSep (strongPower G 6) :=
  Realisation.multiSubst e_b6 (ch_b6 R) S_b6
def w_b6 (a : Ty) : Nat :=
  match a.val with
  | 0 => 0
  | 1 => 38607485973482144401101383536
  | 2 => 202905738440296531411670964
  | 3 => 6951452860612038860962366447
  | 4 => 0
  | 5 => 7762529110803956388354439075
  | 6 => 0
  | 7 => 1103844989160568622715783178
  | 8 => 0
  | 9 => 49268474324050786597301294656
  | 10 => 0
  | 11 => 4570279006818976625791656
  | 12 => 0
  | 13 => 0
  | 14 => 0
  | 15 => 5571300847322179130804472024
  | 16 => 0
  | 17 => 0
  | 18 => 0
  | 19 => 0
  | 20 => 0
  | 21 => 0
  | 22 => 0
  | 23 => 4936962096294051819423826944
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
  | 47 => 5148353222371135013334087744
  | 48 => 0
  | 49 => 0
  | 50 => 0
  | 51 => 0
  | 52 => 0
  | 53 => 0
  | 54 => 0
  | 55 => 5364480000251914913520002880
  | 56 => 0
  | 57 => 0
  | _ => 0

theorem polynomial_b6 : ∀ a : Ty, (∑ x ∈ S_b6.T a, w_b5 (x 0) * w_base (x 1)) = w_b6 a := by native_decide
theorem step_b6 (R : Realisation Ty typedSep G) (h : ∀ a, R.w a = C13R8Base.w0 a) :
    ∀ a, (R_b6 R).w a = w_b6 a := by
  intro a
  change (Realisation.multiSubst e_b6 (ch_b6 R) S_b6).w a = w_b6 a
  rw [w_multiSubst]
  have h0 : ∀ b, (ch_b6 R 0).w b = w_b5 b := fun b => step_b5 R h b
  have h1 : ∀ b, (ch_b6 R 1).w b = w_base b := fun b => step_base R h b
  simp only [Fin.prod_univ_two, h0, h1]
  exact polynomial_b6 a

def e_b7 : Fin 2 → Nat := (Fin.cases (6) (fun _ => 1))
def ch_b7 (R : Realisation Ty typedSep G) :
    (i : Fin 2) → Realisation Ty typedSep (strongPower G (e_b7 i)) :=
  (Fin.cases (R_b6 R) (fun _ => R_base R))
def R_b7 (R : Realisation Ty typedSep G) : Realisation Ty typedSep (strongPower G 7) :=
  Realisation.multiSubst e_b7 (ch_b7 R) S_b7
def w_b7 (a : Ty) : Nat :=
  match a.val with
  | 0 => 0
  | 1 => 2244489438817270861344728585988080
  | 2 => 17110827203774938719321815220564
  | 3 => 479451310298143944853037130441347
  | 4 => 0
  | 5 => 537484250427386669960972044298049
  | 6 => 0
  | 7 => 92633685998612137304200259035896
  | 8 => 0
  | 9 => 2986495166875818294790857216648832
  | 10 => 0
  | 11 => 482257439249022406665081128808
  | 12 => 0
  | 13 => 0
  | 14 => 0
  | 15 => 402707773465719622228095057684888
  | 16 => 0
  | 17 => 0
  | 18 => 0
  | 19 => 0
  | 20 => 0
  | 21 => 0
  | 22 => 0
  | 23 => 348654313714570220788443890547072
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
  | 47 => 366664329791970239089923254441088
  | 48 => 0
  | 49 => 0
  | 50 => 0
  | 51 => 0
  | 52 => 0
  | 53 => 0
  | 54 => 0
  | 55 => 385180014827568626333280774919680
  | 56 => 0
  | 57 => 0
  | _ => 0

theorem polynomial_b7 : ∀ a : Ty, (∑ x ∈ S_b7.T a, w_b6 (x 0) * w_base (x 1)) = w_b7 a := by native_decide
theorem step_b7 (R : Realisation Ty typedSep G) (h : ∀ a, R.w a = C13R8Base.w0 a) :
    ∀ a, (R_b7 R).w a = w_b7 a := by
  intro a
  change (Realisation.multiSubst e_b7 (ch_b7 R) S_b7).w a = w_b7 a
  rw [w_multiSubst]
  have h0 : ∀ b, (ch_b7 R 0).w b = w_b6 b := fun b => step_b6 R h b
  have h1 : ∀ b, (ch_b7 R 1).w b = w_base b := fun b => step_base R h b
  simp only [Fin.prod_univ_two, h0, h1]
  exact polynomial_b7 a

def e_b8 : Fin 2 → Nat := (Fin.cases (7) (fun _ => 1))
def ch_b8 (R : Realisation Ty typedSep G) :
    (i : Fin 2) → Realisation Ty typedSep (strongPower G (e_b8 i)) :=
  (Fin.cases (R_b7 R) (fun _ => R_base R))
def R_b8 (R : Realisation Ty typedSep G) : Realisation Ty typedSep (strongPower G 8) :=
  Realisation.multiSubst e_b8 (ch_b8 R) S_b8
def w_b8 (a : Ty) : Nat :=
  match a.val with
  | 0 => 0
  | 1 => 130486127024124257303857499467267630192
  | 2 => 1374316092602175723058063635627917556
  | 3 => 32456649964963499606221475913014812567
  | 4 => 0
  | 5 => 36418873471152369795548368239013290475
  | 6 => 0
  | 7 => 7407267358634928956897617639719974938
  | 8 => 0
  | 9 => 181097765277658396677096090102444721408
  | 10 => 0
  | 11 => 46527918374072141509443059088793512
  | 12 => 0
  | 13 => 0
  | 14 => 0
  | 15 => 28509749226503690779077055142874439512
  | 16 => 0
  | 17 => 0
  | 18 => 0
  | 19 => 0
  | 20 => 0
  | 21 => 0
  | 22 => 0
  | 23 => 24122589387571007249060361483560865792
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
  | 47 => 25584029010694920978773648137879885056
  | 48 => 0
  | 49 => 0
  | 50 => 0
  | 51 => 0
  | 52 => 0
  | 53 => 0
  | 54 => 0
  | 55 => 27094837521753849190873211547644213760
  | 56 => 0
  | 57 => 0
  | _ => 0

theorem polynomial_b8 : ∀ a : Ty, (∑ x ∈ S_b8.T a, w_b7 (x 0) * w_base (x 1)) = w_b8 a := by native_decide
theorem step_b8 (R : Realisation Ty typedSep G) (h : ∀ a, R.w a = C13R8Base.w0 a) :
    ∀ a, (R_b8 R).w a = w_b8 a := by
  intro a
  change (Realisation.multiSubst e_b8 (ch_b8 R) S_b8).w a = w_b8 a
  rw [w_multiSubst]
  have h0 : ∀ b, (ch_b8 R 0).w b = w_b7 b := fun b => step_b7 R h b
  have h1 : ∀ b, (ch_b8 R 1).w b = w_base b := fun b => step_base R h b
  simp only [Fin.prod_univ_two, h0, h1]
  exact polynomial_b8 a

def e_b9 : Fin 2 → Nat := (Fin.cases (8) (fun _ => 1))
def ch_b9 (R : Realisation Ty typedSep G) :
    (i : Fin 2) → Realisation Ty typedSep (strongPower G (e_b9 i)) :=
  (Fin.cases (R_b8 R) (fun _ => R_base R))
def R_b9 (R : Realisation Ty typedSep G) : Realisation Ty typedSep (strongPower G 9) :=
  Realisation.multiSubst e_b9 (ch_b9 R) S_b9
def w_b9 (a : Ty) : Nat :=
  match a.val with
  | 0 => 0
  | 1 => 7585988659983719131768550164290986985463280
  | 2 => 106447880775364998461022108854985395551380
  | 3 => 2166199505495342678486670919445945719233323
  | 4 => 0
  | 5 => 2427524024039633420211795444009252886574553
  | 6 => 0
  | 7 => 571395477668276189939508638538847729660536
  | 8 => 0
  | 9 => 10985733059853794367359142352554901252913152
  | 10 => 0
  | 11 => 4208588635366718888785200487516893464808
  | 12 => 0
  | 13 => 0
  | 14 => 0
  | 15 => 1986495001256321010387612944024473218107160
  | 16 => 0
  | 17 => 0
  | 18 => 0
  | 19 => 0
  | 20 => 0
  | 21 => 0
  | 22 => 0
  | 23 => 1643098037118366694813225425842278449655296
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
  | 47 => 1757460262613454373160815174213697956612608
  | 48 => 0
  | 49 => 0
  | 50 => 0
  | 51 => 0
  | 52 => 0
  | 53 => 0
  | 54 => 0
  | 55 => 1876341364396600050928808396140570604614656
  | 56 => 0
  | 57 => 0
  | _ => 0

theorem polynomial_b9 : ∀ a : Ty, (∑ x ∈ S_b9.T a, w_b8 (x 0) * w_base (x 1)) = w_b9 a := by native_decide
theorem step_b9 (R : Realisation Ty typedSep G) (h : ∀ a, R.w a = C13R8Base.w0 a) :
    ∀ a, (R_b9 R).w a = w_b9 a := by
  intro a
  change (Realisation.multiSubst e_b9 (ch_b9 R) S_b9).w a = w_b9 a
  rw [w_multiSubst]
  have h0 : ∀ b, (ch_b9 R 0).w b = w_b8 b := fun b => step_b8 R h b
  have h1 : ∀ b, (ch_b9 R 1).w b = w_base b := fun b => step_base R h b
  simp only [Fin.prod_univ_two, h0, h1]
  exact polynomial_b9 a

def e_b10 : Fin 2 → Nat := (Fin.cases (9) (fun _ => 1))
def ch_b10 (R : Realisation Ty typedSep G) :
    (i : Fin 2) → Realisation Ty typedSep (strongPower G (e_b10 i)) :=
  (Fin.cases (R_b9 R) (fun _ => R_base R))
def R_b10 (R : Realisation Ty typedSep G) : Realisation Ty typedSep (strongPower G 10) :=
  Realisation.multiSubst e_b10 (ch_b10 R) S_b10
def w_b10 (a : Ty) : Nat :=
  match a.val with
  | 0 => 0
  | 1 => 441023304245689757297449660544515161516866561392
  | 2 => 8016462633053973541729806529765934090359146804
  | 3 => 142979445192806208006571371466875608670682674751
  | 4 => 0
  | 5 => 159741656741167540911564402418752071736016544755
  | 6 => 0
  | 7 => 42869193125521802571767675517943843670332175146
  | 8 => 0
  | 9 => 666677395027424438171449098332811793576885497856
  | 10 => 0
  | 11 => 362566180723177334648758618274702279496912936
  | 12 => 0
  | 13 => 0
  | 14 => 0
  | 15 => 136685255293673699070945997153472311370373861336
  | 16 => 0
  | 17 => 0
  | 18 => 0
  | 19 => 0
  | 20 => 0
  | 21 => 0
  | 22 => 0
  | 23 => 110550250764427169258091935059800200631498654720
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
  | 47 => 119251458837621006707862876602420513369435129856
  | 48 => 0
  | 49 => 0
  | 50 => 0
  | 51 => 0
  | 52 => 0
  | 53 => 0
  | 54 => 0
  | 55 => 128346613401203038955823814229126700911934299136
  | 56 => 0
  | 57 => 0
  | _ => 0

theorem polynomial_b10 : ∀ a : Ty, (∑ x ∈ S_b10.T a, w_b9 (x 0) * w_base (x 1)) = w_b10 a := by native_decide
theorem step_b10 (R : Realisation Ty typedSep G) (h : ∀ a, R.w a = C13R8Base.w0 a) :
    ∀ a, (R_b10 R).w a = w_b10 a := by
  intro a
  change (Realisation.multiSubst e_b10 (ch_b10 R) S_b10).w a = w_b10 a
  rw [w_multiSubst]
  have h0 : ∀ b, (ch_b10 R 0).w b = w_b9 b := fun b => step_b9 R h b
  have h1 : ∀ b, (ch_b10 R 1).w b = w_base b := fun b => step_base R h b
  simp only [Fin.prod_univ_two, h0, h1]
  exact polynomial_b10 a

def e_b11 : Fin 2 → Nat := (Fin.cases (10) (fun _ => 1))
def ch_b11 (R : Realisation Ty typedSep G) :
    (i : Fin 2) → Realisation Ty typedSep (strongPower G (e_b11 i)) :=
  (Fin.cases (R_b10 R) (fun _ => R_base R))
def R_b11 (R : Realisation Ty typedSep G) : Realisation Ty typedSep (strongPower G 11) :=
  Realisation.multiSubst e_b11 (ch_b11 R) S_b11
def w_b11 (a : Ty) : Nat :=
  match a.val with
  | 0 => 0
  | 1 => 25639698457734673032061867306654863978055964282802416
  | 2 => 590336065575230049206680290296883733468895256772308
  | 3 => 9354022660527566539569464192740061542337607116800979
  | 4 => 0
  | 5 => 10403563018779083875805265242065284229062167540203953
  | 6 => 0
  | 7 => 3145907132826341777415565962797677144853434343215800
  | 8 => 0
  | 9 => 40474282244924271790924286429684330606829695356395520
  | 10 => 0
  | 11 => 30064672176030404272233217744038694481746401313128
  | 12 => 0
  | 13 => 0
  | 14 => 0
  | 15 => 9309598925737253075429661343045713559887612901189272
  | 16 => 0
  | 17 => 0
  | 18 => 0
  | 19 => 0
  | 20 => 0
  | 21 => 0
  | 22 => 0
  | 23 => 7364522150307180974758927640697502897293893502695424
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
  | 47 => 8011883620412902228946742102783971459121133343047680
  | 48 => 0
  | 49 => 0
  | 50 => 0
  | 51 => 0
  | 52 => 0
  | 53 => 0
  | 54 => 0
  | 55 => 8692302127807562225514080098703283692542119462150144
  | 56 => 0
  | 57 => 0
  | _ => 0

theorem polynomial_b11 : ∀ a : Ty, (∑ x ∈ S_b11.T a, w_b10 (x 0) * w_base (x 1)) = w_b11 a := by native_decide
theorem step_b11 (R : Realisation Ty typedSep G) (h : ∀ a, R.w a = C13R8Base.w0 a) :
    ∀ a, (R_b11 R).w a = w_b11 a := by
  intro a
  change (Realisation.multiSubst e_b11 (ch_b11 R) S_b11).w a = w_b11 a
  rw [w_multiSubst]
  have h0 : ∀ b, (ch_b11 R 0).w b = w_b10 b := fun b => step_b10 R h b
  have h1 : ∀ b, (ch_b11 R 1).w b = w_base b := fun b => step_base R h b
  simp only [Fin.prod_univ_two, h0, h1]
  exact polynomial_b11 a

def e_b12 : Fin 2 → Nat := (Fin.cases (11) (fun _ => 1))
def ch_b12 (R : Realisation Ty typedSep G) :
    (i : Fin 2) → Realisation Ty typedSep (strongPower G (e_b12 i)) :=
  (Fin.cases (R_b11 R) (fun _ => R_base R))
def R_b12 (R : Realisation Ty typedSep G) : Realisation Ty typedSep (strongPower G 12) :=
  Realisation.multiSubst e_b12 (ch_b12 R) S_b12
def w_b12 (a : Ty) : Nat :=
  match a.val with
  | 0 => 0
  | 1 => 1490619995116449446221880762222479627464466030395932768368
  | 2 => 42685304124432980553928478705908460825409892344998738292
  | 3 => 607568279269909402012822520781226159952102465205284121319
  | 4 => 0
  | 5 => 671825962744579894295539899520778119457790779176265851579
  | 6 => 0
  | 7 => 226736570660428973551655398134946978962413035516046385274
  | 8 => 0
  | 9 => 2458245443270692361342918898653402179160340758785379184640
  | 10 => 0
  | 11 => 2417573566487474789174227954310869199272080562613990568
  | 12 => 0
  | 13 => 0
  | 14 => 0
  | 15 => 628753769970609447712722293406821656713243574603092212568
  | 16 => 0
  | 17 => 0
  | 18 => 0
  | 19 => 0
  | 20 => 0
  | 21 => 0
  | 22 => 0
  | 23 => 486609241334238274930861866557180231527400455791463600128
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
  | 47 => 533899954989673305111885013634558699514620949822306140160
  | 48 => 0
  | 49 => 0
  | 50 => 0
  | 51 => 0
  | 52 => 0
  | 53 => 0
  | 54 => 0
  | 55 => 583880629881661892320873374283754057925295161134863663104
  | 56 => 0
  | 57 => 0
  | _ => 0

theorem polynomial_b12 : ∀ a : Ty, (∑ x ∈ S_b12.T a, w_b11 (x 0) * w_base (x 1)) = w_b12 a := by native_decide
theorem step_b12 (R : Realisation Ty typedSep G) (h : ∀ a, R.w a = C13R8Base.w0 a) :
    ∀ a, (R_b12 R).w a = w_b12 a := by
  intro a
  change (Realisation.multiSubst e_b12 (ch_b12 R) S_b12).w a = w_b12 a
  rw [w_multiSubst]
  have h0 : ∀ b, (ch_b12 R 0).w b = w_b11 b := fun b => step_b11 R h b
  have h1 : ∀ b, (ch_b12 R 1).w b = w_base b := fun b => step_base R h b
  simp only [Fin.prod_univ_two, h0, h1]
  exact polynomial_b12 a

def e_b13 : Fin 2 → Nat := (Fin.cases (12) (fun _ => 1))
def ch_b13 (R : Realisation Ty typedSep G) :
    (i : Fin 2) → Realisation Ty typedSep (strongPower G (e_b13 i)) :=
  (Fin.cases (R_b12 R) (fun _ => R_base R))
def R_b13 (R : Realisation Ty typedSep G) : Realisation Ty typedSep (strongPower G 13) :=
  Realisation.multiSubst e_b13 (ch_b13 R) S_b13
def w_b13 (a : Ty) : Nat :=
  match a.val with
  | 0 => 0
  | 1 => 86661135455686323304991482659711746843642259032788438008278000
  | 2 => 3039898958864215931685605186847361802230262009798133820815636
  | 3 => 39229842152094623694412887209014801526217695573500736724244091
  | 4 => 0
  | 5 => 43077261205782550278787392608720672904326600147186108781878217
  | 6 => 0
  | 7 => 16099243601244216334568986724972801308898058550748832978299064
  | 8 => 0
  | 9 => 149368773551110045525386202278988327024834227462371037519069184
  | 10 => 0
  | 11 => 189550934301800241976302617099507387571325049037100377973224
  | 12 => 0
  | 13 => 0
  | 14 => 0
  | 15 => 42165042639275182439215428890700894162208183228837219424017944
  | 16 => 0
  | 17 => 0
  | 18 => 0
  | 19 => 0
  | 20 => 0
  | 21 => 0
  | 22 => 0
  | 23 => 31933493198680566164268724413677068177539367905703505228169216
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
  | 47 => 35336050510621225091664438261978062769010007878677359011307520
  | 48 => 0
  | 49 => 0
  | 50 => 0
  | 51 => 0
  | 52 => 0
  | 53 => 0
  | 54 => 0
  | 55 => 38952036261636323753796017659499406958308868304900466018852864
  | 56 => 0
  | 57 => 0
  | _ => 0

theorem polynomial_b13 : ∀ a : Ty, (∑ x ∈ S_b13.T a, w_b12 (x 0) * w_base (x 1)) = w_b13 a := by native_decide
theorem step_b13 (R : Realisation Ty typedSep G) (h : ∀ a, R.w a = C13R8Base.w0 a) :
    ∀ a, (R_b13 R).w a = w_b13 a := by
  intro a
  change (Realisation.multiSubst e_b13 (ch_b13 R) S_b13).w a = w_b13 a
  rw [w_multiSubst]
  have h0 : ∀ b, (ch_b13 R 0).w b = w_b12 b := fun b => step_b12 R h b
  have h1 : ∀ b, (ch_b13 R 1).w b = w_base b := fun b => step_base R h b
  simp only [Fin.prod_univ_two, h0, h1]
  exact polynomial_b13 a

def e_b14 : Fin 2 → Nat := (Fin.cases (13) (fun _ => 1))
def ch_b14 (R : Realisation Ty typedSep G) :
    (i : Fin 2) → Realisation Ty typedSep (strongPower G (e_b14 i)) :=
  (Fin.cases (R_b13 R) (fun _ => R_base R))
def R_b14 (R : Realisation Ty typedSep G) : Realisation Ty typedSep (strongPower G 14) :=
  Realisation.multiSubst e_b14 (ch_b14 R) S_b14
def w_b14 (a : Ty) : Nat :=
  match a.val with
  | 0 => 0
  | 1 => 5038323975499162117104348806758741014992983694729912251832514657136
  | 2 => 213731814292424623927136635187221610167675659774910623649761981876
  | 3 => 2520552805696361475894849642291137533869574095687460336237671037327
  | 4 => 0
  | 5 => 2745523336853044978999828785824600908277405335372384302626172430915
  | 6 => 0
  | 7 => 1128809860228878376459294968852849504842892424702873150520651754250
  | 8 => 0
  | 9 => 9080057095272867034815644426032261368827996851322137072257942814720
  | 10 => 0
  | 11 => 14550668171415833194779464599217620830301793794777954762443053352
  | 12 => 0
  | 13 => 0
  | 14 => 0
  | 15 => 2810605763802803435917668926898640347288917411119145130560011200216
  | 16 => 0
  | 17 => 0
  | 18 => 0
  | 19 => 0
  | 20 => 0
  | 21 => 0
  | 22 => 0
  | 23 => 2083500141887397200233327973587184142480668743677717705359030059008
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
  | 47 => 2325192419592200868901571193234736672901601551311560648983929552896
  | 48 => 0
  | 49 => 0
  | 50 => 0
  | 51 => 0
  | 52 => 0
  | 53 => 0
  | 54 => 0
  | 55 => 2583464154269415600444205171850305437698286397280080141697554759680
  | 56 => 0
  | 57 => 0
  | _ => 0

theorem polynomial_b14 : ∀ a : Ty, (∑ x ∈ S_b14.T a, w_b13 (x 0) * w_base (x 1)) = w_b14 a := by native_decide
theorem step_b14 (R : Realisation Ty typedSep G) (h : ∀ a, R.w a = C13R8Base.w0 a) :
    ∀ a, (R_b14 R).w a = w_b14 a := by
  intro a
  change (Realisation.multiSubst e_b14 (ch_b14 R) S_b14).w a = w_b14 a
  rw [w_multiSubst]
  have h0 : ∀ b, (ch_b14 R 0).w b = w_b13 b := fun b => step_b13 R h b
  have h1 : ∀ b, (ch_b14 R 1).w b = w_base b := fun b => step_base R h b
  simp only [Fin.prod_univ_two, h0, h1]
  exact polynomial_b14 a

def e_b15 : Fin 2 → Nat := (Fin.cases (14) (fun _ => 1))
def ch_b15 (R : Realisation Ty typedSep G) :
    (i : Fin 2) → Realisation Ty typedSep (strongPower G (e_b15 i)) :=
  (Fin.cases (R_b14 R) (fun _ => R_base R))
def R_b15 (R : Realisation Ty typedSep G) : Realisation Ty typedSep (strongPower G 15) :=
  Realisation.multiSubst e_b15 (ch_b15 R) S_b15
def w_b15 (a : Ty) : Nat :=
  match a.val with
  | 0 => 0
  | 1 => 292922757017145104494837928606829774315154026095726083518664189363357424
  | 2 => 14863267989116996550657784810581484318248424941281048828307907032610644
  | 3 => 161279191183427722207475822941930703227314181332507389825720754748647203
  | 4 => 0
  | 5 => 174083916864951375890791712437311431038974889784169103112213859740361249
  | 6 => 0
  | 7 => 78301516022982699603017254372210332796868842157006330016788652040255608
  | 8 => 0
  | 9 => 552226323000220859679296141732782705316504353772474655154267024789307392
  | 10 => 0
  | 11 => 1097068585399519308612663715261707208184942247183415191418188263524968
  | 12 => 0
  | 13 => 0
  | 14 => 0
  | 15 => 186372846635873552865514562739274664293426157248661252567851222659560856
  | 16 => 0
  | 17 => 0
  | 18 => 0
  | 19 => 0
  | 20 => 0
  | 21 => 0
  | 22 => 0
  | 23 => 135263103479077992581819872505968528016357009137229923600901590644228096
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
  | 47 => 152243714778240515824652116971024774198206509837722611874164964390076416
  | 48 => 0
  | 49 => 0
  | 50 => 0
  | 51 => 0
  | 52 => 0
  | 53 => 0
  | 54 => 0
  | 55 => 170489303922110548931294981989480125319761598795351979486006037177237504
  | 56 => 0
  | 57 => 0
  | _ => 0

theorem polynomial_b15 : ∀ a : Ty, (∑ x ∈ S_b15.T a, w_b14 (x 0) * w_base (x 1)) = w_b15 a := by native_decide
theorem step_b15 (R : Realisation Ty typedSep G) (h : ∀ a, R.w a = C13R8Base.w0 a) :
    ∀ a, (R_b15 R).w a = w_b15 a := by
  intro a
  change (Realisation.multiSubst e_b15 (ch_b15 R) S_b15).w a = w_b15 a
  rw [w_multiSubst]
  have h0 : ∀ b, (ch_b15 R 0).w b = w_b14 b := fun b => step_b14 R h b
  have h1 : ∀ b, (ch_b15 R 1).w b = w_base b := fun b => step_base R h b
  simp only [Fin.prod_univ_two, h0, h1]
  exact polynomial_b15 a

def e_b16 : Fin 2 → Nat := (Fin.cases (15) (fun _ => 1))
def ch_b16 (R : Realisation Ty typedSep G) :
    (i : Fin 2) → Realisation Ty typedSep (strongPower G (e_b16 i)) :=
  (Fin.cases (R_b15 R) (fun _ => R_base R))
def R_b16 (R : Realisation Ty typedSep G) : Realisation Ty typedSep (strongPower G 16) :=
  Realisation.multiSubst e_b16 (ch_b16 R) S_b16
def w_b16 (a : Ty) : Nat :=
  match a.val with
  | 0 => 0
  | 1 => 17030469829494342907490831058493931130694893992539775574445159355727361519216
  | 2 => 1023854765354537747700556819165911697382332293987154672481679022757700478452
  | 3 => 10283581103533369606861338247238243538106389334860976707740536837012130726455
  | 4 => 0
  | 5 => 10988707997607630545823952496956595855635169847113180130478467243149454584971
  | 6 => 0
  | 7 => 5381395713631386927092801169427090696242041564589253840832462882651188591834
  | 8 => 0
  | 9 => 33600891488193733347501340174741719117761780066831048079251362716478684856320
  | 10 => 0
  | 11 => 81446197294806351712050373898693434608309278729549969423087444050854806952
  | 12 => 0
  | 13 => 0
  | 14 => 0
  | 15 => 12302442512692172875390528973725278866321301940822721783754273888234835212888
  | 16 => 0
  | 17 => 0
  | 18 => 0
  | 19 => 0
  | 20 => 0
  | 21 => 0
  | 22 => 0
  | 23 => 8743645778213400658900072214073149545236567181545974138028174800293445959680
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
  | 47 => 9925381849820467523184105915306601672767807073902633492377558712556298502144
  | 48 => 0
  | 49 => 0
  | 50 => 0
  | 51 => 0
  | 52 => 0
  | 53 => 0
  | 54 => 0
  | 55 => 11202152638379912362818545646390520173398371327195612398827977420022837477376
  | 56 => 0
  | 57 => 0
  | _ => 0

theorem polynomial_b16 : ∀ a : Ty, (∑ x ∈ S_b16.T a, w_b15 (x 0) * w_base (x 1)) = w_b16 a := by native_decide
theorem step_b16 (R : Realisation Ty typedSep G) (h : ∀ a, R.w a = C13R8Base.w0 a) :
    ∀ a, (R_b16 R).w a = w_b16 a := by
  intro a
  change (Realisation.multiSubst e_b16 (ch_b16 R) S_b16).w a = w_b16 a
  rw [w_multiSubst]
  have h0 : ∀ b, (ch_b16 R 0).w b = w_b15 b := fun b => step_b15 R h b
  have h1 : ∀ b, (ch_b16 R 1).w b = w_base b := fun b => step_base R h b
  simp only [Fin.prod_univ_two, h0, h1]
  exact polynomial_b16 a

def e_b17 : Fin 2 → Nat := (Fin.cases (16) (fun _ => 1))
def ch_b17 (R : Realisation Ty typedSep G) :
    (i : Fin 2) → Realisation Ty typedSep (strongPower G (e_b17 i)) :=
  (Fin.cases (R_b16 R) (fun _ => R_base R))
def R_b17 (R : Realisation Ty typedSep G) : Realisation Ty typedSep (strongPower G 17) :=
  Realisation.multiSubst e_b17 (ch_b17 R) S_b17
def w_b17 (a : Ty) : Nat :=
  match a.val with
  | 0 => 0
  | 1 => 990165980451540052910522973495736455356771182758924156464938794972833456055390704
  | 2 => 69946160555864046682696791386050967769607676784479304072200094708153691646126484
  | 3 => 653768965220815075167441741361648026618483358214970646527278568491670687714164171
  | 4 => 0
  | 5 => 690927179729499778061733484992651186330793822909686684720949193495048692889557689
  | 6 => 0
  | 7 => 366872940855578138366394216287963788303786299998238241950797193346006388859481080
  | 8 => 0
  | 9 => 2045478399970624051926808098710714197975965843380038074448587791463331080857190400
  | 10 => 0
  | 11 => 5965846560799875167450836336252984641817612927798207087932059069041125815360232
  | 12 => 0
  | 13 => 0
  | 14 => 0
  | 15 => 808843149306613926917991150372562466342635231336970912970118796224384408773715224
  | 16 => 0
  | 17 => 0
  | 18 => 0
  | 19 => 0
  | 20 => 0
  | 21 => 0
  | 22 => 0
  | 23 => 563079360842495612279138528033041796971313232605661210051341513561863453896867840
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
  | 47 => 644641093842584325770559818423189011687394864945961084669458783556122645102198784
  | 48 => 0
  | 49 => 0
  | 50 => 0
  | 51 => 0
  | 52 => 0
  | 53 => 0
  | 54 => 0
  | 55 => 733247262867325088594020696318668236268371211924469245439933585299166343383744512
  | 56 => 0
  | 57 => 0
  | _ => 0

theorem polynomial_b17 : ∀ a : Ty, (∑ x ∈ S_b17.T a, w_b16 (x 0) * w_base (x 1)) = w_b17 a := by native_decide
theorem step_b17 (R : Realisation Ty typedSep G) (h : ∀ a, R.w a = C13R8Base.w0 a) :
    ∀ a, (R_b17 R).w a = w_b17 a := by
  intro a
  change (Realisation.multiSubst e_b17 (ch_b17 R) S_b17).w a = w_b17 a
  rw [w_multiSubst]
  have h0 : ∀ b, (ch_b17 R 0).w b = w_b16 b := fun b => step_b16 R h b
  have h1 : ∀ b, (ch_b17 R 1).w b = w_base b := fun b => step_base R h b
  simp only [Fin.prod_univ_two, h0, h1]
  exact polynomial_b17 a

def e_c12 : Fin 3 → Nat := (Fin.cases (3) (Fin.cases (7) (fun _ => 2)))
def ch_c12 (R : Realisation Ty typedSep G) :
    (i : Fin 3) → Realisation Ty typedSep (strongPower G (e_c12 i)) :=
  (Fin.cases (R_a3 R) (Fin.cases (R_a7 R) (fun _ => R_b2 R)))
def R_c12 (R : Realisation Ty typedSep G) : Realisation Ty typedSep (strongPower G 12) :=
  Realisation.multiSubst e_c12 (ch_c12 R) S_c12
def w_c12 (a : Ty) : Nat :=
  match a.val with
  | 0 => 0
  | 1 => 0
  | 2 => 45359316883202514479249246775322957253419075609539744276
  | 3 => 2170054666841056366764769974403043092517128929382683205715
  | 4 => 0
  | 5 => 0
  | 6 => 0
  | 7 => 826360417224315274092972958347786889716624955578276662681
  | 8 => 0
  | 9 => 2459339490249900110501664800293430748398477419605826269184
  | 10 => 0
  | 11 => 1292552074610994845984910264120171136414163698474801920
  | 12 => 0
  | 13 => 0
  | 14 => 0
  | 15 => 629196194941784278606440867185938849637723389709046133248
  | 16 => 0
  | 17 => 0
  | 18 => 0
  | 19 => 0
  | 20 => 0
  | 21 => 0
  | 22 => 0
  | 23 => 485965198192849270805239999346398737783879027871598223360
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
  | 46 => 749277043047429170645922016591194559427177231447484288
  | 47 => 532760645115528602788701661141140491065653594511825205376
  | 48 => 0
  | 49 => 0
  | 50 => 0
  | 51 => 0
  | 52 => 0
  | 53 => 0
  | 54 => 0
  | 55 => 581624379142145203857128576299983308113536923683127365632
  | 56 => 0
  | 57 => 0
  | _ => 0

theorem polynomial_c12 : ∀ a : Ty, (∑ x ∈ S_c12.T a, w_a3 (x 0) * w_a7 (x 1) * w_b2 (x 2)) = w_c12 a := by native_decide
theorem step_c12 (R : Realisation Ty typedSep G) (h : ∀ a, R.w a = C13R8Base.w0 a) :
    ∀ a, (R_c12 R).w a = w_c12 a := by
  intro a
  change (Realisation.multiSubst e_c12 (ch_c12 R) S_c12).w a = w_c12 a
  rw [w_multiSubst]
  have h0 : ∀ b, (ch_c12 R 0).w b = w_a3 b := fun b => step_a3 R h b
  have h1 : ∀ b, (ch_c12 R 1).w b = w_a7 b := fun b => step_a7 R h b
  have h2 : ∀ b, (ch_c12 R 2).w b = w_b2 b := fun b => step_b2 R h b
  simp only [Fin.prod_univ_three, h0, h1, h2]
  exact polynomial_c12 a

def e_x34 : Fin 3 → Nat := (Fin.cases (9) (Fin.cases (13) (fun _ => 12)))
def ch_x34 (R : Realisation Ty typedSep G) :
    (i : Fin 3) → Realisation Ty typedSep (strongPower G (e_x34 i)) :=
  (Fin.cases (R_a9 R) (Fin.cases (R_b13 R) (fun _ => R_c12 R)))
def R_x34 (R : Realisation Ty typedSep G) : Realisation Ty typedSep (strongPower G 34) :=
  Realisation.multiSubst e_x34 (ch_x34 R) S_x34
def w_x34 (a : Ty) : Nat :=
  match a.val with
  | 0 => 0
  | 1 => 445677280037162443409454890362509484826165838858932939184699395404766108050263077415525896070614818875479154816403784586843018160466866009250486248663582359331008
  | 2 => 0
  | 3 => 3985574652800106367140515916354765022227587175861929073004595789017815100953796990116311342474506629918338384107802452880303579715066102469029970428564098237909831
  | 4 => 0
  | 5 => 0
  | 6 => 0
  | 7 => 4376983118077666623324213459826631169550681545500164627819093143640593790450951360573919468888026291338553599815390053389274422188693644537705639812572564421645305
  | 8 => 0
  | 9 => 4872263935102524655308863887049047995317227437284754413838393061515746735593196578965227856691424335550080006404575500658069379491524459822654932041928470893539328
  | 10 => 0
  | 11 => 59753346055151977242440336893229553452627147054023021962704512783442934368121928828467724808468223670664555975149189012612735277565305261854646161941943792975872
  | 12 => 0
  | 13 => 0
  | 14 => 0
  | 15 => 4625044896184267735025523726610361209400304386801116214735159117821508707351476967782388505686971161112762297139200642265618596990797681100670190556337728626343936
  | 16 => 0
  | 17 => 0
  | 18 => 0
  | 19 => 0
  | 20 => 0
  | 21 => 0
  | 22 => 0
  | 23 => 2263825623098385970654547240747551040031366289735639428725219180524058105598136076237279258683834986133857630170284333403947016790732166009253745434406516110131200
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
  | 46 => 40488230879835945469899282843074283903357728035846409141725620462612357380578800155326204111802770070929320092670142579302976059774068182355756582772401618288640
  | 47 => 2977877483181584749731810522299868655714029942443290051904312824578931938965876457466918588254754277541238907432022309682308513158480702335164865465483959540645888
  | 48 => 0
  | 49 => 0
  | 50 => 0
  | 51 => 0
  | 52 => 0
  | 53 => 0
  | 54 => 1847419031439244846842155992205551721509480915213836008602717800030670434497257884442148628652063585262189986455220190562781179249342520174451424374066339905536
  | 55 => 3781646465754801374425150496551279900138274304493543366456160741417340829422565355384049363208960287664908208237040261172762306287515789442353398023731397598904320
  | 56 => 0
  | 57 => 0
  | _ => 0

theorem polynomial_x34 : ∀ a : Ty, (∑ x ∈ S_x34.T a, w_a9 (x 0) * w_b13 (x 1) * w_c12 (x 2)) = w_x34 a := by native_decide
theorem step_x34 (R : Realisation Ty typedSep G) (h : ∀ a, R.w a = C13R8Base.w0 a) :
    ∀ a, (R_x34 R).w a = w_x34 a := by
  intro a
  change (Realisation.multiSubst e_x34 (ch_x34 R) S_x34).w a = w_x34 a
  rw [w_multiSubst]
  have h0 : ∀ b, (ch_x34 R 0).w b = w_a9 b := fun b => step_a9 R h b
  have h1 : ∀ b, (ch_x34 R 1).w b = w_b13 b := fun b => step_b13 R h b
  have h2 : ∀ b, (ch_x34 R 2).w b = w_c12 b := fun b => step_c12 R h b
  simp only [Fin.prod_univ_three, h0, h1, h2]
  exact polynomial_x34 a

def e_x36 : Fin 3 → Nat := (Fin.cases (7) (Fin.cases (17) (fun _ => 12)))
def ch_x36 (R : Realisation Ty typedSep G) :
    (i : Fin 3) → Realisation Ty typedSep (strongPower G (e_x36 i)) :=
  (Fin.cases (R_a7 R) (Fin.cases (R_b17 R) (fun _ => R_c12 R)))
def R_x36 (R : Realisation Ty typedSep G) : Realisation Ty typedSep (strongPower G 36) :=
  Realisation.multiSubst e_x36 (ch_x36 R) S_x36
def w_x36 (a : Ty) : Nat :=
  match a.val with
  | 0 => 0
  | 1 => 1816483933097715823897590582851363420258796990453734669162277771547559261025009775754015645376428646406423565817514068572488047412297903024496967043191692663372923977059520
  | 2 => 0
  | 3 => 15105873841320702124567165069018748643400681297057375795179023413382183001086789378041703680249486338384996295434562507973304960708109937406875690123288056913087999115319007
  | 4 => 0
  | 5 => 0
  | 6 => 0
  | 7 => 17326091494407302513409307271853019041909832096874644765529931047042728129745475655422606759951435541059274611818015631886397797654953728148468954116705849958797617389067361
  | 8 => 0
  | 9 => 18369925496572035352471878284562633347470246195502185540764225413118624282619433040517967357334257103469900817851778108726668914033037619352353731356139130742353488562728960
  | 10 => 0
  | 11 => 277029649432413216175167102513137449085488212781062430522940659256047077500041248607334829019165134082569759708421647428174906210319513781045203646185955863255802504507392
  | 12 => 0
  | 13 => 0
  | 14 => 0
  | 15 => 18779907422610912927681271791154038378888996169554548918529172624221202599684111266097346387419246173150403413309778137883100636032452970554129248712126802336003367341428736
  | 16 => 0
  | 17 => 0
  | 18 => 0
  | 19 => 0
  | 20 => 0
  | 21 => 0
  | 22 => 0
  | 23 => 8858440575093596449236047511725612336482264870189121403145819574268276520584481699321830976059794482752955492361496120609375011192953514113171677905619649767687784098693120
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
  | 46 => 178590502326855439226082217219684371780449936851750523872706279630445739539730369003151040121836621222739237131234772210771541157415557824176151027524000794315901218127872
  | 47 => 11863618723600919870088477076669163286340302216519608296628608806342449587318197499425168189893531392999692487244960495740535484085107083388129707300740734278345456687972352
  | 48 => 0
  | 49 => 0
  | 50 => 0
  | 51 => 0
  | 52 => 0
  | 53 => 0
  | 54 => 11315708022049457449546744081981890586628203126854797324669990682111725802587644435244362954259610324824607849999240818625232675211994448441837769975043900125281435779072
  | 55 => 15276663902248944442929957483895634610559683921457559605484085656680320191108422581885791009167906084913945812031544392267808620761812661822393337333728505688485154049228800
  | 56 => 0
  | 57 => 0
  | _ => 0

theorem polynomial_x36 : ∀ a : Ty, (∑ x ∈ S_x36.T a, w_a7 (x 0) * w_b17 (x 1) * w_c12 (x 2)) = w_x36 a := by native_decide
theorem step_x36 (R : Realisation Ty typedSep G) (h : ∀ a, R.w a = C13R8Base.w0 a) :
    ∀ a, (R_x36 R).w a = w_x36 a := by
  intro a
  change (Realisation.multiSubst e_x36 (ch_x36 R) S_x36).w a = w_x36 a
  rw [w_multiSubst]
  have h0 : ∀ b, (ch_x36 R 0).w b = w_a7 b := fun b => step_a7 R h b
  have h1 : ∀ b, (ch_x36 R 1).w b = w_b17 b := fun b => step_b17 R h b
  have h2 : ∀ b, (ch_x36 R 2).w b = w_c12 b := fun b => step_c12 R h b
  simp only [Fin.prod_univ_three, h0, h1, h2]
  exact polynomial_x36 a

def e_terminal : Fin 3 → Nat := (Fin.cases (34) (Fin.cases (36) (fun _ => 17)))
def ch_terminal (R : Realisation Ty typedSep G) :
    (i : Fin 3) → Realisation Ty typedSep (strongPower G (e_terminal i)) :=
  (Fin.cases (R_x34 R) (Fin.cases (R_x36 R) (fun _ => R_b17 R)))

theorem polynomial_terminal : (∑ x ∈ S_terminal.C, w_x34 (x 0) * w_x36 (x 1) * w_b17 (x 2)) = N := by native_decide
theorem step_terminal (R : Realisation Ty typedSep G) (h : ∀ a, R.w a = C13R8Base.w0 a) :
    (∑ x ∈ S_terminal.C, ∏ i, (ch_terminal R i).w (x i)) = N := by
  have h0 : ∀ b, (ch_terminal R 0).w b = w_x34 b := fun b => step_x34 R h b
  have h1 : ∀ b, (ch_terminal R 1).w b = w_x36 b := fun b => step_x36 R h b
  have h2 : ∀ b, (ch_terminal R 2).w b = w_b17 b := fun b => step_b17 R h b
  simp only [Fin.prod_univ_three, h0, h1, h2]
  exact polynomial_terminal

def codeBase (R : Realisation Ty typedSep G) : Finset (Fin 87 → α) :=
  (multiCodeSet e_terminal (ch_terminal R) S_terminal).image (strongPower_sum_iso G e_terminal).symm
theorem independent_codeBase (R : Realisation Ty typedSep G) :
    (strongPower G 87).IsIndepSet ↑(codeBase R) :=
  isIndepSet_image_symm (strongPower_sum_iso G e_terminal)
    (isIndepSet_multiCodeSet e_terminal (ch_terminal R) S_terminal)
theorem card_codeBase (R : Realisation Ty typedSep G) (h : ∀ a, R.w a = C13R8Base.w0 a) :
    (codeBase R).card = N := by
  calc
    (codeBase R).card = (multiCodeSet e_terminal (ch_terminal R) S_terminal).card :=
      Finset.card_image_of_injective _ (strongPower_sum_iso G e_terminal).symm.injective
    _ = ∑ x ∈ S_terminal.C, ∏ i, (ch_terminal R i).w (x i) :=
      card_multiCodeSet e_terminal (ch_terminal R) S_terminal
    _ = N := step_terminal R h
end Generic

def code : Finset (Fin 522 → Fin 13) :=
  (codeBase C13R8Base.base).image CapCertC13.iso522.symm
theorem card_code : code.card = N := by
  calc
    code.card = (codeBase C13R8Base.base).card :=
      Finset.card_image_of_injective _ CapCertC13.iso522.symm.injective
    _ = N := card_codeBase C13R8Base.base C13R8Base.base_weights
theorem independent_code : (strongPower (SimpleGraph.cycleGraph 13) 522).IsIndepSet ↑code := by
  rw [← CapC13.Cyc_eq_cycleGraph]
  exact isIndepSet_image_symm CapCertC13.iso522 (independent_codeBase C13R8Base.base)
theorem exists_code : ∃ S : Finset (Fin 522 → Fin 13),
    (strongPower (SimpleGraph.cycleGraph 13) 522).IsIndepSet ↑S ∧ S.card = N :=
  ⟨code, independent_code, card_code⟩
theorem alpha_ge : N ≤ (strongPower (SimpleGraph.cycleGraph 13) 522).indepNum := by
  rw [← card_code]; exact SimpleGraph.IsIndepSet.card_le_indepNum independent_code
theorem capacity_root : (N : ℝ) ^ ((1 : ℝ) / (522 : ℕ)) ≤ shannonCapacity (SimpleGraph.cycleGraph 13) := by
  calc
    (N : ℝ) ^ ((1 : ℝ) / (522 : ℕ)) ≤
        (((strongPower (SimpleGraph.cycleGraph 13) 522).indepNum : ℕ) : ℝ) ^ ((1 : ℝ) / (522 : ℕ)) := by
      apply Real.rpow_le_rpow (by positivity) _ (by positivity)
      exact_mod_cast alpha_ge
    _ ≤ shannonCapacity (SimpleGraph.cycleGraph 13) := shannonCapacity_ge_root _ 522 (by norm_num)
theorem decimal_lower_integer : 6302927046770772 ^ 522 ≤ N * (1000000000000000 : Nat) ^ 522 := by native_decide
theorem decimal_upper_integer : N * (1000000000000000 : Nat) ^ 522 < 6302927046770773 ^ 522 := by native_decide
theorem root_bracket : (6302927046770772 : ℝ) / 1000000000000000 ≤ (N : ℝ) ^ ((1 : ℝ) / (522 : ℕ)) ∧
    (N : ℝ) ^ ((1 : ℝ) / (522 : ℕ)) < (6302927046770773 : ℝ) / 1000000000000000 := by
  constructor
  · exact Decimal.decimal_le (by norm_num) (by norm_num) decimal_lower_integer le_rfl
  · exact C11R6Common.root_lt_decimal (by norm_num) (by norm_num) decimal_upper_integer
theorem capacity_lower : (6.302927046770772 : ℝ) ≤ shannonCapacity (SimpleGraph.cycleGraph 13) := by
  rw [show (6.302927046770772 : ℝ) = (6302927046770772 : ℝ) / 1000000000000000 by norm_num]
  exact root_bracket.1.trans capacity_root
theorem strictly_larger_BPZ : CertC13.M < N := by native_decide
theorem strict_root_BPZ : (CertC13.M : ℝ) ^ ((1 : ℝ) / (522 : ℕ)) < (N : ℝ) ^ ((1 : ℝ) / (522 : ℕ)) := by
  apply Real.rpow_lt_rpow (by positivity) _ (by positivity)
  exact_mod_cast strictly_larger_BPZ
end ShannonBounds.C13R8D522
