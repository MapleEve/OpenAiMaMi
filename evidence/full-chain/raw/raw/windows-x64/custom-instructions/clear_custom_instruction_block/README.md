# clear_custom_instruction_block - windows AiMaMi 1.2.3 custom-instructions

Status: accepted same-platform backend-absence substitute (migrated_no_behavior_diff vs 1.0.9 windows baseline). Frontend wrapper exists (`raw/aimami/1.2.3/windows-x64/frontend/ipc-contracts.jsonl`, command=`clear_custom_instruction_block`, argKeys=[]); matching IDA backend has no command string/owner for the five custom-instructions commands, re-verified live against the 1.2.3 windows binary this round (not merely copied from 1.0.9).

Interface: `{}`.

Backend verification this round (module=AiMaMi.1.2.3 win64.exe, source_binary_sha256=aeccccd78e470ad6cfdb52d72af624b34ce17a4a0b04e7596b32583eaf972396):
- `func_query name_regex=clear_custom_instruction_block` (Hex-Rays symbol table) -> 0 hits.
- `find_regex pattern=clear_custom_instruction_block` (string pool) -> 0 hits.
- Broader module-wide sweep `func_query name_regex=custom_instruction` -> 0 hits (confirms absence is not a naming mismatch for this or any of the other 4 sibling commands).
- Broader string-pool sweep `find_regex pattern=custom.instruct` -> 1 hit, address 0x1417893f2, string "custom-instructions"; `xrefs_to(0x1417893f2)` -> single **data** xref from `sub_140714E90` (0x838 bytes) — a shared source-path/location-blob constant, not a Tauri command/rodata string, consistent with the same-role anchors already documented at 1.0.9 windows (0x1412804eb) and 1.1.1 macOS (0x1011514d1).

Migration basis: frontend command name + argKeys byte-identical to the 1.0.9 windows baseline (`internal-reverse/audits/windows-1.0.9-custom-instructions/manifest.json`); backend absence independently re-confirmed live (2 methods) on the 1.2.3 windows binary rather than assumed. No behavior diff found -> gate ceiling and Unknowns carried over unchanged from the 1.0.9 baseline, not upgraded beyond it.

Implementation boundary: C5 custom-instructions code is product/local behavior, not upstream backend parity.
