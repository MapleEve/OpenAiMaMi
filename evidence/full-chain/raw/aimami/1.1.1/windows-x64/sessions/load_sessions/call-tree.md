# load_sessions — Call Tree (Windows x64) — Gold Leaf
**session**: <审计会话>
**delta_class**: integrity_recovered
**depth**: ≥5 edges confirmed
**date**: 2026-06-18

```
IPC frontend invoke: loadSessions() → ne("load_sessions")          [dim1-CCF]
  ↓
relay command router
├── sub_140A65470  0x140a65470  (primary relay dispatcher)          [relay-internal]
│   └── load_sessions_handler_111  0x140992490  [NEW, DELTA]
│       ├── pending_auto_switch_state_lock_acquire_111  0x14006edc0  [NEW, LEAF-gate]
│       │   ├── sub_14124A510  (WaitOnAddress helper)               [LEAF-OS]  depth=3
│       │   ├── sub_14124B1D0  (pending-flag reader)                [LEAF]     depth=3
│       │   └── WakeByAddressSingle  @ 0x14124a5d0                 [LEAF-OS]  depth=3
│       ├── query_installed_skills_with_repo_111  0x141214620  [NEW]
│       │   ├── sub_1410A1DF0  (future/task builder)                [LEAF]     depth=3
│       │   ├── sub_141222DD0  (JoinHandle wrapper)                 [LEAF]     depth=3
│       │   ├── sub_140082100  (executor trampoline)                [LEAF]     depth=3
│       │   ├── skill_store_get_all_111  0x14106d960  [NEW]
│       │   │   └── skill_store_iter_111  0x14106de20  [NEW]
│       │   │       ├── sub_1402488C0  (entry visitor callback)     [LEAF]     depth=5
│       │   │       └── sub_1410A8340  (repo-filter predicate)      [LEAF]     depth=5
│       │   └── sub_14106D970  (JoinHandle drop)                    [LEAF]     depth=3
│       ├── load_sessions_core_111  0x14016cd50  [NEW]
│       │   ├── codex_home_paths_field_tag_fast_111  0x14021f9a0   [LEAF, serde-deser]  depth=3
│       │   ├── codex_home_paths_field_tag_slow_111  0x14021f4e0   [LEAF, serde-deser]  depth=3
│       │   ├── sub_1400467A0  (fs::read_dir)                       [LEAF-OS]  depth=3
│       │   ├── sub_1401E77D0  (session iter step)                  [internal] depth=3
│       │   │   └── sub_1401649D0  (session entry mapper)           [internal] depth=4
│       │   │       ├── sub_1401EB7A0  (path deserializer)          [LEAF]     depth=5
│       │   │       ├── sub_1401D4850  (drop helper)                [LEAF]     depth=5
│       │   │       ├── sub_1410A9010  (path decode)                [LEAF]     depth=5
│       │   │       ├── sub_1412217D0  (error string builder)       [LEAF]     depth=5
│       │   │       └── sub_141248270  (error string alloc)         [LEAF]     depth=5
│       │   ├── sub_1401649D0  (session entry mapper, shared)       [internal] depth=3
│       │   ├── sub_1401D4850  (drop helper)                        [LEAF]     depth=3
│       │   ├── sub_140001370  (dealloc)                            [LEAF]     depth=3
│       │   ├── sub_1412217D0  (error string builder)               [LEAF]     depth=3
│       │   ├── sub_141221AC0  (string clone)                       [LEAF]     depth=3
│       │   ├── sub_14033A050  (recursive drop)                     [LEAF]     depth=3
│       │   ├── sub_141222340  (vec grow)                           [LEAF]     depth=3
│       │   ├── sub_140369580  (path push)                          [LEAF]     depth=3
│       │   ├── sub_141212FB0  (memcpy)                             [LEAF]     depth=3
│       │   ├── sub_14124BF80  (panic handler)                      [LEAF]     depth=3
│       │   ├── sub_1401E6EC0  (iter drop)                          [LEAF]     depth=3
│       │   └── sub_1403683F0  (vec of session drop)                [LEAF]     depth=3
│       └── codex_home_paths_serialize_111  0x1402129d0  [DTO serializer]
│           ├── sub_14025C400  (Option<PathBuf> field serializer)   [LEAF]     depth=3
│           ├── sub_1402580F0  (bool field serializer)              [LEAF]     depth=3
│           └── sub_14033FA00  (close brace / trailing comma)       [LEAF]     depth=3
└── sub_140A9E990  0x140a9e990  (secondary relay dispatcher)        [relay-internal]
    └── [same call chain as primary]

load_session_analytics [sub-path via "load_session_analytics" @ 0x1412ac411]
└── load_session_analytics_impl_111  0x140026bd0  [NEW, DELTA]
    ├── pending_auto_switch_state_lock_acquire_111  0x14006edc0  [shared gate]  depth=2
    │   └── [same as above]                                                     depth=3+
    ├── query_installed_skills_with_repo_111  0x141214620  [shared gate]        depth=2
    │   └── [same as above]                                                     depth=3+
    ├── remove_skill_parse_id_param_111  0x1402fed40  (range Option decoder)    depth=2
    │   ├── sub_1402F9EB0  (param presence check)                [LEAF]         depth=3
    │   ├── sub_1412233C0  (error string builder)                [LEAF]         depth=3
    │   ├── sub_140E30410  (format/convert)                      [LEAF]         depth=3
    │   └── sub_1402F7F90  (param source drop)                   [LEAF]         depth=3
    ├── sub_1401CB3A0  (session range filter)                    [internal]      depth=2
    │   ├── sub_14124A510  (WaitOnAddress / lock contend)        [LEAF-OS]      depth=3
    │   ├── sub_14124B1D0  (pending-flag reader)                 [LEAF]         depth=3
    │   ├── WakeByAddressSingle                                  [LEAF-OS]      depth=3
    │   ├── quota_history_point_deep_copy_111  0x1401eb870       [LEAF]         depth=3
    │   ├── sub_140204F00  (range bounds apply)                  [internal]     depth=3
    │   │   └── [stdlib/alloc primitives]                        [LEAF]         depth=4
    │   ├── sub_1402168D0  (ranged session list convert)         [LEAF]         depth=3
    │   ├── sub_140243FC0  (error format)                        [LEAF]         depth=3
    │   ├── usage_fetch_error_drop_111  0x1401d4c70             [LEAF]         depth=3
    │   └── diagnostic_paths_drop_sys  0x140046870              [LEAF]         depth=3
    ├── sub_140838B40  (analytics response builder)              [internal]     depth=2
    │   ├── sub_141212FB0  (memcpy 0x168)                       [LEAF]         depth=3
    │   ├── sub_14022A790  (analytics data → response)          [internal]     depth=3
    │   │   └── [serde response formatting primitives]           [LEAF]         depth=4
    │   ├── sub_140E30410  (format/convert)                      [LEAF]         depth=3
    │   ├── sub_140807390  (intermediate drop)                   [LEAF]         depth=3
    │   └── has_notch_invoke_resolver_respond  0x14080c3c0      [LEAF-relay]   depth=3
    ├── has_notch_invoke_resolver_respond  0x14080c3c0  (error)  [LEAF-relay]  depth=2
    ├── sub_14033AB50  (analytics entry drop, stride=96)         [LEAF]         depth=2
    └── sub_140042650  (root dealloc)                            [LEAF]         depth=2
```

**Edge count**: ≥ 48 edges across both paths. Depth ≥5 confirmed (handler→core→iter→mapper→deserializer = 5 levels deep from IPC entry).

**Terminated_reason per leaf class:**
| leaf | reason |
|------|--------|
| WakeByAddressSingle | OS API — platform-primitive |
| sub_1400467A0 (fs::read_dir) | OS syscall — platform-primitive |
| sub_141212FB0 (memcpy), sub_140001370 (dealloc) | stdlib — external_call |
| sub_14025C400, sub_1402580F0 | serde primitive serializers — response_serialize |
| has_notch_invoke_resolver_respond (0x14080c3c0) | relay respond — response_serialize |
| sub_1401EB7A0 (path deserializer) | path primitive — external_call |
| sub_1410A8340, sub_1402488C0 | iterator callbacks — implementation_leaf |
| sub_140838B40, sub_1401CB3A0 | depth=4 sub-tree — terminated_at_depth_5 |
| sub_14124A510 | WaitOnAddress — platform-primitive |
