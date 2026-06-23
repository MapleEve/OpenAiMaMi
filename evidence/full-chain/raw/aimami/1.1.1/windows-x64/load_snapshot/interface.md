# load_snapshot — Interface Contract (Windows x64, GOLD-LEAF)
session=<审计会话>  machine=<本地机器>
sha=d24e429a  date=2026-06-18

## dim1 — Frontend CCF (Invoke)

String `"load_snapshot"` found at IDB address `0x1412faa1b` (1 match, unique).
Xref in dispatch body `0x1409656E0` @ `0x1409657aa`.

Frontend invocation: `invoke("load_snapshot", args)` — confirmed present in binary string table.
No frontend source available for direct grep; string uniqueness in binary confirms single IPC handler.

**CCF status: CONFIRMED** — single string anchor, single xref, routes to async body.

## dim2 — Arg Keys + Extractor

The IPC handler at `0x1409656E0` receives arguments via Tauri's command argument extractor machinery.
The async body accepts:
- `a2` = `*mut RelayCtx` (contains `snapshotPath` at offsets [77]/[78])
- `a3` = `*mut AppState` (in-memory snapshot, 162+ QWORD fields)

No named argument deserialization keys visible in string table for this command — the args are passed as a pre-structured relay context, not as JSON key-value pairs. The IPC layer extracts the relay context pointer before dispatch.

**dim2 status: CONFIRMED** — struct-pointer args, not keyed JSON args.

## dim3 — Deep Call-Tree (depth ≥ 5)

See call-tree.md. Max depth: 8 from IPC root.

Path achieving depth 8:
```
IPC dispatch (0) → async SM (1) → poll (2) → async body (3)
  → write_if_changed (4) → read_existing_snapshot (5)
    → sub_140003600 JSON parse (6) → bootstrap_state_payload_deserialize_json_111 (7)
      → core_snapshot_payload_deserialize_serde_111 (8) → serde visitor cases (LEAF)
```

All paths terminated with explicit reason (LEAF / TOO_LARGE / platform-primitive).

**dim3 status: CONFIRMED** — depth 8, all_paths_terminated=true.

## dim4 — DTO + Struct Fields

### BootstrapStatePayload (deserialized from disk JSON)
```
struct BootstrapStatePayload {
    schema_version: String,          // key="schemaVersion" (required, 13-char key header)
    written_at: StringOrI64,         // key="writtenAt" — sub_1401646B0 (case 0)
    snapshot_progressive: bool,      // key="snapshotProgressive" [DELTA: NEW in 1.1.1]
    usage_analytics: Arc<Object>,    // key="usageAnalytics"
    mcp_servers: Vec<McpServerEntry>,   // key="mcpServers"
    installed_skills: Vec<InstalledSkill>, // key="installedSkills"
}

// Output memory layout (confirmed from LABEL_39 write-back in serde visitor):
// a1+0    = result_tag (QWORD)
// a1+8    = writtenAt value
// a1+16   = parse result tag (3 = sentinel/error)
// a1+24 .. a1+695  = field data block (0x2A0 = 672 bytes)
// a1+696  = mcpServers ptr  (0x8000000000000000 = None)
// a1+704 .. a1+784 = mcpServers data (80 bytes)
// a1+792  = installedSkills ptr
// a1+800 .. a1+848 = installedSkills data (48 bytes)
// a1+856  = usageAnalytics ptr
// a1+864 .. a1+912 = usageAnalytics data (48 bytes)
// a1+912  = snapshotProgressive (bool)  [DELTA: NEW at offset 912]
```

### Account Struct (336 bytes per entry, 1.1.1)
```
struct Account {
    // [0..247]: existing fields (accountKey, email, alias, accountName, etc.)
    // [248]: lastUsageAt?         Option<DateTime>  [DELTA: NEW Arc-clone in 1.1.1]
    // [272]: subscriptionExpiresAt? Option<DateTime> [DELTA: NEW Arc-clone]
    // [296]: createdAt?           Option<DateTime>  [DELTA: NEW Arc-clone]
    // [329]: bool flag (active subscription indicator, used in refresh loop)
    // total stride: 336 bytes
}
// 17 serialized fields (account_dto_serialize_json_111):
// accountKey, snapshotPath, email, alias, accountName, workspaceName,
// profileName, plan, authMode, hasActiveSubscription,
// subscriptionExpiresAt (Option<DateTime>), subscriptionWillRenew (bool),
// createdAt (DateTime), lastUsedAt (Option<DateTime>), lastUsageAt (Option<DateTime>),
// cachedPrimaryWindow (Option<Window>), cachedSecondaryWindow (Option<Window>)
```

### QuotaHistoryPoint (0xA8 bytes = 168 bytes per entry)
```
struct QuotaHistoryPoint {
    // match key fields:
    //   +0  .. +80  = account/quota data (includes subscription discriminant)
    //   +80         = account_id match field (v8+64)
    //   +56         = account_id ptr (v9)
    //   +72         = quota value
    //   +80         = bool flag
    // dedup: match by account_id + quota + subscription fields
    // store: a1[1]=ptr, a1[2]=len, *a1=cap, a1[3]=last_ts
    // max entries: 21 (trimmed by sub_1407B44C0)
    // entry size in Vec: 168 bytes stride
}
```

**dim4 status: CONFIRMED** — all key struct fields grounded in decompile.

## dim5 — Same-Platform Gate

All Win32 file I/O goes through:
- `win32_file_read_bytes_111` @ `0x141093260`
- `win32_file_write_bytes_111` @ `0x141093710`
- `quota_history_persist_file_111`: CreateFile (`sub_141087E20`) + WriteFile (`sub_1410A8340`) + CloseHandle

Path gate: `relay_config_check_parent_dirs_sys` @ `0x1406F2870` — validates parent directories exist before any write.

**dim5 status: CONFIRMED** — all I/O routed through named Win32 wrappers, path gate applied.

## dim6 — Implementation Ready

All dims 1-5 confirmed. This leaf is implementation-ready:
- Frontend invokes `"load_snapshot"` with relay context
- Backend: diff-gate → conditional write + parallel usage refresh
- New in 1.1.1: `snapshotProgressive` field in DTO + diff gate; Account struct +88 bytes; quota history persistence

**dim6: READY** (implementation-level gold-leaf; not a gate promotion)

## Return Values (IPC level)

The IPC result is returned as a Tauri command result:
- `load_snapshot_write_if_changed_111` returns: `10`=success/no-op, `2`=io_error, `3`=serialize_error
- `load_snapshot_read_only_111` returns: same codes
- Result is encoded by Tauri's response machinery (sub_140872C70) before sending to frontend
