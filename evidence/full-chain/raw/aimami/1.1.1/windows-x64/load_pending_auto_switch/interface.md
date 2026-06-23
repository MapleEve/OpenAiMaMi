# load_pending_auto_switch — IPC Interface (Windows x64)
# session: wf-aimami111-win-samedepth-patch-20260619

## IPC Registration
- Command string: `"load_pending_auto_switch"` (len=24) @ 0x1412ac2c3
- Dispatcher: `tauri_ipc_main_dispatcher_sys` @ 0x14000D2A0
- Case ref: @ 0x14000fc8d (inline in dispatcher, no dedicated handler function)

## IMPORTANT: Handler Pattern
Unlike most IPC commands, `load_pending_auto_switch` is handled **inline** in the dispatcher's
41-case string-length switch (0x14000D2F2). There is no dedicated named handler function.

## Request Parameters
| Key | Type | Source | Notes |
|---|---|---|---|
| `repo` | string | IPC payload | skills store repo; NEW validation in 1.1.1 |

## Response
- Path: `has_notch_invoke_resolver_respond` @ 0x14080C3C0
- Format: JSON; pending auto-switch state payload
- State: file-backed state (1.1.1); was SQLite in 1.0.9

## Storage Backend Change (CRITICAL)
| | 1.0.9 | 1.1.1 |
|---|---|---|
| Storage | SQLite database | Filesystem (CreateFileW) |
| Lock primitive | SQLite mutex | _InterlockedCompareExchange8 spinlock |
| Lock function | (unnamed SQLite getter) | pending_auto_switch_state_lock_acquire_111 @ 0x14006EDC0 |
| State read | SQLite SELECT | Spinlock → vtable dispatch → file read |

## Side Effects
- Read-only from caller perspective
- Acquires spinlock (pending_auto_switch_state_lock_acquire_111) — may block other callers

## Delta vs 1.0.9
- **BODY_CHANGED** (storage backend changed SQLite → filesystem, L3)
- **L1 NEW**: pending_auto_switch_state_lock_acquire_111 mutex guard (auto-switch mutex guard)
- **L1 NEW**: query_installed_skills_with_repo_111 skills repo 校验前置
- **L3 CHANGED**: storage backend SQLite → CreateFileW (filesystem)
- confirm_pending_auto_switch_deserialize_request_sys now file-backed state deserializer

## Sibling Commands
- `dismiss_pending_auto_switch` @ 0x1412ac2db — sibling dismiss handler (0x140029270)
- `confirm_pending_auto_switch` @ 0x1412ac2f6 — sibling confirm handler
- `confirm_pending_auto_switch_and_restart_codex` @ 0x1412ac311 — sibling confirm+restart
