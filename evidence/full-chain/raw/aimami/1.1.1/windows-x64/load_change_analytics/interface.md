# load_change_analytics — IPC Interface (Windows x64)
# session: <审计会话>

## IPC Registration
- Command string: `"load_change_analytics"` (len=21) @ 0x1412ac44e
- Dispatcher: `tauri_ipc_main_dispatcher_sys` @ 0x14000D2A0
- Owner VA: 0x140016C70 (sub_140016C70)

## Request Parameters
| Key | Type | Source | Notes |
|---|---|---|---|
| `repo` | string | IPC payload | skills store repo identifier; validated via query_installed_skills_with_repo_111 |
| `range` | string | IPC payload | analytics time range; parsed by remove_skill_parse_id_param_111 |

## Response
- Builder: `sub_140834FC0` @ 0x140834FC0 (change analytics response builder)
- Error path: `has_notch_invoke_resolver_respond` @ 0x14080C3C0
- Format: JSON (standard relay response envelope)

## Side Effects
- None (read-only analytics query)
- Data access: quota history spinlock → deep-copy → range filter
- No file write (read-only like session/tool analytics)

## Delta vs 1.0.9
- NEW_IN_1.1.1: command did not exist in 1.0.9
- L1 guard: pending_auto_switch mutex (0x14006EDC0) — new in 1.1.1
- L1 gate: skills repo validation (0x141214620) — new in 1.1.1
- L3 data: sub_1401CAD70 change range filter — new
- Range matcher: sub_140204660 (distinct from session/token/tool)
- Response ctor: sub_1402171C0 (distinct from session/tool; uses sub_1402168D0)
