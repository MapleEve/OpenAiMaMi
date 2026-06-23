# load_snapshot — dim6 ACCEPTANCE MAPPING
# version: 1.1.1 | platform: macos-arm64 | shard: mac-3/5
# authored: 2026-06-19 | session: <审计会话>

## gate_tier: acceptance_draft_only
## blocked_dim: dim1 (ACCEPTED_UNKNOWN — frontend CCF consistent with 1.0.9 baseline only; 1.1.1 explicit CCF not independently traced), dim5_win (Unknown)

---

## happy_path (producer-acceptance-draft)

**Scenario**: `invoke("load_snapshot")` from frontend. Active account exists, registry is present, quota items current.

Input: `{}` (no args)

Expected output:
```json
{
  "data": {
    "accountSummary": { /* AccountSummary fields */ },
    "activeAccount": "<account_key_string>",
    "authMode": "<lowercase_auth_mode_string>",
    "planType": "<lowercase_plan_type_string>",
    "autoSwitch": true,
    "autoSwitchFeatureKey": "dev.aimami.auto-switch",
    "daemonState": 0,
    "appPathState": { /* AppPathState fields */ },
    "quotaItemCount": 5
  },
  "warnings": [],
  "code": 0
}
```
- Implemented as `refresh_full_runtime_snapshot_async` → `spawn_blocking` → `load_snapshot_local`.
- On success: Tauri event `"runtime-state-updated"` emitted with `CoreSnapshotPayload` + source_kind.
- `autoSwitchFeatureKey` is always the hardcoded string `"dev.aimami.auto-switch"` (22B).

**side_effect_asserts**:
1. Tauri event `"runtime-state-updated"` emitted on every successful call (VA `0x101154e6d`).
2. `persist_registry` called (fs::write to registry file) if registry has diffs vs snapshot.
3. `quota_store::save` called if quota items changed.
4. `tray_menu::refresh_tray_menu_with_snapshot` called on success (tray icon updated).
5. `note_usage_refresh_activity` called conditionally based on source_kind.
6. If `autoSwitch=true` and daemon repair needed: `install_daemon` called.

---

## boundary / error paths

| Trigger | Expected behavior |
|---------|-------------------|
| `spawn_blocking` task panics | `CoreEnvelope::err` with "Blocking command task failed: ..." prefix |
| Registry missing | Warning code `REGISTRY_MISSING` (16B) in `warnings[]`; returns partial payload |
| Auth snapshot sync failure | Warning code `CURRENT_AUTH_SYNC_FAILED` (24B) in `warnings[]` |
| Quota migration failure | Warning code `LEGACY_QUOTA_MIGRATION_FAILED` (29B) |
| Daemon auto-repair fails | Warning code `AUTO_SWITCH_DAEMON_REPAIR_FAILED` (32B) |
| All warnings are non-fatal | Response still `Ok` with `warnings` array populated |

---

## side_effect_asserts

1. After call: Tauri event listener for `"runtime-state-updated"` receives payload.
2. After call with registry drift: registry file mtime advances.
3. After call with quota change: quota store file updated.
4. Tray menu updated on every successful call (verify via Computer Use screenshot).

---

## test_mapping (producer-acceptance-draft)

| Test | Type | Rationale |
|------|------|-----------|
| Returns AppStatusPayload with autoSwitchFeatureKey="dev.aimami.auto-switch" | e2e (Tauri) | hardcoded constant, verify in response |
| runtime-state-updated event fired after invoke | e2e (Tauri) | subscribe to event in test, call invoke, verify event received |
| warnings[] populated when registry missing | e2e (Tauri) | remove registry.json, call invoke, check warnings |
| persist_registry called when registry diffs | unit (Rust) — Repository | inject stale registry, call load_snapshot_local, assert fs::write called |
| quota_store::save called when quota changes | unit (Rust) — quota_store | inject quota diff, call load_snapshot_local |
| tray menu updated on success | manual (Computer Use) | call invoke, screenshot tray |
| spawn_blocking error propagates as Err envelope | unit (Rust) | inject panic in blocking task |

---

## dim6_basis
Evidence: accounts/load_snapshot/manifest.json documents 6 side-effects at VAs; evidence.md §Confirmed items 12 (broadcast_runtime_snapshot VA), 13 (event name at 0x101154e6d), 15 (error string format); interfaces/load_snapshot_interface.md documents all warning codes and side-effect conditions.

Note: dim1 ACCEPTED_UNKNOWN (no explicit 1.1.1 CCF trace; consistent with 1.0.9 `consumerStartReady`). dim5_win Unknown. Blocked on both for readyToImplement.
