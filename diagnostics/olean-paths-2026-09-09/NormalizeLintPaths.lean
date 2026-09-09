/- Diagnostic only: read existing compiled artifacts and write separate copies.
The opaque extension cast follows its actual registered Lean 4.32.2 type.
This tool is not part of the mathematical formalization or its axiom audit. -/
import Lean
import Lean.Linter.PersistentLintLog

open Lean

unsafe def main (args : List String) : IO Unit := do
  let input := args[0]!
  let mod := (args[1]!.splitOn ".").foldl Name.str Name.anonymous
  let outputStem := args[2]!
  let canonicalPath := args[3]!
  let (data, _region) ← readModuleData input
  saveModuleData (outputStem ++ ".roundtrip.olean") mod data
  let mut records : Array Json := #[]
  let mut entries := #[]
  for (name, es) in data.entries do
    if name == ``Lean.Linter.lintLogExt then
      let mut normalized := #[]
      for raw in es do
        let e : Lean.Linter.LintEntry := unsafeCast raw
        records := records.push (Json.mkObj [
          ("linter", toJson e.linter.toString), ("file", toJson e.file),
          ("message_file", toJson e.message.fileName), ("message", toJson e.message)])
        let e := { e with file := canonicalPath, message := { e.message with fileName := canonicalPath } }
        normalized := normalized.push (unsafeCast e : EnvExtensionEntry)
      entries := entries.push (name, normalized)
    else
      entries := entries.push (name, es)
  saveModuleData (outputStem ++ ".normalized.olean") mod { data with entries }
  IO.println (Json.mkObj [("lints", toJson records)]).compress
