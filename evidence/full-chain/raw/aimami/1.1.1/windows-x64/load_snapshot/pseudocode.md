# load_snapshot — Windows x64 Pseudocode (GOLD-LEAF)
session=wf-aimami111-delta-20260618-goldleaf  machine=<本地机器>
delta_class=integrity_recovered  baseline=1.0.9
sha=d24e429a

---

## Owner VA Table

| Symbol | VA | Size | Status |
|---|---|---|---|
| load_snapshot IPC dispatch | `0x1409656E0` | 0xed9 / 133 bb | TOO_LARGE (hex-rays) |
| load_snapshot_async_body_111 | `0x140796310` | 0xbd0 | decompiled |
| load_snapshot_write_if_changed_111 | `0x1401B53F0` | 0x9e8 | decompiled (CORE) |
| load_snapshot_read_only_111 | `0x1401B4A90` | 0x27a | decompiled |
| load_mcp_servers_read_existing_snapshot_111 | `0x1401BF000` | — | decompiled |
| bootstrap_state_payload_deserialize_json_111 | `0x14008A7C0` | 0x92b | prior session |
| core_snapshot_payload_deserialize_serde_111 | `0x14024B8B0` | 0xf09 | decompiled |
| serialize_skill_snapshot_json_111 | `0x140197420` | — | decompiled |
| account_dto_serialize_json_111 | `0x1401B96B0` | 0x3b3 | prior session |
| account_list_deep_clone_111 | `0x140364A10` | 0x4ec | prior session |
| account_slice_clone_7fields_111 | `0x1401EB500` | 0x11d | prior session |
| refresh_usage_snapshot_core_111 | `0x1401BD570` | — | decompiled (NEW) |
| quota_history_append_dedup_111 | `0x1401FF820` | — | decompiled (NEW) |
| quota_history_persist_file_111 | `0x140200EA0` | — | decompiled (NEW) |

String anchor: `"load_snapshot"` @ `0x1412faa1b`, xref → `0x1409657aa` (in dispatch `0x1409656E0`)

---

## IPC Registration & Async Chain

```
[ROOT] "load_snapshot" IPC — sub_1409656E0 @ 0x1409656E0  [TOO_LARGE]
  string @ 0x1412faa1b
  → sub_1408E3F20 (async state machine, switch byte@a2+504)
      CASE 0: sub_1410A1DF0 → spawn future + executor sub_140E30410
        sub_140E30410 (poll, 0x24 states / 36 await points)
          CASE 0x1C: skill_store_get_all_111 @ 0x14106D960
          CASE 0x0C: sub_140F09010 → load_snapshot_async_body_111 @ 0x140796310
      CASE 1: sub_140872C70 → response encode  [LEAF]
      CASE 2/3/4: error dispatch  [LEAF]
```

---

## load_snapshot_async_body_111 — Full Decompile

VA: `0x140796310`  size: 0xbd0

Key logic (hex-rays output condensed for gold-leaf; see raw decompile for full variable declarations):

```c
__int64 load_snapshot_async_body_111(__int64 a1, _BYTE *a2, __int64 a3)
{
    // Mutex CAS lock on a2[0]; poisoned-lock panic via sub_1410B1930 if needed
    if (_InterlockedCompareExchange8(a2, 1, 0)) { sub_14124A510(a2); }

    // Check cancellation/waker flags (off_141899DC0, sub_14124B1D0)
    // a2[1] = poison flag; WakeByAddressSingle on completion

    // Phase A: lock state + assemble snapshot context
    state_manager_lock_and_assemble(&v81, a2 + 8);
    // v81 == 2 → Mutex error path → return error Result

    // Phase B: build snapshot struct + call CORE diff-gate
    sub_1401AF5C0(&v76, v43, &v81);   // state assembler
    if (v76.result != 10) {
        // snapshot save failed → log "PROGRESSIVE_STATE_SAVE_FAILED" (29 chars @ heap)
        // sub_1410A1DF0 to spawn log entry; continue (non-fatal)
    }

    // Phase C: sync local runtime state
    sync_local_runtime_state_builder(&v74, v43, &v81, v19);

    // Phase D: CORE write call
    load_snapshot_write_if_changed_111(&v74, v43, v70.m128i_i64);
    if (v74.result != 10) { sub_1407B1650(&v74); }  // drop error variant

    // Phase E: schedule refresh
    schedule_full_runtime_refresh_builder(&v74, &v76, &v108);

    // Phase F: PARALLEL — per-account usage refresh (non-blocking; quota history NEW in 1.1.1)
    refresh_usage_snapshot_core_111(&v81, v35, v113);

    // Waker/WakeByAddressSingle completion signal
    WakeByAddressSingle(Address);

    // Cleanup: dealloc Vec<account> loop, sub_1400467A0, sub_1400485A0, sub_140047480
    return a1; // Result<T>
}
```

Key callees discovered in this body:
- `state_manager_lock_and_assemble` @ `0x1401ABC20` — Mutex guard + state copy
- `sync_local_runtime_state_builder` @ `0x1401B62F0` — sync in-mem state before write
- `schedule_full_runtime_refresh_builder` @ `0x140213770` — post-write async refresh
- `sub_1401AF5C0` — state assembler (state[0]==2 = error sentinel)
- `sub_1407B1650` / `sub_1407B18B0` — drop Result variants

---

## load_snapshot_write_if_changed_111 — Full Decompile (CORE)

VA: `0x1401B53F0`  size: 0x9e8

```c
_QWORD *load_snapshot_write_if_changed_111(_QWORD *a1, _QWORD *a2, __int64 *a3)
{
    // STEP 1 — read current snapshot from disk
    __int64 v6 = a2[77];   // snapshotPath ptr
    __int64 v102 = a2[78]; // snapshotPath len
    load_mcp_servers_read_existing_snapshot_111(&v61, v6);
    // v61 = BootstrapStatePayload or sentinel (QWORD[+16]=3 means missing/error)

    // STEP 2 — DIFF GATE: 15+ field comparisons against in-memory state a3
    // All must match to skip write:
    if (  *((_QWORD*)&v62 + 1) != 3                            // not sentinel
       && DWORD2(v92) == *((_DWORD*)a3 + 162)                  // schemaVersion
       && (_QWORD)v92 == a3[80]                                // writtenAt
       && v77 == *((_BYTE*)a3 + 504)                           // snapshotProgressive[0]  [DELTA: NEW]
       && v78 == *((_BYTE*)a3 + 505)                           // snapshotProgressive[1]  [DELTA: NEW]
       && v79 == *((_BYTE*)a3 + 506)                           // snapshotProgressive[2]  [DELTA: NEW]
       && v64 == a3[44]                                        // mcpServers len
       && !sub_141213640(v63, a3[43], v64)                     // mcpServers content
       && v66 == a3[47]                                        // installedSkills len
       && !sub_141213640(v65, a3[46], v66)                     // installedSkills content
       && v68 == a3[50] && !sub_141213640(v67, a3[49], v68)   // field pair 5
       && v70 == a3[53] && !sub_141213640(v69, a3[52], v70)   // field pair 6
       && v72 == a3[56] && !sub_141213640(v71, a3[55], v72)   // field pair 7 (usageAnalytics)
       && v74 == a3[59] && !sub_141213640(v73, a3[58], v74)   // field pair 8
       && v76 == a3[62] && !sub_141213640(v75, a3[61], v76)   // field pair 9
       // extended fields:
       && BYTE12(v92) == *((_BYTE*)a3 + 652)                  // snapshotProgressiveFlag @+652
       && sub_1401F7A90(v80, a3 + 64)                         // cachedWindow compare
       && v87 == *((_BYTE*)a3 + 600)                          // flag @+600
       // subscription fields:
       && v95 == a3[84] && sub_140242320(v94, a3[83]) )       // subscriptionExpiresAt + willRenew
    {
        sub_1401D6610(&v61);   // drop existing snapshot
        goto LABEL_78;         // → *a1=10; return
    }

    // STEP 3 — path gate
    __int64 v8 = relay_config_check_parent_dirs_sys(a2);
    if (v8) { *a1=2; a1[1]=v8; return a1; }

    // STEP 4 — re-read for freshness
    load_mcp_servers_read_existing_snapshot_111(v30, v6);

    // STEP 4b — elapsed timestamp
    LODWORD(v38) = system_time_precise_u32_111();
    elapsed_since_ts_111(&v61, &v38, 3577643008LL, 27111902);
    // v30[0]=1; v30[1] = elapsed_or_zero

    // STEP 5 — copy account slice (7 Arc-counted string fields, 336 bytes/account)
    sub_1401EB500(v35, a3 + 42);

    // STEP 6 — build new snapshot struct
    if (*(_DWORD*)a3 == 2) {
        *(_QWORD*)&v36 = 2;  // error sentinel
    } else {
        sub_1401ED840(&v61, a3);       // deep snapshot struct builder
        sub_141212FB0(&v36, &v61, 336);
    }

    // STEP 7 — collect flags and subscription fields
    // field@+652 = snapshotProgressiveFlag
    // field@+544/545 = bytes
    // a3[67] = window handle
    // a3[72] = subscriptionExpiresAt (Option<DateTime> — Arc-clone at +106 / +248/+272/+296)
    // a3[76] = subscriptionWillRenew (Option<...>)

    // STEP 8 — deep-clone account list (336B stride, 3 new optional timestamps in 1.1.1)
    sub_140364A10(&v36, a3 + 82);
    // loop: 336B/account; Arc-clone @+248 (lastUsageAt), @+272 (subscriptionExpiresAt), @+296 (createdAt)
    sub_141212FB0(v31, &v61, 680);
    sub_141212FB0(&v61, v30, 920);

    // STEP 9 — serialize to JSON
    serialize_skill_snapshot_json_111(&v38, &v61);
    if (__OFSUB__(-(signed)v38, 1)) {
        *a1 = 3; a1[1] = v22; return a1;  // serialize_error
    }

    // STEP 10 — SIDE-EFFECT: write to disk
    sub_1401D6610(&v61);
    __int64 v24 = win32_file_write_bytes_111(v19, v102, v109, v23);
    if (v24) { *a1 = 2; a1[1] = v24; return a1; }  // io_error

LABEL_78:
    *a1 = 10; return a1;  // success (wrote or no-op)
}
// Return codes: 10=success, 2=io_error, 3=serialize_error
```

**DELTA vs 1.0.9 (diff gate):**
- `snapshotProgressive` bytes at `a3+504/505/506` now compared in gate (3 extra comparisons)
- `snapshotProgressiveFlag` at `a3+652` compared
- Account struct at 336 bytes (larger than 1.0.9)
- Three new optional timestamp fields at account offsets +248/+272/+296

---

## load_snapshot_read_only_111 — Full Decompile

VA: `0x1401B4A90`  size: 0x27a

```c
_QWORD *load_snapshot_read_only_111(_QWORD *a1, _QWORD *a2, __int64 a3)
{
    // Path gate first (unlike write variant which gates after diff check)
    __int64 v6 = relay_config_check_parent_dirs_sys(a2);
    if (v6) { *a1=2; a1[1]=v6; return a1; }

    __int64 v7 = a2[77];  // snapshotPath ptr
    __int64 v8 = a2[78];  // snapshotPath len
    load_mcp_servers_read_existing_snapshot_111((int64)v15, v7, v8);

    // Elapsed timestamp check
    v24.m256i_i32[2] = system_time_precise_u32_111();
    elapsed_since_ts_111(&v20, &v24, 0xD53E8000, 27111902);
    v15[0] = {1, elapsed_or_zero};

    // Clone window/subscription fields from a3
    sub_140363F30(&v23, a3);
    sub_1410A2210(&v24, a3 + 24);

    // Serialize (read-only path — no diff gate, always serializes current state)
    serialize_skill_snapshot_json_111(&v24, &v20);
    if (serialize_failed) { *a1=3; ... return a1; }

    // Write (read-only variant STILL writes — it writes the read result to disk)
    __int64 v13 = win32_file_write_bytes_111(v7, v8, v25, v12);
    if (v13) { *a1=2; ... } else { *a1=10; }
    return a1;
}
// Note: "read_only" means no diff gate, not no write. It re-serializes and writes current state.
```

---

## load_mcp_servers_read_existing_snapshot_111 — Full Decompile

VA: `0x1401BF000`

```c
__int64 load_mcp_servers_read_existing_snapshot_111(__int64 a1, __int64 a2, __int64 a3)
{
    win32_file_read_bytes_111(&v11, a2, a3);
    if (__OFSUB__(-v11, 1)) {
        // File not found / read error → emit sentinel
        sub_140041790(v12);
        goto LABEL_11;
    }
    v15 = v11;
    v13[0] = v12[0];  // copy raw bytes
    sub_140003600(&v11, v13);  // JSON parse → BootstrapStatePayload
    if (v11 != 2) {
        // parse ok → copy 0x398 bytes to output
        sub_141212FB0(v10, v12, 0x398);
        // free raw buffer
        goto LABEL_10;
    }
    // parse error → free allocations, fall to sentinel
    // ...dealloc v16 (40 bytes, alignment 8)

LABEL_11:  // sentinel path (file missing or parse error)
    *(_QWORD*)a1 = 0;
    *(_QWORD*)(a1 + 16) = 3;                         // tag=3 = sentinel
    *(_QWORD*)(a1 + 696) = 0x8000000000000000uLL;   // mcpServers sentinel
    *(_QWORD*)(a1 + 792) = 0x8000000000000000uLL;   // installedSkills sentinel
    *(_QWORD*)(a1 + 856) = 0x8000000000000000uLL;   // usageAnalytics sentinel
    return a1;
}
// Sentinel detection in write gate: *((_QWORD*)&v62+1)==3 → skip all comparisons → proceed to write
```

---

## core_snapshot_payload_deserialize_serde_111 — Full Decompile

VA: `0x14024B8B0`  size: 0xf09

Serde visitor loop; processes JSON token stream from `sub_14106ED00`:

```c
// Field dispatch by case number (sub_140188A20 returns field index):
switch (field_case) {
    case 0:  // "writtenAt" (9 chars @ 0x1412c1c59)
        // → sub_1401646B0(&v66, &v43)  — parse string-or-i64
        // output struct: v65 = discriminant, v58 = value
        // stored at: a1+8 (writtenAt data), a1 (tag)
    case 1:  // "snapshotProgressive" (19 chars @ 0x1412c1c62)  [DELTA: NEW in 1.1.1]
        // → sub_140164770(&v43, &v66)  — parse bool
        // stored at: v84 (discriminant), v42[] (bool value)
        // written to: a1+912 = v57 via LABEL_39
    case 2:  // "usageAnalytics" (14 chars @ 0x1412c1c75)
        // → sub_140163EA0(&v43, &v66)  — parse Arc<Object>
        // stored at v47[], written to a1+856..+912
    case 3:  // "mcpServers" (10 chars @ 0x1412c1c83)
        // → sub_140164560(&v43, &v66)  — parse Vec<McpServerEntry>
        // stored at v49[], written to a1+696..+792
    case 4:  // "installedSkills" (15 chars @ 0x1412c1c8d)
        // → sub_140163F60(&v43, &v66)  — parse Vec<InstalledSkill>
        // stored at v48[], written to a1+792..+856
}

// Output layout written at LABEL_39:
//   a1+0    = result_tag (QWORD)
//   a1+8    = writtenAt data (QWORD, from v65/v58 path)
//   a1+16   = parse result tag (QWORD, 3=sentinel)
//   a1+24 .. a1+695  = sub_141212FB0(a1+24, v43, 0x2A0) — field data block
//   a1+696  = mcpServers ptr (v22 = 0x8000000000000000 if absent)
//   a1+704 .. a1+784 = mcpServers data (80 bytes)
//   a1+792  = installedSkills ptr (v23)
//   a1+800 .. a1+848 = installedSkills data
//   a1+856  = usageAnalytics ptr (v21)
//   a1+864 .. a1+912 = usageAnalytics data
//   a1+912  = snapshotProgressive (bool, v57)  [DELTA: offset 912 = NEW field]
// Sentinel values: 0x8000000000000000 = Option::None / missing
// 0x8000000000000001 = unset/not-yet-parsed tracking sentinel
```

---

## serialize_skill_snapshot_json_111 — Full Decompile

VA: `0x140197420`

```c
__int64 serialize_skill_snapshot_json_111(_QWORD *a1, __int64 a2)
{
    // alloc 128-byte buffer for JSON writer
    _BYTE *v4 = sub_140001360(128, 1);
    *v4 = '{';
    // emit fields in order:
    sub_140261480(&v10, qword_1412B6550, 13, a2 + 920);       // "schemaVersion"? (13 chars, from a2+920)
    sub_14025DB40(&v10, aWrittenat, 9, a2);                    // "writtenAt" (9 chars, a2+0)
    sub_14025D060(&v10, aSnapshotprogre, 19, a2 + 16);        // "snapshotProgressive" (19 chars, a2+16) [DELTA]
    serialize_usage_analytics_field_111(&v10, aUsageanalytics, 14, a2 + 696);  // "usageAnalytics"
    sub_140265BB0(&v10, aMcpservers, 10, a2 + 792);           // "mcpServers"
    sub_140258C80(&v10, aInstalledskill, 15, a2 + 856);       // "installedSkills"
    // close JSON: emit '}' via sub_14033FA00
    *a1 = buffer; a1[2] = len;  // return (ptr, capacity, len)
}
// Field offsets consumed from snapshot struct: +0=writtenAt, +16=snapshotProgressive, +696=usageAnalytics, +792=mcpServers, +856=installedSkills, +920=schemaVersion context
```

---

## refresh_usage_snapshot_core_111 — Full Decompile (NEW in 1.1.1)

VA: `0x1401BD570`  — called PARALLEL after write gate in load_snapshot_async_body_111

```c
__int64 refresh_usage_snapshot_core_111(__m128i *a1, __int64 a2, __int64 a3)
{
    // Prepare per-account snapshot clone list (336B stride, a1[49]/a1[50])
    sub_1403078C0(&v99, &v72);  // build cloned account list (304B stride for this work buffer)

    // For each account in clone list:
    for (i = v100; i != v9; i += 304) {
        // Build account credentials context (sub_1401EACD0, sub_140676A10)
        // Get timestamp for rate-limit check
        system_time_precise_u32_111(); elapsed_since_ts_111(..., 0xD53E8000, 27111902);

        // HTTP fetch usage
        fetch_wham_usage_http_111(&v102, &v131, &v103);

        if (result == 10 && detail == 3) {
            // Quota fetch succeeded
            ++v145[55].m128i_i32[1];  // success counter
            elapsed_since_ts_111(...);
            // Update account slot in shared state: offset+32=1, +40=elapsed, +48=2, +88=2, +330=1
            quota_history_append_dedup_111(&v145[46], &v116, v34);  // [DELTA: NEW]
            // quota_history_persist_file_111 is called by on_usage_fetch_success_write_store_111
        } else if (result != 10) {
            // Error path
            ++v145[55].m128i_i32[0];  // error counter
            on_usage_fetch_success_write_store_111(...);  // clears old data
        } else {
            // Partial success
            on_usage_fetch_success_write_store_111(v43, v110, v109, &v72, v70);
        }
    }
    // Post-loop: rebuild best-account state (sub_1401BCE90, sub_1401ED840)
    // Update shared state timestamp
}
```

Key new callees vs 1.0.9:
- `quota_history_append_dedup_111` @ `0x1401FF820` — dedup in-mem append
- `on_usage_fetch_success_write_store_111` @ `0x1401B8D90` — store success result
- `usage_fetch_error_drop_111` @ `0x1401D4C70` — drop error variant

---

## quota_history_append_dedup_111 — Full Decompile (NEW)

VA: `0x1401FF820`  size: 0xA8-byte entry

```c
char quota_history_append_dedup_111(_QWORD *a1, const __m128i *a2, __int64 a3)
{
    // a1 = quota history store (ptr, len, cap, last_ts)
    // a2 = new QuotaHistoryPoint (0xA8 bytes)
    // a3 = timestamp

    if (!a1[2]) goto LABEL_11;  // empty → append directly

    // Scan existing entries (168B stride) for matching account_id+quota
    // Match key: v8+64 (account_id len), v9 (account_id ptr via sub_141213640)
    for each entry {
        if (account_id matches && quota matches && subscription matches) {
            if (all_fields_identical) {
                sub_1401D5DB0(a2);  // drop duplicate → return 0
                return 0;
            }
            // Different data for same key → overwrite
            goto LABEL_24;
        }
    }

LABEL_11:  // new entry
    if (a1[2] == *a1) sub_141220DE0(a1);  // grow Vec
    sub_141212FB0(v11 + 168 * v4++, a2, 0xA8);  // copy 168-byte entry
    a1[2] = v4;

LABEL_31:
    a1[3] = a3;  // update last_ts
    if (v4 >= 2) {
        if (v4 >= 21) sub_1407B44C0(v12, v4, &v18);  // trim oldest entries (cap=21)
        else sub_1401DA720(v12, v4, 1, &v18);          // sort/merge
    }
    return 1;  // appended/updated
}
```

---

## quota_history_persist_file_111 — Full Decompile (NEW)

VA: `0x140200EA0`

```c
_QWORD *quota_history_persist_file_111(
    _QWORD *a1, __int64 a2, __int64 a3,
    const __m128i *a4, __int64 a5,
    uint64 a6, uint64 a7, __int64 a8)
{
    if (a6 == 0 && a7 == 0) { *a1=10; return a1; }  // empty → no-op

    // Build path from account_id
    v12 = sub_14107A3E0(a2, a3);      // account_id → file path
    if (v12) {
        sub_141082B80(v31, v12, v13); // mkdir -p
        if (mkdir_err) { *a1=2; return a1; }
    }

    // Serialize JSON (sub_140201390)
    v23 = sub_140201390(v31, v32);
    if (serialize_err) { *a1=3; return a1; }

    // Write via Win32: CreateFile (sub_141087E20) + WriteFile (sub_1410A8340) + CloseHandle
    if (CreateFile fails) { *a1=2; return a1; }
    v29 = sub_1410A8340(&p_hObject, &off_1412F4BA0, &unk_1412BE9D1, v32);
    // write error → "a formatting trait implementation returned an error..."
    CloseHandle(hObject);
    *a1 = 10;  // success
    return a1;
}
// SIDE-EFFECT: DISK_WRITE — new file per account_id under relay data dir
// Guard: only called after fetch_wham_usage_http_111 success
```

---

## Sub-function Summary (Complete)

| VA | Renamed Symbol | Role | Termination |
|---|---|---|---|
| `0x1409656E0` | (IPC dispatch) | registers "load_snapshot" in Tauri command table | TOO_LARGE |
| `0x140796310` | `load_snapshot_async_body_111` | async executor body | LEAF (calls write+refresh) |
| `0x1401B53F0` | `load_snapshot_write_if_changed_111` | CORE diff-gate+write | LEAF |
| `0x1401B4A90` | `load_snapshot_read_only_111` | no-diff-gate read+serialize+write | LEAF |
| `0x1401BF000` | `load_mcp_servers_read_existing_snapshot_111` | disk read → JSON parse | LEAF |
| `0x14008A7C0` | `bootstrap_state_payload_deserialize_json_111` | outer JSON parse | LEAF |
| `0x14024B8B0` | `core_snapshot_payload_deserialize_serde_111` | serde visitor 5 fields | LEAF |
| `0x140197420` | `serialize_skill_snapshot_json_111` | JSON serializer | LEAF |
| `0x1401B96B0` | `account_dto_serialize_json_111` | serialize 17 account fields | LEAF |
| `0x140364A10` | `account_list_deep_clone_111` | Vec<Account> deep clone 336B stride | LEAF |
| `0x1401EB500` | `account_slice_clone_7fields_111` | 7-field Arc-clone copy | LEAF |
| `0x1401BD570` | `refresh_usage_snapshot_core_111` | PARALLEL usage refresh (NEW) | LEAF |
| `0x1401FF820` | `quota_history_append_dedup_111` | in-mem dedup append (NEW) | LEAF |
| `0x140200EA0` | `quota_history_persist_file_111` | DISK_WRITE quota history (NEW) | LEAF |
| `0x1401B8D90` | `on_usage_fetch_success_write_store_111` | store usage fetch result (NEW) | LEAF |
| `0x140673CC0` | `fetch_wham_usage_http_111` | HTTP GET wham/usage | LEAF (HTTP) |
| `0x1406F2870` | `relay_config_check_parent_dirs_sys` | path gate | LEAF |
| `0x141093260` | `win32_file_read_bytes_111` | Win32 ReadFile | LEAF (DISK_READ) |
| `0x141093710` | `win32_file_write_bytes_111` | Win32 WriteFile | LEAF (DISK_WRITE) |
| `0x14107B7E0` | `system_time_precise_u32_111` | timestamp u32 | LEAF (platform) |
| `0x14107B790` | `elapsed_since_ts_111` | elapsed duration calc | LEAF |
| `0x1401ED840` | `sub_1401ED840` | deep snapshot struct builder | LEAF |
| `0x1401ABC20` | `state_manager_lock_and_assemble` | Mutex + state assembly | LEAF |
| `0x1401B62F0` | `sync_local_runtime_state_builder` | sync in-mem state | LEAF |
| `0x140213770` | `schedule_full_runtime_refresh_builder` | post-write refresh schedule | LEAF |
