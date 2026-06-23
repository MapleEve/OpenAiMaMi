# load_snapshot — Owner (Windows x64, GOLD-LEAF)
session=wf-aimami111-delta-20260618-goldleaf  machine=<本地机器>
sha=d24e429a  date=2026-06-18

## Owner Function

**Primary owner** of the `load_snapshot` IPC command is the async body `load_snapshot_async_body_111`.

The Tauri IPC dispatch entry `sub_1409656E0` (0x1409656E0) is too large to decompile (0xed9 bytes, 133 basic blocks), but its role is confirmed: it registers the string `"load_snapshot"` (xref @ 0x1409657aa) and chains into an async state machine.

| Symbol | VA | Role |
|---|---|---|
| IPC dispatch (too large) | `0x1409656E0` | Tauri command registration, string "load_snapshot" @ 0x1412faa1b |
| **async body (owner)** | `0x140796310` | Async executor: state lock → diff-gate write → parallel usage refresh |
| write-if-changed (core) | `0x1401B53F0` | Diff gate + conditional disk write |
| read-only variant | `0x1401B4A90` | No-diff-gate serialize+write for diagnostic/force paths |

## Ownership Chain

```
Tauri IPC → sub_1409656E0 (dispatch)
  → sub_1408E3F20 (async SM) → sub_140E30410 (poll)
    → load_snapshot_async_body_111 @ 0x140796310  ← OWNER
        → [serial] load_snapshot_write_if_changed_111 @ 0x1401B53F0  ← CORE GATE
        → [parallel] refresh_usage_snapshot_core_111 @ 0x1401BD570  ← NEW in 1.1.1
```

## Delta vs 1.0.9

- Async body now calls `refresh_usage_snapshot_core_111` (parallel branch) which did not exist in 1.0.9
- `load_snapshot_write_if_changed_111` diff gate extended with 3 new `snapshotProgressive` byte comparisons at `a3+504/505/506` and flag at `a3+652`
- Account struct stride: 336 bytes (grew from 1.0.9); 3 new optional timestamp Arc-clones at offsets +248/+272/+296
- `core_snapshot_payload_deserialize_serde_111`: case 1 "snapshotProgressive" is entirely new
- `serialize_skill_snapshot_json_111`: emits "snapshotProgressive" field (new JSON key)
- Two new disk-side-effect functions: `quota_history_append_dedup_111` (in-mem) + `quota_history_persist_file_111` (DISK_WRITE)

## State Layout Offsets (AppState / RelayCtx)

| Offset | Field | Type |
|---|---|---|
| `a2[77]` (RelayCtx) | snapshotPath ptr | `*const u8` |
| `a2[78]` | snapshotPath len | `usize` |
| `a3+162*4` (AppState DWORD2) | schemaVersion | `u32` |
| `a3[80]` | writtenAt | `u64` |
| `a3+504..+506` | snapshotProgressive | `[u8; 3]` (DELTA NEW) |
| `a3+652` | snapshotProgressiveFlag | `u8` |
| `a3[44]` | mcpServers len | `usize` |
| `a3[43]` | mcpServers ptr | `*const u8` |
| `a3[47]` | installedSkills len | `usize` |
| `a3[69]` | subscriptionExpiresAt (Option sentinel) | `u64` |
| `a3[84]` | subscriptionExpiresAt value | `u64` |
| `a3[83]` | subscriptionWillRenew | `bool-like` |
| `a3+600` | flag | `u8` |
| `a3+632` | flag | `u8` |
| `a3+82..` | accounts (Vec<Account>, 336B stride) | start of account vec |
| `account+248` | lastUsageAt? | `Option<DateTime>` (DELTA NEW) |
| `account+272` | subscriptionExpiresAt? | `Option<DateTime>` (DELTA NEW) |
| `account+296` | createdAt? | `Option<DateTime>` (DELTA NEW) |
