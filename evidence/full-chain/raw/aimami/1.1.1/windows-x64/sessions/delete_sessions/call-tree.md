# delete_sessions — call tree (windows-x64, AiMaMi 1.1.1)
session: <审计会话>  (upgraded from <审计会话>)
delta_class: integrity_recovered
gate_tier: gold-leaf

```
delete_sessions_handler_111  (0x140023f80)  depth=0
├─ sub_141212FB0                             alloc/copy helper
├─ pending_auto_switch_state_lock_acquire_111 (0x14006EDC0)
├─ query_installed_skills_with_repo_111      (0x141214620)  parse "repo" arg
├─ sub_140360DA0                             parse "ids" arg (Vec<str>)
├─ delete_sessions_async_executor_111  (0x1407DD860)  depth=1  ← ASYNC BOUNDARY
│   ├─ _InterlockedCompareExchange8          mutex CAS acquire  [OS intrinsic, leaf]
│   ├─ sub_14124A510                         contention wait (WaitOnAddress)
│   ├─ sub_14124B1D0                         mutex state check
│   ├─ sub_1410B1930                         poison-guard check ("poisoned lock: another task failed inside")
│   ├─ delete_sessions_core_111  (0x14077FE10)  depth=2  ← PRIMARY DELTA LOCUS
│   │   ├─ sub_141077010                     thread-local DB handle TLS read  [leaf]
│   │   ├─ sub_14108CEE0                     lazy-init DB conn
│   │   ├─ sub_14123C830                     SQL stmt prepare
│   │   ├─ sub_14036F240                     bind params
│   │   ├─ delete_sessions_build_session_list_111  (0x140781830)  depth=3  ← NEW 1.1.1
│   │   │   ├─ sub_141077010                     thread-local DB handle  [leaf]
│   │   │   ├─ snooze_file_open_111  (0x14108C6F0)  depth=4  open thread entry files
│   │   │   │   ├─ sub_14107A370              depth=5  snooze open helper
│   │   │   │   │   ├─ snooze_file_open_111   recursive open path helper
│   │   │   │   │   └─ sub_141074040          terminated_reason: leaf (path format)
│   │   │   │   terminated_reason: OS file I/O
│   │   │   ├─ sub_140782E80  depth=4  enumerate thread entries
│   │   │   │   ├─ sub_14108C7E0  depth=5  dir enumerate / FindFirstFileExW
│   │   │   │   │   ├─ FindFirstFileExW        (0x14124D188)  terminated_reason: external_call (Win32)
│   │   │   │   │   ├─ __imp_GetLastError       (0x14124D708)  terminated_reason: external_call
│   │   │   │   │   ├─ win32_path_canonicalize_111  (0x1410908E0)
│   │   │   │   │   ├─ sub_1410A1B60           string ops
│   │   │   │   │   ├─ sub_141088630           path build
│   │   │   │   │   └─ sub_1410938D0           path string helper
│   │   │   │   ├─ sub_141212FB0               copy helper  [leaf]
│   │   │   │   ├─ sub_1401976E0               file state helper
│   │   │   │   ├─ sub_141082A50               entry reader
│   │   │   │   ├─ sub_14107A370               snooze open helper  (depth=5)
│   │   │   │   ├─ sub_14107B790               elapsed_since_ts_111
│   │   │   │   ├─ elapsed_since_ts_111  (0x14107B790)  timestamp compare  [leaf]
│   │   │   │   ├─ sub_1412208A0               time ops
│   │   │   │   ├─ sub_141030540               entry parse
│   │   │   │   ├─ sub_1401D6AF0               slot helper
│   │   │   │   └─ sub_140041790               cleanup / drop  [leaf]
│   │   │   ├─ sub_14107A5E0  depth=4  get rollout_path string
│   │   │   │   ├─ sub_1410904A0  depth=5  string deref / ptr resolve  [leaf]
│   │   │   │   ├─ sub_1410983C0  depth=5  string len helper  [leaf]
│   │   │   │   └─ sub_14124C270  depth=5  bounds check  [leaf]
│   │   │   │   terminated_reason: leaf (returns path ptr)
│   │   │   ├─ sub_1410A9010                   suffix extraction  [leaf]
│   │   │   ├─ sub_14030E170                   split path on '-'
│   │   │   ├─ sub_14033F0C0                   string trim (last 5 chars)
│   │   │   ├─ sub_1410A1750  depth=4  path clone / alloc
│   │   │   │   └─ sub_140001360  depth=5  alloc leaf  [terminated_reason: leaf (allocator)]
│   │   │   ├─ sub_140374610  depth=4  push to session list (hashmap insert)
│   │   │   │   ├─ sub_140624F90  depth=5  hashmap slot probe
│   │   │   │   │   └─ sub_1405AB1E0  depth=6  hash fn  [terminated_reason: leaf (hash)]
│   │   │   │   ├─ sub_141213640               string compare  [leaf]
│   │   │   │   └─ sub_14121B280               Vec/slot grow helper
│   │   │   ├─ sub_140001370                   dealloc / free  [leaf (allocator)]
│   │   │   └─ sub_14124BCCB                   OOM panic  [leaf (panic)]
│   │   ├─ snooze_file_open_111  (0x14108C6F0)  depth=3  open thread state
│   │   ├─ delete_sessions_open_db_111  (0x14077F5E0)  depth=3
│   │   │   ├─ sub_140C4BB80                   try thread-local conn  [leaf]
│   │   │   ├─ sub_140C4BDC0                   open/create DB
│   │   │   ├─ sub_140C4CB20                   conn factory
│   │   │   ├─ sub_140C4BC40                   retry open (flag 32770-a4)
│   │   │   └─ sub_1410A1DF0                   error format (IoError→string)  [leaf]
│   │   │   terminated_reason: leaf (DB I/O)
│   │   ├─ [per-id SQL loop]
│   │   │   ├─ sub_1407CFC40  SQL="DELETE FROM thread_spawn_edges WHERE child_thread_id=?1 OR parent_thread_id=?1"
│   │   │   │   ← NEW CASCADE (string @ 0x1412F32F8)
│   │   │   │   skip if result==0x8000000000000016 (row-not-found)
│   │   │   ├─ sub_1407CFC40  SQL="DELETE FROM threads WHERE id=?1"
│   │   │   │   skip if result==0x8000000000000016
│   │   │   └─ sub_14036FCE0                   append to deleted-ids list
│   │   ├─ sub_14108C6F0                        snooze_file_open (post-loop state read)
│   │   ├─ win32_file_read_bytes_111  (0x141093260)  depth=3
│   │   │   terminated_reason: leaf (OS file I/O)
│   │   ├─ sub_14072E810                        line reader / state parser
│   │   ├─ sub_140002FA0                        utf8 validate / split
│   │   ├─ sub_14103A480                        json field get "id"
│   │   ├─ snooze_file_delete_111  (0x14108BF60)  depth=3  delete snooze file
│   │   │   ├─ sub_1410938D0  depth=4           path string ops  [leaf]
│   │   │   ├─ win32_path_canonicalize_111  (0x1410908E0)  depth=4  canonicalize path
│   │   │   │   terminated_reason: leaf (path string op)
│   │   │   ├─ snooze_file_delete_win32_111  (0x14108F810)  depth=4  Win32 file delete
│   │   │   │   ├─ DeleteFileW   (0x14124D830)  depth=5  terminated_reason: external_call (Win32 OS)
│   │   │   │   ├─ GetLastError  (0x14124D708)  depth=5  terminated_reason: external_call (Win32 OS)
│   │   │   │   ├─ SetFileInformationByHandle  (0x14124D118)  depth=5  terminated_reason: external_call (Win32 OS)
│   │   │   │   ├─ sub_14107C710 depth=5        handle wrapper  [leaf]
│   │   │   │   └─ sub_141074040 depth=5        path format helper  [leaf]
│   │   │   │   terminated_reason: external_call (Win32 OS boundary)
│   │   │   └─ sub_140001370                    free  [leaf (allocator)]
│   │   │   terminated_reason: external_call (Win32 OS boundary, depth reached 5)
│   │   ├─ sub_14033F0C0                        join strings with "\n"
│   │   ├─ win32_file_write_bytes_111  (0x141093710)  depth=3
│   │   │   terminated_reason: leaf (OS file I/O)
│   │   └─ delete_sessions_collect_results_111  (0x140311630)  depth=3
│   │       ├─ sub_140625680  depth=4           57-bit hash fn
│   │       │   └─ sub_1405AB1E0  depth=5       hash implementation  [terminated_reason: leaf (hash)]
│   │       ├─ sub_141213640  depth=4           string compare  [leaf]
│   │       ├─ sub_1410A2210  depth=4           extract SessionInfo from hashmap slot
│   │       │   ├─ sub_140001360  depth=5       alloc 96-byte element  [terminated_reason: leaf (allocator)]
│   │       │   ├─ sub_141212FB0  depth=5       copy helper  [leaf]
│   │       │   └─ sub_14124BCCB  depth=5       OOM panic  [leaf (panic)]
│   │       ├─ sub_140001360                    alloc (Vec grow)  [leaf (allocator)]
│   │       ├─ sub_141221220  depth=4           Vec realloc/extend
│   │       └─ sub_14124BCCB                    OOM panic  [leaf (panic)]
│   │       terminated_reason: leaf (returns Vec<SessionInfo>)
│   ├─ sub_140243FC0                            serialize error result
│   ├─ sub_140809B30                            drop error value
│   ├─ sub_140214100                            serialize ok result
│   └─ WakeByAddressSingle                      wake waiting threads  [OS intrinsic, leaf]
├─ sub_1408314F0                                dispatch Ok response
└─ sub_14080C3C0                                dispatch Err response
```

## terminated_reason legend

| code | meaning |
|---|---|
| leaf | no further app-level callees; returns to caller directly |
| external_call | terminates at OS / Win32 API boundary (DeleteFileW, FindFirstFileExW, etc.) |
| OS file I/O | terminates at OS syscall for file read/write |
| DB I/O | terminates at SQLite / custom DB layer |
| leaf (allocator) | terminates at global Rust allocator |
| leaf (panic) | terminates via panic / OOM abort |
| leaf (hash) | terminates at hash primitive |
| leaf (TLS read) | thread-local storage read, no further calls |

## Call depth summary

| VA | name | depth | terminated_reason |
|---|---|---|---|
| 0x140023f80 | delete_sessions_handler_111 | 0 | — |
| 0x1407DD860 | delete_sessions_async_executor_111 | 1 | — |
| 0x14077FE10 | delete_sessions_core_111 | 2 | — |
| 0x140781830 | delete_sessions_build_session_list_111 | 3 | — |
| 0x14108C6F0 | snooze_file_open_111 | 4 | OS file I/O |
| 0x140782E80 | sub_140782E80 (enumerate entries) | 4 | — |
| 0x14108C7E0 | sub_14108C7E0 (FindFirstFileExW wrapper) | 5 | external_call (Win32) |
| 0x14124D188 | FindFirstFileExW | 6 | external_call (Win32 OS) |
| 0x14107A5E0 | sub_14107A5E0 (get rollout_path) | 4 | leaf |
| 0x1410904A0 | sub_1410904A0 | 5 | leaf |
| 0x140374610 | sub_140374610 (push to list) | 4 | — |
| 0x140624F90 | sub_140624F90 (hashmap probe) | 5 | — |
| 0x1405AB1E0 | sub_1405AB1E0 (hash fn) | 6 | leaf (hash) |
| 0x14077F5E0 | delete_sessions_open_db_111 | 3 | leaf (DB I/O) |
| 0x141093260 | win32_file_read_bytes_111 | 3 | leaf (OS file I/O) |
| 0x14108BF60 | snooze_file_delete_111 | 3 | — |
| 0x1410908E0 | win32_path_canonicalize_111 | 4 | leaf |
| 0x14108F810 | snooze_file_delete_win32_111 | 4 | — |
| 0x14124D830 | DeleteFileW | 5 | external_call (Win32 OS) |
| 0x14124D118 | SetFileInformationByHandle | 5 | external_call (Win32 OS) |
| 0x14124D708 | GetLastError | 5 | external_call (Win32 OS) |
| 0x141093710 | win32_file_write_bytes_111 | 3 | leaf (OS file I/O) |
| 0x140311630 | delete_sessions_collect_results_111 | 3 | — |
| 0x140625680 | sub_140625680 (hash) | 4 | — |
| 0x1405AB1E0 | sub_1405AB1E0 | 5 | leaf (hash) |
| 0x1410A2210 | sub_1410A2210 (extract SessionInfo) | 4 | — |
| 0x140001360 | sub_140001360 (alloc) | 5 | leaf (allocator) |

Maximum call depth reached: **6** (FindFirstFileExW, sub_1405AB1E0 hash chain).

## Delta summary vs 1.0.9

| Component | 1.0.9 | 1.1.1 | Delta type |
|---|---|---|---|
| `delete_sessions_handler` | present | present | no change |
| `delete_sessions_async_executor` | present | present | no change (inherits core delta) |
| `delete_sessions_core` | present | present | SQL cascade order CHANGED + session_list scanner call added |
| `delete_sessions_build_session_list` | absent | present @ 0x140781830 | **NEW FUNCTION** |
| `delete_sessions_open_db` | present | present | no behavioral delta |
| `delete_sessions_collect_results` | present | present | no behavioral delta (decompile verified) |
| `snooze_file_delete_111` | present | present | no behavioral delta (callee tree verified) |
| SQL `thread_spawn_edges` cascade | absent | present @ 0x1412F32F8 | **NEW SQL** |
| SQL `threads` delete | present | present | now executed after cascade (order changed) |
