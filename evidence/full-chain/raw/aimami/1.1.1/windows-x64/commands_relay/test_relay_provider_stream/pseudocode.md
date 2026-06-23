# Pseudocode — test_relay_provider_stream (Windows x64, AiMaMi 1.1.1)

session: wf-aimami111-delta-20260616
machine: <本地机器>
date: 2026-06-16

## Full-Chain Pseudocode

```
async fn test_relay_provider_stream(
    manager: String,       // 7B @0x1412fa999
    providerId: String,    // 10B @0x1412fa9a0
    model: String,         // 5B @0x1412fab69
    onEvent: Handler,      // SSE event callback
) -> Result<(), RelayError> {

    // Phase 1: Quota state lookup
    // relay_quota_state_lookup_sys @ 0x1406DB960
    let quota_state = {
        // WIN lock: _InterlockedCompareExchange8 at quota_vec+16
        // Scan providers Vec stride=232B, match on (manager, providerId)
        // Hit: relay_quota_item_clone_sys @ 0x14065F950 (clone 232B item)
        // Miss: return 0x8000000000000000 (sentinel)
        quota_lookup(manager, providerId)
    };

    // Phase 2: Keychain lookup for quota
    // relay_keychain_lookup_for_quota_sys @ 0x1402EE7C0
    let api_key = {
        // Read secrets.json via sub_14107A2D0
        // Env fallback: USER / USERNAME @ 0x141089D90
        // SHA-256 SIMD hash: sub_140001360(32, 1) for key derivation
        // Error path: 0x8000000000000007 (keychain miss)
        keychain_lookup(quota_state)
    };

    // Phase 3: SSE HTTP stream execution
    // relay_draft_stream_sse_executor_sys @ 0x1408BDE90 (size=11908B)
    let stream_result = {
        // Model type detection: relay_model_type_classifier_sys @ 0x1405C4350
        // HTTP request build: relay_draft_stream_http_request_builder_sys @ 0x1405BF9E0
        // POST to baseUrl + /v1/chat/completions (OpenAI) or /v1/messages (Anthropic)
        // Authorization: Bearer <api_key>
        // SSE stream: read events, fire onEvent callback per chunk
        sse_stream(api_key, model, onEvent)
    };

    // Phase 4: Provider score update (latency-based)
    // relay_provider_score_update_sys @ 0x1406E8F50 (renamed from sub_1406E8F50)
    {
        // score at state+224:
        //   latency < 200ms  -> score=100
        //   200-599ms        -> score=70
        //   600-1499ms       -> score=40
        //   >=1500ms         -> score=20
        // state+200 = latency_val, state+192 = response_ref
        update_provider_score(stream_result.latency_ms)
    };

    // Phase 5: Event payload build + emit
    // relay_event_payload_builder_sys @ 0x140229AF0
    let event_payload = {
        // JSON: { schemaVersion, success, code, message, warnings, data }
        // relay_event_field_warnings_sys @ 0x1402494C0
        // relay_event_field_data_sys @ 0x1402495E0
        build_event_payload(stream_result)
    };

    // Phase 6: Config write-back (SIDE EFFECT — unique to this command)
    // relay_providers_config_write_and_persist_sys @ 0x1406E6960
    {
        // Serialize relay state under WIN lock (_InterlockedCompareExchange8 + WakeByAddressSingle)
        // sub_1406DA6B0: serialize_relay_state
        // sub_1406EAED0: JSON pretty-print (2-space indent) + atomic write
        //   relay_atomic_write_leaf_sys @ 0x140504310:
        //     GetCurrentProcessId -> build temp filename
        //     WriteFile loop (sub_141097C30)
        //     CloseHandle
        //     rename temp -> final (sub_140504130)
        //     Error: "atomic write: missing parent" if parent dir missing
        //   Return codes: 10=ok, 9=IoError, 2=serialize_err, 3=other
        // Fields written: schemaVersion/providers/activeByIde/proxy/
        //   codexRouterEnabled/codexApiLogin/codexApiSlots/
        //   displayTagGlobal/displayTagWoyao
        persist_relay_config()
    };

    // Phase 7: Cleanup / drop
    // relay_draft_test_input_drop_sys @ 0x1401D6220 (drop test input)
    // sub_1408F2270: stream cleanup, releases onEvent handler slots stride=96B
    drop_and_cleanup();
}
```

## Struct Fields (Relay Quota Item, stride=232B)

Inferred from relay_quota_state_lookup_sys scan:
- offset+0: manager (String ptr+len)
- offset+16: WIN atomic lock byte (_InterlockedCompareExchange8 target)
- offset+~32: providerId
- offset+168: latency accumulator (used by score updater)
- offset+176: response ref
- offset+192: response_ref (score updater writes)
- offset+200: latency_val (score updater writes)
- offset+224: quality_score (score updater writes: 20/40/70/100)

## Error Paths

| code | meaning | source |
|---|---|---|
| 0x8000000000000000 | quota miss (provider not found) | relay_quota_state_lookup_sys |
| 0x8000000000000007 | keychain miss (no API key) | relay_keychain_lookup_for_quota_sys |
| 9 (IoError) | atomic write fs error | relay_atomic_write_leaf_sys |
| 2 | serialize error | relay_atomic_write orchestrator |
| 3 | other error | relay_atomic_write orchestrator |
| 10 | ok | relay_atomic_write orchestrator |
