# parse_aimami_deeplink — dim6 ACCEPTANCE MAPPING
# version: 1.1.1 | platform: macos-arm64 | shard: mac-3/5
# authored: 2026-06-19 | session: <审计会话>

## gate_tier: readyToImplement (dim1-5 all closed; dim6=acceptance-draft)
## Note: dim1 confirmed cross-platform (Windows CCF, same JS bundle); dim5_win done separately (INDEX line 1477)

---

## happy_path

**Scenario**: Frontend calls `invoke("parse_aimami_deeplink", { url: "aimami://v1/import?provider=codex&name=MyRelay&endpoint=https://relay.example.com&apiKey=<redacted-api-key>" })`. All required params present and valid.

Input:
```json
{
  "url": "aimami://v1/import?provider=codex&name=MyRelay&endpoint=https://relay.example.com&apiKey=<redacted-api-key>"
}
```

Expected output:
```json
{
  "tag": "0x8000000000000000",
  "data": {
    "name": "MyRelay",
    "endpoint": "https://relay.example.com",
    "apiKey": "<redacted-api-key>",
    "model": "gpt-5.4",
    "host": "relay.example.com"
  }
}
```
- `endpoint` has trailing `/` stripped via `trim_end_matches('/')`.
- `model` defaults to `"gpt-5.4"` (7B constant) when absent from URL params.
- `host` is extracted from re-parsing the (trimmed) endpoint URL via `url::Url::host_str()`.
- No side-effects: pure parse/validate/return.

**With explicit model param**:
```
url: "aimami://v1/import?provider=codex&name=MyRelay&endpoint=https://relay.example.com&apiKey=<redacted-api-key>&model=claude-3.5"
→ response.data.model = "claude-3.5"
```

---

## boundary / error paths

| Trigger | Expected error |
|---------|----------------|
| scheme != "aimami" | Err: `"scheme 必须是 aimami，得到 <actual>"` |
| host != "v1" | Err: `"路径必须是 v1/import，得到 <host>/<path>"` |
| path != "/import" | Err: `"路径必须是 v1/import，得到 <host>/<path>"` |
| `provider` param missing | Err: `"缺少必填参数 provider"` |
| `provider` param != "codex" | Err: `"resource 必须是 provider，得到 <actual>"` |
| `name` param missing | Err: `"缺少必填参数 name"` |
| `endpoint` param missing | Err: `"缺少必填参数 endpoint"` |
| `endpoint` does not start with http:// or https:// | Err: `"endpoint 必须以 http:// 或 https:// 开头，得到 <actual>"` |
| `apiKey` param missing | Err: `"缺少必填参数 apiKey"` |
| Malformed URL (url crate parse error) | Err: url::ParseError Display string |

---

## side_effect_asserts

1. **No files written** — confirmed by call-tree terminating at url crate + String alloc only.
2. **No network** — no reqwest or HTTP calls.
3. **No registry / relay mutation** — provider not inserted by this command; result returned to frontend for subsequent use.

---

## test_mapping

| Test | Type | Rationale |
|------|------|-----------|
| Valid URL returns all 5 fields correctly | unit (Rust) — parse fn | pure function; testable without IPC |
| model defaults to "gpt-5.4" when absent | unit (Rust) | pass URL without model param, assert default |
| endpoint trailing slash stripped | unit (Rust) | pass "https://relay.example.com/", assert endpoint="https://relay.example.com" |
| host extracted from endpoint correctly | unit (Rust) | verify host field = URL host component |
| All 6 error cases return correct Chinese error message | unit (Rust) | one test per error branch |
| scheme mismatch error | unit (Rust) | url with scheme="codex" → assert error string starts with "scheme 必须是 aimami" |
| provider != "codex" error | unit (Rust) | provider="openai" → assert error string "resource 必须是 provider" |
| Missing required param errors | unit (Rust, parametrized) | omit name/endpoint/apiKey one at a time |
| No file written after call (pure function) | unit (Rust) | assert no fs::write calls in call tree |
| e2e: OS deeplink "aimami://v1/import?..." triggers invoke | e2e (Tauri) / manual | register deeplink handler, open URL, verify invoke called |

---

## dim6_basis
Evidence: deeplink/parse_aimami_deeplink/evidence.md §Confirmed items 5-14: all validation branches byte-confirmed via memcmp/XOR checks at specific VAs; model default "gpt-5.4" confirmed at 0x1004daa00 (7B allocation); endpoint trim confirmed at 0x10057ee20; DeeplinkResult 5 String fields at v34[0..14] confirmed; interfaces/parse_aimami_deeplink_interface.md documents all error message strings and query param validation rules.
