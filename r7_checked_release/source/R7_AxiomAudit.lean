/- Audit-only command: inspect actual declarations loaded from compiled modules. -/
import ShannonBounds.ProfileCompiler
import ShannonBounds.ProfileCompiler.Examples
import Lean.Util.CollectAxioms

set_option pp.fullNames true
set_option pp.universes true
set_option maxHeartbeats 4000000

open Lean Elab Command

elab "#audit_profile_namespace" : command => do
  let env ← getEnv
  let names : Array Name ← env.constants.foldM (init := #[]) fun acc n _ => do
    if n.toString.startsWith "ShannonBounds.ProfileCompiler." then
      return acc.push n
    return acc
  let names := names.qsort fun a b => decide (a.toString < b.toString)
  let allowed : Array Name := #[``propext, ``Classical.choice, ``Quot.sound]
  for n in names do
    let some info := env.find? n | throwError "Missing declaration {n}"
    if info.isUnsafe then throwError "Unsafe R7 declaration {n}"
    match info with
    | .axiomInfo _ => throwError "New R7 axiom declaration {n}"
    | _ => pure ()
    let deps ← collectAxioms n
    for dep in deps do
      unless allowed.contains dep do
        throwError "Unapproved axiom {dep} in {n}"
    let row := Json.mkObj [
      ("name", toJson n.toString),
      ("unsafe", toJson info.isUnsafe),
      ("axioms", toJson (deps.map Name.toString))]
    logInfo m!"R7_AUDIT_JSON: {row.compress}"
  logInfo m!"R7_AUDIT_COUNT: {names.size}"
  for n in allowed do
    let some (.axiomInfo info) := env.find? n | throwError "Missing standard axiom {n}"
    if info.isUnsafe then throwError "Unsafe standard axiom {n}"
    logInfo m!"R7_STANDARD_AXIOM_TYPE {n}: {info.type}"

elab "#report_profile_type " n:ident : command => do
  let name := n.getId
  let some info := (← getEnv).find? name | throwError "Missing statement {name}"
  if info.type.hasFVar || info.type.hasMVar || info.type.hasLooseBVars then
    throwError "Non-closed statement {name}"
  let row := Json.mkObj [("name", toJson name.toString),
    ("raw_type", toJson (reprStr info.type)), ("closed", toJson true)]
  logInfo m!"R7_RAW_TYPE_JSON: {row.compress}"

#audit_profile_namespace

/- Complete statement types, including all implicit arguments and hypotheses. -/
set_option pp.explicit false
#check @ShannonBounds.ProfileCompiler.universal_compilation
#report_profile_type ShannonBounds.ProfileCompiler.universal_compilation
#check @ShannonBounds.ProfileCompiler.augmented
#report_profile_type ShannonBounds.ProfileCompiler.augmented
#check @ShannonBounds.ProfileCompiler.ordinary
#report_profile_type ShannonBounds.ProfileCompiler.ordinary
#check @ShannonBounds.ProfileCompiler.Profile.toRealisation
#report_profile_type ShannonBounds.ProfileCompiler.Profile.toRealisation
#check @ShannonBounds.ProfileCompiler.toProfile
#report_profile_type ShannonBounds.ProfileCompiler.toProfile
#check @ShannonBounds.ProfileCompiler.augmented_sets
#report_profile_type ShannonBounds.ProfileCompiler.augmented_sets
#check @ShannonBounds.ProfileCompiler.augmented_cardinalities
#report_profile_type ShannonBounds.ProfileCompiler.augmented_cardinalities
#check @ShannonBounds.ProfileCompiler.exact_gain
#report_profile_type ShannonBounds.ProfileCompiler.exact_gain
#check @ShannonBounds.ProfileCompiler.bpz_augmented_sets
#report_profile_type ShannonBounds.ProfileCompiler.bpz_augmented_sets
#check @ShannonBounds.ProfileCompiler.alphabet_cardinality
#report_profile_type ShannonBounds.ProfileCompiler.alphabet_cardinality
#check @ShannonBounds.ProfileCompiler.pruning_sets
#report_profile_type ShannonBounds.ProfileCompiler.pruning_sets
#check @ShannonBounds.ProfileCompiler.pruning_cardinalities
#report_profile_type ShannonBounds.ProfileCompiler.pruning_cardinalities
#check @ShannonBounds.ProfileCompiler.support_pruning_sets
#report_profile_type ShannonBounds.ProfileCompiler.support_pruning_sets
#check @ShannonBounds.ProfileCompiler.terminal_sets
#report_profile_type ShannonBounds.ProfileCompiler.terminal_sets
#check @ShannonBounds.ProfileCompiler.terminal_pruning_sets
#report_profile_type ShannonBounds.ProfileCompiler.terminal_pruning_sets
#check @ShannonBounds.ProfileCompiler.Recipe.exact_weights
#report_profile_type ShannonBounds.ProfileCompiler.Recipe.exact_weights
#check @ShannonBounds.ProfileCompiler.DAG.independent
#report_profile_type ShannonBounds.ProfileCompiler.DAG.independent
#check @ShannonBounds.ProfileCompiler.DAG.exact_weights
#report_profile_type ShannonBounds.ProfileCompiler.DAG.exact_weights
#check @ShannonBounds.ProfileCompiler.DAG.dimension_augment
#report_profile_type ShannonBounds.ProfileCompiler.DAG.dimension_augment
#check @ShannonBounds.ProfileCompiler.DAG.repeated_child_dimension
#report_profile_type ShannonBounds.ProfileCompiler.DAG.repeated_child_dimension
#check @ShannonBounds.ProfileCompiler.DAG.profile
#report_profile_type ShannonBounds.ProfileCompiler.DAG.profile
#check @ShannonBounds.ProfileCompiler.Examples.bpz_alphabet_cardinality
#report_profile_type ShannonBounds.ProfileCompiler.Examples.bpz_alphabet_cardinality
#check @ShannonBounds.ProfileCompiler.Examples.stale_masks_refuted
#report_profile_type ShannonBounds.ProfileCompiler.Examples.stale_masks_refuted
#check @ShannonBounds.ProfileCompiler.Examples.omitted_self_gain_refuted
#report_profile_type ShannonBounds.ProfileCompiler.Examples.omitted_self_gain_refuted
