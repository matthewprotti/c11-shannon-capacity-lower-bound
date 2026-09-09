"""Untrusted literal exporter. Lean proves all acceptance obligations."""
from pathlib import Path
import json, re

ROOT = Path(__file__).resolve().parents[1]
R9 = ROOT / 'received/C11_Typed_Cell_R9_2026-09-08'
R10 = ROOT / 'received/C11_Diagnostic_Sprint_R10_2026-09-09'

def generate(revision, dimension):
    if revision == 9:
        c = json.loads((R9 / f'certificates/C11_R9_d{dimension}.json').read_text())
        rows = c['tables'][c['root']]['rows']
    else:
        c = json.loads((R10 / 'certificates/NEW_TERMINAL.json').read_text())
        rows = c['terminal_words']
    parent = f'C11R6D{dimension}'
    name = f'C11R{revision}D{dimension}'
    original = (ROOT / f'parent_source/ShannonBounds/{parent}.lean').read_text()
    body = original[original.index('theorem terminal_polynomial'):original.index('theorem cross_power_BPZ')]
    old_code = re.search(r'theorem terminal_polynomial : \(∑ x ∈ (\w+)\.C', body)[1]
    body = body.replace(old_code, 'terminalCode')
    old_lower = re.search(r'theorem decimal_lower_integer : (\d+)', body)[1]
    new_lower = c['decimal_lower_numerator']
    body = body.replace(str(int(old_lower)+1), str(int(new_lower)+1)).replace(old_lower, str(new_lower))
    old_dec = str(int(old_lower)//10**15) + '.' + str(int(old_lower)%10**15).zfill(15)
    new_dec = str(int(new_lower)//10**15) + '.' + str(int(new_lower)%10**15).zfill(15)
    body = body.replace(old_dec, new_dec)
    pre = f'''/- Copyright (c) 2026 Matthew Protti. Apache-2.0.
Frozen R{revision} terminal-only follow-on. All R6 children are imported unchanged.
Literal exporter is untrusted; Lean checks separation and exact cardinality. -/
import ShannonBounds.{parent}
'''
    if revision == 10:
        pre += 'import ShannonBounds.C11R9D213\n'
    pre += f'''
set_option autoImplicit false
set_option maxRecDepth 4000000
set_option maxHeartbeats 0
set_option synthInstance.maxSize 4000
set_option exponentiation.threshold 20000

namespace ShannonBounds.{name}
open SimpleGraph C11R6Base C11R6ListChecks {parent}

def N : Nat := {c['N']}

def terminalRows : List (Fin 4 → Ty) :=
  [''' + ',\n   '.join('!['+', '.join(map(str,w))+']' for w in rows) + ''']

theorem terminal_separated : inside (wordApart typedSep) terminalRows = true := by
  native_decide

def terminalCode : Code Ty typedSep 4 :=
  codeFromList typedSep terminalRows terminal_separated

section Generic
variable {α : Type*} [Fintype α] [DecidableEq α]
  {G : SimpleGraph α} [DecidableRel G.Adj]

'''
    comparisons = ''
    for label, ancestor in [('R6',parent)] + ([('R9','C11R9D213')] if revision == 10 else []):
        comparisons += f'''
theorem strictly_larger_{label} : {ancestor}.N < N := by native_decide

theorem strict_root_{label} : ({ancestor}.N : ℝ) ^ ((1 : ℝ) / ({dimension} : ℕ)) <
    (N : ℝ) ^ ((1 : ℝ) / ({dimension} : ℕ)) := by
  apply Real.rpow_lt_rpow (by positivity) _ (by positivity)
  exact_mod_cast strictly_larger_{label}
'''
    (ROOT / f'source/ShannonBounds/{name}.lean').write_text(pre + body + comparisons + f'\nend ShannonBounds.{name}\n')
    print(name, len(rows), 'terminal words')

for r,d in [(9,198),(9,213),(10,213)]:
    generate(r,d)
