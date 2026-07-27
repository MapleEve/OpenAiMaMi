# NO-BEHAVIOR-DIFF-MIGRATION-123 — windows AiMaMi custom-instructions

## previous evidence
`internal-reverse/audits/windows-1.0.9-custom-instructions/` — 5/5 commands `accepted_ready_absent_backend_orphan_ida_direct`, absence_anchor=0x1412804eb, source_binary_sha256=a5822387fa3f56dc03893111f4ffdd074daa882e8887ec4e7c394879c0e9fe0b.

## diff basis
1. Frontend: `raw/aimami/1.2.3/windows-x64/frontend/ipc-contracts.jsonl` grep for `custom` -> exactly the same 5 commands (camelCase wrapper + snake_case command), argKeys byte-identical to the 1.0.9 record for every command.
2. Backend: live IDA on `AiMaMi.1.2.3 win64.exe` (server_health confirmed status=ok/IDA decompiler_ready=true before any query) —
   - `func_query name_regex=<command>` for each of the 5 exact command names -> 0 hits each.
   - `func_query name_regex=custom_instruction` (module-wide sweep) -> 0 hits (rules out a naming-mismatch false negative for any sibling command).
   - `find_regex pattern=<command>` for each of the 5 exact command names -> 0 hits each.
   - `find_regex pattern=custom.instruct` (broad substring) -> 1 hit at 0x1417893f2 ("custom-instructions"); `xrefs_to` -> single data xref from a shared 0x838-byte function (`sub_140714E90`), matching the same path-blob role already documented at the 1.0.9 windows anchor 0x1412804eb and the 1.1.1 macOS anchor `0x1011514d1`.

## unchanged targets
All 5: `load_custom_instruction_state`, `preview_custom_instruction_apply`, `apply_custom_instruction`, `clear_custom_instruction_block`, `rollback_custom_instruction`.

## changed targets
None.

## reused gate
Ceiling carried over unchanged from the 1.0.9 baseline: consumerStartReady=true / strictImplementationUse=true / readyToImplement=true / implementation_use=true / gate_accepted=true / full_leaf_100=true / accepted_substitute=same_platform_ida_backend_absence_for_frontend_orphan_command. Not upgraded beyond the 1.0.9 ceiling (per RULE 9, migrated_no_behavior_diff must not promote gate tier).

## new evidence path
`raw/aimami/1.2.3/windows-x64/custom-instructions/<command>/` (5 leaves, this round) — supplies the fresh same-version same-platform IDA re-verification that migration alone would not have provided.

## remaining Unknown
- macOS 1.2.3 custom-instructions: no canonical bundle produced this round; Unknown, not inferred from this windows finding.
- Inherited unchanged from 1.0.9: `load_custom_instruction_state` initial-failure UI lacks a dedicated visible error alert; apply/clear/rollback success path uses `setQueryData` not invalidation.
