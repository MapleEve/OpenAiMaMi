# Evidence Pointers — windows-1.2.3-ui (module root)

All paths are `${C5CM_INTERNAL_HISTORY_ROOT:-$C5CM_SHARE_ROOT}`-relative. No raw artifact is copied into this bundle; this file only points at existing SMB evidence. Leaf-level pointers for `set_app_theme` live in `set_app_theme/pointers/evidence-paths.md` (unchanged by this reduce).

## Binary SOT

- `raw/binary/AiMaMi.1.2.3 win64.exe` — sha256 `aeccccd78e470ad6cfdb52d72af624b34ce17a4a0b04e7596b32583eaf972396`, 33667584 bytes, PE32+ x86-64 GUI, single-file Tauri exe (no NSIS wrapper).
- `raw/binary/AiMaM 1.0.9 win64.exe` — RULE9 same-platform prior-version comparison anchor (known-good `set_app_theme` owner `0x14091bc60`).

## Raw directory topology (module-completeness angle A)

- `raw/aimami/1.2.3/windows-x64/` — 65 top-level module directories (re-enumerated this session). No `ui`/`theme` directory exists.
- `raw/aimami/1.2.3/windows-x64/commands/` — 8 sub-directories (account_io, accounts, analytics, autostart, ida, relay, system, tray_menu, voice). No `ui`/`theme` sub-directory exists.

## Frontend IPC contract (angle B)

- `raw/aimami/1.2.3/windows-x64/frontend/ipc-contracts.jsonl` — 131 lines/commands. Zero case-insensitive hits for `theme`/`appearance`.
- `raw/aimami/1.2.3/windows-x64/package/AiMaMi-1.2.3-win64/tauri-dumped-assets/direct/assets/app-TuXtMya9.js` — line 1, direct grep hit: `plugin:app|set_app_theme` shim, argKey `theme`, exported as `setTheme`.

## Orphan cross-reference (angles C/D)

- `internal-reverse/audits/WIN-1.2.3-COMMAND-CEILING-CLOSEOUT.md` — 131-command win-native handler naming ledger, used as the semantic-scan corpus for angle C.
- `internal-reverse/audits/windows-1.2.3-system-hotspot/manifest.json` — confirms `focus_main_window` (VA `0x14096F5D0`) and `has_notch` (VA `0x140970DA0`) are own dedicated command-layer functions of the `system-hotspot` module, not orphans of `ui`.

## Leaf bundle (this package's own)

- `internal-reverse/audits/windows-1.2.3-ui/set_app_theme/` — produced by `win-ui-set-app-theme-123gap-20260725`; full leaf-level pointers in its own `pointers/evidence-paths.md`.

## Prior-version baseline (methodology + comparison anchor, not upstream fact for 1.2.3)

- `internal-reverse/audits/windows-1.0.9-ui/set_app_theme/` — 1.0.9 windows-x64 `set_app_theme` leaf, `strictImplementationUse` (dims1-5 pass, dim6 open). Cited as RULE9 comparison anchor only; not carried forward (`rule9_migration_status=diff_required`).

## Full-app baseline context (1.2.3)

- `internal-reverse/REVERSE-STATUS.md` `[<审计会话> (~line 4011-4013) — full-app gap inventory that first listed `ui` among windows-exclusive modules lacking a 1.2.3 canonical bundle; closed (partial/gap-honest, not full closure) by `win-ui-set-app-theme-123gap-20260725` and this reduce backfill.
- `internal-reverse/audits/COVERAGE-FINAL-1.2.3.md`, `internal-reverse/audits/BASELINE-FINAL-1.2.3.md` — 1.2.3 full-app baseline context; no `ui`/`theme` module entry in either coverage table.

## Cross-platform note

`platformPolicy.doNotInferWindowsFromMacOS=true` respected: this package's conclusions are derived solely from Windows-produced evidence. No `audits/macos-1.2.3-ui/` bundle exists; macOS 1.2.3 status for this leaf remains `Unknown` (out of scope for this Windows-only package, not inferred from Windows findings).
