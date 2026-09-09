#!/usr/bin/env python3
"""Complete R6 replay in a new work directory. No remote writes."""
from pathlib import Path
import argparse, hashlib, json, shutil, subprocess, sys, zipfile
sys.dont_write_bytecode=True
ROOT=Path(__file__).resolve().parent
ARCHIVE_SHA='24b64ccbd1f38cd1ad7921993575d6ebff0638c5d3c694f8e78c8fca3b2be045'


def main():
    ap=argparse.ArgumentParser(description=__doc__)
    ap.add_argument('--work-dir',type=Path,required=True)
    ap.add_argument('--dependency-cache',type=Path)
    ap.add_argument('--toolchain-bin',type=Path)
    a=ap.parse_args();out=a.work_dir.resolve()
    if out.exists()or out==ROOT or ROOT in out.parents:raise ValueError('Choose a new work directory outside the source package')
    archive=ROOT/'ancestry/C11_Avoidance_Profile_R6_2026-09-08.zip'
    if hashlib.sha256(archive.read_bytes()).hexdigest()!=ARCHIVE_SHA:raise ValueError('Wrong original R6 archive')
    with zipfile.ZipFile(archive)as z:
        prefix='C11_Avoidance_Profile_R6_2026-09-08/'
        names={i.filename[len(prefix):]for i in z.infolist()if not i.is_dir()}
        actual={str(p.relative_to(ROOT/'frozen'))for p in (ROOT/'frozen').rglob('*')if p.is_file()}
        if names!=actual:raise ValueError('Frozen input coverage changed')
        for name in names:
            if (ROOT/'frozen'/name).read_bytes()!=z.read(prefix+name):raise ValueError('Frozen R6 file changed: '+name)
    receipts=[]
    for flags in [[],['-O']]:
        r=subprocess.run([sys.executable,*flags,'-B','VERIFY.py','--self-test','--manifest'],cwd=ROOT/'frozen',capture_output=True,text=True,check=True)
        report=json.loads(r.stdout)
        if report['status']!='PASS_C11_R6_AVOIDANCE_PROFILE_FINITE_CERTIFICATES':raise ValueError('Finite gate failed')
        receipts.append(report)
    if receipts[0]!=receipts[1]:raise ValueError('Normal/optimized replay mismatch')
    args=[sys.executable,'-B',str(ROOT/'tools/PREPARE.py'),str(out)]
    if a.dependency_cache:args+=['--dependency-cache',str(a.dependency_cache.resolve())]
    if a.toolchain_bin:args+=['--toolchain-bin',str(a.toolchain_bin.resolve())]
    subprocess.run(args,check=True)
    (out/'FINITE_REPLAY.json').write_text(json.dumps(receipts[0],indent=2)+'\n')
    for f in (ROOT/'source').rglob('*.lean'):
        dest=out/'bpz'/f.relative_to(ROOT/'source');dest.parent.mkdir(parents=True,exist_ok=True);shutil.copyfile(f,dest)
    args=[sys.executable,'-B',str(ROOT/'tools/AUDIT.py'),str(out)]
    if a.toolchain_bin:args+=['--toolchain-bin',str(a.toolchain_bin.resolve())]
    subprocess.run(args,check=True)
    print('PASS_C11_R6_PINNED_LEAN_GATE')


if __name__=='__main__':main()
