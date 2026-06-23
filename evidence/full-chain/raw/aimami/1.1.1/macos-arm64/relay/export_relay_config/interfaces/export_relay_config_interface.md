# Interface / DTO — export_relay_config (AiMaMi 1.1.1 macOS ARM64)

**Session**: <审计会话>
**Binary SHA-256**: f34ff82910539964e24e86b35e95ea85b42af7d7dccf8e979914a2c21bd8cfeb
**Source**: 逆向分析 MCP live decompile + rodata string extraction

---

## IPC Command Name

`"export_relay_config"` — confirmed in IPC registration blob at `0x1011482ff`

---

## Request DTO

| Key | Type | Required | Source |
|-----|------|----------|--------|
| `filePath` | String | yes | IPC arg `v24`/`v6` (path components) |
| `includeApiKeys` | bool | yes | `a4` parameter; `includeApiKey` key in IPC registration blob |

**Frontend IPC**: 1.0.9 CCF confirmed: `ne("export_relay_config", { filePath, includeApiKey })` — arg key is `includeApiKey` (singular) in frontend registration blob; the backend arg extraction key string confirmed in IPC blob as `includeApiKeys` (plural) via rodata. Cross-check with 1.0.9 frontend CCF required for definitive key name reconciliation.

---

## Response DTO (Ok, discriminant=10)

Returned via `CoreEnvelope::ok` wrapping a struct built from:
- `filePath` (String, UTF-8 lossy from PathBuf) — the written file path
- `rewritten_path` (String) — normalized filename (extension rewritten)
- `providers_count` (u64) — number of providers in snapshot (`v11`, counter)
- `includeApiKeys` (bool) — echo of input arg

**Response discriminant**: `10` = Ok variant
**Error discriminant**: `0x8000000000000000` = Err variant, with CoreError code 9 (serialization/IO error)

---

## Written File JSON Schema (RelayExportFile)

Confirmed from serde serialize_entry calls and struct registry string (`"struct RelayExportFile with 5 elements"`):

```json
{
  "schemaVersion": <u64>,
  "exportedAt": <u64, Unix ms>,
  "exportedBy": "AiMaMi 1.1.1",
  "includeApiKeys": <bool>,
  "providers": [<RelayExportProvider>, ...]
}
```

**Key delta vs 1.0.9**: `exportedBy` = `"AiMaMi 1.1.1"` (12B, hardcoded via `qmemcpy`). In 1.0.9 Windows evidence the value was `"AiMaMi 1.0.9"` — version string updated only.

**Rodata-confirmed JSON keys**:
- `"schemaVersion"` (13B) @ `0x10114f3be`
- `"exportedAt"` (10B) @ `0x10114ff2f`
- `"exportedBy"` (10B) @ `0x10114ff39`
- `"includeApiKeys"` (14B) @ `0x10114ff43`
- `"providers"` — from `serialize_field` on providers array (`__src[3]`), confirmed in string pool @ `0x10114ff2f` blob

### RelayExportProvider fields (struct registry: 10 elements)

From struct registry string (`"struct RelayExportProvider with 10 elements"`) and provider loop clone pattern:
- `id` (String, cloned from provider+0)
- `name` (String, cloned from provider+24)
- `baseUrl` (String, cloned from provider+48)
- `model` (String, cloned from provider+72, with skip+flag at +133/+134)
- `extraHeaders` (Vec<...>, cloned from provider+96)
- `apiKey` (String, cloned from provider+120, populated from keychain OR provider.apiKey_cached OR 0x8000000000000000 sentinel when omitted)
- `wireApi` (bool, from provider+228 flag area)
- `brand` (String, from provider+152 area per 1.0.9 Windows evidence)
- `models` (Vec<RelayModelEntry>, from provider stride)
- 10th field: unknown (accepted_unknown; likely internal flag not serialized)

**Provider stride**: 176 bytes in export Vec allocation (`176 * v7`); cf. 1.0.9 Windows 208-byte internal / 152-byte serialized intermediate.

---

## Side Effects (ordered)

1. `RelayManager::snapshot`: Mutex OnceBox init (if first call) → lock → `RelayState::clone` → unlock (read-only, no mutation)
2. Per-provider loop: if `includeApiKeys=true` AND `provider.hasKey`: `keychain::get_api_key` (system keychain read)
3. `chrono::Utc::now` → timestamp ms computation (pure)
4. Serialize 5 JSON fields via serde_json `SerializeMap`/`SerializeStruct` into 128-byte buffer
5. `Path::to_path_buf` → `file_name` → extension normalization via `trim_end_matches` + `_set_file_name` (strip `.js`/`.aimami-relay` suffixes, append `.aimami-relay.json`)
6. `atomic_write::write_atomic`: parent `DirBuilder::_create` + `process::id` + `uuid::v4` temp name + `OpenOptions::_open` + `Write::write_all` + `File::sync_data` + `close$NOCANCEL` + `fs::rename` (atomic) + `sync_parent_dir` + `remove_file` (cleanup on failure)
7. If `includeApiKeys=true`: `set_permissions` → chmod `0o600` on written file (log::warn on chmod failure, not fatal)
8. Drop `RelayExportFile` struct
9. Return Ok with (filePath_utf8_lossy, rewritten_path, providers_count, includeApiKeys)

**No relay.json mutation. No RelayManager state mutation.**

---

## Error Paths

| Code | Trigger |
|------|---------|
| `CoreError` code 9 | `serde_json` serialization failure in `serde_json::ser::invalid_raw_value` or `serialize_entry` |
| `CoreError` code 9 | `atomic_write::write_atomic` IO error (`std::io::Error::fmt` → format string) |
| panic `"poisoned lock: ..."` | Mutex poisoned (not caught, panics) |

---

## File Extension Normalization

XSIMD check at write path:
- If filename suffix `!= ".aimami-relay.json"` (SSE comparison via `xmmword_10114F0A0`/`xmmword_10114F0B0`):
  - `trim_end_matches` strips `.js` (3B) then `.aimami-relay` (13B)
  - `PathBuf::_set_file_name` appends new normalized name
- Extension always written as `.aimami-relay.json`

---

## Accepted Unknowns

- `filePath` path traversal validation — not confirmed in this layer (accepted: caller-side)
- Exact `schemaVersion` u64 value at runtime (runtime, not hardcoded in function)
- `exportedAt` exact format: inferred Unix ms (chrono ms conversion pattern); not 100% confirmed nanosecond vs ms
- `RelayExportProvider` 10th field exact name/type (accepted; non-critical)
- Frontend IPC arg key: `includeApiKey` vs `includeApiKeys` — reconcile against 1.0.9 CCF (accepted; 1.0.9 CCF has precedent)
- Windows platform behavior (Windows Unknown — requires independent Windows 逆向分析 evidence)
- dim6 test/acceptance mapping (内部构建 implementation side)
