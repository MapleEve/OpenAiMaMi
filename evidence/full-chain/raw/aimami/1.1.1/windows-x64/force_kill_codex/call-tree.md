# force_kill_codex — Call Tree (1.1.1 Windows x64)

**Session**: wf-aimami111-delta-20260618-finish

```
[force_kill_codex — internal, no IPC string]
│
├── quit_codex_poll_wait_sys_111 @ 0x1407A39B0
│   └── quit_codex_taskkill_imagename_sys_111 @ 0x14079FF10
│       ├── sub_1410828F0 [OsString builder: "taskkill"]
│       ├── sub_1410827D0 [arg: "/IM"]
│       ├── sub_1410827D0 [arg: "Codex.exe"]
│       └── sub_1410878D0 [process::Command::spawn]
│
├── quit_codex_send_signal_wakebya_sys_111 @ 0x1407A3C60
│   └── WakeByAddressSingle / _InterlockedCompareExchange8 [Windows futex signal]
│
└── quit_codex_fallback_kill_sys_111 @ 0x1407A44D0
    ├── sub_141077C40 [get timestamp]
    ├── sub_141097540 [deadline = now + 3s]
    ├── [loop]
    │   ├── get_codex_pids_toolhelp_sys_111 @ 0x1407A3090
    │   │   └── CreateToolhelp32Snapshot + Process32FirstW/NextW [Win32]
    │   ├── [per-PID loop]
    │   │   ├── sub_1410828F0 [OsString "taskkill"]
    │   │   ├── sub_1410A7B20 [pid → decimal string]
    │   │   ├── sub_1410827D0 ["/F"]
    │   │   ├── sub_1410827D0 ["/T"]
    │   │   ├── sub_1410827D0 ["/PID"]
    │   │   ├── sub_1410827D0 [<pid_str>]
    │   │   └── sub_1410878D0 [spawn taskkill /F /T /PID]
    │   └── sub_14108D4A0 [sleep 300ms]
    └── [on timeout] format "\\CODEX_FORCE_KILL_FAILED: <pids>" @ 0x1412F444A
```

**Depth**: 4 layers
**Terminal leaves**: Win32 ToolHelp32 + CreateProcess + WakeByAddressSingle
