# Evidence: set_codex_router_enabled (AiMaMi 1.1.1 macOS ARM64)

session: wf-aimami111-delta-20260616
machine: <本地机器>
date: 2026-06-17
binary_sha256: f34ff82910539964e24e86b35e95ea85b42af7d7dccf8e979914a2c21bd8cfeb
module: commands::relay
owner_va: 0x1005d7950
owner_symbol: codexmate_lib::core::relay::manager::RelayManager::set_codex_router_enabled::hbce68602ab47eb41

---

## Confirmed

1. **Owner VA and symbol**: `func_query name_regex="set_codex_router_enabled"` returned 14 matches; A-level owner confirmed at `0x1005d7950` (has_type=true, size=7455B). Demangled symbol: `codexmate_lib::core::relay::manager::RelayManager::set_codex_router_enabled::hbce68602ab47eb41`.

2. **Tauri IPC command name**: `find_regex` on `set_codex_router_enabled` in binary string pool returned n=1 match at `0x1010e7311`, within the packed Tauri command dispatch blob. Confirmed command string is literal `set_codex_router_enabled` (not an alias). Surrounding context: `diagnose_codex_router\0run_codex_router_diagnostics\0fix_codex_router_issues\0set_codex_router_enabled\0...`. Command occupies position 30 in the AiMaMi 1.1.1 delta command set (0-indexed among delta additions).

3. **argKey `enabled` (bool)**: String pool at `0x1011482ff` contains the command arg name string `enabled` adjacent to the other relay command arg names. Cross-reference with owner decompile: `a3` param is the bool `enabled` controlling enable/disable branch. No other argKeys — single-parameter command.

4. **Response type `CoreEnvelope<CodexRouterTogglePayload>`**: Response drop vtable at `0x1000d4690` confirmed via `xrefs_to` on `InvokeResolver::respond_async_serialized_inner` at `0x100161ad0`. The `BlockingTask::poll` at `0x100599bc0` wraps the owner call and returns the serialized envelope. The 15 payload field names were read from string pool starting at `0x1011542f7` immediately following the 28B event name string `codex-router-toggle-progress`: `router_enabled`, `proxy_running`, `proxy_port`, `activeCodexProviders`, `codex_provider_count`, `catalog_path`, `catalog_exists`, `config_toml_has_router`, `config_toml_has_catalog`, `user_top_level_profile`, `config_stale_reason`, `thread_migration_exists`, `state`, `migration`, `codexLaunchError`.

5. **Progress event name**: `codex-router-toggle-progress` confirmed at `0x1011542f7` (28 bytes, UTF-8). Emitted via `tauri::Emitter::emit(window, ...)` in command closure at `0x1005e94a0`. Progress closure at `0x1005d9680` dispatches via vtable[5] (offset +40). Progress step strings confirmed at `0x101153abd`: `codexmate_lib::core::relay::managerwriting_config` (inline with module path), `stopping_codex`, `rolling_back_threads`, `starting_proxy`, `launching_codex`, `done\a`.

6. **Rollback function `rollback_router_enabled` at `0x1005d6fa0`** (1614B): Called on all critical failure paths within `set_codex_router_enabled`. Actions: mutex lock, snapshot+persist with disabled state, `sync_codex_config_with_outcome`, fallback `apply_codex_state` with cleared state, `config_takeover::restore`, `virtual_auth::cleanup` if marker exists. Returns `Ok(())` on success.

7. **`ensure_proxy_started` at `0x1005d56f0`**: If existing Arc present, TCP `connect_timeout(addr, 300ms)` twice with 50ms sleep between. On success: `close_NOCANCEL(fd)`, update port state. On fail: log warning, clear port, `storage::save`, spawn new proxy thread via `tokio::block_on`. TCP liveness check only — no HTTP payload at this layer.

8. **`sync_codex_config_with_outcome` at `0x1005daea0`**: snapshot → collect providers → get port from mutex → `codex_catalog::resolve_api_slots` (if enabled+has_slots) → `write_catalog` or `remove_catalog` → `apply_codex_state` (write TOML config) → return `was_modified: bool`.

9. **TOML block markers confirmed from 1.0.9 windows evidence** (per REVERSE-STATUS.md line 3517, dim4 confirmed): `# >>> aimami-relay codex-router top start (DO NOT EDIT MANUALLY)` / `# <<< aimami-relay codex-router top end`. The `config_takeover::takeover/restore` calls manage this TOML block lifecycle.

10. **RelayState config fields written by `apply_codex_state`**: String pool at `0x101150a09` contains: `codexRouterEnabled`, `codexApiLogin`, `codexApiSlots`, `displayTagGlobal`, `displayTagWoyao`, `CodexApiSlot`. These are the TOML/JSON serialization keys for the relay state config block.

11. **Error path strings**: `get_bytes 0x101153AF2` returned `launching_codex` + Chinese error text `无法开启 AP...` (cannot launch API...) confirming the `codexLaunchError` field in `CodexRouterTogglePayload` carries a localized error string on Codex launch failure.

12. **Call-tree depth ≥5 confirmed**: Owner at depth 0 → `stop_codex_for_file_edit` / `config_takeover::takeover` / `virtual_auth::enable_virtual_login` / `rollback_router_enabled` / `ensure_proxy_started` / `sync_codex_config_with_outcome` at depth 1 → `codex_catalog::write_catalog` / `apply_codex_state` / `storage::save` at depth 2 → FS syscalls / atomic_write at depth 3+. Terminal callees include FS/SYSCALL/TCP/catalog layers.

13. **Anti-fake-wall: genuine_ceiling=false — all 7 taxonomy categories excluded**: (1) No async poll/resume — all branches are synchronous Rust with `tokio::block_on` wrapping; (2) No ICF on owner — unique symbol hash `hbce68602ab47eb41`, size 7455B; (3) No vtable dispatch for core logic — progress closure uses vtable[5] but is a thin wrapper, not core logic; (4) HTTP-terminal N/A — TCP liveness check only at `ensure_proxy_started`, no HTTP payloads in decompile scope; (5) No wrong VA — owner confirmed via func_query + symbol match; (6) All decompiles succeeded — owner 7455B fully recovered by HexRays; (7) No ICF merging of named target — 14 distinct symbol hits, A-level unique.

14. **Four-angle completeness**: A (func_query: 0x1005d7950, has_type=true) ✓; B (find_regex string pool: n=1 at 0x1010e7311) ✓; C (dispatcher: InvokeResolver xref + BlockingTask::poll wrapper confirmed, argKey from string pool confirmed) ✓; D (this manifest) ✓.

15. **IDB comments appended**: `append_comments` confirmed `appended=true` at both `0x1005d7950` (owner, func scope) and `0x1005d6fa0` (rollback, func scope).

---

## Inferred

1. **`mode` parameter semantics**: Owner decompile shows `a5` (mode byte): if `a5 != 2`, writes `mutex[397] = a5`. Inferred: mode=0=direct-key, mode=1=api-login-proxy, mode=2=no-change (preserve existing mode). Not confirmed by explicit enum string in binary.

2. **`virtual_auth` lifecycle tie to mode**: `enable_virtual_login` called only on enable path with api-login; `cleanup` called on both rollback and disable paths if marker exists. Inferred the marker byte is written by `enable_virtual_login` and checked by cleanup, not by set_codex_router_enabled directly.

3. **`codex_default_model` purpose**: Called on both enable and disable paths in decompile. Inferred it normalizes the Codex model selection to the relay-compatible default before config writes. No string confirmed for its output key.

4. **`normalize_thread_providers_before_migration`**: Called on enable path before slot resolution. Inferred it deduplicates or orders provider entries to prevent migration conflicts. No direct string evidence.

5. **`migrate_threads_for_router_with_scope`**: Called on enable path after `ensure_proxy_started` if proxy is up. Inferred it rewrites thread-level provider bindings to point to the relay proxy endpoint. The `thread_migration_exists` field in `CodexRouterTogglePayload` reflects this migration state.

6. **`snapshot_sanitized`**: Called at end of enable path. Inferred it produces a sanitized (redacted) snapshot for logging/telemetry, stripping API keys before the final state snapshot.

7. **`fix_config_preflight`**: Called at start of enable path. Inferred it validates and patches any malformed config before the takeover proceeds — likely checks for missing required fields.

8. **`resolve_api_login_slots`**: Called between `enable_virtual_login` and `rollback_router_enabled` check. Inferred it maps configured api-login accounts to proxy slot assignments that the catalog will reference.

9. **`CoreEnvelope` wrapper**: Inferred from 1.0.9 baseline pattern (windows) — CoreEnvelope adds `ok: bool`, `error: Option<String>`, `data: T` top-level fields around the payload. Not explicitly confirmed in mac 1.1.1 string pool scan.

10. **`codexLaunchError` nullability**: Field name appears in payload struct. Inferred it is `Option<String>` — null on success, populated string on `launch_codex_app_warning` path.

11. **`activeCodexProviders` type**: Field name is camelCase unlike others. Inferred it is `Vec<String>` (array of provider names). The `codex_provider_count` companion field confirms it is a counted collection.

12. **Mutex byte layout**: Owner writes `mutex[396] = router_enabled_flag` and `mutex[397] = mode_byte`. Inferred these are single-byte atomic flags at specific offsets in a larger RelayManager mutex-guarded state struct.

---

## Unknown

1. **`a4` param identity in owner**: Owner signature shows `__int64 a4` as 4th arg but it is not clearly used in the visible decompile excerpt. Could be a context/handle or padding. Not confirmed.

2. **Full `CodexRouterTogglePayload` field types**: Field names confirmed from string pool, but Rust types (e.g., whether `migration` is `Option<MigrationInfo>` struct or string) not confirmed — HexRays type inference not explicitly checked for the payload struct layout.

3. **`state` field in payload**: Present in string pool as plain `state`. Inferred to be an enum or string describing router state machine position, but exact values unknown.

4. **`migration` field in payload**: Companion to `thread_migration_exists`. Exact type (bool, count, struct) unknown.

5. **`user_top_level_profile` field**: Present in payload. Inferred to be a sanitized user profile string or identifier used for catalog path resolution. Exact type unknown.

6. **`config_stale_reason` field**: Present in payload. Inferred to be an `Option<String>` explaining why the config was stale if `was_modified=true`. Exact enum values unknown.

7. **`catalog_path` content format**: Field name confirmed. Whether it is absolute path, relative path, or URL-form not confirmed.

8. **Whether `stop_codex_for_file_edit` blocks or times out**: TCP or signal-based? Duration bound? Not confirmed from decompile excerpt.

9. **Exact `CoreEnvelope` struct layout on mac 1.1.1**: May differ from windows 1.0.9 layout. Not directly confirmed via string pool on mac binary (no `"ok"` / `"error"` / `"data"` scan performed).

10. **dim5 (windows parity)**: Windows 1.1.1 not yet reversed. Whether `set_codex_router_enabled` on Windows carries same signature and side-effects (or has platform-specific divergence for process management) is unknown.
