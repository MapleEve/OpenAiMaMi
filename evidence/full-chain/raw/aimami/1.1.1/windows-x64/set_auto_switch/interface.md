# set_auto_switch — Interface Contract (GOLD LEAF)
# session: <审计会话> / machine: <本地机器>

## dim1 — Frontend CCF (confirmed)

Source: `settings-page-SeKzRc3U.js` + `index-DdcCOEJG.js`

```typescript
// Frontend invoke binding
setAutoSwitch: (enabled: boolean) =>
    invoke("set_auto_switch", { enabled })
```

No `repo` key in frontend call — repo resolved server-side from relay context.

Mock stub in index bundle confirms return shape:
```javascript
case "set_auto_switch":
    return ok({ autoSwitch: { ...state.autoSwitch, enabled: args.enabled ?? true } });
```

## dim2 — IPC Arg Extractor (confirmed)

逆向分析 strings anchored at:
- `aSetAutoSwitch` = `"set_auto_switch"` (0x1412AC1F1)
- `aRepo`          = `"repo"` (0x1412AC6D1) — tag=15, resolver blob
- `aEnabled`       = `"enabled"` (0x1412AC720) — tag=7, bool, args blob

## dim4 — DTO / Return Struct (confirmed)

### Input DTO (wire)
```
{
  enabled: bool         // serde tag=7
}
```
`repo` is injected by the command dispatcher from relay context; not passed by frontend.

### Output DTO (wire) — `AutoSwitchRecord`
```
{
  bundle_name:     "dev.aimami.auto-switch"  // 22-byte heap alloc, NEW IN 1.1.1
  enabled:         bool  (= enabled & 1)
  schtask_running: u8    (0=running, 1=other, 2=not_found)
  updatedAt_low:   u32   // system_time_precise_u32_111 low
  updatedAt_high:  u32   // elapsed_since_ts_111 high
}
```

### Persisted JSON (relay_manager_state+36 slot)
```json
{
  "updatedAt":        <u32>,
  "activeAccountKey": "<string from relay_state>",
  "items":            [<AutoSwitchItem>]
}
```
String keys confirmed from IDB: `aUpdatedat_0` (0x1412B6C28), `aActiveaccountk_0` (0x1412B6C31), `aItems_0` (0x1412B6C41).

## dim5 — Platform Gate (Windows-only)

All schtask CRUD calls (`schtask_codexmate_autoswitch_delete_111`, `daemon_schtasks_register_sys`, `schtask_codexmate_autoswitch_query_111`) are WINDOWS-ONLY.
macOS build does not have these callees. Confirmed by Windows-only function set in this IDB.

## Side Effects (all new in 1.1.1)

| Side effect                            | Path         | Win32 API                          |
|----------------------------------------|--------------|------------------------------------|
| Create schtask `CodexMateAutoSwitch`   | enabled=true | `schtasks /Create /SC MINUTE /MO 5` |
| Query schtask status                   | both paths   | `schtasks /Query /FO CSV`          |
| Delete schtask `CodexMateAutoSwitch`   | enabled=false| `schtasks /Delete /F`              |
| Delete `auto-switch-snooze.json` x2   | enabled=false| `DeleteFileW` + `SetFileInformationByHandle` fallback |
| Backup `auto-switch-snooze.json`       | enabled=true + threshold | `CopyFileExW`          |
| Persist JSON to relay DB slot          | both paths   | internal `sub_1403A64F0`           |

## Error Handling

| Error condition                | Response                              |
|-------------------------------|---------------------------------------|
| Pending switch active          | `Err(PendingSwitchActive {v22=1})`    |
| skills query failed            | `Err(skills_err)` via sub_14080C3C0  |
| exe_path retrieval failed      | `Err(tag=9)` via LABEL_25             |
| schtask register failed        | `Err(IoError)` propagated             |
| Persist JSON failed            | `Err(tag=2|3)` propagated             |
| Snooze delete EACCES           | `SetFileInformationByHandle` fallback, error dropped |

## Concurrency Contract

Pre-flight `_InterlockedCompareExchange8` CAS spinlock on `pending_auto_switch` byte.
`WakeByAddressSingle` release after body completes.
Poison byte (`Address[1]`) set if a previous task panicked inside the lock region.
