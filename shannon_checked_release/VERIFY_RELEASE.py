#!/usr/bin/env python3
"""Verify package integrity and recorded evidence; this command does not run Lean."""
from pathlib import Path
import gzip, hashlib, json

ROOT=Path(__file__).resolve().parent
def sha(b):return hashlib.sha256(b).hexdigest()
def need(p,m):
    if not p:raise ValueError(m)

def main():
    manifest=ROOT/'MANIFEST.sha256';expected={}
    for line in manifest.read_text().splitlines():
        digest,name=line.split('  ',1)
        need(name not in expected and not Path(name).is_absolute() and '..'not in Path(name).parts,'Unsafe/duplicate path')
        expected[name]=digest
    actual={str(p.relative_to(ROOT)):p for p in ROOT.rglob('*')if p.is_file()and p!=manifest}
    need(set(actual)==set(expected),'File inventory mismatch')
    for name,p in actual.items():need(not p.is_symlink()and sha(p.read_bytes())==expected[name],'Hash mismatch '+name)
    from RUN_GATE import check_source
    need(check_source()==json.loads((ROOT/'SOURCE_BINDINGS.json').read_text()),'Source/frozen bindings mismatch')
    for rec in json.loads((ROOT/'COMPRESSED_EVIDENCE.json').read_text()):
        raw=gzip.decompress((ROOT/rec['stored']).read_bytes())
        need(len(raw)==rec['uncompressed_bytes']and sha(raw)==rec['uncompressed_sha256'],'Compressed evidence mismatch')
    comparison=json.loads((ROOT/'BUILD_COMPARISON.json').read_text())
    need(comparison['source_hashes_equal']and comparison['statement_types_equal']and comparison['axiom_dependencies_equal'],'Two-build comparison mismatch')
    for name in ['development','fresh']:
        audit=json.loads((ROOT/f'evidence/{name}/AUDIT_RESULT.json').read_text())
        neg=json.loads((ROOT/f'evidence/{name}/NEGATIVE_RESULT.json').read_text())
        need(audit['status']=='PASS_DECLARATION_TYPES_AND_TRANSITIVE_AXIOMS','Audit not passed')
        need(audit['numerical_theorems']==184 and audit['symbolic_declarations']==261,'Audit count mismatch')
        need(audit['symbolic_new_native_axioms']==0 and audit['distinct_native_axioms']==246,'Axiom scope mismatch')
        need(neg['status']=='PASS_NINE_MATHEMATICAL_NEGATIVE_COMPILATIONS'and len(neg['cases'])==9,'Negative controls not passed')
    build=json.loads((ROOT/'evidence/fresh/BUILD_RESULT.json').read_text())
    need(build['status']=='PASS_FRESH_SHANNON_R8_R9_R10_LEAN_GATE','Fresh gate not passed')
    for f,digest in build['compiled_artifacts'].items():
        need(sha((ROOT/'compiled/fresh'/f).read_bytes())==digest,'Compiled artifact mismatch')
    status=json.loads((ROOT/'STATUS.json').read_text())
    need(status['local_lean_compilation_completed']and not status['R10_upper_diagnostics_Lean_formalized'],'Scope mismatch')
    print('PASS_PACKAGE_INTEGRITY_AND_RECORDED_EVIDENCE',len(expected),'files; Lean not rerun by this command')

if __name__=='__main__':main()
