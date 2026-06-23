# evidence.md — parse_aimami_deeplink (macOS arm64, 1.1.1)

**session**: <审计会话>
**machine**: <本地机器>
**platform**: macos-arm64
**version**: AiMaMi 1.1.1
**produced_at**: 2026-06-17
**source_binary_sha256**: f34ff82910539964e24e86b35e95ea85b42af7d7dccf8e979914a2c21bd8cfeb
**binary**: AiMaMi 1.1.1 universal.app/Contents/MacOS/AiMaMi
**IDB**: <来源位置>/raw/binary/AiMaMi-1.1.1-idb
**hexrays_ready**: true
**uptime_at_session_start**: 58452s

---

## ## Confirmed

1. **owner VA**: `0x1004dade0` — `codexmate_lib::commands::deeplink::parse_aimami_deeplink::h8d31a2917e010213`, size=0xc6a (3178B); confirmed via `lookup_funcs {"queries":["0x1004dade0"]}` + owner-map-111.jsonl (module=deeplink, status=added new in 1.1.1)
2. **IPC dispatcher VA**: `0x100313b10` — `codexmate_lib::run::{{closure}}::{{closure}}::h79d1252cb7f3ff2b`, size=0x324 (804B); confirmed via `xrefs_to 0x1004dade0` (sole caller)
3. **command string**: `"parse_aimami_deeplink"` (21B) at `0x1011483A8`; confirmed via `find_regex("parse_aimami_deeplink")` n=1 in packed command blob
4. **argKeys**: `["url"]` (String); confirmed from IPC dispatcher `unk_1011483A8`+`unk_101148401` arg descriptors + `CommandArg::from_command` path; cross-confirmed with Windows/frontend ipc-contracts.jsonl argKeys=[url]
5. **scheme validation**: scheme=="aimami" (6B) checked via `memcmp(*url_host_ptr, "aimami", 6)`; error msg `"scheme 必须是 aimami，得到 <actual>"` at `0x1010B48F3` (33B len-prefixed)
6. **host+path validation**: host must be "v1" (LE word 12662 = 0x3176), path must be "/import" (7B, 2x DWORD checks `0x706D692F`+`0x74726F70`); error msg `"路径必须是 v1/import，得到 <host>/<path>"` at `0x1010B48CC` (35B)
7. **required query params**: `provider` (must equal "codex" 5B), `name` (4B key), `endpoint` (8B key), `apiKey` (6B key); all extracted via `take_required` at `0x1004dab50` which calls `hashbrown::RawTable::remove_entry`
8. **endpoint validation**: must start with `http://` (7B check: `*v75 ^ 0x70747468 | *(v75+3) ^ 0x2F2F3A70`) or `https://` (8B check: `*(_QWORD*)v75 == 0x2F2F3A7370747468`); error msg `"endpoint 必须以 http:// 或 https:// 开头，得到 <actual>"` at `0x1010B4869` (56B)
9. **model default**: optional param `model`; if absent → `parse_inner::{{closure}}::h749c55bb7679859e` at `0x1004daa00` allocates 7B = `"gpt-5.4"` (confirmed: `0x762605671` LE = `gpt-` + `0x875443501` LE = `5.4` overlap decode)
10. **endpoint trim**: `core::str::trim_end_matches('/')` called on endpoint (char 47) before result build; confirmed from `0x10057ee20` callee
11. **endpoint host extraction**: `parse_inner::{{closure}}::h769b1fda165c1aa6` at `0x1004daa60` re-parses endpoint URL and extracts `host_str` → String
12. **response type**: `CoreEnvelope<DeeplinkResult>` via `CoreEnvelope::ok` at `0x1005552d0`; Ok discriminant `0x8000000000000000`; 15-field struct copied to `v34[0..14]` (name/endpoint/apiKey/model/host as String triples)
13. **error type**: `Err(String)` — `*a1 = 0x8000000000000000` (Err discriminant), error message as formatted String
14. **no side effects**: callees confirmed — no persistence/fs write, no HTTP, no keychain, no sidecar; pure parse+validate+return
15. **IDB comments**: 5x `append_comments` ok (owner@0x1004dade0, dispatcher@0x100313b10, take_required@0x1004dab50, closure_h749@0x1004daa00, closure_h769@0x1004daa60)

---

## ## Inferred

1. **DeeplinkResult field order**: field packing v34[0..14] is name→endpoint→apiKey→model→host (String triple × 5), inferred from RAII cleanup order and `memcpy(v34,...,v49)` pattern; byte-exact field offsets not confirmed
2. **"missing required param" error exact format**: error msg prefix confirmed as `"缺少必填参数 "` (19B at 0x1010B492C); suffix = param key name; full message = `"缺少必填参数 <key>"` — format from `take_required` alloc::fmt call
3. **"resource 必须是 provider" error**: provider param value != "codex" produces this error (0x1010B48A4, 37B); exact format-arg position inferred
4. **provider=codex check order**: provider validated before app="codex" check (order: HashMap::remove("provider") → check len=8 + "provider" → HashMap::remove("app") → check len=5 "codex"); "app" may be intermediate validation
5. **frontend trigger**: deeplink URL received by Tauri via `deep-link://new-url` event (confirmed string at 0x101148F15 `"is_registered"` / `"deep-link://new-url"`); event triggers `parseDeeplink(url)` which calls invoke; frontend-side handling inferred from Windows CCF (same JS bundle)
6. **url crate version**: `url::ParseOptions::parse::h7da66aa6bebaf5b6` + `url::Url::host_str/path/query` — standard Rust `url` crate v2.x; relative URL parsing behavior inherited from crate
7. **"app" check semantics**: after `provider=="provider"` validated (len=8), `HashMap::remove("app")` checks value=="codex" (5B); may be sub-resource or action identifier (not exposed to frontend)
8. **CoreEnvelope Ok layout**: v34 has 15 slots (120B); slots [9..11] = model String triple (cap/ptr/len), consistent with other commands using CoreEnvelope pattern
9. **Error message language**: all validation error messages are Chinese (`必须是/必须以/缺少必填参数`); same pattern as 1.0.9 deeplink module
10. **host_str semantics**: re-parsed endpoint host_str (closure_h769) likely used as relay provider base for display or ID; not used in persistence path (no write callees observed)

---

## ## Unknown

1. **Windows-macOS behavior parity on "app" check**: Windows owner (895B) has a separate core fn (0x1401C7B90, 3164B, 105 blocks cc=45); the "app"/"codex" validation sub-check byte sequence may differ in Windows (non-blocking; not blocking strictImplementationUse_candidate)
2. **dim6 test/acceptance mapping**: 内部构建 implementation side; not producer responsibility
3. **frontend trigger exact event handler**: `deep-link://new-url` Tauri event → `parseDeeplink` call chain not fully traced in macOS frontend CCF (Windows CCF confirmed; macOS CCF accepted_unknown consistent with same JS bundle)
4. **model param value validation**: any string accepted for custom model; no allowlist check observed in owner body; may be validated downstream by relay provider
5. **"app" param meaning**: intermediate param `"app"` removed from HashMap + checked == `"codex"` (5B); possible sub-resource discriminator; not in frontend argKeys list; semantics uncertain — may be stripped before relay
6. **DeeplinkResult exact Rust struct name**: inferred as `DeeplinkResult` from context; actual type name not confirmed (no log string or debug format with struct name found)
7. **endpoint url::Url re-parse failure path**: if endpoint fails second `url::Url::parse` call, `parse_inner::{{closure}}::h769` returns None (0x8000000000000000) → `String::clone(name)` fallback; semantics of this fallback uncertain
8. **"model" absent branch vs present branch**: when model param absent, `parse_inner::{{closure}}::h749` allocates `"gpt-5.4"` as default; when present, value from HashMap used directly; no additional model validation observed
9. **query params case sensitivity**: `HashMap::from_iter` from URL query; URL crate preserves percent-encoding; param key comparison exact-match; case-sensitive assumed (not confirmed)
10. **result used by frontend after success**: frontend consumes `DeeplinkResult` to presumably create/update relay provider via separate `add_relay_provider` or similar command; not in scope of this command

---

## Four-Angle Completeness

- **A (func_query symbol enumeration)**: `lookup_funcs {"queries":["0x1004dade0"]}` → `__ZN13codexmate_lib8commands8deeplink21parse_aimami_deeplink17h8d31a2917e010213E` unique hit; module=deeplink confirmed — **PASS**
- **B (string pool / find_regex)**: `find_regex("parse_aimami_deeplink")` n=1 in packed command blob `0x1011482ff`; command string at `0x1011483A8` (21B) confirmed in dispatcher — **PASS**
- **C (frontend CCF)**: Windows CCF confirmed (<审计会话>): `parseDeeplink(url)` → `vt("parse_aimami_deeplink",{url:t})` col=121149; same JS bundle for mac/win; cross-platform CCF — **PASS (cross-platform accepted)**
- **D (manifest+call-trees+INDEX)**: manifest.json + call-trees/parse_aimami_deeplink.jsonl (20 entries) + pseudocode 2 files + evidence.md + interfaces/ written; INDEX entry appended — **PASS**

---

## Accepted Unknowns (all non-blocking)

- `dim5_win`: Windows platform behavior — separate producer task (already done: INDEX line 1477; macOS-side closure confirmed via IDB)
- `dim6`: test/acceptance mapping — consumer-side task
- `frontend_ccf_macos_explicit`: macOS CCF not independently traced; Windows CCF accepted (same JS bundle)
- `"app"_param_semantics`: intermediate param semantics uncertain; does not affect argKeys or primary behavior
- `DeeplinkResult_rust_struct_name`: type name unconfirmed; fields confirmed
- `model_validation_downstream`: model value not validated in owner body; downstream relay responsibility

**Gate tier**: `strictImplementationUse_candidate` (dim1_cross+dim2+dim3+dim4+dim5_mac; dim5_win done separately; dim6 N/A producer)
