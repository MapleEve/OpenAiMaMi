# System Diff — AiMaMi 1.2.3 system-hotspot (macOS-arm64, vs 1.2.2)

## Platform Artifacts

- Binary: macOS arm64 Mach-O, sha256 (shared 1.2.3 macos-arm64 decompile source, same as sibling relay/skills packages) `e3f2fec7d7cd32c8a7a650ec563577b8c74516aed270c1230a5b11296942114d`; frontend-extraction sha256 `25d6d04e6d94c3f1e8258d2b348360b228fda4fc1c3d38b6383c84a2a8d53d21`.
- Windows sibling evidence: PE AMD64, sha256 (shared 1.2.3 windows-x64 binary, same as relay sibling package) `aeccccd78e470ad6cfdb52d72af624b34ce17a4a0b04e7596b32583eaf972396`; only 5 command-layer .c files exist for this module, no dedicated windows-x64/hotspot or windows-x64/screen directory.

## Frontend IPC / Control-flow

- 5 hotspot-related commands, all present and byte-identical in name across macOS/Windows: `has_notch`, `get_hotspot_enabled`, `set_hotspot_enabled`, `focus_main_window`, `hotspot_ready`.
- 3 independent frontend surfaces consume these commands (see README.md Frontend Control Flow section): the dedicated `hotspot` Tauri window's own React subtree, the Settings page Switch, and the Accounts page Quick-Settings dialog Switch. The two Switch instances are fully independent React components with separate TanStack Query cache keys -- toggling one does not visibly update the other until each independently refetches/invalidates.
- No relay-style relayPage-equivalent dedicated page exists for hotspot; its UI surface is intentionally scattered (a tiny standalone widget window + 2 settings-toggle locations), consistent with it being a minor companion feature rather than a primary app surface.

## Backend Commands / Control-flow / Pseudocode / Call-tree / Leaf

- Mac true App function count: 1.2.2 1267 -> 1.2.3 1638 (+216, not hotspot-exclusive per the relay sibling package's SYSTEM-DIFF.md; hotspot's own share of that delta is exactly the 5 NEW-delta functions listed below, all 5 fully accounted for within codexmate_lib::commands::hotspot::*, none spilled into other modules).
- Hotspot-specific behavior delta (5 functions marked `1.2.3 NEW-delta` in file headers, IDA function-enumeration diff vs 1.2.2, name<->address consistent, not independently byte-diffed this pass):
  - **`focus_main_window`**, **`reveal_main_window`**: new dedicated command-layer entry points for focusing/revealing the main window, each dispatching a boxed closure (undecompiled body) to the main thread.
  - **`force_reveal_main_window`**, **`bring_main_window_force_forward`**: new "stronger" variants for pulling a hidden/unfocused main window forward -- `bring_main_window_force_forward` explicitly reuses `bring_main_window_forward`'s full body (activation-policy + activate-ignoring-other-apps + 4 window messages) and appends 2 more window messages (tags 47, 57).
  - **`install_native_hotspot_observers`**: new registration of 5 native `NSNotificationCenter`/`NSWorkspace` observers (screen-parameters-changed, workspace-wake, screens-wake, session-became-active, active-space-changed) -- a new "auto-relayout on system state change" capability that did not exist as a distinct function in 1.2.2 per the enumeration diff.
- This is consistent with the "1.2.3 added a forced variant for pulling back hidden/unfocused windows more aggressively" description already recorded in `raw/aimami/1.2.3/macos-arm64/backend-baseline/commands-baseline.md`; this package's independent read of all 5 files found no contradiction.
- Backend decompile coverage: 18 real-named macOS functions (16 commands/hotspot + 2 platform/screen, the latter never previously covered by any baseline document), 0 truncated stubs, 0 sub_XXXX. See manifest.json/gate-report.json.

## Interface / Error / Boundary

Not independently extracted for 1.2.3 (dim4 gap, see gate-report.json). `CodexMateSettings` (backing get/set_hotspot_enabled) and a separately-named `HotspotConfig` struct (seen in shared core/repository serde-glue) both have unconfirmed field-level shape. Do not treat this section as closed.

## Gate Leaf

consumerStartReady 5/5; strictImplementationUse 0/5; readyToImplement 0/5. See gate-report.json.

## Plugin / Capability

Not applicable -- system-hotspot is not part of the plugins system (see OUTPUT-SPEC.md §plugins 1.0.8 最小逆向任务, a separate module with its own gate).

## OTA / Package

Not evaluated this pass (out of scope for a UI-companion-window module).

## Resource / Binary Surface

`commands/hotspot/`: 16 .c files on macOS (single dedicated directory, all real symbol names). `platform/screen/`: 2 .c files on macOS (compute_hotspot_frame, has_notch_screen), consumed exclusively by the hotspot command layer per this package's cross-reference -- no other caller found in the raw evidence examined this pass. Windows has only 5 files, flat under `commands/ida/pseudocode/` (no dedicated subdirectory), covering only the 5 Tauri-invokable command-layer functions.

## Unknown

- Main-thread closure bodies for 11 dispatch points across 7 functions (focus_main_window, reveal_main_window, force_reveal_main_window, refresh_hotspot_on_main, register_hotspot_relayout_observers, create_hotspot_window's off-main-thread branch, install_native_hotspot_observers' 5 handler blocks): not independently decompiled this pass, only inferred from call-site context.
- `CodexMateSettings` field-level shape and its relationship (if any) to the separately-named `HotspotConfig` struct: genuinely Unknown.
- 13 of 18 macOS-only functions' Windows-side existence/absence: zero confirmed Windows evidence, no windows-x64/screen or windows-x64/hotspot directory exists -- plausible genuine platform difference (no notch hardware concept on Windows) but not confirmed either way.
- Semantic-keyword orphan scan performed as a text-grep proxy (not live IDA export_funcs()) -- weaker evidence class, see manifest.json known_residuals.
- Interface/DTO and test/acceptance mapping: not extracted for 1.2.3 (dim4/dim6 gaps).
