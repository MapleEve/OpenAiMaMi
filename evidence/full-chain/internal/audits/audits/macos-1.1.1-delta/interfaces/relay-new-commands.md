# relay-new-commands.md — 1.1.1 新增 relay 命令 DTO 接口

**session**: wf-aimami111-delta-20260617-repair
**produced_at**: 2026-06-17

---

## set_codex_api_login

```
argKeys: [enabled: bool]
response: CoreEnvelope<CodexApiLoginTogglePayload>

CodexApiLoginTogglePayload (inferred):
  enabled: bool
  providers: Vec<(String, String, u64)>  // (providerId, model, maxSlots)
  // exact fields not fully confirmed

progress events (Tauri emit):
  "stopping_codex"     (14B)
  "restoring_auth"     (14B)
  "writing_auth"       (12B)
  "writing_config"     (14B)
  "done\x07"           (4B, BEL sentinel)

side effects (enable=true):
  virtual-auth-marker.json (chrono timestamp + enabled + api_key path)
  Codex session credential file
  stop_codex_for_file_edit + launch_codex_app

side effects (disable=true):
  cleanup: remove virtual-auth-marker.json + session file
  persist + sync_codex_config
```

---

## set_codex_api_slots

```
argKeys: [manager: String, slots: Vec<CodexApiSlot>]
response: CoreEnvelope<RelayState>

CodexApiSlot:
  providerId: String
  model: String

validation:
  slots.len() in [1, 5]
  providerId unique across slots
  model must be in provider.exposed_models

error strings:
  "slots Vec must be non-empty or count > 5" (inferred)
  "providerId not found in relay"
  "duplicate providerId in slots"
  "model not in exposed_models"
```

---

## get_relay_provider_quota

```
argKeys: [manager: String, providerId: String]
response: CoreEnvelope<{remaining, quota, usage}>  // numeric types inferred

HTTP: GET {baseUrl trimmed}/v1/usage
  Authorization: Bearer <api_key>
  + extraHeaders (optional JSON object)

API key resolution (3-tier):
  1. plain file read
  2. HMAC-SHA256(hostname:USER) decrypt from secrets.json
  3. macOS Keychain (service=16B constant)

error strings:
  "relay provider {id} not found"
  "no relay provider configured for {id}"
  "failed to build async relay quota client"
  "invalid extraHeaders JSON"
  "invalid header name/value"
```

---

## reorder_relay_providers

```
argKeys: [manager: String, orderedIds: String[]]
response: CoreEnvelope<RelayState>  // or Vec<RelayProvider>

algorithm: HashMap::from_iter(orderedIds) → sort by position → Vec::from_iter(providers)
side effects: persist RelayState + sync_codex_config_with_outcome
```

---

## reveal_relay_api_key

```
argKeys: [providerId: String]
response: CoreEnvelope<Option<String>>

key resolution (3-tier, with write-through cache to tier 1):
  1. plain text file
  2. base64-decoded + SHA256-derived decryption (secrets.json)
  3. macOS Keychain (security_framework)

side effect: write-through cache (writes Tier 1 file if hit from Tier 2/3)
error: None returned if key not found (no error thrown)
```

---

## set_relay_display_tags

```
argKeys: [manager: String, global: String, woyao: String]
response: CoreEnvelope<()>  // Ok unit on success

processing: sanitize_display_tag(trim) applied to both global and woyao
side effects: persist RelayState (atomic write)
conditional: sync_codex_config only if relay active flag set
```

---

## parse_aimami_deeplink

```
argKeys: [url: String]
response: CoreEnvelope<DeeplinkResult>

URL format: aimami://v1/import?provider=codex&name=<n>&endpoint=<url>&apiKey=<k>&model=<m>
required params: provider (must="codex"), name, endpoint, apiKey
optional: model (default="gpt-5.4")

validation:
  scheme == "aimami"
  host == "v1", path == "/import"
  endpoint must start with "http://" or "https://"
  endpoint trailing "/" trimmed

DeeplinkResult fields (inferred from 15-field struct):
  name, endpoint, apiKey, model, host (extracted from endpoint)
  provider (validated "codex")
  + other fields
```

---

## test_relay_draft_stream / test_relay_provider_stream

```
argKeys: [input: RelayDraftTestInput / RelayProviderTestInput]

RelayDraftTestInput:
  providerId: String   (index 0)
  ide: String          (index 1)
  atMs: String         (index 2, likely timestamp)
  baseUrl: String      (index 3)
  apiKey: String       (index 4)
  model: String        (index 5)
  wireApi: String      (index 6, "responses" for Responses API, else OpenAI)
  extraHeaders: String (index 7, JSON object string)

HTTP: POST {baseUrl}/v1/chat/completions (or /v1/embeddings, or /v1/responses)
  stream: true
  stream_options: {include_usage: true}
  max_tokens: 16 (default) / 50 (claude) / 3000 (gemini) / 16 (o1/o3/o4=max_completion_tokens)
  messages: [{role:"user", content:<model>}]

streaming termination:
  OpenAI chat: type=="message_stop" (12B)
  Responses API: type in ["response.failed","response.incomplete","response.done"]
  Anthropic: type=="content_block_delta" → delta.text extract

headers:
  OpenAI: Accept:text/event-stream + Cache-Control:no-cache (stream)
          optionally x-originator:codex_cli_rs + User-Agent:codex_cli_rs/0.80.0 AiMaMi (originator==1)
  Anthropic: anthropic-version:2023-06-01; Accept:text/event-stream (stream)
```
