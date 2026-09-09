/- Copyright (c) 2026 Matthew Protti. Released under Apache 2.0. -/
import ShannonBounds.ProfileCompiler.Core
import ShannonBounds.ProfileCompiler.Profiles
import ShannonBounds.ProfileCompiler.Products
import ShannonBounds.ProfileCompiler.Semantics
import ShannonBounds.ProfileCompiler.Cardinality
import ShannonBounds.ProfileCompiler.Pruning
import ShannonBounds.ProfileCompiler.Recursion
import ShannonBounds.ProfileCompiler.DAG
import ShannonBounds.ProfileCompiler.Powers

/-!
Uniform avoidance-profile compilation, exact graph and cardinality semantics,
finite DAG preservation, alphabet size, zero-weight pruning, and terminal expansion.
No finite C11 construction or finite counterexample module is imported here.
-/
