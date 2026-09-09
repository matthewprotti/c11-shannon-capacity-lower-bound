#!/usr/bin/env python3
"""Non-mutating release replay; finite regression evidence, NOT a Lean proof."""
from pathlib import Path, PurePosixPath
import hashlib,json,os,subprocess,sys
sys.dont_write_bytecode=True
ROOT=Path(__file__).resolve().parent

def require(ok,message):
    if not ok:raise ValueError(message)

def manifest_check():
    manifest=ROOT/'MANIFEST.sha256'
    require(manifest.is_file(),'manifest missing')
    expected={}
    for line in manifest.read_text().splitlines():
        h,p=line.split('  ',1);pos=PurePosixPath(p)
        require(len(h)==64 and all(c in '0123456789abcdef' for c in h),'invalid hash')
        require(not pos.is_absolute() and '..' not in pos.parts and str(pos)==p,'unsafe manifest path')
        require(p not in expected and p!='MANIFEST.sha256','duplicate/self manifest entry')
        expected[p]=h
    actual={p.relative_to(ROOT).as_posix():p for p in ROOT.rglob('*') if p.is_file() and p!=manifest}
    require(set(actual)==set(expected),'missing or unlisted files')
    for p,h in expected.items():
        require(not actual[p].is_symlink(),'symbolic link forbidden')
        require(hashlib.sha256(actual[p].read_bytes()).hexdigest()==h,'hash mismatch: '+p)
    return len(expected)

def snapshot():
    return {p.relative_to(ROOT).as_posix():(p.stat().st_mtime_ns,hashlib.sha256(p.read_bytes()).hexdigest())
            for p in ROOT.rglob('*') if p.is_file()}

def run(script,expected):
    args=[sys.executable,'-B']
    if sys.flags.optimize:args+=['-O']
    args +=[str(ROOT/script)]
    result=subprocess.run(args,cwd=ROOT,capture_output=True,text=True,timeout=90,
                          env=dict(os.environ,PYTHONDONTWRITEBYTECODE='1'))
    require(result.returncode==0,f'{script} failed: '+result.stderr)
    actual=json.loads(result.stdout);stored=json.loads((ROOT/expected).read_text())
    require(actual==stored,f'{script}: replay differs from sealed evidence')
    return actual

def main():
    before=snapshot();entries=manifest_check()
    tests=run('test_general_compiler.py','evidence/TESTS_NORMAL.json')
    correspondence=run('test_r6_correspondence.py','evidence/R6_CORRESPONDENCE_NORMAL.json')
    require(snapshot()==before,'replay changed files or modification times')
    report={
       'status':'PASS_R7_WRITTEN_THEOREM_FINITE_REGRESSIONS',
       'lean_status':'NOT_RUN', 'universal_claim_status':'WRITTEN_PROOF_NOT_FORMALIZED_OR_EXTERNALLY_REVIEWED',
       'manifest_entries':entries,'non_mutating':True,
       'exhaustive_ordinary_cases':sum(c['ordinary_rules'] for c in tests['exhaustive']),
       'exhaustive_augmented_cases':sum(c['augmented_rules'] for c in tests['exhaustive']),
       'randomized_cases':tests['randomized']['count'],
       'defective_variants_rejected':len(tests['negatives']),
       'full_type_R6_augmented_templates':len(tests['full_alphabet_R6_rules']),
       'R6_specialization_nodes_including_bases':sum(c['nonbase_nodes']+1 for c in correspondence['constructions']),
       'R6_dimensions':[c['dimension'] for c in correspondence['constructions']],
       'new_capacity_bound':False}
    print(json.dumps(report,sort_keys=True,indent=2))
if __name__=='__main__':
    try:main()
    except (ValueError,OSError,subprocess.TimeoutExpired,KeyError) as exc:
        print('FAIL_R7: '+str(exc),file=sys.stderr);sys.exit(1)
