# Claude 独立复核 — windows AiMaMi 1.2.3 custom-instructions

Evidence path used: `raw/aimami/1.2.3/windows-x64/custom-instructions/<command>/` + `raw/aimami/1.2.3/windows-x64/frontend/ipc-contracts.jsonl` + `internal-reverse/audits/windows-1.0.9-custom-instructions/` (migration baseline).

Coverage: 5/5 commands. Frontend command set and argKeys byte-identical to 1.0.9 baseline (verified by direct grep + json parse of ipc-contracts.jsonl, not assumed). Backend absence re-verified live this round via 2 independent methods (func_query symbol table, find_regex string pool) per command plus 1 module-wide symbol sweep — all 0 hits; the sole broader-substring hit (0x1417893f2) was traced via `xrefs_to` to a single data xref inside a shared 0x838-byte function, consistent with the path-blob role already established at the 1.0.9/1.1.1 anchors, not a command dispatcher.

Gaps: macOS 1.2.3 companion module not covered this round (Unknown, explicitly not inferred). No fresh Unknowns introduced beyond the 2 already carried over from the 1.0.9 baseline.

Not-should-act items: do not attempt further IDA deep-dive on these 5 commands (no owner exists to decompile); do not use this windows finding to close the macOS 1.2.3 custom-instructions module.
