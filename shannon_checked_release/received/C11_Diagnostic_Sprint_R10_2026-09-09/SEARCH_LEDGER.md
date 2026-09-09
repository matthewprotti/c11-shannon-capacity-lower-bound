# R10 bounded diagnostic and structural sprint

The planned allocation was a ceiling of two CPU-hours, not a requirement to consume that time. Search stopped cleanly after the following experiments; no process continues after delivery.

## Pass 1: measure the fixed terminal model

`prepare.py` reconstructs R9 and enumerates 30,184 supported words. The conflict graph has the fixed 58-type product relation, exact integer product weights, and mean open degree about 159.71349.

`diagnose_factors.py` finds all maximal cliques in the four small factor graphs and solves their weighted cover relaxations using SciPy/HiGHS. Floating covers are rationalized and repaired with singleton deficits; acceptance checks actual weight coverage. This yields a loose root ceiling near 5.301135844.

A direct NumPy log-determinant barrier then finds small semidefinite dual matrices. The numerical procedure is only a search. Rationalization, a small diagonal-budget margin, and two exact positive-definiteness checks yield the final 5.296352308028325 fixed-model upper endpoint. No SDP optimum is claimed.

A attempted `pip install cvxpy clarabel` failed because outbound name resolution was unavailable. No package was installed; the delivered search instead used the already-installed NumPy and SciPy. Verifier replay requires neither.

## Pass 2: substantially larger coordinated terminal changes

A global MILP pilot used 10,987 words with weight at least 1e-5 times the largest word weight, product-clique constraints, rounded search objectives, and a cutoff admitting the restricted R9 incumbent. It reached 180 seconds without finding a feasible solution. Its numeric dual objective is not used anywhere in the accepted certificates. This pilot does not cover excluded low-weight words or prove anything impossible.

The first block sweep generated 45 coordinate/two-coarse-family slices, choosing every current selected word in each slice for replacement. All candidates compatible with the frozen outside portion were eligible. Thirty-two kernels exceeded its 4,000-variable cap and were skipped; 13 were solved for up to 12 seconds each. Five exact positive replacements were accepted. Reported process CPU: 72.0194 seconds; wall time: 72.1209 seconds.

The second sweep used 20 slices, warm-started from the incumbent, with an 11,000-variable cap and 15-second solve limits. All 20 were attempted, and nine exact positive replacements were accepted. Reported process CPU: 206.4722 seconds; wall time: 206.5959 seconds. It uses the `_Highs` interface bundled inside SciPy 1.17.0; that private interface is an exploratory dependency, not an acceptance dependency. Solver settings and imports are preserved.

These kernels permit changes involving hundreds of incumbent cells, rather than R9's one- or two-word replacements. After each accepted kernel replacement, previously unblocked words are greedily restored. Acceptance of a replacement requires an exact positive cardinality difference and full compatibility, not a rounded solver objective. Recorded removed/added lists describe the kernel move *before* the greedy restoration.

The strongest terminal has 1,568 words and gives 5.295526013632343. No internal table, seed, child list or dimension changed. This remains approximately 1.8645e-6 above R9, only 1.8645% of the 1e-4 gain threshold. No exponent-compression search was attempted.

## Structural control: do actual type-to-type conflicts reveal hidden room?

`exact_relations.py` propagates complete realized pairwise conflicts through every unchanged internal node. A separate quantified verifier reproduces the matrices without importing that script. There are some intermediate additional separations, but only two at the terminal children. An exceptional-vertex argument proves that the resulting change of the *optimal* terminal root is below 2.1e-7. This is a proved information-gain limitation for these fixed whole cells, not an empirical search timeout.

## Disposition and reproducibility

No large-gain target was met, no global/local optimum was proved, and no new Lean build was performed. The exact fixed-model ceiling is useful but not tight. The recommended decision is to pause routine numerical optimization and preserve the evidence, rather than claim the wider mathematical problem is exhausted.

The original exploratory scripts, solver transcripts, and results are retained. Fixed pseudorandom seeds are recorded. Time limits, floating point, private solver interfaces and hardware can change search trajectories; bit-identical search reproduction is NOT claimed. Both final certificates are fully replayable without repeating search or trusting a solver status.

To rerun the exploratory pipeline, copy `search/` into a new scratch directory, extract `ancestors/R9_FINITE.zip` there, and run `prepare.py`, `diagnose_factors.py`, `theta_bound.py`, `certify_theta.py`, `global_mip.py`, `block_mip.py`, `block_mip_warm.py`, and `exact_relations.py` in that order with NumPy/SciPy/NetworkX available. Restrict OpenBLAS and OpenMP to one thread. These commands write scratch outputs. Do not execute them in the sealed package. The acceptance command remains `python3 -B VERIFY.py --self-test --manifest`.
