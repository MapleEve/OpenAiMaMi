# System Diff — ui module, 1.0.9 → 1.2.3, windows-x64

## Platform Artifacts

- 1.0.9 windows: `AiMaM 1.0.9 win64.exe` — `set_app_theme` owner confirmed at `0x14091bc60` (RULE9 comparison anchor).
- 1.2.3 windows: `AiMaMi.1.2.3 win64.exe` (sha256 `aeccccd78e470ad6cfdb52d72af624b34ce17a4a0b04e7596b32583eaf972396`, 33667584 bytes) — zero backend raw/IDA evidence for any theme/appearance owner.

## Frontend IPC / Control-flow

- 1.0.9: `plugin:app|set_app_theme` shim present (`app-C4jGp0lC.js`), `strictImplementationUse` dims1-5 pass.
- 1.2.3: `plugin:app|set_app_theme` shim present (`app-TuXtMya9.js:1`), textually near-identical (same command string, same argKey `theme`, same shape; only minified export letter and Vite chunk-hash filename differ). Not in the structured `ipc-contracts.jsonl` (131 commands, 0 hits) on either version — the extractor omits `plugin:app|*` builtin shims by design, unchanged behavior across versions.

## Backend Commands / Control-flow / Pseudocode / Call-tree / Leaf

- 1.0.9: `set_app_theme` fully decompiled, owner `0x14091bc60`, `strictImplementationUse` (dims1-5 pass, dim6 open).
- 1.2.3: no `ui`/`theme` raw module directory exists among the 65 windows-x64 module directories (nor among the 8 `commands/` sub-directories). No owner symbol found. No decompile attempted this reduce — no address to target; a future IDA producer pass is required (see `logic/UI-THEME-GAP-1.2.3.md`).

## Interface / Error / Boundary

Not re-verified at 1.2.3. 1.0.9 contract (`argKeys=[theme]`, `CoreEnvelope<()>`, all-window in-memory apply, no disk write) is a same-platform prior-version reference only.

## Gate Leaf

`blocks_start` / `gap_needs_new_raw`. See `README.md` §Gate Leaf Status and `gate-report.json`.

## Plugin / Capability

`set_app_theme` is a Tauri-framework built-in app-plugin command (`plugin:app|*`), not a C5/AiMaMi `#[tauri::command]`-authored command — same framework provenance at both 1.0.9 and 1.2.3. Framework provenance makes cross-version behavior drift unlikely but does NOT substitute for dim2/dim3/dim5 evidence (`is_upstream=true` is not proof).

## OTA / Package

Not checked in this reduce (out of scope; single-leaf module-completeness question, not a package/OTA audit).

## Resource / Binary Surface

`raw/aimami/1.2.3/windows-x64/` module directory count: 65, none named `ui`/`theme`. `raw/aimami/1.2.3/windows-x64/commands/` sub-directory count: 8, none named `ui`/`theme`.

## Unknown

- Backend owner/pseudocode/call-tree/interface/platform-gate/acceptance-mapping (dim2-dim6) for `set_app_theme` at 1.2.3 windows-x64: entirely `Unknown`, pending a future IDA producer pass.
- macOS 1.2.3 status for this leaf: `Unknown` (`audits/macos-1.2.3-ui/` does not exist; out of scope for this Windows-only package; not inferred from Windows findings per `doNotInferWindowsFromMacOS`).
- Two semantically-similar command candidates (`focus_main_window`, `has_notch`) were checked via the red-line-15 orphan sweep and resolved `already_in_canonical` under `windows-1.2.3-system-hotspot` — not an `ui` module unknown, recorded here only for completeness of the orphan trail.
