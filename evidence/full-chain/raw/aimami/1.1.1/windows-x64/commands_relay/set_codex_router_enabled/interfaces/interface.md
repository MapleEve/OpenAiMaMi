# Interface: set_codex_router_enabled — Windows x64 — AiMaMi 1.1.1

Session: <审计会话> | Date: 2026-06-17 | Platform: windows-x64

---

## Command Arguments

### Primary (confirmed from string pool + dispatcher)

| Key | Type | Source | VA |
|-----|------|--------|----|
| `enabled` | `bool` | dispatcher parser sub_1402FF1A0 | arg string @ 0x1412faa7f |

### Secondary (confirmed from dispatcher sub_140963A40 secondary parser)

| Key | Type | Source |
|-----|------|--------|
| `relaunch` | `Option<bool>` | sub_1402FF330 relaunch/apiLogin parser; string @ 0x1412faa86 |
| `apiLogin` | `Option<String>` | sub_1402FF330; string @ 0x1412faa8e |

Note: mac 1.1.1 manifest only lists `["enabled"]` as primary arg. `relaunch` and `apiLogin` are likely conditional / advanced params present in win dispatcher that may have been added in 1.1.1 win path or dispatched from a broader relay command entry.

---

## Response Type

```
CoreEnvelope<CodexRouterTogglePayload>
```

Inferred from mac 1.1.1 parity (strong — size delta 37B, 0.5%). Win binary stripped, no response struct field strings located.

### CodexRouterTogglePayload fields (from mac parity)

| Field | Type | Notes |
|-------|------|-------|
| `router_enabled` | `bool` | Whether router is now on |
| `proxy_running` | `bool` | Proxy process liveness |
| `proxy_port` | `u16/Option<u16>` | Active proxy port |
| `activeCodexProviders` | `Vec<Provider>` | Active provider list |
| `codex_provider_count` | `u32` | Count of configured providers |
| `catalog_path` | `Option<String>` | Catalog file path |
| `catalog_exists` | `bool` | Catalog file presence |
| `config_toml_has_router` | `bool` | Config TOML router section present |
| `config_toml_has_catalog` | `bool` | Config TOML catalog section present |
| `user_top_level_profile` | `Option<String>` | Top-level user profile |
| `config_stale_reason` | `Option<String>` | Why config is stale (if any) |
| `thread_migration_exists` | `bool` | Thread migration file exists |
| `state` | `RouterState` | Current router state enum |
| `migration` | `Option<Migration>` | Migration context |
| `codexLaunchError` | `Option<String>` | Error from Codex launch attempt |

---

## Async Dispatch Pattern

```
IPC invoke → dispatcher sub_140963A40
  → parse enabled (sub_1402FF1A0) + relaunch/apiLogin (sub_1402FF330)
  → spawn BlockingTask
    → blocking body: set_codex_router_enabled_blocking_body_win_sys@0x1401C59F0
      → calls set_codex_router_toml_section_write_win_sys@0x14067CA20 (TOML update)
      → WakeByAddressSingle (Windows futex: notify poll waiter)
  → ResultFutureTag::poll loop
  → orchestration: relay_manager_set_codex_router_enabled_orchestration_win_sys@0x1406DD250
    → quit_codex_poll_wait_sys_111@0x1407A39B0 (stop Codex process)
    → sync_codex_config_with_outcome_win_sys@0x1406CCC00 (atomic config write)
    → apply_relay_config_section_win_sys@0x1406CFE30 (section apply)
```

---

## Side Effects (confirmed via call tree)

| Side Effect | Evidence | VA |
|-------------|----------|----|
| FS_write_codex_config_toml_atomic | relay_atomic_write_leaf_sys → CloseHandle (Win32 FS commit) | 0x140504310 |
| OS_process_stop_codex | quit_codex_poll_wait_sys_111 → quit_codex_taskkill_imagename_sys_111 | 0x1407A39B0 |
| OS_process_launch_codex | relay_manager_set_codex_router_enabled_orchestration_win_sys (inferred from progress_steps) | 0x1406DD250 |
| TOML_section_write_codex_router | set_codex_router_toml_section_write_win_sys; markers confirmed in binary | 0x14067CA20 |
| thread_migration_write | rollback_router_enabled_win_sys → TOML write (thread migration section) | 0x140680220 |
| RwLock_acquire_relay_state | RwLock PoisonError string in blocking body | 0x1401C59F0 |

---

## TOML Block Markers Confirmed in Win 1.1.1 Binary

All confirmed inside `set_codex_router_toml_section_write_win_sys@0x14067CA20`:

```
# >>> aimami-relay codex-router top start (DO NOT EDIT MANUALLY)  @ 0x1412e941c
# <<< aimami-relay codex-router top end                            @ 0x1412ea00d
# >>> aimami-relay managed start (DO NOT EDIT MANUALLY)            @ 0x1412e9348
# >>> aimami-relay managed start (top, DO NOT EDIT MANUALLY)       @ 0x1412e93e0
# <<< aimami-relay managed end                                     @ 0x1412e9fcb
# <<< aimami-relay managed end (top)                               @ 0x1412e9fe9
```

**dim4_blocker from 1.0.9 win CLOSED**: The 1.0.9 blocker was "config.toml TOML section header not confirmed from sub_140454D00". In 1.1.1 win, all TOML markers are confirmed in the new owner function set_codex_router_toml_section_write_win_sys@0x14067CA20.

---

## Error Handling

| Error Type | Evidence |
|------------|----------|
| RwLock PoisonError | "poisoned lock: another task failed inside" literal in blocking body@0x1401C59F0 |
| Codex launch failure | codexLaunchError field in response (from mac parity) |
| Rollback path | rollback_router_enabled_win_sys@0x140680220 called on error (searches provider list, rewrites TOML) |
| Discriminant=6 (Err) | Both arg parsers return discriminant 3 (Ok) / 6 (Err) |

---

## Progress Events

Inferred from mac 1.1.1 parity (event name `codex-router-toggle-progress` confirmed mac@0x1011542f7):

```
stopping_codex → rolling_back_threads → writing_config → starting_proxy → launching_codex → done
```

Win: event string not directly located (stripped), but orchestration structure maps identically.
