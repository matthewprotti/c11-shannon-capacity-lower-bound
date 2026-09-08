#!/usr/bin/env python3
"""Unit tests of source-data and log parsing controls. These do NOT run Lean."""
from __future__ import annotations
import sys
sys.dont_write_bytecode = True
import json
from pathlib import Path
import shutil
import tempfile
from SOURCE_CHECKS import (CheckError, AUDITED_NAMES, check_axiom_output,
                           verify_sources, require, manifest_check)
ROOT = Path(__file__).resolve().parent


def main() -> None:
    passed: list[str] = []
    # A deliberately synthetic parser fixture; never used as build evidence.
    native = 'ShannonBounds.C11AuxiliaryTrade.S3mix._native.native_decide.ax_1'
    fixture = '\n'.join(f"'{n}' depends on axioms: [propext, Quot.sound, Classical.choice, {native}]" for n in AUDITED_NAMES)
    require(len(check_axiom_output(fixture)) == len(AUDITED_NAMES), 'positive parser fixture failed')
    passed.append('synthetic positive parser fixture only')
    observed_fixture = fixture.replace('Classical.choice', 'Classical.choice.{u}').replace('Quot.sound', 'Quot.sound.{u}').replace(native, native + '_1')
    observed = check_axiom_output(observed_fixture)
    require(all('Classical.choice' in deps and 'Quot.sound' in deps and native + '_1' in deps for deps in observed.values()), 'pinned universe/native print forms failed')
    passed.append('accept observed pinned universe annotations and ax_1_1 suffix')
    def reject_text(name: str, text: str) -> None:
        try: check_axiom_output(text)
        except CheckError: passed.append(name); return
        raise CheckError('negative parser fixture accepted: ' + name)
    reject_text('reject missing axiom report', '\n'.join(fixture.splitlines()[1:]))
    reject_text('reject duplicate axiom report', fixture + '\n' + fixture.splitlines()[0])
    reject_text('reject sorryAx', fixture.replace('propext', 'sorryAx', 1))
    reject_text('reject handwritten arbitrary axiom', fixture.replace('propext', 'MyAssumedCapacity', 1))
    reject_text('reject misleading native prefix', fixture.replace(native, 'evil_native_decide_axiom'))
    reject_text('reject nonnumeric native suffix', fixture.replace(native, native + '_assumed'))
    reject_text('reject arbitrary universe-annotated axiom', fixture.replace('propext', 'MyAssumedCapacity.{u}'))
    reject_text('reject empty transcript', '')
    verify_sources(ROOT, check_manifest=False)
    source_rel = Path('lean/ShannonBounds/C11AuxiliaryTrade.lean')
    audit_rel = Path('lean/C11_AxiomAudit.lean')
    original = (ROOT/source_rel).read_text()
    candidate = json.loads((ROOT/'CANDIDATE.json').read_text())
    cases = [
        ('reject changed N1 source literal', source_rel, original.replace(candidate['N1'], str(int(candidate['N1']) + 1))),
        ('reject changed literal table', source_rel, original.replace('![.A, .H, .H]', '![.A, .D, .H]', 1)),
        ('reject changed x27 weight', source_rel, original.replace('16419042195110117076482146261872104062736709010101742840630', '16419042195110117076482146261872104062736709010101742840631')),
        ('reject changed x27 input interface', source_rel, original.replace('CertC11.chx27 R', 'CertC11.chx29 R')),
        ('reject changed terminal order', source_rel, original.replace('Fin.cases (Rx27 R) (Fin.cases (CertC11.Rx29 R)', 'Fin.cases (CertC11.Rx29 R) (Fin.cases (Rx27 R)')),
        ('reject explicit placeholder', source_rel, original + '\nexample : True := by sorry\n'),
        ('reject handwritten assumption', source_rel, original + '\naxiom fakeClaim : False\n'),
        ('reject missing scope audit command', audit_rel, (ROOT/audit_rel).read_text().replace('#print axioms ' + AUDITED_NAMES[0], '-- deleted command', 1)),
        ('reject missing exact scope literal', audit_rel, (ROOT/audit_rel).read_text().replace(candidate['N1'], '7')),
    ]
    for name, rel, text in cases:
        with tempfile.TemporaryDirectory(prefix='c11-source-unit-') as tmp:
            tree = Path(tmp)/'source'; shutil.copytree(ROOT, tree)
            (tree/rel).write_text(text)
            try: verify_sources(tree, check_manifest=False)
            except CheckError: passed.append(name); continue
            raise CheckError('negative source control accepted: ' + name)
    print(json.dumps({'status': 'PASS_PYTHON_HARNESS_UNIT_TESTS_ONLY', 'lean_executed': False,
                      'test_count': len(passed), 'tests_passed': passed,
                      'warning': 'Synthetic axiom-output fixtures do not validate the unbuilt Lean audit command.'}, indent=2))

if __name__ == '__main__':
    try: main()
    except (CheckError, OSError, ValueError) as exc:
        print(json.dumps({'status': 'FAIL_UNIT_TESTS', 'error': str(exc)}))
        raise SystemExit(1)
