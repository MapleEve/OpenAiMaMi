# evidence.md — test_api_proxy_config
# AiMaMi 1.1.1 macOS arm64
# delta_class: integrity_recovered
# session: wf-aimami111-delta-20260617-sweep
# date: 2026-06-17

## Status

delta_class = integrity_recovered
Previously mis-classified as same-sweep (no change). Confirmed real delta after full decompile.

---

## Owner VA

| Symbol | VA | Size |
|--------|-----|------|
| Tauri dispatch closure | 0x100131F30 | 0x193 |
| BlockingTask::poll (async fn body) | 0x100598740 | 0x3BE |
| load_api_request_context_from_repo | 0x10061D900 | ~0x1E0 |
| test_api_connectivity | 0x1006E5290 | 0xDC2 |
| sanitize_proxy_config | 0x1006E4D80 | 0x4F2 |
| http_client (CLIENT builder/cache) | 0x1006E3670 | ~0xD70 |
| detect_api_proxy_config (NEW) | 0x1006E5A60 | 0xDC2 |
| set_api_proxy_config | 0x100619780 | 0x34D |
| Repository::set_api_proxy_config | 0x1004C6F40 | 0x2C3 |

---

## IPC Contract

```
command: "test_api_proxy_config"
params:  { url: String }
returns: CoreEnvelope<ApiConnectivityResult>

ApiConnectivityResult {
  code: "ok" | "network_error" | "invalid_config" | "client_build_failed"
  success: bool                    // +0x30 byte: 0=false, 1=true
  http_status: u16                 // +0x34 dword (low u16 used)
  message: String                  // +0x18..+0x28 (ptr+len+cap)
  connection_mode: String          // +0x08..+0x10 (ptr+len) — "direct connection" or proxy label
}
```

---

## Delta vs 1.0.9 — App-level changes (not compiler noise)

### 1. NEW companion command: detect_api_proxy_config (0x1006E5A60)

Not present in 1.0.9. Performs auto-detection of proxy candidates:
- Reads macOS system proxy via `scutil --proxy` subprocess
- Reads env vars: `HTTPS_PROXY`, `HTTP_PROXY`, `ALL_PROXY`, `https_proxy`, `http_proxy`, `all_proxy`
- Probes hardcoded local port list (14 entries: 7890, 7891, 10808, 10809, 8080, 1080, 7893, 20171, 9090)
  via `TcpStream::connect_timeout` (socket probe only, no HTTP)
- Returns `ApiProxyDetectPayload` (struct with `CoreEnvelope<...>` wrapper)

### 2. NEW callee chain in test_api_proxy_config: load_api_request_context_from_repo

In 1.0.9, `test_api_proxy_config` likely took the url string directly and tested without auth context.
In 1.1.1, it now:
- Loads `ProxyConfigState` from Tauri StateManager
- Reads auth file from disk (`std::fs::read_to_string` + `serde_json::from_str`)
- Calls `make_api_request_context` which decodes JWT claims to extract auth token
- Passes `Option<auth_token>` into `test_api_connectivity`

This means the connectivity test now optionally sends a Bearer auth header (when token is available), validating
whether the proxy + auth together can reach the API endpoint.

### 3. NEW: auth header injection in test_api_connectivity

If `auth_token` is `Some(token)`:
- Formats `"Bearer {token}"` via `format_inner`
- Calls `RequestBuilder::header_sensitive` twice (two auth headers)
Present: 0x1006E53C9 ff.

### 4. NEW: cached Arc<reqwest::blocking::Client> (http_client fn)

`http_client` (0x1006E3670) is a new function in 1.1.1 that:
- Keeps a module-level `OnceLock<CLIENT>` + `Mutex` + cached Arc<Client>
- Cache key = (proxy_url, proxy_mode_byte, auth_flag)
- On cache hit: Arc::clone (InterlockedIncrement64)
- On cache miss: builds new reqwest::blocking::Client with proxy, stores in globals
- Cache eviction: decrements old Arc (InterlockedDecrement + drop_slow)

In 1.0.9 the client was likely built fresh each call or not cached.

### 5. NEW: set_api_proxy_config command (0x100619780)

Separate write command not present in 1.0.9. Validates proxy config via `sanitize_proxy_config`,
then calls `Repository::set_api_proxy_config` → `load_settings` + `save_settings` (disk persistence).

### 6. Error code strings (confirmed present as string literals)

| code | len | meaning |
|------|-----|---------|
| `"network_error"` | 13 | reqwest send failed |
| `"invalid_config"` | 14 | sanitize_proxy_config returned non-10 discriminant |
| `"client_build_failed"` | 19 | reqwest ClientBuilder::build failed |
| `"Manual proxy mode requires a proxy URL"` | 38 | url field empty in Manual mode |

### 7. NOT delta (compiler noise filtered)

- Mutex poison-guard / GLOBAL_PANIC_COUNT / is_zero_slow_path — all standard Rust panic guard
- sub_/anon_<hash> vtable renames — address/hash changes only
- rust_alloc size changes — layout optimization noise
- OnceLock initialization wrappers — stdlib plumbing

---

## Side Effects

| Effect | Detail |
|--------|--------|
| Disk read | `load_auth_file`: reads auth JSON file from path stored in ProxyConfigState |
| Network I/O | `reqwest::blocking::RequestBuilder::send` — blocking HTTP to test URL |
| Network I/O | `detect_system_proxy_candidates`: spawns `scutil --proxy` subprocess |
| Network I/O | `try_connect_local_proxy`: `TcpStream::connect_timeout` to up to 20 local addresses |
| Global write | `http_client` writes cached Arc<Client> to module globals (0x101442DF0/DF8/E00) |
| Disk write | `Repository::save_settings` (set_api_proxy_config path only) |

---

## String evidence (逆向分析 string table 0x1010E7311)

Confirmed IPC command names in Tauri dispatch string pool:
- `test_api_proxy_config` with param `url`
- `detect_api_proxy_config` (new)
- `set_api_proxy_config` (new)

String at 0x10115799C confirms hardcoded local proxy probe list (24 URLs).
String "No reachable proxy configuration was detected from environment variables, system proxy, PAC, or common local addresses" present at 0x1011579F1 — error message for detect_api_proxy_config.

---

## IDB evidence written

Comments appended at all 6 function VAs. IDB saved:
  <来源位置>/raw/binary/AiMaMi-1.1.1-idb
