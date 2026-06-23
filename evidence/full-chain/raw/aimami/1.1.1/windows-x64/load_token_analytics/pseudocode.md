# load_token_analytics — Windows x64 Pseudocode (Delta Leaf)
# session: <审计会话>
# machine: <本地机器>
# sha: d24e429a
# gate_tier: full_delta_leaf
# delta_class: NEW_IN_1.1.1 (analytics family; confirmed depth-escalated)
# baseline: 1.0.9 (command absent)
# role: producer

---

## Owner Function — sub_140027A40 (load_token_analytics handler)
VA: 0x140027A40 | Size: 0x4c1 bytes | String ref: aLoadTokenAnaly @ 0x1412ac427

### Delta vs 1.0.9
- **NEW_IN_1.1.1**: command did not exist in 1.0.9
- **L1 new**: `pending_auto_switch_state_lock_acquire_111` mutex guard (auto-switch mutex guard 新增)
- **L1 new**: `query_installed_skills_with_repo_111` skills repo 校验前置
- **L3**: `sub_1401C98B0` — token range filter: acquires spinlock, deep-copies history, applies token-specific range bounds via `sub_140203BB0`
- 注意: token 响应格式不同于 session/change — `sub_140215050` 构建 token 响应 (不同于 change @ sub_1402171C0 / session @ sub_1402168D0)
- 响应: `sub_140837DC0` (token analytics response builder)

### 逆向分析 Pseudocode (verbatim, session <审计会话>)

```c
// load_token_analytics: token consumption analytics, accepts repo+range
// NEW IN 1.1.1: not present in 1.0.9 baseline
// L1: pending_auto_switch_state_lock_acquire_111 (mutex guard)
// L1: query_installed_skills_with_repo_111 (skills repo validation)
// L2: remove_skill_parse_id_param_111 (parse range)
// L3: sub_1401C98B0 (token range filter with spinlock)
// Response: sub_140837DC0 (token analytics response builder)
// NOTE: token response struct is different from session/change (sub_140215050 constructor vs sub_1402168D0/1402171C0)
__int64 __fastcall sub_140027A40(__int64 a1)
{
  // Stack frame ~0xA70 bytes; key locals differ from session/change:
  // v21..v28 are __int64 not __m256i (smaller response struct)
  __int64 v21; // [rsp+6A0h] BYREF
  __int64 v22; // [rsp+6A8h]
  __int64 v23; // [rsp+6B0h]
  __int64 v24; // [rsp+6B8h]
  __m256i v26; // [rsp+750h] param descriptor
  __m256i v29; // [rsp+8D8h] range parse result
  __int128 v31; // [rsp+980h] token filter result
  // ...

  v45 = -2; /*0x140027a59*/
  sub_141212FB0(v15, a1, 520); /*0x140027a7a*/
  sub_141212FB0(v17, a1 + 520, 400); /*0x140027a96*/
  v40 = *(_QWORD *)(a1 + 936);
  v39 = *(_OWORD *)(a1 + 920);

  // Setup "repo" param descriptor
  v25 = (__int64)aLoadTokenAnaly; /*0x140027ac9*/ // "load_token_analytics"
  v26.m256i_i64[0] = 20; // strlen("load_token_analytics")
  v26.m256i_i64[1] = (__int64)aRepo; // "repo"
  v26.m256i_i64[2] = 4;
  v26.m256i_i64[3] = (__int64)v15;

  // L1: Acquire pending_auto_switch mutex guard
  v2 = sub_14006EDC0((volatile void *)(v16 + 16)); /*0x140027b21*/
  if ( !v2 )
  {
    // L1: Validate skills repo
    sub_141214620(&v37, &v25, &v26.m256i_u64[1]); /*0x140027b45*/
    if ( v37.m256i_i8[0] != 6 ) // Error: repo validation failed
    {
      // Error response via has_notch_invoke_resolver_respond
      sub_14080C3C0((unsigned int)v14, v18, (unsigned int)&v25, (unsigned int)&v33, v19, v20);
      goto LABEL_18;
    }
    v2 = v37.m256i_i64[1]; // repo handle
  }

  // L2: Parse "range" param
  v25 = (__int64)aLoadTokenAnaly;
  v26.m256i_i64[1] = (__int64)aRange; // "range"
  v26.m256i_i64[2] = 5;
  sub_1402FED40(&v29, &v25); /*0x140027bb8*/

  if ( v29.m256i_i8[0] == 6 ) // range param present
  {
    v36 = v29.m256i_i64[3];
    v35 = *(_OWORD *)&v29.m256i_u64[1];

    // L3: Token range filter (spinlock + deep-copy + token-specific bounds)
    sub_1401C98B0(&v21, v2, &v35); /*0x140027bff*/ // token filter, result to 4 x __int64 locals

    sub_141212FB0(&v25, a1 + 520, 400);
    if ( !__OFSUB__(0, v21) ) // Success (v21 == 0 means Ok)
    {
      // Success: copy result v22/v23/v24 (token result is 3-qword struct, smaller than session/change)
      sub_141212FB0(&v29, &v21, 168); // copy 168 bytes of token result
      v43 = 0;
      sub_140837DC0(&v25, &v29); /*0x140027e41*/ // token analytics response builder
      goto LABEL_18;
    }
    // Error path
    v4 = v22; v5 = v23; v6 = v24;
    if ( v24 < 0 ) { v7 = 0; goto LABEL_8; }
    if ( v24 )
    {
      nullsub_1(v3); v7 = 1;
      v8 = sub_140001360(v6, 1);
      if ( !v8 ) { LABEL_8: v41 = v5; v42 = v4; sub_14124BCCB(v7, v6); }
      v9 = v8;
      sub_141212FB0(v8, v5, v6);
      if ( !v4 ) goto LABEL_16;
    }
    else { v9 = 1; if ( !v22 ) goto LABEL_16; }
    sub_140001370(v5, v4, 1);
LABEL_16:
    v29.m256i_i8[8] = 3;
    v29.m256i_i64[2] = v6;
    v29.m256i_i64[3] = v9;
    v30 = v6;
    v29.m256i_i64[0] = 0x8000000000000000uLL; // Err tag
    v43 = 0;
    sub_140837DC0(&v25, &v29);
    goto LABEL_18;
  }
  // range param missing: error response
  v26 = v29;
  sub_14080C3C0((unsigned int)v13, v18, (unsigned int)&v25, (unsigned int)&v31, v19, v20);
LABEL_18:
  // Cleanup arc listeners (96-byte stride)
  if ( !__OFSUB__(0, (_QWORD)v39) )
  {
    v10 = *((_QWORD *)&v39 + 1); v41 = v40; v42 = 0;
    while ( v41 != v42 ) { ++v42; v11 = v10 + 96; sub_14033AB50(); v10 = v11; }
    if ( (_QWORD)v39 ) sub_140001370(*((_QWORD *)&v39 + 1), 96 * v39, 8);
  }
  return sub_140042650(v15);
}
```

---

## L3 Callee — sub_1401C98B0 (token range filter)
VA: 0x1401C98B0 | Distinct from session_range_filter_111 and change range filter

```c
// Token range filter: same spinlock pattern, different range matcher (sub_140203BB0)
// and different response constructor (sub_140215050 vs sub_1402168D0/sub_1402171C0)
__int64 __fastcall sub_1401C98B0(__int64 a1, _BYTE *a2, _QWORD *a3)
{
  // Spinlock acquire
  if ( _InterlockedCompareExchange8(a2, 1, 0) ) sub_14124A510(a2);

  // Deep copy history
  quota_history_point_deep_copy_111(v25, a2 + 8); // 0x1401EB870

  // Release spinlock
  *v22 = 0; if ( v23 == 2 ) WakeByAddressSingle(v22);

  // Token-specific range bounds filter (different from session @ sub_140204F00, change @ sub_140204660)
  sub_140203BB0(&v36, v25, v43[1], v43[2]); // token range matcher

  if ( v36.m128i_i32[0] == 10 ) // Ok discriminant
  {
    // Build token analytics OK response — struct is __m128i (16 bytes), differs from change/session (128+ bytes)
    v27 = v36.m128i_i64[1];
    v28 = v37;
    sub_140215050(&v30, &v27); // token response constructor (sub_140215050)
    sub_141212FB0((__m128i *)v4, &v30, 0xA8u); // copy 168 bytes
  }
  else
  {
    sub_140243FC0(&v30, v33); // error serializer
    usage_fetch_error_drop_111(&v36); // 0x1401D4C70
    *(_QWORD *)v4 = 0x8000000000000000uLL;
  }
  diagnostic_paths_drop_sys(v25);
  if ( *v43 ) sub_140001370(v43[1], *v43, 1);
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
| 0x1401C98B0 | sub_1401C98B0 (token_range_filter) | L3 token range filter with spinlock |
| 0x1401EB870 | quota_history_point_deep_copy_111 | L4 deep-copy history |
| 0x140203BB0 | sub_140203BB0 | L4 token range bounds matcher (distinct) |
| 0x140215050 | sub_140215050 | L4 token response constructor (distinct) |
| 0x140837DC0 | sub_140837DC0 | L2 token analytics response builder |
| 0x14080C3C0 | has_notch_invoke_resolver_respond | L2 error response path |
| 0x1401D4C70 | usage_fetch_error_drop_111 | error type destructor |
| 0x140046870 | diagnostic_paths_drop_sys | drop diagnostic path data |
| 0x14033AB50 | has_notch_arc_listener_drop_loop | cleanup: drop arc listeners |

---

## ACCEPTANCE (dim6, session <审计会话>)

### Happy Path
- Input: `{ repo: "<valid-installed-repo-id>", range: "<range-string>" }`
- Flow: L1 mutex → repo validation → range parse → sub_1401C98B0 token filter (spinlock → quota_history_point_deep_copy_111 → spinlock release → sub_140203BB0 token range matcher → sub_140215050 token ctor, 168-byte copy) → sub_140837DC0 token builder
- Side-effect asserts: no file write; spinlock acquired and released; response struct 168 bytes (distinct from session/tool 112-byte and change structs)
- CAUTION: sub_140215050 token ctor is UNIQUE — do not share DTO type with session/tool

### Error Paths
| Trigger | Expected |
|---|---|
| mutex acquire fails | has_notch_invoke_resolver_respond, no data access |
| repo absent/invalid (discriminant != 6) | has_notch_invoke_resolver_respond @ 0x14080C3C0 |
| range absent/unparseable (discriminant != 6) | has_notch_invoke_resolver_respond |
| token filter Err (0x8000000000000000 in v21) | error string from v22/v23/v24; Err tag in v29; sub_140837DC0 error path |
| OOM | sub_14124BCCB panic/abort |

### Test Mapping (producer-acceptance-draft)
- happy_path + repo-invalid + range-missing → e2e
- response struct 168 bytes distinct from session/tool → manual (schema comparison)
- no file write → explicit_non_automatable_accept
