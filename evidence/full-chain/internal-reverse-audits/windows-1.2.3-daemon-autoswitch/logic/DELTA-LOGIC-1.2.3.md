# DELTA-LOGIC-1.2.3 — windows-1.2.3-daemon-autoswitch (vs 1.0.9 baseline)

Per RULE9, this documents the delta signals found this reduce pass relative to `../../windows-1.0.9-daemon-autoswitch/`. This is **NOT** a `migrated_no_behavior_diff` or `unchanged_reused` classification for any target — evidence is insufficient this pass to make that call. All 13 targets remain `diff_required` per RULE9's own definition ("diff 非空、不清楚、缺输入...target 保持 Unknown/blocked/gap_needs_reducer/gap_needs_new_raw").

## Per-command observations (grounded in this pass's file reads)

### run_daemon_once (0x140cc2700, codexmate_lib)
- 509-line complete pseudocode, no truncation markers.
- Header: `// win 1.2.1 | module src/lib.rs | attributed via panic-Location xref (win-native)` + `// win 1.2.1 | tauri command handler = run_daemon_once | mapped via command-name string xref (win-native, ground-truth)`.
- ipc-contracts.jsonl: `tauriInvokeWrapper` hit, `wrapper: "runDaemonOnce"`, `argKeys: []`, matches 1.0.9's no-arg signature.
- 1.0.9 gate: readyToImplement (owner 0x1402843E0, different address as expected for a different binary build). No structural comparison performed this pass.
- **Status**: raw pseudocode present and usable; dim3-6 not produced this pass; `diff_required`.

### load_bootstrap_state (0x14018b520, commands/)
- Real pseudocode confirmed present (file exists, header shows `tauri command handler = load_bootstrap_state | mapped via command-name string xref (win-native, ground-truth)`); full-body line-by-line read not performed this pass (file discovered late in the search process via canonical-name cross-check against the 1.0.9 baseline, not the initial keyword search).
- ipc-contracts.jsonl: `tauriInvokeWrapper` hit, `wrapper: "loadBootstrapState"`, `argKeys: []`.
- 1.0.9 gate: readyToImplement (owner 0x140272E80). **Status**: `diff_required`, raw present, not deep-read.

### set_auto_switch (0x140c8b7a0, codexmate_lib)
- 636-line complete pseudocode, no truncation markers (line-count-verified, not full-body-read this pass).
- Header: same win 1.2.1 attribution pattern as run_daemon_once.
- ipc-contracts.jsonl: `tauriInvokeWrapper` hit, `wrapper: "setAutoSwitch"`, `argKeys: ["enabled"]` -- matches 1.0.9's `enabled:bool` arg exactly.
- 1.0.9 gate: readyToImplement (owner 0x140272080). **Status**: `diff_required`.

### configure_auto_switch (0x140cc5ed0, codexmate_lib) — **REGRESSION FOUND**
- **`HEXRAYS_DECOMPILE_FAILED: switch analysis failed: bad target 0x140CC6F38 for case 6`**. Raw disassembly fallback only, explicit `[TRUNCATED]` marker in the file. Confirmed by reading the file's first 40 lines (jump-table dispatch visible in raw asm: `jpt_140CC5F26` 4-case switch feeding into a further `jpt_140CC5F69` 8-case switch).
- ipc-contracts.jsonl: `tauriInvokeWrapper` hit, `wrapper: "configureAutoSwitch"`, `argKeys: ["threshold5hPercent", "thresholdWeeklyPercent", "enabled"]` -- this EXACTLY matches the independently-read `auto-switch-DujJXz0W.js` submit function's arguments (`o.configureAutoSwitch(t.t5h, t.tWeekly, t.enable ? !0 : void 0)`), confirming the frontend contract is intact even though the backend decompile failed.
- 1.0.9 gate: readyToImplement, clean pseudocode (owner 0x14027BE90 + core 0x1400A7C00). **This is a genuine dim2 regression from 1.0.9's clean decompile to 1.2.3's decompile failure** -- most plausibly caused by a new/changed switch case in the function between versions (the two nested jump tables visible in the raw disasm, at least one more case than Hex-Rays can resolve). Needs live-IDA breakthrough (disasm chunking per the method that worked in `../../windows-1.2.3-relay/`'s campaign) to confirm what changed.
- **Status**: `diff_required` (genuine gap, dim2 blocked, breakthrough not attempted this pass).

### confirm_pending_auto_switch (0x140cbf6f0, codexmate_lib)
- 411-line complete pseudocode, no truncation markers.
- Header: win 1.2.1 attribution, same pattern.
- ipc-contracts.jsonl: `tauriInvokeWrapper` hit, `wrapper: "confirmPendingAutoSwitch"`, `argKeys: []`.
- 1.0.9 gate: readyToImplement (owner 0x14026EA00 + core 0x1400A9BD0). **Status**: `diff_required`.

### confirm_pending_auto_switch_and_restart_codex — **EVIDENCE GAP FOUND**
- Zero raw `.c` under this exact canonical command name anywhere in `raw/aimami/1.2.3/windows-x64/` (confirmed via `grep -rl` across the whole tree for the string).
- ipc-contracts.jsonl: `tauriInvokeWrapper` hit CONFIRMED, `wrapper: "confirmPendingAutoSwitchAndRestartCodex"`, `argKeys: []` -- frontend still calls this command name at 1.2.3, so the command is NOT removed from the product; only its backend raw evidence is missing from this producer pass's coverage.
- The only name-adjacent file found, `commands/accounts/ida/pseudocode/switch_account_and_restart_codex_0x140cae510.c`, is a DIFFERENT Rust command name (`switch_account_and_restart_codex`, not `confirm_pending_auto_switch_and_restart_codex`) AND is itself `HEXRAYS_DECOMPILE_FAILED` ("switch analysis failed: bad target 0x140CAF37A for case 5" -- notably a similar failure signature/shape to configure_auto_switch's failure, both switch-statement jump-table analysis failures in the auto-switch/account-switch command family).
- 1.0.9 gate: readyToImplement, full evidence (dispatcher 0x1402663E0 + coroutine 0x1408E4F50 + restart_async 0x1400A2DE0, TerminateProcess-8s-fallback restart bridge). No 1.2.3-side re-verification possible with current raw evidence.
- **Status**: `diff_required` (genuine gap; two live-IDA questions open: (1) is switch_account_and_restart_codex the same command renamed, (2) if not, where is confirm_pending_auto_switch_and_restart_codex's actual 1.2.3 owner).

### dismiss_pending_auto_switch (0x14018aa10, commands/) — full body read
- 143-line complete pseudocode, no truncation markers. Full body read this pass.
- Header: `tauri command handler = dismiss_pending_auto_switch | mapped via command-name string xref (win-native, ground-truth)` (no separate module-attribution line, unlike the codexmate_lib files).
- Dispatch pattern observed: gates through `sub_140003640` (cache/lock check), then either a fast-path early-return branch or a full dispatch via `sub_1416850A0` using string constants `aDismissPending` (27 chars) + `aRepo` (4 chars) as dispatch keys -- structurally consistent in shape with 1.0.9's documented dispatcher-routing pattern (though 1.0.9 routed via a different named function, `auto_switch_multiplex_dispatcher_sys`, memcmp-based; this pass did not confirm whether `sub_1416850A0` is that same function under a new address/no-name).
- ipc-contracts.jsonl: `tauriInvokeWrapper` hit, `wrapper: "dismissPendingAutoSwitch"`, `argKeys: []`.
- 1.0.9 gate: readyToImplement (owner 0x14027F120 + core 0x1400AA290). **Status**: `diff_required`.

### load_pending_auto_switch (0x14018af90, commands/) — full body read
- 149-line complete pseudocode, no truncation markers. Full body read this pass.
- Same dispatch shape as dismiss_pending_auto_switch (`aLoadPendingAut` + `aRepo` string-keyed dispatch through the same `sub_140003640`/`sub_1416850A0` pattern) -- the two commands are clearly companion/sibling wrappers in this binary, same as at 1.0.9.
- ipc-contracts.jsonl: `tauriInvokeWrapper` hit, `wrapper: "loadPendingAutoSwitch"`, `argKeys: []`.
- 1.0.9 gate: readyToImplement (dispatcher 0x1402663E0, core 0x140564060 via memcmp routing). **Status**: `diff_required`.

### auto_switch_config (0x1403904c0, repository/) — full body read, NOT itself a command
- 163-line complete pseudocode, no truncation markers. Full body read this pass.
- Header: dual annotation -- `// win 1.2.1 | module src/core/repository.rs | attributed via panic-Location xref (win-native)` AND `// win 1.2.3 | = mac codexmate_lib::core::repository::Repository::auto_switch_config | 跨平台字符串签名匹配(名↔函数一致)`. This is the persistence/config-read leaf function, not a Tauri command itself -- likely a dim3 call-tree leaf for `set_auto_switch`/`configure_auto_switch` (structurally analogous to 1.0.9's `persist_write_sys` leaves at 0x1405565F0/0x14055C740, though this pass did NOT confirm a direct call-site xref from set_auto_switch/configure_auto_switch into this function).
- Cross-referenced independently by `../windows-1.2.3-relay/` sibling package's own pointers (`repository/backend-pseudocode-surface-crossref-accounts` INDEX entry cites `auto_switch_config` among 8 functions with "win-1.2.3-to-mac cross-platform string-signature-match equivalence annotations").
- **Status**: supporting evidence, not a standalone gate target; `diff_required` for its role in the call-tree (not confirmed this pass).

### 4 daemon watchers + start_auto_switch_pending_watcher
- Zero raw `.c` files found for any of the 5 (searched by filename and by canonical command name).
- ipc-contracts.jsonl: zero hits for all 5 at 1.2.3 -- same pattern as 1.0.9's independently-IDA-confirmed absence/native-thread finding.
- **Status**: `diff_required` per RULE9 (frontend-existence consistency is NOT a diff-confirmed-empty basis; only a backend re-verification would qualify). Recorded Unknown/product_decision, not migrated.

## Adjacent (out-of-canonical-scope) maintenance findings

### restart_codex (0x140cc0730, codexmate_lib) — full body read
- 427-line complete pseudocode, no truncation markers.
- ipc-contracts.jsonl: `tauriInvokeWrapper` hit, `wrapper: "restartCodex"`, `argKeys: []`.
- Frontend CCF (from analytics-maintenance-autoswitch-frontend.md, already-produced doc, read this pass): MaintenancePage's `restart` action, `variant: destructive`, gated behind an AlertDialog confirmation (`D() -> y(!0)` opens dialog; confirm handler `se` calls `B.mutateAsync()` -> `restartCodex()`), wrapped in the page's generic 800ms-minimum-loading-display helper.
- 1.0.9 has an independent `restart_codex` baseline in `../../windows-1.0.9-maintenance/` (strictImplementationUse tier, part of a "graceful_restart_for_update, restart_codex" 2-command cluster).
- **Not part of this package's canonical scope** (13-command daemon+auto-switch universe). Recorded as adjacent evidence only.

### export_debug_bundle (0x140cbce20, codexmate_lib) — line-count-verified, not full-read
- 643-line complete pseudocode (line-count confirmed, full-body not read this pass).
- ipc-contracts.jsonl: `tauriInvokeWrapper` hit, `wrapper: "exportDebugBundle"`, `argKeys: ["targetPath"]`.
- Frontend CCF: MaintenancePage `debugBundle` action -- dynamic-imports a save-dialog module, calls `default_debug_bundle_file_name` for a default filename, then `export_debug_bundle(targetPath)` after user picks a save path.
- **Not part of this package's canonical scope.**

### upload_debug_report (0x140cdff20, codexmate_lib) — line-count-verified, not full-read
- 445-line complete pseudocode (line-count confirmed, full-body not read this pass).
- ipc-contracts.jsonl: `tauriInvokeWrapper` hit, `wrapper: "uploadDebugReport"`, `argKeys: ["input"]`.
- Frontend CCF: MaintenancePage `debugUpload` action -- 2000-char-limited note textarea, confirm dialog, `upload_debug_report({userNote, category:"manual"})` via a directly-bound `Re(...)` call (bypasses the `v`/`z` service facade, same "direct invoke" pattern the frontend doc separately flagged for `run_codex_router_diagnostics`/`fix_codex_router_issue`).
- **Not part of this package's canonical scope; not covered by `../windows-1.2.3-maintenance/` either** (that package's declared scope is exactly `rebuild_registry`/`clean`/`load_snapshot`). Orphaned pending a producer/product decision on ownership.
