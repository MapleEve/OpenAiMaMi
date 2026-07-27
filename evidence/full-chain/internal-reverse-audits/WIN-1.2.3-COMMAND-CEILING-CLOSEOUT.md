# WIN 1.2.3 — tauri command-handler naming ceiling closeout (win-native disambig + mac cross-check)

> Refines the residual noted in `COVERAGE-FINAL-1.2.3.md §6` ("win 命令命名 16 个合池/歧义未精确命名") and
> `BASELINE-FINAL-1.2.3.md §3` (win 115/131). This pass resolves the disambiguable subset, corrects one
> mis-named function, and precisely re-characterizes the true ceiling. IDB is SOT; no raw dumps here.

- **Binaries**: win `E:\binary\AiMaMi.1.2.3 win64.exe.i64` (module `AiMaMi.1.2.3 win64.exe`, imagebase 0x140000000, strip) ·
  mac `raw/binary/AiMaMi 1.2.3.app/.../AiMaMi.i64` (module `AiMaMi`, symbols). Both IDA live, IDA decompiler_ready at pass time.
- **Command universe**: mac & win `frontend/ipc-contracts.jsonl` identical = **131** commands.
- **Method**: win-native only for win naming — each real `#[tauri::command]` handler `lea`'s its own command-name
  string once (tokio tracing span); mac symbols used only as an independent cross-check signature, never hard-pasted.

## Owner matrix (PREWRITE_PRODUCER_COLLISION_GATE_V1)

| field | value |
|---|---|
| target path | `internal-reverse/audits/WIN-1.2.3-COMMAND-CEILING-CLOSEOUT.md` (summary; win IDB is evidence SOT) |
| canonical scope | win-1.2.3 cross-module tauri command-handler IDB naming ceiling closeout |
| current producer | none active on 1.2.3 (only in-progress claim = wf-aimami118-delta; 1.2.3 win recovery completed 2026-07-21) |
| machine / session | Maple-C5Mini (mini, SMB backing host) / wf-aimami123-win-cmd-ceiling-20260726 |
| INDEX lines | n/a — no new raw/intermediate bundle; mutations are IDB set_name/comment/dirtree, idb_save persisted |
| write mode | new additive summary file, authoritative=true for this refinement scope only |
| collision status | no collision |
| takeover token | none required (no canonical bundle overwrite, no owner reassignment) |

## 1. Prior "16 ceiling" — grounded re-classification

Live win probe (command-name string → dref → enclosing function, two-hop) over all 131:

- **113** handlers correctly named (own-name `lea`, unique xref) — unchanged, correct.
- **1 mis-name found & corrected**: `0x140194810` was named `open_path` — it is NOT the open_path handler.
- **16 unresolved** = 5 MULTI (2 xref candidates) + 11 ZERO (no independent string / pool-merged).

### Root cause (win-native): `0x140194810` is the tauri invoke command dispatcher, not `open_path`

- 25168 B single function (`.pdata` = exactly ONE function-begin in range → not a boundary-merge).
- **Sole code-ref** to the concatenated command-name pool `@0x1416c6b10+` (e.g. `...force_kill_codexget_image_compatset_image_compatload_rel...`).
- Jump-table `@0x140194865`; each case builds `("<cmd>", len)` tuples (e.g. `("clean",5)("repo",4)`, `(...,"manager",7)`) and calls core helpers.
- Renamed → **`tauri_invoke_command_dispatch`** (SN_FORCE) + full comment. This removes a false command name from the 113 set → **112 genuinely-named handlers** pre-this-pass.

## 2. Precisely named this pass (5) — win-native disambig, mac cross-checked

Each handler `lea`'s its own command name (ground truth); the shared dispatcher `0x140194810` is the 2nd xref and is excluded → unique handler. All SN_FORCE renamed, moved into dirtree, cross-platform comment appended, idb_save ok.

| win handler VA | command | own-name lea @ | dirtree | mac cross-check |
|---|---|---|---|---|
| 0x140170790 | resolve_voice_vocabulary_app_info | 0x14017080d | /codexmate_lib/commands/voice | mac commands::voice @0x100694140 |
| 0x140170d00 | upsert_voice_vocabulary_app_scope | 0x140170d7f | /codexmate_lib/commands/voice | mac commands::voice @0x100694770 |
| 0x140171760 | remove_voice_vocabulary_app_scope | 0x1401717df | /codexmate_lib/commands/voice | mac commands::voice @0x100693cd0 |
| 0x140182c20 | set_voice_trigger_listener_suppressed | 0x140182c9d | /codexmate_lib/commands/voice | mac commands::voice (fn renamed; win self-lea = ground truth) |
| 0x140cbe6b0 | confirm_pending_auto_switch_and_restart_codex | 0x140cbe778 | /codexmate_lib/commands/accounts | mac commands::accounts/auto_switch (fn renamed; win self-lea = ground truth) |

## 3. Genuine ceiling (14) — inlined into the dispatcher, no separate function exists

These command bodies are compiled as **inlined jump-table cases inside `0x140194810`** (win compiler inlined the command wrappers; mac keeps them as separate `commands::*` symbols). No separately-addressable function to `set_name` — this is a real strip+inline ceiling, not "needs mac symbols". Case sites annotated in-IDB where the dispatcher `lea`'s a standalone string.

- **3 with standalone-string case (annotated in dispatcher)**: `clean` @0x1401948ef · `get_codex_router_auth_readiness` @0x14019521a · `open_path` @0x1401977be.
- **11 pool-merged** (command name exists only in the concatenated pool, matched by SIMD `pcmpeqb` — no standalone string, `nstr=0`): apply_custom_instruction, clear_custom_instruction_block, load_custom_instruction_state, preview_custom_instruction_apply, rollback_custom_instruction, cancel_chatgpt_oauth_login, cancel_voice_trigger_capture, check_update_installability, default_debug_bundle_file_name, get_image_compat, get_system_info.

Tried & failed disambiguation for these 14: (a) command-string self-lea → none (inlined); (b) `.pdata` split → single function, no sub-boundaries; (c) tauri registration name→fnptr table → no such table (dispatcher inlines, no fn-ptr array); (d) mac string-signature → most are platform-divergent (e.g. get_system_info uses macOS `sw_vers`, resolve app-info uses `Info.plist`) so mac internals don't string-match win. Genuine ceiling; documented at case granularity inside the dispatcher.

## 4. Post-pass win command-handler tally (honest)

- 112 handlers named by own-name lea (prior 113 minus corrected open_path) + **5 named this pass = 117 / 131** precisely named as separate functions.
- 1 dispatcher correctly identified & named (`tauri_invoke_command_dispatch`).
- **14 / 131 = genuine strip+inline ceiling** (inlined dispatcher cases, no separate fn; case sites annotated).
- 117 + 14 = 131 ✓. No stranded, no mis-name remaining.

## 5. mac↔win serialize struct cross-check (serialize_3/4 direction · serialize_5/10/12 identity)

Win `serialize_N` are stripped serde monomorphizations. Field-name pools read from each fn; direction verified (no deserialize markers `missing field`/`struct X with N elements`/`invalid length` referenced directly → all are genuine `serde::ser::Serialize::serialize`). Struct identity via mac field-set cross-check (mac `core::models::_<impl serde::ser::Serialize for core::models::X>`).

| win fn | VA | direction | struct identity | conf | action |
|---|---|---|---|---|---|
| serialize_3 | 0x140806d70 | Serialize ✓ | probable core::models::AccountImportPreviewPayload (attempted/succeeded/failed/items/sourcePath/lastScanAt) | MED | comment only (direction was the ask for 3/4) |
| serialize_4 | 0x1408274d0 | Serialize ✓ | probable core::models::CoreSnapshotPayload (usageStatus/usageLastError/refreshReport/usedPercent/remainingPercent) | LOW-MED | comment only |
| serialize_5 | 0x14092b8c0 | Serialize ✓ | core::models::VoiceWorkspacePayload (vocabularyApps/processingModes/templates/history) | HIGH | renamed `VoiceWorkspacePayload__serialize` |
| serialize_10 | 0x140aa9980 | Serialize ✓ | core::models::SkillRemovePayload (removedSkillID/restoredSkill/rollbackBackup; mac 277≈win 284) | HIGH | renamed `SkillRemovePayload__serialize` |
| serialize_12 | 0x140aaa880 | Serialize ✓ | core::models::DiagnoseSessionState (latestRolloutFound/usageAttemptCount/usageSuccessCount; mac 269≈win 277) | MED-HIGH | renamed `DiagnoseSessionState__serialize` |

serialize_3/4 exact struct not renamed (medium/low confidence on exact struct — honest hold; direction is confirmed, which was the stated ask).

## 6. idb_save + grounded verification

- win `idb_save` → `{"ok":true,"path":"E:\\binary\\AiMaMi.1.2.3 win64.exe.i64"}`.
- Re-read all 9 mutated functions: names match, comments present, dirtree paths correct
  (voice folder now holds the 4 voice-vocab/trigger handlers; accounts holds confirm_...; models holds 3 serialize).
- Dispatcher case comments (clean / get_codex_router_auth_readiness / open_path) present. 0 stranded.

*Evidence SOT = win IDB (E:\binary) + mac IDB (raw/binary). This file is summary/pointer only.*
