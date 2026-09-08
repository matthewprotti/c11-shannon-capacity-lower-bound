import ShannonBounds.C11R5D213
open ShannonBounds
set_option maxHeartbeats 0
set_option maxRecDepth 4000000
set_option synthInstance.maxSize 4000
def badTerminal : Finset (Fin 4 → Letter) := insert ![Letter.B, Letter.B, Letter.A, Letter.B] C11R5Tables.T_cfb0e1863855bcb0
example : ∀ x ∈ badTerminal, ∀ y ∈ badTerminal,
    x ≠ y → ∃ i, Letter.sep (x i) (y i) = true := by
  native_decide
