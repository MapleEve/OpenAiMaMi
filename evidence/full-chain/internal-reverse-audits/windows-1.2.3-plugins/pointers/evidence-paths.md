# Evidence Pointers — windows-1.2.3-plugins

All paths are `${C5CM_INTERNAL_HISTORY_ROOT:-$C5CM_SHARE_ROOT}`-relative. No raw artifact is copied into this bundle; this file only points at existing SMB evidence.

## Binary SOT (this audit)

- `raw/binary/AiMaMi.1.2.3 win64.exe` — sha256 `aeccccd78e470ad6cfdb52d72af624b34ce17a4a0b04e7596b32583eaf972396`, 33667584 bytes, PE32+ x86-64 GUI, single-file Tauri exe (no NSIS wrapper). Confirmed by `win-1.2.3-frontend-extract-20260724` (see REVERSE-STATUS.md).
- `raw/binary/AiMaMi 1.2.3.app/Contents/MacOS/AiMaMi` — sha256 `e3f2fec7d7cd32c8a7a650ec563577b8c74516aed270c1230a5b11296942114d`, 65072960 bytes (cross-platform negative-result check only, not used to infer Windows result).
- `raw/binary/AiMaM 1.0.9 win64.exe` — used as methodology-validation anchor: contains `codexmate_lib::core::plugins::registry::PluginRegistry` as a literal string, confirming the strings-based detection method used below would have found the 1.2.3 equivalent had it still existed.

## Raw directory topology (this audit)

- `raw/aimami/1.2.3/windows-x64/` — top-level module directory listing (65 entries as of 2026-07-24, produced across `<审计会话> `win-1.2.3-app-function-inventory-gapfill-20260724`, `win123-closeout-backfill-20260724`, `win-1.2.3-frontend-extract-20260724`). No `plugins/` subdirectory exists, unlike e.g. `mcp/`, `skills/`, `accounts/`, `relay-core/` which each have dedicated module raw trees.
- `raw/aimami/1.2.3/macos-arm64/` — same check, cross-platform, also no `plugins/` (or equivalently-named) module directory.

## Frontend IPC contract (this audit)

- `raw/aimami/1.2.3/windows-x64/frontend/ipc-contracts.jsonl` — 131 lines / 131 unique commands (produced by `win-1.2.3-frontend-extract-20260724`, tauri-dumper). Zero case-insensitive matches for `plugin` across `command`/`name` fields or raw line text.
- `raw/aimami/1.2.3/windows-x64/frontend/frontend-files.txt`, `ast-facts.json`, `frontend-contract-report.md` — zero case-insensitive `plugin` matches.
- `raw/aimami/1.2.3/macos-arm64/frontend/ipc-contracts.jsonl` — 131 lines / 131 unique commands, zero `plugin` matches (cross-platform corroboration only).

## Prior-version baseline (methodology + comparison anchor, not upstream fact for 1.2.3)

- `audits/windows-1.0.9-plugins/` — 1.0.9 windows-x64 plugins module, PASS 13/13 leaf closure (`list_plugins`, `toggle_plugin`, `get_plugin_config`, `update_plugin_config`, `PluginRegistry::{set_enabled,list,get_config,update_settings,save_store_static}`, `PluginStoreSchema::serialize`, `builtin::{all_builtin_plugins,web_tools::plugin_info,image_support::plugin_info}`).
- `audits/macos-1.0.9-plugins/` — same for macOS 1.0.9.
- `internal-reverse/OUTPUT-SPEC.md §plugins 1.0.8 最小逆向任务` — describes the macOS 1.0.8 plugins module as `blocked` for `full_leaf_100` at that time; independent of this audit's 1.2.3 presence/absence question.

## Full-app baseline context (1.2.3)

- `audits/COVERAGE-FINAL-1.2.3.md`, `audits/BASELINE-FINAL-1.2.3.md` — 1.2.3 full-app 1638-function backend baseline + 6-page frontend baseline (`<审计会话> DONE); no `plugins` module entry in either coverage table (only unrelated `tauri-plugin-autostart` package reference for the `autostart` module).
- `REVERSE-STATUS.md` `[<审计会话> — lists `plugins` among modules still lacking a canonical `audits/<platform>-1.2.3-<module>/` bundle as of the 2026-07-24 full-app gap inventory; this audit is the first canonical bundle for the `plugins` module at 1.2.3, and its answer is `removed` rather than a populated leaf table.

## Cross-platform note

`platformPolicy.doNotInferWindowsFromMacOS=true` was respected: the Windows conclusion is derived solely from Windows-produced evidence (Windows raw dir topology + Windows frontend ipc-contracts.jsonl + Windows binary string enumeration). The macOS check was run independently and is reported only as corroboration, not as the basis for the Windows result.
