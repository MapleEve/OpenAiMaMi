# Interface: detect_api_proxy_config (1.1.1 macOS ARM64)

## IPC Registration

- **Command name**: `detect_api_proxy_config`
- **IPC string blob VA**: `0x1010e7311` (within IPC command registration blob)
- **Dispatch closure**: `tauri::ipc::InvokeResolver::respond_async_serialized_inner::{{closure}}` @ `0x1001234d0`
- **Execution model**: `spawn_blocking` — runs on Tokio blocking thread pool (not async executor)
- **Frontend callee**: `ne` (aliased invoke wrapper in minified bundle)
- **Frontend snippet**: `()=>ne("detect_api_proxy_config")` — zero-argument invocation
- **Frontend file**: `assets/index-DdcCOEJG.js` line 86, col ~25489

## Request DTO

```
argKeys: []          // No arguments — zero-parameter command
argObject: null
params: "()"
```

The command takes no frontend arguments. Auth context is loaded internally from AppState.

## Response DTO

Return type: `CoreEnvelope<ApiProxyDetectPayload>`

### Success (proxy found) — `*((_WORD*)result + 44) = 0x101`

```rust
ApiProxyDetectPayload {
    // Discriminant fields (from *((_WORD*)result + 44)):
    found: bool,         // true = 0x01 byte
    is_local: bool,      // true = 0x01 byte (127.0.0.1 or localhost)

    // Error info (not_found path):
    error_code: String,  // "not_found" (9B) — only set when found=false
    error_msg:  String,  // 118B not-found message — only set when found=false

    // Proxy info (found path):
    url:        String,  // full proxy URL (e.g. "http://127.0.0.1:7890")
    label:      String,  // env-var label or "direct connection" (17B)
    port:       u16,     // parsed port from URL or default_port()

    // Connectivity test result:
    proxy_type: String,  // "direct connection" or proxy label
    test_port:  u16,     // port from connectivity test response
}
```

### Not-found path — `*((_WORD*)result + 44) = 0x200`

```
error_code: "not_found"  (9B, allocated)
error_msg:  "No reachable proxy configuration was detected from environment
             variables, system proxy, PAC, or common local addresses"
             (0x76 = 118 bytes)
```

Note: not-found is returned as `CoreEnvelope::Ok(payload)` — NOT as an error.
The `found` field distinguishes the two paths.

## Side Effects (ordered)

1. Acquire no AppState mutex directly (load_auth_file acquires its own StateManager lock)
2. `StateManager::try_get` reads Tauri AppState (read-only)
3. `Mutex::lock` on auth state mutex
4. `load_auth_file` — reads auth token file from disk (fs_read_leaf)
5. `make_api_request_context` — builds ApiRequestContext (in-memory only)
6. `Mutex::unlock` auth state mutex
7. Build static candidate list from 6 env-var labels (stack-allocated Vec)
8. `detect_system_proxy_candidates` — reads env vars + spawns `networksetup` CLI process + optional reqwest HTTP probe
9. `extend_trusted` — merges platform candidates into static list
10. `HashMap::insert` deduplication loop — removes duplicate URLs
11. Per-candidate: `url::ParseOptions::parse` + `Url::host_str`
12. Per local candidate: `TcpStream::connect_timeout(200ms)` — TCP probe
13. Per candidate: `test_api_connectivity` — builds/caches reqwest client + HTTP GET to `https://chatgpt.com/backend-api/accounts/check/v4-2023-04-27`
14. First successful candidate breaks loop
15. `CoreEnvelope::ok` wraps result

**Persistent side effects**: None beyond spawning a subprocess (networksetup) and TCP/HTTP probes. No file writes. No AppState mutation.

## Fake-Wall Check

- `genuine_ceiling`: false
- `recovery_attempts`: not_needed
- **Async body**: The command IS async (spawn_blocking via BlockingTask::poll at 0x1005977a0) but the blocking closure body at 0x1005977a0 was successfully decompiled — not a drop shim, it is the real execution body.
- **No vtable dispatch**: All calls are direct
- **No HTTP-terminal blocking**: http_client and test_api_connectivity fully decompiled to leaf
- **No wrong VA**: Owner confirmed via BlockingTask drop shim symbol analysis and func_query
- **Super-large body**: detect_system_proxy_candidates is 0x1dda bytes; decompiled successfully without basic_blocks split

## Candidate URL List (static + common local addresses)

Static env-var candidates (ordered, priority-first):
1. `$https_proxy` / `$HTTPS_PROXY`
2. `$http_proxy` / `$HTTP_PROXY`
3. `$all_proxy` / `$ALL_PROXY`

Common local fallback addresses (from data @ 0x1011579f1, tested if no env/system proxy found):
```
http://127.0.0.1:7890   http://localhost:7890
socks5://127.0.0.1:7891 socks5://localhost:7891
http://127.0.0.1:7892   http://localhost:7892
socks5://127.0.0.1:10808 socks5://localhost:10808
http://127.0.0.1:10809  http://localhost:10809
http://127.0.0.1:8080   http://localhost:8080
socks5://127.0.0.1:1080 socks5://localhost:1080
http://127.0.0.1:7893   http://localhost:7893
http://127.0.0.1:20171  http://localhost:20171
http://127.0.0.1:9090   http://localhost:9090
```

## Connectivity Test Target

URL: `https://chatgpt.com/backend-api/accounts/check/v4-2023-04-27`
(confirmed from sanitize_proxy_config switch table @ 0x10115799c)

## Error Strings / Error Codes

| Code | Length | String | Source |
|------|--------|--------|--------|
| `not_found` | 9B | "not_found" | payload.error_code when no proxy detected |
| `network_error` | 13B | "network_error" | reqwest send error in test_api_connectivity |
| `client_build_failed` | 19B | "client_build_failed" | reqwest ClientBuilder::build() error |
| `invalid_config` | 14B | "invalid_config" | sanitize_proxy_config scheme validation failure |
| `failed to lock API client cache` | 31B | mutex poisoned in http_client | |
| `Manual proxy mode requires a proxy URL` | 38B | empty proxy URL in sanitize_proxy_config | |

## Validated Proxy Schemes

From `sanitize_proxy_config` switch table (byte-length cases 4/5/6/7):
- `http` (4B)
- `https` (5B)
- `socks5` (6B)
- `socks5h` (7B)

## Unknown / Accepted Unknown

| Item | Category | Notes |
|------|----------|-------|
| `detect_system_proxy_candidates` exact CLI args for networksetup | accepted_unknown | Strings at unk_10115B64D/unk_10115B653 not extracted (data regions, not string pool) |
| `ApiProxyDetectPayload` full serde field names | accepted_unknown | Serde derive — field names not visible in decompile |
| `push_url` VA 0x100788b10 body | accepted_unknown | leaf_named; role clear from context |
| `dedupe` VA 0x100788700 body | accepted_unknown | leaf_named; role clear from context |
| `make_api_request_context` body (0x10053e690) | accepted_unknown | leaf_named_not_decompiled; consistent with 1.0.9 accepted_unknown |
| HTTP probe PAC behavior in platform::proxy | accepted_unknown | reqwest HTTP call pattern confirmed but exact PAC parsing logic not decompiled |
| Windows platform behavior | Unknown | Windows artifact required; macOS evidence not extrapolatable |
| dim6 test/acceptance mapping | Unknown | 内部构建 implementation side |

## Delta vs 1.0.9

**delta_status**: `diff_reversed` (new command, not present in 1.0.9 macOS with same module path)

1.0.9 had `relay_proxy_config` (in relay-core module) — a different command for relay proxy configuration.
`detect_api_proxy_config` is a 1.1.1 addition in the `system` module.

Key 1.1.1 additions confirmed:
- New `commands::system` placement (not relay module)
- `ApiProxyDetectPayload` return type (new struct)
- `detect_system_proxy_candidates` platform impl with networksetup + reqwest HTTP probe
- 20 common local address fallback candidates
- TCP 200ms pre-probe for local addresses before HTTP test
- Static HTTP client cache (`CLIENT` OnceLock at 0x101442DB8)
- `chatgpt.com` check URL as connectivity probe target

## Four-Angle Completeness

- **A (func_query symbol enum)**: `.*detect_api_proxy_config.*` → 9 hits; `.*detect.*proxy.*` → 10 hits. Core impl 0x1006e5a60 + platform impl 0x100786860 uniquely identified. Drop shims confirm `commands::system` namespace and `ApiProxyDetectPayload` return type. PASS
- **B (string pool IPC)**: `detect_api_proxy_config` found at 0x1010e7311 in IPC registration blob; dispatch closure at 0x1001234d0 confirmed. PASS
- **C (frontend IPC)**: ipc-contracts.jsonl (1.1.1 macos-arm64) → `argKeys=[]`, `callee="ne"`, `command="detect_api_proxy_config"`. PASS
- **D (owner-map + INDEX)**: owner-map-111.jsonl status=shared/not_yet_queried → now DONE; INDEX has 0 prior 1.1.1/macos-arm64/system/detect_api_proxy_config entries; ADDITIVE, no collision. PASS
