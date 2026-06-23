# graceful_restart_for_update — Interface Contract (Windows x64)
<!-- session=<审计会话> machine=<本地机器> -->

## IPC Contract

| Field | Value |
|---|---|
| Command string | `graceful_restart_for_update` |
| String VA | `0x1412AC294` |
| String xref | `tauri_ipc_main_dispatcher_sys` @ `0x14000D2A0` (block `0x14000F4CE`) |
| Payload | **none** — no-args command; no serde deserialization |
| Dispatcher dispatch | 41-case string-length switch, len=27 (0x1B) matches block `0x14000DD91` |

## dim1 — Frontend CCF

- String `graceful_restart_for_update` found at `0x1412AC294` (single match in IDB).
- Frontend invoke: `invoke("graceful_restart_for_update")` — no args object.
- Dispatcher entry confirmed via xref to string VA → block `0x14000F4CE`.

## dim2 — Arg Keys / Extractor

No argument deserialization. `sub_141212FB0` copies IPC context struct only. No JSON payload keys.

## Response Tags

| Tag byte | Value | Meaning |
|---|---|---|
| `3` | `OkWithString` | Codex relaunched successfully |
| `6` | `Err` | CODEX_APP_QUIT_TIMEOUT (sentinel `0x8000000000000000`) |
| `7` | `Err` | Codex.exe not found (all 10-path + registry + where exhausted) |
| `9` | `Err` | process spawn/launch failure (stderr captured from powershell) |

Response sent via `sub_140832560` @ `0x140832560`.

Tag=6 branch: `v19[0] = 6` → sends error with hardcoded 128-byte buffer, magic `0x6C6C756E` ("null" LE).
Tag=3 branch: result string from coordinator output (launch info).

## dim4 — DTO / Struct Fields

No request DTO. Response is Tauri IPC tagged enum:
- `Ok(String)` → tag 3 + string ptr/len
- `Err(String)` → tag 6/7/9 + error string ptr/len
- Error sentinel: `0x8000000000000000` = CODEX_APP_QUIT_TIMEOUT

## dim5 — Same-Platform Gate

Windows-only command. No cfg(target_os) guard needed at IPC level — command only present in win64 binary. Not found in macOS arm64 sweep (macOS has separate quit mechanism).

## dim3 — Call Tree Summary (see call-tree.md for full tree)

Max depth: **5** (platform primitives). All branches terminated.

| Leaf | Terminated Reason |
|---|---|
| `get_codex_pids_toolhelp_sys_111` | CreateToolhelp32Snapshot returns INVALID_HANDLE or Process32NextW exhausted |
| `quit_codex_fallback_kill_sys_111` | No Codex PIDs remaining OR 3s deadline exceeded |
| `check_update_installability_launch_sys_111` | "Codex.exe not found" OR process appeared in 5s poll OR spawn failed |

## dim6 — Implementation Notes (C5-side)

- C5 consumer must send no args: `invoke("graceful_restart_for_update")`.
- On `Ok` response: Codex has been terminated and relaunched — caller can wait for Codex IPC ready.
- On `Err(tag6)`: Codex process did not exit within 5s; forceful kill also timed out at 3s.
- On `Err(tag7)`: Codex executable not found at any expected path; installation may be corrupt.
- On `Err(tag9)`: process spawn succeeded at OS level but Codex did not appear within 5s poll.
