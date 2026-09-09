#!/usr/bin/env python3
"""Verify sealed R7 files and recorded compiler evidence. Does not invoke Lean."""
from pathlib import Path,PurePosixPath
import hashlib,json,re,sys,zipfile
sys.dont_write_bytecode=True
ROOT=Path(__file__).resolve().parent
STANDARD={'propext','Classical.choice','Quot.sound'}
ARCHIVE_SHA='f6c16059de6509b5040becfaa565b19535298705935d23eae31924bc39728ac7'
def need(ok,message):
    if not ok:raise ValueError(message)
def digest(p):return hashlib.sha256(p.read_bytes()).hexdigest()
def read(p):return json.loads(p.read_text())
def manifest():
    path=ROOT/'MANIFEST.sha256';need(path.is_file(),'Missing manifest')
    expected={}
    for line in path.read_text().splitlines():
        h,name=line.split('  ',1);p=PurePosixPath(name)
        need(len(h)==64 and all(c in '0123456789abcdef' for c in h),'Invalid digest')
        need(not p.is_absolute() and '..' not in p.parts and str(p)==name,'Unsafe manifest path')
        need(name not in expected and name!='MANIFEST.sha256','Duplicate or self manifest entry')
        expected[name]=h
    actual={p.relative_to(ROOT).as_posix():p for p in ROOT.rglob('*') if p.is_file() and p!=path}
    need(set(actual)==set(expected),'Missing or unlisted files')
    for name,h in expected.items():
        need(not actual[name].is_symlink(),'Symlink forbidden')
        need(digest(actual[name])==h,'Hash mismatch: '+name)
    return len(expected)
def run_evidence(label):
    directory=ROOT/'evidence'/label
    result=read(directory/'R7_BUILD_RESULT.json');prep=read(directory/'PREPARATION.json')
    need(result['status']=='PASS_R7_UNIFORM_COMPILER_PINNED_LEAN_GATE','Incomplete Lean gate')
    need(prep['status']=='PASS_FRESH_PINNED_BPZ_C11_CONTROL','Incomplete baseline')
    need(digest(directory/'PREPARATION.json')==result['preparation_sha256'],'Preparation binding')
    need(result['final_dependency_pins']==prep['actual_dependency_pins'],'Dependency identity')
    need(result['final_dependency_pins']['mathlib']=='905b95818eb32af7874a58b427f50c1711a5e96c','Wrong Mathlib')
    need('version 4.32.2' in prep['lean_version'],'Wrong Lean')
    for command in prep['commands']+result['commands']:
        log=directory/command['log'];need(log.is_file(),'Missing command log')
        text=log.read_text();need(text.startswith('$ '+' '.join(command['command'])+'\n'),'Command header binding')
        if 'sha256' in command:need(digest(log)==command['sha256'],'Command log digest')
        negative=command['label'].startswith('32_NEGATIVE_')
        need(command['returncode']!=0 if negative else command['returncode']==0,'Unexpected command status')
        if negative:
            need('Tactic `decide` proved that the proposition' in text and 'is false' in text,'Negative probe did not refute its proposition')
            need(not re.search(r'unknown (?:module|identifier|constant)|failed to synthesize|No such file|timeout|maximum.*(?:depth|heartbeats)',text,re.I),'Incidental negative failure')
    log=(directory/'logs/31_r7_axioms_and_types.log').read_text()
    need(not re.search(r'\bsorryAx\b|declaration uses.*sorry',log),'Placeholder dependency')
    rows=[json.loads(x.split('R7_AUDIT_JSON: ',1)[1]) for x in log.splitlines() if x.startswith('R7_AUDIT_JSON: ')]
    need(len(rows)==len({r['name'] for r in rows})==result['audited_declarations'],'Namespace coverage')
    need({r['name']:r['axioms'] for r in rows}==result['axioms'],'Axiom report binding')
    for row in rows:need(not row['unsafe'] and set(row['axioms'])<=STANDARD,'Unexpected trust dependency')
    need(not result['native_axioms'] and not result['new_logical_axioms'] and not result['unsafe_declarations'],'Unexpected trust marker')
    raw=[json.loads(x.split('R7_RAW_TYPE_JSON: ',1)[1]) for x in log.splitlines() if x.startswith('R7_RAW_TYPE_JSON: ')]
    need(raw==read(directory/'RAW_STATEMENT_TYPES.json'),'Raw statement type binding')
    need(digest(directory/'RAW_STATEMENT_TYPES.json')==result['raw_statement_types_sha256'],'Raw type digest')
    need({r['name'] for r in raw}==set(result['statement_types_reported']) and all(r['closed'] for r in raw),'Statement scope coverage')
    for rel,h in result['source_hashes'].items():need(digest(ROOT/'source'/rel)==h,'Compiled source mismatch')
    for control in result['negative_controls']:
        need(digest(ROOT/'tools/negative'/control['file'])==control['sha256'],'Negative fixture source changed')
    need(len(result['negative_controls'])==2,'Negative fixture count')
    for report_name,status in [('FINITE_REPLAY.json','PASS_R7_WRITTEN_THEOREM_FINITE_REGRESSIONS'),('PHYSICAL_SEMANTICS_REPLAY.json','PASS_BOUNDED_PHYSICAL_GRAPH_SEMANTICS_REVIEW')]:
        need(read(directory/report_name)['status']==status,'Missing finite replay')
    return result

def main():
    n=manifest()
    archive=ROOT/'ancestry/C11_General_Profile_Compiler_R7_2026-09-08.zip'
    need(digest(archive)==ARCHIVE_SHA,'Original R7 archive changed')
    with zipfile.ZipFile(archive)as z:
        prefix='C11_General_Profile_Compiler_R7_2026-09-08/'
        expected={i.filename[len(prefix):]:z.read(i) for i in z.infolist() if not i.is_dir()}
        actual={str(p.relative_to(ROOT/'frozen')):p.read_bytes() for p in (ROOT/'frozen').rglob('*') if p.is_file()}
        need(actual==expected,'Frozen R7 files changed')
    a=run_evidence('clean_run');b=run_evidence('second_fresh_run')
    need(a['source_hashes']==b['source_hashes'],'Fresh source identities differ')
    need({k:sorted(v) for k,v in a['axioms'].items()}=={k:sorted(v) for k,v in b['axioms'].items()},'Fresh axiom dependencies differ')
    need(read(ROOT/'evidence/clean_run/RAW_STATEMENT_TYPES.json')==read(ROOT/'evidence/second_fresh_run/RAW_STATEMENT_TYPES.json'),'Fresh statement types differ')
    need(read(ROOT/'BUILD_RESULT.json')==b,'Top-level authoritative build binding')
    for rel,h in b['compiled_artifacts'].items():need(digest(ROOT/'compiled'/rel)==h,'Compiled artifact mismatch')
    need(set(b['source_hashes'])=={str(p.relative_to(ROOT/'source')) for p in (ROOT/'source').rglob('*.lean')},'Unexpected source file')
    print(json.dumps(dict(status='PASS_R7_RELEASE_INTEGRITY_AND_RECORDED_LEAN_CHECKS',files_checked=n,
      audited_declarations=b['audited_declarations'],general_declarations=b['general_declarations'],
      example_declarations=b['example_declarations'],statement_types=len(b['statement_types_reported']),
      source_files=len(b['source_hashes']),compiled_artifacts=len(b['compiled_artifacts']),
      native_axioms=0,new_logical_axioms=0,negative_compile_controls_per_fresh_run=2,
      fresh_runs_checked=2,universal_compiler_formalized=True,frozen_R7_unchanged=True,
      new_capacity_bound=False,Lean_rerun_by_this_script=False),indent=2))
if __name__=='__main__':
    try:main()
    except (ValueError,KeyError,OSError,zipfile.BadZipFile)as exc:
        print('FAIL_R7_RELEASE: '+str(exc),file=sys.stderr);sys.exit(1)
