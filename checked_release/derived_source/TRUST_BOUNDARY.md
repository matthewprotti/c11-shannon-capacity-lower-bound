# Trust boundary and the version-specific native-evaluation issue

## Current evidence

No Lean executable or Lake executable was present in the authoring runtime. Direct GitHub downloads failed at DNS resolution. The GitHub connector could read the pinned sources. It could not deliver the Linux release workflow artifact: that artifact is 1,435,839,181 bytes, above the connector's 536,870,912-byte limit. The separate download facility also did not fetch the release archive. No compiler was installed and no `.olean` for the new proof was produced.

Consequently, the new source is not known to elaborate. Neither theorem dependency inspection nor native-axiom type inspection has actually run. Their implementations and tests must not be substituted for their execution by Lean.

## Important Lean 4.32.2 detail

The pinned `src/Lean/Elab/Tactic/Decide.lean` calls `nativeEqTrue`. The pinned `src/Lean/Meta/Native.lean` compiles and evaluates a closed Bool expression and, only after it returns true, creates a fresh axiom asserting that expression equals true. Its generated name is based on `_native`, the tactic name and `ax`.

This is not adequately described by assuming every theorem will depend on a single historical `Lean.ofReduceBool` axiom. The actual version creates individual native-evaluation axioms. Their real names and types must be recorded after compilation.

The runner therefore has two stages. It parses the actual `#print axioms` output, rejecting missing reports, `sorryAx`, arbitrary added axioms, and unexpected names. It then generates a Lean audit of every permitted native-evaluation declaration, checking that it is an axiom with the exact outer form `Eq Bool e true`, with a closed expression e. Each type is printed into the evidence log. These are compiler-trusted evaluations, not kernel-only re-evaluation of the original finite predicate.

Name/shape checks alone do not establish the correctness of native execution. The intended trust is the pinned compiler/runtime and its native evaluation implementation, the pinned source packages, the underlying standard Lean axioms, and the actual compiler-generated finite checks. New construction sources contain no handwritten axiom declaration or placeholder proof. Frozen source identities, a clean build and explicit theorem-scope aliases are additional controls, not a substitute for that trust.

## Conditional acceptance after a successful run

The admissible claim would be that the full bound has been checked in the pinned Lean development with disclosed native-evaluation trust. It should not be called kernel-only, axiom-free, a separately verified compiler result, or a proof of worldwide priority.

The base graph and capacity definitions still require human semantic review. The earlier finite audit already addressed their intended combinatorial interpretation, but automation does not make the correspondence between notation and the research claim irrelevant.

## Primary source references

- BPZ source: `https://github.com/spectra-research/shannon-capacity-lean/tree/aa21eeb12b75b0413d3fa9fb4208b5d0bf2c4d65`
- Pinned native implementation: `https://github.com/leanprover/lean4/blob/v4.32.2/src/Lean/Meta/Native.lean`
- Pinned tactic implementation: `https://github.com/leanprover/lean4/blob/v4.32.2/src/Lean/Elab/Tactic/Decide.lean`

The exact retrieved blob identities are recorded in `UPSTREAM_LOCK.json`.
