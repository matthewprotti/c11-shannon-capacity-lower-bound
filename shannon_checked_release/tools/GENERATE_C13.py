"""Untrusted exporter of the frozen R8 lists, weights, and typed DAG."""
from pathlib import Path
import json

ROOT = Path(__file__).resolve().parents[1]
SRC = ROOT/'source/ShannonBounds'
R8 = ROOT/'received/C13_Profile_Transfer_R8_2026-09-08'
c = json.loads((R8/'compiled/C13_d522.json').read_text())
cert = json.loads((R8/'certificates/C13_d522.json').read_text())
replay = json.loads((ROOT/'evidence/r8/verification_normal.json').read_text())
cosets = replay['independent_typed_checks']['base']['base_cosets_by_type']
PRE = '''/- Copyright (c) 2026 Matthew Protti. Apache-2.0.
Frozen C13 R8 literal certificate. Exporter is untrusted; all mathematical
acceptance obligations below are proved in Lean. BPZ sources are unchanged. -/
'''
OPT = '''
set_option autoImplicit false
set_option maxRecDepth 4000000
set_option maxHeartbeats 0
set_option synthInstance.maxSize 4000
set_option exponentiation.threshold 20000
'''
def cases(values, default):
    return '\n'.join(f'  | {i} => {v}' for i,v in enumerate(values)) + f'\n  | _ => {default}\n'
def words(ws): return '['+', '.join('!['+', '.join(map(str,w))+']' for w in ws)+']'
def fc(vs):
    return '(fun _ => '+vs[0]+')' if len(vs)==1 else '(Fin.cases ('+vs[0]+') '+fc(vs[1:])+')'
base = PRE+'import ShannonBounds.C11R6Base\nimport ShannonBounds.BaseC13Sets\n'+OPT+'''
namespace ShannonBounds.C13R8Base
open C11R6Base (Ty typedSep)
open BaseC13

def syndromes (a : Ty) : List Nat :=
  match a.val with
'''+cases([str(x) for x in cosets],'[]')+'''
def w0 (a : Ty) : Nat :=
  match a.val with
'''+cases([str(169*len(x)) for x in cosets],'0')+'''
theorem bounds_check : ∀ a : Ty,
    (syndromes a).all (fun n => decide (n < 28561)) = true := by native_decide
theorem nodup_check : ∀ a : Ty, (syndromes a).Nodup := by native_decide
theorem indep_check : ∀ a : Ty,
    (syndromes a).all (fun n => Delta.all
      (fun e => !((syndromes a).contains (addSyn n e)))) = true := by native_decide
theorem sep_check : ∀ a b : Ty, typedSep a b = true →
    (syndromes a).all (fun n => !((syndromes b).contains n) && Delta.all
      (fun e => !((syndromes b).contains (addSyn n e)))) = true := by native_decide
theorem weights_check : ∀ a : Ty, 169 * (syndromes a).length = w0 a := by native_decide

theorem bounds (a : Ty) : ∀ n ∈ syndromes a, n < 28561 := by
  intro n hn
  simpa using List.all_eq_true.mp (bounds_check a) n hn

def cells (a : Ty) : Finset BaseC13.Code := Pre (syndromes a)

theorem independent_cells (a : Ty) : G6.IsIndepSet ↑(cells a) := by
  apply indepPre (bounds a) (fun n => (syndromes a).contains n)
  · intro n hn; exact List.contains_iff_mem.mpr hn
  · intro n hn e he
    simpa using List.all_eq_true.mp (List.all_eq_true.mp (indep_check a) n hn) e he

theorem separated_cells (a b : Ty) (hab : typedSep a b = true) :
    Sep G6 (cells a) (cells b) := by
  intro x hx y hy hc
  have hsx := (mem_Pre (bounds a) x).mp hx
  have hsy := (mem_Pre (bounds b) y).mp hy
  have chk := List.all_eq_true.mp (sep_check a b hab) (syn x.val) hsx
  simp only [Bool.and_eq_true] at chk
  by_cases he : x = y
  · subst y
    have hm := List.contains_iff_mem.mpr hsy
    have hf : (syndromes b).contains (syn x.val) = false := by simpa using chk.1
    rw [hf] at hm
    contradiction
  · have hw := (conflict_G6 x y).mp hc
    obtain ⟨e, heD, hsyn⟩ := syn_of_conflict x.val y.val x.isLt y.isLt
      (fun h => he (Fin.val_injective h.symm)) hw
    have hf : (syndromes b).contains (addSyn (syn x.val) e) = false := by
      simpa using List.all_eq_true.mp chk.2 e heD
    have hm := List.contains_iff_mem.mpr hsy
    rw [hsyn, hf] at hm
    contradiction

theorem card_cells (a : Ty) : (cells a).card = w0 a := by
  rw [cells, card_Pre (bounds a) (nodup_check a), weights_check]

def base : Realisation Ty typedSep G6 where
  P := cells
  hindep := independent_cells
  hsep := separated_cells

theorem base_weights : ∀ a, base.w a = w0 a := card_cells

end ShannonBounds.C13R8Base
'''
(SRC/'C13R8Base.lean').write_text(base)
tables = PRE+'import ShannonBounds.C13R8Base\n'+OPT+'''
namespace ShannonBounds.C13R8Tables
open C11R6Base (Ty typedSep)
open C11R6ListChecks
'''
for name,tab in c['tables'].items():
    terminal = tab['kind']=='terminal'
    q = len(tab['rows'][0] if terminal else next(w for row in tab['rows'] for w in row))
    if terminal:
        tables+=f'\ndef rows_{name} : List (Fin {q} → Ty) := {words(tab["rows"])}\n'
        tables+=f'''theorem inside_{name} : inside (wordApart typedSep) rows_{name} = true := by native_decide
def S_{name} : Code Ty typedSep {q} := codeFromList typedSep rows_{name} inside_{name}
'''
    else:
        tables+=f'\ndef rows_{name} (a : Ty) : List (Fin {q} → Ty) :=\n  match a.val with\n'+cases([words(row) for row in tab['rows']], '[]')
        tables+=f'''theorem inside_{name} : ∀ a : Ty, inside (wordApart typedSep) (rows_{name} a) = true := by native_decide
theorem cross_{name} : ∀ a b : Ty, typedSep a b = true →
    between (wordApart typedSep) (rows_{name} a) (rows_{name} b) = true := by native_decide
def S_{name} : Subst Ty typedSep {q} :=
  substFromLists typedSep rows_{name} inside_{name} cross_{name}
'''
(SRC/'C13R8Tables.lean').write_text(tables+'\nend ShannonBounds.C13R8Tables\n')
dag=PRE+'import ShannonBounds.C13R8Tables\nimport ShannonBounds.CapCertC13\n'+OPT+'''
namespace ShannonBounds.C13R8D522
open SimpleGraph
open C11R6Base (Ty typedSep)
open C13R8Tables
'''+f'\ndef N : Nat := {c["N"]}\n'+'''
section Generic
variable {α : Type*} [Fintype α] [DecidableEq α]
  {G : SimpleGraph α} [DecidableRel G.Adj]

def R_base (R : Realisation Ty typedSep G) : Realisation Ty typedSep (strongPower G 1) :=
  R.mapIso (strongPower_one_iso G).symm
def w_base : Ty → Nat := C13R8Base.w0
theorem step_base (R : Realisation Ty typedSep G) (h : ∀ a, R.w a = C13R8Base.w0 a)
    (a : Ty) : (R_base R).w a = w_base a := by
  rw [R_base, Realisation.w_mapIso]; exact h a
'''
for nd in c['nodes'][1:]:
    n=nd['name'];kids=nd['children'];q=len(kids);tab=c['tables'][nd['kind']];term=tab['kind']=='terminal'
    e=[str(replay['node_dimensions'][ch]//6) for ch in kids];dim=sum(map(int,e))
    dag+=f'''\ndef e_{n} : Fin {q} → Nat := {fc(e)}
def ch_{n} (R : Realisation Ty typedSep G) :
    (i : Fin {q}) → Realisation Ty typedSep (strongPower G (e_{n} i)) :=
  {fc(['R_'+ch+' R' for ch in kids])}
'''
    if not term:
        dag+=f'''def R_{n} (R : Realisation Ty typedSep G) : Realisation Ty typedSep (strongPower G {dim}) :=
  Realisation.multiSubst e_{n} (ch_{n} R) S_{n}
def w_{n} (a : Ty) : Nat :=
  match a.val with
'''
        hist=replay['node_profiles'][n]
        w=[hist['BNADOHV'.index(p['family'])].get(str(p['mask']),'0') for p in c['letters']]
        dag+=cases(w,'0')
    sums=f'(∑ x ∈ S_{n}.'+('C' if term else 'T a')+', '+' * '.join(f'w_{ch} (x {i})' for i,ch in enumerate(kids))+')'
    target='N' if term else f'w_{n} a'
    dag+=f'\ntheorem polynomial_{n} : '+('' if term else '∀ a : Ty, ')+sums+f' = {target} := by native_decide\n'
    dag+=f'''theorem step_{n} (R : Realisation Ty typedSep G) (h : ∀ a, R.w a = C13R8Base.w0 a) :
    '''+(f'(∑ x ∈ S_{n}.C, ∏ i, (ch_{n} R i).w (x i)) = N' if term else f'∀ a, (R_{n} R).w a = w_{n} a')+' := by\n'
    if not term:
        dag+=f'  intro a\n  change (Realisation.multiSubst e_{n} (ch_{n} R) S_{n}).w a = w_{n} a\n  rw [w_multiSubst]\n'
    for i,ch in enumerate(kids):
        dag+=f'  have h{i} : ∀ b, (ch_{n} R {i}).w b = w_{ch} b := fun b => step_{ch} R h b\n'
    dag+='  simp only [Fin.prod_univ_'+{2:'two',3:'three'}[q]+', '+', '.join(f'h{i}' for i in range(q))+']\n'
    dag+='  exact polynomial_'+n+('' if term else ' a')+'\n'
dag+='''
def codeBase (R : Realisation Ty typedSep G) : Finset (Fin 87 → α) :=
  (multiCodeSet e_terminal (ch_terminal R) S_terminal).image (strongPower_sum_iso G e_terminal).symm
theorem independent_codeBase (R : Realisation Ty typedSep G) :
    (strongPower G 87).IsIndepSet ↑(codeBase R) :=
  isIndepSet_image_symm (strongPower_sum_iso G e_terminal)
    (isIndepSet_multiCodeSet e_terminal (ch_terminal R) S_terminal)
theorem card_codeBase (R : Realisation Ty typedSep G) (h : ∀ a, R.w a = C13R8Base.w0 a) :
    (codeBase R).card = N := by
  calc
    (codeBase R).card = (multiCodeSet e_terminal (ch_terminal R) S_terminal).card :=
      Finset.card_image_of_injective _ (strongPower_sum_iso G e_terminal).symm.injective
    _ = ∑ x ∈ S_terminal.C, ∏ i, (ch_terminal R i).w (x i) :=
      card_multiCodeSet e_terminal (ch_terminal R) S_terminal
    _ = N := step_terminal R h
end Generic

def code : Finset (Fin 522 → Fin 13) :=
  (codeBase C13R8Base.base).image CapCertC13.iso522.symm
theorem card_code : code.card = N := by
  calc
    code.card = (codeBase C13R8Base.base).card :=
      Finset.card_image_of_injective _ CapCertC13.iso522.symm.injective
    _ = N := card_codeBase C13R8Base.base C13R8Base.base_weights
theorem independent_code : (strongPower (SimpleGraph.cycleGraph 13) 522).IsIndepSet ↑code := by
  rw [← CapC13.Cyc_eq_cycleGraph]
  exact isIndepSet_image_symm CapCertC13.iso522 (independent_codeBase C13R8Base.base)
theorem exists_code : ∃ S : Finset (Fin 522 → Fin 13),
    (strongPower (SimpleGraph.cycleGraph 13) 522).IsIndepSet ↑S ∧ S.card = N :=
  ⟨code, independent_code, card_code⟩
theorem alpha_ge : N ≤ (strongPower (SimpleGraph.cycleGraph 13) 522).indepNum := by
  rw [← card_code]; exact SimpleGraph.IsIndepSet.card_le_indepNum independent_code
theorem capacity_root : (N : ℝ) ^ ((1 : ℝ) / (522 : ℕ)) ≤ shannonCapacity (SimpleGraph.cycleGraph 13) := by
  calc
    (N : ℝ) ^ ((1 : ℝ) / (522 : ℕ)) ≤
        (((strongPower (SimpleGraph.cycleGraph 13) 522).indepNum : ℕ) : ℝ) ^ ((1 : ℝ) / (522 : ℕ)) := by
      apply Real.rpow_le_rpow (by positivity) _ (by positivity)
      exact_mod_cast alpha_ge
    _ ≤ shannonCapacity (SimpleGraph.cycleGraph 13) := shannonCapacity_ge_root _ 522 (by norm_num)
theorem decimal_lower_integer : 6302927046770772 ^ 522 ≤ N * (1000000000000000 : Nat) ^ 522 := by native_decide
theorem decimal_upper_integer : N * (1000000000000000 : Nat) ^ 522 < 6302927046770773 ^ 522 := by native_decide
theorem root_bracket : (6302927046770772 : ℝ) / 1000000000000000 ≤ (N : ℝ) ^ ((1 : ℝ) / (522 : ℕ)) ∧
    (N : ℝ) ^ ((1 : ℝ) / (522 : ℕ)) < (6302927046770773 : ℝ) / 1000000000000000 := by
  constructor
  · exact Decimal.decimal_le (by norm_num) (by norm_num) decimal_lower_integer le_rfl
  · exact C11R6Common.root_lt_decimal (by norm_num) (by norm_num) decimal_upper_integer
theorem capacity_lower : (6.302927046770772 : ℝ) ≤ shannonCapacity (SimpleGraph.cycleGraph 13) := by
  rw [show (6.302927046770772 : ℝ) = (6302927046770772 : ℝ) / 1000000000000000 by norm_num]
  exact root_bracket.1.trans capacity_root
theorem strictly_larger_BPZ : CertC13.M < N := by native_decide
theorem strict_root_BPZ : (CertC13.M : ℝ) ^ ((1 : ℝ) / (522 : ℕ)) < (N : ℝ) ^ ((1 : ℝ) / (522 : ℕ)) := by
  apply Real.rpow_lt_rpow (by positivity) _ (by positivity)
  exact_mod_cast strictly_larger_BPZ
end ShannonBounds.C13R8D522
'''
(SRC/'C13R8D522.lean').write_text(dag)
print('Exported C13 base, 27 tables, 28-node DAG; no Lean success claimed.')
