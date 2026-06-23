# load_tool_analytics — Windows x64 Pseudocode (Delta Leaf)
# session: wf-aimami111-win-samedepth-patch-20260619
# machine: <本地机器>
# sha: d24e429a
# gate_tier: full_delta_leaf
# delta_class: NEW_IN_1.1.1 (analytics family; confirmed depth-escalated)
# baseline: 1.0.9 (command absent)
# role: producer

---

## Owner Function — sub_1400264A0 (load_tool_analytics handler)
VA: 0x1400264A0 | Size: 0x511 bytes | String ref: aLoadToolAnalyt @ 0x1412ac43b

### Delta vs 1.0.9
- **NEW_IN_1.1.1**: command did not exist in 1.0.9
- **L1 new**: `pending_auto_switch_state_lock_acquire_111` mutex guard (auto-switch mutex guard 新增)
- **L1 new**: `query_installed_skills_with_repo_111` skills repo 校验前置
- **L3**: `sub_1401C9280` — tool range filter: acquires spinlock, deep-copies history, applies tool-specific range bounds via `sub_140203160`
- 响应构建: `sub_140837390` (tool analytics response builder)
- 注意: tool 响应与 session 结构最相似 (都用 sub_1402168D0 response constructor)，但 range matcher 不同 (sub_140203160 vs sub_140204F00)

### 逆向分析 Pseudocode (verbatim, session wf-aimami111-win-samedepth-patch-20260619)

```c
// load_tool_analytics: tool usage analytics, accepts repo+range
// NEW IN 1.1.1: not present in 1.0.9 baseline
// L1: pending_auto_switch_state_lock_acquire_111 (mutex guard)
// L1: query_installed_skills_with_repo_111 (skills repo validation)
// L2: remove_skill_parse_id_param_111 (parse range)
// L3: sub_1401C9280 (tool range filter with spinlock)
// Response: sub_140837390 (tool analytics response builder)
__int64 __fastcall sub_1400264A0(__int64 a1)
{
  // Stack frame ~0x9E0 bytes (same layout as load_change_analytics / load_session_analytics)
  _BYTE v16[512]; // payload context copy
  _BYTE v18[384]; // args copy
  __m256i v39; // skills repo result
  __m256i v40; // range parse result / filter result

  v54 = -2; /*0x1400264b9*/
  sub_141212FB0(v16, a1, 520); /*0x1400264da*/
  sub_141212FB0(v18, a1 + 520, 400); /*0x1400264f6*/
  v49 = *(_QWORD *)(a1 + 936);
  v48 = *(_OWORD *)(a1 + 920);

  // Setup "repo" param descriptor
  v22 = (__int64)aLoadToolAnalyt; /*0x140026529*/ // "load_tool_analytics"
  v23.m256i_i64[0] = 19; // strlen("load_tool_analytics")
  v23.m256i_i64[1] = (__int64)aRepo; // "repo"
  v23.m256i_i64[2] = 4;
  v23.m256i_i64[3] = (__int64)v16;
  v24 = &v48;

  // L1: Acquire pending_auto_switch mutex guard
  v4 = sub_14006EDC0((char *)(v17 + 16), v2, v3); /*0x140026581*/
  if ( !v4 )
  {
    // L1: Validate skills repo
    sub_141214620((__int64)&v39, (__int64)&v22, (__int64)&v23.m256i_i64[1]); /*0x1400265a5*/
    if ( v39.m256i_i8[0] != 6 ) // Error: repo validation failed
    {
      sub_14080C3C0((__int64)v15, v19, (__int64)&v22, &v35, v20, v21);
      goto LABEL_18;
    }
    v4 = v39.m256i_i64[1]; // repo handle
  }

  // L2: Parse "range" param
  v22 = (__int64)aLoadToolAnalyt;
  v23.m256i_i64[1] = (__int64)aRange; // "range"
  v23.m256i_i64[2] = 5;
  sub_1402FED40((__int64)&v40, &v22); /*0x140026618*/

  if ( v40.m256i_i8[0] == 6 ) // range param present
  {
    v38 = v40.m256i_i64[3];
    v37 = *(_OWORD *)&v40.m256i_u64[1];

    // L3: Tool range filter (spinlock + deep-copy + tool-specific bounds)
    sub_1401C9280(&v26, v4, &v37); /*0x14002665f*/

    sub_141212FB0(&v22, a1 + 520, 400);
    if ( !__OFSUB__(0, v26.m256i_i64[0]) ) // Success
    {
      // Copy result fields (same layout as session/change — 128+ byte result)
      v46 = v32; v45 = v31; v44 = v30; v43 = v29;
      v42 = v28; v41 = v27; v40 = v26;
      v52 = 0;
      sub_140837390(&v22, &v40); /*0x1400268f8*/ // tool analytics response builder
      goto LABEL_18;
    }
    // Error path (identical to session/change pattern)
    v6 = v26.m256i_i64[1];
    v7 = *(_OWORD *)&v26.m256i_u64[2];
    if ( v26.m256i_i64[3] < 0 ) { v8 = 0; goto LABEL_8; }
    if ( v26.m256i_i64[3] )
    {
      nullsub_1(v5); v8 = 1;
      v9 = sub_140001360(*((_QWORD *)&v7 + 1), 1);
      if ( !v9 ) { LABEL_8: v50 = v7; v51 = v6; sub_14124BCCB(v8, *((_QWORD *)&v7 + 1)); }
      v10 = v9;
      sub_141212FB0(v9, v7, *((_QWORD *)&v7 + 1));
      if ( !v6 ) goto LABEL_16;
    }
    else { v10 = 1; if ( !v26.m256i_i64[1] ) goto LABEL_16; }
    sub_140001370(v7, v6, 1);
LABEL_16:
    v40.m256i_i8[8] = 3;
    v40.m256i_i64[2] = *((_QWORD *)&v7 + 1);
    v40.m256i_i64[3] = v10;
    *(_QWORD *)&v41 = *((_QWORD *)&v7 + 1);
    v40.m256i_i64[0] = 0x8000000000000000uLL; // Err tag
    v52 = 0;
    sub_140837390(&v22, &v40); // error response via tool response builder
    goto LABEL_18;
  }
  // range param missing: error response
  v23 = v40;
  sub_14080C3C0((__int64)v14, v19, (__int64)&v22, &v33, v20, v21);
LABEL_18:
  // Cleanup arc listeners (96-byte stride)
  if ( !__OFSUB__(0, (_QWORD)v48) )
  {
    v11 = *((_QWORD *)&v48 + 1); v50 = v49; v51 = 0;
    while ( v50 != v51 ) { ++v51; v12 = v11 + 96; sub_14033AB50(); v11 = v12; }
    if ( (_QWORD)v48 ) sub_140001370(*((_QWORD *)&v48 + 1), 96 * v48, 8);
  }
  return sub_140042650(v16);
}
```

---

## L3 Callee — sub_1401C9280 (tool range filter)
VA: 0x1401C9280 | Distinct from session/change/token filters

```c
// Tool range filter: same spinlock pattern, different range matcher (sub_140203160)
// Same response constructor as session (sub_1402168D0) but distinct range bounds
__int64 __fastcall sub_1401C9280(__int64 a1, _BYTE *a2, _QWORD *a3)
{
  // Spinlock acquire
  if ( _InterlockedCompareExchange8(a2, 1, 0) ) sub_14124A510(a2);

  // Deep copy history
  quota_history_point_deep_copy_111(v28, a2 + 8); // 0x1401EB870

  // Release spinlock
  *v22 = 0; if ( v23 == 2 ) WakeByAddressSingle(v22);

  // Tool-specific range bounds filter
  sub_140203160(&v35, v28, v53[1], v53[2]); // tool range matcher (distinct from all others)

  if ( (_DWORD)v35 == 10 ) // Ok discriminant
  {
    // Build tool analytics OK response
    v31 = *((_QWORD *)&v35 + 1);
    v32 = v36; v33 = v37;
    sub_1402168D0(&v43, &v31); // response constructor (same as session, distinct from change @ sub_1402171C0)
    // Copy 112 bytes result fields
    *(_QWORD *)(v4 + 112) = v50;
    // ... (7 oword copies)
    *(_OWORD *)v4 = v24;
  }
  else
  {
    sub_140243FC0(&v43, v34); // error serializer
    usage_fetch_error_drop_111(&v35);
    *(_QWORD *)v4 = 0x8000000000000000uLL;
  }
  diagnostic_paths_drop_sys(v28);
  if ( *v53 ) sub_140001370(v53[1], *v53, 1);
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
| 0x1401C9280 | sub_1401C9280 (tool_range_filter) | L3 tool range filter with spinlock |
| 0x1401EB870 | quota_history_point_deep_copy_111 | L4 deep-copy history |
| 0x140203160 | sub_140203160 | L4 tool range bounds matcher (distinct) |
| 0x1402168D0 | sub_1402168D0 | L4 tool response constructor (same as session) |
| 0x140837390 | sub_140837390 | L2 tool analytics response builder |
| 0x14080C3C0 | has_notch_invoke_resolver_respond | L2 error response path |
| 0x1401D4C70 | usage_fetch_error_drop_111 | error type destructor |
| 0x140046870 | diagnostic_paths_drop_sys | drop diagnostic path data |
| 0x14033AB50 | has_notch_arc_listener_drop_loop | cleanup: drop arc listeners |

---

## ACCEPTANCE (dim6, session wf-aimami111-dim6-20260619)

### Happy Path
- Input: `{ repo: "<valid-installed-repo-id>", range: "<range-string>" }`
- Flow: L1 mutex → repo validation → range parse → sub_1401C9280 tool filter (spinlock → quota_history_point_deep_copy_111 → spinlock release → sub_140203160 tool range matcher → sub_1402168D0 ctor shared with session) → sub_140837390 tool builder
- Side-effect asserts: no file write; spinlock acquired and released; inner ctor sub_1402168D0 shared with session (may reuse inner DTO) but top-level builder sub_140837390 is distinct

### Error Paths
| Trigger | Expected |
|---|---|
| mutex acquire fails | has_notch_invoke_resolver_respond, no data access |
| repo absent/invalid (discriminant != 6) | has_notch_invoke_resolver_respond @ 0x14080C3C0 |
| range absent/unparseable (discriminant != 6) | has_notch_invoke_resolver_respond |
| tool filter Err (non-10 discriminant from sub_140203160) | Err tag 0x8000000000000000; error string alloc+copy; sub_140837390 error path |
| OOM | sub_14124BCCB panic/abort |

### Test Mapping (producer-acceptance-draft)
- happy_path + repo-invalid + range-missing → e2e
- tool vs session IPC response distinguishable (different builder VAs) → manual
- no file write → explicit_non_automatable_accept
