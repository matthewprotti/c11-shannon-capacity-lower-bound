#!/usr/bin/env python3
"""Replay the pathname-only diagnosis against immutable v0.5.0 compiled inputs."""
from pathlib import Path
import argparse
import datetime
import json
import subprocess

from VERIFY import HERE, REPO, SEALED, MODES, digest, load, need, verify


def main():
    parser = argparse.ArgumentParser()
    parser.add_argument("--toolchain-bin", type=Path, required=True)
    parser.add_argument("--output", type=Path, required=True)
    args = parser.parse_args()
    output = args.output.resolve()
    need(output != REPO and REPO not in output.parents, "Output must be outside this repository")
    need(not output.exists(), "Output directory must be new")
    lean = args.toolchain_bin.resolve() / "lean"
    version = subprocess.check_output([str(lean), "--version"], text=True).strip()
    need("version 4.32.2" in version and "f3b06c705e6c85f5314019d5d3baab0fec5b580c" in version, "Wrong compiler version or commit")
    verify()
    output.mkdir(parents=True)
    commands, results = [], []

    def invoke(command, path):
        with path.open("w") as stream:
            result = subprocess.run(command, stdout=stream, stderr=subprocess.STDOUT, timeout=180)
        commands.append({"command": command, "exit_code": result.returncode, "output": path.name})
        need(result.returncode == 0, path.read_text()[:3000])
        return load(path)

    for recorded in load(HERE / "LINT_PATH_NORMALIZATION_RESULT.json")["records"]:
        name = recorded["module"]
        key = f".lake/build/lib/lean/ShannonBounds/CellRetyping/{name}.olean"
        dumps, runs = [], []
        for index, (mode, kind) in enumerate(MODES):
            original = SEALED / "compiled" / kind / key
            original_hash = digest(original)
            need(original_hash == recorded["runs"][index]["original_sha256"], "Original input changed")
            stem = output / f"{name}_{mode}"
            observed = invoke([str(lean), "--run", str(HERE / "NormalizeLintPaths.lean"), str(original),
                "ShannonBounds.CellRetyping." + name, str(stem), f"ShannonBounds/CellRetyping/{name}.lean"],
                Path(str(stem) + ".lint.json"))
            need(observed == load(HERE / "evidence" / f"{name}_{mode}.lint.json"), "Readback differs from recorded warning data")
            need(Path(str(stem) + ".roundtrip.olean").read_bytes() == original.read_bytes(), "Roundtrip differs from original")
            normalized = Path(str(stem) + ".normalized.olean")
            need(digest(normalized) == recorded["runs"][index]["normalized_sha256"], "Normalized artifact differs from recorded hash")
            dumps.append(invoke([str(lean), "--run", str(HERE / "InspectModule.lean"), str(original)],
                Path(str(stem) + ".decls.json")))
            need(digest(original) == original_hash, "Original input modified")
            runs.append({"run": mode, "original_sha256": original_hash, "roundtrip_exact": True,
                "normalized_sha256": digest(normalized), "lint_count": len(observed["lints"])})
        need(dumps[0] == dumps[1], "Constant types, values or inventories differ")
        need(runs[0]["normalized_sha256"] == runs[1]["normalized_sha256"], "Normalized pair differs")
        results.append({"module": name, "runs": runs, "constant_count": len(dumps[0]["constants"]),
            "normalized_bytes_equal": True, "constant_types_and_values_equal": True})
        print("PASS", name, flush=True)
    report = {"status": "PASS_REPLAYED_BINARY_PATH_DIAGNOSIS", "lean_version": version,
        "records": results, "commands": commands, "original_inputs_modified": False,
        "completed_at_utc": datetime.datetime.now(datetime.timezone.utc).isoformat()}
    (output / "REPLAY_RESULT.json").write_text(json.dumps(report, indent=2) + "\n")
    print(report["status"])


if __name__ == "__main__":
    main()
