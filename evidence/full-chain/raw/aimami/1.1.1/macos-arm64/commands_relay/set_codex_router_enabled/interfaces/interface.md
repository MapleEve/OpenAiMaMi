# Interface: set_codex_router_enabled (AiMaMi 1.1.1 macOS ARM64)

session: wf-aimami111-delta-20260616
date: 2026-06-17
gate_candidate: strictImplementationUse_candidate

---

## Tauri Command Contract

```
command: "set_codex_router_enabled"
module:  commands::relay
```

### Request

| field   | type | source | notes |
|---------|------|--------|-------|
| enabled | bool | argKey from string pool @0x1011482ff | true=enable router, false=disable |

No other argKeys. Single-parameter command.

### Response

```
CoreEnvelope<CodexRouterTogglePayload>
```

CoreEnvelope wraps: `ok: bool`, `error: Option<String>`, `data: CodexRouterTogglePayload`

### CodexRouterTogglePayload fields (from string pool @0x1011542f7)

| field | type (inferred) | notes |
|-------|-----------------|-------|
| router_enabled | bool | reflects new enabled state |
| proxy_running | bool | TCP proxy liveness after operation |
| proxy_port | Option\<u16\> | proxy port if running |
| activeCodexProviders | Vec\<String\> | camelCase; list of active provider names |
| codex_provider_count | u32 | count of active providers |
| catalog_path | Option\<String\> | absolute path to Codex catalog file |
| catalog_exists | bool | whether catalog file exists after operation |
| config_toml_has_router | bool | whether TOML config contains router block |
| config_toml_has_catalog | bool | whether TOML config has catalog reference |
| user_top_level_profile | Option\<String\> | user profile identifier for catalog path |
| config_stale_reason | Option\<String\> | reason TOML was modified if was_modified=true |
| thread_migration_exists | bool | whether thread migration was performed |
| state | String | router state machine current state |
| migration | unknown | thread migration details; type unconfirmed |
| codexLaunchError | Option\<String\> | Chinese/localized error on Codex launch fail |

### Tauri Event Emitted

```
event name: "codex-router-toggle-progress"   (28B @ 0x1011542f7)
```

Progress step values (in order):
- `stopping_codex`
- `rolling_back_threads`
- `writing_config`
- `starting_proxy`
- `launching_codex`
- `done\a`

Event fires only if `event_window` handle non-null (optional window parameter).

---

## Side Effects

### FS (confirmed)
- **TOML config write** (atomic): relay state block with keys `codexRouterEnabled`, `codexApiLogin`, `codexApiSlots`, `displayTagGlobal`, `displayTagWoyao`, `CodexApiSlot` (string pool @0x101150a09)
- **TOML block markers** inserted on enable / removed on disable:
  - `# >>> aimami-relay codex-router top start (DO NOT EDIT MANUALLY)`
  - `# <<< aimami-relay codex-router top end`
- **Catalog file**: written (`codex_catalog::write_catalog`) on enable with api-slots; removed (`codex_catalog::remove_catalog`) on disable
- **Thread config files**: rewritten by `migrate_threads_for_router_with_scope` on enable+has_proxy
- **Virtual auth marker**: written by `virtual_auth::enable_virtual_login`; removed by `virtual_auth::cleanup` on disable/rollback
- **Relay state persist**: `persist_relay_state` called on both enable/disable paths

### OS Process (confirmed)
- **Codex stop**: `stop_codex_for_file_edit` called unconditionally at start (before branch)
- **Codex launch warning**: `launch_codex_app_warning` called on disable path if config not stale

### Network / TCP (confirmed)
- **Proxy liveness**: `ensure_proxy_started` → TCP `connect_timeout(addr, 300ms)` × 2 with 50ms sleep
- **Proxy spawn**: if liveness fails, new proxy thread spawned via `tokio::block_on`

---

## Error Paths

| condition | action | response |
|-----------|--------|----------|
| virtual_auth::enable_virtual_login fails | rollback_router_enabled → restore TOML/catalog | CoreEnvelope ok=false |
| sync_codex_config_with_outcome fails in rollback | apply_codex_state fallback with cleared state | — |
| any other critical failure | rollback_router_enabled | CoreEnvelope ok=false |
| Codex launch fails | codexLaunchError field populated in payload | CoreEnvelope ok=true with error in payload |

---

## State Machine (inferred)

```
[disabled]
  --enable(mode)--> [stopping_codex]
  --fix_config_preflight--> [config_takeover::takeover]
  --virtual_auth::enable--> [router_enabled=1, proxy_started]
  --sync_config--> [enabled]
  --migrate_threads (if proxy)--> [enabled+migrated]

[enabled]
  --disable--> [stopping_codex]
  --rollback_threads--> [router_enabled=0]
  --virtual_auth::cleanup, config_takeover::restore--> [disabled]
```

---

## Dim5 / Windows Parity

Windows 1.0.9 baseline (REVERSE-STATUS.md line 3517): `set_codex_router_enabled` promoted to `readyToImplement`, dim4 (TOML block markers) confirmed identical. Windows 1.1.1 delta reverse not yet performed. Platform-specific divergence (e.g., process management impl, proxy spawn mechanism) is unknown for 1.1.1.

---

## Gate Assessment

- **dim1 (argKeys/types)**: confirmed — `enabled: bool`
- **dim2 (response type)**: confirmed — `CoreEnvelope<CodexRouterTogglePayload>`, 15 fields named
- **dim3 (side effects)**: confirmed — FS, OS process, TCP proxy, catalog, virtual auth
- **dim4 (TOML markers)**: confirmed from string evidence and 1.0.9 dim4 baseline
- **dim5 (windows parity)**: unknown — 1.1.1 windows not yet reversed
- **dim6 (field types/nullability)**: partial — field names confirmed, Rust types inferred not confirmed

Current gate: **strictImplementationUse_candidate** (blocked on dim5 + dim6 unknown fields)
