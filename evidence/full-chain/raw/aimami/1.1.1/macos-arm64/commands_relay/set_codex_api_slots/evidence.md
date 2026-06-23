# Evidence: set_codex_api_slots — AiMaMi 1.1.1 macOS ARM64

**Session**: <审计会话>
**Machine**: <本地机器>
**Binary**: AiMaMi 1.1.1 universal.app/Contents/MacOS/AiMaMi
**Source binary SHA256**: (from IDB idb_path <来源位置>/raw/binary/AiMaMi-1.1.1-binary)
**IDB**: AiMaMi.i64 (hexrays_ready=true, uptime=63110s at session start)
**Date**: 2026-06-17
**Module**: codexmate_lib::commands::relay (leaf dir: commands_relay/)

---

## ## Confirmed

1. **Owner VA**: `0x1005e9530` = `codexmate_lib::commands::relay::set_codex_api_slots::hef3da9daf5b16813` (size=0x188=392B, has_type=true confirmed by lookup_funcs)
2. **IPC dispatcher**: single xref to owner from `0x1003107f0` = `codexmate_lib::run::{{closure}}::{{closure}}::h4686adb81795082d` — Tauri IPC routing entry for this command
3. **Core impl**: `0x1005d4f40` = `codexmate_lib::core::relay::manager::RelayManager::set_codex_api_slots::h5410e8e69349b454` — called directly by owner; mutex lock → validate_api_slots → persist → sync_codex_config_with_outcome
4. **Mutex pattern**: `std::sys::pal::unix::sync::mutex::Mutex::lock` (unix) + `Mutex::unlock` — macOS POSIX mutex (vs WIN InterlockedCompareExchange8)
5. **validate_api_slots**: `0x1005d2a10` — validates count ≤ 5 (early return error if a4==0 or a4>5), validates providerId uniqueness via hashbrown HashMap, validates model via `RelayProvider::exposed_models`, validates slot model against known exposed models per provider
6. **persist**: `0x1005dee20` = `RelayManager::persist` → `compose_proxy_status` + `relay::storage::save` → `RelayState` serde JSON serialize + `write_atomic`
7. **write_atomic terminal leaf**: `0x10041e960` = `write_atomic::haa4522197089ee4a` → `DirBuilder::_create` + uuid v4 tmp filename + `OpenOptions::_open` (mode 0666) + `write_all` + `sync_data` + `rename` (atomic) + `sync_parent_dir` — confirmed macOS FS atomic write pattern
8. **sync_codex_config_with_outcome**: `0x1005daea0` — snapshot → `resolve_api_slots` (codex_catalog) → `write_catalog` OR `remove_catalog` → `apply_codex_state` (codex_writer); conditional on provider having api_slots
9. **String pool confirmation**: `set_codex_api_slots` at `0x1011482ff` in packed IPC command blob (single string pool entry); arg keys `manager` + `slots` + `providerId` confirmed in same blob
10. **Response**: `CoreEnvelope::ok` with RelayState clone on success; `0x8000000000000000` sentinel = Err with CoreError on failure
11. **argKey `manager`**: String (provider manager ID) — from dispatcher decompile (`unk_101148410` = 5B = "slots", `unk_101148407` = 7B = "manager")
12. **argKey `slots`**: Vec<CodexApiSlot> — deserialized from JSON; each element has `providerId:String` + `model:String` (from Windows cross-ref: "struct CodexApiSlot with 2 elements")

---

## ## Inferred

1. **CodexApiSlot struct**: 2 fields — `providerId: String` + `model: String` (serde rename likely snake_case; confirmed from Windows REVERSE-STATUS Windows cross-ref at line 2183)
2. **slots count ≤ 5**: validated in `validate_api_slots` (early error if a4==0 → "slots Vec must be non-empty" or similar; if a4>5 → slots count error with format string including usize count)
3. **Relay state stride**: 232B per RelayProvider (from WIN cross-ref; macOS persist/snapshot use `232 * v13` in core impl clone loop — consistent)
4. **Error path 1**: empty slots Vec (a4==0) → alloc 55B error string (UTF-8 Chinese error message in byte literals) → Err(CoreError)
5. **Error path 2**: count > 5 → format error string with usize count via `format_inner` → Err(CoreError)
6. **Error path 3**: providerId not found in relay state → format error "providerId not found in relay" → Err(CoreError) (from validate_api_slots LABEL_38 path)
7. **Error path 4**: duplicate providerId in slots input → hashbrown insert collision → Err(CoreError) (from validate_api_slots LABEL_40 path)
8. **Error path 5**: model not in exposed_models for that provider → format error → Err(CoreError) (from validate_api_slots LABEL_47/LABEL_67 paths)
9. **sync_codex_config conditional**: only runs `write_catalog` path if provider has api_slots (v66[188]==1 branch); otherwise runs `remove_catalog` path — mirrors WIN behavior
10. **apply_codex_state**: `codexmate_lib::core::relay::codex_writer::apply_codex_state::h94748c52c4b8c052` — writes codex config state; cross-referenced in sync_codex_config_with_outcome; dim3 leaf for codex config path

---

## ## Unknown

1. **dim1 (frontend CCF)**: macOS-only reverse; frontend CCF confirmed on Windows (ipc-contracts.jsonl); macOS shares same JS bundle (mac+win universal frontend) — accepted_unknown: same JS bundle, frontend CCF migrated from 1.0.9/Windows evidence; not mac-binary-specific
2. **codexApiSlots JSON field name**: Confirmed from Windows pseudocode ("codexApiSlots" in relay config JSON at `sub_1406EAED0` serializer) — macOS equivalent at serde serialize (`h8c8924505a5c447a`) not string-inspected; inferred same field name from shared schema
3. **relay config file path**: `CodexPaths::ensure_directories` (0x1005582b0) + `a2+608/a2+616` pointer into CodexPaths struct — exact path string not extracted; known from 1.0.9 baseline as relay.json in codex config dir
4. **`sync_codex_config_with_outcome` success/failure return**: Returns unit `*a1=10` on success to caller in core impl; caller (core impl) propagates as Ok branch; exact error from `write_catalog` failure logged at "writing_config" source location (src/core/relay/manager.rs:25)
5. **`apply_codex_state` internals**: VA `0x10075ae20`; not decompiled (separate deep-chain function); behavior inferred from WIN cross-ref as "writes codex config state to disk" — accepted_unknown genuine_ceiling=false (decompilable if needed; budget constraint)
6. **dim5 Windows**: Windows platform done separately (REVERSE-STATUS line 2168); WIN uses InterlockedCompareExchange8 lock vs macOS POSIX Mutex; atomic_write uses GetCurrentProcessId+CloseHandle vs macOS uuid+rename — platform diff documented in interfaces/interface.md
7. **dim6 test/acceptance mapping**: Not in scope for producer; 内部构建 implementation side responsibility per GATE-SPEC §DIM1-6
