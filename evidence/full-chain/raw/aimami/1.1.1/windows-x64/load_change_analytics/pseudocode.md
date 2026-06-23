# load_change_analytics — Windows x64 Pseudocode (Delta Leaf)
# session: <审计会话>
# machine: <本地机器>
# sha: d24e429a
# gate_tier: full_delta_leaf
# delta_class: NEW_IN_1.1.1 (analytics family; confirmed depth-escalated)
# baseline: 1.0.9 (command absent)
# role: producer

---

## Owner Function — sub_140016C70 (load_change_analytics handler)
VA: 0x140016C70 | Size: 0x511 bytes | String ref: aLoadChangeAnal @ 0x1412ac44e

### Delta vs 1.0.9
- **NEW_IN_1.1.1**: command did not exist in 1.0.9
- **L1 new**: `pending_auto_switch_state_lock_acquire_111` mutex guard — ALL analytics handlers in 1.1.1 acquire this before repo validation (新增 auto-switch mutex guard)
- **L1 new**: `query_installed_skills_with_repo_111` repo 校验前置 (skills repo validation before data access)
- **L3**: 读文件系统变更历史（`remove_skill_parse_id_param_111` 解析 range 参数 → `sub_1401CAD70` 执行变更数据范围过滤）
- 响应序列化: `sub_140834FC0` (change analytics response builder)

### 逆向分析 Pseudocode (verbatim, session <审计会话>)

```c
// load_change_analytics: analytics sub-path, accepts repo+range params
// NEW IN 1.1.1: not present in 1.0.9 baseline
// L1: pending_auto_switch_state_lock_acquire_111 (mutex guard)
// L1: query_installed_skills_with_repo_111 (skills repo validation)
// L2: remove_skill_parse_id_param_111 (parse range param)
// L3: sub_1401CAD70 (change range filter — acquires spinlock, deep-copies quota history, applies change bounds)
// Response: sub_140834FC0 (change analytics response builder)
__int64 __fastcall sub_140016C70(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r14
  __int64 v5; // rcx
  __int64 v6; // r14
  __int128 v7; // kr00_16
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rdi
  __int64 v11; // rcx
  __int64 v12; // rsi
  _BYTE v14[360]; // [rsp+30h] [rbp-50h] BYREF
  _BYTE v15[360]; // [rsp+198h] [rbp+118h] BYREF
  _BYTE v16[512]; // [rsp+300h] [rbp+280h] BYREF
  __int64 v17; // [rsp+500h] [rbp+480h]
  _BYTE v18[384]; // [rsp+508h] [rbp+488h] BYREF
  __int64 v19; // [rsp+688h] [rbp+608h]
  int v20; // [rsp+690h] [rbp+610h]
  int v21; // [rsp+694h] [rbp+614h]
  __int64 v22; // [rsp+698h] [rbp+618h] BYREF
  __m256i v23; // [rsp+6A0h] [rbp+620h] BYREF
  __int128 *v24; // [rsp+6C0h] [rbp+640h]
  __int64 v25; // [rsp+6C8h] [rbp+648h]
  __m256i v26; // [rsp+828h] [rbp+7A8h] BYREF
  // ... (v27..v54 omitted, full stack frame ~0x9E0 bytes)

  v54 = -2; /*0x140016c89*/
  sub_141212FB0(v16, a1, 520); /*0x140016caa*/       // payload_ctx copy
  sub_141212FB0(v18, a1 + 520, 400); /*0x140016cc6*/ // args copy
  v49 = *(_QWORD *)(a1 + 936); /*0x140016cd2*/
  v48 = *(_OWORD *)(a1 + 920); /*0x140016ce0*/
  v25 = 0; /*0x140016ce7*/
  v22 = (__int64)aLoadChangeAnal; /*0x140016cf9*/  // "load_change_analytics"
  v23.m256i_i64[0] = 21; /*0x140016d00*/           // strlen("load_change_analytics")
  v23.m256i_i64[1] = (__int64)aRepo; /*0x140016d12*/ // "repo" param key
  v23.m256i_i64[2] = 4; /*0x140016d19*/             // strlen("repo")
  v23.m256i_i64[3] = (__int64)v16; /*0x140016d24*/  // payload ptr
  v24 = &v48; /*0x140016d32*/
  v53 = 1; /*0x140016d44*/
  // L1: Acquire pending_auto_switch mutex guard
  v4 = sub_14006EDC0((char *)(v17 + 16), v2, v3); /*0x140016d51*/ // pending_auto_switch_state_lock_acquire_111
  if ( !v4 ) /*0x140016d57*/
  {
    v53 = 1; /*0x140016d60*/
    // L1: Query installed skills with repo validation
    sub_141214620((__int64)&v39, (__int64)&v22, (__int64)&v23.m256i_i64[1]); /*0x140016d75*/
    // query_installed_skills_with_repo_111
    if ( v39.m256i_i8[0] != 6 ) /*0x140016d82*/ // 6 = Ok variant tag
    {
      // Error path: repo not found or skills validation failed
      v23 = v39; /*0x140016fae*/
      sub_141212FB0(v15, a1 + 520, 360); /*0x140016fcf*/
      // ... error response via has_notch_invoke_resolver_respond
      sub_14080C3C0((__int64)v15, v19, (__int64)&v22, &v35, v20, v21); /*0x14001702e*/
      goto LABEL_18;
    }
    v4 = v39.m256i_i64[1]; /*0x140016d88*/ // repo handle
  }
  // L2: Parse "range" param
  v22 = (__int64)aLoadChangeAnal; /*0x140016d9a*/
  v23.m256i_i64[1] = (__int64)aRange; /*0x140016db3*/ // "range" param key
  v23.m256i_i64[2] = 5; /*0x140016dba*/               // strlen("range")
  sub_1402FED40((__int64)&v40, &v22); /*0x140016de8*/ // remove_skill_parse_id_param_111 — parse range
  if ( v40.m256i_i8[0] == 6 ) /*0x140016df5*/ // range param present
  {
    v38 = v40.m256i_i64[3];
    v37 = *(_OWORD *)&v40.m256i_u64[1];
    v53 = 1;
    // L3: Change range filter (acquires spinlock, deep-copies data, applies range bounds)
    sub_1401CAD70(&v26, v4, &v37); /*0x140016e2f*/
    sub_141212FB0(&v22, a1 + 520, 400); /*0x140016e45*/
    if ( !__OFSUB__(0, v26.m256i_i64[0]) ) /*0x140016e53*/
    {
      // Success path: build and send response
      // ... copy result v27..v32 into response
      v52 = 0; /*0x1400170b3*/
      sub_140834FC0(&v22, &v40); /*0x1400170c8*/ // change analytics response builder
      goto LABEL_18;
    }
    // Error path: allocate error string
    v6 = v26.m256i_i64[1];
    v7 = *(_OWORD *)&v26.m256i_u64[2];
    if ( v26.m256i_i64[3] < 0 ) { v8 = 0; goto LABEL_8; }
    if ( v26.m256i_i64[3] )
    {
      nullsub_1(v5);
      v8 = 1;
      v9 = sub_140001360(*((_QWORD *)&v7 + 1), 1); // alloc
      if ( !v9 )
      {
LABEL_8:
        v50 = v7; v51 = v6;
        sub_14124BCCB(v8, *((_QWORD *)&v7 + 1)); // OOM panic
      }
      v10 = v9;
      sub_141212FB0(v9, v7, *((_QWORD *)&v7 + 1));
      if ( !v6 ) goto LABEL_16;
    }
    else { v10 = 1; if ( !v26.m256i_i64[1] ) goto LABEL_16; }
    sub_140001370(v7, v6, 1); // dealloc
LABEL_16:
    v40.m256i_i8[8] = 3;
    v40.m256i_i64[2] = *((_QWORD *)&v7 + 1);
    v40.m256i_i64[3] = v10;
    *(_QWORD *)&v41 = *((_QWORD *)&v7 + 1);
    v40.m256i_i64[0] = 0x8000000000000000uLL; // Err tag
    v52 = 0;
    sub_140834FC0(&v22, &v40); // error response via change response builder
    goto LABEL_18;
  }
  // range param missing/invalid path
  v23 = v40;
  sub_141212FB0(v14, a1 + 520, 360);
  // ... error response
  sub_14080C3C0((__int64)v14, v19, (__int64)&v22, &v33, v20, v21);
LABEL_18:
  // Cleanup: drop arc listeners (96-byte stride)
  if ( !__OFSUB__(0, (_QWORD)v48) )
  {
    v11 = *((_QWORD *)&v48 + 1);
    v50 = v49; v51 = 0;
    v47 = *((_QWORD *)&v48 + 1);
    while ( v50 != v51 )
    {
      ++v51;
      v12 = v11 + 96;
      sub_14033AB50(); // has_notch_arc_listener_drop_loop
      v11 = v12;
    }
    if ( (_QWORD)v48 )
      sub_140001370(*((_QWORD *)&v48 + 1), 96 * v48, 8); // dealloc listener array
  }
  return sub_140042650(v16); // drop payload context
}
```

---

## L2 Callee — sub_1401CAD70 (change range filter)
VA: 0x1401CAD70 | Called from owner at 0x140016e2f

```c
// change_range_filter: acquires spinlock, deep-copies quota history, applies range bounds
// sub_1401CAD70: receives (result_ptr, repo_handle, range_param_ptr)
// Deep-copies history via quota_history_point_deep_copy_111(0x1401EB870)
// Applies range filter via sub_140204660 (change-specific range matcher)
// On success (discriminant==10): builds structured response via sub_1402171C0
// On error: serializes via sub_140243FC0 → usage_fetch_error_drop_111
__int64 __fastcall sub_1401CAD70(__int64 a1, _BYTE *a2, _QWORD *a3)
{
  // Spinlock acquire: _InterlockedCompareExchange8(a2, 1, 0)
  if ( _InterlockedCompareExchange8(a2, 1, 0) )
    sub_14124A510(a2); // spinlock contention wait

  // Deep copy quota history from locked state
  quota_history_point_deep_copy_111(v28, a2 + 8); // 0x1401EB870

  // Release spinlock: *a2 = 0; WakeByAddressSingle if waiters
  v22 = (char *)Address;
  *v22 = 0;
  if ( v23 == 2 ) WakeByAddressSingle(v22);

  // Apply change-specific range filter
  sub_140204660(&v35, v28, v53[1], v53[2]); // change range matcher

  if ( (_DWORD)v35 == 10 ) // Ok discriminant
  {
    // Build structured OK response
    v31 = *((_QWORD *)&v35 + 1);
    v32 = v36; v33 = v37;
    sub_1402171C0(&v43, &v31); // change analytics response constructor
    // Copy result fields (112 bytes) to output
    *(_QWORD *)(v4 + 112) = v50;
    *(_OWORD *)(v4 + 96) = v49;
    // ... (remaining 7 oword copies)
    *(_OWORD *)v4 = v24;
  }
  else
  {
    // Error: serialize and drop
    sub_140243FC0(&v43, v34); // error serializer
    usage_fetch_error_drop_111(&v35); // 0x1401D4C70
    *(_QWORD *)v4 = 0x8000000000000000uLL; // Err tag
  }
  diagnostic_paths_drop_sys(v28); // 0x140046870
  if ( *v53 ) sub_140001370(v53[1], *v53, 1); // drop range param
  return v4;
}
```

---

## Key Named Callees
| VA | Name | Role |
|---|---|---|
| 0x14006EDC0 | pending_auto_switch_state_lock_acquire_111 | L1 mutex guard (NEW in 1.1.1) |
| 0x141214620 | query_installed_skills_with_repo_111 | L1 skills repo validation (NEW in 1.1.1) |
| 0x1402FED40 | remove_skill_parse_id_param_111 | L2 parse "range" param |
| 0x1401CAD70 | sub_1401CAD70 (change_range_filter) | L3 change data access with spinlock |
| 0x1401EB870 | quota_history_point_deep_copy_111 | L4 deep-copy of history data |
| 0x140204660 | sub_140204660 | L4 change range matcher |
| 0x1402171C0 | sub_1402171C0 | L4 change response constructor |
| 0x140834FC0 | sub_140834FC0 | L2 response builder/dispatch |
| 0x14080C3C0 | has_notch_invoke_resolver_respond | L2 error response path |
| 0x14033AB50 | has_notch_arc_listener_drop_loop | cleanup: drop arc listeners |
| 0x1401D4C70 | usage_fetch_error_drop_111 | error type destructor |
| 0x140046870 | diagnostic_paths_drop_sys | drop diagnostic path data |

---

## ACCEPTANCE (dim6, session <审计会话>)

### Happy Path
- Input: `{ repo: "<valid-installed-repo-id>", range: "<range-string>" }`
- Flow: L1 mutex acquire → repo validation (query_installed_skills_with_repo_111) → range parse (remove_skill_parse_id_param_111) → change_range_filter (sub_1401CAD70: spinlock acquire → quota_history_point_deep_copy_111 → spinlock release → sub_140204660 range matcher → sub_1402171C0 response ctor) → sub_140834FC0 response builder → IPC response
- Side-effect asserts: no file write; spinlock acquired and released before response; quota history deep-copied (original unmodified)

### Error Paths
| Trigger | Expected |
|---|---|
| mutex acquire fails (pending_auto_switch_state_lock_acquire_111 non-zero) | has_notch_invoke_resolver_respond error, no data access |
| repo param absent/invalid (discriminant != 6) | has_notch_invoke_resolver_respond error @ 0x14080C3C0 |
| range param absent/unparseable (discriminant != 6) | has_notch_invoke_resolver_respond error |
| change_range_filter returns Err (sub_140204660 non-10 discriminant) | Err tag 0x8000000000000000; error string alloc+copy; sub_140834FC0 error path |
| OOM during error alloc | sub_14124BCCB panic/abort |

### Test Mapping (producer-acceptance-draft)
- happy_path + repo-invalid + range-missing → e2e (live binary required)
- no file write on success → explicit_non_automatable_accept (fs snapshot diff)
- spinlock non-deadlock → manual (stress test)
