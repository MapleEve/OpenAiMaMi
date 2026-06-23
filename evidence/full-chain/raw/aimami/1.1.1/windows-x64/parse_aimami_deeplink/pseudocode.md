# parse_aimami_deeplink — Pseudocode / Full Chain (Windows x64, AiMaMi 1.1.1)

## parse_aimami_deeplink_owner_sys @ 0x14002A690 (895B)

Tauri IPC command handler wrapper pattern:

```
fn parse_aimami_deeplink_owner_sys(invoke_ctx: &mut InvokeCtx) {
    // Extract InvokeCtx parts: resolver(520B) + app_state(400B)
    copy_invoke_resolver(v13, ctx, 520);
    copy_app_state_slice(v14, ctx+520, 400);

    // Build param descriptor: cmd="parse_aimami_deeplink" + field[url:String]
    v22 = &"parse_aimami_deeplink"   // cmd name ptr
    v23[0] = 21                      // string length of cmd name
    v23[1] = &"url"                  // param name ptr
    v23[2] = 3                       // "url" length
    v23[3] = &v13 (InvokeResolver)
    v24 = &v33 (serde context)

    // Attempt param deserialization
    result = sub_1402FED40(&v26, &v22);   // Tauri serde deserialize url param

    if result.tag == 6 {   // 6 = Ok(value) in Rust Result encoding
        // Success path: url deserialized to v30..v31
        url_str = extract_string(v30, v31);
        // Call business core with deserialized URL
        parse_aimami_deeplink_core_sys(&v18, &url_str);
        // Send response back via IPC resolver
        sub_14083A250(&v22, &v26);  // InvokeResolver::return_result
    } else {
        // Error path: serde failed
        // encode error response via sub_14080C3C0 (InvokeResolver finalize/error)
        sub_14080C3C0(resolver_ptr, resolver_state, payload, result_oword, err_a, err_b);
    }
    // Cleanup: drop relay_context iterators in v33 array
}
```

## parse_aimami_deeplink_core_sys @ 0x1401C7B90 (~2700B)

```
fn parse_aimami_deeplink_core_sys(out: &mut ResultSlot, url: &str) -> Result<DeeplinkResult, Error> {
    // === Phase 1: URL parsing ===
    // sub_14104E1B0: parse URL into components (scheme, authority, path, query, fragment)
    url_parsed = sub_14104E1B0(v64, v36, url.ptr, url.len);

    if url_parsed.err {
        // Error: URL parse failed
        return Err(format_error("invalid URL: {}", url_str));
    }

    // === Phase 2: Scheme validation ===
    // Check scheme length == 6 and bytes == "aimami" (0x616D6961 || 0x696D)
    scheme_len = url_parsed.scheme_len;  // from DWORD1(v65)
    if scheme_len != 6 || scheme_bytes[0..4] ^ 0x616D6961 != 0 || scheme_bytes[4..6] ^ 0x696D != 0 {
        // Scheme is not "aimami"
        // Either: return path-not-found or scheme error
    }

    // sub_1410518F0: extract path component from parsed URL
    path_ptr = sub_1410518F0(&url_components, url_len);
    // sub_141051690: extract scheme portion
    scheme_ref = sub_141051690(&url_components);
    // sub_141051750: extract query string
    query_str = sub_141051750(&url_components);

    // === Phase 3: Path validation ===
    // path must start with "/import" OR contain "v1" + "/import"
    // Exact check (from 0x1401c7fb5):
    //   path_len==2, query_len==7, *path_bytes=="v1" (0x3176=12598, ascii: '1'=49 '/'=47... wait)
    // Actually:
    //   v17==2 (path segment count?), v20==7
    //   *v18==12662 (0x3176="1v"? no... 0x3176 LE= bytes 76 31 = "v1")
    //   *v19 ^ 0x706D692F == 0: bytes 2F 69 6D 70 = "/imp" (LE)
    //   *(v19+3) ^ 0x74726F70 == 0: bytes 70 6F 72 74 = "port" (LE)
    // Path must contain "/import" as a segment (7 chars)
    if path_check_fails {
        return Err(format_error("invalid path: must be /import, got: {}", path));
    }

    // === Phase 4: Build query string object ===
    sub_140730900(v59, query_ptr, query_len);   // parse query string into HashMap<String,String>

    // === Phase 5: Extract resource + app from query ===
    // sub_140375340: HashMap::get(query_map, "resource", 8)
    resource_val = sub_140375340(v64, v59, "resource", 8);
    if resource_val.is_err() || resource_val.value.len != 8 || *resource_val.bytes != "provider" {
        // resource query param missing or not "provider"
        return Err(format_error("invalid resource"));
    }

    // sub_140375340: HashMap::get(query_map, "app", 3)
    app_val = sub_140375340(v64, v59, "app", 3);
    if app_val.is_err() || app_val.value.len != 5 || *app_val.bytes != "codex" {
        // app query param missing or not "codex"
        // Note: len==5 check, bytes == "codex" (0x65646F63 || 0x78)
        return Err(format_error("invalid app"));
    }

    // === Phase 6: Extract name, endpoint, apiKey, model ===
    name_result = deeplink_query_param_extract_sys(v64, v59, "name", 4);     // required
    if name_result.tag != 2 { /* required field missing */ }

    endpoint_result = deeplink_query_param_extract_sys(v64, v59, "endpoint", 8);  // required
    if endpoint_result.tag != 2 { /* required field missing */ }

    apikey_result = deeplink_query_param_extract_sys(v64, v59, "apiKey", 6);  // required
    if apikey_result.tag != 2 { /* required field missing */ }

    // === Phase 7: Validate apiKey is HTTP/HTTPS URL ===
    // apiKey.len >= 7 AND (bytes[0..4]=="http" AND bytes[3..7]=="://p" for http://)
    // OR bytes[0..8]=="https://"
    // Exact binary check at 0x1401c8352:
    //   *((_QWORD *)&v73 + 1) >= 7   (len >= 7)
    //   *(_DWORD *)v73 ^ 0x70747468 == 0  ("http" LE)
    //   *(_DWORD *)(v73 + 3) ^ 0x2F2F3A70 == 0  ("p://" LE)
    //   OR: len==7 and full 8-byte check for "https://"
    if apikey_validation_fails {
        return Err("apiKey must be a valid http/https URL");
    }

    // === Phase 8: model (optional) ===
    model_result = sub_140375340(v64, v59, "model", 5);    // optional
    if model_result.is_err() {
        // model absent: use default
        model = deeplink_model_default_none_sys(v53);    // alloc 7B = "sonnet-..." default
    } else {
        // model present: copy from query
        model = model_result.value;
    }

    // === Phase 9: Validate endpoint URL length ===
    // sub_14104E1B0 validates endpoint str as URL
    endpoint_url_check = sub_14104E1B0(v54, v36, v73, apikey_len);
    if endpoint_url_check.is_err() {
        // error path: deeplink_endpoint_str_clone_sys → sub_1410A2210 (Option::None)
    } else {
        deeplink_endpoint_str_clone_sys(v54, v64);   // copy endpoint URL into result slot
    }

    // === Phase 10: Trim trailing slash from apiKey ===
    apikey_trimmed = str_trim_end_matches_char_sys(v73, apikey_len, 47);  // '/' = 0x2F

    // === Phase 11: Alloc workspace then open via sub_14010E700 ===
    sub_14010E700(v64, apikey_trimmed_len, 0, 1, 1);  // Vec::with_capacity or similar

    // === Phase 12: Build RelayProvider struct and insert into TLS AppState HashMap ===
    // result struct fields (from v31[]):
    //   [0] = name.len, [1] = name.ptr  → name string
    //   [2] = endpoint.len, [3] = endpoint.ptr → endpoint URL
    //   [4] = apiKey trimmed len, [5] = apiKey trimmed ptr
    //   [6] = model.len, [7] = model.ptr
    //   [8] = ? (extra field)
    //   + oword fields: v41=model_oword, v43=endpoint_clone_oword
    relay_provider_entry = RelayProvider {
        name: name_str,
        endpoint: endpoint_str,
        api_key: apikey_trimmed,
        model: model_str,  // optional, default = "sonnet-..."
    };
    sub_140214EA0(v64, v31);   // deeplink_success_response_build_sys writes response

    // Write result to output slot
    copy_result(a1[0..40], v65);   // sub_141212FB0(a1+40, &v65, 160)
    *a1 = response_oword;

    // === Phase 13: Cleanup relay_provider HashMap entries ===
    sub_140082DE0(v59);   // drop query HashMap

    // Return: Result::Ok({status:"ok", result:"success"})
    // NOTE: NO config.toml write, NO upsert_relay_provider IPC call
    //       Provider is inserted only into TLS in-memory relay state
    //       (TLS[TlsIndex]+584 = relay providers HashMap)
}
```

## sub_140214EA0 / deeplink_success_response_build_sys @ 0x140214EA0 (321B)

```
// Builds response: {status: "ok", result: "success"}
fn deeplink_success_response_build_sys(out: &mut ResponseSlot, src: &ProviderInputSlot) {
    // Alloc 2B for status string "ok" (0x6B6F LE = 'o'+'k')
    status_ptr = alloc(2, 1);
    *status_ptr = 0x6B6F;  // "ok" (LE: 'o'=6F, 'k'=6B)

    // Alloc 7B for result string "success"
    result_ptr = alloc(7, 1);
    *(result_ptr+3) = 1936942435;  // "cess" LE (0x73736563)
    *result_ptr    = 1667462483;   // "succ" LE (0x63637573)... wait:
    // 1667462483 = 0x636375_53? Let me verify:
    // 1667462483 dec = 0x637 ccab3? No:
    // 1667462483 = 0x636375_73... actually:
    // 1667462483 / 256^3 = 99 = 'c'; remaining = 1667462483 - 99*16777216 = 1667462483 - 1660944384 = 6518099
    // 6518099 / 65536 = 99 = 'c'; remaining = 6518099 - 6488064 = 30035
    // 30035 / 256 = 117 = 'u'; remaining = 30035 - 29952 = 83 = 'S'...
    // Correct: "Succ" with capital S? Or standard "succ"?
    // Combined 7 bytes at offset 0 and offset 3:
    // bytes[0..4] = LE(1667462483) = [83, 117, 99, 99] = "Succ"  -- capital S
    // bytes[3..7] = LE(1936942435) = [99, 101, 115, 115] = "cess"  -- overlap at [3]
    // Actually offset+3 means bytes 3,4,5,6: [c,e,s,s] and [0..4]=[S,u,c,c]
    // So "Success"? But status string is "ok" (lowercase). Result string = "Success" (7B).
    // Actually status = "ok" (2B lowercase), result = "success" or "Success" (7B)

    // Fill provider fields into output slot at offsets 72..192
    // offset+0   = 2 (type tag: Ok/success enum)
    // offset+8   = status_ptr (2B "ok")
    // offset+16  = 2 (status len)
    // offset+24  = 7 (result len)
    // offset+32  = result_ptr (7B "success")
    // offset+40  = 7
    // offset+48  = 0
    // offset+56  = 8
    // offset+64  = 0
    // offset+72..184 = provider fields copied from src owords
    // offset+192 = 1 (int field)
    // offset+196 = 1 (bool field: success=true)
}
```
