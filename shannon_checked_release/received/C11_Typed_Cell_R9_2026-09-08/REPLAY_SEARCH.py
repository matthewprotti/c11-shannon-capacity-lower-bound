#!/usr/bin/env python3
"""Replay the winning terminal searches with fixed seeds and round counts.
Writes only to a new working directory outside the sealed package. No network.
Search is untrusted; VERIFY.py is the certificate acceptance path.
"""
import sys
sys.dont_write_bytecode=True
import os,json,argparse,subprocess,zipfile
from pathlib import Path
ROOT=Path(__file__).resolve().parent

def run(work):
    work=work.resolve()
    if work==ROOT or ROOT in work.parents:raise ValueError('work directory must be outside package')
    if work.exists():raise ValueError('work directory must be new')
    work.mkdir(parents=True)
    with zipfile.ZipFile(ROOT/'ancestors/R6_FINITE.zip')as z:
        for n in z.namelist():
            if Path(n).is_absolute()or '..'in Path(n).parts:raise ValueError('bad archive path')
        z.extractall(work/'ancestor')
    env=dict(os.environ,PYTHONDONTWRITEBYTECODE='1',R9_R6_DIR=str(work/'ancestor/C11_Avoidance_Profile_R6_2026-09-08'),R9_WORKDIR=str(work),PYTHONPATH=str(ROOT/'search'))
    records=[]
    def cmd(args,label):
        with open(work/(label+'.log'),'w')as f:
            p=subprocess.run([sys.executable,'-B']+args,env=env,stdout=f,stderr=subprocess.STDOUT)
        if p.returncode:raise RuntimeError(label+' failed; inspect working log')
    for d in (198,213):
        cmd([str(ROOT/'search/scout_retype.py'),str(d),'coarse','wide'],f'{d}_base')
        f=work/f'scout_{d}_coarse_wide.json'
        cmd([str(ROOT/'search/scout_terminal.py'),str(f)],f'{d}_terminal_add')
        f=f.with_name(f.stem+'_terminal.json')
        cmd([str(ROOT/'search/search_terminal_exchange.py'),str(f),'1'],f'{d}_single_exchange')
        f=f.with_name(f.stem+'_exchange1.json')
        for stage,nrounds in enumerate((32,)if d==198 else(12,20)):
            # A large fail-safe deadline is not the search stopping criterion;
            # these replay runs are bounded by the original exact round counts.
            code=f"from search_pair_exchange import improve;improve({str(f)!r},rounds={nrounds},seconds=3600)"
            cmd(['-c',code],f'{d}_pair_stage{stage}')
            f=f.with_name(f.stem+'_pairs.json')
        r=json.loads(f.read_text());c=json.loads((ROOT/f'certificates/C11_R9_d{d}.json').read_text())
        if r['N']!=c['N']or sorted(r['tables'][r['root']]['rows'])!=c['tables'][c['root']]['rows']:
            raise RuntimeError('Search replay differs from frozen certificate; never replace the certificate silently')
        records.append({'dimension':d,'N':r['N'],'terminal_table_equal':True})
    result={'status':'PASS_R9_WINNING_SEARCH_REPRODUCED','cases':records}
    (work/'SEARCH_REPLAY_RESULT.json').write_text(json.dumps(result,indent=2)+'\n')
    return result
if __name__=='__main__':
    a=argparse.ArgumentParser();a.add_argument('--work-dir',required=True,type=Path);args=a.parse_args()
    print(json.dumps(run(args.work_dir),indent=2))
