#!/usr/bin/env python3
"""Fresh local replay of the R7 uniform compiler formalization. No remote writes."""
from pathlib import Path
import argparse,hashlib,json,subprocess,sys,zipfile
sys.dont_write_bytecode=True
ROOT=Path(__file__).resolve().parent
ARCHIVE_SHA='f6c16059de6509b5040becfaa565b19535298705935d23eae31924bc39728ac7'
def need(ok,message):
    if not ok:raise ValueError(message)
def main():
    ap=argparse.ArgumentParser(description=__doc__)
    ap.add_argument('--work-dir',type=Path,required=True)
    ap.add_argument('--dependency-cache',type=Path)
    ap.add_argument('--toolchain-bin',type=Path)
    a=ap.parse_args();out=a.work_dir.resolve()
    need(not out.exists() and ROOT not in out.parents and out!=ROOT,'Choose a new work directory outside this source package')
    archive=ROOT/'ancestry/C11_General_Profile_Compiler_R7_2026-09-08.zip'
    need(hashlib.sha256(archive.read_bytes()).hexdigest()==ARCHIVE_SHA,'Wrong original R7 ZIP')
    with zipfile.ZipFile(archive)as z:
        prefix='C11_General_Profile_Compiler_R7_2026-09-08/'
        expected={i.filename[len(prefix):]:z.read(i) for i in z.infolist() if not i.is_dir()}
        actual={str(p.relative_to(ROOT/'frozen')):p.read_bytes() for p in (ROOT/'frozen').rglob('*') if p.is_file()}
        need(actual==expected,'Original R7 files changed')
    receipts=[];semantics=[]
    for flags in [[],['-O']]:
        p=subprocess.run([sys.executable,*flags,'-B','VERIFY.py'],cwd=ROOT/'frozen',capture_output=True,text=True,check=True)
        receipts.append(json.loads(p.stdout))
        p=subprocess.run([sys.executable,*flags,'-B',str(ROOT/'SEMANTIC_REVIEW.py')],cwd=ROOT,capture_output=True,text=True,check=True)
        semantics.append(json.loads(p.stdout))
    need(receipts[0]==receipts[1],'Finite replay changed under optimization')
    need(semantics[0]==semantics[1],'Physical graph replay changed under optimization')
    args=[sys.executable,'-B',str(ROOT/'tools/PREPARE.py'),str(out)]
    if a.dependency_cache:args+=['--dependency-cache',str(a.dependency_cache.resolve())]
    if a.toolchain_bin:args+=['--toolchain-bin',str(a.toolchain_bin.resolve())]
    subprocess.run(args,check=True)
    (out/'FINITE_REPLAY.json').write_text(json.dumps(receipts[0],indent=2)+'\n')
    (out/'PHYSICAL_SEMANTICS_REPLAY.json').write_text(json.dumps(semantics[0],indent=2)+'\n')
    args=[sys.executable,'-B',str(ROOT/'tools/AUDIT.py'),str(out)]
    if a.toolchain_bin:args+=['--toolchain-bin',str(a.toolchain_bin.resolve())]
    subprocess.run(args,check=True)
    print('PASS_R7_COMPLETE_FRESH_REPLAY')
if __name__=='__main__':main()
