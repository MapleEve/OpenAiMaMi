# parse_aimami_deeplink — Interface / DTO / Error / Side-effect (Windows x64, AiMaMi 1.1.8)

## Session
- session: <审计会话>
- machine: <本地机器>
- model: <模型>
- date: 2026-07-13
- binary: AiMaMi 1.1.8 win64.exe
- sha256_binary: f25d8129528b25ac7f69524fa07c78f961da189a7a8f2c758c288ec96bc68f10
- idb: <证据库> 1.1.8 win64.exe.i64
- imagebase: 0x140000000
- binary_format: pe / pe_machine: x64

## Command Registration
- command name: `parse_aimami_deeplink`
- module (cross-platform, from macOS 1.1.8 owner-map clean symbol `commands::deeplink`): `deeplink`
- owner VA: `0x1403d6000` (dedicated per-command wrapper function, not an inline main-dispatcher match-arm)
- IPC mechanism: Tauri sync-style invoke (owner directly calls the response builder, no async poll
  vtable observed in this owner — differs from some other 1.1.8 win commands that use
  `tauri::ipc::InvokeResolver<R>::respond_async_serialized_inner::{{closure}}`)

## Input DTO

```typescript
interface ParseAimamiDeeplinkParams {
  url: string;   // required; single arg, key="url" (3B literal @ 0x14133a635)
}
```

### Deeplink URL Structure (validated in `parse_aimami_deeplink_core_sys` @ 0x140025220)

```
aimami://[authority]/import?resource=provider&app=codex&name=<NAME>&endpoint=<ENDPOINT_URL>&apiKey=<API_KEY_URL>[&model=<MODEL>]
```

| Component | Requirement | Binary evidence (this round, 1.1.8 win) |
|---|---|---|
| scheme | MUST be "aimami" (6B, DWORD 0x616D6961 + WORD 0x696D) | 0x1400253ad |
| path | MUST contain "/import" (2 segments, len 7, "v1"-shaped prefix check + "p/im"+"port" DWORD compare) | 0x140025639 |
| resource | MUST be "provider" (8B, key="resource" @0x141313e09) | 0x140025748 (QWORD 0x72656469766F7270) |
| app | MUST be "codex" (5B, key="app" @0x141313e11) | 0x14002585e (DWORD 0x65646F63 + BYTE 0x78) |
| name | MUST be present (required query param, key="name" @0x1413115be, 4B) | 0x1400258c3 (Option::None check) |
| endpoint | MUST be present (required query param, key="endpoint" @0x1413129e6, 8B) | 0x140025911 |
| apiKey | MUST be present AND must be valid http/https URL | 0x140025982 + 0x1400259c9 |
| model | OPTIONAL query param (key="model" @0x1413119c8, 5B); defaults via `sub_140024F30` when absent | 0x140025aec |

### apiKey URL Validation (from 0x1400259c9)
```
apiKey.len >= 7
AND (apiKey[0..4] == "http" (0x70747468 LE) AND apiKey[3..7] == "p://" (0x2F2F3A70 LE))
OR  (apiKey.len == 7 OR apiKey[0..8] as u64 == 0x2F2F3A7370747468 i.e. "https://")
```
Byte-identical to the AiMaMi 1.1.1 windows baseline's documented rule.

### apiKey post-processing
- Trailing '/' (0x2F) stripped via `sub_1402A1D60(ptr, len, 47)` @ 0x140025c34 — same role as the
  1.1.1 baseline's `str_trim_end_matches_char_sys`, VA churned only.

## Output DTO

### Success Response

```typescript
interface ParseAimamiDeeplinkResult {
  status: "ok";       // 2B string "ok" (0x6B6F LE) @ a1+8/+16
  result: "success";  // 7B string @ a1+32/+40
  // name/endpoint/apiKey/model fields packed at offsets 72..184 within the response struct
  // int field @ offset+192 = 1
  // bool field @ offset+196 = 1 (true)
}
```

Byte-identical field layout and literal values to the AiMaMi 1.1.1 windows baseline
(`raw/aimami/1.1.1/windows-x64/parse_aimami_deeplink/interface.md`).

### Error Responses (from error format paths in `parse_aimami_deeplink_core_sys`)

| Error condition | Error path VA (this round) | Format function |
|---|---|---|
| URL slice/UTF-8 validate failed | 0x140025292 | `sub_14108F360` w/ `unk_141313EC2` |
| scheme != "aimami" | 0x1400253ad (falls to 0x140025401) | `sub_14108F360` w/ `unk_141313E9E` |
| path not "/import"-shaped | 0x140025639 | `sub_14108F360` w/ `unk_141313E77` |
| resource != "provider" | 0x1400256e6 / 0x140025748 | `sub_14108F360` w/ `unk_141313E4F` |
| app != "codex" | 0x14002585e | (same error-path family, `LABEL_43`) |
| name/endpoint/apiKey missing | 0x1400258c3 / 0x140025911 / 0x140025982 | (same error-path family) |
| apiKey not http/https | 0x1400259c9 | `sub_14108F360` w/ `unk_141313E14` |
| Display impl error (panic guard) | 0x140025826 / 0x1407ad918 / 0x140025826-analog in arg-wrapper | `sub_1412AD780` w/ literal "a Display implementation returned an error unexpectedly" (55B) |

## Side Effects

### Primary side effect: OPEN / not confirmed this round
The AiMaMi 1.1.1 windows baseline documented an in-memory `relay_provider_hashmap_insert_sys`
(TLS-based AppState HashMap, SSE2 Robin-Hood insert) as this command's side effect. The complete
callee enumeration of `parse_aimami_deeplink_core_sys` in 1.1.8 (46 refs, full non-truncated
17035-char decompile) contains **no SIMD/Robin-Hood-hashmap-shaped callee** — only generic
alloc/copy/trim/query-param-extract helpers (`sub_1400DEBD0` = generic `RawVec` grow/alloc, not a
hashmap insert). This is recorded as an open/Unknown finding, NOT as `accepted_unknown` (no decompile
ceiling was hit — the function decompiled cleanly with no truncation or `basic_blocks` chunking
needed). See evidence.md Unknown section and `recovery_attempts`.

### Secondary side effects: NONE observed this round
- No HTTP outbound call from this command's traced call tree
- No IPC relay to other commands observed
- No persistence writes (no `atomic_write`/`save_config_text`-shaped callee in the traced tree)

## Platform / Version Delta Summary

| Aspect | 1.1.8 (this round) | 1.1.1 baseline |
|---|---|---|
| Owner VA | 0x1403d6000 | 0x14002A690 (churned) |
| Core VA | 0x140025220 | 0x1401C7B90 (churned) |
| Response-builder VA | 0x1407ad6d0 | (not separately named in 1.1.1 leaf; folded into `deeplink_success_response_build_sys`-equivalent) |
| Validation rule set | IDENTICAL (scheme/path/resource/app/name/endpoint/apiKey/model) | baseline |
| Success response shape | IDENTICAL (tag=2, "ok"/"success", int@+192=1, bool@+196=true) | baseline |
| apiKey http/https check | IDENTICAL byte pattern | baseline |
| Trailing '/' trim | Present, same role, VA churned | `str_trim_end_matches_char_sys` |
| relay_provider_hashmap_insert-equivalent | NOT located in this round's traced callee set (Unknown, not asserted removed) | present, documented |

## Accepted Unknown
- exact numeric field-offset semantics of the 200B success payload beyond the documented tag/status/
  result/int/bool fields (name/endpoint/apiKey/model exact sub-offsets not individually
  `type_query`-verified this round) — shape confirmed via literal comparison with the 1.1.1 baseline's
  documented offsets 72..196, not independently re-derived byte-by-byte this round.
- relay_provider_hashmap_insert-equivalent side effect: not located in this round's complete 46-ref
  callee enumeration of the core function. recovery_attempts: (1) full callee-ref enumeration of
  `parse_aimami_deeplink_core_sys` cross-checked against the 1.1.1 baseline's documented SIMD/
  Robin-Hood insert shape — no match found; (2) `sub_1400DEBD0` (the one buffer-allocation call in the
  success path) decompiled in full and confirmed to be a generic `RawVec` grow/alloc helper, not a
  hashmap insert. Not marked `accepted_unknown`/`genuine_ceiling` — this is a scope/reachability
  finding (the callsite may exist in a caller outside this owner's direct tree), not a decompile wall.
- `sub_141276960`'s exact SIMD/SWAR compare instruction sequence beyond depth-4 (byteswap tail
  handling) is fully decompiled but not further reduced to canonical Rust source form — cosmetic,
  non-blocking.
