# load_quota_history — Call Tree (Windows x64)
# session: <审计会话>
# delta_class: integrity_recovered

```
load_quota_history_handler_111                          0x140020E40  [NEW in 1.1.1]
├── sub_141212FB0                                        0x141212FB0  memcpy/clone utility
├── pending_auto_switch_state_lock_acquire_111           0x14006EDC0  [named; shared]
├── query_installed_skills_with_repo_111                 0x141214620  [named; skill store query]
│   ├── sub_1410A1DF0                                    0x1410A1DF0  future/async poll
│   ├── sub_141222DD0                                    0x141222DD0  channel send
│   ├── skill_store_get_all_111                          0x14106D960  [named; returns all skills]
│   └── sub_14106D970                                    0x14106D970  channel recv/drop
├── sub_1402FBB30  [accountKey BTree lookup]             0x1402FBB30
│   ├── sub_14103A480  [BTreeMap node walk]              0x14103A480
│   │   └── sub_141213640  [byte-level key cmp]         0x141213640  [leaf / terminated]
│   ├── sub_1410A1DF0                                    0x1410A1DF0  [shared]
│   ├── sub_141222240                                    0x141222240
│   ├── sub_140E30410                                    0x140E30410  Display impl check
│   └── sub_1402F7F90                                    0x1402F7F90  result cleanup
├── sub_1401C8C10  [lock-aware quota history wrapper]    0x1401C8C10
│   ├── _InterlockedCompareExchange8                                  [WinAPI; mutex acquire]
│   ├── WakeByAddressSingle                                           [WinAPI; mutex release]
│   ├── sub_14124A510  [mutex wait/spin]                0x14124A510
│   ├── sub_14124B1D0  [poison check]                   0x14124B1D0
│   ├── sub_1401EB870  quota_history_point_deep_copy_111 0x1401EB870  [NEW in 1.1.1]
│   │   └── sub_141212FB0                               0x141212FB0  [leaf]
│   └── quota_history_file_read_and_filter_111          0x1402002F0  [NEW in 1.1.1]
│       ├── sub_14108C6F0  [file path resolve]          0x14108C6F0
│       │   ├── sub_1410938D0  [appdata path getter]    0x1410938D0
│       │   └── win32_path_canonicalize_111             0x1410908E0  [named; terminated]
│       ├── win32_file_open_rw_111                      0x14108F6C0
│       │   └── sub_14108F8E0  [CreateFile wrapper]     0x14108F8E0  [terminated]
│       ├── system_time_precise_u32_111                 0x14107B7E0  [named; timestamp]
│       ├── elapsed_since_ts_111                        0x14107B790  [named; duration calc]
│       ├── sub_1407CE670  [NDJSON line reader]         0x1407CE670
│       │   └── sub_1407AC650  [buffered read]          0x1407AC650
│       │       └── win32_file_read_bytes_111           0x141093260  [named; terminated]
│       ├── sub_14070B280  [JSON tokenizer dispatch]    0x14070B280
│       ├── sub_140003460  [serde JSON decode]          0x140003460
│       │   → QuotaHistoryPoint serde visitor
│       ├── sub_141213640  [key byte-cmp filter]        0x141213640  [leaf; terminated]
│       ├── CloseHandle                                               [WinAPI; terminated]
│       ├── win32_file_write_bytes_111                  0x141093710  [named; trim+rewrite]
│       ├── sub_140311C90  [history vec sort]           0x140311C90
│       ├── sub_1403047A0  [slice oldest entries]       0x1403047A0
│       └── sub_14033F0C0  [compact vec]                0x14033F0C0
├── quota_history_ok_response_build_111                 0x140216A40  [NEW in 1.1.1]
│   └── sub_140001360  [alloc]                          0x140001360  [leaf]
├── quota_history_response_dispatch_111                 0x140838EB0  [NEW in 1.1.1]
│   ├── relay_response_serialize_json_111               0x1402275B0  [NEW in 1.1.1]
│   │   ├── sub_140261480  [write schemaVersion field]  0x140261480
│   │   ├── sub_1402580F0  [write bool field success]   0x1402580F0
│   │   ├── sub_14025C400  [write i32/str fields]       0x14025C400
│   │   ├── relay_event_field_warnings_sys              0x1402494C0  [named; write warnings]
│   │   ├── sub_1402499C0  [write data field]           0x1402499C0
│   │   └── sub_1402313B0  [drop relay_response]        0x1402313B0
│   ├── sub_140807390  [format Display error]           0x140807390
│   └── sub_14080C3C0  [IPC resolver send]              0x14080C3C0  [shared; IPC infra]
│       ├── _InterlockedCompareExchange8                              [WinAPI]
│       ├── _InterlockedDecrement64                                   [WinAPI; refcount]
│       ├── WakeByAddressSingle                                       [WinAPI]
│       └── sub_140E208A0  [drop resolver on refcount=0] 0x140E208A0
└── sub_14080C3C0  [IPC error path]                     0x14080C3C0  [shared]
    └── (same as above)

TERMINATED LEAVES (depth limit reached or leaf):
  sub_141213640          byte-level key comparison (memcmp equivalent)
  win32_file_read_bytes_111   ReadFile wrapper
  win32_file_write_bytes_111  WriteFile wrapper
  win32_path_canonicalize_111 GetFullPathNameW wrapper
  system_time_precise_u32_111 GetSystemTimeAsFileTime -> u32 seconds
  elapsed_since_ts_111        timestamp delta computation
  sub_140001360               alloc (jemalloc)
  sub_140001370               dealloc (jemalloc)
  CloseHandle                 WinAPI handle close
  WakeByAddressSingle         WinAPI futex-like wake
  _InterlockedCompareExchange8  WinAPI atomic CAS
  _InterlockedDecrement64     WinAPI atomic decrement

EXCLUDED NOISE (not delta-relevant):
  nullsub_1 / sub_141212FB0(memcpy) -- compiler intrinsics
  sub_14124BCCB / sub_14124BFE0 / sub_14124BF80 -- OOM/panic handlers
  sub_14124B1D0 -- mutex poison check (Mutex poison-guard, excluded per rule)
```
