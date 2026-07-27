# System Diff — AiMaMi 1.2.3 Windows system-usage

## Platform Artifacts

- Windows x64: `AiMaMi.1.2.3 win64.exe`, sha256 `aeccccd78e470ad6cfdb52d72af624b34ce17a4a0b04e7596b32583eaf972396` (single-file Tauri exe, no NSIS wrapper, confirmed by `win-1.2.3-frontend-extract-20260724`).
- macOS: separate raw evidence exists (`raw/aimami/1.2.3/macos-arm64/commands/system/` + `core/repository/`), read this pass only for cross-reference/density comparison, NOT used to fill Windows gaps (doNotInferWindowsFromMacOS honored).

## Frontend IPC / Control-flow

- Windows `frontend/ipc-contracts.jsonl` (131 commands): `get_usage_refresh_interval`/`set_usage_refresh_interval` command names confirmed present via grep. No page-level UI-trigger reduce performed this pass on either platform.

## Backend Commands / Control-flow / Pseudocode / Call-tree / Leaf

- `get_usage_refresh_interval`: Windows owner 0x14018cbb0 (wrapper only, non-truncated); macOS has both a `commands/system/` wrapper (0x1007cae80) AND a deeper `core/repository/get_usage_refresh_interval` (0x100a673a0). Windows repository/ directory has zero usage-named files — a genuine platform depth asymmetry observed in raw evidence, not resolved this pass.
- `set_usage_refresh_interval`: same pattern — Windows owner 0x14018c2d0 (wrapper only); macOS has `commands/system/set_usage_refresh_interval` (0x1007cb0a0) AND `core/repository/set_usage_refresh_interval` (0x100a68310).
- macOS additionally has `core/repository/usage_refresh_interval_seconds` (0x100a7fd00) with no Windows-side named counterpart found.
- `refresh_usage_snapshot` / `refresh_single_account_usage`: NOT covered in this bundle (owned by windows-1.2.3-accounts, dim2 Hex-Rays decompile FAILED at 1.2.3 — a regression vs the 1.0.9 build where refresh_usage_snapshot's decompile was ceiling-cracked to a successful async poll body).
- `compute_usage_analytics` / `load_usage_analytics`: NOT covered in this bundle (owned by windows-1.2.3-sessions-analytics, dim2-wrapper closed for all 9 sessions-analytics-cluster commands including these two).

## Interface / Error / Boundary

Not closed this pass for the 2 owned targets (dim4 missing).

## Gate Leaf

- `get_usage_refresh_interval` / `set_usage_refresh_interval`: `gap_needs_reducer` (this bundle).
- `refresh_usage_snapshot` / `refresh_single_account_usage`: `consumerStartBlocked` (windows-1.2.3-accounts, pointer only).
- `compute_usage_analytics` / `load_usage_analytics`: `consumerStartReady` (windows-1.2.3-sessions-analytics, pointer only).

## Plugin / Capability

N/A for this cluster (plugins module separately confirmed removed in 1.2.3 windows-x64 per `windows-1.2.3-plugins`; unrelated to usage-settings).

## OTA / Package

N/A.

## Resource / Binary Surface

- Windows: 6/6 domain-command raw files accounted for on disk; 2/6 newly reduced into this bundle, 4/6 already canonically owned elsewhere (pointer only, not duplicated).

## Unknown

- Windows-side core/repository/ deep layer for usage-interval settings: not found under "usage" naming; targeted search (e.g. by settings-key string `aRepo`/`aInterval` xref, not by name) not performed this pass.
- 1.0.9 -> 1.2.3 behavior diff for get/set_usage_refresh_interval: not calibrated (RULE9 diff_required).
- Reason for refresh_usage_snapshot Hex-Rays decompile regression (worked via ceiling-crack at 1.0.9, fails outright at 1.2.3): not investigated this pass, recorded as observed fact only.
