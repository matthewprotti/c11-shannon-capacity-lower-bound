#!/usr/bin/env python3
"""Prepare a fresh pinned BPZ checkout, then build its unchanged C11 control."""
from pathlib import Path
import argparse, datetime, hashlib, json, os, re, subprocess, sys, time

PIN = 'aa21eeb12b75b0413d3fa9fb4208b5d0bf2c4d65'
WORK = Path(__file__).resolve().parents[1]


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('run_dir', type=Path)
    ap.add_argument('--dependency-cache', type=Path)
    ap.add_argument('--toolchain-bin', type=Path)
    a = ap.parse_args()
    out = a.run_dir.resolve()
    out.mkdir(parents=True, exist_ok=False)
    repo = out/'bpz'
    repo.mkdir()
    logs = out/'logs'
    logs.mkdir()
    env = dict(os.environ)
    if a.toolchain_bin:env['PATH']=str(a.toolchain_bin.resolve())+os.pathsep+env['PATH']
    report = {'status':'NOT_COMPLETED','started_at_utc':datetime.datetime.now(datetime.timezone.utc).isoformat(),'commands':[], 'compiler_bin_directory':str(a.toolchain_bin) if a.toolchain_bin else 'PATH / pinned Elan toolchain'}

    def save():
        (out/'PREPARATION.json').write_text(json.dumps(report,indent=2)+'\n')

    def run(label, command, cwd=repo):
        print(label,flush=True)
        path=logs/(label+'.log')
        start=time.monotonic()
        with path.open('w') as f:
            f.write('$ '+' '.join(map(str,command))+'\n');f.flush()
            result=subprocess.run(list(map(str,command)),cwd=cwd,env=env,stdout=f,stderr=subprocess.STDOUT,timeout=1800)
        report['commands'].append({'label':label,'command':list(map(str,command)),'returncode':result.returncode,'seconds':time.monotonic()-start,'log':str(path.relative_to(out))})
        save()
        if result.returncode:
            raise RuntimeError(label+': '+path.read_text()[-1800:])
        return path.read_text().split('\n',1)[1].strip()

    try:
        run('01_git_init',['git','init'])
        run('02_origin',['git','remote','add','origin','https://github.com/spectra-research/shannon-capacity-lean.git'])
        run('03_fetch',['git','fetch','--depth=1','origin',PIN])
        run('04_checkout',['git','checkout','-b','codex/c11-r7-formalization',PIN])
        if run('05_head',['git','rev-parse','HEAD'])!=PIN:raise ValueError('Wrong BPZ pin')
        lock=json.loads((WORK/'UPSTREAM_LOCK.json').read_text())
        for name,expected in lock['retrieved_git_blob_sha1'].items():
            data=(repo/name).read_bytes()
            got=hashlib.sha1(b'blob '+str(len(data)).encode()+b'\0'+data).hexdigest()
            if got!=expected:raise ValueError('Source blob mismatch: '+name)
        manifest=json.loads((repo/'lake-manifest.json').read_text())
        def inspect(directory,prefix):
            pins={}
            for p in manifest['packages']:
                path=directory/p['name']
                head=run(prefix+'_'+p['name']+'_head',['git','-C',path,'rev-parse','HEAD'])
                if head!=p['rev']:raise ValueError('Dependency pin mismatch')
                run(prefix+'_'+p['name']+'_worktree',['git','-C',path,'diff','--exit-code'])
                run(prefix+'_'+p['name']+'_index',['git','-C',path,'diff','--cached','--exit-code'])
                pins[p['name']]=head
            return pins
        if a.dependency_cache:
            if sys.platform!='darwin':raise ValueError('APFS cache reuse requires macOS')
            report['cached_dependency_pins']=inspect(a.dependency_cache,'06_cache')
            (repo/'.lake').mkdir(exist_ok=True)
            run('07_dependency_copy',['/bin/cp','-cR',a.dependency_cache,repo/'.lake/packages'])
        else:
            run('07_dependency_download',['lake','exe','cache','get'])
        report['actual_dependency_pins']=inspect(repo/'.lake/packages','08_dependencies')
        report['lean_version']=run('09_lean_version',['lake','env','lean','--version'])
        if 'version 4.32.2'not in report['lean_version']:raise ValueError('Wrong Lean version')
        run('10_upstream_worktree',['git','diff','--exit-code'])
        run('11_upstream_index',['git','diff','--cached','--exit-code'])
        report['manifest_sha256']=hashlib.sha256((repo/'lake-manifest.json').read_bytes()).hexdigest()
        run('12_baseline_build',['lake','--rehash','--no-ansi','build','ShannonBounds.CapCertC11'])
        report['status']='PASS_FRESH_PINNED_BPZ_C11_CONTROL'
        report['bpz_build_products_reused']=False
        report['mathlib_cache_reused']=True
        save();print(report['status'],flush=True)
    except Exception as e:
        report['failure']=str(e);save();raise


if __name__=='__main__':main()
