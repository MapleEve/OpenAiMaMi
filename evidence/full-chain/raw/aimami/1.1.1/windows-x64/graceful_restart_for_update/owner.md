# graceful_restart_for_update — Owner Record (Windows x64)
<!-- session=<审计会话> machine=<本地机器> -->

## Identity

| Field | Value |
|---|---|
| IPC command | `graceful_restart_for_update` |
| Owner function | `graceful_restart_for_update_owner_sys` (renamed from `restart_codex_cmd_wrapper_sys_111`) |
| Owner VA | `0x14001AE30` |
| Owner size | 547 bytes (0x223) |
| IDB name (current) | `graceful_restart_for_update_owner_sys` |
| Session | `<审计会话>` |
| sha ref | `d24e429a` |
| Platform | windows-x64 |
| Module | AiMaMi 1.1.1 win64.exe |
| IDB | `<本地路径>|

## Delta vs 1.0.9

Command `graceful_restart_for_update` does **not exist** in 1.0.9 — entirely new in 1.1.1.
- 1.0.9: no such IPC command.
- 1.1.1: synchronous direct-call wrapper; no coroutine/async state machine.
- Architecture: new synchronous wrapper pattern (vs 1.0.9 graceful_restart_for_update@0x1402A5030 which used async coroutine pattern #wind=16 state-machine). This command in 1.1.1 is a clean synchronous call chain.

## Coordinator

| Function | VA | Role |
|---|---|---|
| `restart_codex_quit_launch_coordinator_sys_111` | `0x1407838D0` | orchestrates quit+launch sequence |
| `quit_codex_poll_wait_sys_111` | `0x1407A39B0` | waits for Codex process to exit (5s) |
| `quit_codex_fallback_kill_sys_111` | `0x1407A44D0` | forced per-PID kill (LEAF, depth=4) |
| `get_codex_pids_toolhelp_sys_111` | `0x1407A3090` | ToolHelp32 PID enumeration (LEAF, depth=5) |
| `check_update_installability_launch_sys_111` | `0x1407A02E0` | 10-path scan + reg + where + launch (LEAF) |

## IDB Annotations Written

- `0x14001AE30` — renamed to `graceful_restart_for_update_owner_sys`; gold-leaf comment set
- `0x1407838D0` — coordinator comment set
- `0x1407A39B0` — quit poll wait comment set
- `0x1407A44D0` — fallback kill leaf comment set
- `0x1407A3090` — ToolHelp32 PID leaf comment set
- IDB saved: `<本地路径>
