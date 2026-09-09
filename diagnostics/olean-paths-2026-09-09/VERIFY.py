#!/usr/bin/env python3
"""Check recorded diagnostic evidence and original artifact bindings; does not run Lean."""
from pathlib import Path
import copy
import gzip
import hashlib
import json
import struct

HERE = Path(__file__).resolve().parent
REPO = HERE.parents[1]
SEALED = REPO / "shannon_checked_release"
MODES = [("01_development", "development"), ("02_fresh_replay", "fresh")]


def need(ok, message):
    if not ok:
        raise ValueError(message)


def digest(path):
    return hashlib.sha256(path.read_bytes()).hexdigest()


def load(path):
    return json.loads(path.read_text())


def verify():
    manifest = HERE / "MANIFEST.sha256"
    expected = {}
    for line in manifest.read_text().splitlines():
        sha, name = line.split("  ", 1)
        need(name not in expected and not Path(name).is_absolute() and ".." not in Path(name).parts, "Invalid manifest path")
        expected[name] = sha
    actual = {str(p.relative_to(HERE)): p for p in HERE.rglob("*") if p.is_file() and p != manifest}
    need(set(actual) == set(expected), "Diagnostic inventory mismatch")
    for name, path in actual.items():
        need(not path.is_symlink() and digest(path) == expected[name], "Diagnostic digest mismatch: " + name)
    for row in load(HERE / "COMPRESSED_EVIDENCE.json"):
        raw = gzip.decompress((HERE / row["stored"]).read_bytes())
        need(len(raw) == row["uncompressed_bytes"] and hashlib.sha256(raw).hexdigest() == row["uncompressed_sha256"], "Compressed evidence mismatch")

    report = load(HERE / "LINT_PATH_NORMALIZATION_RESULT.json")
    need(report["status"] == "PASS_ALL_FIVE_DIFFERENCES_EXPLAINED_BY_PERSISTENT_LINTER_PATHS", "Unsuccessful diagnosis")
    build = load(SEALED / "BUILD_COMPARISON.json")["artifacts"]
    alignment = {r["module"]: r for r in load(HERE / "STRING_ALIGNMENT.json")}
    constants = 0
    for row in report["records"]:
        name = row["module"]
        key = f".lake/build/lib/lean/ShannonBounds/CellRetyping/{name}.olean"
        dumps, lints = [], []
        for index, (mode, kind) in enumerate(MODES):
            original = SEALED / "compiled" / kind / key
            need(digest(original) == row["runs"][index]["original_sha256"] == build[key][kind + "_sha256"], "Original artifact binding mismatch")
            need(row["runs"][index]["roundtrip_exact"], "Unsuccessful unchanged roundtrip")
            dumps.append(json.loads(gzip.decompress((HERE / "evidence" / f"{name}_{mode}.decls.json.gz").read_bytes())))
            observed = load(HERE / "evidence" / f"{name}_{mode}.lint.json")["lints"]
            need(len(observed) == row["runs"][index]["lint_count"], "Lint count mismatch")
            data = original.read_bytes()
            for lint in observed:
                need(lint["file"] == lint["message_file"] == lint["message"]["fileName"], "Inconsistent warning filename")
                need(lint["file"].encode() + b"\0" in data, "Warning filename missing from artifact")
            normalized = copy.deepcopy(observed)
            for lint in normalized:
                lint["file"] = lint["message_file"] = lint["message"]["fileName"] = f"ShannonBounds/CellRetyping/{name}.lean"
            lints.append(normalized)
            record = alignment[name][mode]
            offset = record["path_offset"]
            length = len(observed[0]["file"].encode())
            need(struct.unpack_from("<QQQ", data, offset - 24) == (length + 1, length + 1, length), "String length fields differ")
            need(record["path_bytes"] == length and record["aligned_size"] == ((32 + length + 1 + 7) // 8) * 8, "String alignment mismatch")
        need(dumps[0] == dumps[1], "Declaration types, values or extension inventories differ")
        need(lints[0] == lints[1], "Warning data differ beyond filenames")
        need(len(dumps[0]["constants"]) == row["constant_count"], "Constant count mismatch")
        need(row["normalized_bytes_equal"] and row["runs"][0]["normalized_sha256"] == row["runs"][1]["normalized_sha256"], "Normalized hash mismatch")
        need(alignment[name]["alignment_growth"] == alignment[name]["file_growth"], "File growth not explained by alignment")
        constants += row["constant_count"]
    need(len(report["records"]) == 5 and constants == 249, "Diagnostic coverage mismatch")
    print(f"PASS_RECORDED_BINARY_DIAGNOSIS: five pairs, {constants} declarations; Lean not rerun")


if __name__ == "__main__":
    verify()
