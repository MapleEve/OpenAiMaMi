# Interface / DTO — get_relay_proxy_status (AiMaMi 1.1.1 macOS ARM64)

## Request

**argKeys**: [] (no parameters)
**Frontend wrapper**: `getProxyStatus: () => vt("get_relay_proxy_status")`
**Frontend location**: `assets/index-DdcCOEJG.js` line 86 col 120600

## Response (ProxyStatus struct)

Returned via `CoreEnvelope<ProxyStatus>` (discriminant=`0x8000000000000000` = Ok).

| Field | Type | Output Offset | Notes |
|-------|------|--------------|-------|
| `active` | bool | a1+74 (byte) | 1=proxy running, 0=not |
| `port` | u16 | a1+72 | raw port number |
| `hostStr` | String | a1+0..+16 | **1.1.1: "http://127.0.0.1:\<PORT\>/codex/v1"** (was "127.0.0.1:\<PORT\>" in 1.0.9) |
| `portStr` | String | a1+24..+40 | **1.1.1: "http://127.0.0.1:\<PORT\>"** (was "\<PORT\>" bare port string in 1.0.9) |
| `proxyAddr` | Option\<String\> | a1+48 | 0x8000000000000000 = None; always None in observed code |

## 1.1.1 Delta vs 1.0.9

| Field | 1.0.9 | 1.1.1 |
|-------|-------|-------|
| hostStr | "127.0.0.1:\<PORT\>" | "http://127.0.0.1:\<PORT\>/codex/v1" |
| portStr | "\<PORT\>" (bare u16) | "http://127.0.0.1:\<PORT\>" |
| struct layout | identical | identical |
| proxy_running check | a2+32 != 0 | a2+32 != 0 (identical) |
| port read offset | a2+40 (u16) | a2+40 (u16) (identical) |

**Format templates (byte-confirmed)**:
- `anon_b8f787c8f2c69d9b4bd113d6433b9ddb_265` @`0x1010bb1d4`: prefix "http://127.0.0.1:" (17B) + u16 port + suffix "/codex/v1" (9B)
- `anon_b8f787c8f2c69d9b4bd113d6433b9ddb_267` @`0x1010bb1f2`: prefix "http://127.0.0.1:" (17B) + u16 port (no suffix)

## Side Effects

None. Pure read under Mutex. No file I/O, no HTTP, no keychain, no sidecar.

## Error Paths

| Condition | Behaviour |
|-----------|-----------|
| Mutex poisoned (panic_count != 0) | active=false, port=0, all strings empty, None |
| OOM during format_inner | alloc::raw_vec::handle_error → abort |
| StateManager returns null | return_result error envelope via InvokeResolver |
