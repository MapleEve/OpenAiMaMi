# Raw Leaf: upsert_relay_provider
## AiMaMi 1.1.1 macOS ARM64

**produced_at**: 2026-06-17
**binary_sha256**: (AiMaMi 1.1.1 universal — IDB loaded as AiMaMi.i64)
**source_binary**: AiMaMi 1.1.1 universal.app/Contents/MacOS/AiMaMi
**platform**: macos-arm64
**session**: <审计会话>
**machine**: <本地机器>
**delta_class**: integrity_recovered
**baseline**: 1.0.9 (previously mis-classified as same-sweep; actual delta confirmed)

---

## Owner VA

`0x1005eae30` — `codexmate_lib::commands::relay::upsert_relay_provider::h75221993b50a2b5e`
- Size: 0x1e3 (483 bytes)
- Registered as Tauri IPC command `upsert_relay_provider` (confirmed from string at `0x101148166`)
- Called from: `codexmate_lib::run::{{closure}}::{{closure}}` @ `0x100311780` (single xref)

---

## Delta vs 1.0.9 — App-Level Changes

### DELTA-1: NEW `write_key_file` call on success path
- VA: `0x1006c9950`
- Writes API key bytes to `<codex_root>/keys/<provider_id>` (mode 0600)
- Directory `keys/` created with mode 0511 (755) via DirBuilder::_create
- Only called when `api_key` bytes are non-empty (v129 != 0)
- `api_key_stored` flag (BYTE4 of RelayProvider struct) set to 1 on success
- Error path: formats error string, returns CoreError via CoreEnvelope Err
- String evidence: `"keys"` at `0x101156e80`, `"create keys dir: "` at `0x1010b89df`, `"write key file: "` at `0x1010b89cb`

### DELTA-2: NEW `uuid::v4::new_v4` for INSERT path (no input id)
- VA: `0x100e13930`
- Triggered when input provider id is `None` (v146[12] == 0x8000000000000000)
- Generated UUID formatted as lowercase hex string with hyphens stripped
- `str::replace(uuid_str, '-', '')` + `FromIterator<char>` pipeline
- `chrono::Utc::now()` @ `0x100954200` provides epoch_ms for `created_at` and `updated_at` (both set identically)

### DELTA-3: NEW `refresh_tray_menu` call on OK path
- VA: `0x1006277c0`
- Called from owner (`0x1005eaf90`) after RelayManager::upsert returns Ok
- Rebuilds system tray: `create_tray_menu` → `TrayManager::tray_by_id("main")` → `TrayIcon::set_menu`
- Absent from 1.0.9 upsert path

### DELTA-4: MODIFIED `sync_codex_config_with_outcome` — catalog dispatch
- VA: `0x1005daea0`
- NEW callees: `resolve_api_slots` (`0x1006e8950`) → `write_catalog` (`0x1006e8450`) OR `remove_catalog` (`0x1006e8800`)
- `resolve_api_slots`: queries `RelayProvider::exposed_models` per active provider, builds slot array
- `write_catalog`: writes both api-mode catalog and standard catalog TOML atomically via `atomic_write`
  - `build_api_mode_catalog_bytes` @ `0x1006ecc80`
  - `build_catalog_bytes` @ `0x1006e9120`
- `remove_catalog`: deletes catalog file when no active provider has models
- `apply_codex_state` → `compose_from_original` + `write_atomic` for codex.toml (unchanged structure, now called via this modified function)
- Error log strings: `"writing_config"` in `src/core/relay/manager.rs`

### DELTA-5: MODIFIED `persist` — compose_proxy_status overlay
- VA: `0x1005dee20`
- `compose_proxy_status` (`0x1005d5450`) called to update proxy status fields before storage::save
- In 1.0.9 this overlay was either absent or used a simpler field copy

---

## Noise Filtered (NOT delta)

- `GLOBAL_PANIC_COUNT` / `is_zero_slow_path` / Mutex poison-guard boilerplate — stdlib compile noise
- `rust_alloc` / `rust_dealloc` size parameter changes — register allocation artefacts
- VTable pointer addresses — ASLR/link-order artefacts
- Stack frame offsets — compiler register spill changes

---

## IDB Annotations Written

- `0x1005eae30` — owner full delta summary (func-scope comment)
- `0x1005dd220` — RelayManager::upsert delta summary
- `0x1005daea0` — sync_codex_config_with_outcome delta summary
- `0x1006c9950` — write_key_file new function annotation
- IDB saved: `<来源位置>/raw/binary/AiMaMi-1.1.1-idb`

---

## Gate Assessment

- `dim2_backend_owner_pseudocode`: accepted (full decompile, 5 key functions)
- `dim3_call_tree`: accepted (depth ≥5 at key branches, all app-level leaves terminated)
- `dim4_interface_dto_error`: accepted (DTO layout, error codes, side effects documented)
- `gate_candidate`: strictImplementationUse
- `full_leaf_100`: true
- `delta_confirmed`: true (write_key_file, uuid::new_v4, refresh_tray_menu, catalog dispatch are genuine 1.1.1 additions)

---

## ACCEPTANCE (dim6 — <审计会话>)

**Gate tier**: readyToImplement (dim6=acceptance-draft)
**Delta class**: integrity_recovered — 5 new behaviors vs 1.0.9 (write_key_file, uuid, tray, catalog dispatch, compose_proxy_status overlay)

### Happy Path (INSERT, with api_key)
- Input: `{input:{name:"My Relay", base_url:"https://api.openai.com", id:null, exposed_models:["gpt-4o-mini"], api_key:"sk-..."}}`
- Expected: `CoreEnvelope::ok(RelayProvider)` with auto-generated UUID id (no hyphens), api_key_stored=true, created_at=now
- Side effects: keys/<id> created (mode 0600) → relay.json written → codex.toml written → catalog written → tray menu rebuilt

### Happy Path (UPDATE, no api_key)
- Input: `{input:{id:"existing-uuid", base_url:"https://new.example.com", api_key:""}}`
- Expected: RelayProvider with api_key_stored=false; no keys/<id> write; relay.json + codex.toml + tray rebuilt

### Error Paths
| Trigger | Expected |
|---------|----------|
| write_key_file fails | CoreError early return; persist NOT called |
| storage::save fails | CoreError; sync_codex_config NOT called |
| sync_codex_config fails | CoreError; WARN logged in codexmate_lib::core::relay::manager |
| apply_codex_state concurrent-writer | retry up to 3x, then IO error |
| no exposed_models | remove_catalog called (not write_catalog) |

### Side-Effect Asserts
- keys/<provider_id> created with mode 0600 when api_key non-empty
- keys/ directory created with mode 0511
- relay.json written atomically
- catalog written OR deleted based on active status + models
- tray menu visibly updated on success

### Test Mapping
- `e2e`: happy_path_insert_with_api_key, happy_path_update_no_key, tray_menu_updated
- `unit`: write_key_file_failure, apply_codex_state_retry, catalog_removed_when_no_models, uuid_format_no_hyphens
