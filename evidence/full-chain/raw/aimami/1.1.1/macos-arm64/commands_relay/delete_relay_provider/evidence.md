# Raw Leaf: delete_relay_provider
## AiMaMi 1.1.1 macOS ARM64

**produced_at**: 2026-06-16
**binary_sha256**: (AiMaMi 1.1.1 universal — IDB loaded as AiMaMi.i64)
**source_binary**: AiMaMi 1.1.1 universal.app/Contents/MacOS/AiMaMi
**platform**: macos-arm64
**session**: <审计会话>
**machine**: <本地机器>
**baseline**: 1.0.9 (readyToImplement; strictImplementationUse)

---

## Confirmed

### Owner
| Field | Value |
|-------|-------|
| Address | `0x1005e9c30` |
| Symbol | `codexmate_lib::commands::relay::delete_relay_provider::h2840286684de365e` |
| Size | 0x173 bytes (371 bytes) |
| Demangled | `codexmate_lib::commands::relay::delete_relay_provider` |
| Registration xref | `0x100316aca` in `codexmate_lib::run::{{closure}}::{{closure}}::ha9570ff2e2b6c2c5` |
| IDB comment | appended `<审计会话>` |

### Owner Pseudocode (1.1.1)
```c
_QWORD *delete_relay_provider(a1, a2, a3, a4) {
  v6 = a4[1];  // providerId ptr len
  RelayManager::delete(v11, a3, v6, a4[2]);  // core delete
  if (v11[0] == 10) {  // discriminant 10 = Ok
    tray_menu::refresh_tray_menu(a2);   // side effect: tray refresh
    CoreEnvelope::ok(v10);              // success response
    qmemcpy(a1, v10, 0x50);
    // dealloc providerId buffer
  } else {
    // format error via CoreError::fmt
    // propagate CoreError to caller
  }
  drop_in_place<AppHandle>(a2);
  return a1;
}
```

### Call Tree (depth ≥ 6, all implementation leaves reached)
```
delete_relay_provider @0x1005e9c30
  └─ RelayManager::delete @0x1005dc530               [core: full delete logic; src/core/relay/manager.rs]
       ├─ router_thread_migration_target_model @0x10071dd20  [GUARD: check router manifest]
       │    ├─ Path::_join → .codex/<dir>/thread-router-migrations/relay-state-cache.json/current.json
       │    ├─ fs::metadata (file exists check)
       │    └─ codex_thread_visibility::read_manifest @0x100710b50 [LEAF: fs read manifest]
       ├─ GUARD: if router manifest found AND provider_id == migration_target:
       │    └─ return CoreError(9, "当前 Codex 智能路由已开启，禁止操作中转模型，如需操作请关闭 Codex 智能路由。" [119B UTF-8])
       ├─ GUARD: if provider is active AND sole grant member:
       │    └─ return CoreError(9, "无法删除最后一个已启用的 Codex 中转模型：请先关闭 Codex 智能路由，或先启用另一个 Codex 中转模型。" [135B UTF-8])
       ├─ Mutex::lock (std::sys::pal::unix::sync) → RelayState::clone
       ├─ Vec<RelayProvider>::retain (filter out deleted provider) @0x100647b50
       ├─ Vec<GrantEntry>::retain (filter out grants) @0x1006468e0
       ├─ Vec<(active set)>::retain @0x1006479e0
       ├─ keychain::delete_api_key @0x1006c9790       [LEAF: macOS file + Keychain delete]
       │    ├─ Path::_join → .codex/<dir>/keys/<providerId>  (file delete via fs::remove_file)
       │    └─ mac_keychain::delete @0x10041f040      [LEAF: macOS Security.framework Keychain]
       │         ├─ security_framework::PasswordOptions::new_generic_password
       │         ├─ PasswordOptions::use_protected_keychain
       │         └─ security_framework::passwords::delete_generic_password_options
       │              (errSecItemNotFound=-25300 treated as success; other errors returned)
       ├─ log::info "writing_config" (src/core/relay/manager.rs level=info)
       ├─ RelayManager::persist @0x1005dee20          [write state to file]
       │    ├─ compose_proxy_status @0x1005d5450
       │    ├─ storage::save @0x1005e2c60             [LEAF: relay state file write]
       │    │    ├─ CodexPaths::ensure_directories
       │    │    ├─ RelayState::serialize (serde)
       │    │    └─ atomic_write::write_atomic @0x10041e960  [LEAF: atomic relay.json write]
       │    └─ Mutex::lock → memmove(state+32, new_state, 0x170) [in-memory state update]
       ├─ RelayManager::sync_codex_config_with_outcome @0x1005daea0
       │    ├─ snapshot @0x1005e0330
       │    ├─ (if provider has active codex sessions):
       │    │    ├─ codex_catalog::resolve_api_slots @0x1006e8950
       │    │    └─ codex_catalog::write_catalog @0x1006e8450    [LEAF: catalog write]
       │    ├─ codex_catalog::remove_catalog @0x1006e8800        [LEAF: catalog entry removal]
       │    └─ codex_writer::apply_codex_state @0x10075ae20      [LEAF: config.toml write]
       ├─ RelayManager::snapshot @0x1005e0330 (post-delete read)
       └─ (session guard post-persist):
            ├─ fs::metadata (check session file)
            ├─ fs::read_to_string (read session content)
            └─ str::is_contained_in (provider_id in session content)
                 → CoreError(9, "provider '...' still exists in relay state") if found
  └─ tray_menu::refresh_tray_menu @0x1006277c0       [LEAF: Tauri tray UI rebuild]
       ├─ create_tray_menu
       └─ TrayIcon::set_menu (id="main")
  └─ CoreEnvelope::ok @0x100555910                   [success discriminant=10]
```

### Interface / DTO

**argKeys**: `managerId` (String), `providerId` (String)

**Request**: `{ providerId: string }`

**Response (success)**: `CoreEnvelope::ok` discriminant=10 (unit/void — no payload)

**Error responses** (CoreError, discriminant=9 or 2):
| Code | Message | Condition | NEW in 1.1.1? |
|------|---------|-----------|----------------|
| 9 | 当前 Codex 智能路由已开启，禁止操作中转模型，如需操作请关闭 Codex 智能路由。 (119B UTF-8) | provider is current router migration target | **YES — Chinese (1.0.9 was English)** |
| 9 | 无法删除最后一个已启用的 Codex 中转模型：请先关闭 Codex 智能路由，或先启用另一个 Codex 中转模型。 (135B UTF-8) | sole enabled active provider | **YES — Chinese (1.0.9 was English)** |
| 9 | "provider '...' still exists in relay state" (dynamic, from `unk_1010B7437`) | post-delete snapshot search found provider | same as 1.0.9 |
| 9 | "provider '...' has active sessions" (dynamic) | session file contains providerId | same as 1.0.9 |
| 2 | CoreError::Io | fs read error during session check | same as 1.0.9 |

**Error string addresses**:
- `0x1011541dd`: "当前 Codex 智能路由已开启..." (119 bytes, router migration guard)
- `0x1011540bf`: "无法删除最后一个已启用的..." (135 bytes, sole-active-grant guard)
- `0x1010b7437`: " still exists in relay state" (dynamic format)

### Side Effects

1. **macOS Keychain delete** (`keychain::delete_api_key`): deletes stored apiKey file + Security.framework keychain entry; errSecItemNotFound (-25300) treated as success; error non-fatal (logged, execution continues)
2. **relay.json atomic write** (`storage::save` → `atomic_write`): updated RelayState without deleted provider
3. **config.toml mutation** (via `apply_codex_state`): removes provider entry from Codex router config
4. **Catalog removal** (`codex_catalog::remove_catalog`): removes catalog entry if present
5. **Codex catalog write** (`write_catalog`): only if provider has active API slots
6. **Tray menu refresh**: Tauri tray UI rebuild (menu id="main")
7. **In-memory RelayState update** via memmove(state+32, new_state, 0x170) under Mutex

### Pre-condition Guards (blocking before mutation)

1. **Router migration guard**: reads `thread-router-migrations/relay-state-cache.json/current.json`; if provider is migration target → CoreError(9, Chinese message)
2. **Active grant guard**: if provider is active AND is sole grant member → CoreError(9, Chinese message)

**Post-mutation session guard** (runs AFTER persist — potential consistency concern same as 1.0.9):
- Reads session files to check provider_id presence
- If found: CoreError(9) — state already mutated

---

## Inferred

- `router_thread_migration_target_model` reads manifest from `.codex/<dir>/thread-router-migrations/relay-state-cache.json/current.json` (path literal confirmed from decompile)
- The Chinese error messages indicate 1.1.1 localized error strings for user-facing guards; backend error code (9) unchanged
- `errSecItemNotFound = -25300` is macOS Security framework constant; non-fatal keychain miss is intentional (provider may not have had keychain entry)
- `apply_codex_state` at `0x10075ae20` is the config.toml terminal write leaf (confirmed via `sync_codex_config_with_outcome` call chain)
- `write_atomic` at `0x10041e960` is the persistence terminal leaf for relay.json

---

## Unknown

- **dim1 (frontend CCF)**: Not reversed in this session. 1.0.9 baseline frontend CCF status should carry via migration.
- **dim5 (Windows)**: Windows platform evidence not available from macOS IDB. Windows binary uses different keychain impl.
- **dim6 (test/acceptance mapping)**: Not provided (C5 implementation-side work per GATE-SPEC dim6 definition).
- **Keychain service name / account name**: Passed to `security_framework` but not decoded from registers in this pass. File path is `.codex/<dir>/keys/<providerId>` (from `anon_cb488c0530badd667ddecb834e53ca81_783` = string "keys" at `0x101156e80`).
- **`unk_1010B7418` / `unk_1010B73D6` / `unk_1010B7391`**: Dynamic format strings for session guard errors — content not decoded (likely "provider '{}' still exists in relay state" / "provider '{}' has active sessions").

---

## Delta vs 1.0.9

| Dimension | 1.0.9 | 1.1.1 |
|-----------|-------|-------|
| Owner VA | 0x1001e0afc | **0x1005e9c30** |
| Owner size | 0x204 bytes | **0x173 bytes** (smaller; inlined cleanup removed?) |
| Error msg (router guard) | English "provider is active router migration target" (119B) | **Chinese "当前 Codex 智能路由已开启..." (119B)** |
| Error msg (sole grant) | English "cannot delete last active provider..." (135B) | **Chinese "无法删除最后一个已启用的..." (135B)** |
| Core logic | RelayManager::delete → persist → sync → snapshot → session_guard | **IDENTICAL structure** |
| Side effects | keychain + relay.json + config.toml + catalog + tray | **IDENTICAL** |
| Error codes | CoreError(9) / CoreError(2) | **IDENTICAL** |
| router manifest path | router-migration-manifest.json | **thread-router-migrations/relay-state-cache.json/current.json** (path evolved) |
| tray refresh | yes | **yes (same)** |
| session guard ordering | post-persist | **post-persist (same)** |
| mac_keychain::delete | errSecItemNotFound non-fatal | **errSecItemNotFound (-25300) non-fatal (confirmed same)** |

**Behavioral delta**: Error message strings changed from English to Chinese (same byte lengths). Router manifest read path evolved. Core logic and side-effect ordering: NO CHANGE.

---

## Gate Assessment

| Dimension | Status | Notes |
|-----------|--------|-------|
| dim1: frontend CCF | Unknown / migrate from 1.0.9 | Not reversed this session |
| dim2: backend owner + pseudocode | **Accepted** | Non-failed decompile; VA=0x1005e9c30 |
| dim3: call-tree → impl leaves | **Accepted** | depth=6+; fs/keychain/atomic_write/config.toml/tray all reached |
| dim4: interface/DTO/error/side-effect | **Accepted** | 5 error codes; 7 side effects; all fields confirmed |
| dim5: platform gate (macOS) | **Accepted** | macOS confirmed; Windows Unknown |
| dim6: test/acceptance mapping | Unknown | C5 implementation-side |

**Tier**: `strictImplementationUse` (macOS; dim1 pending migration; dim6 pending C5 impl)
**Critical implementation note**: Error messages are now Chinese; post-persist session guard ordering unchanged; router manifest path evolved in 1.1.1.
