# refresh_usage_snapshot — Call Tree (Windows x64)
# session: <审计会话> (gold-leaf update) | sha: d24e429a
# prior session: <审计会话> | delta_class: integrity_recovered
# IDB renames applied this session: refresh_usage_snapshot_owner_sys, post_loop_finalize, account_state_update,
#   check_subscription_active_jwt, broadcast_runtime_state_updated, serialize_usage_attempt_stats

## Call Tree (depth >= 5 reached at leaf level)

```
refresh_usage_snapshot_owner_sys                0x140984C40  [owner, depth=0; renamed from cmd_handler_111 gold-leaf]
├── get_usage_refresh_interval_read_sys_111     0x140089A50  [named 1.0.9, SAME]
│   └── sub_140729280                           0x140729280  [config reader, terminated: leaf utility]
├── sub_140921810                               0x140921810  [lock/state cleanup helper]
│   └── sub_140920880                           0x140920880  [terminated: leaf]
├── sub_140797840                               0x140797840  [pending_auto_switch check]
│   ├── pending_auto_switch_state_lock_acquire_111  0x14006EDC0  [named 1.0.9, SAME]
│   └── load_mcp_servers_read_existing_snapshot_111 0x1401BF000  [named 1.0.9, SAME]
├── sub_1400803E0                               0x1400803E0  [IPC arg unpack, terminated: small]
├── sub_14023F380                               0x14023F380  [future/task alloc + spawn]
│   └── sub_140F050E0                           0x140F050E0  [task executor submit, terminated: runtime]
├── refresh_usage_snapshot_core_111             0x1401BD570  [depth=1, core logic]
│   ├── sub_1401EACD0                           0x1401EACD0  [account struct copy/init]
│   ├── sub_140676A10                           0x140676A10  [build HTTP context/auth]
│   │   └── (various Arc clone/deref, terminated: ref-count utilities)
│   ├── system_time_precise_u32_111             0x14107B7E0  [named 1.0.9, SAME — timestamp]
│   ├── elapsed_since_ts_111                    0x14107B790  [named 1.0.9, SAME — duration]
│   ├── check_subscription_active_jwt_111       0x140678480  [depth=3; renamed gold-leaf; was sub_140678480; decodes base64url JWT 'exp' claim]
│   │   ├── sub_14066EA70                       0x14066EA70  [base64url decode JWT segment, terminated: crypto util]
│   │   ├── sub_1401E9AB0                       0x1401E9AB0  [parse JWT JSON payload claims, terminated: json util]
│   │   ├── sub_14103A480                       0x14103A480  [extract 'exp' claim string eq, depth=4]
│   │   ├── sub_1402FFCA0                       0x1402FFCA0  [strip base64 '=' padding, terminated: str util]
│   │   ├── sub_140042350                       0x140042350  [drop JWT struct arcs, terminated: ref-count]
│   │   ├── sub_140702EE0                       0x140702EE0  [drop discriminant==6 JWT result, terminated: ref-count]
│   │   ├── system_time_precise_u32_111         0x14107B7E0  [SAME]
│   │   └── elapsed_since_ts_111                0x14107B790  [SAME; expiry check: elapsed==1 means expired]
│   ├── fetch_wham_usage_http_111               0x140673CC0  [depth=2, NEW in 1.1.1]
│   │   ├── sub_1410A1DF0                       0x1410A1DF0  [URL string builder, terminated: fmt]
│   │   ├── sub_140673110                       0x140673110  [set query param account_id]
│   │   ├── sub_140729BD0                       0x140729BD0  [HTTP builder init]
│   │   ├── sub_1406508B0                       0x1406508B0  [set header Authorization]
│   │   ├── sub_140650290                       0x140650290  [set header ChatGPT-Account-Id]
│   │   ├── sub_1406505A0 x2                    0x1406505A0  [set header Accept / User-Agent]
│   │   ├── sub_140C8D540                       0x140C8D540  [HTTP client send — SIDE EFFECT: network I/O]
│   │   ├── sub_140708080                       0x140708080  [drop HTTP result on error]
│   │   ├── sub_1408709B0                       0x1408709B0  [JSON response deserialize]
│   │   │   └── (serde JSON parse machinery, terminated: std library)
│   │   ├── sub_140731DA0                       0x140731DA0  [check content-type field]
│   │   ├── sub_14103A480                       0x14103A480  [string eq: "application/json"]
│   │   └── sub_140310830                       0x140310830  [build QuotaHistoryPoint from response]
│   │       depth reached: leaf (terminated at struct fill)
│   ├── on_usage_fetch_success_write_store_111  0x1401B8D90  [depth=2, NEW expanded in 1.1.1]
│   │   ├── system_time_precise_u32_111         0x14107B7E0  [SAME]
│   │   ├── elapsed_since_ts_111                0x14107B790  [SAME]
│   │   ├── sub_140200EA0 = quota_history_persist_file_111  0x140200EA0  [depth=3, NEW SIDE EFFECT]
│   │   │   ├── sub_14107A3E0                   0x14107A3E0  [build file path token from account_id]
│   │   │   ├── sub_141082B80                   0x141082B80  [create directory if missing]
│   │   │   ├── sub_140201390                   0x140201390  [serialize QuotaHistoryPoint to JSON buf]
│   │   │   ├── sub_141087E20                   0x141087E20  [CreateFile/WriteFile — SIDE EFFECT: disk write]
│   │   │   └── CloseHandle                     0x14124D788  [Windows API — file close]
│   │   ├── quota_history_append_dedup_111      0x1401FF820  [depth=3, NEW]
│   │   │   ├── sub_141220DE0                   0x141220DE0  [Vec grow/realloc]
│   │   │   ├── sub_141213640                   0x141213640  [string eq helper]
│   │   │   ├── sub_1401EE1D0 x2                0x1401EE1D0  [subscription fields eq check]
│   │   │   ├── sub_1401F2940                   0x1401F2940  [quota value eq check]
│   │   │   ├── sub_1401D5DB0                   0x1401D5DB0  [dedup no-op drop]
│   │   │   ├── sub_1407B44C0                   0x1407B44C0  [trim history to max 0x15 entries]
│   │   │   └── sub_1401DA720                   0x1401DA720  [compact history 2..21]
│   │   └── sub_141213640                       0x141213640  [string match for notify dispatch]
│   ├── serialize_usage_attempt_stats_111       0x14020DF30  [depth=2, NEW; renamed gold-leaf]
│   │   ├── sub_140261480                       0x140261480  [JSON field write u32 — usageAttemptCount/usageSuccessCount]
│   │   ├── sub_1402576B0                       0x1402576B0  [JSON field write Option<String> — lastUsageFailure/Account]
│   │   ├── sub_141221220                       0x141221220  [Vec grow output buffer if full]
│   │   └── sub_14033FA00                       0x14033FA00  [write closing '}' brace, terminated: fmt]
│   ├── usage_fetch_error_drop_111              0x1401D4C70  [depth=2, error cleanup]
│   ├── refresh_usage_snapshot_post_loop_finalize_111  0x1401BCE90  [depth=2; renamed gold-leaf; was sub_1401BCE90]
│   │   ├── system_time_precise_u32_111         0x14107B7E0  [SAME]
│   │   ├── elapsed_since_ts_111                0x14107B790  [SAME]
│   │   ├── sub_1403103C0                       0x1403103C0  [build account array slice iterator, terminated: slice utility]
│   │   ├── quota_history_append_dedup_111      0x1401FF820  [depth=3, in-mem dedup; fully decompiled gold-leaf]
│   │   ├── sub_1410A2210                       0x1410A2210  [extract Option<T> from account store entry, terminated: leaf]
│   │   └── sub_141213640                       0x141213640  [string eq for account_id lookup, terminated: leaf]
│   └── refresh_usage_snapshot_account_state_update_111  0x1401ED840  [depth=2; renamed gold-leaf; was sub_1401ED840]
│       └── sub_1410A2210                       0x1410A2210  [extract Option<T>, terminated: leaf utility]
├── broadcast_runtime_state_updated_111         0x140790230  [depth=1; renamed gold-leaf; was sub_140790230]
│   ├── system_time_precise_u32_111             0x14107B7E0  [SAME]
│   ├── elapsed_since_ts_111                    0x14107B790  [SAME; throttle check]
│   ├── sub_140074A00                           0x140074A00  [event bus emit "runtime-state-updated" — SIDE EFFECT]
│   ├── sub_1407B1CA0                           0x1407B1CA0  [update state version counter, terminated: leaf]
│   ├── sub_1407CE770                           0x1407CE770  [snapshot current runtime state, terminated: leaf]
│   ├── sub_14078B420                           0x14078B420  [tray icon refresh — SIDE EFFECT: tray update; throttled]
│   ├── sub_14079DA60                           0x14079DA60  [persist state snapshot to disk — SIDE EFFECT: file write]
│   ├── sub_14124B1D0                           0x14124B1D0  [filter event listeners, terminated: leaf]
│   ├── sub_141227238                           0x141227238  [lock contention helper, terminated: runtime]
│   ├── sub_1407B05F0                           0x1407B05F0  [event bus result cleanup, terminated: leaf]
│   └── WakeByAddressSingle                     0x14124A5D0  [Windows API: wake waiters on lock byte, terminated: OS]
├── sub_1408EF450                               0x1408EF450  [task/future cleanup]
│   └── sub_14090EFB0                           0x14090EFB0  [quota store drop chain]
│       └── sub_140041870                       0x140041870  [Arc deref+drop]
├── sub_14080C3C0 (IPC_RESPONSE_DISPATCH)       0x14080C3C0  [named 1.0.9, SAME]
└── sub_140E30410                               0x140E30410  [UsageResult fmt/display dispatch, 0x25 variants]
    └── skill_store_get_all_111                 0x14106D960  [named 1.0.9, variant 0x1C]

## Terminated Reasons Legend
- terminated: leaf           — single-purpose utility, no app-level callees
- terminated: std library    — Rust std/alloc internals
- terminated: ref-count      — Arc clone/drop/deref
- terminated: runtime        — Tokio/async runtime internals
- terminated: fmt            — Rust format! internals
- terminated: small          — function < 50 bytes, trivial
- depth reached              — depth >= 5, not expanded further
```
