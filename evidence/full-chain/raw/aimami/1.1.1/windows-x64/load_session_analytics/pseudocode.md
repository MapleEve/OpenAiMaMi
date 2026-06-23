# load_session_analytics — Windows x64 Pseudocode (Delta Leaf)
# session: <审计会话>
# machine: <本地机器>
# sha: d24e429a
# gate_tier: full_delta_leaf
# delta_class: NEW_IN_1.1.1 (analytics family; confirmed depth-escalated)
# baseline: 1.0.9 (command absent)
# role: producer

---

## Owner Function — load_session_analytics_impl_111
VA: 0x140026BD0 | Size: 0x511 bytes | IDB name: load_session_analytics_impl_111
String ref: aLoadSessionAna @ 0x1412ac411

### Delta vs 1.0.9
- **NEW_IN_1.1.1**: command did not exist in 1.0.9
- **L1 new**: `pending_auto_switch_state_lock_acquire_111` mutex guard (auto-switch mutex guard 新增)
- **L1 new**: `query_installed_skills_with_repo_111` skills repo 校验前置
- **L3**: `session_range_filter_111` @ 0x1401CB3A0 — acquires spinlock, deep-copies history, applies session range bounds via sub_140204F00
- 响应: `analytics_response_builder_111` @ 0x140838B40

### 逆向分析 Pseudocode (verbatim, session <审计会话>)

```c
// load_session_analytics_impl_111: analytics sub-path for session data
// NEW IN 1.1.1: not present in 1.0.9 baseline
// L1: pending_auto_switch_state_lock_acquire_111 (mutex guard)
// L1: query_installed_skills_with_repo_111 (skills repo validation)
// L2: remove_skill_parse_id_param_111 (parse range param)
// L3: session_range_filter_111 (session-specific range filter with spinlock)
// Response: analytics_response_builder_111
__int64 __fastcall load_session_analytics_impl_111(__int64 a1)
{
  // Full stack frame ~0x9E0 bytes; key locals:
  _BYTE v16[512]; // payload context copy
  _BYTE v18[384]; // args copy
  __int64 v22;    // command name ptr
  __m256i v23;    // param descriptor
  __m256i v39;    // skills repo result
  __m256i v40;    // range parse result
  __m256i v26;    // session filter result

  v54 = -2; /*0x140026be9*/
  sub_141212FB0(v16, a1, 520); /*0x140026c0a*/
  sub_141212FB0(v18, a1 + 520, 400); /*0x140026c26*/
  v49 = *(_QWORD *)(a1 + 936);
  v48 = *(_OWORD *)(a1 + 920);

  // Setup "repo" param descriptor
  v22 = (__int64)aLoadSessionAna; /*0x140026c59*/ // "load_session_analytics"
  v23.m256i_i64[0] = 22; // strlen("load_session_analytics")
  v23.m256i_i64[1] = (__int64)aRepo; // "repo"
  v23.m256i_i64[2] = 4;  // strlen("repo")
  v23.m256i_i64[3] = (__int64)v16; // payload ptr

  // L1: Acquire pending_auto_switch mutex guard
  v4 = pending_auto_switch_state_lock_acquire_111((char *)(v17 + 16), v2, v3); /*0x140026cb1*/
  if ( !v4 )
  {
    // L1: Query installed skills with repo validation
    query_installed_skills_with_repo_111((__int64)&v39, (__int64)&v22, (__int64)&v23.m256i_i64[1]); /*0x140026cd5*/
    if ( v39.m256i_i8[0] != 6 ) // Error: repo not found
    {
      // Error response
      has_notch_invoke_resolver_respond((__int64)v15, v19, (__int64)&v22, &v35, v20, v21);
      goto LABEL_18;
    }
    v4 = v39.m256i_i64[1]; // repo handle
  }

  // L2: Parse "range" param
  v22 = (__int64)aLoadSessionAna;
  v23.m256i_i64[1] = (__int64)aRange; // "range"
  v23.m256i_i64[2] = 5; // strlen("range")
  remove_skill_parse_id_param_111((__int64)&v40, &v22); /*0x140026d48*/

  if ( v40.m256i_i8[0] == 6 ) // range param present
  {
    v38 = v40.m256i_i64[3];
    v37 = *(_OWORD *)&v40.m256i_u64[1];

    // L3: Session range filter (spinlock + deep-copy + range bounds)
    session_range_filter_111(&v26, v4, &v37); /*0x140026d8f*/ // 0x1401CB3A0

    sub_141212FB0(&v22, a1 + 520, 400);
    if ( !__OFSUB__(0, v26.m256i_i64[0]) ) // Success
    {
      // Copy result into response region
      v46 = v32; v45 = v31; v44 = v30; v43 = v29;
      v42 = v28; v41 = v27; v40 = v26;
      v52 = 0;
      analytics_response_builder_111(&v22, &v40); /*0x140027028*/ // 0x140838B40
      goto LABEL_18;
    }
    // Error path: alloc/copy error string
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
    analytics_response_builder_111(&v22, &v40);
    goto LABEL_18;
  }
  // range param missing: error response
  v23 = v40;
  has_notch_invoke_resolver_respond((__int64)v14, v19, (__int64)&v22, &v33, v20, v21);
LABEL_18:
  // Cleanup arc listeners (96-byte stride)
  if ( !__OFSUB__(0, (_QWORD)v48) )
  {
    v11 = *((_QWORD *)&v48 + 1); v50 = v49; v51 = 0;
    while ( v50 != v51 ) { ++v51; v12 = v11 + 96; has_notch_arc_listener_drop_loop(); v11 = v12; }
    if ( (_QWORD)v48 ) sub_140001370(*((_QWORD *)&v48 + 1), 96 * v48, 8);
  }
  return sub_140042650(v16);
}
```

---

## L3 Callee — session_range_filter_111
VA: 0x1401CB3A0 | Named in IDB

```c
// session_range_filter_111: acquires spinlock, deep-copies quota history,
// applies range bounds via sub_140204F00 (session-specific range filter)
__int64 __fastcall session_range_filter_111(__int64 a1, _BYTE *a2, _QWORD *a3)
{
  // Spinlock acquire: _InterlockedCompareExchange8(a2, 1, 0)
  if ( _InterlockedCompareExchange8(a2, 1, 0) ) sub_14124A510(a2);

  // Deep copy history
  quota_history_point_deep_copy_111(v28, a2 + 8); // 0x1401EB870

  // Release spinlock
  *v22 = 0; if ( v23 == 2 ) WakeByAddressSingle(v22);

  // Apply session range bounds
  sub_140204F00(&v35, v28, v53[1], v53[2]); // session range matcher (differs from change @ sub_140204660)

  if ( (_DWORD)v35 == 10 ) // Ok
  {
    // Build session analytics OK response
    v31 = *((_QWORD *)&v35 + 1);
    sub_1402168D0(&v43, &v31); // session response constructor (differs from change @ sub_1402171C0)
    // Copy 112 bytes of result fields
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
| 0x1401CB3A0 | session_range_filter_111 | L3 session range filter with spinlock |
| 0x1401EB870 | quota_history_point_deep_copy_111 | L4 deep-copy of history data |
| 0x140204F00 | sub_140204F00 | L4 session range bounds matcher |
| 0x1402168D0 | sub_1402168D0 | L4 session response constructor |
| 0x140838B40 | analytics_response_builder_111 | L2 response builder/dispatch |
| 0x14080C3C0 | has_notch_invoke_resolver_respond | L2 error response path |
| 0x1401D4C70 | usage_fetch_error_drop_111 | error type destructor |
| 0x140046870 | diagnostic_paths_drop_sys | drop diagnostic path data |
| 0x14033AB50 | has_notch_arc_listener_drop_loop | cleanup: drop arc listeners |

---

## ACCEPTANCE (dim6, session <审计会话>)

### Happy Path
- Input: `{ repo: "<valid-installed-repo-id>", range: "<range-string>" }`
- Flow: L1 mutex → repo validation → range parse → session_range_filter_111 (0x1401CB3A0: spinlock → quota_history_point_deep_copy_111 → spinlock release → sub_140204F00 session range matcher → sub_1402168D0 session ctor) → analytics_response_builder_111 @ 0x140838B40
- Side-effect asserts: no file write; spinlock acquired and released; quota history deep-copied unmodified
- NOTE: inner ctor sub_1402168D0 shared with tool analytics; top-level builder 0x140838B40 distinct

### Error Paths
| Trigger | Expected |
|---|---|
| mutex acquire fails | has_notch_invoke_resolver_respond, no data access |
| repo absent/invalid (discriminant != 6) | has_notch_invoke_resolver_respond @ 0x14080C3C0 |
| range absent/unparseable (discriminant != 6) | has_notch_invoke_resolver_respond |
| session_range_filter_111 returns Err | Err tag 0x8000000000000000; error string alloc; analytics_response_builder_111 error path |
| OOM | sub_14124BCCB panic/abort |

### Test Mapping (producer-acceptance-draft)
- happy_path + repo-invalid + range-missing → e2e
- no file write → explicit_non_automatable_accept
- response shape distinguishable from tool analytics → manual (different range matcher, same inner ctor)
