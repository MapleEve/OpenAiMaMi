# AiMaMi 1.1.1 macOS ARM64 — system/diagnose — Evidence

**Session**: wf-aimami111-delta-20260616
**Machine**: <本地机器>
**Model**: claude-sonnet-4-6
**Role**: 纯生产者 (SOP steps 0-6)
**Date**: 2026-06-16
**Binary**: AiMaMi 1.1.1 universal (macOS ARM64)
**IDB**: AiMaMi.i64 (hexrays_ready=true, uptime 29006s at health check)
**Binary SHA256**: f34ff82910539964e24e86b35e95ea85b42af7d7dccf8e979914a2c21bd8cfeb
**Migration basis**: 1.0.9 macOS baseline (DIAGNOSE-CLUSTER-DISTILLED-109.md)
**Delta status**: migrated_no_behavior_diff — interface identical; implementation VAs shifted; string constants now inline-embedded rather than static pool

---

## Confirmed

### IPC Registration
- IPC string `"diagnose"` at `0x1010ebab0` (in registration blob)
- IPC dispatch call at `0x10030e1c9` in `codexmate_lib::run::{{closure}}::{{closure}}` (size 0x314, VA `0x10030e0c0`)
- Single xref to command handler confirmed

### Owner (dim2)
- **Command wrapper VA**: `0x10061f4b0`
- **Symbol**: `codexmate_lib::commands::system::diagnose::hd7e9cf9b389d4369`
- **Size**: 0x2e0
- **has_type**: true
- **Decompile status**: A-level (full, non-failed)
- Pattern: OnceLock init → Mutex::lock → panic-count check → Repository::diagnose → result handling → Mutex::unlock
- Poison guard: checks `*(_BYTE *)(a2 + 8)` — if set (poisoned), formats error with string at anon_91b23c3e0afeec67b869976d9683aaed_627 (41 bytes, "poisoned lock" message)
- On Err from Repository::diagnose: CoreError Display fmt → CoreEnvelope Err path (discriminant=2), copies 0x1A0 bytes to output
- On Ok: memcpy(dst, src, 0x1A0) directly

### Core Implementation (dim2/dim3)
- **Core impl VA**: `0x1004d25c0`
- **Symbol**: `codexmate_lib::core::repository::Repository::diagnose::h94b49a0d329ce76c`
- **Size**: 0x477
- **has_type**: true
- **Decompile status**: A-level (full, non-failed)
- Pattern:
  1. Calls `load_local_state_synced@0x1004c7b10` → full state snapshot into 0x3A0-byte buffer
  2. On Err from load_local_state_synced: copies error to dst[1..], sets `*dst = 2` (Err variant)
  3. On Ok: assembles DiagnoseResult fields:
     - Allocates 5-byte string `"1.1.1"` (bytes: 0x31 0x2e 0x31 0x2e 0x31 via `774975025 + 49`)
     - Allocates 5-byte string `"macos"` (bytes: 0x6d 0x61 0x63 0x6f 0x73 via `1868783981 + 115`)
     - Allocates 6-byte string `"x86_64"` (bytes: 0x78 0x38 0x36 0x5f 0x36 0x34 via `1597388920 + 13366`)
     - Copies 22 fields (0xB0 bytes) from load_local_state snapshot at offset +48*21 into result
     - Copies 7 fields from snapshot offsets [91..97] (AccountSummary/registry context)
     - Sets v33[0]=0 (discriminant ok), v33[2]=0 (flag)
     - Copies further fields from __dsta[72] (int), __dsta[6] != 2 check (AccountSummary active flag)
     - Calls `CoreEnvelope::ok@0x100557a50` with assembled struct
  4. Drops CodexMateSettings, RegistryFile, AccountSummary (2 variants), plugin-entry vec

**Critical delta vs 1.0.9**: Version string `"1.1.1"`, platform `"macos"`, arch `"x86_64"` now **inline-embedded** via `alloc` rather than read from static string pool. This is an ICF/compile-time embedding change. Semantic interface identical.

### load_local_state_synced (dim3 depth 2)
- **VA**: `0x1004c7b10`
- **Symbol**: `codexmate_lib::core::repository::Repository::load_local_state_synced::h9b36b7507dabb076`
- **Decompile status**: A-level (full)
- Pattern:
  1. Calls `sync_local_runtime_state@0x1004c8ba0` (auth+registry+quota+account sync, may persist on change)
  2. Checks result discriminant — if error (!=10): copies error to dst, returns Err
  3. Extracts 3 fields from result [0..2]
  4. Calls `load_local_state@0x1004c28c0` — full state deserialization
  5. On load_local_state Err: copies error to dst, returns Err
  6. Checks `v24[91] & 1` flag (daemon_installed_flag):
     - If set: checks `check_daemon_state@0x10055a310` → may call `resolve_daemon_binary@0x1004c77a0` + `install_daemon@0x100559dc0`
     - If daemon install errors: records warning entry with `"AUTO_SWITCH_DAEMON_REPAIR_FAILED"` (32B) — non-fatal
  7. Copies plugin/account vec from v24[102..103] into v38 (merge + extend)
  8. Deallocates old plugin cap vec
  9. Writes result (10, Vec len/ptr/cap) to dst

### sync_local_runtime_state (dim3 depth 3)
- **VA**: `0x1004c8ba0`
- Loads current auth snapshot, loads registry (load_registry), loads quota (quota_store::load)
- Checks file system state (ensure_directories, metadata, read), compares snapshots
- Detects PlanType/AuthMode changes (to_lowercase), updates registry entries if changed
- Records `"CURRENT_AUTH_SYNC_FAILED"` (24B) warning on auth sync error
- Records `"LEGACY_QUOTA_MIGRATION_FAILED"` (29B) warning on quota persist error
- Calls `persist_registry@0x1004c3a00` on dirty registry
- Calls `quota_store::save@0x100535100` on updated quota
- Returns Vec of diagnostic warning entries (48B per entry stride)
- Terminal leaves: `std::sys::fs::*`, `reqwest` (none — no HTTP here), `quota_store::upsert_item`, `persist_registry`

### load_local_state (dim3 depth 3)
- **VA**: `0x1004c28c0`
- **Error key**: `"REGISTRY_MISSING"` (16B) with msg `"No local account registry found yet."` (36B) — non-fatal, appended to warnings vec
- Loads: auth snapshot, settings, registry, quota — all from disk
- Converts registry into AccountSummary vec via `from_iter` (SpecFromIterNested)
- Sorts AccountSummary by active flag (insertion_sort or driftsort)
- Finds active account (byte at offset +664 == 1), clones as active AccountSummary
- Path stringifications: accounts_dir, snapshot_path, data_dir, registry_path, settings_dir, daemon_binary_dir, sessions_dir (7 paths)
- Checks fs::metadata on 3 paths (codex_binary, registry, settings dir): sets bool flags `v43/v47/v51`
- Sets `__dst[104]=0x8000000000000000LL` (None sentinel), `__dst[107]=0x8000000000000000LL` (None), `__dst[111]=0x8000000000000000LL` (None)
- Terminal leaves: fs::metadata, fs::read_inner, fs::write_inner, quota_store, serde_json::de

### call_tree_leaf summary

| depth | VA | symbol | role | terminated_reason |
|---|---|---|---|---|
| 0 | 0x10061f4b0 | commands::system::diagnose (cmd) | tauri_cmd_mutex_owner | — |
| 1 | 0x100f2e7a0 | Mutex::lock | mutex_acquire | std_library_leaf |
| 1 | 0x1004d25c0 | Repository::diagnose (core) | core_impl | — |
| 2 | 0x1004c7b10 | load_local_state_synced | state_loader | — |
| 3 | 0x1004c8ba0 | sync_local_runtime_state | sync+persist | — |
| 4 | 0x1004cd5c0 | load_current_auth_snapshot | auth_loader | leaf_named |
| 4 | 0x1004bf8e0 | load_registry | registry_reader | leaf_named |
| 4 | 0x100534ff0 | quota_store::load | quota_reader | leaf_named |
| 4 | 0x1005582b0 | CodexPaths::ensure_directories | dir_ensurer | leaf_named |
| 4 | 0x1004bd8d0 | account_io::make_snapshot_path | path_builder | leaf_named |
| 4 | 0x100f25cf0 | std::fs::read::inner | fs_read | fs_read_leaf |
| 4 | 0x100f25f70 | std::fs::write::inner | fs_write | fs_write_leaf |
| 4 | 0x100534bf0 | quota_store::upsert_item | quota_upsert | leaf_named |
| 4 | 0x100535100 | quota_store::save | quota_save | fs_write_leaf |
| 4 | 0x1004c3a00 | Repository::persist_registry | registry_persist | fs_write_leaf |
| 3 | 0x1004c28c0 | load_local_state | state_deserializer | — |
| 4 | 0x1004bfa30 | load_settings | settings_reader | leaf_named |
| 4 | 0x100f2b980 | std::sys::fs::metadata | fs_metadata | std_library_leaf |
| 4 | 0x1006120a0 | Vec::from_iter (SpecFromIterNested) | account_vec_build | std_library_leaf |
| 4 | 0x1005096f0 | AccountSummary::clone | account_clone | library_leaf |
| 3 | 0x10055a310 | platform::daemon::check_daemon_state | daemon_check | leaf_named |
| 3 | 0x1004c77a0 | Repository::resolve_daemon_binary | daemon_resolve | leaf_named |
| 3 | 0x100559dc0 | platform::daemon::install_daemon | daemon_install | leaf_named |
| 2 | 0x100557a50 | CoreEnvelope::ok | response_wrap | library_leaf |
| 1 | 0x100f2e7c0 | Mutex::unlock | mutex_release | std_library_leaf |

**terminated_reason**: all bottom-level leaves: fs_read_leaf / fs_write_leaf / std_library_leaf / leaf_named / library_leaf
**depth**: 4 (load_local_state_synced → sync_local_runtime_state → fs/quota operations)
**genuine_ceiling**: false — all meaningful callees decompiled or named; no vtable dispatch; no async; no drop_in_place confusion

---

## Inferred

- DiagnoseResult struct size: 0x1A0 bytes (confirmed via `memcpy(__src, ..., 0x1A0)` in command wrapper, matching 1.0.9 baseline)
- Field strides: RegistryItem 360B, AccountSummary 336B, plugin_entry 168B (confirmed via dealloc arithmetic in Repository::diagnose body)
- Version/platform/arch now inline-embedded: `"1.1.1"` / `"macos"` / `"x86_64"` — compile-time constant change vs 1.0.9
- Warning/diagnostic entries: 48B per entry stride (from sync_local_runtime_state Vec allocation pattern)
- Side effects: READ-ONLY for normal path; may write registry or quota on sync_local_runtime_state if change detected (not the command itself but the sync sub-call is a write side effect under certain conditions)
- Error path: Repository::diagnose → CoreEnvelope error path (discriminant=2, CoreError Display fmt) — consistent with 1.0.9
- No HTTP calls, no process spawns, no sidecar calls in command path
- Daemon install branch (install_daemon): only triggered if `v24[91] & 1` (daemon_installed_flag) AND check_daemon_state returns true — non-critical path, errors logged as warnings not returned

---

## Unknown

- Exact DiagnoseResult serde field names (derive macro, not in string pool for this command)
- Full layout of DiagnoseResult struct beyond confirmed strides and size
- Windows platform behavior (Windows Unknown — separate platform, not deduced from macOS)
- dim6: test/acceptance mapping (C5 implementation side, not reverse scope)
- `load_current_auth_snapshot@0x1004cd5c0` internal body (leaf_named, not decompiled this pass)
- `load_registry@0x1004bf8e0` internal body (leaf_named)
- `load_settings@0x1004bfa30` internal body (leaf_named)
- `check_daemon_state@0x10055a310` body (leaf_named)
- `resolve_daemon_binary@0x1004c77a0` body (leaf_named)
- `install_daemon@0x100559dc0` body (leaf_named) — these are daemon install helpers

---

## Fake-wall check

- **genuine_ceiling**: false
- **recovery_attempts**: not_needed
- **async check**: command is synchronous (Mutex::lock pattern, not BlockingTask::poll) — no async body confusion
- **vtable check**: no vtable dispatch observed in decompile
- **VA check**: owner at 0x10061f4b0 confirmed via func_query (name_regex `.*diagnose.*`) — unique match for system::diagnose
- **body found**: full decompile of 0x10061f4b0 (0x2e0), 0x1004d25c0 (0x477), 0x1004c7b10, 0x1004c8ba0, 0x1004c28c0 — all non-failed
- **drop_in_place shim check**: none; no drop_in_place in callees list for command wrapper
- **budget_rule check**: none triggered; no oversized body requiring basic_blocks split
- **ICF/fold check**: caller chain unique (xrefs_to 0x10061f4b0 = single xref at 0x10030e1c9)

---

## Four-angle completeness

- **A (func_query)**: `.*diagnose.*` → 3 hits: commands::system::diagnose (0x10061f4b0), Repository::diagnose (0x1004d25c0), commands::relay::diagnose_codex_router (0x1005e9e00) — system::diagnose uniquely identified — PASS
- **B (string pool / IPC reg)**: `diagnose` string at 0x1010ebab0 in IPC registration blob — xref to dispatch closure at 0x10030e135 — PASS
- **C (frontend IPC)**: ipc-contracts.jsonl: `command=diagnose`, `argKeys=[]`, `params="()"`, wrapper `ne("diagnose")` @ index-DdcCOEJG.js:86:25720 — PASS
- **D (owner-map + INDEX)**: owner-map-111 `diagnose` status=shared/not_yet_queried; INDEX: no prior 1.1.1 entries for system/diagnose; ADDITIVE, no collision — PASS

---

## Gate Assessment

- **gate tier**: strictImplementationUse_candidate
- **dim1** (frontend CCF): CLOSED — argKeys=[], wrapper `ne("diagnose")` confirmed
- **dim2** (backend owner + pseudocode): CLOSED — 0x10061f4b0 full decompile, 0x1004d25c0 full decompile
- **dim3** (call-tree to implementation leaves): CLOSED — depth 4, terminated at fs/quota/std leaves
- **dim4** (interface/DTO/error/side-effect): CLOSED — argKeys=[], return 0x1A0B CoreEnvelope<DiagnoseResult>, error via CoreError Display, side effects identified
- **dim5 macOS**: CLOSED — macOS ARM64 confirmed
- **dim5 Windows**: UNKNOWN (separate platform, not analyzed)
- **dim6** (test/acceptance mapping): UNKNOWN (C5 implementation side)
- **ceiling**: strictImplementationUse (dim5_win + dim6 not reverse scope)
- **gate_accepted**: false (dim6 not assessed)
- **implementation_use**: false
- **is_upstream**: true

---

## IDB annotations

- 0x10061f4b0: `A-level owner for diagnose; range 0x10061f4b0-0x10061f790; sha f34ff82910539964; session wf-aimami111-delta-20260616; not gate promotion`
- 0x1004d25c0: `core-impl for diagnose; Repository::diagnose; version/platform/arch strings: 1.1.1/macos/x86_64 embedded; calls load_local_state_synced; session wf-aimami111-delta-20260616`
- 0x10030e1c9: `IPC registration xref for diagnose command; in codexmate_lib::run::closure::closure; session wf-aimami111-delta-20260616`
- 0x1004c7b10: `load_local_state_synced for diagnose chain; calls sync_local_runtime_state+load_local_state+check_daemon_state; session wf-aimami111-delta-20260616`
- 0x1004c8ba0: `sync_local_runtime_state for diagnose chain; loads auth+registry+quota+account; persists on change; error keys: CURRENT_AUTH_SYNC_FAILED LEGACY_QUOTA_MIGRATION_FAILED AUTO_SWITCH_DAEMON_REPAIR_FAILED; session wf-aimami111-delta-20260616`
- 0x1004c28c0: `load_local_state: loads auth+settings+registry+quota+account summary; error key REGISTRY_MISSING; session wf-aimami111-delta-20260616`
