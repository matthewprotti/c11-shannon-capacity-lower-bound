import ShannonBounds.C13R8D522
open ShannonBounds
set_option maxHeartbeats 0
set_option maxRecDepth 4000000
set_option synthInstance.maxSize 4000
def badRows : List (Fin 3 → C11R6Base.Ty) := [![9, 9, 1]] ++ C13R8Tables.rows_terminal
example : Code C11R6Base.Ty C11R6Base.typedSep 3 :=
  C11R6ListChecks.codeFromList C11R6Base.typedSep badRows (by native_decide)
