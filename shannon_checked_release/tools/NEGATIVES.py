"""Mathematical negative compilation probes; incidental failures do not count."""
from pathlib import Path
import argparse, datetime, json, os, re, subprocess, time

ROOT=Path(__file__).resolve().parents[1]

def main():
    ap=argparse.ArgumentParser();ap.add_argument('run',type=Path);ap.add_argument('--toolchain-bin',type=Path,required=True)
    a=ap.parse_args();run=a.run.resolve();repo=run/'bpz';out=run/'negative_controls';out.mkdir(exist_ok=True)
    env=dict(os.environ);env['PATH']=str(a.toolchain_bin)+os.pathsep+env['PATH']
    report={'status':'INCOMPLETE','started_at_utc':datetime.datetime.now(datetime.timezone.utc).isoformat(),'cases':[]}
    def invoke(label,source,kind):
        f=out/(label+'.lean');f.write_text(source);start=time.monotonic();cmd=['lake','env','lean',str(f)]
        p=subprocess.run(cmd,cwd=repo,env=env,stdout=subprocess.PIPE,stderr=subprocess.STDOUT,text=True,timeout=600)
        (out/(label+'.log')).write_text(p.stdout)
        assert p.returncode!=0, 'False certificate accepted: '+label
        assert not re.search(r'unknown (?:module|identifier)|failed to synthesize|No such file|failed to create file',p.stdout,re.I),p.stdout
        if kind=='cardinality':assert 'Type mismatch' in p.stdout and '.N + 1' in p.stdout,p.stdout
        elif kind=='terminal':assert 'evaluated that the proposition' in p.stdout and 'is false' in p.stdout,p.stdout
        else:assert 'decide' in p.stdout and 'false' in p.stdout,p.stdout
        return {'name':label,'kind':kind,'command':cmd,'returncode':p.returncode,'seconds':time.monotonic()-start,
          'source':str(f.relative_to(run)),'log':str((out/(label+'.log')).relative_to(run))}
    r9=ROOT/'received/C11_Typed_Cell_R9_2026-09-08/certificates'
    for namespace,dim in [('C11R9D198',198),('C11R9D213',213),('C11R10D213',213),('C13R8D522',522)]:
        src=f'''import ShannonBounds.{namespace}
open ShannonBounds
example : {namespace}.code.card = {namespace}.N + 1 := by
  exact {namespace}.card_code
'''
        report['cases'].append(invoke('bad_cardinality_'+namespace,src,'cardinality'))
        if namespace.startswith('C13'):
            c=json.loads((ROOT/'received/C13_Profile_Transfer_R8_2026-09-08/compiled/C13_d522.json').read_text())
            rows=c['tables'][c['root']]['rows'];old='C13R8Tables.rows_terminal'
        else:
            c=json.loads((r9/f'C11_R9_d{dim}.json').read_text())
            rows=c['tables'][c['root']]['rows'];old=namespace+'.terminalRows'
            if namespace=='C11R10D213': rows=json.loads((ROOT/'received/C11_Diagnostic_Sprint_R10_2026-09-09/certificates/NEW_TERMINAL.json').read_text())['terminal_words']
        letters=c['letters'];alpha='BNADOHV';q=len(rows[0]);wordset=set(map(tuple,rows))
        def apart(u,v):
            for x,y in zip(u,v):
                a,m=letters[x]['family'],letters[x]['mask'];b,n=letters[y]['family'],letters[y]['mask']
                if (a==b and m!=n) or not(m&(1<<alpha.index(b))) or not(n&(1<<alpha.index(a))):return True
            return False
        support=[sorted({w[i] for w in rows}) for i in range(q)]
        bad=None
        for w in rows:
            for i in range(q):
                for v in support[i]:
                    candidate=w.copy();candidate[i]=v
                    if tuple(candidate)not in wordset and not apart(w,candidate):bad=(candidate,w);break
                if bad:break
            if bad:break
        assert bad,'No supported conflicting fixture'
        literal='!['+', '.join(map(str,bad[0]))+']'
        src=f'''import ShannonBounds.{namespace}
open ShannonBounds
set_option maxHeartbeats 0
set_option maxRecDepth 4000000
set_option synthInstance.maxSize 4000
def badRows : List (Fin {q} → C11R6Base.Ty) := [{literal}] ++ {old}
example : Code C11R6Base.Ty C11R6Base.typedSep {q} :=
  C11R6ListChecks.codeFromList C11R6Base.typedSep badRows (by native_decide)
'''
        row=invoke('bad_terminal_'+namespace,src,'terminal')
        row.update({'added_word':bad[0],'conflicting_listed_word':bad[1],
          'all_coordinate_symbols_occur_in_positive_weight_parent_terminal':True,
          'separation_scope':'fixed typed predicate; no assertion that every symbolically conflicting pair conflicts in actual vertices'})
        report['cases'].append(row)
        (run/'NEGATIVE_RESULT.json').write_text(json.dumps(report,indent=2)+'\n')
        print(namespace,'two mathematical negatives rejected',flush=True)
    src='''import ShannonBounds.CellRetyping.Examples
open ShannonBounds.CellRetyping ShannonBounds.CellRetyping.Examples
example : touchMask twoRows (word false) ⊆ {false} := by decide
'''
    report['cases'].append(invoke('bad_missing_witness_bit',src,'symbolic'))
    report['status']='PASS_NINE_MATHEMATICAL_NEGATIVE_COMPILATIONS'
    report['completed_at_utc']=datetime.datetime.now(datetime.timezone.utc).isoformat()
    (run/'NEGATIVE_RESULT.json').write_text(json.dumps(report,indent=2)+'\n');print(report['status'])

if __name__=='__main__':main()
