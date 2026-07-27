# Evidence Paths — windows-1.2.3-ui / set_app_theme (partial/gap)

## Binary SOT (present, NOT decompiled this session)
- `${C5CM_INTERNAL_HISTORY_ROOT}/raw/binary/AiMaMi.1.2.3 win64.exe`
- `${C5CM_INTERNAL_HISTORY_ROOT}/raw/binary/AiMaMi.1.2.3 win64.exe.i64`
- SHA256 (computed this session): `aeccccd78e470ad6cfdb52d72af624b34ce17a4a0b04e7596b32583eaf972396`
- Size: 33667584 bytes (matches PE32+ x86-64 GUI size cited in REVERSE-STATUS.md ~line 4051)

## Frontend evidence (1.2.3, confirmed this session)
- `${C5CM_INTERNAL_HISTORY_ROOT}/raw/aimami/1.2.3/windows-x64/package/AiMaMi-1.2.3-win64/tauri-dumped-assets/direct/assets/app-TuXtMya9.js`
  - line 1: `async function m(n){return t("plugin:app|set_app_theme",{theme:n})}` exported as `setTheme`
- `${C5CM_INTERNAL_HISTORY_ROOT}/raw/aimami/1.2.3/windows-x64/package/AiMaMi-1.2.3-win64/tauri-dumped-assets/direct/assets/index-B40jKs17.js`
  - `t` presumed = invoke wrapper import (per module `import{bt as t,bu as e,bv as a}from"./index-B40jKs17.js"`); NOT independently byte-traced this session.
- `${C5CM_INTERNAL_HISTORY_ROOT}/raw/aimami/1.2.3/windows-x64/frontend/ipc-contracts.jsonl` — 131 commands, 0 theme/set_app_theme hits (plugin:app|* shim omitted by extractor).
- `${C5CM_INTERNAL_HISTORY_ROOT}/raw/aimami/1.2.3/windows-x64/frontend/ast-facts.json` — 5 "theme" hits, all unrelated ("Analytics Theme Color" UI copy string, not this command).
- `${C5CM_INTERNAL_HISTORY_ROOT}/raw/aimami/1.2.3/windows-x64/frontend/http-hits.jsonl` — 1 "theme" hit, unrelated (Tailwind/CSS-in-JS `isThemeGetter` minified library code).

## Backend evidence (1.2.3) — NONE
- No directory under `${C5CM_INTERNAL_HISTORY_ROOT}/raw/aimami/1.2.3/windows-x64/` named `ui` or `theme` (65 top-level module dirs enumerated this session: codexmate_lib, account_io, codex_config_reconciler, version-delta, proxy_passthrough, transition_journal, managed_blocks, repository, llm, proxy, debug_report_upload, frontend, aliyun_asr, text_injection_windows, auth, codex_mutation, debug_log, image_compat, workspace, io, runtime, paths, invariants, mcp, models, codex_writer, router_reconciler, tray, translator, storage, oauth_login, relay-core, codex_diagnostic, manager, oauth_refresh, sessions, keychain, dialects, router_transition, custom-instructions, atomic_write, legacy_virtual_auth, commands, proxy_server, skills, quota, router_unlock_auth, debug_bundle, codex_config, voice_trigger_windows, codex_runtime, codex_catalog, codex_project_state, fetch_models, mod, package, config_takeover, health_check, codex_thread_visibility, analytics, process, system_volume_windows — none is ui/theme).
- Zero `.c` files matching a set_app_theme/theme owner under any `**/ida/pseudocode/` path in the 1.2.3 windows-x64 raw tree.

## Same-platform prior-version reference (1.0.9, NOT 1.2.3 evidence — cited for locator method + expected shape only)
- `internal-reverse/audits/windows-1.0.9-ui/set_app_theme/README.md`
- `internal-reverse/audits/windows-1.0.9-ui/set_app_theme/AI.md`
- `internal-reverse/audits/windows-1.0.9-ui/set_app_theme/gate-report.json`
- `internal-reverse/audits/windows-1.0.9-ui/set_app_theme/logic/WIN-SET-APP-THEME-DISTILLED-109.md`
- `internal-reverse/audits/windows-1.0.9-ui/set_app_theme/logic/THEME-PLATFORM-DIFF-109-DISTILLED.md` (mac-vs-win cross-platform verdict at 1.0.9; RULE9/dim5 forbid using this to infer 1.2.3 or macOS)
- 1.0.9 owner VA (reference only): `0x14091bc60` (`cmd_set_app_theme_coroutine_owner_sys`), 1780B/57BB/16 wind states
- 1.0.9 raw evidence root (reference only): `${C5CM_INTERNAL_HISTORY_ROOT}/raw/aimami/1.0.9/windows-x64/ui/cmd_set_app_theme_coroutine/`

## Cross-check performed this session (negative results)
- `grep -rl "set_app_theme" internal-reverse/audits/` → only `windows-1.0.9-ui/*` (no 1.2.3 bundle exists prior to this session).
- `grep "1.2.3.*ui\|ui.*1.2.3\|1.2.3.*theme\|theme.*1.2.3"` in `REVERSE-STATUS.md` → 1 hit (wf-aimami123-fullapp-20260724 gap-inventory line listing `ui` as a windows-exclusive module still lacking a 1.2.3 canonical bundle; no in-progress claim on this specific module/leaf).
- `find raw/aimami/1.2.3/macos-arm64 -iname "*ui*" -o -iname "*theme*"` → only false-positive substring hits (`install_macos_quit_guard`, `request_user_quit`); no dedicated mac ui/theme module dir.
