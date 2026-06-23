# load_session_analytics — IPC Interface (Windows x64)
# session: <审计会话>

## IPC Registration
- Command string: `"load_session_analytics"` (len=22) @ 0x1412ac411
- Dispatcher: `tauri_ipc_main_dispatcher_sys` @ 0x14000D2A0
- Owner VA: 0x140026BD0 (load_session_analytics_impl_111 — already named in IDB)

## Request Parameters
| Key | Type | Source | Notes |
|---|---|---|---|
| `repo` | string | IPC payload | skills store repo identifier |
| `range` | string | IPC payload | analytics time range |

## Response
- Builder: `analytics_response_builder_111` @ 0x140838B40
- Error path: `has_notch_invoke_resolver_respond` @ 0x14080C3C0
- Format: JSON (standard relay response envelope)

## Side Effects
- None (read-only analytics query)
- Data access: quota history spinlock → deep-copy → session range filter

## Delta vs 1.0.9
- NEW_IN_1.1.1: command did not exist in 1.0.9
- L1 guard: pending_auto_switch mutex (0x14006EDC0) — new in 1.1.1
- L1 gate: skills repo validation (0x141214620) — new in 1.1.1
- L3 data: session_range_filter_111 (0x1401CB3A0) with sub_140204F00 range matcher
- Response ctor: sub_1402168D0 (shared with tool analytics)
