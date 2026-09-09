import ShannonBounds.ProfileCompiler.Examples
open ShannonBounds ShannonBounds.ProfileCompiler ShannonBounds.ProfileCompiler.Examples
set_option maxRecDepth 4096
set_option maxHeartbeats 4000000
example : wordN ∈ staleRows nOnly := stale_old_membership
example : wordN ∈ staleRows bBoth := stale_new_membership
example : apart bBoth nOnly = true := stale_output_separated
/-- False required cross-row obligation for this explicit stale-compiler pair.
The positive theorem stale_masks_refuted rejects any Subst with these entire rows. -/
example : ∃ i : Fin 1, apart (wordN i) (wordN i) = true := by decide
