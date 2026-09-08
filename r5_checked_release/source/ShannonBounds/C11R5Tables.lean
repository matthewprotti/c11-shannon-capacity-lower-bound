/-
Copyright (c) 2026 Matthew Protti. Released under Apache 2.0.
Generated from unchanged R5 certificate JSON; do not hand-edit the literals.
Uses BPZ's pinned framework (Buys, Polak, Zuiddam), without changing it.
-/
import ShannonBounds.C11R5Common

set_option autoImplicit false
set_option maxRecDepth 4000000
set_option maxHeartbeats 0
set_option synthInstance.maxSize 4000
set_option exponentiation.threshold 20000

namespace ShannonBounds.C11R5Tables

def T_0058d965adce02f4 : Letter → Finset (Fin 3 → Letter)
  | .B => {![Letter.A, Letter.B, Letter.V], ![Letter.A, Letter.H, Letter.H], ![Letter.A, Letter.V, Letter.A], ![Letter.B, Letter.B, Letter.B], ![Letter.D, Letter.A, Letter.H], ![Letter.D, Letter.H, Letter.A], ![Letter.D, Letter.N, Letter.H], ![Letter.H, Letter.A, Letter.A], ![Letter.H, Letter.A, Letter.N], ![Letter.H, Letter.H, Letter.H], ![Letter.N, Letter.H, Letter.D], ![Letter.N, Letter.V, Letter.A], ![Letter.V, Letter.A, Letter.D], ![Letter.V, Letter.D, Letter.B]}
  | .N => {![Letter.A, Letter.A, Letter.D], ![Letter.B, Letter.H, Letter.D], ![Letter.D, Letter.A, Letter.B], ![Letter.D, Letter.B, Letter.H], ![Letter.H, Letter.V, Letter.H], ![Letter.N, Letter.N, Letter.N], ![Letter.V, Letter.A, Letter.A], ![Letter.V, Letter.D, Letter.H], ![Letter.V, Letter.H, Letter.A]}
  | .A => {![Letter.A, Letter.B, Letter.N], ![Letter.A, Letter.N, Letter.D], ![Letter.B, Letter.D, Letter.A], ![Letter.B, Letter.N, Letter.A], ![Letter.B, Letter.V, Letter.V], ![Letter.H, Letter.D, Letter.N], ![Letter.N, Letter.A, Letter.B], ![Letter.V, Letter.N, Letter.V], ![Letter.V, Letter.V, Letter.N]}
  | .D => {![Letter.D, Letter.N, Letter.N], ![Letter.N, Letter.D, Letter.N], ![Letter.N, Letter.N, Letter.D]}
  | .O => ∅
  | .H => {![Letter.B, Letter.H, Letter.N], ![Letter.H, Letter.N, Letter.B], ![Letter.N, Letter.B, Letter.H]}
  | .V => {![Letter.A, Letter.V, Letter.N], ![Letter.D, Letter.H, Letter.N], ![Letter.H, Letter.N, Letter.A], ![Letter.N, Letter.A, Letter.H], ![Letter.N, Letter.D, Letter.V], ![Letter.N, Letter.N, Letter.V], ![Letter.N, Letter.V, Letter.N], ![Letter.V, Letter.N, Letter.D], ![Letter.V, Letter.N, Letter.N]}

def S_0058d965adce02f4 : Subst Letter Letter.sep 3 :=
  ⟨T_0058d965adce02f4, by native_decide, by native_decide⟩

def T_01f11d8929277edb : Letter → Finset (Fin 3 → Letter)
  | .B => {![Letter.A, Letter.D, Letter.H], ![Letter.A, Letter.H, Letter.A], ![Letter.A, Letter.H, Letter.N], ![Letter.A, Letter.V, Letter.D], ![Letter.B, Letter.A, Letter.V], ![Letter.B, Letter.B, Letter.B], ![Letter.D, Letter.V, Letter.B], ![Letter.H, Letter.A, Letter.H], ![Letter.H, Letter.D, Letter.A], ![Letter.H, Letter.H, Letter.H], ![Letter.H, Letter.N, Letter.D], ![Letter.N, Letter.D, Letter.H], ![Letter.V, Letter.A, Letter.A], ![Letter.V, Letter.N, Letter.A]}
  | .N => {![Letter.A, Letter.A, Letter.D], ![Letter.A, Letter.D, Letter.B], ![Letter.A, Letter.V, Letter.A], ![Letter.B, Letter.D, Letter.H], ![Letter.D, Letter.A, Letter.A], ![Letter.D, Letter.V, Letter.H], ![Letter.H, Letter.B, Letter.D], ![Letter.H, Letter.H, Letter.A], ![Letter.N, Letter.N, Letter.N], ![Letter.V, Letter.H, Letter.H]}
  | .A => {![Letter.D, Letter.N, Letter.N], ![Letter.N, Letter.D, Letter.N], ![Letter.N, Letter.N, Letter.D]}
  | .D => {![Letter.A, Letter.N, Letter.B], ![Letter.B, Letter.A, Letter.N], ![Letter.D, Letter.H, Letter.N], ![Letter.D, Letter.N, Letter.A], ![Letter.N, Letter.A, Letter.D], ![Letter.N, Letter.B, Letter.A], ![Letter.N, Letter.V, Letter.V], ![Letter.V, Letter.B, Letter.V], ![Letter.V, Letter.V, Letter.N]}
  | .O => ∅
  | .H => {![Letter.A, Letter.N, Letter.H], ![Letter.D, Letter.N, Letter.V], ![Letter.H, Letter.D, Letter.N], ![Letter.N, Letter.H, Letter.A], ![Letter.N, Letter.N, Letter.V], ![Letter.N, Letter.V, Letter.D], ![Letter.N, Letter.V, Letter.N], ![Letter.V, Letter.A, Letter.N], ![Letter.V, Letter.N, Letter.N]}
  | .V => {![Letter.B, Letter.N, Letter.H], ![Letter.H, Letter.B, Letter.N], ![Letter.N, Letter.H, Letter.B]}

def S_01f11d8929277edb : Subst Letter Letter.sep 3 :=
  ⟨T_01f11d8929277edb, by native_decide, by native_decide⟩

def T_04339297651c9c49 : Letter → Finset (Fin 3 → Letter)
  | .B => {![Letter.A, Letter.A, Letter.H], ![Letter.A, Letter.H, Letter.A], ![Letter.A, Letter.H, Letter.N], ![Letter.B, Letter.B, Letter.B], ![Letter.D, Letter.A, Letter.V], ![Letter.D, Letter.H, Letter.H], ![Letter.D, Letter.V, Letter.B], ![Letter.H, Letter.B, Letter.D], ![Letter.H, Letter.D, Letter.A], ![Letter.N, Letter.A, Letter.V], ![Letter.N, Letter.D, Letter.H], ![Letter.V, Letter.A, Letter.A], ![Letter.V, Letter.H, Letter.H], ![Letter.V, Letter.N, Letter.A]}
  | .N => {![Letter.A, Letter.B, Letter.A], ![Letter.A, Letter.H, Letter.B], ![Letter.B, Letter.D, Letter.H], ![Letter.D, Letter.A, Letter.D], ![Letter.D, Letter.D, Letter.A], ![Letter.H, Letter.A, Letter.A], ![Letter.H, Letter.H, Letter.D], ![Letter.N, Letter.N, Letter.N], ![Letter.V, Letter.A, Letter.H], ![Letter.V, Letter.H, Letter.V]}
  | .A => {![Letter.B, Letter.A, Letter.N], ![Letter.B, Letter.V, Letter.V], ![Letter.D, Letter.D, Letter.N], ![Letter.D, Letter.N, Letter.B], ![Letter.H, Letter.N, Letter.V], ![Letter.H, Letter.V, Letter.N], ![Letter.N, Letter.A, Letter.D], ![Letter.N, Letter.B, Letter.A], ![Letter.V, Letter.N, Letter.D]}
  | .D => {![Letter.A, Letter.N, Letter.N], ![Letter.N, Letter.D, Letter.N], ![Letter.N, Letter.N, Letter.D]}
  | .O => ∅
  | .H => {![Letter.B, Letter.N, Letter.H], ![Letter.N, Letter.H, Letter.B], ![Letter.V, Letter.B, Letter.N]}
  | .V => {![Letter.A, Letter.N, Letter.H], ![Letter.D, Letter.N, Letter.V], ![Letter.H, Letter.D, Letter.N], ![Letter.H, Letter.N, Letter.N], ![Letter.N, Letter.H, Letter.A], ![Letter.N, Letter.N, Letter.V], ![Letter.N, Letter.V, Letter.D], ![Letter.N, Letter.V, Letter.N], ![Letter.V, Letter.A, Letter.N]}

def S_04339297651c9c49 : Subst Letter Letter.sep 3 :=
  ⟨T_04339297651c9c49, by native_decide, by native_decide⟩

def T_0ac0bf4804630912 : Letter → Finset (Fin 3 → Letter)
  | .B => {![Letter.A, Letter.V, Letter.B], ![Letter.B, Letter.A, Letter.H], ![Letter.B, Letter.B, Letter.B], ![Letter.D, Letter.D, Letter.V], ![Letter.D, Letter.H, Letter.D], ![Letter.D, Letter.H, Letter.N], ![Letter.D, Letter.V, Letter.A], ![Letter.H, Letter.A, Letter.D], ![Letter.H, Letter.N, Letter.D], ![Letter.N, Letter.D, Letter.V], ![Letter.V, Letter.A, Letter.V], ![Letter.V, Letter.D, Letter.D], ![Letter.V, Letter.H, Letter.V], ![Letter.V, Letter.N, Letter.A]}
  | .N => {![Letter.A, Letter.A, Letter.D], ![Letter.A, Letter.V, Letter.V], ![Letter.B, Letter.D, Letter.V], ![Letter.D, Letter.A, Letter.A], ![Letter.D, Letter.D, Letter.B], ![Letter.D, Letter.V, Letter.D], ![Letter.H, Letter.H, Letter.V], ![Letter.N, Letter.N, Letter.N], ![Letter.V, Letter.B, Letter.A], ![Letter.V, Letter.H, Letter.D]}
  | .A => {![Letter.A, Letter.H, Letter.N], ![Letter.A, Letter.N, Letter.D], ![Letter.B, Letter.A, Letter.N], ![Letter.D, Letter.N, Letter.B], ![Letter.H, Letter.B, Letter.H], ![Letter.H, Letter.V, Letter.N], ![Letter.N, Letter.A, Letter.A], ![Letter.N, Letter.B, Letter.D], ![Letter.N, Letter.V, Letter.H]}
  | .D => {![Letter.A, Letter.N, Letter.N], ![Letter.N, Letter.D, Letter.N], ![Letter.N, Letter.N, Letter.A]}
  | .O => ∅
  | .H => {![Letter.B, Letter.N, Letter.V], ![Letter.N, Letter.H, Letter.B], ![Letter.V, Letter.B, Letter.N]}
  | .V => {![Letter.A, Letter.N, Letter.H], ![Letter.D, Letter.N, Letter.V], ![Letter.H, Letter.A, Letter.N], ![Letter.H, Letter.N, Letter.N], ![Letter.N, Letter.H, Letter.D], ![Letter.N, Letter.N, Letter.H], ![Letter.N, Letter.V, Letter.A], ![Letter.N, Letter.V, Letter.N], ![Letter.V, Letter.D, Letter.N]}

def S_0ac0bf4804630912 : Subst Letter Letter.sep 3 :=
  ⟨T_0ac0bf4804630912, by native_decide, by native_decide⟩

def T_0c7cb632d1153343 : Letter → Finset (Fin 3 → Letter)
  | .B => {![Letter.A, Letter.A, Letter.H], ![Letter.A, Letter.H, Letter.A], ![Letter.A, Letter.H, Letter.N], ![Letter.B, Letter.B, Letter.B], ![Letter.D, Letter.A, Letter.V], ![Letter.D, Letter.H, Letter.H], ![Letter.D, Letter.V, Letter.B], ![Letter.H, Letter.B, Letter.D], ![Letter.H, Letter.D, Letter.A], ![Letter.N, Letter.A, Letter.V], ![Letter.N, Letter.D, Letter.H], ![Letter.V, Letter.A, Letter.A], ![Letter.V, Letter.H, Letter.H], ![Letter.V, Letter.N, Letter.A]}
  | .N => {![Letter.A, Letter.B, Letter.A], ![Letter.A, Letter.H, Letter.B], ![Letter.B, Letter.D, Letter.H], ![Letter.D, Letter.A, Letter.D], ![Letter.D, Letter.D, Letter.A], ![Letter.H, Letter.A, Letter.A], ![Letter.H, Letter.H, Letter.D], ![Letter.N, Letter.N, Letter.N], ![Letter.V, Letter.A, Letter.H], ![Letter.V, Letter.H, Letter.V]}
  | .A => {![Letter.A, Letter.N, Letter.N], ![Letter.N, Letter.D, Letter.N], ![Letter.N, Letter.N, Letter.D]}
  | .D => {![Letter.B, Letter.A, Letter.N], ![Letter.B, Letter.V, Letter.V], ![Letter.D, Letter.D, Letter.N], ![Letter.D, Letter.N, Letter.B], ![Letter.H, Letter.N, Letter.V], ![Letter.H, Letter.V, Letter.N], ![Letter.N, Letter.A, Letter.D], ![Letter.N, Letter.B, Letter.A], ![Letter.V, Letter.N, Letter.D]}
  | .O => ∅
  | .H => {![Letter.A, Letter.N, Letter.H], ![Letter.D, Letter.N, Letter.V], ![Letter.H, Letter.D, Letter.N], ![Letter.H, Letter.N, Letter.N], ![Letter.N, Letter.H, Letter.A], ![Letter.N, Letter.N, Letter.V], ![Letter.N, Letter.V, Letter.D], ![Letter.N, Letter.V, Letter.N], ![Letter.V, Letter.A, Letter.N]}
  | .V => {![Letter.B, Letter.N, Letter.H], ![Letter.N, Letter.H, Letter.B], ![Letter.V, Letter.B, Letter.N]}

def S_0c7cb632d1153343 : Subst Letter Letter.sep 3 :=
  ⟨T_0c7cb632d1153343, by native_decide, by native_decide⟩

def T_15769811f129f696 : Letter → Finset (Fin 3 → Letter)
  | .B => {![Letter.A, Letter.H, Letter.B], ![Letter.B, Letter.B, Letter.B], ![Letter.B, Letter.D, Letter.V], ![Letter.D, Letter.A, Letter.H], ![Letter.D, Letter.H, Letter.D], ![Letter.D, Letter.V, Letter.A], ![Letter.D, Letter.V, Letter.N], ![Letter.H, Letter.D, Letter.A], ![Letter.H, Letter.N, Letter.A], ![Letter.N, Letter.A, Letter.H], ![Letter.V, Letter.A, Letter.A], ![Letter.V, Letter.D, Letter.H], ![Letter.V, Letter.N, Letter.D], ![Letter.V, Letter.V, Letter.H]}
  | .N => {![Letter.A, Letter.D, Letter.A], ![Letter.A, Letter.H, Letter.H], ![Letter.B, Letter.A, Letter.H], ![Letter.D, Letter.A, Letter.B], ![Letter.D, Letter.D, Letter.D], ![Letter.D, Letter.H, Letter.A], ![Letter.H, Letter.V, Letter.H], ![Letter.N, Letter.N, Letter.N], ![Letter.V, Letter.B, Letter.D], ![Letter.V, Letter.V, Letter.A]}
  | .A => {![Letter.A, Letter.N, Letter.A], ![Letter.A, Letter.V, Letter.N], ![Letter.B, Letter.D, Letter.N], ![Letter.D, Letter.N, Letter.B], ![Letter.H, Letter.B, Letter.V], ![Letter.H, Letter.H, Letter.N], ![Letter.N, Letter.B, Letter.A], ![Letter.N, Letter.D, Letter.D], ![Letter.N, Letter.H, Letter.V]}
  | .D => {![Letter.A, Letter.N, Letter.N], ![Letter.N, Letter.A, Letter.N], ![Letter.N, Letter.N, Letter.D]}
  | .O => ∅
  | .H => {![Letter.B, Letter.N, Letter.H], ![Letter.N, Letter.V, Letter.B], ![Letter.V, Letter.B, Letter.N]}
  | .V => {![Letter.A, Letter.N, Letter.V], ![Letter.D, Letter.N, Letter.H], ![Letter.H, Letter.D, Letter.N], ![Letter.H, Letter.N, Letter.N], ![Letter.N, Letter.H, Letter.D], ![Letter.N, Letter.H, Letter.N], ![Letter.N, Letter.N, Letter.V], ![Letter.N, Letter.V, Letter.A], ![Letter.V, Letter.A, Letter.N]}

def S_15769811f129f696 : Subst Letter Letter.sep 3 :=
  ⟨T_15769811f129f696, by native_decide, by native_decide⟩

def T_18277b0c484b4c41 : Letter → Finset (Fin 3 → Letter)
  | .B => {![Letter.A, Letter.A, Letter.H], ![Letter.A, Letter.H, Letter.D], ![Letter.A, Letter.V, Letter.A], ![Letter.A, Letter.V, Letter.N], ![Letter.B, Letter.B, Letter.B], ![Letter.B, Letter.D, Letter.V], ![Letter.D, Letter.H, Letter.B], ![Letter.H, Letter.A, Letter.A], ![Letter.H, Letter.D, Letter.H], ![Letter.H, Letter.N, Letter.D], ![Letter.H, Letter.V, Letter.H], ![Letter.N, Letter.A, Letter.H], ![Letter.V, Letter.D, Letter.A], ![Letter.V, Letter.N, Letter.A]}
  | .N => {![Letter.A, Letter.A, Letter.B], ![Letter.A, Letter.D, Letter.D], ![Letter.A, Letter.H, Letter.A], ![Letter.B, Letter.A, Letter.H], ![Letter.D, Letter.D, Letter.A], ![Letter.D, Letter.H, Letter.H], ![Letter.H, Letter.B, Letter.D], ![Letter.H, Letter.V, Letter.A], ![Letter.N, Letter.N, Letter.N], ![Letter.V, Letter.V, Letter.H]}
  | .A => {![Letter.A, Letter.N, Letter.B], ![Letter.B, Letter.D, Letter.N], ![Letter.D, Letter.N, Letter.A], ![Letter.D, Letter.V, Letter.N], ![Letter.N, Letter.B, Letter.A], ![Letter.N, Letter.D, Letter.D], ![Letter.N, Letter.H, Letter.V], ![Letter.V, Letter.B, Letter.V], ![Letter.V, Letter.H, Letter.N]}
  | .D => {![Letter.D, Letter.N, Letter.N], ![Letter.N, Letter.A, Letter.N], ![Letter.N, Letter.N, Letter.D]}
  | .O => ∅
  | .H => {![Letter.B, Letter.N, Letter.H], ![Letter.H, Letter.B, Letter.N], ![Letter.N, Letter.V, Letter.B]}
  | .V => {![Letter.A, Letter.N, Letter.H], ![Letter.D, Letter.N, Letter.V], ![Letter.H, Letter.A, Letter.N], ![Letter.N, Letter.H, Letter.D], ![Letter.N, Letter.H, Letter.N], ![Letter.N, Letter.N, Letter.V], ![Letter.N, Letter.V, Letter.A], ![Letter.V, Letter.D, Letter.N], ![Letter.V, Letter.N, Letter.N]}

def S_18277b0c484b4c41 : Subst Letter Letter.sep 3 :=
  ⟨T_18277b0c484b4c41, by native_decide, by native_decide⟩

def T_313b085cba4d0ce6 : Finset (Fin 4 → Letter) :=
  {![Letter.A, Letter.A, Letter.H, Letter.B], ![Letter.A, Letter.B, Letter.B, Letter.H], ![Letter.A, Letter.B, Letter.V, Letter.V], ![Letter.A, Letter.D, Letter.V, Letter.B], ![Letter.A, Letter.N, Letter.H, Letter.B], ![Letter.A, Letter.V, Letter.A, Letter.B], ![Letter.A, Letter.V, Letter.N, Letter.B], ![Letter.B, Letter.B, Letter.B, Letter.A], ![Letter.B, Letter.B, Letter.B, Letter.N], ![Letter.B, Letter.H, Letter.A, Letter.V], ![Letter.B, Letter.H, Letter.D, Letter.A], ![Letter.B, Letter.H, Letter.D, Letter.N], ![Letter.B, Letter.H, Letter.H, Letter.H], ![Letter.B, Letter.H, Letter.N, Letter.V], ![Letter.D, Letter.A, Letter.A, Letter.H], ![Letter.D, Letter.A, Letter.D, Letter.D], ![Letter.D, Letter.A, Letter.H, Letter.V], ![Letter.D, Letter.A, Letter.N, Letter.H], ![Letter.D, Letter.H, Letter.A, Letter.B], ![Letter.D, Letter.H, Letter.N, Letter.B], ![Letter.D, Letter.N, Letter.B, Letter.D], ![Letter.D, Letter.N, Letter.V, Letter.B], ![Letter.H, Letter.A, Letter.B, Letter.A], ![Letter.H, Letter.A, Letter.B, Letter.N], ![Letter.H, Letter.A, Letter.V, Letter.B], ![Letter.H, Letter.D, Letter.B, Letter.H], ![Letter.H, Letter.D, Letter.V, Letter.V], ![Letter.H, Letter.H, Letter.H, Letter.B], ![Letter.H, Letter.N, Letter.A, Letter.V], ![Letter.H, Letter.N, Letter.D, Letter.A], ![Letter.H, Letter.N, Letter.D, Letter.N], ![Letter.H, Letter.N, Letter.H, Letter.H], ![Letter.H, Letter.N, Letter.N, Letter.V], ![Letter.N, Letter.A, Letter.B, Letter.H], ![Letter.N, Letter.A, Letter.H, Letter.B], ![Letter.N, Letter.A, Letter.V, Letter.V], ![Letter.N, Letter.D, Letter.B, Letter.D], ![Letter.N, Letter.D, Letter.V, Letter.B], ![Letter.N, Letter.N, Letter.A, Letter.H], ![Letter.N, Letter.N, Letter.D, Letter.D], ![Letter.N, Letter.N, Letter.H, Letter.V], ![Letter.N, Letter.N, Letter.N, Letter.H], ![Letter.N, Letter.N, Letter.V, Letter.B], ![Letter.N, Letter.V, Letter.A, Letter.B], ![Letter.N, Letter.V, Letter.N, Letter.B], ![Letter.V, Letter.D, Letter.B, Letter.A], ![Letter.V, Letter.D, Letter.B, Letter.N], ![Letter.V, Letter.N, Letter.A, Letter.B], ![Letter.V, Letter.N, Letter.N, Letter.B], ![Letter.V, Letter.V, Letter.B, Letter.H], ![Letter.V, Letter.V, Letter.V, Letter.V]}

def S_313b085cba4d0ce6 : Code Letter Letter.sep 4 := ⟨T_313b085cba4d0ce6, by native_decide⟩

def T_31d500a381a04d9a : Letter → Finset (Fin 3 → Letter)
  | .B => {![Letter.A, Letter.B, Letter.V], ![Letter.A, Letter.H, Letter.H], ![Letter.A, Letter.V, Letter.A], ![Letter.B, Letter.B, Letter.B], ![Letter.D, Letter.B, Letter.H], ![Letter.D, Letter.H, Letter.A], ![Letter.D, Letter.V, Letter.D], ![Letter.H, Letter.A, Letter.A], ![Letter.H, Letter.A, Letter.N], ![Letter.N, Letter.H, Letter.D], ![Letter.N, Letter.V, Letter.A], ![Letter.V, Letter.A, Letter.D], ![Letter.V, Letter.D, Letter.B]}
  | .N => {![Letter.A, Letter.A, Letter.D], ![Letter.A, Letter.D, Letter.A], ![Letter.B, Letter.H, Letter.D], ![Letter.D, Letter.A, Letter.B], ![Letter.D, Letter.B, Letter.H], ![Letter.H, Letter.H, Letter.A], ![Letter.H, Letter.V, Letter.H], ![Letter.N, Letter.N, Letter.N], ![Letter.V, Letter.A, Letter.A], ![Letter.V, Letter.D, Letter.H]}
  | .A => {![Letter.A, Letter.B, Letter.N], ![Letter.A, Letter.N, Letter.D], ![Letter.B, Letter.N, Letter.A], ![Letter.B, Letter.V, Letter.V], ![Letter.H, Letter.D, Letter.N], ![Letter.N, Letter.A, Letter.B], ![Letter.N, Letter.D, Letter.A], ![Letter.V, Letter.N, Letter.V], ![Letter.V, Letter.V, Letter.N]}
  | .D => {![Letter.D, Letter.N, Letter.N], ![Letter.N, Letter.D, Letter.N], ![Letter.N, Letter.N, Letter.D]}
  | .O => ∅
  | .H => {![Letter.B, Letter.H, Letter.N], ![Letter.H, Letter.N, Letter.B], ![Letter.N, Letter.B, Letter.H]}
  | .V => {![Letter.A, Letter.V, Letter.N], ![Letter.D, Letter.H, Letter.N], ![Letter.H, Letter.N, Letter.A], ![Letter.N, Letter.A, Letter.H], ![Letter.N, Letter.D, Letter.V], ![Letter.N, Letter.N, Letter.V], ![Letter.N, Letter.V, Letter.N], ![Letter.V, Letter.N, Letter.D], ![Letter.V, Letter.N, Letter.N]}

def S_31d500a381a04d9a : Subst Letter Letter.sep 3 :=
  ⟨T_31d500a381a04d9a, by native_decide, by native_decide⟩

def T_36518f191584a644 : Letter → Finset (Fin 3 → Letter)
  | .B => {![Letter.A, Letter.A, Letter.V], ![Letter.A, Letter.H, Letter.D], ![Letter.A, Letter.N, Letter.V], ![Letter.B, Letter.B, Letter.B], ![Letter.D, Letter.B, Letter.H], ![Letter.D, Letter.H, Letter.V], ![Letter.D, Letter.V, Letter.D], ![Letter.H, Letter.A, Letter.A], ![Letter.H, Letter.D, Letter.B], ![Letter.N, Letter.H, Letter.A], ![Letter.N, Letter.V, Letter.D], ![Letter.V, Letter.A, Letter.D], ![Letter.V, Letter.A, Letter.N], ![Letter.V, Letter.H, Letter.V]}
  | .N => {![Letter.A, Letter.A, Letter.B], ![Letter.A, Letter.B, Letter.V], ![Letter.B, Letter.H, Letter.A], ![Letter.D, Letter.A, Letter.A], ![Letter.D, Letter.D, Letter.D], ![Letter.H, Letter.A, Letter.D], ![Letter.H, Letter.D, Letter.V], ![Letter.N, Letter.N, Letter.N], ![Letter.V, Letter.H, Letter.D], ![Letter.V, Letter.V, Letter.V]}
  | .A => {![Letter.B, Letter.N, Letter.D], ![Letter.B, Letter.V, Letter.H], ![Letter.D, Letter.B, Letter.N], ![Letter.D, Letter.N, Letter.A], ![Letter.H, Letter.N, Letter.H], ![Letter.H, Letter.V, Letter.N], ![Letter.N, Letter.A, Letter.B], ![Letter.N, Letter.D, Letter.D], ![Letter.V, Letter.D, Letter.N]}
  | .D => {![Letter.A, Letter.N, Letter.N], ![Letter.N, Letter.D, Letter.N], ![Letter.N, Letter.N, Letter.A]}
  | .O => ∅
  | .H => {![Letter.B, Letter.H, Letter.N], ![Letter.N, Letter.B, Letter.V], ![Letter.V, Letter.N, Letter.B]}
  | .V => {![Letter.A, Letter.H, Letter.N], ![Letter.D, Letter.V, Letter.N], ![Letter.H, Letter.N, Letter.A], ![Letter.H, Letter.N, Letter.N], ![Letter.N, Letter.A, Letter.V], ![Letter.N, Letter.D, Letter.H], ![Letter.N, Letter.N, Letter.H], ![Letter.N, Letter.V, Letter.N], ![Letter.V, Letter.N, Letter.D]}

def S_36518f191584a644 : Subst Letter Letter.sep 3 :=
  ⟨T_36518f191584a644, by native_decide, by native_decide⟩

def T_3b145410351af05c : Letter → Finset (Fin 3 → Letter)
  | .B => {![Letter.A, Letter.B, Letter.H], ![Letter.B, Letter.B, Letter.B], ![Letter.B, Letter.V, Letter.D], ![Letter.D, Letter.A, Letter.V], ![Letter.D, Letter.D, Letter.H], ![Letter.D, Letter.H, Letter.A], ![Letter.D, Letter.N, Letter.V], ![Letter.H, Letter.A, Letter.D], ![Letter.H, Letter.A, Letter.N], ![Letter.N, Letter.H, Letter.A], ![Letter.V, Letter.A, Letter.A], ![Letter.V, Letter.D, Letter.N], ![Letter.V, Letter.H, Letter.D], ![Letter.V, Letter.H, Letter.V]}
  | .N => {![Letter.A, Letter.A, Letter.D], ![Letter.A, Letter.H, Letter.H], ![Letter.B, Letter.H, Letter.A], ![Letter.D, Letter.A, Letter.H], ![Letter.D, Letter.B, Letter.A], ![Letter.D, Letter.D, Letter.D], ![Letter.H, Letter.H, Letter.V], ![Letter.N, Letter.N, Letter.N], ![Letter.V, Letter.A, Letter.V], ![Letter.V, Letter.D, Letter.B]}
  | .A => {![Letter.A, Letter.A, Letter.N], ![Letter.A, Letter.N, Letter.V], ![Letter.B, Letter.N, Letter.D], ![Letter.D, Letter.B, Letter.N], ![Letter.H, Letter.N, Letter.H], ![Letter.H, Letter.V, Letter.B], ![Letter.N, Letter.A, Letter.B], ![Letter.N, Letter.D, Letter.D], ![Letter.N, Letter.V, Letter.H]}
  | .D => {![Letter.A, Letter.N, Letter.N], ![Letter.N, Letter.D, Letter.N], ![Letter.N, Letter.N, Letter.A]}
  | .O => ∅
  | .H => {![Letter.B, Letter.H, Letter.N], ![Letter.N, Letter.B, Letter.V], ![Letter.V, Letter.N, Letter.B]}
  | .V => {![Letter.A, Letter.V, Letter.N], ![Letter.D, Letter.H, Letter.N], ![Letter.H, Letter.N, Letter.D], ![Letter.H, Letter.N, Letter.N], ![Letter.N, Letter.A, Letter.V], ![Letter.N, Letter.D, Letter.H], ![Letter.N, Letter.N, Letter.H], ![Letter.N, Letter.V, Letter.N], ![Letter.V, Letter.N, Letter.A]}

def S_3b145410351af05c : Subst Letter Letter.sep 3 :=
  ⟨T_3b145410351af05c, by native_decide, by native_decide⟩

def T_3daf90758a80fbb9 : Letter → Finset (Fin 3 → Letter)
  | .B => {![Letter.A, Letter.A, Letter.V], ![Letter.A, Letter.D, Letter.H], ![Letter.A, Letter.N, Letter.H], ![Letter.A, Letter.V, Letter.D], ![Letter.B, Letter.B, Letter.B], ![Letter.B, Letter.H, Letter.A], ![Letter.D, Letter.B, Letter.V], ![Letter.H, Letter.A, Letter.N], ![Letter.H, Letter.D, Letter.D], ![Letter.H, Letter.V, Letter.A], ![Letter.H, Letter.V, Letter.H], ![Letter.N, Letter.V, Letter.D], ![Letter.V, Letter.D, Letter.A], ![Letter.V, Letter.D, Letter.N]}
  | .N => {![Letter.A, Letter.A, Letter.A], ![Letter.A, Letter.B, Letter.D], ![Letter.A, Letter.D, Letter.V], ![Letter.B, Letter.V, Letter.D], ![Letter.D, Letter.D, Letter.A], ![Letter.D, Letter.V, Letter.V], ![Letter.H, Letter.A, Letter.B], ![Letter.H, Letter.D, Letter.H], ![Letter.N, Letter.N, Letter.N], ![Letter.V, Letter.V, Letter.H]}
  | .A => {![Letter.A, Letter.B, Letter.N], ![Letter.B, Letter.N, Letter.A], ![Letter.D, Letter.D, Letter.N], ![Letter.D, Letter.N, Letter.H], ![Letter.N, Letter.A, Letter.A], ![Letter.N, Letter.D, Letter.B], ![Letter.N, Letter.H, Letter.V], ![Letter.V, Letter.H, Letter.B], ![Letter.V, Letter.N, Letter.V]}
  | .D => {![Letter.D, Letter.N, Letter.N], ![Letter.N, Letter.A, Letter.N], ![Letter.N, Letter.N, Letter.D]}
  | .O => ∅
  | .H => {![Letter.B, Letter.V, Letter.N], ![Letter.H, Letter.N, Letter.B], ![Letter.N, Letter.B, Letter.H]}
  | .V => {![Letter.A, Letter.V, Letter.N], ![Letter.D, Letter.H, Letter.N], ![Letter.H, Letter.N, Letter.D], ![Letter.N, Letter.A, Letter.V], ![Letter.N, Letter.D, Letter.H], ![Letter.N, Letter.H, Letter.N], ![Letter.N, Letter.N, Letter.V], ![Letter.V, Letter.N, Letter.A], ![Letter.V, Letter.N, Letter.N]}

def S_3daf90758a80fbb9 : Subst Letter Letter.sep 3 :=
  ⟨T_3daf90758a80fbb9, by native_decide, by native_decide⟩

def T_3e8694d6a5bfe173 : Letter → Finset (Fin 3 → Letter)
  | .B => {![Letter.A, Letter.A, Letter.H], ![Letter.A, Letter.D, Letter.V], ![Letter.A, Letter.H, Letter.D], ![Letter.A, Letter.N, Letter.H], ![Letter.B, Letter.B, Letter.B], ![Letter.B, Letter.V, Letter.A], ![Letter.D, Letter.B, Letter.V], ![Letter.H, Letter.A, Letter.D], ![Letter.H, Letter.D, Letter.N], ![Letter.H, Letter.H, Letter.A], ![Letter.H, Letter.H, Letter.H], ![Letter.N, Letter.H, Letter.D], ![Letter.V, Letter.A, Letter.A], ![Letter.V, Letter.A, Letter.N]}
  | .N => {![Letter.A, Letter.A, Letter.V], ![Letter.A, Letter.B, Letter.D], ![Letter.A, Letter.D, Letter.A], ![Letter.B, Letter.H, Letter.D], ![Letter.D, Letter.A, Letter.A], ![Letter.D, Letter.H, Letter.V], ![Letter.H, Letter.A, Letter.H], ![Letter.H, Letter.D, Letter.B], ![Letter.N, Letter.N, Letter.N], ![Letter.V, Letter.H, Letter.H]}
  | .A => {![Letter.A, Letter.B, Letter.N], ![Letter.B, Letter.N, Letter.A], ![Letter.D, Letter.A, Letter.N], ![Letter.D, Letter.N, Letter.H], ![Letter.N, Letter.A, Letter.B], ![Letter.N, Letter.D, Letter.A], ![Letter.N, Letter.V, Letter.V], ![Letter.V, Letter.N, Letter.V], ![Letter.V, Letter.V, Letter.B]}
  | .D => {![Letter.D, Letter.N, Letter.N], ![Letter.N, Letter.D, Letter.N], ![Letter.N, Letter.N, Letter.D]}
  | .O => ∅
  | .H => {![Letter.B, Letter.H, Letter.N], ![Letter.H, Letter.N, Letter.B], ![Letter.N, Letter.B, Letter.H]}
  | .V => {![Letter.A, Letter.H, Letter.N], ![Letter.D, Letter.V, Letter.N], ![Letter.H, Letter.N, Letter.D], ![Letter.N, Letter.A, Letter.H], ![Letter.N, Letter.D, Letter.V], ![Letter.N, Letter.N, Letter.V], ![Letter.N, Letter.V, Letter.N], ![Letter.V, Letter.N, Letter.A], ![Letter.V, Letter.N, Letter.N]}

def S_3e8694d6a5bfe173 : Subst Letter Letter.sep 3 :=
  ⟨T_3e8694d6a5bfe173, by native_decide, by native_decide⟩

def T_59b3ea5954777333 : Letter → Finset (Fin 3 → Letter)
  | .B => {![Letter.A, Letter.A, Letter.V], ![Letter.A, Letter.H, Letter.H], ![Letter.A, Letter.V, Letter.B], ![Letter.B, Letter.B, Letter.B], ![Letter.D, Letter.A, Letter.H], ![Letter.D, Letter.D, Letter.V], ![Letter.D, Letter.H, Letter.B], ![Letter.H, Letter.A, Letter.A], ![Letter.H, Letter.N, Letter.A], ![Letter.N, Letter.A, Letter.V], ![Letter.N, Letter.D, Letter.H], ![Letter.V, Letter.B, Letter.D], ![Letter.V, Letter.D, Letter.A]}
  | .N => {![Letter.A, Letter.A, Letter.D], ![Letter.A, Letter.D, Letter.A], ![Letter.B, Letter.D, Letter.H], ![Letter.D, Letter.B, Letter.A], ![Letter.D, Letter.H, Letter.B], ![Letter.H, Letter.A, Letter.H], ![Letter.H, Letter.H, Letter.V], ![Letter.N, Letter.N, Letter.N], ![Letter.V, Letter.A, Letter.A], ![Letter.V, Letter.H, Letter.D]}
  | .A => {![Letter.D, Letter.N, Letter.N], ![Letter.N, Letter.D, Letter.N], ![Letter.N, Letter.N, Letter.D]}
  | .D => {![Letter.A, Letter.D, Letter.N], ![Letter.A, Letter.N, Letter.B], ![Letter.B, Letter.A, Letter.N], ![Letter.B, Letter.V, Letter.V], ![Letter.H, Letter.N, Letter.D], ![Letter.N, Letter.A, Letter.D], ![Letter.N, Letter.B, Letter.A], ![Letter.V, Letter.N, Letter.V], ![Letter.V, Letter.V, Letter.N]}
  | .O => ∅
  | .H => {![Letter.A, Letter.N, Letter.V], ![Letter.D, Letter.N, Letter.H], ![Letter.H, Letter.A, Letter.N], ![Letter.N, Letter.H, Letter.A], ![Letter.N, Letter.N, Letter.V], ![Letter.N, Letter.V, Letter.D], ![Letter.N, Letter.V, Letter.N], ![Letter.V, Letter.D, Letter.N], ![Letter.V, Letter.N, Letter.N]}
  | .V => {![Letter.B, Letter.N, Letter.H], ![Letter.H, Letter.B, Letter.N], ![Letter.N, Letter.H, Letter.B]}

def S_59b3ea5954777333 : Subst Letter Letter.sep 3 :=
  ⟨T_59b3ea5954777333, by native_decide, by native_decide⟩

def T_6356700cb05251b5 : Letter → Finset (Fin 3 → Letter)
  | .B => {![Letter.A, Letter.D, Letter.H], ![Letter.A, Letter.H, Letter.A], ![Letter.A, Letter.H, Letter.N], ![Letter.A, Letter.V, Letter.D], ![Letter.B, Letter.A, Letter.V], ![Letter.B, Letter.B, Letter.B], ![Letter.D, Letter.D, Letter.V], ![Letter.D, Letter.H, Letter.D], ![Letter.D, Letter.V, Letter.N], ![Letter.H, Letter.B, Letter.D], ![Letter.H, Letter.V, Letter.A], ![Letter.N, Letter.D, Letter.H], ![Letter.V, Letter.B, Letter.A]}
  | .N => {![Letter.A, Letter.A, Letter.A], ![Letter.A, Letter.D, Letter.V], ![Letter.A, Letter.V, Letter.H], ![Letter.B, Letter.D, Letter.D], ![Letter.D, Letter.D, Letter.A], ![Letter.D, Letter.V, Letter.B], ![Letter.H, Letter.A, Letter.V], ![Letter.H, Letter.B, Letter.D], ![Letter.H, Letter.H, Letter.H], ![Letter.N, Letter.N, Letter.N]}
  | .A => {![Letter.D, Letter.N, Letter.N], ![Letter.N, Letter.A, Letter.N], ![Letter.N, Letter.N, Letter.D]}
  | .D => {![Letter.A, Letter.A, Letter.N], ![Letter.A, Letter.N, Letter.B], ![Letter.B, Letter.D, Letter.N], ![Letter.D, Letter.N, Letter.A], ![Letter.N, Letter.A, Letter.H], ![Letter.N, Letter.B, Letter.A], ![Letter.N, Letter.H, Letter.V], ![Letter.V, Letter.H, Letter.B], ![Letter.V, Letter.N, Letter.V]}
  | .O => ∅
  | .H => {![Letter.A, Letter.N, Letter.H], ![Letter.D, Letter.N, Letter.V], ![Letter.H, Letter.D, Letter.N], ![Letter.N, Letter.H, Letter.A], ![Letter.N, Letter.H, Letter.N], ![Letter.N, Letter.N, Letter.V], ![Letter.N, Letter.V, Letter.D], ![Letter.V, Letter.A, Letter.N], ![Letter.V, Letter.N, Letter.N]}
  | .V => {![Letter.B, Letter.N, Letter.H], ![Letter.H, Letter.B, Letter.N], ![Letter.N, Letter.V, Letter.B]}

def S_6356700cb05251b5 : Subst Letter Letter.sep 3 :=
  ⟨T_6356700cb05251b5, by native_decide, by native_decide⟩

def T_660b0244997e1b9c : Letter → Finset (Fin 3 → Letter)
  | .B => {![Letter.A, Letter.A, Letter.H], ![Letter.A, Letter.D, Letter.V], ![Letter.A, Letter.H, Letter.D], ![Letter.A, Letter.N, Letter.H], ![Letter.B, Letter.B, Letter.B], ![Letter.B, Letter.V, Letter.A], ![Letter.D, Letter.B, Letter.V], ![Letter.H, Letter.A, Letter.D], ![Letter.H, Letter.D, Letter.N], ![Letter.H, Letter.H, Letter.A], ![Letter.H, Letter.H, Letter.H], ![Letter.N, Letter.H, Letter.D], ![Letter.V, Letter.A, Letter.A], ![Letter.V, Letter.A, Letter.N]}
  | .N => {![Letter.A, Letter.A, Letter.V], ![Letter.A, Letter.B, Letter.D], ![Letter.A, Letter.D, Letter.A], ![Letter.B, Letter.H, Letter.D], ![Letter.D, Letter.H, Letter.V], ![Letter.H, Letter.A, Letter.V], ![Letter.H, Letter.D, Letter.B], ![Letter.N, Letter.N, Letter.N], ![Letter.V, Letter.H, Letter.H]}
  | .A => {![Letter.A, Letter.B, Letter.N], ![Letter.B, Letter.N, Letter.A], ![Letter.D, Letter.A, Letter.B], ![Letter.D, Letter.N, Letter.H], ![Letter.N, Letter.A, Letter.B], ![Letter.N, Letter.D, Letter.A], ![Letter.N, Letter.V, Letter.V], ![Letter.V, Letter.N, Letter.V], ![Letter.V, Letter.V, Letter.B]}
  | .D => {![Letter.D, Letter.N, Letter.N], ![Letter.N, Letter.D, Letter.N], ![Letter.N, Letter.N, Letter.D]}
  | .O => ∅
  | .H => {![Letter.B, Letter.H, Letter.N], ![Letter.H, Letter.N, Letter.B], ![Letter.N, Letter.B, Letter.H]}
  | .V => {![Letter.A, Letter.H, Letter.N], ![Letter.D, Letter.V, Letter.N], ![Letter.H, Letter.N, Letter.D], ![Letter.N, Letter.A, Letter.H], ![Letter.N, Letter.D, Letter.V], ![Letter.N, Letter.N, Letter.V], ![Letter.N, Letter.V, Letter.N], ![Letter.V, Letter.N, Letter.A], ![Letter.V, Letter.N, Letter.N]}

def S_660b0244997e1b9c : Subst Letter Letter.sep 3 :=
  ⟨T_660b0244997e1b9c, by native_decide, by native_decide⟩

def T_6859b0ec25991d42 : Letter → Finset (Fin 3 → Letter)
  | .B => {![Letter.A, Letter.B, Letter.V], ![Letter.A, Letter.H, Letter.H], ![Letter.A, Letter.V, Letter.A], ![Letter.B, Letter.B, Letter.B], ![Letter.D, Letter.A, Letter.H], ![Letter.D, Letter.H, Letter.A], ![Letter.D, Letter.N, Letter.H], ![Letter.H, Letter.A, Letter.A], ![Letter.H, Letter.A, Letter.N], ![Letter.H, Letter.H, Letter.H], ![Letter.N, Letter.H, Letter.D], ![Letter.N, Letter.V, Letter.A], ![Letter.V, Letter.A, Letter.D], ![Letter.V, Letter.D, Letter.B]}
  | .N => {![Letter.A, Letter.A, Letter.D], ![Letter.A, Letter.D, Letter.A], ![Letter.B, Letter.H, Letter.D], ![Letter.D, Letter.A, Letter.B], ![Letter.D, Letter.B, Letter.H], ![Letter.H, Letter.H, Letter.A], ![Letter.H, Letter.V, Letter.H], ![Letter.N, Letter.N, Letter.N], ![Letter.V, Letter.A, Letter.A], ![Letter.V, Letter.D, Letter.H]}
  | .A => {![Letter.A, Letter.B, Letter.N], ![Letter.A, Letter.N, Letter.D], ![Letter.B, Letter.N, Letter.A], ![Letter.B, Letter.V, Letter.V], ![Letter.H, Letter.D, Letter.N], ![Letter.N, Letter.A, Letter.B], ![Letter.N, Letter.D, Letter.A], ![Letter.V, Letter.N, Letter.V], ![Letter.V, Letter.V, Letter.N]}
  | .D => {![Letter.D, Letter.N, Letter.N], ![Letter.N, Letter.D, Letter.N], ![Letter.N, Letter.N, Letter.D]}
  | .O => ∅
  | .H => {![Letter.B, Letter.H, Letter.N], ![Letter.H, Letter.N, Letter.B], ![Letter.N, Letter.B, Letter.H]}
  | .V => {![Letter.A, Letter.V, Letter.N], ![Letter.D, Letter.H, Letter.N], ![Letter.H, Letter.N, Letter.A], ![Letter.N, Letter.A, Letter.H], ![Letter.N, Letter.D, Letter.V], ![Letter.N, Letter.N, Letter.V], ![Letter.N, Letter.V, Letter.N], ![Letter.V, Letter.N, Letter.D], ![Letter.V, Letter.N, Letter.N]}

def S_6859b0ec25991d42 : Subst Letter Letter.sep 3 :=
  ⟨T_6859b0ec25991d42, by native_decide, by native_decide⟩

def T_77a9709d00257692 : Letter → Finset (Fin 3 → Letter)
  | .B => {![Letter.A, Letter.A, Letter.V], ![Letter.A, Letter.D, Letter.H], ![Letter.A, Letter.H, Letter.A], ![Letter.A, Letter.N, Letter.V], ![Letter.B, Letter.B, Letter.B], ![Letter.B, Letter.V, Letter.D], ![Letter.D, Letter.D, Letter.V], ![Letter.D, Letter.N, Letter.H], ![Letter.D, Letter.V, Letter.A], ![Letter.H, Letter.A, Letter.H], ![Letter.H, Letter.D, Letter.B], ![Letter.N, Letter.H, Letter.A], ![Letter.V, Letter.A, Letter.B]}
  | .N => {![Letter.A, Letter.A, Letter.D], ![Letter.A, Letter.H, Letter.H], ![Letter.A, Letter.V, Letter.A], ![Letter.B, Letter.D, Letter.A], ![Letter.D, Letter.A, Letter.A], ![Letter.D, Letter.B, Letter.H], ![Letter.H, Letter.D, Letter.B], ![Letter.H, Letter.H, Letter.V], ![Letter.H, Letter.V, Letter.D], ![Letter.N, Letter.N, Letter.N]}
  | .A => {![Letter.D, Letter.N, Letter.N], ![Letter.N, Letter.D, Letter.N], ![Letter.N, Letter.N, Letter.D]}
  | .D => {![Letter.A, Letter.B, Letter.N], ![Letter.A, Letter.N, Letter.D], ![Letter.B, Letter.N, Letter.A], ![Letter.D, Letter.A, Letter.N], ![Letter.N, Letter.A, Letter.B], ![Letter.N, Letter.H, Letter.D], ![Letter.N, Letter.V, Letter.V], ![Letter.V, Letter.B, Letter.V], ![Letter.V, Letter.V, Letter.N]}
  | .O => ∅
  | .H => {![Letter.A, Letter.H, Letter.N], ![Letter.D, Letter.V, Letter.N], ![Letter.H, Letter.N, Letter.A], ![Letter.N, Letter.A, Letter.V], ![Letter.N, Letter.D, Letter.H], ![Letter.N, Letter.N, Letter.V], ![Letter.N, Letter.V, Letter.N], ![Letter.V, Letter.N, Letter.D], ![Letter.V, Letter.N, Letter.N]}
  | .V => {![Letter.B, Letter.H, Letter.N], ![Letter.H, Letter.N, Letter.B], ![Letter.N, Letter.B, Letter.H]}

def S_77a9709d00257692 : Subst Letter Letter.sep 3 :=
  ⟨T_77a9709d00257692, by native_decide, by native_decide⟩

def T_787c56f586779bfd : Letter → Finset (Fin 3 → Letter)
  | .B => {![Letter.A, Letter.A, Letter.V], ![Letter.A, Letter.D, Letter.H], ![Letter.A, Letter.H, Letter.A], ![Letter.A, Letter.N, Letter.V], ![Letter.B, Letter.B, Letter.B], ![Letter.B, Letter.V, Letter.D], ![Letter.D, Letter.B, Letter.H], ![Letter.H, Letter.A, Letter.A], ![Letter.H, Letter.D, Letter.N], ![Letter.H, Letter.H, Letter.D], ![Letter.H, Letter.H, Letter.V], ![Letter.N, Letter.H, Letter.A], ![Letter.V, Letter.A, Letter.D], ![Letter.V, Letter.A, Letter.N]}
  | .N => {![Letter.A, Letter.A, Letter.H], ![Letter.A, Letter.B, Letter.A], ![Letter.A, Letter.D, Letter.D], ![Letter.B, Letter.H, Letter.A], ![Letter.D, Letter.H, Letter.H], ![Letter.H, Letter.A, Letter.H], ![Letter.H, Letter.D, Letter.B], ![Letter.N, Letter.N, Letter.N], ![Letter.V, Letter.H, Letter.V]}
  | .A => {![Letter.A, Letter.B, Letter.N], ![Letter.B, Letter.N, Letter.D], ![Letter.D, Letter.A, Letter.B], ![Letter.D, Letter.N, Letter.V], ![Letter.N, Letter.A, Letter.B], ![Letter.N, Letter.D, Letter.D], ![Letter.N, Letter.V, Letter.H], ![Letter.V, Letter.N, Letter.H], ![Letter.V, Letter.V, Letter.B]}
  | .D => {![Letter.D, Letter.N, Letter.N], ![Letter.N, Letter.D, Letter.N], ![Letter.N, Letter.N, Letter.A]}
  | .O => ∅
  | .H => {![Letter.B, Letter.H, Letter.N], ![Letter.H, Letter.N, Letter.B], ![Letter.N, Letter.B, Letter.V]}
  | .V => {![Letter.A, Letter.H, Letter.N], ![Letter.D, Letter.V, Letter.N], ![Letter.H, Letter.N, Letter.A], ![Letter.N, Letter.A, Letter.V], ![Letter.N, Letter.D, Letter.H], ![Letter.N, Letter.N, Letter.H], ![Letter.N, Letter.V, Letter.N], ![Letter.V, Letter.N, Letter.D], ![Letter.V, Letter.N, Letter.N]}

def S_787c56f586779bfd : Subst Letter Letter.sep 3 :=
  ⟨T_787c56f586779bfd, by native_decide, by native_decide⟩

def T_7b6c163f0dc4b608 : Letter → Finset (Fin 3 → Letter)
  | .B => {![Letter.A, Letter.D, Letter.H], ![Letter.A, Letter.H, Letter.A], ![Letter.A, Letter.H, Letter.N], ![Letter.A, Letter.V, Letter.D], ![Letter.B, Letter.A, Letter.V], ![Letter.B, Letter.B, Letter.B], ![Letter.D, Letter.V, Letter.B], ![Letter.H, Letter.A, Letter.H], ![Letter.H, Letter.D, Letter.A], ![Letter.H, Letter.H, Letter.H], ![Letter.H, Letter.N, Letter.D], ![Letter.N, Letter.D, Letter.H], ![Letter.V, Letter.A, Letter.A], ![Letter.V, Letter.N, Letter.A]}
  | .N => {![Letter.A, Letter.A, Letter.D], ![Letter.A, Letter.D, Letter.B], ![Letter.A, Letter.V, Letter.A], ![Letter.B, Letter.D, Letter.H], ![Letter.D, Letter.A, Letter.A], ![Letter.D, Letter.V, Letter.H], ![Letter.H, Letter.B, Letter.D], ![Letter.H, Letter.H, Letter.A], ![Letter.N, Letter.N, Letter.N], ![Letter.V, Letter.H, Letter.H]}
  | .A => {![Letter.A, Letter.N, Letter.B], ![Letter.B, Letter.A, Letter.N], ![Letter.D, Letter.H, Letter.N], ![Letter.D, Letter.N, Letter.A], ![Letter.N, Letter.A, Letter.D], ![Letter.N, Letter.B, Letter.A], ![Letter.N, Letter.V, Letter.V], ![Letter.V, Letter.B, Letter.V], ![Letter.V, Letter.V, Letter.N]}
  | .D => {![Letter.D, Letter.N, Letter.N], ![Letter.N, Letter.D, Letter.N], ![Letter.N, Letter.N, Letter.D]}
  | .O => ∅
  | .H => {![Letter.B, Letter.N, Letter.H], ![Letter.H, Letter.B, Letter.N], ![Letter.N, Letter.H, Letter.B]}
  | .V => {![Letter.A, Letter.N, Letter.H], ![Letter.D, Letter.N, Letter.V], ![Letter.H, Letter.D, Letter.N], ![Letter.N, Letter.H, Letter.A], ![Letter.N, Letter.N, Letter.V], ![Letter.N, Letter.V, Letter.D], ![Letter.N, Letter.V, Letter.N], ![Letter.V, Letter.A, Letter.N], ![Letter.V, Letter.N, Letter.N]}

def S_7b6c163f0dc4b608 : Subst Letter Letter.sep 3 :=
  ⟨T_7b6c163f0dc4b608, by native_decide, by native_decide⟩

def T_a41106e52a48b9a6 : Letter → Finset (Fin 3 → Letter)
  | .B => {![Letter.A, Letter.A, Letter.V], ![Letter.A, Letter.D, Letter.H], ![Letter.A, Letter.H, Letter.A], ![Letter.A, Letter.N, Letter.V], ![Letter.B, Letter.B, Letter.B], ![Letter.B, Letter.V, Letter.D], ![Letter.D, Letter.D, Letter.V], ![Letter.D, Letter.N, Letter.H], ![Letter.D, Letter.V, Letter.A], ![Letter.H, Letter.A, Letter.H], ![Letter.H, Letter.D, Letter.B], ![Letter.N, Letter.H, Letter.A], ![Letter.V, Letter.A, Letter.B]}
  | .N => {![Letter.A, Letter.A, Letter.D], ![Letter.A, Letter.H, Letter.H], ![Letter.A, Letter.V, Letter.A], ![Letter.B, Letter.D, Letter.A], ![Letter.D, Letter.A, Letter.A], ![Letter.D, Letter.B, Letter.H], ![Letter.H, Letter.D, Letter.B], ![Letter.H, Letter.H, Letter.V], ![Letter.H, Letter.V, Letter.D], ![Letter.N, Letter.N, Letter.N]}
  | .A => {![Letter.A, Letter.B, Letter.N], ![Letter.A, Letter.N, Letter.D], ![Letter.B, Letter.N, Letter.A], ![Letter.D, Letter.A, Letter.N], ![Letter.N, Letter.A, Letter.B], ![Letter.N, Letter.H, Letter.D], ![Letter.N, Letter.V, Letter.V], ![Letter.V, Letter.B, Letter.V], ![Letter.V, Letter.V, Letter.N]}
  | .D => {![Letter.D, Letter.N, Letter.N], ![Letter.N, Letter.D, Letter.N], ![Letter.N, Letter.N, Letter.D]}
  | .O => ∅
  | .H => {![Letter.B, Letter.H, Letter.N], ![Letter.H, Letter.N, Letter.B], ![Letter.N, Letter.B, Letter.H]}
  | .V => {![Letter.A, Letter.H, Letter.N], ![Letter.D, Letter.V, Letter.N], ![Letter.H, Letter.N, Letter.A], ![Letter.N, Letter.A, Letter.V], ![Letter.N, Letter.D, Letter.H], ![Letter.N, Letter.N, Letter.V], ![Letter.N, Letter.V, Letter.N], ![Letter.V, Letter.N, Letter.D], ![Letter.V, Letter.N, Letter.N]}

def S_a41106e52a48b9a6 : Subst Letter Letter.sep 3 :=
  ⟨T_a41106e52a48b9a6, by native_decide, by native_decide⟩

def T_adfa0199080b0c49 : Finset (Fin 4 → Letter) :=
  {![Letter.A, Letter.D, Letter.A, Letter.H], ![Letter.A, Letter.D, Letter.D, Letter.D], ![Letter.A, Letter.D, Letter.H, Letter.V], ![Letter.A, Letter.D, Letter.N, Letter.H], ![Letter.A, Letter.D, Letter.V, Letter.B], ![Letter.A, Letter.H, Letter.B, Letter.A], ![Letter.A, Letter.H, Letter.B, Letter.N], ![Letter.A, Letter.N, Letter.B, Letter.H], ![Letter.A, Letter.N, Letter.H, Letter.B], ![Letter.A, Letter.N, Letter.V, Letter.V], ![Letter.B, Letter.A, Letter.B, Letter.H], ![Letter.B, Letter.A, Letter.H, Letter.B], ![Letter.B, Letter.A, Letter.V, Letter.V], ![Letter.B, Letter.B, Letter.B, Letter.A], ![Letter.B, Letter.B, Letter.B, Letter.N], ![Letter.D, Letter.H, Letter.B, Letter.V], ![Letter.D, Letter.H, Letter.D, Letter.D], ![Letter.D, Letter.H, Letter.H, Letter.A], ![Letter.D, Letter.H, Letter.H, Letter.N], ![Letter.D, Letter.H, Letter.V, Letter.H], ![Letter.D, Letter.N, Letter.B, Letter.D], ![Letter.D, Letter.N, Letter.V, Letter.B], ![Letter.D, Letter.V, Letter.A, Letter.B], ![Letter.D, Letter.V, Letter.N, Letter.B], ![Letter.H, Letter.B, Letter.A, Letter.V], ![Letter.H, Letter.B, Letter.D, Letter.A], ![Letter.H, Letter.B, Letter.D, Letter.N], ![Letter.H, Letter.B, Letter.H, Letter.H], ![Letter.H, Letter.B, Letter.N, Letter.V], ![Letter.H, Letter.D, Letter.A, Letter.B], ![Letter.H, Letter.D, Letter.N, Letter.B], ![Letter.N, Letter.D, Letter.B, Letter.D], ![Letter.N, Letter.D, Letter.V, Letter.B], ![Letter.N, Letter.H, Letter.A, Letter.V], ![Letter.N, Letter.H, Letter.D, Letter.A], ![Letter.N, Letter.H, Letter.D, Letter.N], ![Letter.N, Letter.H, Letter.H, Letter.H], ![Letter.N, Letter.H, Letter.N, Letter.V], ![Letter.N, Letter.N, Letter.A, Letter.H], ![Letter.N, Letter.N, Letter.D, Letter.D], ![Letter.N, Letter.N, Letter.H, Letter.V], ![Letter.N, Letter.N, Letter.N, Letter.H], ![Letter.N, Letter.N, Letter.V, Letter.B], ![Letter.N, Letter.V, Letter.A, Letter.B], ![Letter.N, Letter.V, Letter.N, Letter.B], ![Letter.V, Letter.A, Letter.A, Letter.B], ![Letter.V, Letter.A, Letter.N, Letter.B], ![Letter.V, Letter.N, Letter.A, Letter.B], ![Letter.V, Letter.N, Letter.N, Letter.B], ![Letter.V, Letter.V, Letter.B, Letter.H], ![Letter.V, Letter.V, Letter.H, Letter.B], ![Letter.V, Letter.V, Letter.V, Letter.V]}

def S_adfa0199080b0c49 : Code Letter Letter.sep 4 := ⟨T_adfa0199080b0c49, by native_decide⟩

def T_b014d29111062762 : Letter → Finset (Fin 2 → Letter)
  | .B => {![Letter.B, Letter.B], ![Letter.H, Letter.D], ![Letter.V, Letter.A]}
  | .N => {![Letter.A, Letter.A], ![Letter.N, Letter.N]}
  | .A => {![Letter.D, Letter.B], ![Letter.H, Letter.V], ![Letter.N, Letter.A], ![Letter.V, Letter.D]}
  | .D => {![Letter.A, Letter.N], ![Letter.N, Letter.D]}
  | .O => ∅
  | .H => {![Letter.B, Letter.H], ![Letter.V, Letter.N]}
  | .V => {![Letter.A, Letter.H], ![Letter.D, Letter.V], ![Letter.H, Letter.N], ![Letter.N, Letter.V]}

def S_b014d29111062762 : Subst Letter Letter.sep 2 :=
  ⟨T_b014d29111062762, by native_decide, by native_decide⟩

def T_cc0e5d2202d76d5d : Letter → Finset (Fin 3 → Letter)
  | .B => {![Letter.A, Letter.A, Letter.H], ![Letter.A, Letter.H, Letter.V], ![Letter.A, Letter.V, Letter.B], ![Letter.B, Letter.B, Letter.B], ![Letter.D, Letter.A, Letter.V], ![Letter.D, Letter.D, Letter.H], ![Letter.D, Letter.H, Letter.B], ![Letter.H, Letter.A, Letter.D], ![Letter.H, Letter.N, Letter.D], ![Letter.N, Letter.A, Letter.H], ![Letter.N, Letter.D, Letter.V], ![Letter.V, Letter.B, Letter.A], ![Letter.V, Letter.D, Letter.D]}
  | .N => {![Letter.A, Letter.A, Letter.A], ![Letter.A, Letter.D, Letter.D], ![Letter.B, Letter.D, Letter.V], ![Letter.D, Letter.B, Letter.D], ![Letter.D, Letter.H, Letter.B], ![Letter.H, Letter.A, Letter.V], ![Letter.H, Letter.H, Letter.H], ![Letter.N, Letter.N, Letter.N], ![Letter.V, Letter.A, Letter.D], ![Letter.V, Letter.H, Letter.A]}
  | .A => {![Letter.D, Letter.N, Letter.N], ![Letter.N, Letter.D, Letter.N], ![Letter.N, Letter.N, Letter.A]}
  | .D => {![Letter.A, Letter.D, Letter.N], ![Letter.A, Letter.N, Letter.B], ![Letter.B, Letter.A, Letter.N], ![Letter.B, Letter.V, Letter.H], ![Letter.H, Letter.N, Letter.A], ![Letter.N, Letter.A, Letter.A], ![Letter.N, Letter.B, Letter.D], ![Letter.V, Letter.N, Letter.H], ![Letter.V, Letter.V, Letter.N]}
  | .O => ∅
  | .H => {![Letter.A, Letter.N, Letter.H], ![Letter.D, Letter.N, Letter.V], ![Letter.H, Letter.A, Letter.N], ![Letter.N, Letter.H, Letter.D], ![Letter.N, Letter.N, Letter.H], ![Letter.N, Letter.V, Letter.A], ![Letter.N, Letter.V, Letter.N], ![Letter.V, Letter.D, Letter.N], ![Letter.V, Letter.N, Letter.N]}
  | .V => {![Letter.B, Letter.N, Letter.V], ![Letter.H, Letter.B, Letter.N], ![Letter.N, Letter.H, Letter.B]}

def S_cc0e5d2202d76d5d : Subst Letter Letter.sep 3 :=
  ⟨T_cc0e5d2202d76d5d, by native_decide, by native_decide⟩

def T_cd41b86686c50a10 : Letter → Finset (Fin 2 → Letter)
  | .B => {![Letter.A, Letter.V], ![Letter.B, Letter.B], ![Letter.D, Letter.H]}
  | .N => {![Letter.A, Letter.A], ![Letter.N, Letter.N]}
  | .A => {![Letter.D, Letter.N], ![Letter.N, Letter.A]}
  | .D => {![Letter.A, Letter.N], ![Letter.B, Letter.D], ![Letter.D, Letter.V], ![Letter.V, Letter.H]}
  | .O => ∅
  | .H => {![Letter.H, Letter.A], ![Letter.N, Letter.H], ![Letter.V, Letter.D], ![Letter.V, Letter.N]}
  | .V => {![Letter.H, Letter.B], ![Letter.N, Letter.V]}

def S_cd41b86686c50a10 : Subst Letter Letter.sep 2 :=
  ⟨T_cd41b86686c50a10, by native_decide, by native_decide⟩

def T_cfb0e1863855bcb0 : Finset (Fin 4 → Letter) :=
  {![Letter.A, Letter.A, Letter.V, Letter.B], ![Letter.A, Letter.B, Letter.H, Letter.V], ![Letter.A, Letter.D, Letter.A, Letter.H], ![Letter.A, Letter.D, Letter.H, Letter.B], ![Letter.A, Letter.H, Letter.N, Letter.V], ![Letter.A, Letter.N, Letter.N, Letter.H], ![Letter.A, Letter.N, Letter.V, Letter.B], ![Letter.A, Letter.V, Letter.N, Letter.B], ![Letter.B, Letter.A, Letter.B, Letter.H], ![Letter.B, Letter.B, Letter.B, Letter.A], ![Letter.B, Letter.B, Letter.B, Letter.N], ![Letter.B, Letter.D, Letter.N, Letter.D], ![Letter.B, Letter.H, Letter.A, Letter.A], ![Letter.B, Letter.H, Letter.A, Letter.N], ![Letter.B, Letter.H, Letter.D, Letter.H], ![Letter.B, Letter.N, Letter.A, Letter.H], ![Letter.B, Letter.N, Letter.D, Letter.D], ![Letter.B, Letter.V, Letter.D, Letter.A], ![Letter.B, Letter.V, Letter.D, Letter.N], ![Letter.B, Letter.V, Letter.V, Letter.H], ![Letter.D, Letter.B, Letter.H, Letter.A], ![Letter.D, Letter.B, Letter.H, Letter.N], ![Letter.D, Letter.D, Letter.A, Letter.D], ![Letter.D, Letter.H, Letter.N, Letter.A], ![Letter.D, Letter.H, Letter.N, Letter.N], ![Letter.D, Letter.N, Letter.N, Letter.D], ![Letter.H, Letter.A, Letter.A, Letter.B], ![Letter.H, Letter.A, Letter.N, Letter.B], ![Letter.H, Letter.B, Letter.H, Letter.H], ![Letter.H, Letter.D, Letter.A, Letter.V], ![Letter.H, Letter.H, Letter.H, Letter.B], ![Letter.H, Letter.H, Letter.N, Letter.H], ![Letter.H, Letter.N, Letter.A, Letter.B], ![Letter.H, Letter.N, Letter.N, Letter.V], ![Letter.N, Letter.A, Letter.V, Letter.B], ![Letter.N, Letter.B, Letter.H, Letter.V], ![Letter.N, Letter.D, Letter.A, Letter.H], ![Letter.N, Letter.D, Letter.H, Letter.B], ![Letter.N, Letter.H, Letter.N, Letter.V], ![Letter.N, Letter.N, Letter.N, Letter.H], ![Letter.N, Letter.N, Letter.V, Letter.B], ![Letter.N, Letter.V, Letter.N, Letter.B], ![Letter.V, Letter.A, Letter.B, Letter.V], ![Letter.V, Letter.A, Letter.D, Letter.B], ![Letter.V, Letter.D, Letter.N, Letter.B], ![Letter.V, Letter.H, Letter.A, Letter.B], ![Letter.V, Letter.H, Letter.D, Letter.V], ![Letter.V, Letter.N, Letter.A, Letter.V], ![Letter.V, Letter.N, Letter.D, Letter.B], ![Letter.V, Letter.N, Letter.N, Letter.B], ![Letter.V, Letter.V, Letter.V, Letter.V]}

def S_cfb0e1863855bcb0 : Code Letter Letter.sep 4 := ⟨T_cfb0e1863855bcb0, by native_decide⟩

def T_e620baced0654ce9 : Letter → Finset (Fin 3 → Letter)
  | .B => {![Letter.A, Letter.A, Letter.H], ![Letter.A, Letter.H, Letter.V], ![Letter.A, Letter.V, Letter.B], ![Letter.B, Letter.B, Letter.B], ![Letter.D, Letter.A, Letter.V], ![Letter.D, Letter.H, Letter.D], ![Letter.D, Letter.H, Letter.N], ![Letter.H, Letter.A, Letter.D], ![Letter.H, Letter.H, Letter.V], ![Letter.H, Letter.N, Letter.D], ![Letter.N, Letter.A, Letter.H], ![Letter.N, Letter.D, Letter.V], ![Letter.V, Letter.B, Letter.A], ![Letter.V, Letter.D, Letter.D]}
  | .N => {![Letter.A, Letter.A, Letter.A], ![Letter.A, Letter.D, Letter.D], ![Letter.B, Letter.D, Letter.V], ![Letter.D, Letter.B, Letter.D], ![Letter.D, Letter.H, Letter.B], ![Letter.H, Letter.A, Letter.V], ![Letter.H, Letter.H, Letter.H], ![Letter.N, Letter.N, Letter.N], ![Letter.V, Letter.A, Letter.D], ![Letter.V, Letter.H, Letter.A]}
  | .A => {![Letter.A, Letter.D, Letter.N], ![Letter.A, Letter.N, Letter.B], ![Letter.B, Letter.A, Letter.N], ![Letter.B, Letter.V, Letter.H], ![Letter.H, Letter.N, Letter.A], ![Letter.N, Letter.A, Letter.A], ![Letter.N, Letter.B, Letter.D], ![Letter.V, Letter.N, Letter.H], ![Letter.V, Letter.V, Letter.N]}
  | .D => {![Letter.D, Letter.N, Letter.N], ![Letter.N, Letter.D, Letter.N], ![Letter.N, Letter.N, Letter.A]}
  | .O => ∅
  | .H => {![Letter.B, Letter.N, Letter.V], ![Letter.H, Letter.B, Letter.N], ![Letter.N, Letter.H, Letter.B]}
  | .V => {![Letter.A, Letter.N, Letter.H], ![Letter.D, Letter.N, Letter.V], ![Letter.H, Letter.A, Letter.N], ![Letter.N, Letter.H, Letter.D], ![Letter.N, Letter.N, Letter.H], ![Letter.N, Letter.V, Letter.A], ![Letter.N, Letter.V, Letter.N], ![Letter.V, Letter.D, Letter.N], ![Letter.V, Letter.N, Letter.N]}

def S_e620baced0654ce9 : Subst Letter Letter.sep 3 :=
  ⟨T_e620baced0654ce9, by native_decide, by native_decide⟩

def T_e788020168e26abb : Letter → Finset (Fin 2 → Letter)
  | .B => {![Letter.A, Letter.V], ![Letter.B, Letter.B], ![Letter.D, Letter.H]}
  | .N => {![Letter.A, Letter.A], ![Letter.N, Letter.N]}
  | .A => {![Letter.A, Letter.N], ![Letter.B, Letter.D], ![Letter.D, Letter.V], ![Letter.V, Letter.H]}
  | .D => {![Letter.D, Letter.N], ![Letter.N, Letter.A]}
  | .O => ∅
  | .H => {![Letter.H, Letter.B], ![Letter.N, Letter.V]}
  | .V => {![Letter.H, Letter.A], ![Letter.N, Letter.H], ![Letter.V, Letter.D], ![Letter.V, Letter.N]}

def S_e788020168e26abb : Subst Letter Letter.sep 2 :=
  ⟨T_e788020168e26abb, by native_decide, by native_decide⟩

def T_e9ef2871c79d62be : Letter → Finset (Fin 2 → Letter)
  | .B => {![Letter.A, Letter.H], ![Letter.B, Letter.B], ![Letter.D, Letter.V]}
  | .N => {![Letter.D, Letter.A], ![Letter.N, Letter.N]}
  | .A => {![Letter.A, Letter.V], ![Letter.B, Letter.D], ![Letter.D, Letter.N], ![Letter.H, Letter.H]}
  | .D => {![Letter.A, Letter.N], ![Letter.N, Letter.A]}
  | .O => ∅
  | .H => {![Letter.N, Letter.V], ![Letter.V, Letter.B]}
  | .V => {![Letter.H, Letter.D], ![Letter.H, Letter.N], ![Letter.N, Letter.H], ![Letter.V, Letter.A]}

def S_e9ef2871c79d62be : Subst Letter Letter.sep 2 :=
  ⟨T_e9ef2871c79d62be, by native_decide, by native_decide⟩

def T_f509c81899188c6f : Letter → Finset (Fin 3 → Letter)
  | .B => {![Letter.A, Letter.V, Letter.B], ![Letter.B, Letter.A, Letter.V], ![Letter.B, Letter.B, Letter.B], ![Letter.D, Letter.D, Letter.H], ![Letter.D, Letter.H, Letter.A], ![Letter.D, Letter.H, Letter.N], ![Letter.D, Letter.V, Letter.D], ![Letter.H, Letter.A, Letter.A], ![Letter.H, Letter.N, Letter.A], ![Letter.N, Letter.D, Letter.H], ![Letter.V, Letter.A, Letter.H], ![Letter.V, Letter.D, Letter.A], ![Letter.V, Letter.H, Letter.H], ![Letter.V, Letter.N, Letter.D]}
  | .N => {![Letter.A, Letter.A, Letter.A], ![Letter.A, Letter.V, Letter.H], ![Letter.B, Letter.D, Letter.H], ![Letter.D, Letter.A, Letter.D], ![Letter.D, Letter.D, Letter.B], ![Letter.D, Letter.V, Letter.A], ![Letter.H, Letter.H, Letter.H], ![Letter.N, Letter.N, Letter.N], ![Letter.V, Letter.B, Letter.D], ![Letter.V, Letter.H, Letter.A]}
  | .A => {![Letter.A, Letter.N, Letter.N], ![Letter.N, Letter.D, Letter.N], ![Letter.N, Letter.N, Letter.D]}
  | .D => {![Letter.A, Letter.H, Letter.N], ![Letter.A, Letter.N, Letter.A], ![Letter.B, Letter.A, Letter.N], ![Letter.D, Letter.N, Letter.B], ![Letter.H, Letter.B, Letter.V], ![Letter.H, Letter.V, Letter.N], ![Letter.N, Letter.A, Letter.D], ![Letter.N, Letter.B, Letter.A], ![Letter.N, Letter.V, Letter.V]}
  | .O => ∅
  | .H => {![Letter.A, Letter.N, Letter.V], ![Letter.D, Letter.N, Letter.H], ![Letter.H, Letter.A, Letter.N], ![Letter.H, Letter.N, Letter.N], ![Letter.N, Letter.H, Letter.A], ![Letter.N, Letter.N, Letter.V], ![Letter.N, Letter.V, Letter.D], ![Letter.N, Letter.V, Letter.N], ![Letter.V, Letter.D, Letter.N]}
  | .V => {![Letter.B, Letter.N, Letter.H], ![Letter.N, Letter.H, Letter.B], ![Letter.V, Letter.B, Letter.N]}

def S_f509c81899188c6f : Subst Letter Letter.sep 3 :=
  ⟨T_f509c81899188c6f, by native_decide, by native_decide⟩

def T_f621e9dcab9f974c : Letter → Finset (Fin 3 → Letter)
  | .B => {![Letter.A, Letter.A, Letter.V], ![Letter.A, Letter.H, Letter.H], ![Letter.A, Letter.V, Letter.B], ![Letter.B, Letter.B, Letter.B], ![Letter.D, Letter.A, Letter.H], ![Letter.D, Letter.H, Letter.A], ![Letter.D, Letter.H, Letter.N], ![Letter.H, Letter.A, Letter.A], ![Letter.H, Letter.H, Letter.H], ![Letter.H, Letter.N, Letter.A], ![Letter.N, Letter.A, Letter.V], ![Letter.N, Letter.D, Letter.H], ![Letter.V, Letter.B, Letter.D], ![Letter.V, Letter.D, Letter.A]}
  | .N => {![Letter.A, Letter.A, Letter.D], ![Letter.A, Letter.D, Letter.A], ![Letter.B, Letter.D, Letter.H], ![Letter.D, Letter.B, Letter.A], ![Letter.D, Letter.H, Letter.B], ![Letter.H, Letter.A, Letter.H], ![Letter.H, Letter.H, Letter.V], ![Letter.N, Letter.N, Letter.N], ![Letter.V, Letter.A, Letter.A], ![Letter.V, Letter.H, Letter.D]}
  | .A => {![Letter.A, Letter.D, Letter.N], ![Letter.A, Letter.N, Letter.B], ![Letter.B, Letter.A, Letter.N], ![Letter.B, Letter.V, Letter.V], ![Letter.H, Letter.N, Letter.D], ![Letter.N, Letter.A, Letter.D], ![Letter.N, Letter.B, Letter.A], ![Letter.V, Letter.N, Letter.V], ![Letter.V, Letter.V, Letter.N]}
  | .D => {![Letter.D, Letter.N, Letter.N], ![Letter.N, Letter.D, Letter.N], ![Letter.N, Letter.N, Letter.D]}
  | .O => ∅
  | .H => {![Letter.B, Letter.N, Letter.H], ![Letter.H, Letter.B, Letter.N], ![Letter.N, Letter.H, Letter.B]}
  | .V => {![Letter.A, Letter.N, Letter.V], ![Letter.D, Letter.N, Letter.H], ![Letter.H, Letter.A, Letter.N], ![Letter.N, Letter.H, Letter.A], ![Letter.N, Letter.N, Letter.V], ![Letter.N, Letter.V, Letter.D], ![Letter.N, Letter.V, Letter.N], ![Letter.V, Letter.D, Letter.N], ![Letter.V, Letter.N, Letter.N]}

def S_f621e9dcab9f974c : Subst Letter Letter.sep 3 :=
  ⟨T_f621e9dcab9f974c, by native_decide, by native_decide⟩

def T_f97d79adc1a9e27c : Letter → Finset (Fin 3 → Letter)
  | .B => {![Letter.A, Letter.A, Letter.V], ![Letter.A, Letter.D, Letter.H], ![Letter.A, Letter.H, Letter.A], ![Letter.A, Letter.N, Letter.V], ![Letter.B, Letter.B, Letter.B], ![Letter.B, Letter.V, Letter.D], ![Letter.D, Letter.B, Letter.H], ![Letter.H, Letter.A, Letter.A], ![Letter.H, Letter.D, Letter.N], ![Letter.H, Letter.H, Letter.D], ![Letter.H, Letter.H, Letter.V], ![Letter.N, Letter.H, Letter.A], ![Letter.V, Letter.A, Letter.D], ![Letter.V, Letter.A, Letter.N]}
  | .N => {![Letter.A, Letter.A, Letter.H], ![Letter.A, Letter.B, Letter.A], ![Letter.A, Letter.D, Letter.D], ![Letter.B, Letter.H, Letter.A], ![Letter.D, Letter.A, Letter.D], ![Letter.D, Letter.H, Letter.H], ![Letter.H, Letter.A, Letter.V], ![Letter.H, Letter.D, Letter.B], ![Letter.N, Letter.N, Letter.N], ![Letter.V, Letter.H, Letter.V]}
  | .A => {![Letter.A, Letter.B, Letter.N], ![Letter.B, Letter.N, Letter.D], ![Letter.D, Letter.A, Letter.N], ![Letter.D, Letter.N, Letter.V], ![Letter.N, Letter.A, Letter.B], ![Letter.N, Letter.D, Letter.D], ![Letter.N, Letter.V, Letter.H], ![Letter.V, Letter.N, Letter.H], ![Letter.V, Letter.V, Letter.B]}
  | .D => {![Letter.D, Letter.N, Letter.N], ![Letter.N, Letter.D, Letter.N], ![Letter.N, Letter.N, Letter.A]}
  | .O => ∅
  | .H => {![Letter.B, Letter.H, Letter.N], ![Letter.H, Letter.N, Letter.B], ![Letter.N, Letter.B, Letter.V]}
  | .V => {![Letter.A, Letter.H, Letter.N], ![Letter.D, Letter.V, Letter.N], ![Letter.H, Letter.N, Letter.A], ![Letter.N, Letter.A, Letter.V], ![Letter.N, Letter.D, Letter.H], ![Letter.N, Letter.N, Letter.H], ![Letter.N, Letter.V, Letter.N], ![Letter.V, Letter.N, Letter.D], ![Letter.V, Letter.N, Letter.N]}

def S_f97d79adc1a9e27c : Subst Letter Letter.sep 3 :=
  ⟨T_f97d79adc1a9e27c, by native_decide, by native_decide⟩

end ShannonBounds.C11R5Tables
