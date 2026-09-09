# R6 Lean return: receiving-side review

**Disposition: ACCEPT_R6_PINNED_FINITE_CONSTRUCTION_FORMALIZATION_ON_RECEIPT.**

This is an automated receiving-side source, statement, evidence, and finite-replay review of `C11_R6_Lean_Checked_2026-09-08.zip`. It is not a human referee report. No blocking discrepancy was found in the checks described below. No source or input repair was needed or made.

**The receiving runtime did not run Lean again.** It has no Lean, Lake, or Elan executable. Acceptance rests on the supplied fresh pinned build and its correspondence to the delivered source, together with the receiving checks actually executed. The `.olean` files are retained, hash-checked build evidence; this receiving process did not import or kernel-check them anew.

## 1. Accepted finite scope

| Dimension | Matching R5 constructed root, truncated | R6 constructed root, truncated |
|---:|---:|---:|
| 186 | 5.295498140339058 | **5.295498536418623** |
| 198 | 5.295509919114478 | **5.295510441529957** |
| 213 | 5.295514953483263 | **5.295515544509239** |

For each dimension `d`, the delivered Lean source and successful scope audit establish an explicitly defined finite independent set in the `d`th strong power of Mathlib's `SimpleGraph.cycleGraph 11`, whose cardinality is exactly its full frozen R6 integer. They then establish the corresponding root and decimal capacity inequalities.

The strongest accepted headline is

\[
\Theta(C_{11})\ge 5.295515544509239.
\]

The exact dimension-213 cardinality is

```text
15576025705482926919349953542643365905237782337909670850715691763072207372542781005458638810301625659402522397392173748140017563747809127752382797850207774
```

The constructed root satisfies

\[
5.295515544509239\le N_{213}^{1/213}<5.295515544509240.
\]

The upper endpoint is an upper bound on this root, **not on Shannon capacity**.

Each R6 root strictly exceeds its matching full R5 root and all four older full BPZ/R3/R4 roots. There are fifteen such comparisons: five for each new construction. This is not a claim that the dimension-186 root beats the strongest dimension-213 R5 root. All comparisons use complete integers rather than displayed decimals.

The three exponents remain 186, 198, and 213; this formalization did not find or claim smaller exponents.

## 2. Frozen-object and lineage checks

The received ZIP matches the supplied `.sha256` file:

```text
f9255ff24766c736593e31469df82857ee038809078274cbac5ed1e09a4feeb2
```

Its manifest covers 313 entries, with 314 received files including the manifest. The original R6 archive inside `ancestry/` matches the separately uploaded original archive byte for byte. All 44 extracted original files, including that ancestor's manifest, match under `frozen/`. These include the profile recipes, ordinary typed certificates, parent certificates, and base inputs.

The three retained parent R5 certificates were separately matched against the previously received Lean-checked R5 ZIP. The four files under `parent_formalization/` also match the corresponding R5 source files in that ZIP.

The accepted R6 Lean files are newly generated/formalized sources, not a pre-existing R6 mathematical source that had to remain unedited. What remained fixed was the mathematical construction data. Initial diagnostic logs show two helper elaboration repairs, described in the delivered build summary: the Boolean-disjunction proof and the `Code.hsep` field. They did not alter the frozen construction.

After all receiving checks, the names, contents, sizes, and modification times of all 314 extracted received files were unchanged. The original received ZIP was also unchanged. All mutation tests and regeneration took place on disposable copies.

## 3. Informal-to-formal statement and construction review

The receipt inspected `C11R6Base.lean`, `C11R6ListChecks.lean`, `C11R6Common.lean`, the literal substitution tables, the construction modules, and the explicit scope aliases.

The concrete mathematical chain is:

1. Literal vertices in BPZ's actual three-dimensional C11 base graph.
2. The supplied enumeration of 58 family/mask descriptors and their fixed typed separation relation.
3. An actual `Realisation` of that relation, with checked independent families and all required cross-family separations.
4. Literal admissible substitutions, with exact vectors of 58 cardinalities at each intermediate node.
5. The four-block terminal `multiCodeSet`, with its cardinality proved from those same vectors and its independence proved from those same admissible tables.
6. Graph-isomorphism transport to the intended physical strong power of `cycleGraph 11`.
7. The independence-number, root, decimal, and strict historical-comparison theorems.

The headline set and capacity theorems have no additional hypothesis assuming that the desired independent set, cardinality, or realization exists.

The receiving review inspected the list-fold bridges to the generic `Subst` and `Code` proof fields. They quantify over the listed words rather than an enormous universe of possible 58-letter words. Distinct words of a row must still be separated in a coordinate, and all words of separated output rows must still meet the cross-separation condition. The use of lists and conversion to finite sets is not a relaxation of those obligations.

The independent receiving parser additionally checks for duplicate literal words and out-of-range typed indices, and requires exact agreement on child order, dimensions, and the correspondence between source lists and frozen typed data. All those checks passed; no such defect was found in the received source.

## 4. New independent literal-source replay

`independent_source_replay.py` was written for this receipt and imports none of the supplied checker/generator modules. It parses the literal Lean source and performs exact arithmetic and graph checks without elaborating Lean.

It reconstructed both 148-word seeds, the seven coarse base families, each point's exact neighborhood mask, all 58 typed base lists, and the nine nonempty base types. It independently enumerated the full normalized descriptor set and checked the base typed separations using coordinate-wise C11 confusability.

It checked all **49 distinct literal tables**, including the three terminal codes. Its bitset-based conflict calculation covers **3,102,358 required unordered word pairs**, counting within-row and required cross-row pairs over the distinct tables. The terminal code sizes are 1,289, 1,365, and 1,370 words.

It then reconstructed all **91 nodes** directly from their source-level child definitions and recomputed every literal 58-entry intermediate vector. The node counts are 28, 31, and 32, including the respective base and terminal nodes. The terminal exponents in three-coordinate base blocks are 62, 66, and 71, giving physical dimensions 186, 198, and 213.

Both full cardinalities and exact decimal brackets agree with the frozen inputs and the delivered Lean claims. All fifteen strict root comparisons pass exact integer-power tests. The six delivered false-compile fixtures were independently checked as the intended wrong-cardinality or conflicting-word fixtures.

Normal and optimized Python source replays agree after excluding their newly measured run-time fields. This is an additional finite verification path, not a new Lean compilation or proof of the generic framework.

## 5. Recorded compilation and dependency evidence

The authoritative `BUILD_RESULT.json` is byte-identical to the retained clean-run result. Both development and clean-run evidence were inspected: 102 command records per run, 204 in total. Of these, 38 stage logs per run carry their own hashes in the run report; the remaining preparation logs are also covered by the release manifest and were checked against their command headers and expected outputs.

The development audit-stage `lake build` was a cached recheck after earlier successful compilation. The **clean run** contains explicit new build records for all nine R6 modules, after the unchanged BPZ positive-control build. It records approximately 95.25 seconds for the new R6 build stage; this is a recorded measurement on the submitting machine, not a receiving benchmark or general performance claim.

The fixed environment is Lean 4.32.2, BPZ commit `aa21eeb12b75b0413d3fa9fb4208b5d0bf2c4d65`, and Mathlib commit `905b95818eb32af7874a58b427f50c1711a5e96c`. All nine dependency HEAD values, worktree diffs, and staged/index diffs match the recorded expectations before and after. BPZ/R6 modules were rebuilt; the dependency binary cache was reused.

All ten source-file hashes match the build report. All eleven retained R6/audit `.olean` artifact hashes match their recorded hashes.

## 6. Actual scope and axiom audit

The delivered audit has **24 explicitly typed scope aliases** and reports dependencies for **232 declarations**. The receiving audit independently reparsed those reports, checked their coverage, and found no `sorryAx` or unapproved dependency in them.

The native-evaluation dependency union contains **234 distinct axioms**. Every one has a corresponding successful actual-environment inspection and a retained printed type. The audit implementation checks that each is a non-unsafe axiom of type `Eq Bool e true`, with `e` closed. The allowed standard axioms are `propext`, `Classical.choice`, and `Quot.sound`, where present.

| Dimension | Native dependencies of exact-set scope alias | Native dependencies of capacity scope alias |
|---:|---:|---:|
| 186 | 74 | 76 |
| 198 | 89 | 91 |
| 213 | 96 | 98 |

The strongest final capacity theorem therefore has 98 native dependencies, not 234; 234 is the audit-wide union. Counts differ from R5 because list-fold and whole-vector checks group computations differently. A lower count is not itself evidence of a stronger or weaker mathematical proof.

The proper description is **Lean-checked with disclosed native-evaluation and pinned dependency-cache trust**. It is not axiom-free, kernel-only arithmetic replay, or a source rebuild of Lean/Mathlib by this reviewer. Hash-consistent logs and artifacts do not constitute an independently re-executed compiler run.

## 7. Negative controls and local replay

For each dimension, the delivered compiler rejects the claim that the actual set has cardinality `N + 1`, with the precise expected type mismatch. For each dimension, inserting the supplied conflicting typed terminal word causes the separation proposition to evaluate to false. No incidental missing-module, identifier, or typeclass failure explains those six failures.

The receiving process reran the original R6 finite verifier in normal Python and under `-O`, including all three finite replay routes, the 20 profile-certificate negative controls, the eight ordinary typed-certificate negative controls, and the ancestor's 43-entry manifest. Outputs are byte-identical.

The delivered release verifier also passed normally and under `-O` with identical output. A new evidence audit agrees across those modes except for intentionally variable disposable-directory names in one diagnostic. Those paths were normalized solely for comparison; raw logs remain preserved.

On a disposable copy, the deterministic generator reproduced all eight files it generates and the binding JSON exactly; all ten Lean source files remained byte-identical. A direct wrong-cardinality literal mutation was rejected by the new independent source checker. Five separate integrity mutations were rejected by the supplied release verifier: missing manifest, unlisted file, changed frozen cardinality, changed Lean source, and changed compiled artifact. These are targeted controls, not an exhaustive security audit.

## 8. What R6 does not formalize

**The general avoidance-profile calculus is not a Lean theorem in this return.** The submitted package says this explicitly, and the source scope agrees.

The following remain written mathematical arguments rather than new arbitrary-graph Lean theorems: the product-propagation invariant, filtered-augmentation rule, conservative mask update, repeated closure of the profile calculus, and correctness of compiling every admissible profile recipe into a typed certificate. The base descriptor and exact neighborhood interpretation are formally checked for the supplied finite base; that does not establish the entire general algorithm.

This distinction does not weaken the accepted numerical constructions. The 58-letter certificate checker verifies the resulting concrete tables and sets directly. It does not assume the unformalized profile algorithm is correct. A generator can be untrusted while its particular output is formally checked.

No worldwide priority clearance, external human expert endorsement, VibeMathed score, optimality, or replacement of BPZ's arbitrary-alphabet framework is claimed here.

The next separate mathematical gate, if advancing the methods claim, is an arbitrary-graph preservation theorem for the avoidance invariant under propagation, augmentation, and conservative updating. That should not be conflated with reopening these accepted finite constructions.

## 9. Evidence bundle and reproducibility

The separate receipt-evidence archive contains the source-replay code, evidence-audit code, raw normal/optimized results, input/output snapshots, test diagnostics, and `RECEIPT_SUMMARY.json`. It does not modify or reseal the received R6 release.

To rerun the new source checks after extracting the R6 release:

```sh
python3 -B independent_source_replay.py /path/to/C11_R6_Lean_Checked_2026-09-08
python3 -O -B independent_source_replay.py /path/to/C11_R6_Lean_Checked_2026-09-08
```

For the receiving evidence/lineage audit, supply the R6 extracted directory, original finite R6 ZIP, and accepted R5 Lean ZIP:

```sh
python3 -B receipt_audit.py /path/to/C11_R6_Lean_Checked_2026-09-08 \
  /path/to/C11_Avoidance_Profile_R6_2026-09-08.zip \
  /path/to/C11_R5_Lean_Checked_2026-09-08.zip
```

Neither command invokes Lean. A new compiler replay uses the received package's `RUN_R6_GATE.py` on a machine with the pinned toolchain and dependencies.
