# Sources, roles, and trust

- Frozen R9: embedded byte-for-byte as `ancestors/R9_FINITE.zip`, SHA-256 d74fab6f4dd44a5c04124bd53e8dcf2e1ecaa6d48a95dc54f7a87a24d491025f. All construction data and the prior finite checker sources come from this package. Its BPZ attribution and Apache license text are preserved.
- BPZ: Pjotr Buys, Sven Polak, Jeroen Zuiddam, *Lean-verified lower bounds for the Shannon capacity of odd cycles*, arXiv:2607.29681; construction source pinned at aa21eeb12b75b0413d3fa9fb4208b5d0bf2c4d65. No claim of current global baseline or priority is inferred from this historical pin.
- L. Lovasz, *On the Shannon capacity of a graph*, IEEE Transactions on Information Theory 25 (1979), 1–7. The PSD/theta approach is established prior mathematics. The precise finite weighted-tensor certificate used here is proved self-contained in `PROOF.md`.
- SciPy documentation: https://docs.scipy.org/doc/scipy/reference/optimize.linprog-highs.html, consulted 2026-09-09. This informs exploratory LP/MILP usage only. The installed search version was SciPy 1.17.0; versioned private bundled-HiGHS interfaces are not part of the proof.

This sprint used actual local container execution. Search used floating point and numeric solver statuses, but none is an acceptance premise. The final bound checks use Python integers and fractions. No new Lean compiler run, external expert audit, publication, platform submission or comprehensive literature priority scan was performed.

The general R7 formalization's author receipt reports a proved uniform compiler. This sprint does not amend R7, invoke its receipt as a substitute for checking a new finite certificate, or claim that it verifies every Python implementation.
