# System Diff — plugins module, 1.0.9 → 1.2.3, windows-x64 (+ macos-arm64 corroboration)

## Platform Artifacts

- 1.0.9 windows: `AiMaM 1.0.9 win64.exe` — contains `codexmate_lib::core::plugins::registry::PluginRegistry` string literal (positive control, confirms detection method works on this binary generation).
- 1.2.3 windows: `AiMaMi.1.2.3 win64.exe` (sha256 `aeccccd78e470ad6cfdb52d72af624b34ce17a4a0b04e7596b32583eaf972396`, 33667584 bytes) — zero plugins-anchor string hits.
- 1.2.3 macOS: `AiMaMi 1.2.3.app/Contents/MacOS/AiMaMi` (sha256 `e3f2fec7d7cd32c8a7a650ec563577b8c74516aed270c1230a5b11296942114d`, 65072960 bytes) — zero plugins-anchor string hits (corroboration only).

## Frontend IPC / Control-flow

- 1.0.9: `list_plugins`, `toggle_plugin`, `get_plugin_config`, `update_plugin_config` registered Tauri commands, consumed by `PluginsPage` (per `audits/windows-1.0.9-plugins` / `audits/macos-1.0.9-plugins`).
- 1.2.3: 131-command `ipc-contracts.jsonl` (windows-x64 and macos-arm64 both) contains none of the four commands, and no `PluginsPage`-equivalent string in `frontend-files.txt`/`ast-facts.json`/`frontend-contract-report.md`.

## Backend Commands / Control-flow / Pseudocode / Call-tree / Leaf

- 1.0.9: `PluginRegistry::{set_enabled,list,get_config,update_settings,save_store_static}` + `PluginStoreSchema::serialize` fully decompiled and leaf-closed (13/13 PASS).
- 1.2.3: no `plugins/` raw module directory exists among the 65 windows-x64 module directories produced by the 1.2.3 full-app baseline sweeps (`wf-aimami123-delta-20260721`, `win-1.2.3-app-function-inventory-gapfill-20260724`); no owner symbol found in the binary string table. No decompile attempted this audit — there is no address to target.

## Interface / Error / Boundary

Not applicable; module absent in 1.2.3.

## Gate Leaf

`diagnostic-only`. See `README.md` §Gate Leaf Status and `manifest.json.result`.

## Plugin / Capability

The AiMaMi-native "plugins" capability system (distinct from the generic Tauri framework `plugin:<namespace>|<permission>` ACL strings, which persist in both 1.0.9 and 1.2.3 as normal Tauri v2 framework internals and are unrelated to this feature) is present in 1.0.9 and absent in 1.2.3 on both platforms checked. Whether the `mcp`/`skills` modules (both present and separately audited at 1.2.3: `audits/{macos,windows}-1.2.3-mcp`, `audits/{macos,windows}-1.2.3-skills`) functionally replace plugins' third-party-tool-integration role is an open product-history question not resolved by this audit — no functional-equivalence claim is made here.

## OTA / Package

Not checked in this audit (out of scope for a presence/absence question).

## Resource / Binary Surface

`raw/aimami/1.2.3/windows-x64/` module directory count: 65, none named `plugins`. `raw/aimami/1.2.3/macos-arm64/` shows the same absence.

## Unknown

Dead-code-without-surviving-string-literal residual possibility — see `README.md` §Unknown / Missing and `AI.md` unknowns. Not upgraded beyond `Unknown (low-likelihood, unfalsifiable by static string search alone)`.
