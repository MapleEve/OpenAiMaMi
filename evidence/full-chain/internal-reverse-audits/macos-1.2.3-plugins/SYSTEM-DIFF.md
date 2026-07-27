# System Diff

AiMaMi plugins subsystem — 1.0.9 (present, full_leaf_100 accepted) / 1.1.8 (present) → 1.2.3 (removed). macOS-arm64.

## Platform Artifacts
- **macOS-arm64 1.2.3** (this package): binary SOT `raw/binary/AiMaMi 1.2.3.app` (thin arm64 `AiMaMi.arm64.thin`, sha256 `25d6d04e6d94c3f1e8258d2b348360b228fda4fc1c3d38b6383c84a2a8d53d21`). Plugins subsystem **absent** on all 4 evidence surfaces.
- **windows-x64 1.2.3**: `raw/binary/AiMaMi.1.2.3 win64.exe` (sha256 `aeccccd78e470ad6cfdb52d72af624b34ce17a4a0b04e7596b32583eaf972396`) — independently verified **removed=true** in `audits/windows-1.2.3-plugins` (session win-1.2.3-plugins-audit-20260725). Reported here for cross-platform completeness only; NOT used to prove the macOS conclusion.
- Both platforms reach removed=true via their own same-platform evidence (dim5 respected).

## Frontend IPC / Control-flow
- 1.0.9 macOS had 4 plugin IPC commands (`list_plugins`, `toggle_plugin`, `get_plugin_config`, `update_plugin_config`) and a `PluginsPage` using `list_plugins`/`toggle_plugin`.
- 1.2.3 macOS `frontend/ipc-contracts.jsonl`: 131 commands, **0** plugin commands. No `plugins-page-*.js` among the 10 page bundles (accounts/analytics/auto-switch/maintenance/mcp/relay/sessions/settings/skills/voice). `settings-page-B8vywarZ.js` direct grep `plugin` = 0; no `PluginsPage` / `/plugins` route / `pluginsRoute`.
- **Diff: 4 commands + 1 page + 1 route removed → 0 remaining.**

## Backend Commands / Control-flow / Pseudocode / Call-tree / Leaf
- 1.0.9 had dedicated `commands/plugins/` (4 command owners) + core `PluginRegistry::{set_enabled,list,get_config,update_settings}` + `save_store_static` leaf writing `plugins.json`.
- 1.2.3 macOS `commands/` has 16 subdirs (account_io, account_oauth, accounts, autostart, debug_bundle, debug_report, deeplink, hotspot, ida, mcp, relay, sessions, system, tray_menu, voice, voice_runtime) — **no `plugins/`**. Exact-word grep across the raw tree for `PluginRegistry`/`plugin_info`/`save_store_static`/`PluginStoreSchema` = 0 hits.
- `run/ida/pseudocode/run_0x1006f50c0.c` (app builder/setup entry): registers only Tauri-official plugins (`updater`, `autostart`, `deep_link`, `dialog`, `global_shortcut`, `process`). No `PluginRegistry` `.manage()` or registration in range.
- **Diff: entire backend owner + core + leaf chain removed. No owner/pseudocode/call-tree/leaf to produce.**

## Interface / Error / Boundary
- 1.0.9 DTOs (`list_plugins`/`get_plugin_config`/`toggle_plugin`/`update_plugin_config` payloads, `PluginStoreSchema { schemaVersion, plugins }`, poisoned-lock / target-not-found errors) have **no 1.2.3 counterpart**. `PluginStoreSchema` / `plugins.json` strings absent from the binary string pool.
- Boundary conclusion: feature boundary = "absent at 1.2.3 macOS product surface". Only internal residual is the 5 `.manage()` injected-state types (see Unknown), which is unreachable regardless of its resolution.

## Gate Leaf
- `gate_leaf_status = diagnostic-only`, `removed=true`, `confidence=high`.
- Not in any consumer_gate tier (consumerStartReady/strictImplementationUse/readyToImplement all 0). `full_leaf_100_definition_v2_status = not_applicable_module_removed`.
- All six dims = `not_applicable_module_removed` except dim5 which is `closed_independently_by_sibling` (Windows removed=true, own evidence). See gate-report.json.

## Plugin / Capability
- Application self-developed **plugin-management capability removed** (list/toggle/enable/config of `web_tools` + `image_support` builtins → gone).
- Tauri **framework** plugins (updater/autostart/deep_link/dialog/global_shortcut/process/shell/event/app) remain — these are infrastructure, not the removed feature. ~21 substring `plugin` file matches + 10 live IDA `find_regex '(?i)plugin'` hits are all in this framework/webview category (`tauri-plugin-updater/2.10.0`, `tauri::menu::plugin::MenuChannels`, `plugin:dialog|message`, `InvalidPluginInitialization`, etc.).

## OTA / Package
- No plugin-related OTA/package delta analyzed this pass (out of scope for the existence question). The 1.2.3 build ships without the plugins feature; no plugin store / `plugins.json` persistence path exists.

## Resource / Binary Surface
- Binary string-pool enumeration (exact-word grep + live IDA `find_regex '(?i)plugin'` on `AiMaMi.i64`, module=AiMaMi, IDA decompiler_ready=true): `PluginRegistry` / `list_plugins` / `toggle_plugin` / `get_plugin_config` / `update_plugin_config` / `plugin_info` / `PluginStoreSchema` / `plugins.json` / `builtin::web_tools` / `image_support` all **0 hits**.
- Positive control: same procedure on the 1.0.9 build finds `codexmate_lib::core::plugins::registry::PluginRegistry`, confirming detection works when the feature is present.

## Unknown
- **run() 5x `.manage()` injected state types** — not per-call desugared (Rust generic monomorphization hash-suffixed symbols). `accepted_unknown`; does not affect the removed=true product-surface conclusion (no reachable command/UI/frontend path even if a struct instance persisted internally). 1.0.9/1.1.8 had 3 `.manage()` states (Repository, RelayManager, PluginRegistry); 1.2.3 has 5, plausibly new `VoiceRuntimeInner` etc.; whether any of the 5 is still a `PluginRegistry` type is the sole residual.
- **Exact removal release** in the 1.1.8→1.2.3 window not bisected — `accepted_unknown`, not needed.
- **Windows** — not Unknown here; independently closed removed=true in `audits/windows-1.2.3-plugins`. This package does not extrapolate to Windows.
