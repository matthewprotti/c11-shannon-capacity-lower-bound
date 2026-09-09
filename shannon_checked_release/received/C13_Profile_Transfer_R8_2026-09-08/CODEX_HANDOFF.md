# Codex handoff — C13 R8 concrete formalization

## Objective

Formalize the **unchanged** new C13 certificate, with exact cardinality and
physical dimension 522, and prove

`(6.302927046770772 : Real) <= shannonCapacity (SimpleGraph.cycleGraph 13)`.

Also prove the new full root strictly exceeds the full pinned BPZ C13 root.
This is a new application of the existing method, not a request to optimize or
rewrite R7. Do not mutate any published C11 release.

## Inputs and positive control

Pin BPZ `aa21eeb12b75b0413d3fa9fb4208b5d0bf2c4d65`, Lean 4.32.2, and its matching
Mathlib/dependency revisions, following the accepted R5/R6/R7 build practices.
First run `VERIFY.py --self-test --manifest` normally and under `-O`.
Then fresh-build the unchanged BPZ C13 baseline, not merely its numerical integer.
The exact baseline is in `inputs/BPZ_C13.json` and BPZ `CertC13.M`.

The new exact integer and decimal bracket are in `certificates/C13_d522.json`.
All literal finite substitutions are in `compiled/C13_d522.json`.
The original fixed schedule is `inputs/BPZ_C13_SCHEDULE.json`.
There are 28 nodes, 27 typed tables, 58 possible letters, and a **three-block**
terminal with 125 supported words. Physical terminal block dimensions are
204, 216, 102. This is not the earlier C11 four-block terminal.

## Recommended proof route

Reuse generic typed-list checking helpers and BPZ's arbitrary-alphabet framework.
No new general compiler theorem is required to accept this particular output.

For the typed base, use `BaseC13.Pre` of the syndrome lists under the unchanged
sigma map. Its fibre cardinality is 169. The second replay's
`independent_typed_checks.base.base_cosets_by_type` lists the exact syndrome
classes for every letter. Establish their independence and required separations
in `BaseC13.G6`, and their exact cardinalities from the existing fibre lemmas.
Do not assume an abstract type realization or assume the desired base weights.
BPZ `BaseC13Data`, `BaseC13Sets`, `BaseC13Ports`, `BaseC13Foot`, and `CapC13`
contain the relevant physical-graph and quotient interfaces. Check those exact
interfaces before coding. The 483 closed offset syndromes include zero; the
upstream list `Delta` excludes it and has 482 elements.

As a methods-specific check, prove the base mask interpretation if practical;
for the finite capacity theorem, actual typed-family independence/separation and
cardinality are the indispensable obligations. Be explicit about which route
was completed.

From those sets, compile the literal typed DAG using the ordinary separation
relation specified in `typed_check.py`, retaining child order and repeated-child
coordinate multiplicity. Define the terminal finite set, prove its exact count,
transport from `(C13^6)^87` to `C13^522`, and derive the capacity inequality.
Admissibility plus a free cardinality hypothesis is not an acceptable substitute.

## Required audits

Produce complete types for the actual finite set, independence, exact cardinality,
capacity inequality, integer bracket, and strict old/new constructed-root comparison.
No theorem may assume the new independent set, compiled-table validity, successful
search, new N, or base realization as a hypothesis in the headline statement.

Audit actual transitive dependencies and generated native-evaluation axioms;
retain their source/type correspondence. R7's absence of native-evaluation
axioms does not imply a native-free C13 numerical proof. State the actual result.
Retain negative Lean probes for wrong cardinality and a genuinely nonseparated
literal terminal pair; their failures must be mathematical, not syntax or resource
errors. Check all pinned dependencies, including both worktree and index diffs,
before and after a fresh build.

Preserve the source archive, this certificate, all logs, and source hashes. Repair
only elaboration/harness defects in derived copies. Changing any mathematical
object requires a new explicit review. Do not claim external endorsement or
worldwide novelty, and do not publish or merge on the user's behalf without a
separate request.
