#!/usr/bin/env python3
"""Deterministically translate frozen literal tables/DAGs into Lean source.

The generator is not trusted to prove anything. Lean checks the generated
constructions; SOURCE_BINDINGS records data identities, nodes and exact sizes.
"""
from pathlib import Path
import hashlib, json, math, re

WORK = Path(__file__).resolve().parents[1]
FROZEN = WORK/'frozen'
OUT = WORK/'source'
ABC = 'BNADOHV'
HEADER = '''/-
Copyright (c) 2026 Matthew Protti. Released under Apache 2.0.
Generated from unchanged R5 certificate JSON; do not hand-edit the literals.
Uses BPZ's pinned framework (Buys, Polak, Zuiddam), without changing it.
-/
'''
OPTIONS = '''
set_option autoImplicit false
set_option maxRecDepth 4000000
set_option maxHeartbeats 0
set_option synthInstance.maxSize 4000
set_option exponentiation.threshold 20000

'''


def fin_cases(items):
    result = '(fun _ => '+items[-1]+')'
    for item in reversed(items[:-1]):
        result = '(Fin.cases ('+item+') '+result+')'
    return result


def word(w):
    return '!['+', '.join('Letter.'+a for a in w)+']'


def row(words):
    return '{'+', '.join(word(w) for w in words)+'}' if words else '∅'


def weights(c):
    values, exponents = {}, {}
    for n in c['nodes']:
        name, kind = n['name'], n['kind']
        if kind == 'base':
            values[name] = dict(zip(ABC,[145,142,3,3,3,3,3]))
            exponents[name] = 1
        else:
            kids=n['children'];exponents[name]=sum(exponents[k] for k in kids)
            def count(ws):return sum(math.prod(values[k][a] for k,a in zip(kids,w)) for w in ws)
            t=c['tables'][kind]
            values[name]=count(t) if type(t)is list else {a:count(t[a])for a in ABC}
    if values[c['root']]!=int(c['N']) or exponents[c['root']]*3!=c['dimension']:
        raise ValueError('Frozen root mismatch')
    return values, exponents


def main():
    cases=[json.loads(p.read_text())for p in sorted((FROZEN/'certificates').glob('*.json'))]
    if [c['dimension']for c in cases]!=[186,198,213]:raise ValueError('Unexpected cases')
    tables={}
    for c in cases:
        for k,t in c['tables'].items():
            if not re.fullmatch('[0-9a-f]{16}',k):raise ValueError('Table identifier')
            if k in tables and tables[k]!=t:raise ValueError('Table collision')
            tables[k]=t
    text=HEADER+'import ShannonBounds.C11R5Common\n'+OPTIONS+'namespace ShannonBounds.C11R5Tables\n\n'
    for k,t in sorted(tables.items()):
        terminal=type(t)is list
        q=len(t[0]) if terminal else len(next(w for r in t.values()for w in r))
        if terminal:
            text+=f'def T_{k} : Finset (Fin {q} → Letter) :=\n  {row(t)}\n\n'
            text+=f'def S_{k} : Code Letter Letter.sep {q} := ⟨T_{k}, by native_decide⟩\n\n'
        else:
            text+=f'def T_{k} : Letter → Finset (Fin {q} → Letter)\n'
            text+=''.join(f'  | .{a} => {row(t[a])}\n'for a in ABC)+'\n'
            text+=f'def S_{k} : Subst Letter Letter.sep {q} :=\n  ⟨T_{k}, by native_decide, by native_decide⟩\n\n'
    text+='end ShannonBounds.C11R5Tables\n'
    (OUT/'ShannonBounds/C11R5Tables.lean').write_text(text)
    audited=['ShannonBounds.C11R5Common.root_lt_of_cross_power','ShannonBounds.C11R5Common.root_lt_decimal']
    audited += ['ShannonBounds.C11R5Tables.S_'+k for k in sorted(tables)]
    bindings={'certificate_hashes':{},'tables':tables,'cases':{},'audited_names':audited}
    history=cases[0]['targets']
    hsrc=HEADER+'import ShannonBounds.C11R5Common\n'+OPTIONS+'namespace ShannonBounds.C11R5History\n\n'
    for k,v in history.items():hsrc+=f'def {k} : Nat := {v["N"]}\n\n'
    hsrc+='theorem BPZ_eq_upstream : BPZ_207 = CertC11.M := by rfl\n\nend ShannonBounds.C11R5History\n'
    (OUT/'ShannonBounds/C11R5History.lean').write_text(hsrc)
    for c in cases:
        dim=c['dimension'];ns=f'ShannonBounds.C11R5D{dim}';root=c['root']
        decimal=c['decimal_lower_numerator'][:-15]+'.'+c['decimal_lower_numerator'][-15:]
        values,exps=weights(c);blocks=exps[root];n=int(c['N'])
        bindings['certificate_hashes'][str(dim)]=hashlib.sha256((FROZEN/f'certificates/C11_d{dim}.json').read_bytes()).hexdigest()
        bindings['cases'][str(dim)]={'nodes':c['nodes'],'root':root,'dimension':dim,'N':c['N'],'node_weights':values,'node_base_exponents':exps,'tables_used':list(c['tables'])}
        text=HEADER+'import ShannonBounds.C11R5Tables\nimport ShannonBounds.C11R5History\n'+OPTIONS+f'namespace {ns}\n\nopen SimpleGraph C11R5Tables\n\ndef N : Nat := {n}\n\nsection Generic\n\nvariable {{α : Type*}} [Fintype α] [DecidableEq α]\n  {{G : SimpleGraph α}} [DecidableRel G.Adj]\n\n'
        for node in c['nodes']:
            name,kind=node['name'],node['kind']
            if kind=='base':
                text+=f'def R_{name} (R : Realisation Letter Letter.sep G) :\n    Realisation Letter Letter.sep (strongPower G 1) := CertC11.R1 R\n\n'
                text+=f'def w_{name} : Letter → Nat := CertC11.w0\n\n'
                text+=f'theorem step_{name} (R : Realisation Letter Letter.sep G)\n    (h : ∀ a, R.w a = CertC11.w0 a) (a : Letter) :\n    (R_{name} R).w a = w_{name} a := (CertC11.w_R1 R a).trans (h a)\n\n'
                continue
            kids=node['children'];q=len(kids);terminal=type(c['tables'][kind])is list
            text+=f'def e_{name} : Fin {q} → Nat := {fin_cases([str(exps[k])for k in kids])}\n\n'
            text+=f'def ch_{name} (R : Realisation Letter Letter.sep G) :\n    (i : Fin {q}) → Realisation Letter Letter.sep (strongPower G (e_{name} i)) :=\n  {fin_cases(["R_"+k+" R" for k in kids])}\n\n'
            if not terminal:
                text+=f'def R_{name} (R : Realisation Letter Letter.sep G) :\n    Realisation Letter Letter.sep (strongPower G {exps[name]}) :=\n  Realisation.multiSubst e_{name} (ch_{name} R) S_{kind}\n\n'
                text+=f'def w_{name} : Letter → Nat\n'+''.join(f'  | .{a} => {values[name][a]}\n' for a in ABC)+'\n'
                text+=f'theorem step_{name} (R : Realisation Letter Letter.sep G)\n    (h : ∀ a, R.w a = CertC11.w0 a) :\n    ∀ a, (R_{name} R).w a = w_{name} a := by\n  intro a\n  change (Realisation.multiSubst e_{name} (ch_{name} R) S_{kind}).w a = w_{name} a\n  rw [w_multiSubst]\n'
            else:
                text+=f'theorem terminal_value (R : Realisation Letter Letter.sep G)\n    (h : ∀ a, R.w a = CertC11.w0 a) :\n    (∑ x ∈ S_{kind}.C, ∏ i, (ch_{name} R i).w (x i)) = N := by\n'
            for i,k in enumerate(kids):
                text+=f'  have h{i} : ∀ b, (ch_{name} R {i}).w b = w_{k} b :=\n    fun b => step_{k} R h b\n'
            text+='  simp only ['+{2:'Fin.prod_univ_two',3:'Fin.prod_univ_three',4:'Fin.prod_univ_four'}[q]+', '+', '.join('h'+str(i) for i in range(q))+']\n'
            text+='  native_decide\n\n'if terminal else'  cases a <;> native_decide\n\n'
        terminal_kind=c['nodes'][-1]['kind']
        text+=f'''def codeBase (R : Realisation Letter Letter.sep G) : Finset (Fin {blocks} → α) :=
  (multiCodeSet e_{root} (ch_{root} R) S_{terminal_kind}).image
    (strongPower_sum_iso G e_{root}).symm

theorem independent_codeBase (R : Realisation Letter Letter.sep G) :
    (strongPower G {blocks}).IsIndepSet ↑(codeBase R) :=
  isIndepSet_image_symm (strongPower_sum_iso G e_{root})
    (isIndepSet_multiCodeSet e_{root} (ch_{root} R) S_{terminal_kind})

theorem card_codeBase (R : Realisation Letter Letter.sep G)
    (h : ∀ a, R.w a = CertC11.w0 a) : (codeBase R).card = N := by
  calc
    (codeBase R).card = (multiCodeSet e_{root} (ch_{root} R) S_{terminal_kind}).card :=
      Finset.card_image_of_injective _ (strongPower_sum_iso G e_{root}).symm.injective
    _ = ∑ x ∈ S_{terminal_kind}.C, ∏ i, (ch_{root} R i).w (x i) :=
      card_multiCodeSet e_{root} (ch_{root} R) S_{terminal_kind}
    _ = N := terminal_value R h

end Generic

def isoPhysical : strongPower BaseC11.Cyc11 {dim} ≃g strongPower BaseC11.G3 {blocks} :=
  (strongPower_mul_iso BaseC11.Cyc11 3 {blocks}).trans
    (strongPower_congr CapC11.G3_iso {blocks}).symm

def code : Finset (Fin {dim} → Fin 11) :=
  (codeBase BaseC11.base.toRealisation).image isoPhysical.symm

theorem card_code : code.card = N := by
  calc
    code.card = (codeBase BaseC11.base.toRealisation).card :=
      Finset.card_image_of_injective _ isoPhysical.symm.injective
    _ = N := card_codeBase BaseC11.base.toRealisation CapCertC11.base_fam_card

theorem independent_code_Cyc :
    (strongPower BaseC11.Cyc11 {dim}).IsIndepSet ↑code :=
  isIndepSet_image_symm isoPhysical
    (independent_codeBase BaseC11.base.toRealisation)

theorem independent_code :
    (strongPower (SimpleGraph.cycleGraph 11) {dim}).IsIndepSet ↑code := by
  rw [← CapC11.Cyc_eq_cycleGraph]
  exact independent_code_Cyc

theorem exists_code :
    ∃ S : Finset (Fin {dim} → Fin 11),
      (strongPower (SimpleGraph.cycleGraph 11) {dim}).IsIndepSet ↑S ∧ S.card = N :=
  ⟨code, independent_code, card_code⟩

theorem alpha_ge : N ≤ (strongPower (SimpleGraph.cycleGraph 11) {dim}).indepNum := by
  rw [← card_code]
  exact SimpleGraph.IsIndepSet.card_le_indepNum independent_code

theorem capacity_root : (N : ℝ) ^ ((1 : ℝ) / ({dim} : ℕ)) ≤
    shannonCapacity (SimpleGraph.cycleGraph 11) := by
  calc
    (N : ℝ) ^ ((1 : ℝ) / ({dim} : ℕ)) ≤
        (((strongPower (SimpleGraph.cycleGraph 11) {dim}).indepNum : ℕ) : ℝ) ^
          ((1 : ℝ) / ({dim} : ℕ)) := by
      apply Real.rpow_le_rpow (by positivity) _ (by positivity)
      exact_mod_cast alpha_ge
    _ ≤ shannonCapacity (SimpleGraph.cycleGraph 11) :=
      shannonCapacity_ge_root (SimpleGraph.cycleGraph 11) {dim} (by norm_num)

theorem decimal_lower_integer : {c['decimal_lower_numerator']} ^ {dim} ≤
    N * (1000000000000000 : Nat) ^ {dim} := by native_decide

theorem decimal_upper_integer : N * (1000000000000000 : Nat) ^ {dim} <
    {c['decimal_upper_numerator']} ^ {dim} := by native_decide

theorem root_bracket :
    ({c['decimal_lower_numerator']} : ℝ) / 1000000000000000 ≤ (N : ℝ) ^ ((1 : ℝ) / ({dim} : ℕ)) ∧
    (N : ℝ) ^ ((1 : ℝ) / ({dim} : ℕ)) < ({c['decimal_upper_numerator']} : ℝ) / 1000000000000000 := by
  constructor
  · exact Decimal.decimal_le (by norm_num) (by norm_num) decimal_lower_integer le_rfl
  · exact C11R5Common.root_lt_decimal (by norm_num) (by norm_num) decimal_upper_integer

theorem capacity_lower : ({decimal} : ℝ) ≤
    shannonCapacity (SimpleGraph.cycleGraph 11) := by
  rw [show ({decimal} : ℝ) =
    ({c['decimal_lower_numerator']} : ℝ) / 1000000000000000 by norm_num]
  exact root_bracket.1.trans capacity_root

'''
        for k,v in history.items():
            e=v['dimension']
            text+=f'theorem cross_power_{k} : C11R5History.{k} ^ {dim} < N ^ {e} := by native_decide\n\n'
            text+=f'theorem strict_root_{k} :\n    (C11R5History.{k} : ℝ) ^ ((1 : ℝ) / ({e} : ℕ)) <\n    (N : ℝ) ^ ((1 : ℝ) / ({dim} : ℕ)) :=\n  C11R5Common.root_lt_of_cross_power (by norm_num) (by norm_num) cross_power_{k}\n\n'
        text+=f'end {ns}\n'
        (OUT/f'ShannonBounds/C11R5D{dim}.lean').write_text(text)
        audited += [ns+'.'+name for name in ['card_codeBase','card_code','independent_code','exists_code','alpha_ge','capacity_root','root_bracket','capacity_lower']]
        audited += [ns+'.step_'+node['name'] for node in c['nodes'] if node['name']!=root]
        audited += [ns+'.'+prefix+k for k in history for prefix in ['cross_power_','strict_root_']]
    (OUT/'ShannonBounds/C11R5.lean').write_text(''.join(f'import ShannonBounds.C11R5D{c["dimension"]}\n' for c in cases))
    scope=HEADER+'import ShannonBounds.C11R5\n\nset_option autoImplicit false\nset_option pp.universes true\nset_option pp.fullNames true\nset_option pp.proofs false\n\nopen ShannonBounds\n\n'
    for c in cases:
        d=c['dimension'];n=c['N'];ns=f'C11R5D{d}'
        scope+=f'theorem R5_scope_set_{d} :\n    ∃ S : Finset (Fin {d} → Fin 11),\n      (SimpleGraph.strongPower (SimpleGraph.cycleGraph 11) {d}).IsIndepSet ↑S ∧ S.card = {n} :=\n  {ns}.exists_code\n\n'
        dec=c['decimal_lower_numerator'][:-15]+'.'+c['decimal_lower_numerator'][-15:]
        scope+=f'theorem R5_scope_capacity_{d} : ({dec} : ℝ) ≤\n    shannonCapacity (SimpleGraph.cycleGraph 11) := {ns}.capacity_lower\n\n'
        scope+=f'theorem R5_scope_bracket_{d} :\n    ({c["decimal_lower_numerator"]} : ℝ) / 1000000000000000 ≤ ({n} : ℝ) ^ ((1 : ℝ) / ({d} : ℕ)) ∧\n    ({n} : ℝ) ^ ((1 : ℝ) / ({d} : ℕ)) < ({c["decimal_upper_numerator"]} : ℝ) / 1000000000000000 :=\n  {ns}.root_bracket\n\n'
        audited += [f'R5_scope_{suffix}_{d}'for suffix in ['set','capacity','bracket']]
        for k,v in history.items():
            scope+=f'theorem R5_scope_comparison_{d}_{k} :\n    ({v["N"]} : ℝ) ^ ((1 : ℝ) / ({v["dimension"]} : ℕ)) <\n    ({n} : ℝ) ^ ((1 : ℝ) / ({d} : ℕ)) := {ns}.strict_root_{k}\n\n'
            audited.append(f'R5_scope_comparison_{d}_{k}')
    scope+='\n'.join('#check '+name for name in audited if name.startswith('R5_scope'))+'\n\n'
    scope+='\n'.join('#print axioms '+name for name in audited)+'\n'
    (OUT/'C11R5_AxiomAudit.lean').write_text(scope)
    bindings['audited_names']=audited
    (WORK/'SOURCE_BINDINGS.json').write_text(json.dumps(bindings,indent=2)+'\n')
    print('Generated',len(tables),'literal tables;',len(audited),'audited declarations; dimensions 186, 198, 213')


if __name__=='__main__':main()
