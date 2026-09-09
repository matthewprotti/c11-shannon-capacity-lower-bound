#!/usr/bin/env python3
"""Inspect actual Lean dependencies and run mathematical negative controls."""
from pathlib import Path
import argparse, datetime, hashlib, itertools, json, os, re, shutil, subprocess, sys, time
sys.dont_write_bytecode=True
from CHECK_SOURCE import check, need

WORK=Path(__file__).resolve().parents[1]
STANDARD={'propext','Classical.choice','Quot.sound'}
FORMS={'Classical.choice.{u}':'Classical.choice','Quot.sound.{u}':'Quot.sound'}
NATIVE=re.compile(r'(?:[A-Za-z0-9_]+\.)*_native\.(?:native_decide|decide|bv_decide)\.ax(?:_\d+){0,2}')


def parse_axioms(text, expected):
    found={}
    for m in re.finditer(r"'([^']+)'\s+(?:depends on axioms:\s*\[([^\]]*)\]|does not depend on any axioms)",text,re.S):
        name=m.group(1)
        if name not in expected:continue
        need(name not in found,'Duplicate axiom report: '+name)
        deps=[FORMS.get(s.strip(),s.strip())for s in (m.group(2)or'').split(',')if s.strip()]
        need(all(a in STANDARD or NATIVE.fullmatch(a)for a in deps),'Unapproved axiom in '+name+': '+str(deps))
        found[name]=deps
    need(set(found)==set(expected),'Missing axiom reports: '+str(set(expected)-set(found)))
    need(not re.search(r'\bsorryAx\b|declaration uses.*sorry',text),'Placeholder dependency')
    return found


def main():
    ap=argparse.ArgumentParser()
    ap.add_argument('run_dir',type=Path)
    ap.add_argument('--toolchain-bin',type=Path)
    a=ap.parse_args();out=a.run_dir.resolve();repo=out/'bpz';logs=out/'logs'
    env=dict(os.environ)
    if a.toolchain_bin:env['PATH']=str(a.toolchain_bin.resolve())+os.pathsep+env['PATH']
    report={'status':'NOT_COMPLETED','commands':[],'started_at_utc':datetime.datetime.now(datetime.timezone.utc).isoformat(),'failure':None}
    def save():(out/'R5_BUILD_RESULT.json').write_text(json.dumps(report,indent=2)+'\n')
    def run(label,command,negative=False,cwd=repo):
        print(label,flush=True);path=logs/(label+'.log');start=time.monotonic()
        with path.open('w')as f:
            f.write('$ '+' '.join(map(str,command))+'\n');f.flush()
            r=subprocess.run(list(map(str,command)),cwd=cwd,env=env,stdout=f,stderr=subprocess.STDOUT,timeout=1800)
        text=path.read_text()
        report['commands'].append({'label':label,'command':list(map(str,command)),'returncode':r.returncode,'seconds':time.monotonic()-start,'log':str(path.relative_to(out)),'sha256':hashlib.sha256(path.read_bytes()).hexdigest()});save()
        need((r.returncode!=0)if negative else(r.returncode==0),label+' unexpected exit '+str(r.returncode)+'; '+text[-1000:])
        return text
    try:
        source_check=check(WORK);report['source_bindings']=source_check
        for f in (WORK/'source').rglob('*.lean'):
            target=repo/f.relative_to(WORK/'source')
            need(target.read_bytes()==f.read_bytes(),'Build source mismatch '+str(target))
        report['preparation']=json.loads((out/'PREPARATION.json').read_text())
        need(report['preparation']['status']=='PASS_FRESH_PINNED_BPZ_C11_CONTROL','Missing fresh baseline')
        run('30_r5_build',['lake','--rehash','--no-ansi','build','ShannonBounds.C11R5'])
        expected=json.loads((WORK/'SOURCE_BINDINGS.json').read_text())['audited_names']
        text=run('31_scopes_and_axioms',['lake','env','lean','-o','C11R5_AxiomAudit.olean','C11R5_AxiomAudit.lean'])
        deps=parse_axioms(text,expected);report['axioms']=deps
        native_names=sorted({a for values in deps.values()for a in values if NATIVE.fullmatch(a)})
        template=(WORK/'tools/NativeAxiomAudit.lean.in').read_text().replace('import ShannonBounds.C11AuxiliaryTrade','import ShannonBounds.C11R5')
        native_source=template.replace('__NATIVE_AXIOM_COMMANDS__','\n'.join('#check_native_bool_axiom '+json.dumps(n)for n in native_names))
        (repo/'C11R5_NativeAxiomAudit.lean').write_text(native_source)
        text=run('32_native_axiom_types',['lake','env','lean','-o','C11R5_NativeAxiomAudit.olean','C11R5_NativeAxiomAudit.lean'])
        markers=re.findall(r'^NATIVE_BOOL_AXIOM_CHECKED: (.+)$',text,re.M)
        need(len(markers)==len(set(markers))==len(native_names)and set(markers)==set(native_names),'Native type coverage mismatch')
        need(text.count('NATIVE_BOOL_AXIOM_TYPE:')==len(native_names),'Missing actual native types')
        report['native_axiom_names']=native_names
        report['native_axiom_type_check']='ALL_ARE_NON_UNSAFE_AXIOMS_OF_TYPE_EQ_BOOL_CLOSED_EXPRESSION_TRUE'
        report['negative_controls']=[]
        alphabet='BNADOHV';edges=['BO','BH','BV','NA','ND','NO','NH','NV','AD','AH','DV'];sep=set(edges)|{s[::-1]for s in edges}
        for dim in [186,198,213]:
            c=json.loads((WORK/f'frozen/certificates/C11_d{dim}.json').read_text())
            card=f'''import ShannonBounds.C11R5D{dim}
open ShannonBounds
example : C11R5D{dim}.code.card = C11R5D{dim}.N + 1 := by
  exact C11R5D{dim}.card_code
'''
            name=f'NEGATIVE_cardinality_{dim}.lean';(repo/name).write_text(card)
            text=run(f'33_bad_cardinality_{dim}',['lake','env','lean',name],True)
            need('error: Type mismatch'in text and f'C11R5D{dim}.N + 1'in text,'Wrong cardinality rejection reason')
            key=c['nodes'][-1]['kind'];words=c['tables'][key]
            bad=next(''.join(t)for t in itertools.product(alphabet,repeat=4)if ''.join(t)not in words and all(a+b not in sep for a,b in zip(t,words[0])))
            literal='!['+', '.join('Letter.'+x for x in bad)+']'
            source=f'''import ShannonBounds.C11R5D{dim}
open ShannonBounds
set_option maxHeartbeats 0
set_option maxRecDepth 4000000
set_option synthInstance.maxSize 4000
def badTerminal : Finset (Fin 4 → Letter) := insert {literal} C11R5Tables.T_{key}
example : ∀ x ∈ badTerminal, ∀ y ∈ badTerminal,
    x ≠ y → ∃ i, Letter.sep (x i) (y i) = true := by
  native_decide
'''
            name=f'NEGATIVE_terminal_{dim}.lean';(repo/name).write_text(source)
            text=run(f'34_bad_terminal_{dim}',['lake','env','lean',name],True)
            need('evaluated that the proposition'in text and 'is false'in text,'Wrong terminal rejection reason')
            need(not re.search(r'unknown (?:module|identifier)|failed to synthesize|No such file',text,re.I),'Incidental negative failure')
            report['negative_controls'].append({'dimension':dim,'wrong_cardinality':'REJECTED_EXACT_TYPE_MISMATCH','invalid_terminal_word':bad,'conflicting_original_word':words[0],'invalid_terminal':'REJECTED_PROPOSITION_EVALUATED_FALSE'})
        run('40_upstream_worktree',['git','diff','--exit-code'])
        run('41_upstream_index',['git','diff','--cached','--exit-code'])
        pins={}
        for p in json.loads((repo/'lake-manifest.json').read_text())['packages']:
            d=repo/'.lake/packages'/p['name']
            head=run('42_'+p['name']+'_head',['git','-C',d,'rev-parse','HEAD']).splitlines()[-1]
            need(head==p['rev'],'Final dependency pin mismatch')
            run('42_'+p['name']+'_worktree',['git','-C',d,'diff','--exit-code'])
            run('42_'+p['name']+'_index',['git','-C',d,'diff','--cached','--exit-code'])
            pins[p['name']]=head
        report['final_dependency_pins']=pins
        need(pins==report['preparation']['actual_dependency_pins'],'Dependency revisions changed')
        need(hashlib.sha256((repo/'lake-manifest.json').read_bytes()).hexdigest()==report['preparation']['manifest_sha256'],'Lockfile changed')
        for path,digest in source_check['source_hashes'].items():
            local=repo/Path(path).relative_to('source')
            need(hashlib.sha256(local.read_bytes()).hexdigest()==digest,'Source changed during build')
        artifacts=list((repo/'.lake/build/lib/lean/ShannonBounds').glob('C11R5*.olean'))+[repo/'C11R5_AxiomAudit.olean',repo/'C11R5_NativeAxiomAudit.olean']
        need(len(artifacts)==9,'Missing compiled R5 modules/audits')
        report['compiled_artifacts']={str(p.relative_to(repo)):hashlib.sha256(p.read_bytes()).hexdigest()for p in artifacts}
        report['status']='PASS_C11_R5_PINNED_LEAN_GATE'
        report['dimensions']=[186,198,213]
        report['local_lean_compilation_completed']=True
        report['scope_aliases']=21
        report['audited_declarations']=len(deps)
        report['distinct_native_axioms']=len(native_names)
        report['trust']='Pinned Lean 4.32.2 compiler/runtime, standard Lean axioms, disclosed compiler-generated native Boolean-equality axioms, and pinned binary dependency cache; not kernel-only arithmetic replay.'
        report['completed_at_utc']=datetime.datetime.now(datetime.timezone.utc).isoformat()
        save();print(report['status'],len(native_names),'native axioms',flush=True)
    except Exception as exc:
        report['failure']=str(exc);save();raise


if __name__=='__main__':main()
