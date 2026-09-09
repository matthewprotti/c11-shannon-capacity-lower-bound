"""Build and audit the uniform R7 formalization in a prepared pinned checkout."""
from pathlib import Path
import argparse,datetime,hashlib,json,os,re,shutil,subprocess,sys,time
sys.dont_write_bytecode=True
ROOT=Path(__file__).resolve().parents[1]
STANDARD={'propext','Classical.choice','Quot.sound'}
def need(ok,message):
    if not ok:raise ValueError(message)
def digest(p):return hashlib.sha256(p.read_bytes()).hexdigest()
def main():
    ap=argparse.ArgumentParser();ap.add_argument('run_dir',type=Path);ap.add_argument('--toolchain-bin',type=Path)
    a=ap.parse_args();run=a.run_dir.resolve();repo=run/'bpz';logs=run/'logs'
    env=dict(os.environ)
    if a.toolchain_bin:env['PATH']=str(a.toolchain_bin.resolve())+os.pathsep+env['PATH']
    report={'status':'NOT_COMPLETED','started_at_utc':datetime.datetime.now(datetime.timezone.utc).isoformat(),'commands':[]}
    def save():(run/'R7_BUILD_RESULT.json').write_text(json.dumps(report,indent=2)+'\n')
    def command(label,args,negative=False):
        print(label,flush=True);log=logs/(label+'.log');start=time.monotonic()
        with log.open('w')as f:
            f.write('$ '+' '.join(map(str,args))+'\n');f.flush()
            p=subprocess.run(list(map(str,args)),cwd=repo,env=env,stdout=f,stderr=subprocess.STDOUT,timeout=1800)
        report['commands'].append(dict(label=label,command=list(map(str,args)),returncode=p.returncode,
          seconds=time.monotonic()-start,log=str(log.relative_to(run)),sha256=digest(log)))
        save();out=log.read_text()
        need(p.returncode!=0 if negative else p.returncode==0,label+': unexpected exit '+str(p.returncode)+'\n'+out[-3000:])
        return out
    try:
        prep=json.loads((run/'PREPARATION.json').read_text())
        need(prep['status']=='PASS_FRESH_PINNED_BPZ_C11_CONTROL','Missing baseline build')
        report['preparation_sha256']=digest(run/'PREPARATION.json')
        sources=sorted((ROOT/'source').rglob('*.lean'))
        report['source_hashes']={str(p.relative_to(ROOT/'source')):digest(p) for p in sources}
        for p in sources:
            dest=repo/p.relative_to(ROOT/'source');dest.parent.mkdir(parents=True,exist_ok=True);shutil.copyfile(p,dest)
        command('30_r7_build',['lake','--rehash','--no-ansi','build','ShannonBounds.ProfileCompiler','ShannonBounds.ProfileCompiler.Examples'])
        text=command('31_r7_axioms_and_types',['lake','env','lean','-o','R7_AxiomAudit.olean','R7_AxiomAudit.lean'])
        rows=[json.loads(line.split('R7_AUDIT_JSON: ',1)[1]) for line in text.splitlines() if line.startswith('R7_AUDIT_JSON: ')]
        count=re.findall(r'^R7_AUDIT_COUNT: (\d+)$',text,re.M)
        need(len(count)==1 and len(rows)==int(count[0]) and len(rows)>100,'Incomplete namespace audit')
        need(len({r['name'] for r in rows})==len(rows),'Duplicate namespace declarations')
        for row in rows:
            need(not row['unsafe'],'Unsafe declaration')
            need(set(row['axioms'])<=STANDARD,'Unapproved axiom: '+row['name'])
        need(not re.search(r'\bsorryAx\b|declaration uses.*sorry',text),'Placeholder dependency')
        for name in STANDARD:need('R7_STANDARD_AXIOM_TYPE '+name+':' in text,'Missing standard axiom type')
        statements=re.findall(r'^#check @(.+)$',(ROOT/'source/R7_AxiomAudit.lean').read_text(),re.M)
        for name in statements:need(name in text,'Missing statement output '+name)
        raw_types=[json.loads(line.split('R7_RAW_TYPE_JSON: ',1)[1]) for line in text.splitlines() if line.startswith('R7_RAW_TYPE_JSON: ')]
        need(len(raw_types)==len(statements) and {r['name'] for r in raw_types}==set(statements),'Incomplete raw statement types')
        need(all(r['closed'] and r['raw_type'] for r in raw_types),'Non-closed or empty statement type')
        (run/'RAW_STATEMENT_TYPES.json').write_text(json.dumps(raw_types,indent=2)+'\n')
        report['raw_statement_types_sha256']=digest(run/'RAW_STATEMENT_TYPES.json')
        report['axioms']={r['name']:r['axioms'] for r in rows}
        report['audited_declarations']=len(rows)
        report['general_declarations']=sum(not r['name'].startswith('ShannonBounds.ProfileCompiler.Examples.') for r in rows)
        report['example_declarations']=len(rows)-report['general_declarations']
        report['statement_types_reported']=statements
        report['standard_axiom_union']=sorted({v for r in rows for v in r['axioms']})
        report['native_axioms']=[];report['new_logical_axioms']=[];report['unsafe_declarations']=[]
        report['negative_controls']=[]
        for name in ['NEGATIVE_stale_masks.lean','NEGATIVE_omitted_self.lean']:
            shutil.copyfile(ROOT/'tools/negative'/name,repo/name)
            text=command('32_'+name.removesuffix('.lean'),['lake','env','lean',name],True)
            need('decide' in text and ('false' in text or 'false' in text.lower()),'Missing false-proposition diagnostic')
            need(not re.search(r'unknown (?:module|identifier|constant)|failed to synthesize|No such file|maximum.*(?:depth|heartbeats)|timeout',text,re.I),'Incidental negative failure')
            report['negative_controls'].append(dict(file=name,sha256=digest(repo/name),result='REJECTED_FALSE_PROPOSITION_BY_KERNEL_DECIDE'))
        command('40_upstream_head',['git','rev-parse','HEAD'])
        need(subprocess.check_output(['git','rev-parse','HEAD'],cwd=repo,text=True).strip()=='aa21eeb12b75b0413d3fa9fb4208b5d0bf2c4d65','Upstream head changed')
        command('41_upstream_worktree',['git','diff','--exit-code'])
        command('42_upstream_index',['git','diff','--cached','--exit-code'])
        pins={}
        for p in json.loads((repo/'lake-manifest.json').read_text())['packages']:
            d=repo/'.lake/packages'/p['name']
            head=command('43_'+p['name']+'_head',['git','-C',d,'rev-parse','HEAD']).splitlines()[-1]
            need(head==p['rev'],'Dependency pin changed')
            command('43_'+p['name']+'_worktree',['git','-C',d,'diff','--exit-code'])
            command('43_'+p['name']+'_index',['git','-C',d,'diff','--cached','--exit-code'])
            pins[p['name']]=head
        need(pins==prep['actual_dependency_pins'],'Dependency revision list changed')
        need(digest(repo/'lake-manifest.json')==prep['manifest_sha256'],'Lockfile changed')
        for p,h in report['source_hashes'].items():need(digest(repo/p)==h,'Source changed during build')
        artifacts=[]
        for rel in report['source_hashes']:
            r=Path(rel)
            artifact=repo/'R7_AxiomAudit.olean' if rel=='R7_AxiomAudit.lean' else repo/'.lake/build/lib/lean'/r.with_suffix('.olean')
            need(artifact.is_file(),'Missing compiled artifact '+str(artifact));artifacts.append(artifact)
        report['compiled_artifacts']={str(p.relative_to(repo)):digest(p) for p in artifacts}
        report['final_dependency_pins']=pins
        report['status']='PASS_R7_UNIFORM_COMPILER_PINNED_LEAN_GATE'
        report['universal_compiler_formalized']=True
        report['graph_and_cardinality_semantics_formalized']=True
        report['finite_DAG_recursion_formalized']=True
        report['alphabet_cardinality_and_58_specialization_formalized']=True
        report['pruning_and_terminal_expansion_formalized']=True
        report['new_capacity_bound']=False
        report['trust']='Pinned Lean 4.32.2 compiler/kernel and binary dependency cache; only propext, Classical.choice and Quot.sound as used. No native-evaluation or new logical axioms in R7, including its finite examples.'
        report['completed_at_utc']=datetime.datetime.now(datetime.timezone.utc).isoformat()
        save();print(report['status'],report['audited_declarations'],'declarations',flush=True)
    except Exception as exc:
        report['failure']=str(exc);save();raise
if __name__=='__main__':main()
