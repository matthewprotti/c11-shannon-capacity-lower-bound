# Codex handoff: compile and audit the frozen C11 Lean source

Work on the supplied `C11_Lean_Integration_Source_R2_2026-09-08` package in a network-enabled environment with Lean/Elan/Lake. This is NOT an already compiled proof. First read `STATUS.json`, `README.md`, `THEOREM_SCOPE.md` and `TRUST_BOUNDARY.md`.

The controlling upstream commit is `aa21eeb12b75b0413d3fa9fb4208b5d0bf2c4d65`, Lean is `leanprover/lean4:v4.32.2`, and Mathlib's pinned commit is `905b95818eb32af7874a58b427f50c1711a5e96c`.

1. Verify the package and its R1 ancestry. Preserve `CANDIDATE.json` and `FROZEN_INPUTS.json` byte-for-byte. Do not optimize the code construction, replace seeds, alter the schedule, update the baseline, or substitute a newer toolchain.
2. Run `python3 -B RUN_LEAN_GATE.py --work-dir /absolute/path/new-c11-lean-run`. A clean upstream C11 build is the positive control. The final capacity theorem must arise from the actually constructed finite set of exactly N1 words in the actual 207th power of `cycleGraph 11`.
3. Repair elaboration/build defects only in derived source copies. The uncompiled draft may need syntax, import, typeclass, or proof-term repairs. Record every change and keep the mathematical construction fixed. Do not insert a proof placeholder, handwritten axiom, unsafe proof replacement, guessed cardinality assumption, weakened theorem, or disconnected integer lemma.
4. Inspect the actual final theorem and the scope aliases. Run and retain all printed axiom reports. Lean 4.32.2 produces per-native-evaluation Bool-equality axioms; inspect their actual types rather than expecting an older one-axiom summary. Fix audit-parser incompatibilities only against observed output and pinned source, never by accepting arbitrary axioms.
5. Run both deliberately false compile probes. A syntax error or missing import is not an acceptable rejection reason. The modified-table probe must fail because the claimed separation is false; the cardinality probe must fail against the proved exact cardinality.
6. Rerun from a fresh local checkout after any repair, keeping all dependencies pinned. Preserve full transcripts, theorem statements, actual axioms, compiler version, source hashes, compiled-artifact hashes and the positive/negative control outcomes.

Deliver a new sealed release only after these checks succeed. Include the original R2 source archive, the unchanged R1 ancestor, all derived source files, an explicit change log and a build result. If any stage remains blocked, preserve `NOT_COMPLETED` and its exact reason. Do not describe an arithmetic-only or unbuilt result as end-to-end Lean-verified. Do not publish to a repository or submit a paper without Matthew's explicit authorization.
