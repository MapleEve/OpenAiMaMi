# get_relay_provider_quota — WIN 1.1.1 Pseudocode Summary

## Owner: get_relay_provider_quota_coroutine_sys @ 0x14093DEB0 (4746B)

Source binary SHA256: d24e429ab16a9b683c1c23212555c7d1d59a3e2e6ee24a9f3a16acd7f8231610

### Core logic (Phase 0 / case 0 path):

```
// Param extraction
manager   = serde_extract(args, "manager",    type=String, len=7)   // sub_141214620
providerId = serde_extract(args, "providerId", type=String, len=10)  // sub_1402FED40

// Lock relay state (sub_14006F4B0 = lock deref / Arc deref)
relay_state_lock = deref_arc(a1 + 6216)

// Core quota lookup (relay_quota_state_lookup_sys @ 0x1406DB960)
result = relay_quota_state_lookup(relay_state_lock, manager, providerId)

// If found: HTTP request build (relay_quota_http_request_builder_sys @ 0x1408DBB30)
//   + keychain lookup (relay_keychain_lookup_for_quota_sys @ 0x1402EE7C0)
//   + serialize response (sub_140229D80)
// If not found: 0x8000000000000000 (None/Error)

// Respond
InvokeResolver::respond(sub_14080C3C0, result)
```

### relay_quota_state_lookup_sys @ 0x1406DB960 (size: see callees)

```
fn relay_quota_state_lookup(state_ptr, manager: &str, provider_id: &str) -> Option<RelayProviderQuota> {
    // Acquire Windows lock (ICEX8 spin + WakeByAddressSingle)
    // reads state.poisoned flag (v8+17) -> panic "relay state poisoned" if set

    let quota_vec_ptr = *(state_ptr + 32) as *const RelayProviderQuota;  // Vec.ptr
    let quota_count   = *(state_ptr + 40) as usize;                       // Vec.len
    // stride = 232B per entry (RelayProviderQuota)

    for i in 0..quota_count {
        let entry = quota_vec_ptr + i * 232;
        let entry_id = *(entry + 16) as u64;   // == provider_id (u64 or str discriminant)
        if entry_id == provider_id && str_eq(*(entry + 8), manager) {
            // Hit: clone entry via relay_quota_item_clone_sys
            return Some(relay_quota_item_clone(entry))
        }
    }

    // relay_keychain_lookup_for_quota_sys path (sub_1402EE7C0): search TOML secrets
    //   read secrets.json, keychain module, env USER/USERNAME, SHA-256 API key hash
    //   -> updates quota entry's auth token

    return None  // 0x8000000000000000
}
```

### relay_quota_item_clone_sys @ 0x14065F950

Clones RelayProviderQuota struct (232B). Fields layout confirmed:

| offset | size | type | field |
|---|---|---|---|
| +0 | 16 | String (ptr+len) | field_0 (name?) |
| +16 | 8 | u64 | field_0_cap |
| +24 | 16 | String | field_1 |
| +40 | 8 | u64 | field_1_cap |
| +48 | 16 | String | field_2 |
| +64 | 8 | u64 | field_2_cap |
| +72 | 16 | String | field_3 |
| +88 | 8 | u64 | field_3_cap |
| +96 | 16 | String | field_4 (manager?) |
| +112 | 8 | u64 | field_4_cap |
| +120 | 24 | struct (via sub_140364880) | nested_date_or_range |
| +144 | 16 | String | field_5 (providerId?) |
| +160 | 8 | u64 | field_5_cap |
| +168 | 8 | Option<u64> (0x8000=None) | quota_count |
| +176 | 16 | __int128 | quota_range_lo |
| +192 | 16 | __int128 | quota_range_hi or flags |
| +208 | 16 | __int128 | field_extra |
| +224 | 4 | i32 | status_or_type |
| +228 | 1 | bool | flag_a |
| +229 | 1 | bool | flag_b |
| +230 | 1 | bool | flag_c |
| +231 | 1 | pad | - |

Total confirmed: 232B (matches Vec stride).

### relay_keychain_lookup_for_quota_sys @ 0x1402EE7C0

```
// Path 1: TOML-based secrets lookup
let secrets_path = relay_state.get_field("secrets.json");
let secrets_map = toml_parse(secrets_path);
// hashmap lookup with SIMD: search for (manager, providerId) key
// SHA-256 API key hash: alloc 32B, byte-swap+shuffle (hex encode)
// module: codexmate_lib::core::relay::keychain (src\core\relay\keychain.rs)

// Path 2: env var fallback
let user = env::var("USER").or(env::var("USERNAME"))

// Log gate: debug logging if *off_141899A88 > 2
// Error enum: 0x8000000000000007 = keychain specific error
```

### relay_quota_http_request_builder_sys @ 0x1408DBB30

Builds HTTP request for quota fetch endpoint:
- `relay_quota_extra_headers_validate_sys@0x1406D4BC0`: validates `extraHeaders` param as JSON object
  - error: `"extraHeaders must be a JSON object"` / `"额外 Headers 无效"` (Chinese, win-specific)
  - uses `http-1.4.0` crate (from `.cargo/registry/...`)
- `relay_quota_date_header_build_sys@0x1406D5B10`: builds Date-type header entries
  - `a1+120 = 1000 * unix_epoch_sec` (milliseconds timestamp)
  - `a1+128 = 2` (Date type discriminant)
- `relay_quota_header_line_trim_sys@0x1406D3F90`: trims trailing `\r\n` from header lines
- `sub_1406D3820`, `sub_1406D35D0`: additional header field builders

### Error paths

| error | sentinel / string | path |
|---|---|---|
| quota not found | 0x8000000000000000 | relay_quota_state_lookup miss (LABEL_15) |
| relay state poisoned | panic "relay state poisoned" | ICEX8 + v8+17 flag |
| CoreError | 0x8000000000000001 | outer frame error propagation |
| KeychainError | 0x8000000000000007 | relay_keychain_lookup_for_quota_sys |
| extraHeaders invalid | string "extraHeaders must be a JSON object" | http builder |
| extraHeaders 无效 (Chinese) | "额外 Headers 无效" | win-specific string |
| unsupported | "unsupported" string | http builder fallback |

## Decompile status

- owner `get_relay_provider_quota_coroutine_sys@0x14093DEB0`: FULL decompile (4746B, 150+ locals)
- `relay_quota_state_lookup_sys@0x1406DB960`: FULL decompile
- `relay_quota_item_clone_sys@0x14065F950`: FULL decompile
- `relay_keychain_lookup_for_quota_sys@0x1402EE7C0`: FULL decompile (large, ~9000B)
- `relay_quota_http_request_builder_sys@0x1408DBB30`: PARTIAL (truncated at 95177 chars, core callees confirmed)
- `relay_quota_date_header_build_sys@0x1406D5B10`: FULL decompile
- `relay_quota_extra_headers_validate_sys@0x1406D4BC0`: FULL decompile (2230B)
- `relay_quota_header_line_trim_sys@0x1406D3F90`: FULL decompile

## Accepted unknowns

- `sub_1408DBB30` body: truncation RESOLVED — actual size=15931B (not 95177 char). 47 callees, 591 basic_blocks confirmed. 4 previously unknown callees now fully reversed and renamed.
- Exact field names in RelayProviderQuota struct: not recoverable from stripped binary (no DWARF); field count and stride confirmed
- `sub_1406D3820`, `sub_1406D35D0`: not deep-traced (sub-header-field builders, small size, not blocking)

---

## Extended Pseudocode (session <审计会话>)

### relay_quota_provider_url_classifier_sys @ 0x1406D5620 (742B)

```
fn relay_quota_provider_url_classifier(out: &mut ProviderClassification, url: &str) {
    // Checks url prefix/substring against known provider domains
    // Returns: discriminant (0-11), label_str, quota_url_str
    match url {
        s if starts_with(s, "api.deepseek.com")      => (disc=0, quota_url="..."),
        s if starts_with(s, "api.stepfun.ai")         => (disc=1, quota_url="..."),
        s if starts_with(s, "api.stepfun.com")        => (disc=1, quota_url="..."),
        s if starts_with(s, "api.siliconflow.cn")     => (disc=2, quota_url="..."),
        s if starts_with(s, "api.siliconflow.com")    => (disc=3, quota_url="..."),
        s if starts_with(s, "openrouter.ai")          => (disc=4, quota_url="..."),
        s if starts_with(s, "api.novita.ai")          => (disc=5, quota_url="..."),
        s if starts_with(s, "api.moonshot.cn")        => (disc=6, quota_url="..."),
        s if starts_with(s, "platform.kimi.com")      => (disc=6, quota_url="..."),
        s if starts_with(s, "api.moonshot.ai")        => (disc=7, quota_url="..."),
        s if starts_with(s, "platform.kimi.ai")       => (disc=7, quota_url="..."),
        s if starts_with(s, "api.kimi.com/coding")    => (disc=8, quota_url="https://api.kimi.com/coding/v1/usages"),
        s if starts_with(s, "api.minimaxi.com")       => (disc=9, quota_url="minimax-coding-plan"),
        s if starts_with(s, "api.minimax.io")         => (disc=10, quota_url="minimax-coding-plan"),
        _                                              => (disc=11, fallback),
    }
    out.label_ptr = label_str.ptr; out.label_len = label_str.len;
    out.quota_url_ptr = quota_url.ptr; out.quota_url_len = quota_url.len;
    out.discriminant = disc as u8;
}
```

### relay_minimax_quota_response_parser_sys @ 0x1408E2820 (2265B)

```
fn relay_minimax_quota_response_parser(out, http_state, a3, a4) -> Result<QuotaOutput, CoreError> {
    // Phase dispatch (v6 = *(u8*)(a2+840)):
    //   case 0: build phase-label ("api.minimax.ioapi.minimaxi.com" or "https://...")
    //   case 1/2/3: sub_14124C380/C3A0 (progression)
    sub_1408E34D0(out_tmp, a2, a3, a4); // HTTP response state machine
    if out_tmp != 2 { // not pending
        // parse JSON response body from http_state
        let base_resp = json_lookup(body, "base_resp");
        let status_code = json_lookup(base_resp, "status_code"); // i64
        if status_code != 0 {
            let status_msg = json_lookup(base_resp, "status_msg"); // String
            // return error: format "MiniMax coding plan error {status_code}: {status_msg}"
        }
        let model_remains = json_lookup(body, "model_remains"); // array
        // Scan for model_name == "general":
        for entry in model_remains.iter() {
            let model_name = json_lookup(entry, "model_name"); // 7B String
            // XOR check: *u32 ^ 0x656E6567 == 0 && *(u32+3) ^ 0x6C617265 == 0  => "general"
            if model_name == "general" {
                let interval_pct = json_lookup(entry, "current_interval_remaining_percent"); // Option<f64>
                let weekly_status = json_lookup(entry, "current_weekly_status"); // bool
                let weekly_pct = json_lookup(entry, "current_weekly_remaining_percent"); // Option<f64>
                // Build output list with interval_pct, weekly_pct
                // Output label: "MiniMax Token Plan 用量" (19B UTF-8)
                return Ok(quota_output);
            }
        }
        // If no "general" model found:
        if /* has model_remains but no pct */ { error("MiniMax coding plan response missing remaining percent") }
        else { error("MiniMax coding plan response missing general quota") }
    }
    return Pending; // 0x8000000000000001
}
```

### relay_quota_http_response_state_machine_sys @ 0x1408E34D0 (1754B)

```
fn relay_quota_http_response_state_machine(out, http_ctx, a3) {
    // Phase machine (phase = *(u8*)(http_ctx+48)):
    // case 0: init -- sub_1407299F0 (init HTTP), sub_14064F190 (connect/alloc)
    //   Copies fields: request ptr, response slot, async handle
    // case LABEL_11: recv body -- sub_140C8E1D0(response + 56, a3)
    //   If status == 4: return Err(CoreError)
    //   If status == 3: deserialize JSON body (sub_140C62EC0)
    //   If status ok: check HTTP status code (*(http_ctx+56), word)
    //     200-299: copy response data to out
    //     else: free connection, return Err
    // case LABEL_18: parse body -- sub_140A03C00(http_ctx+200, a3)
    //   result byte discriminant: 6=redirect, 7=abort
    // Cleanup path: relay_http_request_cleanup_sys(http_ctx+56, http_ctx+64)
}
```
