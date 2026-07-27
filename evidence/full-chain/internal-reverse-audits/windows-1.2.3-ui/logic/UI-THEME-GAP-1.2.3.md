# logic/ — UI/Theme Gap Conclusion — windows-1.2.3-ui

> **status:** `partial_gap_conclusion` (not a FULL-CHAIN closure; not a filler stub)
> **reason:** the module's single known leaf (`set_app_theme`) has zero windows-x64 1.2.3 backend raw/IDA evidence; a `logic/FULL-CHAIN-1.2.3.md` cannot be written honestly because dim2-dim5 (backend owner, call-tree, interface/DTO, platform gate) are entirely `Unknown`, not merely thin.
> **produced by:** reduce session `win-1.2.3-ui-gatereport-reduce-20260726` (machine `<host>`), 2026-07-26
> **over prior conclusion:** `win-ui-set-app-theme-123gap-20260725` (partial evidence pack, gap-honest)

## Why this is not a `FULL-CHAIN-1.2.3.md`

Per `OUTPUT-SPEC.md`, a `logic/*.md` full-chain file must synthesize all six evidence dimensions into a writable-code final result. It "不能只写『找到函数』或『命令存在』" — it must trace a real implementation leaf. For `set_app_theme` at 1.2.3 windows-x64:

- **dim1 (frontend control-flow)** — `candidate` only, not a closed pass. The frontend shim is confirmed present (see below) but the invoke-wrapper identity was not independently byte-traced through `index-B40jKs17.js` this session (1MB minified bundle; a prior grep attempt on this bundle errored on binary/mixed-encoding content mid-file and was not retried).
- **dim2 (backend owner + pseudocode)** — `missing`. No IDA decompile has been run against `raw/binary/AiMaMi.1.2.3 win64.exe(.i64)` for this leaf this cycle. No `.c` pseudocode file exists under `raw/aimami/1.2.3/windows-x64/**/ida/pseudocode/` for a theme/appearance owner.
- **dim3 (call-tree to leaf)** — `missing`. No call tree is possible without a dim2 owner address.
- **dim4 (interface/DTO/error/side-effect)** — `missing` at 1.2.3. The 1.0.9 contract (`argKeys=[theme]`, `CoreEnvelope<()>`, all-window in-memory apply, no disk write) is a same-platform **prior-version reference only** — not carried forward without a diff, per RULE9.
- **dim5 (platform gate)** — `missing`. No same-version-same-platform (windows-x64, 1.2.3) IDA evidence exists. Per AGENTS.md dim5, 1.0.9 Windows evidence does not satisfy 1.2.3 dim5.
- **dim6 (test/acceptance mapping)** — `missing` (moot before dim2-dim5 close).

Writing a `logic/FULL-CHAIN-1.2.3.md` that presents `set_app_theme`'s 1.0.9 body as this version's implementation basis would be **fabrication**: RULE9's diff-first check (below) found the backend side undiffable, so the 1.0.9 gate ceiling is explicitly **not** carried forward.

## What is actually known (grounded, from already-landed evidence)

### 1. Frontend command face — confirmed present, structurally unchanged shape

`raw/aimami/1.2.3/windows-x64/package/AiMaMi-1.2.3-win64/tauri-dumped-assets/direct/assets/app-TuXtMya9.js:1`:

```js
async function m(n){return t("plugin:app|set_app_theme",{theme:n})}   // exported as setTheme
```

Identical shim shape to the 1.0.9 build (`app-C4jGp0lC.js`), differing only in the minified export letter and the Vite chunk-hash filename (expected across independent rebuilds). `argKey=theme`.

This command does **not** appear in `raw/aimami/1.2.3/windows-x64/frontend/ipc-contracts.jsonl` (131 commands, 0 hits for `theme`/`set_app_theme`) — the frontend contract extractor omits `plugin:app|*` Tauri-builtin shim commands from the structured CCF JSONL by design; this omission behavior is identical to the one already documented for 1.0.9. The command only surfaces via direct grep of the dumped frontend JS asset.

### 2. Backend raw coverage — confirmed zero

`raw/aimami/1.2.3/windows-x64/` has 65 top-level module directories (account_io, account_metadata, aliyun_asr, analytics, asr, atomic_write, auth, codex_catalog, codex_config, codex_config_reconciler, codex_diagnostic, codex_mutation, codex_project_state, codex_runtime, codex_thread_visibility, codex_writer, codexmate_lib, commands, config_takeover, custom-instructions, debug_bundle, debug_log, debug_report_upload, deeplink, dialects, fetch_models, frontend, health_check, image_compat, invariants, io, keychain, legacy_virtual_auth, llm, managed_blocks, manager, mcp, mod, models, oauth_login, oauth_refresh, package, paths, plan_mapping, process, proxy, proxy_passthrough, proxy_server, quota, relay-core, repository, router_reconciler, router_transition, router_unlock_auth, runtime, session_analytics, sessions, single_instance, skills, storage, system_volume_windows, text_injection_windows, transition_journal, translator, tray, version-delta, voice_runtime, voice_trigger_windows, workspace) — none named `ui` or `theme`. `commands/` (the Tauri command-layer subtree) has 8 sub-dirs (account_io, accounts, analytics, autostart, ida, relay, system, tray_menu, voice), also none named `ui`/`theme`. No `.c` pseudocode exists for a theme owner anywhere in the tree.

### 3. RULE9 diff-first verdict — `diff_required`, not migrated

Per AGENTS.md RULE 9 (version-iteration diff migration), the 1.0.9→1.2.3 same-platform diff for this leaf was attempted:

- **Frontend side is diffable**: the 1.2.3 shim is textually near-identical to 1.0.9 (same command string, same argKey, same shape) — a `same-commands` candidate on the frontend side alone.
- **Backend side is NOT diffable**: 1.2.3 has zero win backend raw/IDA evidence for this leaf, so there is nothing on the 1.2.3 side to compare the known-good 1.0.9 owner (`0x14091bc60`) against.

Per RULE9, a diff requires evidence on **both** sides to classify as `migrated_no_behavior_diff` or `unchanged_reused`. With one side entirely absent, the correct classification is `diff_required` — the target stays `Unknown`/`gap_needs_new_raw`, and the 1.0.9 gate ceiling (`strictImplementationUse`, dims1-5 pass, dim6 open — see `windows-1.0.9-ui/set_app_theme/logic/THEME-PLATFORM-DIFF-109-DISTILLED.md`) is **not** carried forward to 1.2.3.

### 4. Orphan sweep (red line 15, four angles) — no additional truly_undone targets

A semantic keyword sweep (theme/appearance/window/style/dark/light/mica/tabbed/color/chrome) over the 131-command 1.2.3 windows-x64 frontend command face and the 131-handler ledger in `audits/WIN-1.2.3-COMMAND-CEILING-CLOSEOUT.md` surfaced two superficially UI-adjacent names: `focus_main_window` and `has_notch`. Both are **already_in_canonical** under `internal-reverse/audits/windows-1.2.3-system-hotspot/` (own dedicated command-layer functions at `0x14096F5D0` and `0x140970DA0` respectively, part of the always-on-top hotspot companion widget feature, not the ui/theme leaf). See `gate-report.json.four_angle_completeness` and `manifest.json.orphan_four_category` for the full breakdown. **Zero `truly_undone` orphans** — no new equivalent-reversal work is opened for these two names, per SKILL.md red line 15.

## Gate consequence (unchanged by this backfill)

- `set_app_theme`: `gate_tier=blocks_start`, `gap_class=gap_needs_new_raw`, `gate_accepted=false`, `implementation_use=false`.
- Module-root `windows-1.2.3-ui`: `cluster_gate_summary.gap_needs_new_raw=1`, all other tiers `0`.
- This backfill (manifest.json/logic/reviews at module root + four-angle sweep in gate-report.json) does **not** upgrade or downgrade the gate — it completes the RULE 8 package skeleton and confirms (via a fresh orphan sweep) that the gap is real and singular, not masking additional undiscovered targets.

## Next producer steps (unchanged from set_app_theme/data/task-plan.json)

1. Open `raw/binary/AiMaMi.1.2.3 win64.exe.i64` in IDA; locate the 1.2.3 owner via the `set_app_theme` string xref (same method used at 1.0.9: single data xref → enclosing coroutine function).
2. `callees`/`xrefs_to` to trace the call-tree to leaf; specifically re-confirm whether 1.2.3 still performs no disk write for this command (1.0.9's raw pass initially mis-attributed persistence and had to be corrected — avoid repeating that error).
3. Decompile and diff against the known-good 1.0.9 owner body (`0x14091bc60`) to determine `migrated_no_behavior_diff` vs `diff_reversed` per RULE9.
4. Independently open a macOS 1.2.3 pass for this leaf (`audits/macos-1.2.3-ui/` does not exist; out of scope for this Windows-only package per `doNotInferWindowsFromMacOS`).
