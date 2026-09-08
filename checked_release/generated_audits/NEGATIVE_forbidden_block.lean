import ShannonBounds.C11AuxiliaryTrade
open ShannonBounds
set_option maxHeartbeats 0
set_option maxRecDepth 1000000
set_option synthInstance.maxSize 4000
private def badTable : Letter → Finset (Fin 3 → Letter)
  | .N => insert ![Letter.A, Letter.D, Letter.A] (C11AuxiliaryTrade.T3mix .N)
  | a => C11AuxiliaryTrade.T3mix a
example : ∀ a, ∀ x ∈ badTable a, ∀ y ∈ badTable a,
    x ≠ y → ∃ i, Letter.sep (x i) (y i) = true := by
  native_decide
