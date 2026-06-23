# evidence.md — set_mcp_server_enabled (AiMaMi 1.1.1 macos-arm64)

**session**: <审计会话>
**machine**: <本地机器>
**produced_at**: 2026-06-17
**binary_sha256**: f34ff82910539964e24e86b35e95ea85b42af7d7dccf8e979914a2c21bd8cfeb
**module**: mcp
**command**: set_mcp_server_enabled
**delta_count**: 31/35 mac delta

---

## ## Confirmed

1. **owner VA**: `0x10072bb90` — `codexmate_lib::commands::mcp::set_mcp_server_enabled::ha2f28bcc417a91a5` (size=1661B, has_type=true); decompile succeeded (1661B pseudocode)
2. **core impl VA**: `0x1005a3760` — `codexmate_lib::core::mcp::set_mcp_server_enabled::h7968daf1798b61a2` (size=653B, has_type=true); decompile succeeded
3. **IPC dispatcher VA**: `0x100312de0` — `codexmate_lib::run::{{closure}}::{{closure}}::h7764831ff1bebf82` (size=0x5c4); sole xref to owner; decompile succeeded
4. **argKey[0] = "name"** (4B) — extracted from dispatcher `v26[2]="namekillplanauth..."@0x10114a0d8, v26[3]=4`; confirmed string "name" (4B prefix match)
5. **argKey[1] = "enabled"** (7B) — extracted from dispatcher `v26[2]=&unk_1011483c3, v26[3]=7`; byte-decode: 0x65 0x6e 0x61 0x62 0x6c 0x65 0x64 = "enabled" ✓
6. **argKeys = ["name", "enabled"]** — confirmed dual-source: dispatcher decompile + string_pool packed blob @0x101147e82
7. **core logic**: load_mcp_servers → memcmp name match (stride=224B) → McpServerSummary::clone → upsert_mcp_server (with enabled flag updated) → save_config_text → write_atomic
8. **terminal leaf**: `core::relay::atomic_write::write_atomic` @0x10041e960 — FS durable write (same as remove_mcp_server/reorder_relay_providers, confirmed in callees chain)
9. **McpServerSummary stride = 224B** — confirmed from `v14 += 224` increment in core impl + dealloc `224 * v44` in cmd_handler
10. **error path**: server not found → format string "MCP server not found: " (22B @0x1010b6a09) → CoreError → CoreEnvelope err
11. **response type**: `CoreEnvelope<Vec<McpServerSummary>>` — cmd_handler load_mcp_servers on success path returns updated server list; ok discriminant 0x8000000000000000
12. **threading model**: sync mutex (OnceBox + Mutex::lock/unlock); no async/spawn; no HTTP; pure TOML config file mutation
13. **IDB comments appended**: ×3 (0x10072bb90 owner, 0x1005a3760 core impl, 0x100312de0 dispatcher); "not gate promotion"; session <审计会话>
14. **1.0.9 baseline VA**: 0x10015d360 (macos) — VA drifted in 1.1.1 to 0x10072bb90; behavioral contract identical (argKeys, threading, side-effect, response all unchanged)
15. **module归属**: `codexmate_lib::commands::mcp` (not commands::relay) — confirmed by demangled symbol; leaf dir = mcp/

---

## ## Inferred

1. **enabled flag position in McpServerSummary**: passed as a6 (bool byte) in cmd_handler call to core impl; `v35 = a6` in core; the clone + upsert path modifies the cloned summary's enabled field before upsert — inferred from a4/a5 (name ptr/len) + a6 (enabled bool) param layout in core decompile
2. **upsert_mcp_server mechanism**: load_config_text → parse_mcp_document → insert_mcp_block → save_config_text → write_atomic; TOML-based config file upsert identical to upsert_mcp_server command (shared codepath)
3. **load_mcp_servers on success path (cmd_handler)**: called twice — once in core::set_mcp_server_enabled (to find server), once in cmd_handler after successful upsert (to return updated list); second call provides response payload
4. **insert_mcp_block** (@0x10059def0): called from upsert_mcp_server; same sentinel comment guard as remove_mcp_server (`# <<< aimami-relay managed` block boundary respected)
5. **config.toml target path**: resolved from v59[9]/v59[10] (AppState path fields); same pattern as other mcp commands; absolute path from Tauri AppState
6. **error envelope format**: CoreError → `_$LT$codexmate_lib..core..models..CoreError$GT$::fmt` → string; returned as CoreEnvelope err (discriminant != 0x8000000000000000)
7. **not-found check**: memcmp loop over all server names; if no match after full loop → error "MCP server not found: <name>"
8. **Tauri state injection**: `StateManager::try_get` for AppState; same pattern as all other mcp commands; no env-based path fallback

---

## ## Unknown

1. **dim5_win**: Windows platform behavior — Windows IDB required for separate platform evidence; do not extrapolate from macOS
2. **dim6 test/acceptance mapping**: C5 implementation-side responsibility; not reverse producer work
3. **enabled flag byte offset in McpServerSummary struct**: exact field offset within 224B stride not byte-confirmed from 逆向分析 struct view (inferred from a6 param passing pattern)
4. **McpServerSummary full field layout**: stride=224B confirmed; exact field order/offsets beyond name(ptr+len@offset 8,16) not enumerated
5. **config.toml locking behavior**: no OS-level file lock observed; relies on Mutex::lock pattern; concurrent write behavior not confirmed
6. **upsert_mcp_server response on success**: cmd_handler discards direct upsert result; loads fresh server list via load_mcp_servers for response — post-write state re-read behavior; slight latency window not confirmed negligible
7. **Windows arg name for enabled**: Windows dispatcher may use different packed string blob ordering; cross-platform arg name parity accepted (same JS bundle, same CCF) but not byte-confirmed from Win IDB
8. **parse_mcp_document behavior for malformed TOML**: error propagation path through upsert_mcp_server not fully traced beyond first error return
9. **sort order of returned Vec<McpServerSummary>**: no explicit sort observed in set_mcp_server_enabled path (unlike merge_mystery_unlock_grants); order determined by load_mcp_servers parse order (TOML section order)
10. **accepted_unknown classification**: all unknowns are non-blocking (dim5_win/dim6 are standard per-leaf accepted unknowns; struct layout details non-blocking for implementation)
