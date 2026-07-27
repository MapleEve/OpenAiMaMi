# System Diff — AiMaMi 1.2.3 tray (macOS-arm64)

## Platform Artifacts

- Binary: macOS arm64 Mach-O, same 1.2.3 release as `../macos-1.2.3-relay/`. sha256 not independently re-hashed for tray-scoped raw dirs this pass (see manifest.json binary.sha256_note); cross-reference `../macos-1.2.3-relay/manifest.json` sha256_core_relay for the release-level hash.
- Windows sibling: raw evidence only, no package. `raw/aimami/1.2.3/windows-x64/tray/` (2 stripped `sub_XXXX` functions, owners unresolved) + `raw/aimami/1.2.3/windows-x64/codexmate_lib/ida/pseudocode/load_tray_template_icon_0x1401a26f0.c`. Not reduced this pass.

## Frontend IPC / Control-flow

- `grep -i tray` against `frontend/ipc-contracts.jsonl` (131 total 1.2.3 IPC commands enumerated): **0 hits**. This is architectural, not a gap -- tray menu construction/refresh/dispatch is 100% native Rust (Tauri `MenuBuilder` + `on_menu_event`), never crosses the `invoke()` boundary to JS.
- Confirms there is no `RelayModelPage`-style frontend component for tray; the only user-facing surface is the OS-native menu-bar icon and its `NSMenu`.

## Backend Commands / Control-flow / Pseudocode / Call-tree / Leaf

- 12 raw `.c` files across 3 source directories, 10 distinct symbol families, all read in full this session, 0 truncation.
- Dispatcher pattern: `create_tray_menu` picks bootstrap-vs-snapshot path based on `get_cached_display_snapshot` sentinel; `handle_tray_menu_event` picks an action based on XOR/length-obfuscated menu-item-id string comparison.
- Cross-module dependencies observed (not owned by this package, pointer-only): `commands::accounts::switch_account_and_restart_sync` (account switch, called from the tray-account-click closure), `codexmate_lib::request_user_quit` (root-namespace quit flow, called on `tray_quit` click), `commands::hotspot::focus_main_window` (called on title/subtitle/open-main clicks), `core::relay::manager::RelayManager::snapshot` + `core::relay::storage::sanitize_for_export` (read-only, consumed by `append_codex_router_section`), `core::repository::Repository::load_local_state_synced` (read-only, consumed by the tray-account-click branch).
- **Rebuild-vs-refresh correction**: `refresh_tray_menu`/`refresh_tray_menu_with_snapshot` are full rebuild-and-swap operations (call the corresponding `create_tray_menu*` builder, then `TrayIcon::set_menu` with the new object), not in-place label mutation. See `gate-report.json.corrections_to_prior_baseline`.
- `update_tray_recording_state` re-decodes the same embedded PNG on every call (no caching observed in the pseudocode) and does pixel-level red-dot compositing via a squared-distance circle test when voice recording is active; calls `TrayIcon::set_icon` + `set_icon_as_template(!recording)` to keep the red dot in color while recording (macOS template-image mode would otherwise force monochrome rendering).

## Interface / Error / Boundary

Not independently extracted for 1.2.3 (dim4 gap, see gate-report.json). Opportunistic field-offset notes recorded in README.md, not a closed interface map.

## Gate Leaf

consumerStartReady 10/10; strictImplementationUse 0/10; readyToImplement 0/10. See gate-report.json.

## Plugin / Capability

Not applicable -- tray module has no plugin/capability surface of its own.

## OTA / Package

Not evaluated this pass (out of scope for tray module).

## Resource / Binary Surface

`load_tray_template_icon` decodes an embedded PNG resource (compiled into the binary, exact resource path/asset name not identified this pass) into RGBA8; `update_tray_recording_state` re-decodes the same resource per call rather than caching the base icon.

## Unknown

- Windows-side tray: raw evidence exists (2 files) but owners unresolved and not reduced this pass; `dim5` remains Unknown for Windows, not confirmed-absent, not extrapolated from macOS.
- `tray_account:` dialog-to-switch-closure wiring: closure exists and is confirmed called on success, exact trigger path from the confirmation dialog not conclusively traced.
- Interface/DTO and test/acceptance mapping: not extracted for 1.2.3 (dim4/dim6 gaps).
- Whether any of the 10 tray targets changed behavior vs 1.2.2: no NEW-delta head-comment markers were observed in any of the 12 files read (all marked "基线 same-set"), and none of the 9 known 1.2.3 NEW-delta functions listed in commands-baseline.md belong to tray_menu -- but this was not independently re-verified via a dedicated diff tool this pass.
