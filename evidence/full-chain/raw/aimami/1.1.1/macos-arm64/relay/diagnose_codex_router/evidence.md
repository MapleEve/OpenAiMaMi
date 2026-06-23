# evidence.md — diagnose_codex_router (AiMaMi 1.1.1 macOS ARM64)

**Session**: <审计会话>
**Machine**: <本地机器>
**Date**: 2026-06-17
**Binary**: AiMaMi 1.1.1 universal (macOS ARM64)
**Binary SHA256**: f34ff82910539964e24e86b35e95ea85b42af7d7dccf8e979914a2c21bd8cfeb
**IDB**: AiMaMi.i64 (hexrays_ready=true, uptime=51764s at session start)
**Module**: codexmate_lib::commands::relay
**is_upstream**: false (standalone IPC command, not routed through upstream dispatcher)
**Gate tier**: strictImplementationUse_candidate (dim1_migrated+dim2+dim3+dim4+dim5_mac; dim5_win+dim6 Unknown)

---

## ## Confirmed

1. **Owner VA**: `0x1005e9e00` — `codexmate_lib::commands::relay::diagnose_codex_router::h685f014e92d7bde3`, size=0xd69 (3433B), synchronous, HexRays-clean decompile.

2. **IPC registration**: IPC command name string `diagnose_codex_router` (21 bytes, ASCII) at `0x1011482FF` confirmed via `get_bytes`. Dispatch call-site at `0x100319553` inside IPC closure `0x100319440` (`codexmate_lib::run::{{closure}}::{{closure}}::hbec45e0c4863fd67`, size=804B). Single xref from `0x100307273`. Command name blob at `0x1011482FF` contains: `diagnose_codex_router` + `run_codex_router_diagnostics` + additional commands in packed string pool.

3. **Request DTO**: `argKeys=[]`. Zero arguments. Command reads state from `tauri::state::StateManager::try_get` (gets `RelayManager` via `StateManager`). No deserialized input fields.

4. **Response DTO**: `CoreEnvelope<DiagnoseCodexRouterResult>`. Response struct is 0x190 bytes (memcpy size confirmed at final `memcpy(v87, v57, 0x190u)` in owner). Contains fields: `config_toml_has_router` (bool, dim=v118), `catalog_path_validity` (bool, dim=v117), `has_migration` (bool, dim=v121), `stale_reason` (Option<String>), `catalog_path` (String), `user_profile` (Option<String>), `active_providers_count` (usize, dim=v105), `total_providers_count` (usize, dim=v106), `port` (u16, dim=v53=v40). Error sentinel: `0x8000000000000000`.

5. **6 diagnostic state strings (byte-confirmed)**:
   - `0x101154405` (124B): `未启用智能路由：Codex 桌面应用走原生官方通道；CLI 用户可用 codex --profile aimami_relay 走中转。`
   - `0x101154481` (71B): `已启用但本地代理未运行：请重启 AiMaMi 让代理拉起。`
   - `0x1011544C8` (101B): `已启用但 catalog 缺失：可能写入失败，请检查 ~/.codex/codexmate/relay 目录权限。`
   - `0x10115452D` (153B): `已启用但 ~/.codex/config.toml 未写入 model_catalog_json：Codex GUI 无法读取中转模型完整能力，请关闭后重新启用智能路由。`
   - `0x1011545C6` (148B): `已启用但 ~/.codex/config.toml 未写入 model_provider router：Codex 新版不会进入 AiMaMi router，请关闭后重新启用智能路由。`
   - `0x10115465A` (143B): `已启用但当前没有任何已启用的中转 Provider：Codex 菜单只会看到官方模型，请在 AiMaMi 中启用至少一个中转。`

6. **aimami XOR check**: `*v57[1] ^ 0x616D6961 | *(v57[1]+4) ^ 0x3169` checks first 6 bytes of `model_provider` value for "aimami" + "1i" pattern. Matches 1.0.9 behavior (same XOR constants confirmed).

7. **Config reads (confirmed)**:
   - `~/.codex/config.toml` via `CodexPaths::resolve_codex_home` + `CodexPaths::from_home` + `std::fs::read_to_string`
   - TOML keys read: `model_provider` (len=14), `model_catalog_json` (len=18), `openai_base_url` (len=15), `profile` (len=7) via `read_top_level_string_value`
   - `codex_router_catalog.json` existence checked via `std::sys::fs::metadata`
   - Config stale reason computed via `RelayManager::codex_config_stale_reason` (full body decompiled, reads config+snapshot+relay_ids_in_config)
   - `has_router_thread_migration`: checks `~/.codex/codexmate/relay/thread-router-migrations/current.json` existence via `std::sys::fs::metadata`
   - `user_top_level_profile`: reads profile file via TOML deserialization, extracts profile name via `memcmp` against `&unk_10115A364` (profile key bytes)

8. **Side effects**: READ-ONLY. No writes, no spawns, no HTTP calls, no keychain, no mutex at command level. All side effects are FS reads + RelayManager in-memory state query.

9. **Call tree (depth 1-2, terminated at fs/state/std leaves)**:

| depth | VA | symbol | role | terminated_reason |
|---|---|---|---|---|
| 0 | 0x1005e9e00 | diagnose_codex_router | tauri_cmd_owner | — |
| 1 | 0x1005e0330 | RelayManager::snapshot | relay_snapshot | internal_leaf (further decompiled in 1.0.9) |
| 1 | 0x1005d9740 | RelayManager::codex_config_stale_reason | stale_reason_computer | internal — decompiled this session |
| 1 | 0x10075f040 | codex_writer::user_top_level_profile | profile_reader | internal — decompiled this session |
| 1 | 0x1007150e0 | codex_thread_visibility::has_router_thread_migration | migration_checker | fs_metadata_leaf |
| 1 | 0x100558430 | CodexPaths::resolve_codex_home | codex_home_resolver | platform_leaf |
| 1 | 0x100558e60 | CodexPaths::from_home | codexpaths_builder | platform_leaf |
| 1 | 0x100f25740 | std::fs::read_to_string::inner | config_file_reader | fs_read_leaf |
| 1 | 0x100761f70 | codex_writer::read_top_level_string_value | toml_key_reader | internal_leaf |
| 1 | 0x100f33a00 | std::path::Path::_join | path_joiner | std_library_leaf |
| 1 | 0x100f2b980 | std::sys::fs::metadata | catalog_exists_check | fs_metadata_leaf |
| 1 | 0x100556a30 | CoreEnvelope::ok | response_wrapper | library_leaf |
| 2 | 0x1005e0330 | RelayManager::snapshot | relay_snapshot | internal (re-called from stale_reason) |

10. **Delta vs 1.0.9**: 1.0.9 owner was `0x1001e0d70` (module=system, size=0x140B). 1.1.1 owner is `0x1005e9e00` (module=commands::relay, size=0xd69=3433B). Module reclassified from `system` to `commands::relay`. Size decreased (0x140B=5131B → 0xd69=3433B), likely due to extraction of sub-logic into helper functions. Core diagnostic logic preserved: same XOR constants, same 6 state strings, same config reads, same is_upstream=false.

---

## ## Inferred

1. **DiagnoseCodexRouterResult struct layout** (inferred from owner assembly, ~0x190 bytes total):
   - `stale_reason: Option<String>` (3×QWORD at v98 position)
   - `config_toml_has_model_provider_router: bool` (v118)
   - `config_toml_has_model_catalog_json: bool` (v117)
   - `catalog_path_valid: bool` (dim from path comparison result)
   - `has_migration: bool` (v121 = has_router_thread_migration return)
   - `catalog_path: Option<String>` (path string from fs::metadata check)
   - `user_profile: Option<String>` (from user_top_level_profile, 3 state variants: Ok(Some(String)), Ok(None), Err)
   - `active_providers_count: usize` (v105/v106 displayed via fmt::Display)
   - `port: u16` (v53/v40, fmt::Display u16)
   - Wrapping `format_inner` calls produce the diagnostic message string

2. **Diagnostic state machine** (inferred from branch conditions in owner):
   - State 0 (not enabled, 124B string): `v56==0` (no snapshot/providers)
   - State 1 (enabled, proxy not running, 71B string): `v56==1 && v54==0 && v52[0]==0x8000...||!v52[2]`
   - State 2 (enabled, catalog missing, 101B string): catalog existence check fails
   - State 3 (enabled, config.toml missing model_catalog_json, 153B string): `!v117`
   - State 4 (enabled, config.toml missing model_provider router, 148B string): `!v118`
   - State 5 (enabled, no active providers, 143B string): `!v105`
   - State 6 (healthy, format_inner with counts+port): all checks pass

3. **codex_config_stale_reason return**: `Option<String>` — `0x8000000000000000` = None (no stale reason); otherwise contains a stale-reason message string. Reads config + snapshot, checks for known stale patterns including profile name via `relay_ids_in_config`.

4. **has_router_thread_migration** path: `~/.codex/codexmate/relay/thread-router-migrations/current.json` (string confirmed at `0x1011582C3`+`0x101158513`). Returns `bool`: exists → true (migration present), not exists → false.

5. **user_top_level_profile** reads `~/.codex/config.toml` (TOML via `toml_edit::de::Deserializer`), strips managed blocks, trims, parses `profile` key, returns `Option<String>`.

---

## ## Unknown

1. **Exact DiagnoseCodexRouterResult struct field order/padding** — inferred from memcpy(0x190) but not decoded from drop_in_place vtable; exact JSON serialization field names not confirmed from binary strings.

2. **dim5_win behavior** — Windows platform not reversed this session; Windows 1.0.9 data available but 1.1.1 win not done.

3. **dim6 test/acceptance mapping** — 内部构建 implementation side scope not assessed.

4. **Exact stale-reason message strings** — `codex_config_stale_reason` produces dynamic formatted strings via `format_inner`; ~8 rodata string templates referenced but not all byte-decoded.

5. **relay_ids_in_config callees** — `0x1005e0f30` called inside `codex_config_stale_reason`; decompile available on demand but not done this session.

6. **Format string templates** — `unk_1010B7A0A`, `unk_1010B78CD`, `unk_1010B7969`, `unk_1010B7915` in owner are format templates for the healthy-state message; bytes not decoded.

7. **Port value source** — `v53`/`v40` (u16 in format) sourced from RelaySnapshot field; exact struct offset not pinned this session.

8. **Frontend CCF dim1** — frontend call-site in relay-page JS confirmed in 1.0.9 (`relay-page-CljGSoid.js L32:44819`); 1.1.1 frontend not freshly queried this session; dim1 migrated from 1.0.9 confirmed baseline.

---

## Fake-wall check

- genuine_ceiling: false
- real_body_found: true
- block_decomposed: false (single decompile call returned complete pseudocode, no chunking needed)
- recovery_attempts: not_needed (no walls encountered; all 8 taxonomy items excluded):
  1. drop_in_place≠async body: synchronous function, no poll harness, no `_Future`/`_State` types — EXCLUDED
  2. architecture_only/budget rule: size=0xd69=3433B, well within budget, complete decompile — EXCLUDED
  3. async_decompile_failed: HexRays returned complete pseudocode — EXCLUDED
  4. wrong_VA: IPC string `diagnose_codex_router`@0x1011482FF → sole dispatch at 0x100319553 → direct call 0x1005e9e00 — EXCLUDED
  5. vtable: direct call, not dynamic dispatch — EXCLUDED
  6. HTTP-terminal: zero HTTP calls, all FS reads — EXCLUDED
  7. library_internals: all callees are codexmate_lib internal or std/alloc — EXCLUDED
  8. body_too_large: 3433B, no basic_blocks chunking needed — EXCLUDED

---

## Four-angle completeness

- **A (func_query)**: `.*diagnose_codex_router.*` → 1 hit (0x1005e9e00 only) — PASS
- **B (string pool)**: find_regex "diagnose_codex_router" → 1 hit (IPC blob at 0x1011482FF, `diagnose_codex_router` 21B ASCII confirmed via get_bytes) — PASS
- **C (IPC registration)**: dispatcher call at 0x100319553 inside 0x100319440; IPC blob at 0x1011482FF; `tauri::state::StateManager::try_get` extracts RelayManager; `tauri::ipc::InvokeResolver::return_result` handles response — PASS
- **D (owner-map + INDEX)**: owner-map-111 status=shared → DONE this session; INDEX has no prior 1.1.1 diagnose_codex_router entry; ADDITIVE, no collision — PASS

---

## 逆向分析 annotations

- `append_comments` done:
  - 0x1005e9e00 (func scope): "A-level owner for diagnose_codex_router; range 0x1005e9e00-0x1005eabe9; sha f34ff82910539964; session <审计会话>; not gate promotion"
  - 0x100319553 (line scope): "IPC dispatch call-site for diagnose_codex_router cmd; string@0x1011482FF; closure@0x100319440; session <审计会话>"
  - 0x1011482ff (line scope): "IPC command name blob: diagnose_codex_router(21B)+run_codex_router_diagnostics(25B)+...; session <审计会话>"

---

## ACCEPTANCE (dim6 — <审计会话>)

**Gate**: strictImplementationUse → acceptance-draft（dim5 win Unknown 唯一缺口；dim1-4 全闭合）

### happy_path
- 无参数；返回 CoreEnvelope<DiagnoseCodexRouterResult>（struct 400 bytes），含 10 个字段
- state 6（健康）时 diagnostic_message 为 format_inner 格式化字符串（active_count+total_count+port）
- 纯只读：config.toml + catalog.json + migration current.json + RelayManager 内存状态

### diagnostic_state_mapping（6 条精确字符串，VA 已确认）
- state 0: "未启用智能路由…" (VA 0x101154405, 124B)
- state 1: "已启用但本地代理未运行…" (VA 0x101154481, 71B)
- state 2: "已启用但 catalog 缺失…" (VA 0x1011544C8, 101B)
- state 3: "已启用但…未写入 model_catalog_json…" (VA 0x10115452D, 153B)
- state 4: "已启用但…未写入 model_provider router…" (VA 0x1011545C6, 148B)
- state 5: "已启用但当前没有任何已启用的中转 Provider…" (VA 0x10115465A, 143B)

### boundary/error
- config.toml read 失败 → v117=0, v118=0 → 触发 state 3 或 4
- StateManager::try_get 失败 → CoreError sentinel 0x8000000000000000

### side_effect_asserts
- 调用前后所有文件内容不变；无 HTTP；无进程 spawn；每次从磁盘重读 config.toml

### test_mapping
- unit: 6 个状态分支（mocked RelayManager + mocked fs）；stale_reason Some/None；user_profile Some/None
- e2e: XOR check 路径（model_provider 字节匹配）+ catalog.json metadata 检测

### dim6_basis
interfaces/diagnose_codex_router_interface.json diagnostic_states（VA + 文本）; evidence.md Side effects: READ-ONLY confirmed; manifest.json diagnostic_strings
