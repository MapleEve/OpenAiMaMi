# System Diff

## Platform Artifacts
- 1.0.9 windows: AiMaMi 1.0.9 win64.exe, sha256=a5822387fa3f56dc03893111f4ffdd074daa882e8887ec4e7c394879c0e9fe0b (baseline)
- 1.2.3 windows: AiMaMi.1.2.3 win64.exe, sha256=aeccccd78e470ad6cfdb52d72af624b34ce17a4a0b04e7596b32583eaf972396 (this bundle, idb_path=E:\binary\AiMaMi.1.2.3 win64.exe.i64)
- macOS 1.2.3: Unknown/not covered by this bundle.

## Frontend IPC / Control-flow
No diff. 5 commands, wrapper shape (`tauriInvokeWrapper`, callee `re`) and argKeys byte-identical between 1.0.9 and 1.2.3 windows `ipc-contracts.jsonl`.

## Backend Commands / Control-flow / Pseudocode / Call-tree / Leaf
No diff. Zero backend symbol/string presence in both 1.0.9 and 1.2.3 windows binaries. 1.2.3 finding independently re-derived this round (live IDA on the actual 1.2.3 windows IDB), not merely copied from the 1.0.9 record. Cross-checked against REVERSE-STATUS.md's 1.1.8 delta round, which already documented this same 5-command (part of a wider 39/42-command voice+custom_instruction) cluster as a persistent cross-version, cross-platform pre-existing gap through 1.0.9->1.1.1->1.1.8 on both mac and win — this bundle extends that same finding through 1.2.3 windows.

## Interface / Error / Boundary
No diff. Frontend-only stub interface and error-path semantics unchanged.

## Gate Leaf
No diff. Gate ceiling carried over unchanged from the 1.0.9 baseline (not upgraded): full_leaf_100=true, accepted_substitute=same_platform_ida_backend_absence_for_frontend_orphan_command.

## Plugin / Capability
n/a for this module.

## OTA / Package
n/a for this module.

## Resource / Binary Surface
Shared path-blob anchor moved from 0x1412804eb (1.0.9) to 0x1417893f2 (1.2.3) — expected binary relinking drift (different build, different address), same single-data-xref role confirmed in both versions (source-path/location string embedded in a shared function, not a command dispatcher), not a behavior change.

## Unknown
macOS 1.2.3 custom-instructions status: Unknown (no canonical bundle produced this round; do not infer from this windows-only bundle).
