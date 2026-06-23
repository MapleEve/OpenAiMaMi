# test_api_proxy_config — Interface / DTO Specification
## AiMaMi 1.1.1 macOS arm64 | module: codexmate_lib::commands::system

---

## IPC Command

**Name**: `test_api_proxy_config`
**Tauri invoke**: frontend calls `invoke("test_api_proxy_config", { url: string | null })`
**Command string index**: shared table at 0x1010E7311; offset within "test_api_proxy_config" = 0 chars

---

## Input DTO

```
Args {
  url: Option<String>   // optional proxy URL to test; None = test direct connection
}
```

Deserialized in IPC closure (0x100131f30) via:
- `<tauri::app::AppHandle as CommandArg>::from_command` — AppHandle extraction
- `<D as CommandArg>::from_command` x2 — "url" field deserialization

---

## Internal Context Type: ApiRequestContext

Constructed by `make_api_request_context` (0x10053e690) from auth file:
```
ApiRequestContext {
  token_ptr:    *str,        // a1[0]
  token_len:    usize,       // a1[1]
  session_len:  usize,       // a1[2] (clone of session token len)
  session_ptr:  *str,        // a1[3] (clone of session token ptr)
  bearer_ptr:   *str,        // a1[4]
  bearer_len:   usize,       // a1[5]
}
```
`chatgpt_account_id` key (len=27) looked up in JWT claims via nested_dict.
Returns None (0x8000000000000000) if account_id not found.

---

## Internal Auth File: AuthFile (serde_json deserialized)

Fields accessible at offsets from a2 in make_api_request_context:
- a2[6..8]: optional prefix/access token (ptr+len)
- a2[8..9]: token len
- a2[9..10]: bearer token ptr
- a2[10..11]: session token len
- a2[11]: flag (checked for zero)
- a2[15..17]: session token (ptr+len)
- a2[17]: flag (checked for non-zero)

---

## Output DTO: TestApiResult (returned in CoreEnvelope)

```
TestApiResult {
  code: String,           // "ok" always on success (0x6B6F = 'ok')
  message: String,        // DELTA in 1.1.1: "Reached chatgpt.com via {url} HTTP {status_code}"
                          //   1.0.9 was: proxy URL string or "direct connection"
  status: u8,             // 0=error, 1=success (unchanged)
  status_code: u16,       // HTTP response status code (unchanged)
}
```

Written to result struct by test_api_connectivity (0x1006e5290):
- a1+0:  code ptr (2 bytes, "ok")
- a1+8:  message ptr
- a1+16: message len
- a1+48: status (u32, 0 or 1)
- a1+52: status_code (u32/u16)
- a1+56: status flag (u8, 0=error, 1=success)

---

## Error Codes (unchanged vs 1.0.9)

| Code string           | Bytes | Source                              |
|-----------------------|-------|-------------------------------------|
| `"invalid_config"`    | 14    | sanitize_proxy_config validation fail |
| `"client_build_failed"` | 19  | reqwest::ClientBuilder::build fail  |
| `"network_error"`     | 13    | RequestBuilder::send fail           |
| `"auth_file_error"`   | -     | load_auth_file returns Err (new in 1.1.1 path) |

---

## Side Effects

- **Filesystem read** (NEW in 1.1.1): `std::fs::read_to_string` reads auth file from path in repo state
- **Network I/O**: blocking HTTP GET to `https://chatgpt.com/backend-api/accounts/check/v4-2023-04-27`
- **Static cache mutation**: `http_client::CLIENT` static at 0x101442DB8; Mutex-guarded reqwest Client cache keyed on proxy URL bytes
- **No persistence write**: no DB write, no file write, no keychain access in this command
