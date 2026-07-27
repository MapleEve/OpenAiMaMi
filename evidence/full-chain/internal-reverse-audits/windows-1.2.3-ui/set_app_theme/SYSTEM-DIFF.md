# System Diff — AiMaMi 1.2.3 Windows set_app_theme (partial/gap)

## Platform Artifacts

- Windows x64: `AiMaMi.1.2.3 win64.exe`, sha12=`aeccccd78e47`, size=33667584 bytes; companion `.i64` present at `raw/binary/AiMaMi.1.2.3 win64.exe.i64` but NOT opened/decompiled this session.
- macOS: Unknown — no macos-1.2.3 binary evidence examined this session for this command.

## Frontend IPC / Control-flow

- set_app_theme: `async function m(n){return t("plugin:app|set_app_theme",{theme:n})}` in `app-TuXtMya9.js:1`, exported as `setTheme`, argKey=`theme`. Structurally identical to 1.0.9 (`app-C4jGp0lC.js`); differs only in chunk-hash filename and minified export letter (both cosmetic re-bundling artifacts, not behavior evidence).
- `ipc-contracts.jsonl` (131 win 1.2.3 commands) has 0 hits for theme/set_app_theme — extractor omits `plugin:app|*` built-in shim commands (same known gap documented at 1.0.9).

## Backend Commands / Control-flow / Pseudocode / Call-tree / Leaf

- **Unknown.** Zero `.c` pseudocode files exist under `raw/aimami/1.2.3/windows-x64/**/ida/pseudocode/` for this leaf. No module directory named `ui` or `theme` exists among the 65 top-level module dirs in `raw/aimami/1.2.3/windows-x64/`.
- 1.0.9 reference only (NOT 1.2.3 evidence): owner `cmd_set_app_theme_coroutine_owner_sys@0x14091bc60`, 1780B/57BB/16 wind states, call-tree depth=6, terminal=`tauri_ipc_resolve_sys`, no disk write.

## Interface / Error / Boundary

- Unknown at 1.2.3. 1.0.9 reference shape (NOT confirmed for 1.2.3): argKeys=[theme:String], variants dark/light/system/micaDark/micaLight/tabbedDark/tabbedLight; response `CoreEnvelope<()>`; error=graceful `Err(String)`; side-effect=in-memory all-window apply only, no disk write.

## Gate Leaf

- set_app_theme: `blocks_start` / `gap_needs_new_raw`. dim1=candidate, dim2-dim6=missing.

## Plugin / Capability

- `is_upstream=true` (Tauri built-in `app` plugin command family, consistent with 1.0.9 classification) — inferred from command-string identity (`plugin:app|set_app_theme`), not independently re-verified against 1.2.3 backend since no 1.2.3 backend evidence exists.

## OTA / Package

N/A for this leaf.

## Resource / Binary Surface

- Windows: 1 known leaf (set_app_theme), 0/1 backend-covered.
- macOS: not assessed.

## Unknown

- Backend owner/decompile/call-tree/interface/error/side-effect/platform-gate at 1.2.3 windows — all Unknown (gap_needs_new_raw).
- macOS 1.2.3 status for this command — Unknown, not attempted this session (no `audits/macos-1.2.3-ui/` exists; no macOS 1.2.3 raw dir named ui/theme found in a quick existence check).
- Whether 1.2.3 backend behavior differs from the 1.0.9 owner (`0x14091bc60`) — cannot be assessed without opening the 1.2.3 IDB; RULE9 migration status = `diff_required`, not `migrated_no_behavior_diff`.
