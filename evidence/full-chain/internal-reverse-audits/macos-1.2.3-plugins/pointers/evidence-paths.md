# Evidence Pointers — macos-1.2.3-plugins

All paths are `${C5CM_INTERNAL_HISTORY_ROOT:-$C5CM_SHARE_ROOT}`-relative (SMB root, on this machine ``). Raw evidence lives on the SMB share only; this conclusion package holds no raw artifacts, only these pointers.

## Binary SOT
- `raw/binary/AiMaMi 1.2.3.app` — macOS-arm64 1.2.3 binary SOT. Thin arm64 image `AiMaMi.arm64.thin`, sha256 `25d6d04e6d94c3f1e8258d2b348360b228fda4fc1c3d38b6383c84a2a8d53d21` (per `raw/aimami/1.2.3/macos-arm64/VERSION-BASELINE.md` / `MANIFEST.md`).
- Positive-control baseline: `raw/binary/AiMaM 1.0.9 win64.exe` (methodology check finds PluginRegistry; per windows sibling); macOS present-baseline package `internal-reverse/audits/macos-1.0.9-plugins/`.

## Signal 1 — frontend IPC command enumeration (0/131)
- `raw/aimami/1.2.3/macos-arm64/frontend/ipc-contracts.jsonl` — 131 commands, 0 plugin.

## Signal 2 — frontend page bundle topology (no plugins page)
- `raw/aimami/1.2.3/macos-arm64/frontend/beautified/` — 10 page bundles, no `plugins-page-*.js`.
- `raw/aimami/1.2.3/macos-arm64/frontend/beautified/settings-page-B8vywarZ.js` — direct grep `plugin` = 0 (in 1.0.9 this hosted the plugin toggle surface).
- `raw/aimami/1.2.3/macos-arm64/frontend/pages/` — page inventory cross-check.

## Signal 3 — backend commands/ directory topology (no plugins/)
- `raw/aimami/1.2.3/macos-arm64/commands/` — 16 subdirs (account_io, account_oauth, accounts, autostart, debug_bundle, debug_report, deeplink, hotspot, ida, mcp, relay, sessions, system, tray_menu, voice, voice_runtime), no `plugins/`.
- `raw/aimami/1.2.3/macos-arm64/backend-baseline/commands-baseline.md` — §0 directory-deviation analysis; does not list plugins as expected-but-missing.

## Signal 4 — binary string-pool enumeration (0 feature hits)
- `raw/aimami/1.2.3/macos-arm64/run/ida/pseudocode/run_0x1006f50c0.c` — app builder/setup entry; registers only Tauri-official plugins (updater/autostart/deep_link/dialog/global_shortcut/process); 5 `.manage()` calls (types not per-call desugared — accepted_unknown); no PluginRegistry `.manage()`/registration.
- Live IDA (verification pass, re-runnable): `tools/IDA CLI mac call server_health '{}'` then `find_regex '{"pattern":"(?i)plugin"}'` on `raw/aimami/1.2.3/macos-arm64/.../AiMaMi.i64` (module=AiMaMi, IDA decompiler_ready=true) — 10 hits, all Tauri framework/webview strings.

## Prior-version / cross-platform / provenance
- `internal-reverse/audits/macos-1.0.9-plugins/` — macOS present-baseline (full_leaf_100 accepted; behavior reference only, NOT a 1.2.3 basis).
- `internal-reverse/audits/windows-1.0.9-plugins/` — Windows present-baseline.
- `internal-reverse/audits/windows-1.2.3-plugins/` — same-version Windows removed=true sibling (independent same-platform evidence).
- `intermediate/aimami/1.1.8/macos-arm64/_threadmodel/THREAD-MODEL.md` (INDEX key `aimami/1.1.8/macos-arm64/threadmodel`) — last-known-present point: PluginRegistry in the 1.1.8 `.manage()` 3-state list.
- `internal-reverse/audits/BASELINE-FINAL-1.2.3.md`, `internal-reverse/audits/COVERAGE-FINAL-1.2.3.md` — 1.2.3 full baselines; neither mentions plugins.

## Notes
- No `INDEX.jsonl` entry was appended by this reduce pass (no new raw evidence produced). The cited raw artifacts were produced by prior sessions (see `raw/aimami/1.2.3/macos-arm64/MANIFEST.md`).
- Storage red line: this package (`internal-reverse/audits/macos-1.2.3-plugins/`) contains only conclusions, summaries, manifest, review, and these pointers — no raw `.c` / dumps / disassembly.
