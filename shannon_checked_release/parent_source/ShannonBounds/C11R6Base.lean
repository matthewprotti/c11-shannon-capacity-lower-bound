/- Copyright (c) 2026 Matthew Protti. Apache-2.0.
Generated from the frozen R6 certificates; the BPZ framework is unchanged. -/
import ShannonBounds.C11R6ListChecks

set_option autoImplicit false
set_option maxRecDepth 4000000
set_option maxHeartbeats 0
set_option synthInstance.maxSize 4000
set_option exponentiation.threshold 20000

namespace ShannonBounds.C11R6Base

open C11R6ListChecks
abbrev Ty := Fin 58

def familyIndex : Letter → Nat
  | .B => 0
  | .N => 1
  | .A => 2
  | .D => 3
  | .O => 4
  | .H => 5
  | .V => 6

def family (a : Ty) : Letter :=
  match a.val with
  | 0 => Letter.B
  | 1 => Letter.B
  | 2 => Letter.B
  | 3 => Letter.B
  | 4 => Letter.B
  | 5 => Letter.B
  | 6 => Letter.B
  | 7 => Letter.B
  | 8 => Letter.N
  | 9 => Letter.N
  | 10 => Letter.A
  | 11 => Letter.A
  | 12 => Letter.A
  | 13 => Letter.A
  | 14 => Letter.A
  | 15 => Letter.A
  | 16 => Letter.A
  | 17 => Letter.A
  | 18 => Letter.D
  | 19 => Letter.D
  | 20 => Letter.D
  | 21 => Letter.D
  | 22 => Letter.D
  | 23 => Letter.D
  | 24 => Letter.D
  | 25 => Letter.D
  | 26 => Letter.O
  | 27 => Letter.O
  | 28 => Letter.O
  | 29 => Letter.O
  | 30 => Letter.O
  | 31 => Letter.O
  | 32 => Letter.O
  | 33 => Letter.O
  | 34 => Letter.O
  | 35 => Letter.O
  | 36 => Letter.O
  | 37 => Letter.O
  | 38 => Letter.O
  | 39 => Letter.O
  | 40 => Letter.O
  | 41 => Letter.O
  | 42 => Letter.H
  | 43 => Letter.H
  | 44 => Letter.H
  | 45 => Letter.H
  | 46 => Letter.H
  | 47 => Letter.H
  | 48 => Letter.H
  | 49 => Letter.H
  | 50 => Letter.V
  | 51 => Letter.V
  | 52 => Letter.V
  | 53 => Letter.V
  | 54 => Letter.V
  | 55 => Letter.V
  | 56 => Letter.V
  | 57 => Letter.V
  | _ => Letter.B

def mask (a : Ty) : Nat :=
  match a.val with
  | 0 => 1
  | 1 => 3
  | 2 => 5
  | 3 => 7
  | 4 => 9
  | 5 => 11
  | 6 => 13
  | 7 => 15
  | 8 => 2
  | 9 => 3
  | 10 => 4
  | 11 => 5
  | 12 => 20
  | 13 => 21
  | 14 => 68
  | 15 => 69
  | 16 => 84
  | 17 => 85
  | 18 => 8
  | 19 => 9
  | 20 => 24
  | 21 => 25
  | 22 => 40
  | 23 => 41
  | 24 => 56
  | 25 => 57
  | 26 => 16
  | 27 => 20
  | 28 => 24
  | 29 => 28
  | 30 => 48
  | 31 => 52
  | 32 => 56
  | 33 => 60
  | 34 => 80
  | 35 => 84
  | 36 => 88
  | 37 => 92
  | 38 => 112
  | 39 => 116
  | 40 => 120
  | 41 => 124
  | 42 => 32
  | 43 => 40
  | 44 => 48
  | 45 => 56
  | 46 => 96
  | 47 => 104
  | 48 => 112
  | 49 => 120
  | 50 => 64
  | 51 => 68
  | 52 => 80
  | 53 => 84
  | 54 => 96
  | 55 => 100
  | 56 => 112
  | 57 => 116
  | _ => 1

def has (a : Ty) (b : Letter) : Bool := (mask a).testBit (familyIndex b)

def typedSep (a b : Ty) : Bool :=
  (decide (family a = family b) && decide (mask a ≠ mask b)) ||
    !(has a (family b)) || !(has b (family a))

theorem typedSep_symm : ∀ a b, typedSep a b = typedSep b a := by native_decide
theorem typedSep_irrefl : ∀ a, typedSep a a = false := by native_decide
theorem descriptors_injective : Function.Injective (fun a : Ty => (family a, mask a)) := by native_decide
theorem normalized : ∀ a : Ty, mask a < 128 ∧ has a (family a) = true ∧
    ∀ b : Letter, Letter.sep (family a) b = true → has a b = false := by native_decide

theorem normalized_complete : ∀ a : Letter, ∀ m : Fin 128,
    m.val.testBit (familyIndex a) = true →
    (∀ b : Letter, Letter.sep a b = true → m.val.testBit (familyIndex b) = false) →
    ∃ t : Ty, family t = a ∧ mask t = m.val := by native_decide

def coarseLists : Letter → List BaseC11.Code
  | .B => [7, 11, 26, 28, 43, 47, 49, 69, 86, 90, 107, 111, 130, 134, 151, 155, 172, 177, 192, 194, 198, 213, 215, 230, 234, 242, 257, 259, 274, 278, 280, 295, 300, 317, 321, 338, 342, 357, 359, 365, 382, 386, 403, 407, 423, 425, 429, 444, 446, 461, 465, 482, 488, 490, 505, 509, 511, 526, 530, 548, 552, 569, 573, 588, 590, 594, 613, 617, 634, 638, 653, 655, 660, 675, 677, 692, 696, 713, 717, 732, 740, 753, 761, 768, 783, 789, 804, 811, 819, 825, 832, 840, 855, 859, 876, 880, 895, 897, 912, 917, 919, 934, 938, 955, 959, 978, 982, 984, 999, 1003, 1020, 1024, 1042, 1046, 1061, 1063, 1067, 1082, 1084, 1090, 1107, 1111, 1126, 1128, 1143, 1147, 1149, 1165, 1169, 1186, 1190, 1207, 1213, 1230, 1234, 1251, 1255, 1272, 1277, 1292, 1294, 1298, 1313, 1315, 1330]
  | .N => [10, 19, 28, 37, 46, 72, 81, 90, 99, 108, 117, 122, 135, 144, 162, 164, 171, 180, 189, 198, 207, 216, 225, 234, 261, 263, 270, 279, 288, 297, 306, 315, 324, 333, 342, 360, 362, 365, 369, 378, 387, 396, 405, 414, 423, 432, 441, 459, 461, 468, 477, 495, 504, 513, 522, 531, 540, 558, 560, 567, 576, 585, 594, 603, 608, 612, 621, 630, 639, 657, 659, 666, 675, 684, 693, 702, 711, 720, 738, 756, 765, 774, 783, 792, 801, 810, 819, 828, 837, 851, 855, 864, 873, 882, 891, 900, 909, 918, 927, 936, 945, 954, 963, 968, 981, 990, 999, 1008, 1017, 1026, 1035, 1044, 1053, 1062, 1071, 1080, 1098, 1107, 1116, 1125, 1134, 1143, 1152, 1161, 1170, 1179, 1188, 1197, 1206, 1211, 1224, 1233, 1242, 1251, 1260, 1269, 1278, 1287, 1296, 1305, 1314, 1323]
  | .A => [63, 126, 758]
  | .D => [55, 846, 1094]
  | .O => [5, 64, 747]
  | .H => [65, 736, 1215]
  | .V => [5, 64, 747]

theorem coarseLists_eq : ∀ a, (coarseLists a).toFinset = BaseC11.base.fam a := by native_decide

def exactMask (x : BaseC11.Code) : Nat :=
  [Letter.B, Letter.N, Letter.A, Letter.D, Letter.O, Letter.H, Letter.V].foldl
    (fun m a => if (coarseLists a).any (fun y => BaseC11.wconf x y)
      then m + 2 ^ familyIndex a else m) 0

def baseLists (a : Ty) : List BaseC11.Code :=
  match a.val with
  | 0 => []
  | 1 => [7, 11, 26, 28, 43, 47, 49, 69, 86, 90, 107, 111, 130, 134, 151, 155, 192, 198, 213, 215, 230, 234, 242, 274, 278, 280, 295, 300, 317, 321, 338, 342, 359, 365, 382, 386, 403, 407, 423, 425, 429, 444, 446, 461, 465, 482, 488, 490, 505, 509, 511, 526, 530, 548, 552, 569, 573, 588, 590, 594, 613, 617, 634, 653, 655, 660, 675, 677, 692, 696, 717, 732, 740, 753, 761, 783, 789, 804, 811, 819, 832, 840, 855, 859, 876, 895, 897, 912, 917, 919, 934, 938, 959, 978, 982, 999, 1003, 1020, 1024, 1042, 1046, 1061, 1063, 1067, 1090, 1107, 1111, 1126, 1128, 1143, 1147, 1149, 1165, 1169, 1186, 1190, 1207, 1213, 1230, 1234, 1251, 1292, 1294, 1298, 1313, 1315, 1330]
  | 2 => []
  | 3 => [172, 194, 257, 259, 357, 638, 768, 880, 1272]
  | 4 => []
  | 5 => [177, 713, 825, 955, 984, 1082, 1084, 1255, 1277]
  | 6 => []
  | 7 => []
  | 8 => []
  | 9 => [10, 19, 28, 37, 46, 72, 81, 90, 99, 108, 117, 122, 135, 144, 162, 164, 171, 180, 189, 198, 207, 216, 225, 234, 261, 263, 270, 279, 288, 297, 306, 315, 324, 333, 342, 360, 362, 365, 369, 378, 387, 396, 405, 414, 423, 432, 441, 459, 461, 468, 477, 495, 504, 513, 522, 531, 540, 558, 560, 567, 576, 585, 594, 603, 608, 612, 621, 630, 639, 657, 659, 666, 675, 684, 693, 702, 711, 720, 738, 756, 765, 774, 783, 792, 801, 810, 819, 828, 837, 851, 855, 864, 873, 882, 891, 900, 909, 918, 927, 936, 945, 954, 963, 968, 981, 990, 999, 1008, 1017, 1026, 1035, 1044, 1053, 1062, 1071, 1080, 1098, 1107, 1116, 1125, 1134, 1143, 1152, 1161, 1170, 1179, 1188, 1197, 1206, 1211, 1224, 1233, 1242, 1251, 1260, 1269, 1278, 1287, 1296, 1305, 1314, 1323]
  | 10 => []
  | 11 => []
  | 12 => []
  | 13 => []
  | 14 => []
  | 15 => []
  | 16 => []
  | 17 => [63, 126, 758]
  | 18 => []
  | 19 => []
  | 20 => []
  | 21 => []
  | 22 => []
  | 23 => [55, 846, 1094]
  | 24 => []
  | 25 => []
  | 26 => []
  | 27 => []
  | 28 => []
  | 29 => []
  | 30 => []
  | 31 => []
  | 32 => []
  | 33 => []
  | 34 => []
  | 35 => []
  | 36 => []
  | 37 => []
  | 38 => []
  | 39 => [5, 64, 747]
  | 40 => []
  | 41 => []
  | 42 => []
  | 43 => []
  | 44 => []
  | 45 => []
  | 46 => []
  | 47 => []
  | 48 => []
  | 49 => [65, 736, 1215]
  | 50 => []
  | 51 => []
  | 52 => []
  | 53 => []
  | 54 => []
  | 55 => []
  | 56 => []
  | 57 => [5, 64, 747]
  | _ => []

theorem baseLists_meaning : ∀ a : Ty,
    (baseLists a).toFinset = ((coarseLists (family a)).filter
      (fun x => decide (exactMask x = mask a))).toFinset := by native_decide

def vertexApart (x y : BaseC11.Code) : Bool := !(BaseC11.wconf x y)

theorem base_inside : ∀ a : Ty, inside vertexApart (baseLists a) = true := by native_decide
theorem base_between : ∀ a b : Ty, typedSep a b = true →
    between vertexApart (baseLists a) (baseLists b) = true := by native_decide

def base : Realisation Ty typedSep BaseC11.G3 where
  P a := (baseLists a).toFinset
  hindep := by
    intro a x hx y hy hne hadj
    have h := of_inside (base_inside a) hx hy hne
    have hw : BaseC11.wconf x y = true := hadj.2
    simpa [vertexApart, hw] using h
  hsep := by
    intro a b hab x hx y hy hc
    have h := of_between (base_between a b hab) hx hy
    have hw := (BaseC11.conflict_G3 x y).mp hc
    simpa [vertexApart, hw] using h

def w0 (a : Ty) : Nat :=
  match a.val with
  | 0 => 0
  | 1 => 127
  | 2 => 0
  | 3 => 9
  | 4 => 0
  | 5 => 9
  | 6 => 0
  | 7 => 0
  | 8 => 0
  | 9 => 142
  | 10 => 0
  | 11 => 0
  | 12 => 0
  | 13 => 0
  | 14 => 0
  | 15 => 0
  | 16 => 0
  | 17 => 3
  | 18 => 0
  | 19 => 0
  | 20 => 0
  | 21 => 0
  | 22 => 0
  | 23 => 3
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
  | 39 => 3
  | 40 => 0
  | 41 => 0
  | 42 => 0
  | 43 => 0
  | 44 => 0
  | 45 => 0
  | 46 => 0
  | 47 => 0
  | 48 => 0
  | 49 => 3
  | 50 => 0
  | 51 => 0
  | 52 => 0
  | 53 => 0
  | 54 => 0
  | 55 => 0
  | 56 => 0
  | 57 => 3
  | _ => 0

theorem base_weights : ∀ a : Ty, base.w a = w0 a := by native_decide

end ShannonBounds.C11R6Base
