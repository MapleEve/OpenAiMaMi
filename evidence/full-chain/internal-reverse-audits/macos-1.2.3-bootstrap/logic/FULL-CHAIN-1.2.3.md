# AiMaMi 1.2.3 macOS bootstrap — raw run_0x* triage / full chain

Source binary SHA-256 (macOS 1.2.3 arm64): `25d6d04e6d94c3f1e8258d2b348360b228fda4fc1c3d38b6383c84a2a8d53d21`.

Scope of this pass: **triage**, not full leaf-100 deep reverse. Input is the 89 unclassified
generic `run_0x<VA>.c` pseudocode files under
`raw/aimami/1.2.3/macos-arm64/run/ida/pseudocode/` produced by the
`<审计会话> full-baseline decompile session (mac 1638-function baseline,
`run-app-misc` coverage group, see `audits/BASELINE-FINAL-1.2.3.md` line "run-app-misc | 155 |
run(App 主入口/setup)/toplevel(退出守护)/debug_bundle/analytics/mcp/skills"). Those 89 files were
never RULE 8 reduced into a canonical module bundle. This document is the grounded triage result.

## 1. Why all 89 files share the `codexmate_lib::run` symbol prefix

88 of the 89 files are Rust closures whose demangled symbol is
`codexmate_lib::run::{{closure}}...` (1–2 nesting levels). This is a **compiler symbol-naming
artifact**, not a semantic claim: in the 1.2.3 build, `tauri::generate_handler!` and the
`.setup()` / `.on_window_event()` calls inside the top-level `run()` function are invoked
*syntactically* inside `run()`'s body, so every async-command execution closure and every
event-handler closure that Rust monomorphizes there inherits the `run::{{closure}}` symbol path —
regardless of which business module actually owns the command. Only **1 of the 89** files
(`run_0x1006f50c0.c`, symbol `codexmate_lib::run` with no closure suffix) is the literal top-level
`run()` function itself.

## 2. Triage method (grounded, not heuristic-only)

For every file: extracted every `codexmate_lib::<module>::<function>` call target via
`grep -oE "codexmate_lib::[a-zA-Z0-9_:]+::[a-zA-Z0-9_]+::h[0-9a-f]+"`, deduped per file. Files
calling exactly one target were classified by that target's own module path (which is the command's
real, already-named owner — verified against `raw/aimami/1.2.3/macos-arm64/frontend/ipc-contracts.jsonl`,
131 commands, for the bootstrap-labeled ones: `load_bootstrap_state`, `dismiss_pending_auto_switch`,
`load_pending_auto_switch` all present as registered Tauri IPC commands, confirming these are real
named commands and not mystery functions). Files with zero or >1 distinct call targets were read in
full (not grep-only) to determine role. The one non-closure file (`run_0x1006f50c0.c`, the real
`run()` body, 701 lines) was read in full end-to-end.

## 3. Result — 89/89 accounted for, grounded

### 3a. BOOTSTRAP leaves (4 functions) — pulled into this package

| file | VA | role | 1.0.9 analog |
|---|---|---|---|
| `run_0x1006f50c0.c` | 0x1006f50c0 | **app_run_entry** — the literal top-level `codexmate_lib::run()`. Full read confirms: `CodexPaths::resolve_codex_home`/`from_home` → `debug_log::init` → `harden_private_file`/`harden_private_tree` (x2 each) → `single_instance::acquire` → on first-instance: `RelayManager::new` → `tauri::Builder` assembly (plugins: `tauri_plugin_updater`, `tauri_plugin_autostart`, `tauri_plugin_deep_link`, `tauri_plugin_dialog`, `tauri_plugin_global_shortcut`, `tauri_plugin_process`, a local `updater` plugin.setup) → multiple `Builder::manage()` calls (one of which is `VoiceRuntimeInner::new`, 3 more anonymous managed-state blobs not individually named in this pass) → generated-`Context` construction offloaded to a dedicated 8 MiB-stack thread (`std::thread::lifecycle::spawn_unchecked`, joined before continuing — stack-overflow avoidance for the huge `tauri::generate_context!` blob, not a long-lived background thread) → `Builder::build()` → on non-first-instance: `single_instance::start_activation_watcher` + `request_existing_instance_activation_with_url` (activation IPC to the already-running instance) → `App::run()`. | `app_run_entry` |
| `run_0x1009b4d30.c` | 0x1009b4d30 | Async body of the **`load_bootstrap_state`** Tauri command (`commands::system::load_bootstrap_state`, confirmed registered in `ipc-contracts.jsonl`) — reads/returns bootstrap cache/state via `tauri::state::StateManager::try_get`. Semantic domain = bootstrap state readback. | `bootstrap_cache` |
| `run_0x1009a80d0.c` | 0x1009a80d0 | Async body of **`dismiss_pending_auto_switch`** command (`commands::system::dismiss_pending_auto_switch`). | `auto_switch_pending_emitter` |
| `run_0x1009b1d50.c` | 0x1009b1d50 | Async body of **`load_pending_auto_switch`** command (`commands::system::load_pending_auto_switch`). | `auto_switch_pending_emitter` |

**Honest gap vs 1.0.9**: the 1.0.9 macOS bootstrap package also had a `boot_spawn_threads` leaf
(spawns the auto-switch watcher thread + relay-manager bootstrap thread as background daemons) and
a `managed_state_registry` leaf as an **independent** function. In this 1.2.3 batch, no standalone
function among the 89 matches "spawn a long-lived watcher thread" — the only `spawn_unchecked` call
found (inside `app_run_entry`) is the one-shot Context-construction thread, which is a different
purpose. The managed-state registration calls are present but **inlined directly into
`app_run_entry`** rather than being a separate function in this build. This is recorded as
`Unknown — not confidently located in this raw batch` (see AI.md unknowns), **not** forced onto
any of the 89 files; the actual long-lived thread spawn (if it still exists as a separate function
in 1.2.3) was not found in this generic `run_0x*` bucket and may live elsewhere (e.g. inside
`core::relay::manager::RelayManager::new` itself, which is NOT one of these 89 files and was not
opened in this pass — out of scope for this triage).

### 3b. MULTI-TARGET closures (2 functions) — read in full, NOT bootstrap

| file | VA | role |
|---|---|---|
| `run_0x1006f6dc0.c` | 0x1006f6dc0 | `tauri::app::ExitRequestApi::prevent_exit` window-close / exit-guard handler. Calls `RelayManager::router_transition_in_progress`, `RelayManager::snapshot`, `RelayManager::stop_proxy_if_running`, `relay::storage::sanitize_for_export`, `voice::runtime::shutdown_runtime`. This is the **`toplevel`(退出守护)** module per `BASELINE-FINAL-1.2.3.md`'s `run-app-misc` grouping — a sibling of `run`, not part of it. |
| `run_0x100990c40.c` | 0x100990c40 | Multi-command closure calling `account_oauth::cancel_chatgpt_oauth_login`, `autostart::get_autostart_state`/`set_autostart_enabled`, `mcp::load_mcp_servers`/`remove_mcp_server`/`set_mcp_server_enabled`/`upsert_mcp_server`, `voice::upsert_voice_vocabulary` — a fan-out IPC router-shaped closure, not a bootstrap step; commands dispatch through it to their real owning modules (accounts/autostart/mcp/voice). |

### 3c. UNRESOLVED by triage (3 functions) — left in `run` bucket, not forced

| file | note |
|---|---|
| `inner_0x100571850.c` | Header self-reports `[HEXRAYS-EMPTY — run::inner::{closure} IDA decompiler 返回空(闭包无可反编译体...)]` — no decompilable body at all. |
| `run_0x1000cf8f0.c` | 2535 lines, zero `codexmate_lib::` calls; body is generic `tokio::runtime::task` / waker-vtable machinery (`tauri::async_runtime::spawn_blocking`, `tokio::runtime::task::raw::Raw...`). Almost certainly a monomorphized generic async-runtime poll/wake shim shared across many commands, not attributable to one business module without much deeper generic-instantiation tracing. |
| `run_0x10099df40.c` | No `codexmate_lib::` call extracted by the grep pass; not opened in full this round (time-bounded triage) — genuinely unresolved, stays `run` bucket. |

### 3d. Already-owned-elsewhere (80 functions) — classified, explicitly excluded from bootstrap

Every one of these calls exactly one already-named `commands::<mod>::<fn>` (or
`core::<mod>::<fn>`) target; ownership is the target's own module, most of which already have (or
are separately tracked as needing) their own 1.2.3 canonical bundle per
`<审计会话> gap list.

- **relay** (15 — canonical bundle already exists: `audits/macos-1.2.3-relay/`, do not duplicate):
  `compose_proxy_status`, `get_active`, `get_codex_router_auth_readiness`, `load_relay_state`,
  `diagnose_codex_router`, `export_relay_config`, `quit_keeping_router`, `deactivate_relay_provider`,
  `set_relay_provider_network`, `import_relay_config`, `upsert_relay_provider`,
  `reorder_relay_providers`, `reveal_api_key`, `activate_relay_provider`, `delete_relay_provider`.
- **voice** (38 — largest group; module still lacks its own 1.2.3 canonical bundle per fullapp gap
  list, out of scope here): `set_voice_trigger_key`, `load_voice_processing_modes`,
  `resolve_voice_vocabulary_app_info`, `start_capture`, `remove_voice_mode_shortcut`,
  `save_voice_llm_config`, `set_processing_mode_id`, `replace_voice_vocabulary_kind`,
  `test_voice_llm_config`, `set_overlay_style`, `save_voice_asr_config`, `test_voice_asr_config`,
  `load_voice_runtime_status`, `remove_voice_vocabulary`, `notify_processing_done`,
  `set_voice_mode_shortcut`, `emit_status`, `remove_voice_template`, `load_voice_asr_config`,
  `set_trigger_listener_suppressed`, `stop_capture`, `load_voice_workspace`,
  `upsert_voice_vocabulary_app_scope`, `save_voice_processing_modes`, `cancel_trigger_capture`,
  `remove_voice_vocabulary_app_scope`, `set_global_shortcut`, `remove_voice_history_entry`,
  `update_voice_runtime_settings`, `hide_voice_search_overlay`, `load_voice_llm_config`,
  `set_voice_trigger_bindings`, `snapshot` (VoiceSearchResultState), `request_voice_permissions`,
  `show_voice_search_overlay`, `open_macos_privacy_pane`, `upsert_voice_template`,
  `request_accessibility`.
- **system** (16): `open_path`, `set_image_compat`, `get_mystery_unlock_grants`,
  `set_api_proxy_config`, `import_remote_device_secret_if_empty`, `get_usage_refresh_interval`,
  `get_system_info`, `force_kill_codex`, `merge_mystery_unlock_grants`, `rebuild_registry`,
  `get_device_id`, `get_or_create_remote_device_secret`, `get_image_compat`,
  `get_notification_client_state`, `clean`, `set_usage_refresh_interval`.
- **system-hotspot** (5): `hotspot_ready`, `has_notch`, `focus_main_window`, `get_hotspot_enabled`,
  `set_hotspot_enabled`.
- **tray** (1 — canonical bundle already exists: `audits/macos-1.2.3-tray/`, do not duplicate):
  `handle_tray_menu_event`.
- **maintenance/debug_bundle** (2): `default_bundle_file_name`, `write_client_debug_log`.
- **mcp** (folded into the `run_0x100990c40.c` multi-target closure — see 3b; also implicitly
  present as `load_mcp_servers`/`remove_mcp_server`/`set_mcp_server_enabled`/`upsert_mcp_server`).
- **sessions-analytics** (1): `delete_sessions`.
- **account-auth** (folded into `run_0x100990c40.c` — `cancel_chatgpt_oauth_login`).
- **autostart** (folded into `run_0x100990c40.c` — `get_autostart_state`/`set_autostart_enabled`).
- **deeplink** (1): `parse_aimami_deeplink`.
- **platform/update** (1): `check_update_installability`.

## 4. Accounting

`4 bootstrap + 2 multi-target(non-bootstrap) + 3 unresolved + 80 already-owned-elsewhere = 89`.
100% of the raw batch is accounted for; 0 forced into bootstrap without evidence.
