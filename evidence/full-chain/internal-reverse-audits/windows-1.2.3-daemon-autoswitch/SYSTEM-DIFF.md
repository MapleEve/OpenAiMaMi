# System Diff — AiMaMi 1.2.3 daemon-autoswitch (Windows-x64, vs 1.0.9 Windows same module)

This file documents version-over-version signals observed this reduce pass between `../windows-1.0.9-daemon-autoswitch/` (readyToImplement baseline, 2026-06-02) and the 1.2.3 raw evidence read this pass. **This is NOT a diff-confirmed-empty (RULE9 migrated_no_behavior_diff) result** — evidence is too thin at 1.2.3 to make that call for most targets; this section records observed signals honestly, both where things look unchanged and where they look different.

## Platform Artifacts

- 1.0.9 binary: PE AMD64, sha256 `a5822387fa3f56dc03893111f4ffdd074daa882e8887ec4e7c394879c0e9fe0b`.
- 1.2.3 binary: PE AMD64, sha256 `aeccccd78e470ad6cfdb52d72af624b34ce17a4a0b04e7596b32583eaf972396` (same SHA cited by `../windows-1.2.3-relay/` and `../windows-1.2.3-maintenance/`).
- **Open provenance question**: all 6 codexmate_lib-resident daemon-domain .c files (run_daemon_once, set_auto_switch, confirm_pending_auto_switch, plus the 3 adjacent maintenance files restart_codex/export_debug_bundle/upload_debug_report) carry a header comment `// win 1.2.1 | ...` for module/command attribution, despite residing under the `raw/aimami/1.2.3/windows-x64/` path. Whether this means the attribution work was done once at 1.2.1 and never re-verified at 1.2.3, or whether the function bodies are asserted byte-identical between 1.2.1 and 1.2.3 (unstated), is UNKNOWN this pass. Only `auto_switch_config` (repository/) and `switch_account_and_restart_codex` explicitly cite "win 1.2.1" and/or "win 1.2.3" cross-platform annotations distinctly (`auto_switch_config` has BOTH a "win 1.2.1" module-attribution line AND a separate "win 1.2.3 | = mac codexmate_lib::core::repository::Repository::auto_switch_config" cross-platform signature-match line — the two annotation types are not mutually exclusive and appear to come from different producer passes).

## Frontend IPC / Control-flow

- All 11 canonical commands that have any frontend hit at all show `"kind": "tauriInvokeWrapper"` in `raw/aimami/1.2.3/windows-x64/frontend/ipc-contracts.jsonl` — same wrapper names as 1.0.9 (`runDaemonOnce`, `loadBootstrapState`, `setAutoSwitch`, `configureAutoSwitch`, `confirmPendingAutoSwitch`, `confirmPendingAutoSwitchAndRestartCodex`, `dismissPendingAutoSwitch`, `loadPendingAutoSwitch`, plus adjacent `restartCodex`/`exportDebugBundle`/`uploadDebugReport`). `configureAutoSwitch`'s argKeys (`threshold5hPercent`, `thresholdWeeklyPercent`, `enabled`) match exactly both the 1.0.9 baseline AND the independently-read `auto-switch-DujJXz0W.js` 1.2.3 frontend validator module (1-100 integer range check + RangeError on invalid input) — strong signal this specific command's frontend contract is unchanged.
- 5 commands (4 daemon watchers + start_auto_switch_pending_watcher) show zero ipc-contracts.jsonl hits at 1.2.3, matching the exact same absence pattern independently confirmed via live backend IDA search at 1.0.9. This is consistent-with-unchanged at the frontend-existence level only.

## Backend Commands / Control-flow / Pseudocode / Call-tree / Leaf

- **Confirmed regression**: `configure_auto_switch` was `readyToImplement` at 1.0.9 (owner `0x14027BE90`, clean pseudocode, dim2-6 all Accepted). At 1.2.3 (`0x140cc5ed0`) it is `HEXRAYS_DECOMPILE_FAILED` — Hex-Rays cannot produce pseudocode due to a switch-analysis failure ("bad target 0x140CC6F38 for case 6"). This strongly suggests the function's control-flow structure changed between 1.0.9 and 1.2.3 (a new/different case in a jump table Hex-Rays can no longer resolve), i.e. a genuine behavior-relevant change, not merely a tooling regression — though this pass cannot characterize what changed without a live-IDA breakthrough (disasm chunking, following the method that resolved similar failures in `../windows-1.2.3-relay/`).
- **Possible command restructuring, unconfirmed**: 1.0.9's `confirm_pending_auto_switch_and_restart_codex` (a combined confirm+restart command) has a frontend contract hit at 1.2.3 but zero raw backend evidence under that exact name. A differently-named command, `switch_account_and_restart_codex` (`commands/accounts/`, also HEXRAYS_DECOMPILE_FAILED), was found nearby but its identity relationship to the canonical command is NOT established this pass. Two explanations are equally plausible and unconfirmed: (a) the same command was internally renamed/moved to the accounts module, or (b) this is an unrelated new command and `confirm_pending_auto_switch_and_restart_codex`'s true 1.2.3 backend owner simply has not been located yet by any producer pass.
- `run_daemon_once`, `load_bootstrap_state`, `set_auto_switch`, `confirm_pending_auto_switch`, `dismiss_pending_auto_switch`, `load_pending_auto_switch`: all have complete, non-truncated 1.2.3 pseudocode. This pass did not do a structural line-by-line comparison against the 1.0.9 pseudocode (out of scope for a reduce-only pass), so no behavior-diff claim is made for these 6 -- only that raw evidence exists and is usable.
- `dismiss_pending_auto_switch` and `load_pending_auto_switch` both dispatch through a shared string-routed helper pattern (`aDismissPending`/`aLoadPendingAut` string constants seen inline near a `sub_140003640` gate check and a `sub_1416850A0` dispatch call) that is structurally similar in shape to the 1.0.9 baseline's documented `auto_switch_multiplex_dispatcher_sys` memcmp-based routing pattern (both commands were dispatched, not independently-wrappered, at 1.0.9 too) -- a plausible but NOT confirmed continuity signal.

## Interface / Error / Boundary

Not independently extracted at 1.2.3 (dim4 gap, this pass). 1.0.9 DTO shapes (`BootstrapState`, `PendingAutoSwitchState`, threshold/enabled arg types) are NOT claimed to still apply at 1.2.3 -- cited only as historical prior in `logic/DELTA-LOGIC-1.2.3.md`.

## Gate Leaf

All 13 canonical targets: 0/13 across all three gate tiers at 1.2.3 this pass (vs 1.0.9's 9/13 readyToImplement + 4/13 consumerStartReady-absent). This is a coverage-depth difference between passes, not evidence that the underlying 1.2.3 product behavior regressed to below-1.0.9 quality — this pass simply did less analytical work than the 1.0.9 campaign did (reduce-only, no IDA), except for the two genuine dim2-level findings above (configure_auto_switch decompile failure, confirm_pending_auto_switch_and_restart_codex evidence gap) which ARE real 1.2.3-specific findings, not artifacts of this pass's shallower scope.

## Plugin / Capability

Not in scope for this daemon-autoswitch-only package.

## OTA / Package

Not evaluated this pass.

## Resource / Binary Surface

12 raw `.c` files touch the canonical 13-command daemon+auto-switch domain at 1.2.3 windows-x64 (9 usable + 2 decompile-failed + 0 for the missing canonical-name target, since it has none); plus 3 adjacent out-of-canonical-scope maintenance `.c` files physically co-resident in the same `codexmate_lib` catch-all directory.

## Unknown

- Whether `configure_auto_switch`'s decompile failure reflects an intentional 1.2.3 feature change or an unrelated compiler/build difference: Unknown.
- Whether `switch_account_and_restart_codex` is the renamed successor to `confirm_pending_auto_switch_and_restart_codex`: Unknown.
- Whether the 5 absent commands are still absent at 1.2.3 (backend-confirmed, not just frontend-consistent): Unknown.
- Provenance of the "win 1.2.1" header comments on files in the 1.2.3 raw tree: Unknown.
