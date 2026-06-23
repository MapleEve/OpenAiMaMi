# owner — merge_mystery_unlock_grants (windows-x64, AiMaMi 1.1.1)

session: wf-aimami111-delta-20260618-goldleaf
machine: <本地机器>
producer: claude-sonnet-4-6
sha: d24e429a
baseline: 1.0.9
idb: <本地路径>

---

## Owner Symbol

| Field | Value |
|---|---|
| Symbol (renamed in IDB) | `merge_mystery_unlock_grants_owner_sys` |
| VA | `0x1400254C0` |
| Size | `0x4B1` bytes |
| IPC command string | `"merge_mystery_unlock_grants"` |
| IPC command string VA | `0x1412AC3B3` |
| Platform | windows-x64 |
| IDB confirmed | yes — HexRays decompile, refs verified |

## IPC Payload DTO Keys (confirmed from decompile)

| Field | Key string | Key VA | Key len | Type |
|---|---|---|---|---|
| repo | `"repo"` | `0x1412AC6D1` | 4 | String |
| grants | `"grants"` | `0x1412AC798` | 6 | Array<MysteryRouteGrant> |

## Stack Layout (InvokeContext)

| Offset | Content |
|---|---|
| `[0..520]` | InvokeResolver clone (`v15`) |
| `[520..920]` | Payload clone (`v17`) |
| `[920..936]` | Opts `__int128` (`v37`) |
| `[936]` | Extra opts qword (`v38`) |

## MysteryRouteGrant Struct (inferred)

```
struct MysteryRouteGrant {
    // On-stack stride = 40 bytes (5 qwords per entry)
    discriminant: u64,     // [0]   (2=present; checked in phase-2 loop)
    value:        u64,     // [8]   grant value (u64 / version)
    extra:        u64,     // [16]  extra field (context)
    key_ptr:      *u8,     // [24]  heap ptr to key string data
    key_len:      u64,     // [32]  key string length
}
// Heap drop: sub_14033AB50 per element; dealloc stride=40B at sub_140001370
// Drop-loop confirmed at 0x140025882 in owner body
```

## Grant Key Dispatch (6 categories — 1.1.1 only)

| Length | Key | Match method | 1.0.9? |
|---|---|---|---|
| 3 | `mcp` | uint16 + byte inline cmp | yes |
| 6 | `skills` | uint32 + uint16 inline cmp | yes |
| 8 | `overview`, `accounts`, `sessions`, `settings` | uint64 QWORD 4-way cmp | yes |
| 11 | `maintenance` | 2x uint64 overlap cmp | yes |
| 12 | `subscription` | uint64 + uint32 cmp | yes |
| 18 | `customInstructions` | SSE2 16B+2B SIMD (`xmmword_1412B5240` + `0x736E`) | **NEW** |

## New 1.1.1 Callees (vs 1.0.9)

| Symbol | VA | Role |
|---|---|---|
| `pending_auto_switch_state_lock_acquire_111` | `0x14006EDC0` | futex gate blocking merge during auto-switch |
| `mystery_grant_mutex_lock_and_write_111` | `0x14078AEB0` | mutex-serialized write orchestrator |
| `hotspot_merge_grants_into_config_111` | `0x1401B3630` | atomic read-modify-write merge loop |
| `system_time_precise_u32_111` | `0x14107B7E0` | elapsed timing (GetSystemTimePreciseAsFileTime) |
| `elapsed_since_ts_111` | `0x14107B790` | duration computation |
