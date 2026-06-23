# load_usage_analytics — Windows x64 Pseudocode (Delta Leaf)
# session: wf-aimami111-win-samedepth-patch-20260619
# machine: <本地机器>
# sha: d24e429a
# gate_tier: full_delta_leaf
# delta_class: NEW_IN_1.1.1 (analytics family + file write side-effects; confirmed depth-escalated)
# baseline: 1.0.9 (command absent)
# role: producer

---

## Owner Function — sub_14001B850 (load_usage_analytics handler)
VA: 0x14001B850 | Size: 0x38f bytes | String ref: aLoadUsageAnaly @ 0x1412ac3eb

### Delta vs 1.0.9
- **NEW_IN_1.1.1**: command did not exist in 1.0.9
- **L1 new**: `pending_auto_switch_state_lock_acquire_111` mutex guard (auto-switch mutex guard 新增)
- **L1 new**: `query_installed_skills_with_repo_111` skills repo 校验前置
- **重要区别**: load_usage_analytics 是 analytics 家族中唯一有**写文件副作用**的命令：
  - relay 目录创建 (`relay_config_check_parent_dirs_sys` @ 0x1406F2870)
  - MCP 快照读取 (`load_mcp_servers_read_existing_snapshot_111` @ 0x1401BF000)
  - skill JSON 序列化 (`serialize_skill_snapshot_json_111` @ 0x140197420)
  - **CreateFileW 写入**: `win32_file_write_bytes_111` @ 0x141093710 (通过 `sub_1401C9EF0` 调用链)
- **注意**: 此命令不接受 range 参数（与其他 analytics 命令不同），直接调用 `sub_1401C9EF0`
- 响应: `sub_140836690` (usage analytics response builder)

### 逆向分析 Pseudocode (verbatim, session wf-aimami111-win-samedepth-patch-20260619)

```c
// load_usage_analytics: combined usage report with FILE WRITE SIDE EFFECTS
// NEW IN 1.1.1: not present in 1.0.9 baseline
// IMPORTANT: Only analytics command with file write side-effects:
//   - relay_config_check_parent_dirs_sys (dir creation)
//   - load_mcp_servers_read_existing_snapshot_111 (MCP snapshot read)
//   - serialize_skill_snapshot_json_111 (skill JSON serialization)
//   - win32_file_write_bytes_111 (CreateFileW write)
// L1: pending_auto_switch_state_lock_acquire_111 (mutex guard)
// L1: query_installed_skills_with_repo_111 (skills repo validation)
// NO range param — directly calls sub_1401C9EF0
// Response: sub_140836690 (usage analytics response builder)
__int64 __fastcall sub_14001B850(__int64 a1)
{
  // Stack frame ~0x880 bytes (smaller than other analytics — no range param handling)
  _BYTE v16[512]; // payload context
  char v18[384];  // args copy
  __int64 v22;    // [rsp+530h] result[0]
  __int64 v23;    // [rsp+538h] result[1]
  __int64 v24;    // [rsp+540h] result[2]
  __int64 v25;    // [rsp+548h] result[3]
  __int128 v27;   // [rsp+5E8h] repo param result
  __int128 v28;   // [rsp+5F8h]

  v43 = -2; /*0x14001b867*/
  sub_141212FB0(v16, a1, 520); /*0x14001b888*/
  sub_141212FB0(v18, a1 + 520, 400); /*0x14001b8a4*/
  v38 = *(_QWORD *)(a1 + 936);
  v37 = *(_OWORD *)(a1 + 920);

  // Setup "repo" param descriptor
  v26 = (__int64)aLoadUsageAnaly; /*0x14001b8d7*/ // "load_usage_analytics"
  *(_QWORD *)&v27 = 20; // strlen("load_usage_analytics")
  *((_QWORD *)&v27 + 1) = aRepo; // "repo"
  *(_QWORD *)&v28 = 4;  // strlen("repo")
  *((_QWORD *)&v28 + 1) = v16;
  v29 = &v37;
  v42 = 1;

  // L1: Acquire pending_auto_switch mutex guard
  v4 = sub_14006EDC0((char *)(v17 + 16), v2, v3); /*0x14001b929*/
  if ( !v4 )
  {
    v42 = 1;
    // L1: Validate skills repo
    sub_141214620((__int64)&v31, (__int64)&v26, (__int64)&v27 + 8); /*0x14001b950*/
    if ( (_BYTE)v31 != 6 ) // Error: repo validation failed
    {
      // Error response
      sub_14080C3C0((__int64)v15, v19, (__int64)&v26, &v34, v20, v21);
      goto LABEL_16;
    }
    v4 = *((_QWORD *)&v31 + 1); // repo handle
  }

  v42 = 1;
  // Direct call to usage data collector (no range param parsing unlike other analytics)
  sub_1401C9EF0(&v22, v4); /*0x14001b97b*/ // usage analytics data collector WITH WRITE SIDE EFFECTS

  sub_141212FB0(&v26, a1 + 520, 400);
  if ( __OFSUB__(0, v22) ) // Error: data collection failed
  {
    // Error path: alloc/copy error string
    v6 = v23; v7 = v24; v8 = v25;
    if ( v25 < 0 ) { v9 = 0; goto LABEL_7; }
    if ( v25 )
    {
      nullsub_1(v5); v9 = 1;
      v10 = sub_140001360(v8, 1);
      if ( !v10 ) { LABEL_7: v39 = v7; v40 = v6; sub_14124BCCB(v9, v8); }
      v11 = v10;
      sub_141212FB0(v10, v7, v8);
      if ( !v6 ) goto LABEL_13;
    }
    else { v11 = 1; if ( !v23 ) goto LABEL_13; }
    sub_140001370(v7, v6, 1);
LABEL_13:
    BYTE8(v31) = 3;
    *(_QWORD *)&v32 = v8;
    *((_QWORD *)&v32 + 1) = v11;
    v33 = v8;
    *(_QWORD *)&v31 = 0x8000000000000000uLL; // Err tag
    goto LABEL_14;
  }
  // Success: copy 176 bytes of usage result into response region
  sub_141212FB0(&v31, &v22, 176); /*0x14001b9ed*/
LABEL_14:
  v41 = 0;
  sub_140836690(&v26, &v31); /*0x14001ba7f*/ // usage analytics response builder
LABEL_16:
  // Cleanup arc listeners (96-byte stride)
  if ( !__OFSUB__(0, (_QWORD)v37) )
  {
    v12 = *((_QWORD *)&v37 + 1); v39 = v38; v40 = 0;
    while ( v39 != v40 ) { ++v40; v13 = v12 + 96; sub_14033AB50(); v12 = v13; }
    if ( (_QWORD)v37 ) sub_140001370(*((_QWORD *)&v37 + 1), 96 * v37, 8);
  }
  return sub_140042650(v16);
}
```

---

## L2 Callee — sub_1401C9EF0 (usage data collector WITH WRITE SIDE EFFECTS)
VA: 0x1401C9EF0 | Key callee with file write side effects

```c
// Usage analytics data collector: acquires quota history lock, creates relay dirs,
// reads MCP snapshot, serializes skills JSON, WRITES file via win32_file_write_bytes_111
// This is the only analytics L2 callee with CreateFileW write side effect
__int64 __fastcall sub_1401C9EF0(__int64 a1, _BYTE *a2, __int64 a3)
{
  // Spinlock acquire
  if ( _InterlockedCompareExchange8(a2, 1, 0) ) sub_14124A510(a2);

  // Deep-copy quota history
  quota_history_point_deep_copy_111(v51, a2 + 8); // 0x1401EB870

  // Release spinlock
  v22 = *(_BYTE *)Address; *(_BYTE *)Address = 0;
  if ( v22 == 2 ) WakeByAddressSingle(v21);

  // Check existing usage error cache (sub_1401C21E0)
  sub_1401C21E0(v67, v51);
  if ( *(_DWORD *)v67 == 1 ) // Cache hit: return cached error
  {
    // Serialize cached error via sub_140243FC0
    // Drop: usage_fetch_error_drop_111(&v67[8])
    *(_QWORD *)v3 = 0x8000000000000000uLL; // Err tag
    goto LABEL_63;
  }

  // No cache hit: proceed with fresh data collection

  // SIDE EFFECT 1: Relay dir creation / parent dir check
  v30 = relay_config_check_parent_dirs_sys(v17); // 0x1406F2870
  if ( v30 )
  {
    *(_QWORD *)&v82 = 2;
    *((_QWORD *)&v82 + 1) = v30; // propagate error
  }
  else
  {
    // SIDE EFFECT 2: Read MCP servers snapshot
    load_mcp_servers_read_existing_snapshot_111(&v52, v31, v32); // 0x1401BF000

    // Time elapsed calculation
    LODWORD(v82) = system_time_precise_u32_111(); // 0x14107B7E0
    elapsed_since_ts_111(v67, &v82, 0xD53E8000, 27111902); // 0x14107B790
    v34 = 0;
    if ( !v67[0] ) v34 = *(_QWORD *)&v67[8];
    v52.m256i_i64[0] = 1; // usage flag
    v52.m256i_i64[1] = v34; // elapsed seconds

    // Build skill snapshot structure (sub_1410A2210, sub_1403644C0)
    sub_1410A2210(v67, &v77.m256i_u64[3]);
    sub_1403644C0(v67, &v77);

    // SIDE EFFECT 3: Serialize skills to JSON
    serialize_skill_snapshot_json_111(&v82, v67); // 0x140197420
    if ( __OFSUB__(-(__int64)v82, 1) ) // serialization error
    {
      *(_QWORD *)&v82 = 3; // error tag
      sub_1401D6610(v67); // drop serialization context
    }
    else
    {
      // SIDE EFFECT 4: Write file via CreateFileW
      v45 = win32_file_write_bytes_111(v31, v32, v93, v43); // 0x141093710
      // win32_file_write_bytes_111: CreateFileW + WriteFile + CloseHandle
      if ( v91 ) sub_140001370(v93, v91, 1); // free JSON buffer
      if ( !v45 ) goto LABEL_58; // success
      *(_QWORD *)&v82 = 2;
      *((_QWORD *)&v82 + 1) = v45; // write error
    }
  }
  usage_fetch_error_drop_111(&v82); // drop any accumulated error
LABEL_58:
  // Unlock after write
  v49 = *(_BYTE *)Address; *(_BYTE *)Address = 0;
  if ( v49 == 2 ) WakeByAddressSingle(v48);
  // Build response (sub_140213F70) and copy 176 bytes to result
  sub_140213F70(v67, &v52);
  sub_141212FB0(v3, v67, 0xB0u); // 176 bytes
LABEL_63:
  diagnostic_paths_drop_sys(v51);
  return v3;
}
```

---

## Key Named Callees
| VA | Name | Role |
|---|---|---|
| 0x14006EDC0 | pending_auto_switch_state_lock_acquire_111 | L1 mutex guard (NEW in 1.1.1) |
| 0x141214620 | query_installed_skills_with_repo_111 | L1 skills repo validation (NEW in 1.1.1) |
| 0x1401C9EF0 | sub_1401C9EF0 (usage_data_collector) | L2 data collector WITH file write |
| 0x1401EB870 | quota_history_point_deep_copy_111 | L3 deep-copy history data |
| 0x1401C21E0 | sub_1401C21E0 | L3 check error cache |
| 0x1406F2870 | relay_config_check_parent_dirs_sys | L3 **SIDE EFFECT**: relay dir create |
| 0x1401BF000 | load_mcp_servers_read_existing_snapshot_111 | L3 **SIDE EFFECT**: read MCP snapshot |
| 0x14107B7E0 | system_time_precise_u32_111 | L3 get current time |
| 0x14107B790 | elapsed_since_ts_111 | L3 compute elapsed time |
| 0x140197420 | serialize_skill_snapshot_json_111 | L3 **SIDE EFFECT**: skill JSON serialization |
| 0x141093710 | win32_file_write_bytes_111 | L3 **SIDE EFFECT**: CreateFileW + WriteFile |
| 0x140213F70 | sub_140213F70 | L3 build usage response struct |
| 0x1401D6610 | sub_1401D6610 | L3 drop serialization context |
| 0x1401D4C70 | usage_fetch_error_drop_111 | error type destructor |
| 0x140836690 | sub_140836690 | L2 usage analytics response builder |
| 0x14080C3C0 | has_notch_invoke_resolver_respond | L2 error response path |
| 0x140046870 | diagnostic_paths_drop_sys | drop diagnostic path data |
| 0x14033AB50 | has_notch_arc_listener_drop_loop | cleanup: drop arc listeners |

---

## ACCEPTANCE (dim6, session wf-aimami111-dim6-20260619)

### Happy Path
- Input: `{ repo: "<valid-installed-repo-id>" }` — NO range param
- Flow: L1 mutex → repo validation → sub_1401C9EF0 usage_data_collector: [error cache check (sub_1401C21E0) → relay dir create (relay_config_check_parent_dirs_sys) → MCP snapshot read (load_mcp_servers_read_existing_snapshot_111) → time elapsed calc → skill JSON serialize (serialize_skill_snapshot_json_111) → file WRITE (win32_file_write_bytes_111: CreateFileW+WriteFile+CloseHandle) → response build (sub_140213F70)] → 176-byte copy → sub_140836690 usage builder
- Side-effect asserts:
  - relay parent directory created if missing (relay_config_check_parent_dirs_sys)
  - MCP snapshot file read from disk
  - skill JSON serialized and WRITTEN to file via CreateFileW (win32_file_write_bytes_111 @ 0x141093710)
  - response struct 176 bytes (0xB0 via sub_141212FB0)
  - if error cache hit: none of the above side effects occur; cached error returned

### Error Paths
| Trigger | Expected |
|---|---|
| mutex acquire fails | has_notch_invoke_resolver_respond, no data access |
| repo absent/invalid (discriminant != 6) | has_notch_invoke_resolver_respond @ 0x14080C3C0 |
| error cache hit (sub_1401C21E0 discriminant == 1) | cached error serialized via sub_140243FC0; usage_fetch_error_drop_111; Err 0x8000000000000000; no file write |
| relay dir create fails (relay_config_check_parent_dirs_sys non-null) | v82 discriminant 2; error propagated; usage_fetch_error_drop_111; no MCP read or file write |
| skill JSON serialize fails | v82 tag 3; sub_1401D6610 drop; no file write |
| win32_file_write_bytes_111 non-null return (file write fails) | v82 discriminant 2; JSON buffer freed; error accumulated |
| OOM during error alloc in owner | sub_14124BCCB panic/abort |

### Test Mapping (producer-acceptance-draft)
- happy_path: valid repo, MCP snapshot present, relay dir writable → skill JSON written; 176-byte response → e2e (CRITICAL: file write verification)
- error: invalid repo → no file write → e2e
- error: relay dir creation fails (unwritable) → e2e
- error: second call after error → cache hit, no re-collection → manual
- file write observable: skill JSON file mtime updated after success → e2e
- no range param accepted (distinct from other analytics) → e2e
- error: file write fails → explicit_non_automatable_accept
