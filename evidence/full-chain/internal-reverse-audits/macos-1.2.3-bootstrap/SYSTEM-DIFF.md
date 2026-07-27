# System Diff — macOS 1.2.3 bootstrap (vs 1.0.9 macOS bootstrap baseline)

## Platform Artifacts

- macOS 1.2.3 arm64 only, binary SHA-256
  `25d6d04e6d94c3f1e8258d2b348360b228fda4fc1c3d38b6383c84a2a8d53d21`.
- Windows: Unknown — no windows-1.2.3-bootstrap evidence gathered this session; do not infer from
  this package.

## Frontend IPC / Control-flow

- Not independently traced this session. 3 of the 4 bootstrap-classified leaves correspond to
  confirmed-registered Tauri commands in `raw/aimami/1.2.3/macos-arm64/frontend/ipc-contracts.jsonl`
  (131 commands total): `load_bootstrap_state`, `dismiss_pending_auto_switch`,
  `load_pending_auto_switch`. `app_run_entry` has no frontend trigger (process entry point).

## Backend Commands / Control-flow / Pseudocode / Call-tree / Leaf

- `app_run_entry` (`codexmate_lib::run`, VA 0x1006f50c0, 701-line decompile, full read): structural
  sequence — `CodexPaths::resolve_codex_home` → `CodexPaths::from_home` → `debug_log::init` →
  `harden_private_file` x2 + `harden_private_tree` x2 → `single_instance::acquire` → first-instance
  branch: `RelayManager::new` → `tauri::Builder` assembly (plugins: updater, autostart, deep_link,
  dialog, global_shortcut, process) → multiple `Builder::manage()` calls (`VoiceRuntimeInner::new`
  confirmed, 3 additional anonymous managed-state blobs not individually named this pass) →
  dedicated 8 MiB-stack thread builds the generated `tauri::Context` (stack-overflow avoidance for
  a very large `generate_context!` macro output, joined before continuing — **not** a long-lived
  background thread) → `Builder::build()` → `App::run()`; else-branch (already-running instance):
  `single_instance::start_activation_watcher` + `request_existing_instance_activation_with_url`.
- vs 1.0.9 macOS `app_run_entry`: same conceptual role (dim1 native-bootstrap-spawn substitute per
  1.0.9 gate record). Structural difference confirmed: 1.0.9 recorded a distinct
  `managed_state_registry` leaf as an **independent function**; in 1.2.3 the equivalent
  `manage()` calls are **inlined directly into `app_run_entry`**. This is a real architecture diff
  observed in the decompile, not a missed-classification artifact.
- 1.0.9 macOS also recorded an independent `boot_spawn_threads` leaf (spawns a long-lived
  auto-switch-watcher / relay-manager-bootstrap background thread). No standalone function among
  the 89 triaged 1.2.3 files matches this role — the only thread-spawn found in `app_run_entry` is
  the one-shot Context-construction thread (different purpose, joined synchronously). **This is
  recorded as Unknown, not as "removed in 1.2.3"** — the analog may exist inside a callee not
  opened this session (e.g. inside `RelayManager::new`'s own body).
- `bootstrap_cache` analog: 1.0.9 had a single `bootstrap_cache` leaf (loads `bootstrap-cache.json`,
  5-field `BootstrapStatePayload`). 1.2.3 shows this as the async body of a registered command
  `load_bootstrap_state` (VA 0x1009b4d30, 123 lines, calls `commands::system::load_bootstrap_state`
  via `tauri::state::StateManager::try_get`).
- `auto_switch_pending_emitter` analog: 1.0.9 recorded one concept-level leaf. 1.2.3 shows this
  split into (at least) 2 distinct named commands: `dismiss_pending_auto_switch` (VA 0x1009a80d0)
  and `load_pending_auto_switch` (VA 0x1009b1d50) — plausible version-evolution finer-grained API
  split, not confirmed against 1.0.9's exact command surface this session.

## Interface / Error / Boundary

Unknown — not produced this session (dim4 open).

## Gate Leaf

4 leaves at `consumerStartReady`; 0 at `strictImplementationUse`/`readyToImplement`. See
`gate-report.json`.

## Plugin / Capability

`app_run_entry`'s Builder chain registers: `tauri_plugin_updater`, `tauri_plugin_autostart`,
`tauri_plugin_deep_link`, `tauri_plugin_dialog`, `tauri_plugin_global_shortcut`,
`tauri_plugin_process`, plus a local `updater` tauri::plugin::Builder with `setup`/`try_build`
steps. No `tauri_plugin_shell`/plugins-registry system observed in this function (consistent with
the separately-audited `windows-1.2.3-plugins` finding that the old `PluginRegistry`
list/toggle/config-based plugins subsystem is confirmed removed in 1.2.3 — see
`audits/windows-1.2.3-plugins/`, cross-referenced not re-verified here).

## OTA / Package

Not in scope this session.

## Resource / Binary Surface

Not in scope this session.

## Unknown

See `gate-report.json` `unknowns` array (5 items, all classified).
