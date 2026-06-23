# load_token_analytics — IPC Interface (Windows x64)
# session: <审计会话>

## IPC Registration
- Command string: `"load_token_analytics"` (len=20) @ 0x1412ac427
- Dispatcher: `tauri_ipc_main_dispatcher_sys` @ 0x14000D2A0
- Owner VA: 0x140027A40 (sub_140027A40)

## Request Parameters
| Key | Type | Source | Notes |
|---|---|---|---|
| `repo` | string | IPC payload | skills store repo identifier |
| `range` | string | IPC payload | analytics time range |

## Response
- Builder: `sub_140837DC0` @ 0x140837DC0 (token analytics response builder — distinct)
- Error path: `has_notch_invoke_resolver_respond` @ 0x14080C3C0
- Format: JSON (standard relay response envelope)
- NOTE: Response struct is different from session/change/tool — 168-byte copy (vs 128-byte for others)
  Uses sub_140215050 response constructor (distinct; not sub_1402168D0 or sub_1402171C0)

## Side Effects
- None (read-only analytics query)
- Data access: quota history spinlock → deep-copy → token range filter

## Delta vs 1.0.9
- NEW_IN_1.1.1: command did not exist in 1.0.9
- L1 guard: pending_auto_switch mutex (0x14006EDC0) — new in 1.1.1
- L1 gate: skills repo validation (0x141214620) — new in 1.1.1
- L3 data: sub_1401C98B0 with sub_140203BB0 token range matcher (all distinct)
- Response: sub_140215050 + sub_140837DC0 (distinct from all other analytics)
