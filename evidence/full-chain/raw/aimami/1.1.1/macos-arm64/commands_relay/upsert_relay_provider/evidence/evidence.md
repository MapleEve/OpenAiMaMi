# upsert_relay_provider — Delta Evidence
## session: <审计会话>  machine: <本地机器>
## delta_class: integrity_recovered
## baseline: AiMaMi 1.0.9  target: AiMaMi 1.1.1 (macos-arm64)

---

## 1. Owner VA

| Symbol | VA | Size |
|---|---|---|
| `codexmate_lib::commands::relay::upsert_relay_provider` | `0x1005eae30` | 0x1e3 |
| `codexmate_lib::core::relay::manager::RelayManager::upsert` | `0x1005dd220` | 0x16a3 |

---

## 2. Why "integrity_recovered" (not "same")

The command was previously flagged as "same" in the delta sweep. This was a mis-classification.
Confirmed reasons it is a genuine delta:

1. **Absent from 1.0.9 entirely**: The 1.0.9 macos-arm64 baseline directory
   `<来源位置>/raw/aimami/1.0.9/macos-arm64/`
   contains only: `account_io/`, `sessions/`, `system/`, `window-path/`.
   No relay module exists in 1.0.9 at all.

2. **IPC string confirmed new**: `upsert_relay_provider` appears in the 1.1.1
   command dispatch table string at `0x101148166` alongside 7 other relay
   commands (`delete_relay_provider`, `activate_relay_provider`,
   `deactivate_relay_provider`, `reorder_relay_providers`, etc.) — all new in 1.1.1.

3. **Function hash changed from baseline**: Mangled symbol contains hash
   `h75221993b50a2b5e` (handler) and `h09233c7ea40fce11` (core) — these are new.

---

## 3. Delta: What Changed vs 1.0.9

| Category | 1.0.9 | 1.1.1 |
|---|---|---|
| Relay provider management | Not present | Full CRUD: upsert/delete/activate/deactivate/reorder |
| Codex config sync | Not present | `sync_codex_config_with_outcome` rewrites Codex CLI config on every upsert |
| API key persistence | Not present | `keychain::write_key_file` writes key to disk (keys/ subdir) |
| RelayState persistence | Not present | `relay::storage::save` -> serde_json + atomic_write -> relay.json |
| Tray menu integration | Not present | `refresh_tray_menu` called on success (TrayIcon::set_menu) |
| UUID generation | Not present | `uuid::Uuid::new_v4` for new provider ids |

---

## 4. DTO Schema (RelayProvider, 232 bytes / 0xE8)

Reconstructed from upsert merge logic field offsets:

| Offset | Field | Type | Notes |
|---|---|---|---|
| 0 | id (len) | u64 | String length |
| 8 | id (ptr) | *u8 | String pointer |
| 16 | id (cap) | u64 | |
| 24 | name (len) | u64 | |
| 32 | name (ptr) | *u8 | display_name field (cloned from a3_dto+6) |
| 40 | name (cap) | u64 | |
| 48 | url (len) | u64 | |
| 56 | url (ptr) | *u8 | |
| 64 | url (cap) | u64 | |
| 72 | model_id (len) | u64 | |
| 80 | model_id (ptr) | *u8 | |
| 88 | model_id (cap) | u64 | |
| 96..168 | env_vars | Vec<ModelEntry> | 3 words (ptr/len/cap), element size 32 |
| 120 | api_key_opt (sentinel) | u64 | 0x8000000000000000 = None |
| 128 | api_key_opt (ptr) | *u8 | |
| 136 | api_key_opt (len) | u64 | |
| 168 | active | bool | byte flag |
| 169 | is_default | bool | byte flag |
| 184 | has_key_file | bool | BYTE4(v135[28]) — set after write_key_file succeeds |
| 192 | created_at | u64 | epoch_ms (set on insert only) |
| 200 | updated_at | u64 | epoch_ms (always set) |
| 208 | connection_status | u64 | sentinel 0x8000000000000000 = None on return |

---

## 5. Side-Effects Enumerated

1. **Filesystem write — API key**: `keys/<provider_id>` under relay dir
   - `DirBuilder::_create` (mode 0o777) + `set_permissions` (restricted)
   - `fs::write::inner` + `set_permissions` (restricted)
   - VA: `0x1006c9950`

2. **Filesystem write — relay.json (atomic)**: full RelayState serialized via serde_json
   - `atomic_write::write_atomic` (`0x10041e960`) — temp file + rename
   - VA: `0x1005e2c60`

3. **Filesystem write — Codex catalog JSON**: `codex_catalog::write_catalog` (`0x1006e8450`)
   - Only written if provider is active and has api_key
   - `codex_catalog::remove_catalog` (`0x1006e8800`) called otherwise

4. **Filesystem write — Codex CLI config**: `codex_writer::apply_codex_state` (`0x10075ae20`)
   - Rewrites entire Codex CLI config on every upsert (unconditional)

5. **Tauri UI side-effect — tray menu**: `TrayIcon::set_menu` via `refresh_tray_menu`
   - Called on command success path only
   - VA: `0x1006277c0`

---

## 6. Error Handling

- `write_key_file` error → early return `CoreError` with error string (does NOT proceed to persist)
- `persist` error (storage::save fail) → returns `CoreError`, no sync
- `sync_codex_config_with_outcome` error → `CoreError` returned, logged at WARN level
  (source: `src/core/relay/manager.rs`, log target: `codexmate_lib::core::relay::manager`)
- All errors propagate as `CoreEnvelope::err` → JSON `{"error": "..."}` to frontend

---

## 7. Noise Filtered (not counted as delta)

- `GLOBAL_PANIC_COUNT` / `is_zero_slow_path` / poison-flag checks — Rust stdlib mutex safety
- `__rust_alloc` / `__rust_dealloc` size changes
- `anon_837e7b2534c2bc5d5b9cb815cd628806_*` vtable entries (hash unchanged, compiler artifact)
- `sub_*` / `anon_<hash>` renamed between builds — not app logic

---

## 8. Gate Report

| Gate | Status |
|---|---|
| owner_va_confirmed | PASS (0x1005eae30 / 0x1005dd220) |
| hexrays_decompile | PASS (both functions, full pseudocode) |
| callees_depth_ge5 | PASS (depth=5: upsert→persist→save→atomic_write→OS) |
| interface_dto_recovered | PASS (232-byte RelayProvider field map) |
| error_paths_covered | PASS (write_key_file/persist/sync all enumerated) |
| side_effects_enumerated | PASS (5 side-effects: key file, relay.json, catalog, codex config, tray) |
| noise_filtered | PASS (panic guards, alloc, vtable hashes excluded) |
| idb_comments_written | PASS (6 functions annotated) |
| idb_saved | PASS (<来源位置>/raw/binary/AiMaMi-1.1.1-idb) |
| baseline_comparison | PASS (1.0.9 has no relay module — confirmed new functionality) |

**Overall gate: PASS — delta_class=integrity_recovered**

---

## 9. Artifact Paths

```
<来源位置>/raw/aimami/1.1.1/macos-arm64/commands_relay/upsert_relay_provider/
├── ida/pseudocode/
│   ├── upsert_relay_provider_handler.c   (IPC command handler)
│   ├── relay_manager_upsert.c            (core logic, annotated)
│   └── relay_persist_and_sync.c          (persist / storage::save / write_key_file / sync leaves)
├── call-trees/
│   └── call_tree.txt                     (depth=5, terminal reasons)
└── evidence/
    └── evidence.md                       (this file)
```
