# set_relay_display_tags — Owner Table (windows-x64, AiMaMi 1.1.1)

**Session**: <审计会话> | **Machine**: <本地机器> | **Date**: 2026-06-16
**Binary**: AiMaMi 1.1.1 win64.exe | **SHA256**: d24e429ab16a9b683c1c23212555c7d1d59a3e2e6ee24a9f3a16acd7f8231610
**IDB**: <本地路径>| **逆向分析 server**: <逆向工具通道> (<内部网络>)
**IDA decompiler_ready**: true | **uptime_sec**: 22423 | **module match**: AiMaMi 1.1.1 win64.exe ✓

## Owner VA

| Symbol | VA | Size | IDB Name (post-rename) |
|---|---|---|---|
| owner/handler | `0x14001F080` | 1518B (0x5EE) | `set_relay_display_tags_owner_sys` |
| core dispatch | `0x14021B780` | ~408B | `set_relay_display_tags_core_dispatch_sys` |
| write+sync | `0x1406D71D0` | ~1318B | `set_relay_display_tags_write_and_sync_sys` |

## String Locator

- `"set_relay_display_tags"` @ `0x1412ac5c5` (22B)
- Single xref → `0x14001f102` in `set_relay_display_tags_owner_sys`
- Dispatcher confirmation: callers = [`tauri_ipc_main_dispatcher_sys`] (IPC routing confirmed)

## Parameters (3 fields)

| Key | Key len | Type | Notes |
|---|---|---|---|
| `manager` | 7B | `String` | Required. Provider/manager identifier. Extracted by `sub_14006F4B0` (param extractor, shared). |
| `global` | 6B | `Option<String>` | Optional. Global display tag override. Parsed by `sub_1402FED40` (Option<String> parser). Returns tag=6 on Some, tag=3 on None. |
| `woyao` | 5B | `Option<String>` | Optional. "woyao" display tag. Same parser `sub_1402FED40`. |

- String keys confirmed via refs in owner body: `aManager@0x1412ac6c0`, `aGlobal@0x1412ac772`, `aWoyao@0x1412ac778`
- `global` key length = 6B (confirmed from `v27.m256i_i64[2] = 6`)
- `woyao` key length = 5B (confirmed from `v27.m256i_i64[2] = 5`)
- `manager` key length = 7B (confirmed from `v27.m256i_i64[2] = 7`)

## Response

- On success: `"ok"` (2B) — built by `set_codex_api_slots_ok_response_build_sys@0x140216BA0` (shared with set_codex_api_slots)
- On param parse error: IPC error response via `sub_14080C3C0` (IPC resolver leaf, shared)

## Xref Summary

- String xref: 1 (single, confirmed canonical)
- Owner callers: `tauri_ipc_main_dispatcher_sys` (1 caller)
- Data refs: `0x1414fcc3c` (vtable/dispatch table entry), `0x14189e6a4` (startup registration table)
