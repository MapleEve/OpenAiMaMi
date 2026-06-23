# evidence.md — clear_custom_instruction_block
## AiMaMi 1.1.1 / macOS ARM64 / module: custom_instructions
## Session: wf-aimami111-delta-20260616 | Machine: <本地机器> | Date: 2026-06-16

---

## Confirmed

- Backend command `clear_custom_instruction_block` is **ABSENT** in AiMaMi 1.1.1 macOS ARM64 binary (IDB: AiMaMi 1.1.1 universal.app/Contents/MacOS/AiMaMi.i64, hexrays_ready=true, uptime 22829s).
- 逆向分析 four-angle completeness confirmed ABSENT:
  - A (func_query): `.*clear.*custom.*` → 0 hits; `.*custom_instruction.*` (commands ns) → 0 hits; `.*clear.*block.*` → 0 hits; `.*custom.*instruct.*clear.*` → 0 hits.
  - B (find_regex string pool): `clear_custom_instruction_block` → 0 matches; `clear_custom` → 0 matches; `clear.*instruct` → 0 matches; `clearCustomInstruction` → 0 matches; `clear_custom_instruction` → 0 matches; `custom.instruct` → 1 match only at path blob `0x1011514d1` (path constant, NOT a command string).
  - C (xrefs_to): `codexmate_lib::commands::custom_instructions::clear_custom_instruction_block` → Not found.
  - D (owner-map-111.jsonl): `status=shared, not_yet_queried, owner_va=null` — no VA, this session sets owner.
- Frontend presence CONFIRMED: ipc-contracts.jsonl line 86 col 30425, wrapper=`clearCustomInstructionBlock:()=>ne("clear_custom_instruction_block")`, argKeys=[], kind=tauriInvokeWrapper, source=minified, file=assets/index-DdcCOEJG.js.
- Frontend control-flow CONFIRMED: FCF entry `clearCustomInstructionBlock`, trigger=minified-static-function, terminal_call kind=tauriInvoke, command=`clear_custom_instruction_block`, argKeys=[], snippet=`ne("clear_custom_instruction_block")`, line 86 col 30456.
- Absence anchor in 1.1.1: `0x1011514d1` — path blob containing `custom-instructions` substring (path constant, identical role to 1.0.9 absence_anchor `0x100f3933a`).
- Migration delta vs 1.0.9: mac-shard-1.json classifies this command as `needs_full` with note "1.0.9 raw absent. 1.1.1 owner-map: no VA. NEEDS_FULL." — 逆向分析 live enumeration in this session confirms no VA exists in 1.1.1 either. Behavior identity confirmed (both 1.0.9 and 1.1.1: backend absent, frontend wrapper exists, argKeys=[] unchanged).
- IDB comment written at `0x1011514d1` (append_comments, appended=true).
- IDB saved: ok=true, path=<来源位置>/raw/binary/AiMaMi-1.1.1-idb.
- 1.0.9 baseline confirmed: source_binary_sha256=1db044e8efab3b9eba8668b5a008f4952194ec0dd6a70a10725a5e7ad0350482, gate=readyToImplement, accepted_substitute=same_platform_ida_backend_absence_for_frontend_orphan_command, idb_saved=true, full_leaf_100=true.
- gate_candidate: `migrated_no_behavior_diff → readyToImplement` (accepted_substitute=same_platform_ida_backend_absence_for_frontend_orphan_command, inherited from 1.0.9 baseline, identity confirmed by 1.1.1 live 逆向分析 enumeration).
- module namespace confirmed: `codexmate_lib::core::models::CustomInstructionProtectionState` exists at `0x1005615e0` (Deserialize FieldVisitor) — this is a model/type, not a command handler, confirms custom-instructions module exists as data types but no command handlers are registered in backend.

## Inferred

- The command `clear_custom_instruction_block` is intentionally not implemented in the AiMaMi backend. It is a frontend-only IPC stub that invokes a Tauri command that has no registered backend handler.
- Based on the command name and its sibling commands (apply_custom_instruction, rollback_custom_instruction, preview_custom_instruction_apply, load_custom_instruction_state), this command would semantically clear/reset a "custom instruction block" in the UI state — but this state management is handled entirely by frontend JavaScript, with no upstream backend persistence or side-effect.
- The `CustomInstructionProtectionState` model type in codexmate_lib confirms the custom-instructions feature has data model definitions, but the command handler is absent from the IPC registration table.
- `clearCustomInstructionBlock` wrapper is adjacent to `rollbackCustomInstruction` and `applyCustomInstruction` in the minified JS bundle (line 86 region), consistent with a custom-instructions UI module.
- In 1.0.9, the IPC invoke for this command would result in a Tauri command-not-registered error or silent no-op. Same behavior expected in 1.1.1 given identical absence pattern.
- The absence is consistent across 1.0.9 (macos sha=1db044e8, windows sha=a5822387) and 1.1.1 (universal binary), indicating a deliberate product decision to not implement backend handling.
- argKeys=[] (zero-arity) — the command takes no parameters, consistent with a stateless clear/reset operation.
- The response type (if invoked against a registered handler) would likely return a unit/void response or CoreEnvelope::ok(()). Since no handler exists, the actual response is undefined (Tauri unregistered command error).
- The C5 implementation should treat this as a frontend-only operation (clear UI state, no backend call required), or silently handle the no-op invoke result.

## Unknown

- Exact Tauri error response when frontend invokes `clear_custom_instruction_block` against an absent backend handler: unknown (would require runtime trace on 1.1.1 binary; not a blocking unknown since C5 should not pass through the invoke to AiMaMi backend).
- Whether future versions of AiMaMi will register a backend handler for this command: unknown, product decision.
- Windows 1.1.1 binary: not analyzed in this session (Windows evidence is a separate platform, must come from <逆向工具通道>). Windows 1.0.9 status: accepted_ready_absent_backend_orphan_ida_direct (sha=a5822387). Windows 1.1.1 backend absence not independently verified in this session — Windows unknown.
- Whether the frontend `clearCustomInstructionBlock()` call is ever invoked from a UI element in 1.1.1 (FCF entry has no guards and no specific trigger element identified — only a minified-static-function trigger type with no component_file element): unknown UI trigger path.
- The CustomInstructionProtectionState model struct layout and fields: partially known (has Deserialize impl at 0x1005615e0), but not relevant to this command's gate since backend is absent.
- Whether rolling back (rollback_custom_instruction) and clearing (clear_custom_instruction_block) are backed by the same absent pattern or different: rollback_custom_instruction also has 0 逆向分析 hits in 1.1.1 (confirmed by func_query), so same absent pattern — but rollback was not the target of this session.
