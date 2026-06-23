# load_tool_analytics — IPC Interface (Windows x64)
# session: wf-aimami111-win-samedepth-patch-20260619

## IPC Registration
- Command string: `"load_tool_analytics"` (len=19) @ 0x1412ac43b
- Dispatcher: `tauri_ipc_main_dispatcher_sys` @ 0x14000D2A0
- Owner VA: 0x1400264A0 (sub_1400264A0)

## Request Parameters
| Key | Type | Source | Notes |
|---|---|---|---|
| `repo` | string | IPC payload | skills store repo identifier |
| `range` | string | IPC payload | analytics time range |

## Response
- Builder: `sub_140837390` @ 0x140837390 (tool analytics response builder)
- Error path: `has_notch_invoke_resolver_respond` @ 0x14080C3C0
- Format: JSON (standard relay response envelope)

## Side Effects
- None (read-only analytics query)
- Data access: quota history spinlock → deep-copy → tool range filter

## Delta vs 1.0.9
- NEW_IN_1.1.1: command did not exist in 1.0.9
- L1 guard: pending_auto_switch mutex (0x14006EDC0) — new in 1.1.1
- L1 gate: skills repo validation (0x141214620) — new in 1.1.1
- L3 data: sub_1401C9280 with sub_140203160 tool range matcher
- Response ctor: sub_1402168D0 (shared with session analytics; distinct from change sub_1402171C0)
