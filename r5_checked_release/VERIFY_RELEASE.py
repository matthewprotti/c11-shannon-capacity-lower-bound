#!/usr/bin/env python3
"""Non-mutating integrity and recorded-build validation. Does not run Lean."""
from pathlib import Path
import hashlib, importlib.util, json, re, sys, zipfile
sys.dont_write_bytecode=True
ROOT=Path(__file__).resolve().parent


def need(ok,msg):
    if not ok:raise RuntimeError(msg)


def digest(p):return hashlib.sha256(p.read_bytes()).hexdigest()


def main():
    entries={}
    for line in (ROOT/'MANIFEST.sha256').read_text().splitlines():
        h,name=line.split('  ',1);p=Path(name)
        need(re.fullmatch(r'[0-9a-f]{64}',h)is not None and not p.is_absolute() and '..'not in p.parts and name not in entries,'Invalid manifest path/hash')
        f=ROOT/p;need(f.is_file()and not f.is_symlink(),'Missing/unsafe file')
        need(digest(f)==h,'Changed file: '+name);entries[name]=h
    actual={p.relative_to(ROOT).as_posix()for p in ROOT.rglob('*')if p.is_file()and p!=ROOT/'MANIFEST.sha256'and '.git'not in p.relative_to(ROOT).parts}
    need(actual==set(entries),'Manifest coverage mismatch')
    archive=ROOT/'ancestry/C11_Recursive_Reassembly_R5_2026-09-08.zip'
    need(digest(archive)=='a57b1ba556ff2d74cfa5654a6b5677299dfac5308995bb2ea2cc7aa5c329d8a3','Original R5 archive changed')
    with zipfile.ZipFile(archive)as z:
        prefix='C11_Recursive_Reassembly_R5_2026-09-08/'
        for member in z.infolist():
            if member.is_dir():continue
            need((ROOT/'frozen'/member.filename[len(prefix):]).read_bytes()==z.read(member),'Frozen R5 file changed')
    sys.path.insert(0,str(ROOT/'tools'))
    from CHECK_SOURCE import check
    from AUDIT import parse_axioms, NATIVE
    source=check(ROOT)
    bindings=json.loads((ROOT/'SOURCE_BINDINGS.json').read_text())
    all_frozen_tables={}
    for d in [186,198,213]:
        c=json.loads((ROOT/f'frozen/certificates/C11_d{d}.json').read_text())
        for k,table in c['tables'].items():
            need(k not in all_frozen_tables or all_frozen_tables[k]==table,'Conflicting frozen table identifier')
            all_frozen_tables[k]=table
        need(bindings['cases'][str(d)]['tables_used']==list(c['tables']),'Table membership differs from frozen JSON')
    need(bindings['tables']==all_frozen_tables,'Source-binding tables differ from original R5 literals')
    report=json.loads((ROOT/'BUILD_RESULT.json').read_text())
    need(report['status']=='PASS_C11_R5_PINNED_LEAN_GATE'and report['local_lean_compilation_completed'],'Missing successful build')
    need(report['source_bindings']==source,'Recorded source bindings differ')
    need(report['preparation']['status']=='PASS_FRESH_PINNED_BPZ_C11_CONTROL','Missing unchanged positive control')
    command_by_label={r['label']:r for r in report['commands']}
    for name in ['30_r5_build','31_scopes_and_axioms','32_native_axiom_types']:
        need(command_by_label[name]['returncode']==0,'Failed proof/audit stage')
    for r in report['commands']:
        path=ROOT/'evidence/clean_run'/r['log']
        need(digest(path)==r['sha256'],'Recorded log hash differs')
    scope=(ROOT/'evidence/clean_run/logs/31_scopes_and_axioms.log').read_text()
    expected=json.loads((ROOT/'SOURCE_BINDINGS.json').read_text())['audited_names']
    deps=parse_axioms(scope,expected)
    need(deps==report['axioms'],'Parsed axiom reports differ')
    names=sorted({a for v in deps.values()for a in v if NATIVE.fullmatch(a)})
    need(names==report['native_axiom_names']and len(names)==699,'Native dependency set differs')
    native=(ROOT/'evidence/clean_run/logs/32_native_axiom_types.log').read_text()
    markers=re.findall(r'^NATIVE_BOOL_AXIOM_CHECKED: (.+)$',native,re.M)
    need(len(markers)==len(set(markers))==699 and set(markers)==set(names),'Native type-audit coverage differs')
    need(native.count('NATIVE_BOOL_AXIOM_TYPE:')==699,'Missing native types')
    template=(ROOT/'tools/NativeAxiomAudit.lean.in').read_text().replace('import ShannonBounds.C11AuxiliaryTrade','import ShannonBounds.C11R5')
    expected_source=template.replace('__NATIVE_AXIOM_COMMANDS__','\n'.join('#check_native_bool_axiom '+json.dumps(n)for n in names))
    need(expected_source==(ROOT/'generated_audits/C11R5_NativeAxiomAudit.lean').read_text(),'Generated native type audit differs')
    for d in [186,198,213]:
        card=command_by_label[f'33_bad_cardinality_{d}'];bad=command_by_label[f'34_bad_terminal_{d}']
        need(card['returncode']!=0 and bad['returncode']!=0,'Negative control compiled')
        text=(ROOT/'evidence/clean_run'/card['log']).read_text()
        need('error: Type mismatch'in text and f'C11R5D{d}.N + 1'in text,'Wrong cardinality failure')
        text=(ROOT/'evidence/clean_run'/bad['log']).read_text()
        need('evaluated that the proposition'in text and 'is false'in text,'Wrong terminal failure')
    need(report['final_dependency_pins']==report['preparation']['actual_dependency_pins'],'Dependency pin drift')
    for group in [report['preparation']['commands'],report['commands']]:
        for r in group:
            if r['label'].endswith(('_worktree','_index')):need(r['returncode']==0,'Dirty pinned dependency/source')
    for path,h in report['compiled_artifacts'].items():need(digest(ROOT/'compiled'/path)==h,'Compiled artifact differs')
    print(json.dumps({'status':'PASS_R5_RELEASE_INTEGRITY_AND_RECORDED_LEAN_CHECKS','files_checked':len(entries),'dimensions':[186,198,213],'scope_aliases':21,'audited_declarations':191,'native_axioms_type_checked':699,'negative_compile_controls':6,'frozen_R5_unchanged':True,'Lean_rerun_by_this_script':False},indent=2))


if __name__=='__main__':
    try:main()
    except Exception as e:print('FAIL: '+str(e),file=sys.stderr);raise SystemExit(1)
