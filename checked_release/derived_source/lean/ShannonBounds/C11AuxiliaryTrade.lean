/-
C11 auxiliary trade: full-chain source draft, 8 September 2026.
STATUS: NOT COMPILED IN THE AUTHORING SESSION.

Based on the Apache-2.0 development of Pjotr Buys, Sven Polak and
Jeroen Zuiddam at commit aa21eeb12b75b0413d3fa9fb4208b5d0bf2c4d65.
This file adds the frozen trade; it does not modify any upstream source.
No theorem below is to be advertised as Lean-checked until the pinned build
and the accompanying scope/axiom audit have actually succeeded.
-/
import ShannonBounds.CapCertC11

set_option autoImplicit false
set_option maxRecDepth 4000000
set_option maxHeartbeats 0
set_option synthInstance.maxSize 4000
set_option exponentiation.threshold 20000

namespace ShannonBounds
namespace C11AuxiliaryTrade

open SimpleGraph

/-- The exact baseline integer, not its decimal truncation. -/
def N0 : Nat := 705688158939417766083006128695703821080101605304173623991920300506716846627203440324635068341693109509608786929844839653207121849017872676157797788816

/-- The exact accepted candidate integer. -/
def N1 : Nat := 705692619930489413584189552943991443716392885026759451863953624242911159057444856108323516589876967077721069272782760798453832061060020786354479288616

/-- Bind the frozen literal to the integer in the imported certificate. -/
theorem N0_eq_upstream : N0 = CertC11.M := by rfl

/-- The literal frozen table, including its unchanged rows. -/
def T3mix : Letter → Finset (Fin 3 → Letter)
  | .B =>
      {![.B, .B, .B], ![.N, .H, .D], ![.N, .V, .A], ![.A, .B, .V], ![.A, .H, .H], ![.A, .V, .A], ![.D, .N, .H], ![.D, .A, .H], ![.D, .H, .A], ![.H, .A, .N], ![.H, .A, .A], ![.H, .H, .H], ![.V, .A, .D], ![.V, .D, .B]}
  | .N =>
      {![.B, .H, .D], ![.N, .N, .N], ![.A, .A, .D], ![.D, .B, .H], ![.D, .A, .B], ![.H, .V, .H], ![.V, .A, .A], ![.V, .D, .H], ![.V, .H, .A]}
  | .A =>
      {![.B, .N, .A], ![.B, .D, .A], ![.B, .V, .V], ![.N, .A, .B], ![.A, .B, .N], ![.A, .N, .D], ![.H, .D, .N], ![.V, .N, .V], ![.V, .V, .N]}
  | .D =>
      {![.N, .N, .D], ![.N, .D, .N], ![.D, .N, .N]}
  | .O =>
      ∅
  | .H =>
      {![.B, .H, .N], ![.N, .B, .H], ![.H, .N, .B]}
  | .V =>
      {![.N, .N, .V], ![.N, .A, .H], ![.N, .D, .V], ![.N, .V, .N], ![.A, .V, .N], ![.D, .H, .N], ![.H, .N, .A], ![.V, .N, .N], ![.V, .N, .D]}

/-- Attribution and scope: only the N and A rows come from T3d. -/
theorem T3mix_eq_row_hybrid (a : Letter) :
    T3mix a = (match a with
      | .N => Substitutions.T3d .N
      | .A => Substitutions.T3d .A
      | b => Substitutions.T3c b) := by
  cases a <;> native_decide

/-- Check all required within-family and cross-family separations.
No global disjointness of the seven families is assumed. -/
def S3mix : Subst Letter Letter.sep 3 :=
  ⟨T3mix, by native_decide, by native_decide⟩

/-- Exact new weights of x27, independently recomputed from the frozen data. -/
def wx27 : Letter → Nat
  | .B => 29838441714094862993252839013822328163235607901233033567784
  | .N => 16419042195110117076482146261872104062736709010101742840630
  | .A => 15927372935116998524593435502424494652953852367704485281765
  | .D => 7696826188722826294170981742359508014219650447768917984455
  | .O => 0
  | .H => 10236321091594989029757595214383341180131411905782531251025
  | .V => 12797544891705780685227304634800778404795174307344939401927

section GenericConstruction

variable {α : Type*} [Fintype α] [DecidableEq α]
  {G : SimpleGraph α} [DecidableRel G.Adj]

/-- Same ordered children h7, p11, h9; replace the substitution at x27 only. -/
def Rx27 (R : Realisation Letter Letter.sep G) :
    Realisation Letter Letter.sep (strongPower G 27) :=
  Realisation.multiSubst CertC11.ex27 (CertC11.chx27 R) S3mix

/-- Relate the actually constructed families to all seven literal weights. -/
theorem stepx27 (R : Realisation Letter Letter.sep G)
    (h : ∀ a, R.w a = CertC11.w0 a) :
    ∀ a, (Rx27 R).w a = wx27 a := by
  intro a
  change (Realisation.multiSubst CertC11.ex27 (CertC11.chx27 R) S3mix).w a = wx27 a
  rw [w_multiSubst]
  have h0 : ∀ b, (CertC11.chx27 R 0).w b = CertC11.wh7 b :=
    fun b => CertC11.steph7 R h b
  have h1 : ∀ b, (CertC11.chx27 R 1).w b = CertC11.wp11 b :=
    fun b => CertC11.stepp11 R h b
  have h2 : ∀ b, (CertC11.chx27 R 2).w b = CertC11.wh9 b :=
    fun b => CertC11.steph9 R h b
  simp only [Fin.prod_univ_three, h0, h1, h2]
  cases a <;> native_decide

/-- The terminal code and its other two children are unchanged. -/
def terminalChildren (R : Realisation Letter Letter.sep G) :
    (i : Fin 3) → Realisation Letter Letter.sep (strongPower G (CertC11.eT i)) :=
  Fin.cases (Rx27 R) (Fin.cases (CertC11.Rx29 R) (fun _ => CertC11.Rb13 R))

/-- Evaluate the weight expression for the actual terminal children. -/
theorem terminal_value (R : Realisation Letter Letter.sep G)
    (h : ∀ a, R.w a = CertC11.w0 a) :
    (∑ x ∈ CertC11.K.C, ∏ i, (terminalChildren R i).w (x i)) = N1 := by
  have h0 : ∀ a, (terminalChildren R 0).w a = wx27 a := by
    intro a
    change (Rx27 R).w a = wx27 a
    exact stepx27 R h a
  have h1 : ∀ a, (terminalChildren R 1).w a = CertC11.wx29 a := by
    intro a
    change (CertC11.Rx29 R).w a = CertC11.wx29 a
    exact CertC11.stepx29 R h a
  have h2 : ∀ a, (terminalChildren R 2).w a = CertC11.wb13 a := by
    intro a
    change (CertC11.Rb13 R).w a = CertC11.wb13 a
    exact CertC11.stepb13 R h a
  simp only [Fin.prod_univ_three, h0, h1, h2]
  native_decide

/-- The actual finite independent set, flattened to 69 base-graph coordinates.
The definition is symbolic; the astronomically large set is not enumerated. -/
def code69 (R : Realisation Letter Letter.sep G) : Finset (Fin 69 → α) :=
  (multiCodeSet CertC11.eT (terminalChildren R) CertC11.K).image
    (strongPower_sum_iso G CertC11.eT).symm

/-- Independence follows from the terminal separation proof and the graph isomorphism. -/
theorem independent_code69 (R : Realisation Letter Letter.sep G) :
    (strongPower G 69).IsIndepSet ↑(code69 R) :=
  isIndepSet_image_symm (strongPower_sum_iso G CertC11.eT)
    (isIndepSet_multiCodeSet CertC11.eT (terminalChildren R) CertC11.K)

/-- The literal N1 is the cardinality of the constructed set, not merely a
separately evaluated arithmetic expression. -/
theorem card_code69 (R : Realisation Letter Letter.sep G)
    (h : ∀ a, R.w a = CertC11.w0 a) : (code69 R).card = N1 := by
  calc
    (code69 R).card = (multiCodeSet CertC11.eT (terminalChildren R) CertC11.K).card :=
      Finset.card_image_of_injective _ (strongPower_sum_iso G CertC11.eT).symm.injective
    _ = ∑ x ∈ CertC11.K.C, ∏ i, (terminalChildren R i).w (x i) :=
      card_multiCodeSet CertC11.eT (terminalChildren R) CertC11.K
    _ = N1 := terminal_value R h

end GenericConstruction

/-- The supplied base system, with all seven sizes proved in the imported development. -/
theorem base_weights :
    ∀ a, BaseC11.base.toRealisation.w a = CertC11.w0 a :=
  CapCertC11.base_fam_card

/-- The actual candidate set in the physical 207-dimensional cycle power. -/
def code207 : Finset (Fin 207 → Fin 11) :=
  (code69 BaseC11.base.toRealisation).image CapCertC11.iso207.symm

/-- Bijections preserve exact cardinality. -/
theorem card_code207 : code207.card = N1 := by
  calc
    code207.card = (code69 BaseC11.base.toRealisation).card :=
      Finset.card_image_of_injective _ CapCertC11.iso207.symm.injective
    _ = N1 := card_code69 BaseC11.base.toRealisation base_weights

/-- Independence in the explicit cycle model. -/
theorem independent_code207_Cyc :
    (strongPower BaseC11.Cyc11 207).IsIndepSet ↑code207 :=
  isIndepSet_image_symm CapCertC11.iso207
    (independent_code69 BaseC11.base.toRealisation)

/-- Independence in Mathlib's cycleGraph 11, with the intended strong product. -/
theorem independent_code207 :
    (strongPower (SimpleGraph.cycleGraph 11) 207).IsIndepSet ↑code207 := by
  rw [← CapC11.Cyc_eq_cycleGraph]
  exact independent_code207_Cyc

/-- The concrete existence/cardinality statement required by the formalization gate. -/
theorem exists_code207 :
    ∃ S : Finset (Fin 207 → Fin 11),
      (strongPower (SimpleGraph.cycleGraph 11) 207).IsIndepSet ↑S ∧ S.card = N1 :=
  ⟨code207, independent_code207, card_code207⟩

/-- The independence-number bound is derived from this same set. -/
theorem alpha_207_ge :
    N1 ≤ (strongPower (SimpleGraph.cycleGraph 11) 207).indepNum := by
  rw [← card_code207]
  exact SimpleGraph.IsIndepSet.card_le_indepNum independent_code207

/-- Exact root lower bound on Shannon capacity, derived from the constructed set. -/
theorem shannonCapacity_cycleGraph_11_ge_root :
    (N1 : ℝ) ^ ((1 : ℝ) / (207 : ℕ)) ≤
      shannonCapacity (SimpleGraph.cycleGraph 11) := by
  calc
    (N1 : ℝ) ^ ((1 : ℝ) / (207 : ℕ))
        ≤ (((strongPower (SimpleGraph.cycleGraph 11) 207).indepNum : ℕ) : ℝ) ^
            ((1 : ℝ) / (207 : ℕ)) := by
          apply Real.rpow_le_rpow (by positivity) _ (by positivity)
          exact_mod_cast alpha_207_ge
    _ ≤ shannonCapacity (SimpleGraph.cycleGraph 11) :=
      shannonCapacity_ge_root (SimpleGraph.cycleGraph 11) 207 (by norm_num)

/-- Exact integer test for the reported lower decimal endpoint. -/
theorem decimal_lower_integer :
    5295492477500681 ^ 207 ≤ N1 * (1000000000000000 : Nat) ^ 207 := by
  native_decide

/-- This bounds the candidate's root, NOT Shannon capacity, from above. -/
theorem candidate_root_upper_integer :
    N1 * (1000000000000000 : Nat) ^ 207 < 5295492477500682 ^ 207 := by
  native_decide

/-- The requested capacity statement, with no independence or cardinality hypotheses. -/
theorem shannonCapacity_cycleGraph_11_ge :
    (5.295492477500681 : ℝ) ≤ shannonCapacity (SimpleGraph.cycleGraph 11) := by
  rw [show (5.295492477500681 : ℝ) =
      ((5295492477500681 : ℕ) : ℝ) / ((1000000000000000 : ℕ) : ℝ) by norm_num]
  exact Decimal.decimal_le (by norm_num) (by norm_num)
    decimal_lower_integer shannonCapacity_cycleGraph_11_ge_root

/-- Strict improvement over the full frozen integer, not over a rounded number. -/
theorem strictly_larger : CertC11.M < N1 := by native_decide

/-- The acceptance comparison expressed with the requested integer powers. -/
theorem exact_capacity_comparison : CertC11.M ^ 207 < N1 ^ 207 := by
  native_decide

/-- Strict improvement of the constructed root; this is not a strict lower
bound on the difference between two actual Shannon capacities. -/
theorem candidate_root_strictly_improves :
    (CertC11.M : ℝ) ^ ((1 : ℝ) / (207 : ℕ)) <
      (N1 : ℝ) ^ ((1 : ℝ) / (207 : ℕ)) := by
  apply Real.rpow_lt_rpow (by positivity) _ (by positivity)
  exact_mod_cast strictly_larger

end C11AuxiliaryTrade
end ShannonBounds
