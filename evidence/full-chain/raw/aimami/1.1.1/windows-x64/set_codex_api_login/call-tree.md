# call-tree.md — set_codex_api_login (AiMaMi 1.1.1 win64)

深度 ≥5，terminated_reason 标注在叶节点。

```
[IPC dispatcher]
└── set_codex_api_login_dispatch_hub_sys @ 0x14099D990  [B; multi-cmd hub; LABEL_4=set_codex_api_login]
    ├── sub_140089A50 @ ?                               [C; JSON payload parse]
    ├── sub_14006F4B0 @ 0x14006F4B0                     [C; manager String(7B) extract; WIN lock]
    │   └── _InterlockedCompareExchange8                [WIN API; LEAF: platform-primitive]
    ├── sub_1402FF1A0 @ 0x1402FF1A0                     [C; enabled bool extract]
    │   └── sub_1402F9EB0 @ ?                           [D; bool coerce; LEAF: size small]
    ├── sub_1402FF330 @ 0x1402FF330                     [C; relaunch bool extract; checks +480==6]
    ├── sub_14023E4D0 @ 0x14023E4D0                     [C; vtable dispatch; alloc 512B; → async enqueue]
    │   └── sub_140F050E0 @ ?                           [D; Tokio task queue enqueue; LEAF: runtime-internal]
    └── set_codex_api_login_task_runner_sys @ 0x1407D63E0  [A; blocking task wrapper]
        ├── sub_14124BF80 @ ?                           [D; panic "blocking task ran twice"; LEAF: panic]
        ├── sub_140F03290 @ ?                           [D; runtime/thread setup; LEAF: infra]
        └── set_codex_api_login_core_sys @ 0x1406D8620  [A; CORE BODY; src=codexmate_lib::core::relay::manager]
            ├── _InterlockedCompareExchange8(relay+16)  [WIN API; LEAF: platform-primitive]
            ├── WakeByAddressSingle(relay+16)           [WIN API; LEAF: platform-primitive]
            ├── relay_get_active_providers_vec_sys @ 0x1406DBEC0  [A; get providers Vec from state]
            │   ├── sub_14030AF60 @ ?                   [C; Vec init/iter setup; LEAF: stdlib-vec]
            │   ├── sub_141213640 @ ?                   [D; provider id compare; LEAF: string-cmp]
            │   ├── sub_1402099E0 @ ?                   [C; copy provider entry (stride=232B)]
            │   ├── sub_1410A2210 @ ?                   [D; Vec push; LEAF: stdlib-vec]
            │   ├── sub_1412208A0 @ ?                   [D; Vec grow; LEAF: stdlib-alloc]
            │   └── sub_140001370 @ ?                   [D; dealloc; LEAF: alloc]
            ├── relay_providers_config_write_and_persist_sys @ 0x1406E6960  [A; already named]
            │   ├── sub_1406DA6B0 @ ?                   [C; serialize to buffer]
            │   ├── relay_config_check_parent_dirs_sys @ 0x1406F2870  [C; check 9 parent dirs]
            │   │   └── sub_141082B80 @ ? (x9)         [D; dir exists check; LEAF: fs-check]
            │   ├── sub_14020A3E0 @ 0x14020A3E0         [C; JSON serialize RelayManagerState]
            │   │   └── sub_140260D60 @ ?              [D; bool→JSON; LEAF: serde]
            │   │   └── sub_140249360 @ ?              [D; codexApiSlots→JSON; LEAF: serde]
            │   ├── atomic_write_file_sys @ 0x140504310  [D; codexmate_lib::core::relay::atomic_write]
            │   │   ├── sub_14107A3E0 @ ?              [D; get parent dir; LEAF: path]
            │   │   ├── sub_141082B80 @ ?              [D; dir exists; LEAF: fs-check]
            │   │   ├── sub_14107A5E0 @ ?              [D; get tmp path; LEAF: path]
            │   │   ├── GetCurrentProcessId            [WIN API; LEAF: platform]
            │   │   ├── sub_141087E20 @ ?              [D; CreateFile; LEAF: WIN-fs]
            │   │   ├── sub_141097C30 @ ?              [D; WriteFile loop; LEAF: WIN-fs]
            │   │   ├── sub_140504130 @ ?              [D; rename tmp→final; LEAF: WIN-fs]
            │   │   └── CloseHandle                    [WIN API; LEAF: platform]
            │   └── WakeByAddressSingle                [WIN API; LEAF: platform-primitive]
            ├── sub_140514170 @ ?                       [C; update relay state field (writing_config phase)]
            ├── sub_1407169C0 @ 0x1407169C0             [C; get providers Vec guard; panic if poisoned]
            │   └── sub_14124BFE0 @ ?                   [D; panic "relay state poisoned"; LEAF: panic]
            ├── sub_1400397C0 @ ?                       [C; init provider: +373=1, clear +136/+152]
            ├── relay_post_login_state_sync_sys @ 0x1406E1750  [B; post-login state sync]
            │   ├── sub_1406E8480 @ ?                   [C; state snapshot; LEAF: infra]
            │   ├── _InterlockedCompareExchange8(v6+16) [WIN API; LEAF: platform-primitive]
            │   ├── WakeByAddressSingle(v6+16)          [WIN API; LEAF: platform-primitive]
            │   ├── sub_14073BC50 @ ?                   [C; state-machine drive]
            │   ├── sub_140732660 @ ?                   [C; result write]
            │   └── sub_1401D6220 @ ?                   [D; provider cleanup; LEAF: drop]
            ├── sub_1406E1040 @ 0x1406E1040             [C; rollback: codexApiLogin=false + log]
            │   └── relay_providers_config_write_and_persist_sys  [already traced above]
            ├── sub_1406D9F00 @ 0x1406D9F00             [C; emit final event (launching_codex/done)]
            ├── quit_codex_poll_wait_sys_111 @ 0x1407A39B0  [A; already named; poll quit Codex]
            │   ├── sub_140504DA0("Codex",5)            [C; is_running check; LEAF: process-query]
            │   ├── sub_1407A3C60 @ ?                   [C; send quit signal]
            │   ├── sub_14108D4A0(0, 50_000_000) @ ?    [D; nanosleep 50ms; LEAF: platform-sleep]
            │   └── quit_codex_fallback_kill_sys_111 @ 0x1407A44D0  [C; LEAF: force kill]
            └── sub_1401BF770 @ ?                       [C; restore auth (disable path); LEAF: auth-op]
```

## 深度统计

| 深度 | 函数数 | 备注 |
|---|---|---|
| 1 | 1 | dispatch_hub |
| 2 | 4 | param extractors + vtable dispatch |
| 3 | 1 | task_runner |
| 4 | 1 | core_sys (MAIN) |
| 5 | 8 | get_providers_vec, persist, 140514170, 1407169C0, 1400397C0, post_sync, rollback, quit_poll |
| 6 | 16+ | JSON/fs/lock/alloc 叶 |

终止原因：`LEAF: platform-primitive / WIN-fs / stdlib-alloc / panic / runtime-internal / infra`
