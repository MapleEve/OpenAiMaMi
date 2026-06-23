# Interface: load_snapshot — AiMaMi 1.1.1 macos-arm64

## IPC Contract

```
command: "load_snapshot"
argKeys: []  // no parameters
```

## Request

```typescript
// No parameters
invoke("load_snapshot")
```

## Response DTO

```typescript
// CoreEnvelope<AppStatusPayload>
interface CoreEnvelope<T> {
  data: T;           // AppStatusPayload
  warnings: string[];  // may contain warning codes from ok_with_warnings
  code: number;        // success code
  requestId?: string;
}

interface AppStatusPayload {
  // Active account info
  accountSummary: AccountSummary | null;  // Option<AccountSummary>; null if no active account
  activeAccount: string | null;           // Option<String>; active account key
  authMode: string;                       // AuthMode enum (lowercase debug format)
  planType: string;                       // PlanType enum (lowercase debug format)

  // Auto-switch feature
  autoSwitch: boolean;                    // bool
  autoSwitchFeatureKey: string;           // always "dev.aimami.auto-switch" (22B hardcoded)
  daemonState: number;                    // u8 from check_daemon_state

  // Path state
  appPathState: AppPathState;             // CodexPaths-derived path availability

  // Quota info (from quota_store)
  quotaItemCount: number;                 // approximate; u32
  // Additional quota fields: inferred from 1.0.9 baseline
}

// AccountSummary — if active account exists
interface AccountSummary {
  // Fields: inferred from 1.0.9 baseline (clone shim at 0x1005096f0 found)
  // stride=336 bytes per item in account Vec
}
```

## Side Effects

| Effect | Condition | VA |
|--------|-----------|-----|
| `persist_registry` (fs write) | registry has diffs vs snapshot | `0x1004c3a00` |
| `quota_store::save` (fs write) | quota items changed during sync | `0x100535100` |
| `platform::daemon::install_daemon` | autoSwitch=true AND daemon needs repair | `0x100559dc0` |
| `tray_menu::refresh_tray_menu_with_snapshot` | always on success | `0x10062bc40` |
| `note_usage_refresh_activity` | source_kind in {usage, fake, mutation, progres...} | `0x10061c240` |
| emit `runtime-state-updated` | always on success | `0x100363c00` |

## Error Codes (warning strings in CoreEnvelope.warnings)

| Code | Length | Meaning |
|------|--------|---------|
| `REGISTRY_MISSING` | 16B | No local account registry found yet |
| `CURRENT_AUTH_SYNC_FAILED` | 24B | Auth snapshot sync failure during sync_local_runtime_state |
| `LEGACY_QUOTA_MIGRATION_FAILED` | 29B | Quota migration failure during sync |
| `AUTO_SWITCH_DAEMON_REPAIR_FAILED` | 32B | Daemon auto-repair failed in load_local_state_synced |

## Fatal Error Path

If `spawn_blocking` task panics or returns Err:
- Error: "Blocking command task failed: Accounts imported, but local snapshot refresh failed: ..."
- Source file hint: "src/commands/relay.rs" (embedded in error template)
- Returns `Err` to IPC dispatcher → `InvokeResolver::return_result` with error code

## Event Emitted on Success

```
event: "runtime-state-updated"
payload: CoreSnapshotPayload (serialized) + source_kind bytes
```

source_kind for `load_snapshot` calls: inferred "mutation" or "usage" (runtime-determined by caller context)
