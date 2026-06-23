# load_quota_history — Interface Contract (Windows x64)
# session: wf-aimami111-delta-20260618-goldleaf
# gate_tier: full_gold_leaf

## IPC Signature

```
command: "load_quota_history"
```

### Frontend invocation (dim1 confirmed)

```javascript
// assets/index-DdcCOEJG.js, line 86, col 31237
loadQuotaHistory: t => ne("load_quota_history", { accountKey: t })

// Callsite in assets/analytics-panel-LbLPe_yT.js
V.loadQuotaHistory(t ?? void 0)
// queryFn wrapper → terminal tauriInvoke
```

### IPC Payload Keys (dim2 confirmed)

| key | type | source |
|---|---|---|
| `accountKey` | `string` | frontend arg `t`; payload_ctx offset +920/+928/+936 |
| `repo` | `string` | NOT from frontend; resolved server-side from skill store |

Key extraction VAs:
- `accountKey` string: `0x1412ac77f`
- `repo` string: `0x1412ac6d1`

### Backend function signature (dim4 confirmed)

```rust
// Owner: load_quota_history_handler_111 @ 0x140020E40
fn load_quota_history_handler_111(payload_ctx: *mut u8) -> i64
// payload_ctx layout:
//   +0    : cfg blob (520 bytes, copied to stack)
//   +520  : state blob (400 bytes, copied to stack)
//   +920  : accountKey.ptr (u64)
//   +928  : accountKey.cap (u64)
//   +936  : accountKey.len (u64)

// Core reader: quota_history_file_read_and_filter_111 @ 0x1402002F0
fn quota_history_file_read_and_filter_111(
    out: *mut Out,
    repo_ptr: *const u8,
    repo_len: usize,
    days: i64,       // hardcoded 7 in 1.1.1 caller
    accountKey_ptr: *const u8,
    accountKey_len: usize,
) -> *mut Out
```

### DTO: QuotaHistoryPoint (dim4 confirmed)

Struct layout (Rust, ~953 bytes per entry):

| offset | type | description |
|---|---|---|
| +0 | i64 | field0.len |
| +8 | *u8 | field0.ptr |
| +16 | i64 | field0.cap |
| +24 | u8 | field0 bool flag |
| +32 | i64 | field1.len |
| +40 | *u8 | field1.ptr |
| +48 | i64 | field1.cap |
| +56 | u8 | field1 bool flag |
| ... | ... | pattern repeats for 24 string fields total |
| +928 | i64 | field23.len |
| +936 | *u8 | field23.ptr |
| +944 | i64 | field23.cap |
| +952 | u8 | trailing bool flag |

Deep-copy function: `quota_history_point_deep_copy_111 @ 0x1401EB870`
- Copies each (len/ptr/cap) triple + bool flag
- Handles null (len<0 → ptr=0) and zero-size (len=0 → ptr=1 ZST sentinel) strings
- Allocates fresh heap for each non-empty string field

Serde visitor VA: `0x1402225F0`
Struct visitor VA: `0x1412C1C0B`
Serde error string VA: `0x1412AD177`
Stride in result vec: 64 bytes per entry (accumulation), 96 bytes per entry (cleanup loop)

### Response Envelope

```json
{
  "schemaVersion": 1,
  "success": true,
  "code": 0,
  "message": "success",
  "warnings": [],
  "data": [ ...Vec<QuotaHistoryPoint as JSON>... ]
}
```

Ok tag literal: `0x8000000000000025`

### Time-Filter Contract (dim3 confirmed)

```
cutoff = system_time_precise_u32_111() - (7 * 86400)
// entries with QuotaHistoryPoint.timestamp < cutoff → excluded
// entries with key != accountKey (when a5 provided) → excluded
// entries >= 2000 → file trimmed to newest 2000 and rewritten
```

### Error Paths

| condition | path |
|---|---|
| file not found (code 2) | emit empty ok result; no error to frontend |
| file open error | `sub_140041790` cleanup → LABEL_5 ok-empty |
| alloc fail | `sub_14124BCCB` OOM panic |
| JSON decode error on line | skip malformed entry (continue) |
| accountKey not found in skill store | IPC error path via `sub_14080C3C0` (has_notch_invoke_resolver_respond) |
| skills query failed | IPC error path via `sub_14080C3C0` |
| serialize error | format Display error via `sub_140807390`, wrap in result tag=3 |

### Platform Scope (dim5 confirmed)

windows-x64 only. macos-arm64 has separate `snooze_file_open_111` implementations with platform-specific path resolution; this leaf covers windows path only.
