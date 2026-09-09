#!/usr/bin/env python3
"""Generate literal R6 58-letter Lean certificates; Lean proves validity."""
from pathlib import Path
import hashlib,itertools,json,math
W=Path(__file__).resolve().parents[1]
F=W/'frozen';O=W/'source/ShannonBounds';ABC='BNADOHV'
PARENT_SOURCE=W/'parent_formalization'
H='''/- Copyright (c) 2026 Matthew Protti. Apache-2.0.
Generated from the frozen R6 certificates; the BPZ framework is unchanged. -/
'''
OPT='''
set_option autoImplicit false
set_option maxRecDepth 4000000
set_option maxHeartbeats 0
set_option synthInstance.maxSize 4000
set_option exponentiation.threshold 20000

'''
def need(b,s):
    if not b:raise ValueError(s)
def cases(values):
    out='(fun _ => '+values[-1]+')'
    for v in reversed(values[:-1]):out='(Fin.cases ('+v+') '+out+')'
    return out
def lookup(name,typ,values):
    return f'def {name} (a : Ty) : {typ} :=\n  match a.val with\n'+''.join(f'  | {i} => {v}\n'for i,v in enumerate(values))+'  | _ => '+values[0]+'\n\n'
def codeword(w):return '!['+', '.join(str(a) for a in w)+']'
def words(ws):return '['+', '.join(codeword(w)for w in ws)+']'
def digits(n):return tuple((n//11**i)%11 for i in range(3))
def conf(x,y):return all((a-b)%11 in (0,1,10)for a,b in zip(digits(x),digits(y)))
def main():
    profiles={d:json.loads((F/f'certificates/C11_AP_d{d}.json').read_text())for d in [186,198,213]}
    typed={d:json.loads((F/f'compiled/C11_TYPED_d{d}.json').read_text())for d in profiles}
    letters=typed[186]['letters'];need(len(letters)==58 and all(c['letters']==letters for c in typed.values()),'alphabet')
    frozen=json.loads((F/'FROZEN_INPUTS.json').read_text());I=set(frozen['I']);X=set(frozen['X']);P={p for p,q in frozen['pairs']};Q={q for p,q in frozen['pairs']}
    A={x for x in X if any(conf(x,p)for p in P)};D={x for x in X if any(conf(x,q)for q in Q)}
    fam=[I-P,X-A-D,A,D,P,Q,P]
    base=[[]for _ in letters];index={(t['family'],t['mask']):i for i,t in enumerate(letters)}
    for ai,group in enumerate(fam):
        for x in sorted(group):
            mask=sum(2**j for j,g in enumerate(fam)if any(conf(x,y)for y in g))
            base[index[(ABC[ai],mask)]].append(x)
    w0=list(map(len,base))
    bindings={'alphabet':letters,'coarse_base':[sorted(s)for s in fam],'typed_base':base,'base_weights':w0,'cases':{},'tables':{}}
    src=H+'import ShannonBounds.C11R6ListChecks\n'+OPT+'namespace ShannonBounds.C11R6Base\n\nopen C11R6ListChecks\nabbrev Ty := Fin 58\n\n'
    src+='def familyIndex : Letter → Nat\n'+''.join(f'  | .{a} => {i}\n'for i,a in enumerate(ABC))+'\n'
    src+=lookup('family','Letter',['Letter.'+t['family']for t in letters])
    src+=lookup('mask','Nat',[str(t['mask'])for t in letters])
    src+='''def has (a : Ty) (b : Letter) : Bool := (mask a).testBit (familyIndex b)

def typedSep (a b : Ty) : Bool :=
  (decide (family a = family b) && decide (mask a ≠ mask b)) ||
    !(has a (family b)) || !(has b (family a))

theorem typedSep_symm : ∀ a b, typedSep a b = typedSep b a := by native_decide
theorem typedSep_irrefl : ∀ a, typedSep a a = false := by native_decide
theorem descriptors_injective : Function.Injective (fun a : Ty => (family a, mask a)) := by native_decide
theorem normalized : ∀ a : Ty, mask a < 128 ∧ has a (family a) = true ∧
    ∀ b : Letter, Letter.sep (family a) b = true → has a b = false := by native_decide

theorem normalized_complete : ∀ a : Letter, ∀ m : Fin 128,
    m.val.testBit (familyIndex a) = true →
    (∀ b : Letter, Letter.sep a b = true → m.val.testBit (familyIndex b) = false) →
    ∃ t : Ty, family t = a ∧ mask t = m.val := by native_decide

def coarseLists : Letter → List BaseC11.Code
'''
    src+=''.join(f'  | .{a} => ['+', '.join(map(str,sorted(group)))+']\n'for a,group in zip(ABC,fam))+'\n'
    src+='''theorem coarseLists_eq : ∀ a, (coarseLists a).toFinset = BaseC11.base.fam a := by native_decide

def exactMask (x : BaseC11.Code) : Nat :=
  [Letter.B, Letter.N, Letter.A, Letter.D, Letter.O, Letter.H, Letter.V].foldl
    (fun m a => if (coarseLists a).any (fun y => BaseC11.wconf x y)
      then m + 2 ^ familyIndex a else m) 0

'''
    src+=lookup('baseLists','List BaseC11.Code',['['+', '.join(map(str,row))+']'for row in base])
    src+='''theorem baseLists_meaning : ∀ a : Ty,
    (baseLists a).toFinset = ((coarseLists (family a)).filter
      (fun x => decide (exactMask x = mask a))).toFinset := by native_decide

def vertexApart (x y : BaseC11.Code) : Bool := !(BaseC11.wconf x y)

theorem base_inside : ∀ a : Ty, inside vertexApart (baseLists a) = true := by native_decide
theorem base_between : ∀ a b : Ty, typedSep a b = true →
    between vertexApart (baseLists a) (baseLists b) = true := by native_decide

def base : Realisation Ty typedSep BaseC11.G3 where
  P a := (baseLists a).toFinset
  hindep := by
    intro a x hx y hy hne hadj
    have h := of_inside (base_inside a) hx hy hne
    have hw : BaseC11.wconf x y = true := hadj.2
    simpa [vertexApart, hw] using h
  hsep := by
    intro a b hab x hx y hy hc
    have h := of_between (base_between a b hab) hx hy
    have hw := (BaseC11.conflict_G3 x y).mp hc
    simpa [vertexApart, hw] using h

'''
    src+=lookup('w0','Nat',list(map(str,w0)))
    src+='theorem base_weights : ∀ a : Ty, base.w a = w0 a := by native_decide\n\nend ShannonBounds.C11R6Base\n'
    (O/'C11R6Base.lean').write_text(src)
    history=(PARENT_SOURCE/'C11R5History.lean').read_text().replace('C11R5','C11R6')
    history=history.replace('end ShannonBounds.C11R6History',''.join(f'def R5_{d} : Nat := {profiles[d]["parent_N"]}\n\n'for d in profiles)+'end ShannonBounds.C11R6History')
    (O/'C11R6History.lean').write_text(history)
    tabs={};mapping={}
    for d,c in typed.items():
        mapping[d]={}
        for k,t in c['tables'].items():
            key=hashlib.sha256(json.dumps(t,sort_keys=True,separators=(',',':')).encode()).hexdigest()[:20]
            need(key not in tabs or tabs[key]==t,'table collision');tabs[key]=t;mapping[d][k]=key
    bindings['tables']=tabs
    src=H+'import ShannonBounds.C11R6Base\n'+OPT+'namespace ShannonBounds.C11R6Tables\n\nopen C11R6Base C11R6ListChecks\n\n'
    for key,t in tabs.items():
        terminal=t['kind']=='terminal';rows=[t['rows']]if terminal else t['rows'];q=len(next(w for row in rows for w in row))
        if terminal:
            src+=f'def rows_{key} : List (Fin {q} → Ty) :=\n  {words(t["rows"])}\n\n'
            src+=f'theorem inside_{key} : inside (wordApart typedSep) rows_{key} = true := by native_decide\n\n'
            src+=f'def S_{key} : Code Ty typedSep {q} := codeFromList typedSep rows_{key} inside_{key}\n\n'
        else:
            src+=lookup('rows_'+key,f'List (Fin {q} → Ty)',[words(row)for row in t['rows']])
            src+=f'theorem inside_{key} : ∀ a : Ty, inside (wordApart typedSep) (rows_{key} a) = true := by native_decide\n\n'
            src+=f'theorem cross_{key} : ∀ a b : Ty, typedSep a b = true →\n    between (wordApart typedSep) (rows_{key} a) (rows_{key} b) = true := by native_decide\n\n'
            src+=f'def S_{key} : Subst Ty typedSep {q} :=\n  substFromLists typedSep rows_{key} inside_{key} cross_{key}\n\n'
    src+='end ShannonBounds.C11R6Tables\n';(O/'C11R6Tables.lean').write_text(src)
    audited=['ShannonBounds.C11R6ListChecks.'+n for n in ['of_inside','of_between','wordApart_iff','substFromLists','codeFromList']]
    audited+=['ShannonBounds.C11R6Base.'+n for n in ['typedSep_symm','typedSep_irrefl','descriptors_injective','normalized','normalized_complete','coarseLists_eq','baseLists_meaning','base','base_weights']]
    audited+=['ShannonBounds.C11R6Tables.S_'+k for k in tabs]
    for d,c in typed.items():
        values={};exps={}
        for node in c['nodes']:
            name=node['name'];kind=node['kind']
            if kind=='base':values[name]=w0;exps[name]=1
            else:
                kids=node['children'];t=c['tables'][kind];terminal=t['kind']=='terminal';rows=[t['rows']]if terminal else t['rows']
                vals=[sum(math.prod(values[k][a]for k,a in zip(kids,word))for word in row)for row in rows]
                values[name]=vals[0]if terminal else vals;exps[name]=sum(exps[k]for k in kids)
        need(values[c['root']]==int(c['N'])==int(profiles[d]['N']) and exps[c['root']]*3==d,'root mismatch')
        bindings['cases'][str(d)]={'typed_sha256':hashlib.sha256((F/f'compiled/C11_TYPED_d{d}.json').read_bytes()).hexdigest(),'profile_sha256':hashlib.sha256((F/f'certificates/C11_AP_d{d}.json').read_bytes()).hexdigest(),'nodes':c['nodes'],'node_weights':values,'node_base_exponents':exps,'tables':mapping[d],'N':c['N']}
        src=H+'import ShannonBounds.C11R6Tables\nimport ShannonBounds.C11R6History\n'+OPT+f'namespace ShannonBounds.C11R6D{d}\n\nopen SimpleGraph C11R6Base C11R6Tables\n\ndef N : Nat := {c["N"]}\n\nsection Generic\n\nvariable {{α : Type*}} [Fintype α] [DecidableEq α]\n  {{G : SimpleGraph α}} [DecidableRel G.Adj]\n\n'
        for node in c['nodes']:
            name=node['name'];kind=node['kind']
            if kind=='base':
                src+=f'''def R_{name} (R : Realisation Ty typedSep G) :
    Realisation Ty typedSep (strongPower G 1) := R.mapIso (strongPower_one_iso G).symm
def w_{name} : Ty → Nat := C11R6Base.w0
theorem step_{name} (R : Realisation Ty typedSep G)
    (h : ∀ a, R.w a = C11R6Base.w0 a) (a : Ty) : (R_{name} R).w a = w_{name} a := by
  rw [R_{name}, Realisation.w_mapIso]
  exact h a

'''
                continue
            kids=node['children'];q=len(kids);key=mapping[d][kind];terminal=c['tables'][kind]['kind']=='terminal'
            src+=f'def e_{name} : Fin {q} → Nat := {cases([str(exps[k])for k in kids])}\n\n'
            src+=f'def ch_{name} (R : Realisation Ty typedSep G) :\n    (i : Fin {q}) → Realisation Ty typedSep (strongPower G (e_{name} i)) :=\n  {cases(["R_"+k+" R"for k in kids])}\n\n'
            product=' * '.join(f'w_{k} (x {i})'for i,k in enumerate(kids))
            if not terminal:
                src+=f'def R_{name} (R : Realisation Ty typedSep G) :\n    Realisation Ty typedSep (strongPower G {exps[name]}) :=\n  Realisation.multiSubst e_{name} (ch_{name} R) S_{key}\n\n'
                src+=lookup('w_'+name,'Nat',list(map(str,values[name])))
                src+=f'theorem polynomial_{name} : ∀ a : Ty,\n    (∑ x ∈ S_{key}.T a, {product}) = w_{name} a := by native_decide\n\n'
                src+=f'theorem step_{name} (R : Realisation Ty typedSep G)\n    (h : ∀ a, R.w a = C11R6Base.w0 a) :\n    ∀ a, (R_{name} R).w a = w_{name} a := by\n  intro a\n  change (Realisation.multiSubst e_{name} (ch_{name} R) S_{key}).w a = w_{name} a\n  rw [w_multiSubst]\n'
            else:
                src+=f'theorem terminal_polynomial : (∑ x ∈ S_{key}.C, {product}) = N := by native_decide\n\n'
                src+=f'theorem terminal_value (R : Realisation Ty typedSep G)\n    (h : ∀ a, R.w a = C11R6Base.w0 a) :\n    (∑ x ∈ S_{key}.C, ∏ i, (ch_{name} R i).w (x i)) = N := by\n'
            for i,k in enumerate(kids):src+=f'  have h{i} : ∀ b, (ch_{name} R {i}).w b = w_{k} b :=\n    fun b => step_{k} R h b\n'
            src+='  simp only ['+{2:'Fin.prod_univ_two',3:'Fin.prod_univ_three',4:'Fin.prod_univ_four'}[q]+', '+', '.join('h'+str(i)for i in range(q))+']\n'
            src+=f'  exact {"terminal_polynomial"if terminal else "polynomial_"+name+" a"}\n\n'
        parent=json.loads((F/f'parent/C11_d{d}.json').read_text())
        tail=(PARENT_SOURCE/f'C11R5D{d}.lean').read_text().split('def codeBase',1)[1]
        tail='def codeBase'+tail
        tail=tail.replace('C11R5','C11R6').replace('Realisation Letter Letter.sep G','Realisation Ty typedSep G').replace('CertC11.w0','C11R6Base.w0').replace('BaseC11.base.toRealisation','C11R6Base.base').replace('CapCertC11.base_fam_card','C11R6Base.base_weights')
        tail=tail.replace('S_'+parent['nodes'][-1]['kind'],'S_'+mapping[d][c['nodes'][-1]['kind']])
        for key in ['decimal_lower_numerator','decimal_upper_numerator']:
            old=parent[key];new=profiles[d][key]
            tail=tail.replace(old,new).replace(old[:-15]+'.'+old[-15:],new[:-15]+'.'+new[-15:])
        extra=f'''theorem strictly_larger_R5 : C11R6History.R5_{d} < N := by native_decide

theorem cross_power_R5 : C11R6History.R5_{d} ^ {d} < N ^ {d} := by native_decide

theorem strict_root_R5 : (C11R6History.R5_{d} : ℝ) ^ ((1 : ℝ) / ({d} : ℕ)) <
    (N : ℝ) ^ ((1 : ℝ) / ({d} : ℕ)) :=
  C11R6Common.root_lt_of_cross_power (by norm_num) (by norm_num) cross_power_R5

'''
        tail=tail.replace(f'end ShannonBounds.C11R6D{d}',extra+f'end ShannonBounds.C11R6D{d}')
        src+=tail;(O/f'C11R6D{d}.lean').write_text(src)
        ns=f'ShannonBounds.C11R6D{d}.'
        audited+=[ns+n for n in ['card_codeBase','card_code','independent_code','exists_code','alpha_ge','capacity_root','root_bracket','capacity_lower','strictly_larger_R5','cross_power_R5','strict_root_R5']]
        audited+=[ns+'step_'+node['name']for node in c['nodes']if node['name']!=c['root']]
        audited+=[ns+prefix+k for k in parent['targets']for prefix in ['cross_power_','strict_root_']]
    (O/'C11R6.lean').write_text(''.join(f'import ShannonBounds.C11R6D{d}\n'for d in profiles))
    scope=H+'import ShannonBounds.C11R6\n\nset_option autoImplicit false\nset_option pp.fullNames true\nset_option pp.universes true\nset_option pp.proofs false\n\nopen ShannonBounds\n\n'
    for d,c in profiles.items():
        n=c['N'];dec=c['decimal_lower_numerator'][:-15]+'.'+c['decimal_lower_numerator'][-15:]
        scope+=f'theorem R6_scope_set_{d} : ∃ S : Finset (Fin {d} → Fin 11),\n    (SimpleGraph.strongPower (SimpleGraph.cycleGraph 11) {d}).IsIndepSet ↑S ∧ S.card = {n} :=\n  C11R6D{d}.exists_code\n\n'
        scope+=f'theorem R6_scope_capacity_{d} : ({dec} : ℝ) ≤ shannonCapacity (SimpleGraph.cycleGraph 11) := C11R6D{d}.capacity_lower\n\n'
        scope+=f'theorem R6_scope_bracket_{d} : ({c["decimal_lower_numerator"]} : ℝ) / 1000000000000000 ≤ ({n} : ℝ) ^ ((1 : ℝ) / ({d} : ℕ)) ∧\n    ({n} : ℝ) ^ ((1 : ℝ) / ({d} : ℕ)) < ({c["decimal_upper_numerator"]} : ℝ) / 1000000000000000 := C11R6D{d}.root_bracket\n\n'
        hist=json.loads((F/f'parent/C11_d{d}.json').read_text())['targets']
        hist={**hist,'R5':{'dimension':d,'N':c['parent_N']}}
        for k,t in hist.items():scope+=f'theorem R6_scope_comparison_{d}_{k} : ({t["N"]} : ℝ) ^ ((1 : ℝ) / ({t["dimension"]} : ℕ)) <\n    ({n} : ℝ) ^ ((1 : ℝ) / ({d} : ℕ)) := C11R6D{d}.strict_root_{k}\n\n'
        audited+=[f'R6_scope_{kind}_{d}'for kind in ['set','capacity','bracket']]+[f'R6_scope_comparison_{d}_{k}'for k in hist]
    scope+='\n'.join('#check '+n for n in audited if n.startswith('R6_scope'))+'\n\n'+'\n'.join('#print axioms '+n for n in audited)+'\n'
    (W/'source/C11R6_AxiomAudit.lean').write_text(scope)
    bindings['audited_names']=audited
    (W/'SOURCE_BINDINGS.json').write_text(json.dumps(bindings,indent=2)+'\n')
    print('Generated',len(tabs),'distinct typed tables;',len(audited),'audit targets; base nonempty types',sum(bool(x)for x in base))

if __name__=='__main__':main()
