# Interface — test_relay_provider_stream (Windows x64, AiMaMi 1.1.1)

session: <审计会话>
machine: <本地机器>
date: 2026-06-16

## IPC Parameters

| param | type | bytes | string pool VA | source |
|---|---|---|---|---|
| manager | String | 7 | 0x1412fa999 | string pool raw bytes |
| providerId | String | 10 | 0x1412fa9a0 | string pool raw bytes |
| model | String | 5 | 0x1412fab69 | string pool (adjacent to cmd string) |
| onEvent | Handler/Channel | — | — | callee signature: relay_draft_stream_sse_executor_sys |

## Parameter Evidence

- `manager` (7B): bytes at 0x1412fa999 = 6d 61 6e 61 67 65 72 = "manager"
- `providerId` (10B): bytes at 0x1412fa9a0 = 70 72 6f 76 69 64 65 72 49 64 = "providerId"
- `model` (5B): bytes at 0x1412fab69 = 6d 6f 64 65 6c = "model" (adjacent to "test_relay_provider_stream" at 0x1412fab64)
- Cross-validated against 1.0.9 frontend CCF: test_relay_provider argKeys=[manager, providerId] (non-stream version); stream version adds model

## Response / Event Envelope

SSE streaming response via onEvent handler:

```json
{
  "schemaVersion": "<version>",
  "success": true|false,
  "code": <int>,
  "message": "<string>",
  "warnings": [...],
  "data": { ... }
}
```

Built by relay_event_payload_builder_sys @ 0x140229AF0.

## Error Envelope

| error_code | meaning |
|---|---|
| 0x8000000000000000 | provider not in quota state (quota miss) |
| 0x8000000000000007 | no API key in keychain |
| 9 (relay config) | IoError persisting relay.json |
| 2 (relay config) | serialize error |

## Side Effects

**UNIQUE side effect vs test_relay_draft_stream:**
After stream completes, `relay_providers_config_write_and_persist_sys` (0x1406E6960) atomically writes updated relay.json to disk. This persists:
- schemaVersion
- providers (including updated quality score from relay_provider_score_update_sys)
- activeByIde
- proxy settings
- codexRouterEnabled
- codexApiLogin / codexApiSlots
- displayTagGlobal / displayTagWoyao

Provider quality score updated based on stream latency:
- <200ms → score=100
- 200-599ms → score=70
- 600-1499ms → score=40
- >=1500ms → score=20

## WIN vs MAC Differences (Known)

| aspect | WIN | MAC |
|---|---|---|
| atomic lock primitive | _InterlockedCompareExchange8 + WakeByAddressSingle | parking_lot |
| atomic write temp file | GetCurrentProcessId + CreateFile/WriteFile/CloseHandle | POSIX rename pattern |
| error on missing parent | "atomic write: missing parent" (explicit error string) | unknown |
| quota Vec stride | 232B | verify separately |

Note: test_relay_provider_stream config write-back behavior must be verified on mac side independently; do not assume identical side-effect trigger.
