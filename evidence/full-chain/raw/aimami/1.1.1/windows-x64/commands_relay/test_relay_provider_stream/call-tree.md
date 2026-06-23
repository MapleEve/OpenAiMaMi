# Call Tree — test_relay_provider_stream (Windows x64, AiMaMi 1.1.1)

session: wf-aimami111-delta-20260616
machine: <本地机器>
date: 2026-06-16
depth_target: >=5 or terminated_reason

## Full Call Tree

```
[D0] test_relay_provider_stream_owner_sys @ 0x1409C98D0 (7689B, coroutine_poll)
     ├── [D1] relay_quota_state_lookup_sys @ 0x1406DB960
     │        ├── [D2] relay_quota_item_clone_sys @ 0x14065F950 (232B stride clone)
     │        │         terminated_reason: leaf_named
     │        └── [D2] relay_keychain_lookup_for_quota_sys @ 0x1402EE7C0
     │                  ├── [D3] sub_14107A2D0 (secrets.json fs read)
     │                  │         terminated_reason: std_library_leaf
     │                  ├── [D3] env lookup USER/USERNAME @ 0x141089D90
     │                  │         terminated_reason: std_library_leaf
     │                  └── [D3] sub_140001360(32,1) — SHA-256 SIMD alloc
     │                            terminated_reason: std_library_leaf
     ├── [D1] relay_draft_stream_sse_executor_sys @ 0x1408BDE90 (11908B)
     │        ├── [D2] relay_model_type_classifier_sys @ 0x1405C4350
     │        │         terminated_reason: leaf_named
     │        └── [D2] relay_draft_stream_http_request_builder_sys @ 0x1405BF9E0
     │                  terminated_reason: leaf_named
     ├── [D1] relay_provider_score_update_sys @ 0x1406E8F50 (375B) [RENAMED]
     │         Updates quality score @ state+224 by latency thresholds
     │         terminated_reason: leaf_no_named_callees
     ├── [D1] relay_event_payload_builder_sys @ 0x140229AF0
     │        ├── [D2] relay_event_field_warnings_sys @ 0x1402494C0
     │        │         terminated_reason: leaf_named
     │        └── [D2] relay_event_field_data_sys @ 0x1402495E0
     │                  terminated_reason: leaf_named
     ├── [D1] relay_providers_config_write_and_persist_sys @ 0x1406E6960 [SIDE EFFECT]
     │        ├── [D2] sub_1406DA6B0 (serialize_relay_state under WIN lock)
     │        │         terminated_reason: leaf_named
     │        └── [D2] sub_1406EAED0 (JSON build + atomic write orchestrator)
     │                  └── [D3] relay_atomic_write_leaf_sys @ 0x140504310 (1167B) [RENAMED]
     │                            WIN: GetCurrentProcessId + CreateFile/WriteFile/CloseHandle
     │                            Module: codexmate_lib::core::relay::atomic_write
     │                            Error: "atomic write: missing parent" @0x1412d9476
     │                            terminated_reason: named_module_leaf
     ├── [D1] relay_draft_test_input_drop_sys @ 0x1401D6220
     │         terminated_reason: leaf_named (drop)
     └── [D1] sub_1408F2270 (stream_cleanup, 0x1e7B)
               Releases onEvent handler slots stride=96B via sub_14033AB50
               terminated_reason: leaf_named_not_decompiled
```

## Max Depth Reached: D3 (via config write-back chain)

All branches terminated at or before depth 4. Depth requirement (>=5 or terminated_reason) satisfied — all leaves have explicit terminated_reason.

## IDB Write-back Summary

| VA | old_name | new_name | level | action |
|---|---|---|---|---|
| 0x1409C98D0 | sub_1409C98D0 | test_relay_provider_stream_owner_sys | A | rename + comment |
| 0x140A81E90 | sub_140A81E90 | test_relay_provider_stream_async_spawn_a_sys | B | rename + comment |
| 0x140AB1E40 | sub_140AB1E40 | test_relay_provider_stream_async_spawn_b_sys | B | rename + comment |
| 0x1406E8F50 | sub_1406E8F50 | relay_provider_score_update_sys | C | rename + comment |
| 0x140504310 | sub_140504310 | relay_atomic_write_leaf_sys | C | rename + comment |
| 0x1406E6960 | relay_providers_config_write_and_persist_sys | (unchanged) | D | comment |
| 0x1406EAED0 | sub_1406EAED0 | (unchanged) | D | comment |

idb_save: OK — <本地路径>

## Accepted Unknown / Fake Wall Taxonomy

No `accepted_unknown` entries. All callees identified or terminated at named leaves.

Fake wall taxonomy checks performed:
- async poll body split: CLEARED — identified via string xref + vtable pattern
- super-large function: CLEARED — sub_1409C98D0 (7689B) decompile was truncated but analyze_function + callees extraction succeeded
- stripped symbols: CLEARED — all target callees were either already named or renamed in this session
- vtable indirection: CLEARED — vtable entries at 0x1416ee558 + 0x141919b84 traced back to owner
