# Evidence: set_codex_api_login — macOS arm64 — AiMaMi 1.1.1

**Session**: <审计会话>
**Machine**: <本地机器>
**Binary**: AiMaMi 1.1.1 universal.app/Contents/MacOS/AiMaMi (macos-arm64)
**IDB**: AiMaMi.i64 (IDA decompiler_ready=true, uptime 62205s at session start)
**Module**: commands_relay (codexmate_lib::commands::relay)
**Core owner VA**: 0x1005d3a10 (RelayManager::set_codex_api_login, size=0x1467)
**ICF status**: command wrapper ICF-folded into tauri IPC dispatch runtime (confirmed via drop_in_place chain + string pool); sole meaningful xref to owner is BlockingTask::poll@0x10059a6e0
**Delta**: new in 1.1.1 (not present in 1.0.9 baseline)

---

## ## Confirmed

1. **owner VA**: `RelayManager::set_codex_api_login` at `0x1005d3a10`, size=0x1467, has_type=true; decompile succeeded (1467 bytes, 126 locals)
2. **async dispatch model**: command handler runs via `tokio::runtime::blocking::task::BlockingTask::poll@0x10059a6e0`; `spawn_blocking` wraps synchronous `RelayManager::set_codex_api_login`; xref chain: tauri IPC dispatch → tokio harness → Core::poll → BlockingTask::poll → owner
3. **argKey "enabled"** (bool): confirmed dual-source — (a) string pool blob @0x1010e7311 byte sequence `set_codex_api_login` + immediately following `enabled`; (b) `CodexApiLoginTogglePayload` struct confirmed by drop_in_place symbol `core::ptr::drop_in_place<tauri::ipc::command::private::ResultFutureTag::future<CoreEnvelope<CodexApiLoginTogglePayload>,String,set_codex_api_login::{{closure}}>>`
4. **response type**: `CoreEnvelope<CodexApiLoginTogglePayload>` — on success `*v9 = 0x8000000000000000LL` (None-sentinel = Ok(unit/state)); contains final RelayState clone (memcpy 0x170 bytes)
5. **path — enable (enabled=true)**: acquires mutex on RelayManager.inner → `resolve_api_login_slots@0x1005d69e0` → `enable_virtual_login@0x100545110` → updates in-memory HashMap<String,Webview> slot (offset +381, +144..160) → `persist@0x1005dee20` + `sync_codex_config_with_outcome@0x1005daea0` → if `v118 (flag)=1` call `launch_codex_app_warning@0x1005e1460`; else emit "done\a" progress
6. **path — disable (enabled=false)**: acquires mutex → `virtual_auth::cleanup@0x1005468f0` (removes virtual-auth-marker.json + session file) → logs "writing_config" → `persist` + `sync_codex_config` → on success emit "done\a"
7. **path — already same state**: first `snapshot@0x1005e0330` then checks `BYTE5(v106[45]) == v7 (enabled)` → if equal: take second snapshot, clone RelayState, memcpy to out, return Ok immediately (no-op fast path)
8. **stop_codex_for_file_edit@0x10055c090**: called when `enabled=true` AND `BYTE4(v106[45])` flag set — stops Codex process via `request_codex_app_quit + kill_codex_processes_until_clear` before enabling; 5s timeout poll loop (50ms sleep)
9. **rollback path**: `rollback_api_login_enable@0x1005da990` called on persist failure during enable — runs `cleanup + persist(snapshot) + sync_codex_config` as rollback chain; logs error if rollback also fails
10. **progress events emitted**: closure `set_codex_api_login::{{closure}}@0x1005d4e80` emits string events via Tauri event dispatch (offset +40 vtable call): "stopping_codex" (14B), "restoring_auth" (14B), "writing_auth" (12B), "writing_config" (14B), "done\a" (4B = done + BEL char)
11. **virtual_auth::enable_virtual_login@0x100545110**: generates uuid::v4, builds serde_json BTreeMap with `auth_mode:"virtual"` + `OPENAI_API_KEY:<api_key_bytes>`, writes to Codex config path via `atomic_write@0x10041e960`; also writes `virtual-auth-marker.json` (chrono::Utc::now timestamp, enabled flag, api_key path)
12. **persist@0x1005dee20**: calls `compose_proxy_status@0x1005d5450` then `storage::save@0x1005e2c60`; on success acquires second mutex (inner.1), drops old RelayState, memmove new state in (+32 offset, 0x170 bytes)

---

## ## Inferred

1. **CodexApiLoginTogglePayload**: likely `{ enabled: bool, providers: Vec<(String, String, u64)> }` or similar — from `resolve_api_login_slots` returning Vec of (providerId:String, model:String, maxSlots:u64) capped at 5; stride of entries in slots Vec = 48B (6 qwords)
2. **slot cap = 5**: `resolve_api_login_slots` returns Err with 77B message string (@0x101153b01) when `v66 >= 5` (i.e., ≥5 slots found); this caps login slots to 5 providers
3. **session file path**: `enable_virtual_login` uses `a2[4]=ptr, a2[5]=len` as base path for file writes; `cleanup` passes `a2[4]/a2[5]` (from RelayManager paths) to `remove_file` — session file path is `paths.codex_config` (RelayPaths struct field +73/+74 = ptr/len pair)
4. **virtual-auth-marker.json schema**: `{ enabled: bool, timestamp_ms: i64, source: String (api_key path), ...serde entries from BTreeMap }` — decompile shows SerializeMap with keys at anon.283/284/285/286 (7B "enabled", 11B "timestamp_ms", 6B "source", 16B ?)
5. **in-memory HashMap guard**: `std::sync::poison::mutex::Mutex<HashMap<String,Webview>>::lock` at inner+16 used for webview event dispatch; webview slot count stored at +381 (byte), slots array at +144..+160 (ptr/len/cap)
6. **sync_codex_config_with_outcome@0x1005daea0**: checks `v66[188] == 1` (relay_enabled flag in snapshot) → if true and slots exist, calls `codex_catalog::resolve_api_slots@0x1006e8950` → `write_catalog@0x1006e8450`; if false/no-slots, calls `remove_catalog@0x1006e8800`; final step `apply_codex_state@0x10075ae20`
7. **resolve_api_login_slots semantics**: iterates provider list (stride 232B), matches against session/slot list (stride 24B) by accountKey (memcmp on key bytes); builds output Vec<(accountKey, model, maxSlots)> via `RelayProvider::exposed_models@0x10054a4b0`
8. **no HTTP calls**: all side effects are FS (atomic_write, remove_file, read) + OS mutex + OS process management (osascript/kill for stop_codex); no reqwest/HTTP client calls observed in call tree
9. **launch_codex_app path**: called via `launch_codex_app_warning@0x1005e1460` → `launch_codex_app@0x10055afd0` only when `v118=1` (flag: was running before enable and needed restart); error formatted as CoreError string
10. **"done\a" sentinel**: BEL character (0x07) appended to "done" is the progress-complete sentinel recognized by frontend; same pattern seen in reveal_relay_api_key and other delta commands

---

## ## Unknown

1. **CodexApiLoginTogglePayload exact fields**: response payload struct fields beyond `enabled:bool` not directly decompiled — HexRays elides small struct fields in return value; marked accepted_unknown=false (recovery_attempt: analyze_function on 0x1005d3a10 + drop_in_place struct showed CodexApiLoginTogglePayload but field count not extractable without type inference)
2. **virtual-auth-marker.json key at anon.286 (16B)**: 4th BTreeMap entry key is 16 bytes (anon.286 at 0x10114fdca) — likely "created_at_utc_ms" or similar timestamp key; not directly readable from string pool without get_bytes on that addr
3. **RelayManager inner struct offsets** (precise): mutex at inner+16, panic guard at inner+24, RelayState at inner+32, webview map at inner+381 (byte), HashMap<String,Webview> at inner+144..160 — inferred from decompile offsets but not cross-validated against struct layout definition
4. **slot error message (77B @0x101153b01)**: exact error text not extracted — get_bytes on that addr would reveal; tagged accepted_unknown=false (can be extracted but low priority, already know semantic = "no matching login slots found" or similar cap message)
5. **cleanup: file path second arg (unk_10114FD7F, 26B)**: path joined with base via `Path::_join(v3, v4, unk_10114FD7F, 26)` — this is the session/credential file alongside virtual-auth-marker.json; 26-byte string at that addr not extracted
6. **apply_codex_state@0x10075ae20**: downstream of sync_codex_config; takes 9-arg struct (relay_providers, slots, api_key_opt, codex_config_path, ...) — not decompiled; marked accepted_unknown=false (decompilable, out of scope for this delta focus)
7. **anti-fake-wall verdict**: genuine_ceiling=false — all functions synchronous (no async SM/poll needed; blocking dispatch via BlockingTask is transparent wrapper not async body); no ICF beyond command-wrapper fold (confirmed by sole xref); no vtable dispatch; no HTTP-terminal; all 7 taxonomy categories excluded; no recovery_attempts needed as no genuine ceiling identified
