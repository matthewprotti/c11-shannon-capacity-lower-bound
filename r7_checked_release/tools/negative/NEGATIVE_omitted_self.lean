import ShannonBounds.ProfileCompiler.Examples
open ShannonBounds ShannonBounds.ProfileCompiler ShannonBounds.ProfileCompiler.Examples
set_option maxRecDepth 4096
set_option maxHeartbeats 4000000
example : (oldTarget ∪ badAddition).card = 1 := omitted_self_counts.2.2
/-- False: without target protection the proposed additive gain counts one point twice. -/
example : (oldTarget ∪ badAddition).card = oldTarget.card + badAddition.card := by decide
