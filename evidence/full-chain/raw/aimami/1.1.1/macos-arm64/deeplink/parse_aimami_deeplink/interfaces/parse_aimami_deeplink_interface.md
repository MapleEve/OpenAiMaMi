# parse_aimami_deeplink — Interface / DTO / Side-Effect Closure

**session**: <审计会话>
**machine**: <本地机器>
**platform**: macos-arm64
**version**: 1.1.1
**produced_at**: 2026-06-17
**source_binary_sha256**: f34ff82910539964e24e86b35e95ea85b42af7d7dccf8e979914a2c21bd8cfeb

---

## ArgKeys (IPC invoke params)

| key | type | required | source | notes |
|-----|------|----------|--------|-------|
| `url` | String | yes | frontend invoke `{url:t}` | full deeplink URL e.g. `aimami://v1/import?...` |

---

## URL Format (validated by owner)

```
aimami://v1/import?provider=codex&name=<name>&endpoint=<endpoint>&apiKey=<apiKey>[&model=<model>]
```

**Scheme check**: must be `"aimami"` (6B); error: `"scheme 必须是 aimami，得到 <actual>"`
**Host check**: must be `"v1"` (len=2, LE word = 0x3176 = 12662)
**Path check**: must be `"/import"` (len=7; bytes[0:4]=`0x706D692F`="/imp", bytes[3:7]=`0x74726F70`="ort") → `/import`

---

## Query Parameters (extracted from URL)

| param key | type | required | validation | error message |
|-----------|------|----------|-----------|---------------|
| `provider` | String | yes | must equal `"codex"` (5B: `0x65646F63`+"x") | `"resource 必须是 provider，得到 <actual>"` |
| `name` | String | yes | any non-empty | `"缺少必填参数 name"` |
| `endpoint` | String | yes | must start with `http://` or `https://` | `"缺少必填参数 endpoint"` / `"endpoint 必须以 http:// 或 https:// 开头，得到 <actual>"` |
| `apiKey` | String | yes | any | `"缺少必填参数 apiKey"` |
| `model` | String | no | any | if absent → default `"gpt-5.4"` (7B constant) |

---

## Response DTO

**Success**: `CoreEnvelope<DeeplinkResult>` — Ok discriminant `0x8000000000000000`

`DeeplinkResult` fields (15 Rust fields, 8B each = struct packed into v34[0..14]):

| field | type | source |
|-------|------|--------|
| `name` | String | URL param `name` |
| `endpoint` | String | URL param `endpoint`, trailing `/` trimmed via `trim_end_matches('/')` |
| `apiKey` | String | URL param `apiKey` |
| `model` | String | URL param `model` or default `"gpt-5.4"` |
| `host` | String | host_str extracted from re-parsed endpoint URL |

**Error**: `CoreEnvelope<Err(String)>` — discriminant `0x8000000000000000` Err variant
Error message format string at relevant address; messages:
- `"scheme 必须是 aimami，得到 <actual>"` — scheme mismatch
- `"路径必须是 v1/import，得到 <host>/<path>"` — host/path mismatch
- `"resource 必须是 provider，得到 <actual>"` — provider param mismatch
- `"缺少必填参数 <key>"` — missing required param (name/endpoint/apiKey)
- `"endpoint 必须以 http:// 或 https:// 开头，得到 <actual>"` — bad endpoint scheme
- URL parse error from `url` crate ParseError::Display

---

## Side Effects

- **No persistence** — command does NOT write to disk, DB, keychain, or registry
- **No network** — command does NOT make HTTP requests
- **No sidecar** — no subprocess or IPC to external processes
- **No relay HashMap mutation** — provider not inserted into relay state by this command (parsing only, result returned to frontend)
- **Return value only** — result passed back via `InvokeResolver::respond` to frontend JS

---

## Deeplink Trigger

- OS deeplink scheme `aimami://` → Tauri single-instance `new-url` event
- Frontend: `parseDeeplink(url)` → `invoke("parse_aimami_deeplink", {url: t})`
- Frontend source: `assets/index-DdcCOEJG.js:86` col=121149 (from Windows CCF; same JS bundle mac/win)

---

## Platform Comparison (macOS vs Windows)

| dimension | macOS 1.1.1 | Windows 1.1.1 |
|-----------|-------------|----------------|
| owner VA | 0x1004dade0 | 0x14002A690 |
| owner size | 3178B (0xc6a) | 895B (stripped) |
| core parser VA | inline in owner | 0x1401C7B90 (3164B, 105 blocks, cc=45) |
| behavior: scheme check | "aimami" (confirmed) | "aimami" (confirmed) |
| behavior: host/path check | v1/import (confirmed) | v1/import (confirmed) |
| behavior: required params | name/endpoint/apiKey/provider=codex | name/endpoint/apiKey/provider=codex |
| behavior: model default | "gpt-5.4" (7B confirmed) | partial LE decode (non-blocking) |
| behavior: endpoint trim | trim '/' (confirmed) | confirmed |
| behavior: side effects | none (confirmed) | none (confirmed) |
| differences | macOS decompile: all inline; larger body; all 5 branches confirmed | Windows: core is separate fn 0x1401C7B90; more ICF |

---

## Fake-Wall Check

**genuine_ceiling**: false
All 7 taxonomy categories excluded:
- `drop_in_place!=async_body`: no async pattern (synchronous fn, 3178B); no poll/resume bodies
- `architecture_only/budget_rule`: not applicable
- `async_decompile_failed`: no async; decompile succeeded single pass
- `wrong_va`: VA 0x1004dade0 confirmed via lookup_funcs + owner-map-111.jsonl
- `vtable_dynamic_dispatch`: no vtable; all callees direct static
- `HTTP_terminal_external_only`: no HTTP calls
- `library_internal_vs_config_callsite`: all business callees are deeplink module internal

**recovery_attempts**: N/A — no fake-wall candidates identified
