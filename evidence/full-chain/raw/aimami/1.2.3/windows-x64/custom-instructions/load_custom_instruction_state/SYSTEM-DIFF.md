# System Diff — load_custom_instruction_state (windows AiMaMi 1.0.9 -> 1.2.3)

## Platform Artifacts
1.0.9 windows: AiMaMi 1.0.9 win64.exe (sha256 a5822387fa3f56dc03893111f4ffdd074daa882e8887ec4e7c394879c0e9fe0b).
1.2.3 windows: AiMaMi.1.2.3 win64.exe (sha256 aeccccd78e470ad6cfdb52d72af624b34ce17a4a0b04e7596b32583eaf972396).

## Frontend IPC / Control-flow
No diff. Command name, wrapper shape and argKeys=[] byte-identical between 1.0.9 and 1.2.3 windows ipc-contracts.jsonl.

## Backend Commands / Control-flow / Pseudocode / Call-tree / Leaf
No diff. Zero backend symbol/string presence in both 1.0.9 and 1.2.3 windows binaries (independently re-verified live on 1.2.3, not assumed from 1.0.9).

## Interface / Error / Boundary
No diff observed; frontend-only stub semantics unchanged.

## Gate Leaf
No diff. Gate ceiling carried over unchanged from 1.0.9 baseline (not upgraded): full_leaf_100=true, accepted_substitute=same_platform_ida_backend_absence_for_frontend_orphan_command.

## Plugin / Capability
n/a for this module.

## OTA / Package
n/a for this leaf.

## Resource / Binary Surface
Shared path-blob anchor moved from 0x1412804eb (1.0.9) to 0x1417893f2 (1.2.3) — expected binary relinking drift, same single-data-xref role in both versions, not a behavior change.

## Unknown
None new. See AI.md `unknowns` for the one inherited 1.0.9 Unknown carried forward unchanged.
