"""Inspect actual loaded Lean declarations, full types, and transitive axioms.
Accept native trust only after checking actual closed Bool-equality axiom types.
"""
from pathlib import Path
import argparse, datetime, hashlib, json, os, re, subprocess, time

ROOT = Path(__file__).resolve().parents[1]
IMPORTS = ['ShannonBounds.C11R9D198','ShannonBounds.C11R9D213',
           'ShannonBounds.C11R10D213','ShannonBounds.C13R8D522',
           'ShannonBounds.CellRetyping.Examples']
STANDARD = {'propext','Classical.choice','Quot.sound'}
NATIVE = re.compile(r'(?:[A-Za-z0-9_]+\.)*_native\.(?:native_decide|decide|bv_decide)\.ax(?:_\d+){0,2}')

LEAN = '''
import Lean.Util.CollectAxioms
set_option pp.fullNames true
set_option pp.universes true
set_option maxHeartbeats 0
set_option maxRecDepth 4000000
open Lean Elab Command

private def parseName (s : String) : Name :=
  (s.splitOn ".").foldl (fun n p => match p.toNat? with
    | some k => Name.num n k
    | none => Name.str n p) Name.anonymous

private def inspect (n : Name) (symbolic : Bool) : CommandElabM Unit := do
  let some info := (← getEnv).find? n | throwError "Missing declaration {n}"
  if info.isUnsafe then throwError "Unsafe mathematical declaration {n}"
  match info with
  | .axiomInfo _ => throwError "New mathematical axiom {n}"
  | _ => pure ()
  if info.type.hasFVar || info.type.hasMVar || info.type.hasLooseBVars then
    throwError "Non-closed statement {n}"
  let deps ← collectAxioms n
  let allowed := #[``propext, ``Classical.choice, ``Quot.sound]
  if symbolic then
    for dep in deps do
      unless allowed.contains dep do throwError "Symbolic proof has additional axiom {dep}: {n}"
  let row := Json.mkObj [("name", toJson n.toString), ("symbolic", toJson symbolic),
    ("axioms", toJson (deps.map Name.toString)), ("unsafe", toJson false),
    ("closed", toJson true), ("raw_type", toJson (reprStr info.type))]
  logInfo m!"DECL_JSON: {row.compress}"

elab "#audit_symbolic" : command => do
  let env ← getEnv
  let names : Array Name ← env.constants.foldM (init := #[]) fun acc n _ => do
    if n.toString.startsWith "ShannonBounds.CellRetyping." then return acc.push n
    return acc
  let names := names.qsort fun a b => decide (a.toString < b.toString)
  for n in names do inspect n true
  logInfo m!"SYMBOLIC_COUNT: {names.size}"

elab "#audit_one " s:str : command => inspect (parseName s.getString) false

elab "#audit_native " s:str : command => do
  let n := parseName s.getString
  let some (.axiomInfo info) := (← getEnv).find? n | throwError "Missing native axiom {n}"
  if info.isUnsafe then throwError "Unsafe native axiom {n}"
  unless info.type.isAppOfArity ``Eq 3 do throwError "Native axiom is not equality {n}"
  let args := info.type.getAppArgs
  unless args[0]!.isConstOf ``Bool && args[2]!.isConstOf ``Bool.true do
    throwError "Native axiom is not Bool expression = true: {n}"
  if args[1]!.hasFVar || args[1]!.hasMVar || args[1]!.hasLooseBVars then
    throwError "Non-closed native expression {n}"
  let row := Json.mkObj [("name", toJson n.toString), ("closed", toJson true),
    ("unsafe", toJson false), ("type_shape", toJson "Eq Bool closed_expression true"),
    ("raw_type", toJson (reprStr info.type))]
  logInfo m!"NATIVE_JSON: {row.compress}"
'''

HEADLINES = [f'ShannonBounds.{ns}.{th}' for ns in ['C11R9D198','C11R9D213','C11R10D213','C13R8D522']
 for th in ['exists_code','card_code','independent_code','capacity_root','root_bracket','capacity_lower']]
HEADLINES += ['ShannonBounds.CellRetyping.'+n for n in [
 'canonical','canonical_complete','forget_canonical','precision','tighten_idempotent',
 'realize_weights','canonical_sets','canonical_counts','tighten_sets','tighten_counts',
 'missing_sound','exact_touch_witness','least_sound_mask','containing_masks_sound','witness_sound_iff_contains',
 'add','exact_addition_gain','pruning_sets','pruning_counts','prune_retype_sets',
 'canonicalBPZ','tightenBPZ','bpz_canonical_sets','bpz_canonical_weights',
 'Recipe.exact_weights','Recipe.independent','DAG.exact_weights','DAG.independent',
 'DAG.repeated_child_dimension','DAG.profile']]

def main():
    ap=argparse.ArgumentParser();ap.add_argument('run',type=Path);ap.add_argument('--toolchain-bin',type=Path,required=True)
    a=ap.parse_args();run=a.run.resolve();repo=run/'bpz';logs=run/'audit';logs.mkdir(exist_ok=True)
    env=dict(os.environ);env['PATH']=str(a.toolchain_bin)+os.pathsep+env['PATH']
    report={'status':'INCOMPLETE','commands':[],'started_at_utc':datetime.datetime.now(datetime.timezone.utc).isoformat()}
    def save(): (run/'AUDIT_RESULT.json').write_text(json.dumps(report,indent=2)+'\n')
    def invoke(label,source):
        (repo/(label+'.lean')).write_text(source);start=time.monotonic()
        cmd=['lake','env','lean','-o',label+'.olean',label+'.lean']
        with (logs/(label+'.log')).open('w') as f:
            p=subprocess.run(cmd,cwd=repo,env=env,stdout=f,stderr=subprocess.STDOUT,timeout=1800)
        out=(logs/(label+'.log')).read_text()
        report['commands'].append({'command':cmd,'exit_code':p.returncode,'elapsed_seconds':time.monotonic()-start,
          'log':str((logs/(label+'.log')).relative_to(run))});save()
        if p.returncode:raise RuntimeError(out[-4000:])
        if re.search(r'\bsorryAx\b|declaration uses.*sorry',out):raise RuntimeError('Placeholder in audit')
        return out
    imports='\n'.join('import '+m for m in IMPORTS)+'\n'
    expected=json.loads((ROOT/'NUMERICAL_AUDIT_NAMES.json').read_text())
    src=imports+LEAN+'\n#audit_symbolic\n'+'\n'.join('#audit_one '+json.dumps(n) for n in expected)
    src+='\n\n'+'\n'.join('#check @'+n for n in HEADLINES)+'\n'
    out=invoke('ConsolidationAudit',src)
    rows=[json.loads(x) for x in re.findall(r'^DECL_JSON: (.+)$',out,re.M)]
    assert len(rows)==len({r['name'] for r in rows}), 'Duplicate audit rows'
    assert {r['name'] for r in rows if not r['symbolic']}==set(expected), 'Numerical audit coverage'
    symbolic=[r for r in rows if r['symbolic']]
    assert len(symbolic)==int(re.search(r'SYMBOLIC_COUNT: (\d+)',out)[1]) and symbolic
    native=set()
    for row in rows:
        for dep in row['axioms']:
            if dep not in STANDARD:
                assert NATIVE.fullmatch(dep) and not row['symbolic'], (row['name'],dep)
                native.add(dep)
    report['numerical_theorems']=len(expected);report['symbolic_declarations']=len(symbolic)
    report['declarations']=[{k:v for k,v in r.items() if k!='raw_type'} for r in rows]
    (run/'RAW_STATEMENT_TYPES.json').write_text(json.dumps(rows,indent=2)+'\n')
    out=invoke('ConsolidationNativeAudit',imports+LEAN+'\n'+'\n'.join('#audit_native '+json.dumps(n) for n in sorted(native))+'\n')
    natives=[json.loads(x) for x in re.findall(r'^NATIVE_JSON: (.+)$',out,re.M)]
    assert len(natives)==len(native) and {r['name'] for r in natives}==native
    (run/'RAW_NATIVE_TYPES.json').write_text(json.dumps(natives,indent=2)+'\n')
    report['native_axioms']=sorted(native);report['distinct_native_axioms']=len(native)
    report['symbolic_new_native_axioms']=0
    report['full_type_headlines']=HEADLINES
    report['status']='PASS_DECLARATION_TYPES_AND_TRANSITIVE_AXIOMS'
    report['completed_at_utc']=datetime.datetime.now(datetime.timezone.utc).isoformat();save()
    print(report['status'],len(expected),'numerical theorems,',len(symbolic),'symbolic declarations,',len(native),'disclosed native axioms')

if __name__=='__main__': main()
