# parse_aimami_deeplink — Interface / DTO / Error / Side-effect (Windows x64, AiMaMi 1.1.1)

## Command Registration
- command name: `parse_aimami_deeplink`
- namespace: app (registered in tauri_ipc_main_dispatcher_sys switch, 41-case)
- IPC mechanism: Tauri async invoke (via future poll vtable per Tauri 2 pattern)

## Input DTO

```typescript
interface ParseAimamiDeeplinkParams {
  url: string;   // required; must be a valid aimami:// deeplink URL
}
```

### Deeplink URL Structure (validated in parse_aimami_deeplink_core_sys)

```
aimami://[authority]/import?resource=provider&app=codex&name=<NAME>&endpoint=<ENDPOINT_URL>&apiKey=<API_KEY_URL>[&model=<MODEL>]
```

| Component | Requirement | Binary evidence |
|---|---|---|
| scheme | MUST be "aimami" (6 bytes, bytes=0x616D6961+0x696D) | 0x1401c7cda: DWORD1(v65)==6 && bytes check |
| path | MUST contain "/import" (7 chars); path segment match: v17==2, v20==7, *v18==0x3176 ("v1"), *v19=="p/im"+"port" check | 0x1401c7fb5 |
| resource | MUST be "provider" (8 bytes, key="resource") | 0x1401c8067: sub_140375340("resource",8) + len==8 + bytes=="provider" |
| app | MUST be "codex" (5 bytes, key="app") | 0x1401c8161: sub_140375340("app",3) + len==5 + bytes=="codex" (0x65646F63+0x78) |
| name | MUST be present (required query param, key="name", 4B) | 0x1401c8218: deeplink_query_param_extract_sys("name",4) |
| endpoint | MUST be present (required query param, key="endpoint", 8B) | 0x1401c8274: deeplink_query_param_extract_sys("endpoint",8) |
| apiKey | MUST be present AND must be valid http/https URL | 0x1401c82d7 + 0x1401c8352 validation |
| model | OPTIONAL query param (key="model", 5B); defaults to "sonnet-..." (7B) | 0x1401c8453: sub_140375340("model",5) |

### apiKey URL Validation (from 0x1401c8352)
```
apiKey.len >= 7
AND (apiKey[0..4] == "http" (0x70747468 LE) AND apiKey[3..7] == "p://" (0x2F2F3A70 LE))
OR  (apiKey.len == 7 OR apiKey[0..8] as u64 == 0x2F2F3A7370747468 i.e. "https://")
```
In practice: apiKey must start with "http://" or "https://".

### apiKey post-processing
- Trailing '/' (char 0x2F = 47) stripped via str_trim_end_matches_char_sys @ 0x14070B500

## Output DTO

### Success Response

```typescript
interface ParseAimamiDeeplinkResult {
  status: "ok";       // 2B string "ok" (0x6B6F LE)
  result: "success";  // 7B string (see deeplink_success_response_build_sys)
  // provider fields at offsets 72..196 within response struct
  // int field at offset+192 = 1
  // bool field at offset+196 = 1 (true)
}
```

Frontend receives: `{status:"ok", result:"success"}` (or similar shape based on Tauri serialization of response struct tag=2)

### Error Responses (from error format paths in parse_aimami_deeplink_core_sys)

| Error condition | Error path VA | Format function |
|---|---|---|
| URL parse failed | 0x1401c7c0e | sub_1410A1DF0 + unk_1412B752C |
| scheme != "aimami" | 0x1401c7d4e | sub_1410A1DF0 + unk_1412B7508 |
| path not "/import" | 0x1401c7fff | sub_1410A1DF0 + unk_1412B74E1 |
| resource != "provider" | 0x1401c8078..0x1401c80d3 | sub_1410A1DF0 + unk_1412B74B9 |
| apiKey not http/https | 0x1401c835f | sub_1410A1DF0 + unk_1412B7479 |
| name/endpoint/apiKey missing | sub_1401C7900 error branch | sub_1410A1DF0 + unk_1412B7541 |
| Display impl error | 0x1401c7e5a..0x1401c81af | sub_14124BFE0 (panic) |

## Side Effects

### Primary Side Effect: In-memory relay provider HashMap insert
- relay_provider_hashmap_insert_sys @ 0x140730900
- Target: TLS-based AppState at `TLS[TlsIndex] + 584` = relay_providers HashMap
- Implementation: Robin-Hood SIMD insert via sub_1403703F0 (sub_140624F90 = hash)
- **NO config.toml write, NO secrets.json write, NO fs side-effect from parse_aimami_deeplink_core_sys directly**
- The provider is inserted into the runtime in-memory relay state only
- Persistence would require a subsequent upsert_relay_provider call (separate IPC command)

### Secondary Side Effects: NONE observed
- No HTTP outbound call from this command
- No IPC relay to other commands
- No persistence writes (no atomic_write / save_config_text in callee tree)

## Platform Differences (Win vs Mac)

| Aspect | Windows 1.1.1 | Mac (baseline 1.0.9) |
|---|---|---|
| Lock mechanism | _InterlockedCompareExchange8 + WakeByAddressSingle (in InvokeResolver path) | parking_lot (presumed) |
| TLS access | TLS[TlsIndex]+584 for relay state | similar offset via thread_local |
| URL parsing | sub_14104E1B0 (PE build, Win64 stdcall) | equivalent mac fn (different VA) |
| SIMD HashMap | SSE2 _mm_cmpeq_epi8 Robin-Hood | similar mac SIMD |
| apiKey validation | http/https prefix check (same logic) | assumed identical |
| deeplink behavior | in-memory only, no persist | assumed identical per 1.1.1 win evidence |

## Accepted Unknown
- model default string: 7B allocation "sonnet-..." — exact string not fully decoded (constants: 762605671 = 0x2D736E6F LE "ons-"; 875443501 = 0x3432306D LE "m024"...); shape confirmed as 7-byte string, exact content not critical for consumer implementation
- response struct layout at offset 72..184: copied from provider input struct; exact field-by-field assignment visible in deeplink_success_response_build_sys but frontend consumption of these fields not observed in win frontend CCF
- recovery_attempts: model default bytes tried hex decode — partially decoded, genuine ceiling on exact string without memory dump
- ceiling_reason: in-memory constant allocation without string xref in 逆向分析 string table; not a gate-blocker for deeplink command implementation
- caller_disambiguation_tried: true (only 1 caller = parse_aimami_deeplink_core_sys)
- genuine_ceiling: false (wall type = constant embedded in alloc, decodeable with memory read; low priority)
