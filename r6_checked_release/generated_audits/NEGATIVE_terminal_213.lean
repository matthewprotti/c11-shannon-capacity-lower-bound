import ShannonBounds.C11R6D213
open ShannonBounds
set_option maxHeartbeats 0
set_option maxRecDepth 4000000
set_option synthInstance.maxSize 4000
def badRows : List (Fin 4 → C11R6Base.Ty) := [![2, 11, 54, 2]] ++ C11R6Tables.rows_3d79de065120229628e3
example : Code C11R6Base.Ty C11R6Base.typedSep 4 :=
  C11R6ListChecks.codeFromList C11R6Base.typedSep badRows (by native_decide)
