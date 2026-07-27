# DISTILLED — windows-1.2.3-plugins presence/absence check

## Method

Three independent, same-platform (Windows) evidence classes were checked for the AiMaMi 1.2.3 windows-x64 build, each against the 1.0.9 windows-x64 anchor set (`PluginRegistry`, `toggle_plugin`, `list_plugins`, `get_plugin_config`, `update_plugin_config`, `plugins.json`, `PluginStoreSchema`, `all_builtin_plugins`, `web_tools::plugin_info`, `image_support::plugin_info`, `PluginsPage`, `builtin_plugins`).

### 1. Raw evidence directory topology

`raw/aimami/1.2.3/windows-x64/` has 65 top-level module directories (`account_io`, `analytics`, `commands`, `mcp`, `skills`, `relay-core`, `tray`, `voice_trigger_windows`, ... — full listing in `pointers/evidence-paths.md`). None is named `plugins` or any plausible rename. By contrast every other 1.0.9-era feature module that survives into 1.2.3 (mcp, skills, accounts, relay, tray) has a dedicated directory.

### 2. Frontend IPC command enumeration

`raw/aimami/1.2.3/windows-x64/frontend/ipc-contracts.jsonl` (produced 2026-07-24 by `win-1.2.3-frontend-extract-20260724` via tauri-dumper directly against the shipped exe) enumerates exactly 131 unique Tauri commands. `grep -i plugin` against the file returns 0 matches. The four 1.0.9 plugin commands (`list_plugins`, `toggle_plugin`, `get_plugin_config`, `update_plugin_config`) are absent from the 131-command set. Same result (131 commands, 0 plugin matches) independently for `raw/aimami/1.2.3/macos-arm64/frontend/ipc-contracts.jsonl`.

### 3. Binary string enumeration (`strings -a`)

Full `strings -a` dump of `raw/binary/AiMaMi.1.2.3 win64.exe` (399151 lines) matched against all eleven 1.0.9 anchor strings: **zero hits** for `PluginRegistry`, `toggle_plugin`, `list_plugins`, `get_plugin_config`, `update_plugin_config`, `plugins.json`, `PluginStoreSchema`, `all_builtin_plugins`, `web_tools::plugin_info`, `image_support::plugin_info`, `PluginsPage`, `builtin_plugins`.

The only case-insensitive `plugin` hits in the whole binary (3 total) are `plugin:aH`, `plugin:mL`, `plugin:tH` at lines 6315/6330/6366 — inspected in context, these are Tauri framework ACL/capability identifier fragments (`app|name`, `menu|get`, etc., i.e. the generic `plugin:<namespace>|<permission>` scheme built into every Tauri app for `@tauri-apps/plugin-*` framework plugins such as `plugin:app`, `plugin:menu`, `plugin:dialog`). They are unrelated to AiMaMi's own `plugins` feature module and exist in effectively every Tauri v2 app regardless of whether the app defines its own plugin system.

Cross-check on macOS: `strings -a` on `raw/binary/AiMaMi 1.2.3.app/Contents/MacOS/AiMaMi` (210742 lines) against the same eleven anchors also returned **zero hits**. This is reported as corroboration only; the Windows conclusion does not depend on the macOS result (`doNotInferWindowsFromMacOS=true` respected — Windows evidence class 1–3 above is independently sufficient).

### Methodology validation (positive control)

The same `strings -a` + grep procedure run against `raw/binary/AiMaM 1.0.9 win64.exe` **does** find `codexmate_lib::core::plugins::registry::PluginRegistry` as a literal string (line 303600 of the dump). This confirms the detection method reliably surfaces the plugins subsystem when it is present in a same-generation Windows Tauri/Rust binary, which makes the zero-hit result on 1.2.3 a meaningful negative rather than a tooling blind spot.

## Conclusion

`removed = true`. The AiMaMi plugins subsystem (`PluginRegistry`, its four Tauri commands, its two builtin plugins `web_tools` and `image_support`, and its `plugins.json` persistence schema), which was fully present and reverse-confirmed (13/13 leaf PASS) in 1.0.9 on both platforms, is absent from the 1.2.3 windows-x64 build across all three independently-checked evidence classes, and independently also absent from the 1.2.3 macos-arm64 build. No trace of a renamed/distilled successor was found under any of the 65 windows-x64 raw module directories, the 131 frontend commands, or the binary string table.

## Scope limits

This is a **negative-presence audit**, not a `full_leaf_100_definition_v2` closure. It does not and cannot prove a negative beyond the evidence classes checked (it is possible, though considered unlikely given `strings -a` covers all `.rdata`/`.text` string literals, that dead code or a feature-flagged path remains without any surviving string literal or IPC surface — that residual possibility is recorded as `Unknown (low-likelihood, unfalsifiable by static string search alone)` and is not upgraded to a stronger claim). No IDA decompile, xrefs, or callee tracing was performed in this audit; this audit's `removed=true` conclusion is not a `strictImplementationUse` or `readyToImplement` gate value under `AGENTS.md` §消费 Gate 规约 — it is a diagnostic/scoping conclusion that answers the presence/absence question the orchestrator asked and is intended to close the `plugins` line item in `wf-aimami123-fullapp-20260724`'s full-app gap inventory as "no leaf work required" rather than "still pending".
