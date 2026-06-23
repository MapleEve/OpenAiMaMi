# evidence.md — apply_custom_instruction (macOS ARM64 1.1.1)

**session**: wf-aimami111-delta-20260616
**machine**: <本地机器>
**produced_at**: 2026-06-16
**binary**: AiMaMi 1.1.1 universal (macOS ARM64 slice)
**idb**: <来源位置>/raw/binary/AiMaMi-1.1.1-idb
**imagebase**: 0x100000000
**source_binary_sha256**: (1.1.1 macos universal — sha12 prefix from INDEX entry)
**gate_candidate**: migrated_no_behavior_diff (逆向分析 absence consistent with 1.0.9 baseline)

---

## ## Confirmed

1. **Frontend invoke present**: `apply_custom_instruction` invoke confirmed in 1.1.1 macOS frontend CCF (`frontend-control-flow.jsonl`). Terminal call: `ne("apply_custom_instruction",{content:t.content,templateCode:t.templateCode,templateTitle:t.templateTitle,source:t.source})` at assets/index-DdcCOEJG.js line 86 col 30299.
2. **argKeys confirmed**: `["content", "templateCode", "templateTitle", "source"]` — four fields, all positional camelCase JSON keys, extracted from minified-static terminal call snippet.
3. **Frontend wrapper**: `applyCustomInstruction` function in assets/index-DdcCOEJG.js line 86. Kind: `tauriInvokeWrapper`. No guards recorded.
4. **逆向分析 string pool absence confirmed**: `find_regex("apply_custom_instruction")` → 0 matches. `find_regex("templateCode")` → 0 matches. `find_regex("templateTitle")` → 0 matches. `find_regex("template_code")` → 0 matches. `find_regex("custom.instruction")` → 1 match at 0x1011514d1 (path blob, not command string — see below).
5. **Path blob at 0x1011514d1**: Contains substring `codexmatecustom-instructions` as part of a filesystem path blob (`CODEX_HOME.codex.sqlite...codexmatecustom-instructions...`). This is a *directory path name*, not a Tauri command registration string. Caller: `codexmate_lib::platform::paths::CodexPaths::resolve_codex_home::h2e80808900649874` — pure path resolution, no command handler.
6. **No `codexmate_lib::commands::custom_instructions` module**: `func_query(name_regex=".*codexmate_lib.*commands.*", count=250)` — complete enumeration of all `codexmate_lib::commands::` symbols in IDB. Modules present: `sessions`, `account_io`, `system`, `accounts`, `relay`, `tray_menu`, `hotspot`, `deeplink`, `analytics`. No `custom_instructions` module found.
7. **CustomInstructionProtectionState serde model present**: One symbol found — `codexmate_lib::core::models::_::<impl serde::de::Deserialize for codexmate_lib::core::models::CustomInstructionProtectionState>::deserialize::__FieldVisitor as serde::de::Visitor>::expecting` at 0x1005615e0 (ICF-merged, size=0x19). This is a serde Deserialize visitor, referenced by vtable data entries only (14 data xrefs at 0x1013ba6e8–0x1013bffe8). Not a Tauri command handler.
8. **1.0.9 macOS baseline 逆向分析 absence confirmed**: `internal-reverse/audits/macos-1.0.9-custom-instructions/logic/FULL-CHAIN-109.md` records `apply_custom_instruction: frontend wrapper present; same-platform backend command string/owner absent; accepted substitute via 逆向分析 absence.`
9. **1.0.9 gate accepted_substitute**: `same_platform_ida_backend_absence_for_frontend_orphan_command`, `readyToImplement=True`, `status=PASS`. This is the authoritative baseline.
10. **version-delta owner-map-111.jsonl entry**: `{"command":"apply_custom_instruction","status":"shared","module":null,"owner_va":null,"owner_symbol":null,"note":"not_yet_queried"}` — status=`shared` reflects frontend-only presence; `not_yet_queried` for backend VA now resolved: no VA exists.

---

## ## Inferred

1. **No backend Rust handler in macOS 1.1.1**: All evidence channels (string pool, func_query, module enumeration, xrefs) converge on the same conclusion: `apply_custom_instruction` has no `#[tauri::command]` Rust handler in the macOS ARM64 binary.
2. **custom-instructions logic is frontend-local or Codex-sidecar driven**: The `codexmatecustom-instructions` directory path in the binary confirms the feature writes/reads data locally. The absence of a backend handler suggests the command either: (a) invokes Codex-side behavior indirectly via the relay/proxy channel, or (b) is handled by a frontend-local mechanism (direct file I/O from JS via Tauri FS plugin, or delegated to a different registered command).
3. **CustomInstructionProtectionState core model exists**: The serde model is present in `codexmate_lib::core::models`, indicating the feature has some backend-side data model, but it is deserialized from disk/state (not from an IPC command payload in this handler).
4. **Command set unchanged from 1.0.9**: The 5-command set (`load_custom_instruction_state`, `preview_custom_instruction_apply`, `apply_custom_instruction`, `clear_custom_instruction_block`, `rollback_custom_instruction`) is identical between 1.0.9 and 1.1.1 in the frontend CCF. No new commands added, none removed.
5. **migrated_no_behavior_diff classification**: Given 1.0.9 baseline gate was `accepted_substitute=same_platform_ida_backend_absence_for_frontend_orphan_command / readyToImplement=True`, and 1.1.1 shows the same 逆向分析 absence pattern, this command classifies as `migrated_no_behavior_diff` — the 1.0.9 accepted substitute carries over.
6. **argKeys delta from 1.0.9**: 1.0.9 gate-report does not record explicit argKeys per command (blanket accepted_substitute). 1.1.1 CCF confirms `["content","templateCode","templateTitle","source"]` for `apply_custom_instruction`. This is new forward-looking evidence (not a behavior change, just CCF now explicit).

---

## ## Unknown

1. **What `apply_custom_instruction` actually does at runtime**: Without a backend handler, the invoke may: return a Tauri "command not found" error silently handled by the frontend; be proxied via relay to Codex sidecar; or delegate to Tauri FS plugin via a different mechanism. No runtime trace available.
2. **Whether `CustomInstructionProtectionState` is loaded via `load_custom_instruction_state`**: The serde model likely appears in the `load_custom_instruction_state` response payload, but the response DTO for that command was not decompiled in this session (also 逆向分析 absent).
3. **Windows-platform backend**: Windows 1.0.9 gate-report records `accepted_substitute` as "Current C5 custom-instructions chain is live product/local behavior; upstream 1.0.9 backend owner parity is absent substitute." This does not confirm Windows 1.1.1 presence — Windows delta is tracked separately.
4. **Relay/proxy routing path**: If `apply_custom_instruction` is proxied via the relay transport, the actual backend logic lives in Codex sidecar, not in this binary. This is outside 逆向分析-reversible scope.
5. **`content` field type constraints**: Whether `content` is plain string, structured JSON, or Base64 is not confirmed from binary (no DTO struct visible). Frontend snippet shows `t.content` passed directly.
6. **Error envelope on apply failure**: No error path visible — backend absent means error handling is either frontend-side or Tauri default ("unknown command").
7. **`source` field enum values**: The `source` argKey is present but its allowed values (e.g. "template", "manual", "import") are not confirmed from binary evidence.
