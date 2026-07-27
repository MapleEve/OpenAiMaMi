# AI Handoff

status: distilled-partial, command-level mapping open, gate=all-blocked
evidence_root: ${C5CM_INTERNAL_HISTORY_ROOT:-$C5CM_SHARE_ROOT}/raw/aimami/1.2.3/windows-x64/{commands/system,system_volume_windows,process,paths,debug_log,proxy}/ida/pseudocode/
versions: 1.2.3 (raw attribution comment era: win 1.2.1, inherited)
platforms: windows-x64 only (this package); see internal-reverse/audits/macos-1.2.3-system/ for macOS sibling
target_universe: 26 frontend invoke commands (identical list to macos-1.2.3-system; see that package's README Per-target section), backed by 6 commands/system + 3 system_volume_windows raw files (module-attributed, command-unmapped) plus 45 platform-support files across process/paths/debug_log/proxy (module-attributed, spot-checked not exhaustively)
locator_audit: 26/26 frontend command names found in windows-x64/frontend/ipc-contracts.jsonl (grep exact match, this session); 9/9 system-domain raw addrs re-decompiled live this session and confirmed non-stub with attribution comments; 0/26 commands mapped to a specific owner address
coverage: file-existence 54/54 (100% of this package's declared scope, per WIN-APP-FUNCTION-INVENTORY.jsonl module-name filter); command-ownership 0/26
coverage_mode: backend-owned-target-universe
owner_resolution_status: module-level=resolved-for-54-files (.rs path known), command-level=unresolved-for-all-26
full_app_coverage_status: not-full-app
per_target_required_results: all 26 commands require dim1(weak/shared-frontend-inherited)+dim2(module-known,command-unknown)+dim3(not-attempted)+dim4(not-attempted)+dim5(not-closed-at-command-granularity)+dim6(not-attempted) before any gate promotion
frontend_ccf_status: weak (command-name cross-check only, inherited scope list from macos-1.2.3-system)
backend_ccf_status: module-attributed-not-command-mapped
pseudocode_status: non-failed for all 9 system-domain files (live-reverified this session); non-verified-but-presumed-non-failed for the 45 platform-support files (spot-checked 2 of 45)
call_tree_status: not-attempted
interface_status: not-attempted
error_path_status: not-attempted
boundary_status: not-attempted
gate_leaf_status: 0/26 consumerStartReady, 0/26 strictImplementationUse, 0/26 readyToImplement (see gate-report.json)

## Target Universe (raw addrs, this package)

commands/system (module: src/commands/system.rs, all "win 1.2.1" attribution era):
- 0x140021540 (attributed via panic-Location xref)
- 0x140322890 (attributed via call-graph propagation, >=2 same-module callers)
- 0x1403d28a0 (attributed via panic-Location xref)
- 0x14089b320 (attributed via call-graph propagation, >=2 same-module callers)
- 0x140cf8380 (attributed via panic-Location xref)
- 0x141471f80 (attributed via call-graph propagation, >=2 same-module callers)

system_volume_windows (module: src/platform/system_volume_windows.rs, all "win 1.2.1" era):
- 0x1401b88c0 (attributed via call-graph propagation, >=2 same-module callers)
- 0x1401b8c50 (attributed via panic-Location xref)
- 0x1401b91a0 (attributed via panic-Location xref)

platform-support (spot-checked only, not individually enumerated in this file — see WIN-APP-FUNCTION-INVENTORY.jsonl grep for full addr lists):
- process: 34 files, module codexmate_lib/platform/process
- paths: 3 files, module codexmate_lib/platform/paths
- debug_log: 3 files, module codexmate_lib/platform/debug_log
- proxy: 5 files, module codexmate_lib/platform/proxy
- daemon: 0 files, 0 attributed rows (genuine gap)
- single_instance: 0 files, 0 attributed rows (genuine gap)

## Queue (next producer steps, cheapest-first)

1. Command-to-owner mapping for the 9 system-domain addrs — use `xrefs_to`/`callees` from a known dispatch/registration site, or cross-reference against macos-1.2.3-system's per-command pseudocode (same command semantics, different binary) to match function shape/size/call pattern. No new raw evidence needed, pure analysis over existing 9 files.
2. Search WIN-APP-FUNCTION-INVENTORY.jsonl (1133 rows) and/or run a fresh win-native attribution pass (panic-Location xref / call-graph propagation per red-line-24 methodology) for daemon/single_instance Windows equivalents — may be hiding under an unexpected module name.
3. Refresh WIN-APP-FUNCTION-INVENTORY.jsonl `on_disk` field for the 54 files in this scope (bookkeeping only).
4. dim3 call-tree work once command mapping exists.
5. dim4/dim6 same as macos-1.2.3-system's open items.
6. angle-A/C keyword sweep of the full 1133-row inventory for undiscovered system-adjacent Windows modules.

## Scripts / Repro Commands

- IDA health gate: `python3 <scratchpad>/idacall.py <host> server_health '{}'`
- Re-decompile any of the 9 addrs: `python3 <scratchpad>/idacall.py <host> decompile '{"addr":"0x140021540"}'`
- File-count check: `find "$C5CM_SHARE_ROOT/raw/aimami/1.2.3/windows-x64/<module>" -iname "*.c" | wc -l`
- Inventory grep: `grep "\"module\": \"codexmate_lib/commands/system\"" "$C5CM_SHARE_ROOT/intermediate/aimami/1.2.3/windows-x64/WIN-APP-FUNCTION-INVENTORY.jsonl"`

## Unknowns

- command-to-owner mapping (0/26) — blocks_start
- platform::daemon / platform::single_instance Windows equivalents — truly_undone
- WIN-APP-FUNCTION-INVENTORY.jsonl on_disk staleness — accepted_unknown (evidence itself is real)
- IDA Python tool unavailable this session (tools/list confirmed absent) — environmental constraint, not a content gap
- angle-A/C full-inventory keyword sweep beyond the 6 known modules — blocks_start
- dim3/dim4/dim6 — not attempted, blocks_start

## Do Not Infer

- Do NOT infer any Windows command's owner function from macOS's command-to-file mapping in commands-baseline.md.
- Do NOT infer platform::daemon/single_instance are absent-by-design on Windows — unverified.
- Do NOT treat the 26/26 consumerStartReady in macos-1.2.3-system as applicable to Windows — this package deliberately reports 0/26 for Windows per AGENTS.md's cross-platform-inference prohibition.
