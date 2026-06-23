# Evidence: load_snapshot — AiMaMi 1.1.1 macos-arm64

**Session**: wf-aimami111-delta-20260616
**Machine**: <本地机器>
**Date**: 2026-06-17
**Binary**: AiMaMi 1.1.1 universal.app/Contents/MacOS/AiMaMi (macos-arm64)
**Binary SHA256**: f34ff82910539964e24e86b35e95ea85b42af7d7dccf8e979914a2c21bd8cfeb
**IDB**: <来源位置>/raw/binary/AiMaMi-1.1.1-idb
**逆向分析 hexrays_ready**: true | **uptime at session**: 56902s
**Owner-gate**: ADDITIVE — no prior 1.1.1 macos-arm64 load_snapshot in INDEX; no competing producer
**Gate tier**: strictImplementationUse_candidate

---

## Command Identity

- **IPC command string**: `load_snapshot` — found at offset in packed command blob `0x1010e7311`
- **Source module (demangled)**: `codexmate_lib::commands::accounts`
- **Semantic alias**: In 1.1.1, `load_snapshot` is implemented as `refresh_full_runtime_snapshot_async` — triggers a full blocking local snapshot refresh and broadcasts the result.
- **argKeys**: `[]` (no parameters — confirmed by `from_command` dispatcher resolving unit type `D`)
- **Threading pattern**: IPC async → `spawn_blocking` → sync blocking core

---

## ## Confirmed

1. **IPC cmd string**: `load_snapshot` at `0x1010e7311` (packed blob with all 35 mac commands)
2. **IPC dispatcher VA**: `0x10015a2d0` (`respond_async_serialized_inner::{{closure}}::hd0f7bd206d5cf84c`) — confirmed via xref from `0x1000e92b0` drop_in_place shim
3. **Async closure owner VA**: `0x1000b5ba0` (`accounts::refresh_full_runtime_snapshot_async::{{closure}}::hadb9d09359062780`) — decompiled, size 5KB+, 4 outer states
4. **argKeys = []**: confirmed via `from_command::h402d25d477f1af6f` at `0x1006d78b0` resolving unit/empty type `D`
5. **spawn_blocking VA**: `0x1007acb20` (tokio spawn_blocking trampoline) — called from async closure
6. **Blocking core VA**: `0x1004c6480` (`Repository::load_snapshot_local::hb8d2ca20456473f2`) — the actual blocking work unit
7. **load_local_state_synced VA**: `0x1004c7b10` (`Repository::load_local_state_synced::h9b36b7507dabb076`) — called first; calls sync + daemon repair
8. **sync_local_runtime_state VA**: `0x1004c8ba0` (`Repository::sync_local_runtime_state::h8e9ed95e83f691ca`) — full registry/auth/quota sync, snapshot file compare+write-if-changed
9. **load_local_state VA**: `0x1004c28c0` (`Repository::load_local_state::h5f87d12bcec6ab54`) — loads registry+auth+settings+quota; error string `REGISTRY_MISSING` / "No local account registry found yet."
10. **make_status_payload_with_service_state VA**: `0x1004d0a50` (`Repository::make_status_payload_with_service_state::h848a4d32952f49d6`) — assembles AppStatusPayload; bundles `"dev.aimami.auto-switch"` (22B) feature flag key
11. **CoreEnvelope::ok_with_warnings VA**: `0x100554690` — wraps payload; writes 2 warning slots (2B "ok" + 7B literal at build time)
12. **broadcast_runtime_snapshot VA**: `0x100620750` (`accounts::broadcast_runtime_snapshot::h2a2c0f2e1d4377e0`) — called on success; updates DISPLAY_SNAPSHOT_CACHE mutex, calls note_usage_refresh_activity, refresh_tray_menu_with_snapshot, emits `runtime-state-updated` event
13. **Event name**: `runtime-state-updated` (21B) — confirmed at `0x101154e6d`
14. **Event payload**: serialized `CoreSnapshotPayload` clone + source_kind string (4B "fake"/5B "usage"/ 8B "mutation"/11B "progressi..." — switch on a4 len)
15. **Error on spawn_blocking task failure**: error string "Blocking command task failed: " + "Accounts imported, but local snapshot refresh failed: " — at `0x1010b0a7c`

---

## ## Inferred

1. **Response DTO type**: `CoreEnvelope<AppStatusPayload>` (wraps the status payload; `ok_with_warnings` pattern confirmed; warnings slot may be empty Vec or 2-element at build time)
2. **AppStatusPayload fields** (from `make_status_payload_with_service_state` struct layout): `accountSummary` (Option\<AccountSummary\>), `activeAccount` (Option\<String\>), `planType` (PlanType), `authMode` (AuthMode), `autoSwitch` (bool), `appPathState` (AppPathState), `quotaItemCount` (u32), `daemonState` (u8), `autoSwitchFeatureKey` ("dev.aimami.auto-switch")
3. **Registry sync side-effect**: `persist_registry` at `0x1004c3a00` called when registry has diffs vs snapshot; `snapshot_path` constructed via `account_io::make_snapshot_path::hbff9a95f339001f6` at `0x1004bd8d0`
4. **Quota migration side-effect**: `quota_store::save` at `0x100535100` called when quota items changed during sync
5. **Daemon auto-repair branch**: If `autoSwitch=true` and `check_daemon_state` indicates repair needed, `install_daemon` at `0x100559dc0` is called; on failure warns `AUTO_SWITCH_DAEMON_REPAIR_FAILED`
6. **Snapshot file compare logic**: reads both old and new snapshot files; only writes if content differs (memcmp); prevents spurious dirty-flag triggers
7. **Thread model**: IPC handler (`respond_async_serialized_inner` @`0x10015a2d0`) → tokio `spawn_blocking` @`0x1007acb20` → blocking `load_snapshot_local` @`0x1004c6480`; no async body inside blocking section

---

## ## Unknown

1. **Exact AppStatusPayload JSON field names** (camelCase mapping inferred from 1.0.9 baseline; not re-verified via frontend CCF in 1.1.1 lane)
2. **CoreEnvelope outer shape** (consistent with 1.0.9: `{data, warnings, code, requestId}`; not re-verified against 1.1.1 frontend deserialization)
3. **Warning slot exact content at runtime** (ok_with_warnings writes 2B+7B literal strings at compile time; runtime population of warnings vec not fully traced)
4. **Complete AccountSummary field set** (clone shim found; full field layout not independently confirmed in 1.1.1)
5. **PlanType and AuthMode enum variants** (Debug fmt found at `0x1005075e0`/`0x1005075b0`; variant strings not enumerated in this pass)
6. **AppPathState inner fields** (clone shim found at `0x100507cb0`; struct layout not expanded)
7. **note_usage_refresh_activity exact effect** (calls `0x10061c240`; timing measurement via `SystemTime::now/duration_since` confirmed; downstream effect not traced)
8. **Windows platform behavior** (Windows Unknown — win64 lane not done for this command)
9. **dim6 test/acceptance mapping** (C5 implementation side, not producer scope)
10. **CodexPaths home path construction** (runtime-constructed; not confirmed in this pass)
