#!/usr/bin/env python3
"""Rebuild frozen numerical and symbolic sources in a fresh pinned BPZ checkout.
Dependency binaries may be reused; BPZ and derived proof artifacts are rebuilt.
"""
from pathlib import Path
import argparse, datetime, hashlib, json, os, shutil, subprocess, sys, time

ROOT=Path(__file__).resolve().parent
TARGETS=['ShannonBounds.C11R9D198','ShannonBounds.C11R9D213','ShannonBounds.C11R10D213',
         'ShannonBounds.C13R8D522','ShannonBounds.CellRetyping.Examples']

def digest(p): return hashlib.sha256(p.read_bytes()).hexdigest()

def check_source():
    parent=json.loads((ROOT/'PARENT_SOURCE_HASHES.json').read_text())
    actual={str(p.relative_to(ROOT/'parent_source')):digest(p)for p in (ROOT/'parent_source').rglob('*.lean')}
    assert actual==parent,'Frozen parent source changed'
    source={str(p.relative_to(ROOT/'source')):digest(p)for p in (ROOT/'source').rglob('*.lean')}
    assert len(source)==12,'Unexpected derived module count'
    for name in source:
        s=(ROOT/'source'/name).read_text()
        import re
        assert not re.search(r'^\s*(?:axiom|unsafe|opaque|sorry|admit)\b',s,re.M),name
        if '/CellRetyping/' in name:
            assert not re.search(r'\b(?:native_decide|bv_decide|implemented_by)\b',s),name
    manifests={}
    for p in sorted((ROOT/'received').iterdir()):
        manifest=p/'MANIFEST.sha256';expected={}
        for line in manifest.read_text().splitlines():
            h,name=line.split('  ',1);expected[name]=h
        found={str(f.relative_to(p)):digest(f) for f in p.rglob('*') if f.is_file() and f!=manifest}
        assert found==expected, 'Frozen input inventory/hash mismatch: '+str(p)
        manifests[p.name]=digest(manifest)
    return {'derived_source_hashes':source,'unchanged_parent_source_hashes':parent,'frozen_manifests':manifests}

def main():
    ap=argparse.ArgumentParser();ap.add_argument('run',type=Path)
    ap.add_argument('--toolchain-bin',type=Path,required=True);ap.add_argument('--dependency-cache',type=Path)
    a=ap.parse_args();run=a.run.resolve();repo=run/'bpz'
    if not run.exists():
        cmd=[sys.executable,'-B',str(ROOT/'tools/PREPARE.py'),str(run),'--toolchain-bin',str(a.toolchain_bin)]
        if a.dependency_cache:cmd+=['--dependency-cache',str(a.dependency_cache)]
        subprocess.run(cmd,check=True)
    prep=json.loads((run/'PREPARATION.json').read_text())
    assert prep['status']=='PASS_FRESH_PINNED_BPZ_C11_C13_CONTROLS','Missing both freshly built controls'
    logs=run/'gate_logs';logs.mkdir(exist_ok=True)
    env=dict(os.environ);env['PATH']=str(a.toolchain_bin)+os.pathsep+env['PATH']
    report={'status':'INCOMPLETE','started_at_utc':datetime.datetime.now(datetime.timezone.utc).isoformat(),
            'commands':[],'source_bindings':check_source(),'trust':'Pinned Lean compiler/runtime, standard axioms, audited native Bool-equality axioms for finite numerical certificates, and pinned dependency binaries. Symbolic retyping has no native axioms.'}
    def save(): (run/'BUILD_RESULT.json').write_text(json.dumps(report,indent=2)+'\n')
    def invoke(label,cmd,cwd=repo):
        print(label,flush=True);start=time.monotonic();path=logs/(label+'.log')
        with path.open('w')as f:
            f.write('$ '+' '.join(map(str,cmd))+'\n');f.flush()
            p=subprocess.run(list(map(str,cmd)),cwd=cwd,env=env,stdout=f,stderr=subprocess.STDOUT,timeout=1800)
        report['commands'].append({'label':label,'command':list(map(str,cmd)),'returncode':p.returncode,
          'seconds':time.monotonic()-start,'log':str(path.relative_to(run)),'sha256':digest(path)});save()
        if p.returncode:raise RuntimeError(path.read_text()[-4000:])
        return path.read_text().split('\n',1)[1].strip()
    try:
        for folder in ['parent_source','source']:
            for p in sorted((ROOT/folder).rglob('*.lean')):
                dst=repo/p.relative_to(ROOT/folder);dst.parent.mkdir(parents=True,exist_ok=True);shutil.copyfile(p,dst)
        # Serialize large targets to limit peak memory and swap on the 16 GB host.
        for i,target in enumerate(TARGETS):invoke(f'build_{i+1}_{target.split(".")[-1]}',['lake','--rehash','--no-ansi','build',target])
        for name in ['AUDIT','NEGATIVES']:
            invoke(name.lower(),[sys.executable,'-B',ROOT/f'tools/{name}.py',run,'--toolchain-bin',a.toolchain_bin],ROOT)
        lock=json.loads((ROOT/'UPSTREAM_LOCK.json').read_text())
        assert invoke('upstream_head',['git','rev-parse','HEAD'])==lock['commit']
        invoke('upstream_worktree',['git','diff','--exit-code']);invoke('upstream_index',['git','diff','--cached','--exit-code'])
        pins={}
        for pkg in json.loads((repo/'lake-manifest.json').read_text())['packages']:
            d=repo/'.lake/packages'/pkg['name'];prefix='dep_'+pkg['name']
            pins[pkg['name']]=invoke(prefix+'_head',['git','-C',d,'rev-parse','HEAD'])
            assert pins[pkg['name']]==pkg['rev']
            invoke(prefix+'_worktree',['git','-C',d,'diff','--exit-code'])
            invoke(prefix+'_index',['git','-C',d,'diff','--cached','--exit-code'])
        assert pins==prep['actual_dependency_pins']
        assert digest(repo/'lake-manifest.json')==prep['manifest_sha256']
        assert check_source()==report['source_bindings']
        for group in ['derived_source_hashes','unchanged_parent_source_hashes']:
            for name,h in report['source_bindings'][group].items():assert digest(repo/name)==h
        artifacts={}
        for name in report['source_bindings']['derived_source_hashes']:
            p=repo/'.lake/build/lib/lean'/Path(name).with_suffix('.olean')
            assert p.is_file();artifacts[str(p.relative_to(repo))]=digest(p)
        report['compiled_artifacts']=artifacts;report['final_dependency_pins']=pins
        report['audit']=json.loads((run/'AUDIT_RESULT.json').read_text())
        report['negative_controls']=json.loads((run/'NEGATIVE_RESULT.json').read_text())
        assert report['audit']['status']=='PASS_DECLARATION_TYPES_AND_TRANSITIVE_AXIOMS'
        assert report['negative_controls']['status']=='PASS_NINE_MATHEMATICAL_NEGATIVE_COMPILATIONS'
        report['status']='PASS_FRESH_SHANNON_R8_R9_R10_LEAN_GATE'
        report['local_lean_compilation_completed']=True
        report['R10_upper_diagnostics_Lean_formalized']=False
        report['python_compiler_Lean_formalized']=False
        report['completed_at_utc']=datetime.datetime.now(datetime.timezone.utc).isoformat();save()
        print(report['status'],flush=True)
    except Exception as e:
        report['failure']=str(e);save();raise

if __name__=='__main__':main()
