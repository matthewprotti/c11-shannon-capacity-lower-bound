import Lean

open Lean

def main (args : List String) : IO Unit := do
  let file := args[0]!
  let (data, _region) ← readModuleData file
  let constants := data.constants.map fun c => Json.mkObj [
    ("name", toJson c.name.toString), ("levels", toJson (c.levelParams.map Name.toString)),
    ("type", toJson (reprStr c.type)),
    ("value", toJson (c.value? true |>.map reprStr)),
    ("unsafe", toJson c.isUnsafe), ("partial", toJson c.isPartial)]
  let entries := data.entries.map fun (n, es) => Json.mkObj [
    ("extension", toJson n.toString), ("entry_count", toJson es.size)]
  IO.println (Json.mkObj [("constants", toJson constants),
    ("extraConstantNames", toJson (data.extraConstNames.map Name.toString)),
    ("extensions", toJson entries)]).compress
