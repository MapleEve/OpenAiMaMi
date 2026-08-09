# Owner — test_relay_provider_stream (Windows x64, AiMaMi 1.1.1)

session: <审计会话>
machine: <本地机器>
date: 2026-06-16
platform: windows-x64
binary: AiMaMi 1.1.1 win64.exe (PE stripped)
imagebase: 0x140000000

## Owner VA Table

| role | VA | renamed_to | level | size |
|---|---|---|---|---|
| coroutine_poll (OWNER) | 0x1409C98D0 | test_relay_provider_stream_owner_sys | A | 0x1e09 (7689B) |
| async_wrapper_a | 0x140A81E90 | test_relay_provider_stream_async_spawn_a_sys | B | 0x235 (565B) |
| async_wrapper_b | 0x140AB1E40 | test_relay_provider_stream_async_spawn_b_sys | B | 0x235 (565B) |

## String Locator

| string | VA | evidence |
|---|---|---|
| "test_relay_provider_stream" (26B) | 0x1412fab64 | xref inside owner @0x1409c9995 |
| "manager" (7B) | 0x1412fa999 | param name, string pool |
| "providerId" (10B) | 0x1412fa9a0 | param name, string pool |
| "model" (5B) | 0x1412fab69 | param name, adjacent to cmd string |

## Callers / Vtable

| type | VA | description |
|---|---|---|
| code caller | 0x140A81E90 | test_relay_provider_stream_async_spawn_a_sys calls owner at v15+56 |
| code caller | 0x140AB1E40 | test_relay_provider_stream_async_spawn_b_sys calls owner |
| data xref (vtable) | 0x1416ee558 | Future::poll vtable entry |
| data xref (vtable) | 0x141919b84 | Future::poll vtable entry |

## Coroutine Structure

WIN PE stripped binary. No Rust symbol names preserved. Owner function is the Rust async Future::poll coroutine body identified by:

1. String xref: "test_relay_provider_stream" string at 0x1412fab64 has code xref at 0x1409c9995 inside sub_1409C98D0 (now renamed).
2. Callers are two identical 565B async wrapper functions that set up vtable + call owner at coroutine frame offset +56 — standard Rust tokio spawn pattern.
3. Vtable data xrefs at 0x1416ee558 and 0x141919b84 point to owner as Future::poll implementation.
4. Callees match sibling command test_relay_draft_stream_owner_sys pattern: quota lookup → SSE executor → event payload builder → config write → cleanup.
5. Size 7689B consistent with complex async state machine (Rust async poll functions expand significantly in optimized x64 PE).

## IDB Write-back Summary

All A/B renames applied 2026-06-16 via <审计会话>. <工具调用> confirmed OK at <本地路径>
