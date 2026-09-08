#!/usr/bin/env python3
"""Non-mutating integrity and recorded-evidence check. This does not run Lean."""
from pathlib import Path
import hashlib
import importlib.util
import json
import re
import sys
import zipfile

sys.dont_write_bytecode=True
ROOT=Path(__file__).resolve().parent


def require(ok,message):
    if not ok:raise RuntimeError(message)


def sha(path):
    with path.open('rb') as f:return hashlib.file_digest(f,'sha256').hexdigest()


def main():
    listed={}
    for line in (ROOT/'MANIFEST.sha256').read_text().splitlines():
        value,name=line.split('  ',1);p=Path(name)
        require(re.fullmatch(r'[0-9a-f]{64}',value) is not None,'Malformed hash')
        require(not p.is_absolute() and '..' not in p.parts and name not in listed,'Unsafe/duplicate path')
        path=ROOT/p;require(path.is_file() and not path.is_symlink(),'Missing/symlink file: '+name)
        require(sha(path)==value,'Manifest mismatch: '+name);listed[name]=value
    actual={p.relative_to(ROOT).as_posix() for p in ROOT.rglob('*') if p.is_file() and p!=ROOT/'MANIFEST.sha256'}
    require(actual==set(listed),'Manifest coverage mismatch')
    status=json.loads((ROOT/'STATUS.json').read_text())
    report=json.loads((ROOT/'BUILD_RESULT.json').read_text())
    require(status['status']==report['status']=='PASS_C11_PINNED_LEAN_GATE','Gate status is not PASS')
    require(report['local_lean_compilation_completed'] is True,'No local compilation')
    r2=ROOT/'ancestry/C11_Lean_Integration_Source_R2_2026-09-08.zip'
    r1=ROOT/'ancestry/C11_Auxiliary_Trade_R1_2026-09-08.zip'
    require(sha(r2)==status['original_r2_archive_sha256'],'R2 archive changed')
    require(sha(r1)==status['unchanged_r1_archive_sha256'],'R1 archive changed')
    with zipfile.ZipFile(r2) as archive:
        prefix='C11_Lean_Integration_Source_R2_2026-09-08/'
        for name in ('CANDIDATE.json','FROZEN_INPUTS.json'):
            data=archive.read(prefix+name)
            require(data==(ROOT/'frozen_inputs'/name).read_bytes()==(ROOT/'derived_source'/name).read_bytes(),'Frozen input changed: '+name)
        name='lean/ShannonBounds/C11AuxiliaryTrade.lean'
        require(archive.read(prefix+name)==(ROOT/'derived_source'/name).read_bytes(),'Mathematical Lean source changed')
        require(archive.read(prefix+'ancestry/'+r1.name)==r1.read_bytes(),'R1 does not match R2 ancestor')
    spec=importlib.util.spec_from_file_location('release_source_checks',ROOT/'derived_source/SOURCE_CHECKS.py')
    checks=importlib.util.module_from_spec(spec);spec.loader.exec_module(checks)
    checks.verify_sources(ROOT/'derived_source')
    scope=(ROOT/'evidence/clean_run/logs/12_scope_and_axioms.log').read_text()
    require(checks.check_axiom_output(scope)==report['axioms'],'Axiom report does not match actual transcript')
    native=(ROOT/'evidence/clean_run/logs/12b_native_axiom_shapes.log').read_text()
    names=report['native_axiom_names']
    markers=re.findall(r'^NATIVE_BOOL_AXIOM_CHECKED: (.+)$',native,re.M)
    require(len(markers)==len(set(markers))==193 and set(markers)==set(names),'Native type checks missing or duplicated')
    require(native.count('NATIVE_BOOL_AXIOM_TYPE:')==193,'Native types missing')
    expected=(ROOT/'derived_source/lean/NativeAxiomAudit.lean.in').read_text().replace('__NATIVE_AXIOM_COMMANDS__','\n'.join('#check_native_bool_axiom '+json.dumps(n) for n in names))
    require(expected==(ROOT/'generated_audits/C11_NativeAxiomAudit.lean').read_text(),'Generated type-audit source changed')
    card=(ROOT/'evidence/clean_run/logs/13_wrong_cardinality.log').read_text()
    bad=(ROOT/'evidence/clean_run/logs/14_forbidden_block.log').read_text()
    require('error: Type mismatch' in card and 'code207.card = C11AuxiliaryTrade.N1 + 1' in card,'Wrong-cardinality rejection reason changed')
    require('evaluated that the proposition' in bad and 'is false' in bad,'Modified-table rejection reason changed')
    completed={c['label']:c for c in report['commands']}
    for label in ('10_baseline_build','11_candidate_build','12_scope_and_axioms','12b_native_axiom_shapes'):
        require(completed[label]['returncode']==0,'A required compilation failed')
    for label in ('13_wrong_cardinality','14_forbidden_block'):
        require(completed[label]['returncode']!=0,'A negative probe compiled')
    require(report['actual_dependency_pins']==report['final_dependency_pins'],'Dependency revisions changed')
    require(report['actual_dependency_pins']['mathlib']=='905b95818eb32af7874a58b427f50c1711a5e96c','Wrong Mathlib pin')
    compiled=json.loads((ROOT/'COMPILED_ARTIFACTS.json').read_text())
    for name,record in compiled.items():require(sha(ROOT/'compiled/bpz'/name)==record['sha256'],'Compiled artifact changed: '+name)
    for name,digest in report['compiled_artifacts'].items():require(sha(ROOT/'compiled/bpz'/name)==digest,'Gate artifact hash mismatch')
    print(json.dumps({'status':'PASS_RELEASE_INTEGRITY_AND_RECORDED_BUILD_CHECKS','files_checked':len(listed),
                      'recorded_lean_gate':'PASS_C11_PINNED_LEAN_GATE','native_axioms_type_checked':193,
                      'negative_controls_have_expected_semantic_failures':True,
                      'mathematical_inputs_and_source_unchanged':True,'lean_rerun_by_this_script':False},indent=2))


if __name__=='__main__':
    try:main()
    except Exception as exc:
        print('FAIL: '+str(exc),file=sys.stderr);raise SystemExit(1)
