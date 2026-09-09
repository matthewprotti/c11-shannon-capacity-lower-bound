/-
Copyright (c) 2026 Matthew Protti. Released under Apache 2.0.
Uses the pinned development of Pjotr Buys, Sven Polak and Jeroen Zuiddam.
Common real-number bridges for the frozen R5 finite constructions.
-/
import ShannonBounds.CapCertC11

set_option autoImplicit false
set_option maxRecDepth 4000000
set_option maxHeartbeats 0
set_option synthInstance.maxSize 4000
set_option exponentiation.threshold 20000

namespace ShannonBounds.C11R5Common

/-- A strict integer cross-power comparison implies a strict comparison of
the full positive roots, even when the two dimensions differ. -/
theorem root_lt_of_cross_power {m n d e : ℕ} (hd : 0 < d) (he : 0 < e)
    (h : m ^ d < n ^ e) :
    (m : ℝ) ^ ((1 : ℝ) / (e : ℕ)) < (n : ℝ) ^ ((1 : ℝ) / (d : ℕ)) := by
  have hd' : (0 : ℝ) < d := by exact_mod_cast hd
  have he' : (0 : ℝ) < e := by exact_mod_cast he
  apply (Real.rpow_lt_rpow_iff (by positivity) (by positivity)
    (show (0 : ℝ) < (d : ℝ) * (e : ℝ) by positivity)).mp
  rw [← Real.rpow_mul (by positivity), ← Real.rpow_mul (by positivity)]
  have hleft : ((1 : ℝ) / (e : ℝ)) * ((d : ℝ) * (e : ℝ)) = (d : ℝ) := by
    field_simp
  have hright : ((1 : ℝ) / (d : ℝ)) * ((d : ℝ) * (e : ℝ)) = (e : ℝ) := by
    field_simp
  rw [hleft, hright, Real.rpow_natCast, Real.rpow_natCast]
  exact_mod_cast h

/-- An exact upper decimal endpoint for a constructed root. This is not an
upper bound on Shannon capacity. -/
theorem root_lt_decimal {a b N p : ℕ} (hb : 0 < b) (hp : 0 < p)
    (hpow : N * b ^ p < a ^ p) :
    (N : ℝ) ^ ((1 : ℝ) / (p : ℕ)) < (a : ℝ) / (b : ℝ) := by
  have hb' : (0 : ℝ) < b := by exact_mod_cast hb
  have hp' : (0 : ℝ) < p := by exact_mod_cast hp
  rw [one_div, Real.rpow_inv_lt_iff_of_pos (by positivity) (by positivity) hp',
    Real.rpow_natCast, div_pow, lt_div_iff₀ (by positivity)]
  exact_mod_cast hpow

end ShannonBounds.C11R5Common
