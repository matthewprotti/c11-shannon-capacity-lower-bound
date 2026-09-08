#!/usr/bin/env python3
"""Run the pinned C11 Lean gate in a NEW local working directory.

No remote writes, no construction changes, no success status on a failed stage.
Requirements: Python >= 3.10, git, Lake/Elan, network for pinned dependencies.
"""
from __future__ import annotations
import sys
sys.dont_write_bytecode = True
import argparse
import hashlib
import json
import os
from pathlib import Path
import re
import shutil
import subprocess
import time
import zipfile

from SOURCE_CHECKS import (CheckError, PIN, R1_SHA256, require, sha256,
                           verify_sources, check_axiom_output, table_from_lean, is_native_axiom)

ROOT = Path(__file__).resolve().parent
REPOSITORY = 'https://github.com/spectra-research/shannon-capacity-lean.git'


def extract_checked(archive: Path, destination: Path) -> None:
    destination.mkdir(parents=True, exist_ok=True)
    with zipfile.ZipFile(archive) as z:
        require(sum(i.file_size for i in z.infolist()) < 30_000_000, 'unexpected ancestor size')
        for i in z.infolist():
            p = Path(i.filename)
            require(not p.is_absolute() and '..' not in p.parts, 'unsafe ancestor path')
            require((i.external_attr >> 16) & 0o170000 != 0o120000, 'symlink in ancestor')
        z.extractall(destination)


def check_checkout_data(repo: Path, frozen: dict) -> None:
    """Bind source data in the fetched checkout to the already reviewed literals."""
    base = (repo/'ShannonBounds'/'BaseC11Data.lean').read_text()
    for lean_name, key in [('Ilist', 'I'), ('Xlist', 'X')]:
        m = re.search(r'def\s+' + lean_name + r'\s*:\s*List Code\s*:=\s*\[([^\]]*)\]', base, re.S)
        require(m is not None, f'cannot read upstream {lean_name}')
        require([int(x) for x in re.findall(r'\d+', m.group(1))] == frozen[key], f'upstream {lean_name} mismatch')
    subs = (repo/'ShannonBounds'/'Substitutions.lean').read_text()
    for name in ['T2b', 'T3c']:
        got = table_from_lean(subs, name)
        require({a: set(w) for a, w in got.items()} == {a: set(w) for a, w in frozen['tables'][name].items()}, f'upstream table {name} mismatch')
    terminal = (repo/'ShannonBounds'/'TerminalCodes.lean').read_text()
    m = re.search(r'def C3a\s*:.*?:=\s*\{(.*?)\}', terminal, re.S)
    require(m is not None, 'cannot read terminal code')
    got = {''.join(a.strip().lstrip('.') for a in word.split(',')) for word in re.findall(r'!\[([^\]]*)\]', m.group(1))}
    require(got == set(frozen['tables']['K3a']), 'upstream terminal code mismatch')


def main() -> int:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--work-dir', required=True, type=Path, help='New directory, outside this source package.')
    parser.add_argument('--timeout', type=int, default=1800, help='Per-command timeout in seconds (default: 1800).')
    parser.add_argument('--skip-cache-download', action='store_true', help='Do not invoke Mathlib cache get; dependencies still need to exist or download.')
    parser.add_argument('--reuse-pinned-deps', type=Path, help='On macOS/APFS, clone an existing pinned dependency directory without copying any BPZ build products.')
    args = parser.parse_args()
    output = args.work_dir.expanduser().resolve()
    require(not output.exists(), 'work directory already exists; choose a new path')
    require(ROOT != output and ROOT not in output.parents, 'work directory must be outside the sealed package')
    require(1 <= args.timeout <= 7200, 'timeout must be between 1 and 7200 seconds')
    output.mkdir(parents=True)
    logs = output/'logs'; logs.mkdir()
    report = {'schema': 'C11_LEAN_GATE_RUN_V1', 'status': 'NOT_COMPLETED',
              'source_commit': PIN, 'commands': [], 'axioms': None,
              'local_lean_compilation_completed': False, 'negative_compile_controls': [],
              'source_package': str(ROOT), 'work_directory': str(output), 'failure': None}
    report_path = output/'BUILD_REPORT.json'
    def save() -> None:
        report_path.write_text(json.dumps(report, indent=2) + '\n')
    def run(command: list[str], cwd: Path, label: str, expect_success: bool = True) -> str:
        path = logs/(label + '.log')
        started = time.monotonic()
        print(f'[{label}] ' + ' '.join(command), flush=True)
        with path.open('w') as log:
            log.write('$ ' + ' '.join(command) + '\n'); log.flush()
            try:
                result = subprocess.run(command, cwd=cwd, stdout=log, stderr=subprocess.STDOUT,
                                        text=True, timeout=args.timeout, check=False)
                code = result.returncode
            except (OSError, subprocess.TimeoutExpired) as exc:
                log.write('\nEXECUTION_FAILURE: ' + repr(exc) + '\n')
                report['commands'].append({'label': label, 'command': command,
                    'returncode': None, 'failure': repr(exc), 'elapsed_seconds': time.monotonic()-started})
                save()
                raise CheckError(f'{label}: {exc}') from exc
        text = path.read_text(errors='replace')
        report['commands'].append({'label': label, 'command': command, 'returncode': code,
            'elapsed_seconds': time.monotonic()-started, 'log': str(path.relative_to(output)), 'sha256': sha256(path)})
        save()
        if expect_success:
            require(code == 0, f'{label} failed with exit code {code}; see {path}')
        else:
            require(code != 0, f'negative control unexpectedly compiled: {label}')
            require('error:' in text and not re.search(r'unknown (?:module|identifier)|does not exist|No such file|failed to synthesize', text, re.I),
                    f'negative control failed for an unrelated reason: {label}')
        return text
    try:
        report['source_checks'] = verify_sources(ROOT)
        lock = json.loads((ROOT/'UPSTREAM_LOCK.json').read_text())
        frozen = json.loads((ROOT/'FROZEN_INPUTS.json').read_text())
        ancestor_dir = output/'ancestor'
        archive = ROOT/'ancestry'/'C11_Auxiliary_Trade_R1_2026-09-08.zip'
        require(sha256(archive) == R1_SHA256, 'wrong R1 archive')
        extract_checked(archive, ancestor_dir)
        r1 = ancestor_dir/'C11_Auxiliary_Trade_R1_2026-09-08'
        result = run([sys.executable, '-B', 'VERIFY_PACKAGE.py'], r1, '01_r1_replay')
        require('PASS_C11_R1_RELEASE' in result, 'R1 did not report acceptance')
        missing = [name for name in ['git', 'lake'] if shutil.which(name) is None]
        require(not missing, 'missing required executable(s): ' + ', '.join(missing))
        repo = output/'bpz'; repo.mkdir()
        run(['git', 'init'], repo, '02_git_init')
        run(['git', 'remote', 'add', 'origin', REPOSITORY], repo, '03_set_origin')
        run(['git', 'fetch', '--depth=1', 'origin', PIN], repo, '04_fetch_pin')
        run(['git', 'checkout', '--detach', PIN], repo, '05_checkout_pin')
        rev = run(['git', 'rev-parse', 'HEAD'], repo, '06_head')
        require(PIN in rev.splitlines(), 'checkout is not the frozen commit')
        run(['git', 'diff', '--exit-code'], repo, '07_pristine_source')
        for path, digest in lock['retrieved_git_blob_sha1'].items():
            data = (repo/path).read_bytes()
            got = hashlib.sha1(b'blob ' + str(len(data)).encode() + b'\0' + data).hexdigest()
            require(got == digest, f'upstream content identity mismatch: {path}')
        require((repo/'lean-toolchain').read_text().strip() == lock['toolchain'], 'wrong Lean toolchain')
        manifest_hash = sha256(repo/'lake-manifest.json')
        check_checkout_data(repo, frozen)
        packages = json.loads((repo/'lake-manifest.json').read_text())['packages']
        def inspect_dependencies(directory: Path, label_prefix: str) -> dict:
            result = {}
            for package in packages:
                require(package['type'] == 'git', 'unexpected non-git dependency')
                name = package['name']
                require(re.fullmatch(r'[A-Za-z0-9_-]+', name) is not None, 'unsafe dependency name')
                dependency = directory/name
                require(dependency.is_dir() and not dependency.is_symlink(), 'missing/symlink dependency: ' + name)
                head_output = run(['git', '-C', str(dependency), 'rev-parse', 'HEAD'], repo, label_prefix + '_' + name + '_head')
                heads = [line.strip() for line in head_output.splitlines() if re.fullmatch(r'[0-9a-f]{40}', line.strip())]
                require(len(heads) == 1, 'malformed dependency revision output: ' + name)
                head = heads[0]
                require(head == package['rev'], 'dependency pin mismatch: ' + name)
                run(['git', '-C', str(dependency), 'diff', '--exit-code'], repo, label_prefix + '_' + name + '_clean')
                result[name] = head
            require(result['mathlib'] == lock['mathlib_commit'], 'actual Mathlib pin mismatch')
            return result
        if args.reuse_pinned_deps:
            require(sys.platform == 'darwin', 'copy-on-write dependency reuse requires macOS/APFS')
            cache = args.reuse_pinned_deps.expanduser().resolve()
            cache_pins = inspect_dependencies(cache, '07a_cached_dep')
            (repo/'.lake').mkdir(exist_ok=True)
            destination = repo/'.lake'/'packages'
            require(not destination.exists(), 'dependency destination already exists')
            run(['/bin/cp', '-cR', str(cache), str(destination)], repo, '07b_clone_pinned_dependencies')
            report['dependency_cache_reuse'] = {'source': str(cache), 'method': 'APFS_COPY_ON_WRITE',
                'verified_git_pins': cache_pins, 'bpz_build_products_reused': False}
        version = run(['lake', 'env', 'lean', '--version'], repo, '08_lean_version')
        require(re.search(r'\bversion 4\.32\.2\b', version) is not None, 'wrong running Lean version')
        report['lean_version_output'] = version
        report['actual_dependency_pins'] = inspect_dependencies(repo/'.lake'/'packages', '08a_actual_dep')
        if not args.skip_cache_download:
            run(['lake', 'exe', 'cache', 'get'], repo, '09_pinned_mathlib_cache')
        require(sha256(repo/'lake-manifest.json') == manifest_hash, 'dependency lock changed during setup')
        # Positive control: the actual original C11 certificate, not the unrelated global targets.
        run(['lake', '--rehash', '--no-ansi', 'build', 'ShannonBounds.CapCertC11'], repo, '10_baseline_build')
        shutil.copyfile(ROOT/'lean'/'ShannonBounds'/'C11AuxiliaryTrade.lean', repo/'ShannonBounds'/'C11AuxiliaryTrade.lean')
        shutil.copyfile(ROOT/'lean'/'C11_AxiomAudit.lean', repo/'C11_AxiomAudit.lean')
        run(['lake', '--rehash', '--no-ansi', 'build', 'ShannonBounds.C11AuxiliaryTrade'], repo, '11_candidate_build')
        text = run(['lake', 'env', 'lean', '-o', 'C11_AxiomAudit.olean', 'C11_AxiomAudit.lean'], repo, '12_scope_and_axioms')
        report['axioms'] = check_axiom_output(text)
        native_names = sorted({a for deps in report['axioms'].values() for a in deps if is_native_axiom(a)})
        native_template = (ROOT/'lean'/'NativeAxiomAudit.lean.in').read_text()
        native_commands = '\n'.join('#check_native_bool_axiom ' + json.dumps(name) for name in native_names)
        native_source = native_template.replace('__NATIVE_AXIOM_COMMANDS__', native_commands)
        (repo/'C11_NativeAxiomAudit.lean').write_text(native_source)
        native_text = run(['lake', 'env', 'lean', 'C11_NativeAxiomAudit.lean'], repo, '12b_native_axiom_shapes')
        for name in native_names:
            require('NATIVE_BOOL_AXIOM_CHECKED: ' + name in native_text, 'native axiom was not shape-checked: ' + name)
        report['native_axiom_names'] = native_names
        report['native_axiom_type_check'] = 'EACH_IS_A_CLOSED_BOOL_EQUALITY_TO_TRUE'
        report['native_axiom_types_log'] = 'logs/12b_native_axiom_shapes.log'
        # These files are new local probes. They are not accepted proof modules.
        probes = {
            'wrong_cardinality': '''import ShannonBounds.C11AuxiliaryTrade
open ShannonBounds
example : C11AuxiliaryTrade.code207.card = C11AuxiliaryTrade.N1 + 1 := by
  exact C11AuxiliaryTrade.card_code207
''',
            'forbidden_block': '''import ShannonBounds.C11AuxiliaryTrade
open ShannonBounds
set_option maxHeartbeats 0
set_option maxRecDepth 1000000
set_option synthInstance.maxSize 4000
private def badTable : Letter → Finset (Fin 3 → Letter)
  | .N => insert ![Letter.A, Letter.D, Letter.A] (C11AuxiliaryTrade.T3mix .N)
  | a => C11AuxiliaryTrade.T3mix a
example : ∀ a, ∀ x ∈ badTable a, ∀ y ∈ badTable a,
    x ≠ y → ∃ i, Letter.sep (x i) (y i) = true := by
  native_decide
'''}
        for i, (name, source) in enumerate(probes.items(), start=13):
            path = repo/('NEGATIVE_' + name + '.lean')
            path.write_text(source)
            run(['lake', 'env', 'lean', path.name], repo, f'{i}_{name}', expect_success=False)
            report['negative_compile_controls'].append({'name': name, 'status': 'REJECTED_BY_LEAN'})
        run(['git', 'diff', '--exit-code'], repo, '15_upstream_unchanged')
        run(['git', 'diff', '--cached', '--exit-code'], repo, '16_upstream_index_unchanged')
        require(sha256(repo/'lake-manifest.json') == manifest_hash, 'dependency lock changed')
        report['final_dependency_pins'] = inspect_dependencies(repo/'.lake'/'packages', '16a_final_dep')
        for rel in ['ShannonBounds/C11AuxiliaryTrade.lean', 'C11_AxiomAudit.lean']:
            require(sha256(repo/rel) == sha256(ROOT/'lean'/rel), 'candidate/audit source changed during build')
        olean = repo/'.lake'/'build'/'lib'/'lean'/'ShannonBounds'/'C11AuxiliaryTrade.olean'
        require(olean.is_file() and (repo/'C11_AxiomAudit.olean').is_file(), 'compiled artifacts missing')
        report['compiled_artifacts'] = {str(p.relative_to(repo)): sha256(p) for p in [olean, repo/'C11_AxiomAudit.olean']}
        report['local_lean_compilation_completed'] = True
        report['status'] = 'PASS_C11_PINNED_LEAN_GATE'
        report['trust_boundary'] = 'Pinned Lean/Mathlib/BPZ plus the axioms actually printed above; native evaluation is not kernel-only arithmetic replay.'
        report['priority_clearance'] = 'OUTSIDE_SCOPE'
        save()
        print('PASS_C11_PINNED_LEAN_GATE')
        return 0
    except (CheckError, OSError, ValueError, KeyError) as exc:
        report['failure'] = str(exc)
        report['status'] = 'NOT_COMPLETED'
        save()
        print('NOT_COMPLETED: ' + str(exc), file=sys.stderr)
        return 1

if __name__ == '__main__':
    try:
        raise SystemExit(main())
    except CheckError as exc:
        print('NOT_COMPLETED: ' + str(exc), file=sys.stderr)
        raise SystemExit(1)
