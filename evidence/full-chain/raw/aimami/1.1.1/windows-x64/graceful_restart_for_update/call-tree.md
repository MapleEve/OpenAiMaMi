# graceful_restart_for_update — Call Tree (Windows x64)
<!-- session=<审计会话> gate_tier=gold prior=<审计会话> -->

```
tauri_ipc_main_dispatcher_sys @ 0x14000D2A0                            [L0]
└── graceful_restart_for_update_owner_sys @ 0x14001AE30  [IPC owner, no-args]  [L1]
    ├── sub_141212FB0 @ 0x141212FB0                   [AVX2 memcpy — noise]
    ├── restart_codex_quit_launch_coordinator_sys_111 @ 0x1407838D0            [L2]
    │   ├── quit_codex_poll_wait_sys_111 @ 0x1407A39B0                         [L3a]
    │   │   ├── is_process_running_toolhelp_sys_111 @ 0x140504DA0  [ToolHelp32 "Codex"]
    │   │   ├── quit_codex_send_signal_wakebya_sys_111 @ 0x1407A3C60  [WakeByAddressSingle]
    │   │   ├── quit_codex_taskkill_imagename_sys_111 @ 0x14079FF10  [taskkill /IM Codex.exe]
    │   │   ├── sub_14108D4A0 @ 0x14108D4A0           [nanosleep 50ms — noise]
    │   │   └── quit_codex_fallback_kill_sys_111 @ 0x1407A44D0  [LEAF depth=4]  [L4]
    │   │       ├── get_codex_pids_toolhelp_sys_111 @ 0x1407A3090  [LEAF depth=5]  [L5]
    │   │       │   ├── CreateToolhelp32Snapshot @ 0x14124D068  [import: OS kernel]
    │   │       │   ├── Process32FirstW @ 0x14124D070           [import: OS kernel]
    │   │       │   ├── Process32NextW @ 0x14124D080            [import: OS kernel]
    │   │       │   ├── CloseHandle @ 0x14124D788               [import: OS kernel]
    │   │       │   └── GetCurrentProcessId @ 0x14108B3B0       [import: OS kernel]
    │   │       ├── sub_1410A7B20 @ 0x1410A7B20        [itoa base-10: format PID]
    │   │       ├── sub_1410878D0 @ 0x1410878D0        [CreateProcessW: taskkill /F /T /PID]
    │   │       ├── sub_14108D4A0 @ 0x14108D4A0        [nanosleep 300ms — noise]
    │   │       └── sub_1410A1DF0 @ 0x1410A1DF0        [format error string from stderr]
    │   └── check_update_installability_launch_sys_111 @ 0x1407A02E0  [LEAF depth=3]  [L3b]
    │       ├── sub_141089D90 @ 0x141089D90            [GetFileAttributesW: 10-path scan]
    │       ├── sub_1410878D0 @ 0x1410878D0            [CreateProcessW: reg query App Paths x2]
    │       ├── sub_1410828F0 @ 0x1410828F0            [cmd builder init]
    │       ├── sub_1410827D0 @ 0x1410827D0            [cmd builder push arg]
    │       ├── sub_141087850 @ 0x141087850            [CreateProcessW: reg query Uninstall x2]
    │       ├── sub_1410A1DF0 @ 0x1410A1DF0            [format powershell -Command string]
    │       ├── sub_1410878D0                          [CreateProcessW: where Codex.exe]
    │       ├── sub_1410878D0                          [CreateProcessW: where Codex]
    │       ├── sub_1410878D0                          [CreateProcessW: powershell x2 (Uninstall query)]
    │       ├── sub_1407B2210 @ 0x1407B2210            [build launch powershell -WindowStyle Hidden cmd]
    │       ├── sub_141087850                          [CreateProcessW: Codex.exe direct launch]
    │       ├── CloseHandle (x4)                       [stdin/stdout/stderr/process handles]
    │       ├── is_process_running_toolhelp_sys_111    [poll @80ms up to 5s]
    │       └── sub_14108D4A0                          [nanosleep 80ms — noise]
    ├── sub_140832560 @ 0x140832560                    [IPC response sender → sub_14080C3C0]
    └── sub_140042650 @ 0x140042650                    [Arc drop + cleanup]
```

## Depth Accounting

| Layer | Function | Depth | Terminated | Terminated Reason |
|---|---|---|---|---|
| L0 | tauri_ipc_main_dispatcher_sys | 0 | no | — |
| L1 | graceful_restart_for_update_owner_sys | 1 | no | — |
| L2 | restart_codex_quit_launch_coordinator_sys_111 | 2 | no | — |
| L3a | quit_codex_poll_wait_sys_111 | 3 | no | — |
| L3b | check_update_installability_launch_sys_111 | 3 | **yes** | Codex.exe not found / Codex appeared / 5s exhausted |
| L4 | quit_codex_fallback_kill_sys_111 | 4 | **yes** | No Codex PIDs OR 3s deadline exceeded |
| L5 | get_codex_pids_toolhelp_sys_111 | 5 | **yes** | OS imports (CreateToolhelp32Snapshot / Process32NextW) |

**Max depth = 5** (OS platform primitives). All branches terminated with explicit reason.

## Noise Filters Applied

- sub_141212FB0 (AVX2 memcpy): compiler intrinsic, excluded from delta
- sub_14108D4A0 (nanosleep): stdlib, excluded
- sub_140001370 / sub_140001360 (alloc/dealloc): stdlib
- sub_14124BCCB (OOM handler): panic path
- WakeByAddressSingle/WakeByAddressAll: kernel32 import, not new callee
