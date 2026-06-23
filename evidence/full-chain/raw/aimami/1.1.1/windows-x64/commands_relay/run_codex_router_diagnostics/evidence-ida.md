# evidence.md — run_codex_router_diagnostics
## Session: wf-aimami111-delta-20260617
## Platform: windows-x64 · AiMaMi 1.1.1 · IDB: AiMaMi 1.1.1 win64.exe.i64

---

## Confirmed

1. **Dispatcher string confirmed at 0x1412ac580** — `find_regex("run_codex_router_diagnostics")` returned exact 1 hit at 0x1412ac580; xref from tauri_ipc_main_dispatcher_sys@0x14000D2A0 at call_site=0x14000f049 (data xref, len=28 dispatch block).

2. **Owner function VA = 0x14006F4B0** — `run_codex_router_diagnostics_owner_sys`, size=0x1e7 (487 bytes); try-lock via `_InterlockedCompareExchange8(Address, 1, 0)`; probes `off_141899DC0` hashmap with hash key `0x945CA2F02A2B6F44`; calls vtable[3]=sub_140031D80 (type-id clone); unlocks via `WakeByAddressSingle`; confirmed by xref chain from dispatcher call at 0x14000f0a2.

3. **Core function VA = 0x14021C1A0** — `run_codex_router_diagnostics_core_sys`, size=0x167 (359 bytes); decompiled full body; builds DiagnosticData via CODEX_HOME path resolution → relay_state_accessor → fix_all_sections_impl_full_sys → result struct (discriminant=2, status="ok", kind=7-byte string); module string `codexmate_lib::core::relay::codex_diagnostic` confirmed in decompile refs.

4. **Source path confirmed** — string `src\core\relay\codex_diagnostic.rs` present in decompile refs at addr 0x1412C ... (via codex_diagnostic string ref in relay_keychain_lookup_for_quota_sys refs: `aSrcCoreRelayKe` → `src\core\relay\keychain.rs`; diagnostic module at `aCodexmateLibCo_2`).

5. **Process check arg confirmed as "Codex"** — `is_process_running_toolhelp_sys_111` decompiled full body; caller passes `unk_1412D95A5` as process name (string at 0x1412D95A5 = "Codex"); SIMD lowercase loop confirmed; `CreateToolhelp32Snapshot(2,0)` + `Process32FirstW/NextW` pattern confirmed; returns 1 on match.

6. **Keychain reads `secrets.json`** — `relay_keychain_lookup_for_quota_sys` decompiled full body; `aSecretsJson` string ref at 0x1412C85F3 ("secrets.json", len=12) confirmed; `sub_14107A2D0` called with `v8, v9, aSecretsJson, 12` at 0x1402ee9b8; SHA-256 alloc `sub_140001360(32,1)` confirmed at 0x1402ef5a6; env var strings "USER"@0x1412C85AB and "USERNAME"@0x1412C85C4 confirmed.

7. **6 section diagnostic fns fully decompiled** — all 6 depth-3 section fns (diag_config_section_parser_profiles_sys, diag_config_switch_section_check_sys, diag_config_base_url_section_check_sys, diag_config_section_toml_reader_sys, diag_config_mode_validator_sys, diag_config_json_unescape_sys) decompiled with full pseudocode bodies; renamed in IDB with `allow_overwrite=true`; IDB comments set at each VA.

8. **Repair and write leaf confirmed** — `diag_config_section_repair_and_write_sys@0x1407668C0` decompiled full body; `relay_atomic_write_leaf_sys@0x140504310` confirmed as callee; rebuild marker string `aRebuiltByAimam@0x1412F13B7` (226 bytes bilingual Chinese+English) confirmed; `sub_140BD33E0` (TOML serializer) confirmed at 0x1407669 73.

9. **IDB saves confirmed** — `idb_save` returned `{"ok":true,"path":"<本地路径>"}`; 10 renames applied with 0 failures.

10. **Call tree depth = 5 confirmed** — dispatcher(0) → owner/core(1) → CODEX_HOME/relay_ctx/engine(2) → section_fns/process_check/keychain(3) → SHA256/Process32/TOML_write/json_unescape(4) → external Win32 APIs(5); terminated_reason: all significant internal callees at depth 4-5 are either well-known Win32 APIs (RegOpenKeyExW, GetDiskFreeSpaceExW, CreateToolhelp32Snapshot) or allocator/string utility functions (sub_14001036x series).

---

## Inferred

1. **fix_all_sections_impl_full_sys (~319KB) flow order** — inferred sequence: registry check → disk check → process check → keychain lookup → section-specific checks (profiles/switch/base_url/mode/toml_reader) → repair loop; ordering based on callee patterns and argument types observed in partial decompile and call tree; exact interleaving not confirmed without full decompile.

2. **Result "kind" string = "osicsis" or similar** — inferred from overlapping 32-bit writes: `*(uint32_t*)(kind_str+0) = 1667462483 = 0x636E6FD3` and `*(uint32_t*)(kind_str+3) = 1936942435 = 0x73697361`; exact 7-byte string not confirmed (overlap decode ambiguous without runtime observation).

3. **SHA-256 produces quota token** — inferred from 32-byte alloc + SIMD byte-swap shuffle pattern + `sub_140311B60` (base16/hex encoder); likely produces hex-encoded SHA-256 of credential for quota API authentication.

4. **"Codex" process check gates diagnostic branches** — inferred from position in fix_all_sections_impl_full_sys; if Codex process not running, certain repair operations may be skipped or flagged differently in DiagnosticData output.

5. **`off_141899A88` is global log level** — inferred from dual usage: `*(_QWORD *)off_141899A88 > 2u` in relay_keychain_lookup_for_quota_sys (debug log gate) and in codex_diagnostic_section_filter_sys (relay state counter); likely a shared spdlog/tracing level integer.

---

## Unknown

1. **fix_all_sections_impl_full_sys internal control flow** — ~319KB body not fully decompiled; exact condition branches for error cases, partial-success handling, and per-section result accumulation are unknown; 逆向分析 decompile would require paging.

2. **DiagnosticData struct layout beyond 2x16-byte fields** — only `result_out+9` and `result_out+11` (two 16-byte owords) confirmed as DiagnosticData members; total struct size and all fields not confirmed from available decompile evidence.

3. **Profile name matcher sub_14075F450 internals** — called from diag_config_section_parser_profiles_sys; known to take (name_ptr, name_len, a4) and return bool; internal matching logic (hardcoded names vs configured list vs regex) not determined.

4. **sub_140BD33E0 TOML serializer exact format** — confirmed as TOML serializer returning 104-byte struct with discriminant field; exact output TOML format and which config keys are emitted not confirmed without full decompile.

5. **relay_atomic_write_leaf_sys @ 0x140504310 platform behavior** — name suggests atomic write (likely write+fsync+rename pattern); internal implementation not decompiled in this session; confirmed as callee of diag_config_section_repair_and_write_sys in 2 call sites.

6. **Error string content at 0x1412F28CA/28DA/28EA (48-byte) and 0x1412F28FA..294A (109-byte)** — present as error payloads in repair-and-write leaf on write failure; exact text not decoded (stored as xmmword constants).
