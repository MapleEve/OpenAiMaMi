# test_relay_draft_stream — Call Tree (Windows x64)

深度标注：D=depth, T=terminated_reason

```
test_relay_draft_stream_owner_sys (0x14094F2E0, 4621B) [D0]
│
├── relay_draft_test_deserialize_input_sys (0x140241F50, 426B) [D1]
│   ├── sub_1402F9EB0 (unknown — pre-check) [D2, T=small]
│   ├── relay_draft_test_input_visitor_sys (0x1408943A0, ~4KB) [D2]
│   │   ├── sub_140419A90 — serde deserialize_struct driver [D3]
│   │   ├── sub_140418A10 — RelayIde enum deserializer [D3, T=leaf_enum]
│   │   ├── sub_140521350 — WireApi enum deserializer [D3, T=leaf_enum]
│   │   ├── sub_1402228B0 — map key iteration [D3]
│   │   └── sub_141222340 — missing-field error builder [D3, T=error_path]
│   └── sub_140E30410 (1709B) — Display impl / format error [D2, T=error_path]
│
├── relay_keychain_lookup_for_quota_sys (0x1402EE7C0) [D1, T=shared_leaf]
│   ├── [RelayProvider state Vec scan, stride=232B]
│   ├── [secrets.json file read]
│   └── [SHA-256 API key derivation]
│   NOTE: 共享叶，同 get_relay_provider_quota 使用同一函数
│
├── relay_draft_stream_sse_executor_sys (0x1408BDE90, 11908B) [D1]
│   ├── relay_draft_stream_http_request_builder_sys (0x1405BF9E0, 5327B) [D2]
│   │   ├── sub_14070B280 — URL string ops [D3, T=utility]
│   │   ├── sub_1410A0350 — string slice helper [D3, T=utility]
│   │   ├── sub_141036C20 — HTTP header builder [D3, T=leaf_http]
│   │   ├── relay_model_type_classifier_sys (0x1405C4350, 209B) [D3]
│   │   │   └── sub_1405B7CF0 — bytes eq compare [D4, T=utility]
│   │   ├── sub_1403F1D30 — BTreeMap header ops [D3, T=utility]
│   │   └── sub_1403F1780 — BTreeMap insert/lookup [D3, T=utility]
│   ├── sub_1405C2F20 (566B) — URL path normalize (strip /v1) [D2]
│   │   └── sub_1410A1DF0 — string format/concat [D3, T=utility]
│   ├── sub_1405C4470 (388B) — URL tail trim [D2, T=utility]
│   ├── sub_1405BE5C0 (3465B) — HTTP response stream reader [D2]
│   │   └── [hyper/reqwest SSE read machinery] [D3, T=runtime]
│   ├── sub_1405C27B0 (1787B) — SSE line parse [D2]
│   │   └── [data:/event: line split] [D3, T=utility]
│   ├── sub_1405C3220 (1474B) — SSE chunk dispatch [D2]
│   ├── sub_1405BF9E0 → relay_draft_stream_http_request_builder_sys (above)
│   ├── sub_1405C3870 — HTTP client send [D2, T=net_leaf]
│   ├── sub_140C8CEA0 (168B) — Waker/Arc ops [D2, T=runtime]
│   ├── sub_140C8CDC0 (150B) — Arc drop [D2, T=runtime]
│   ├── sub_140C8E1D0 — poll helper [D2, T=runtime]
│   ├── sub_14070B280 — string ops [D2, T=utility]
│   ├── sub_1407299F0 (407B) — HTTP header map [D2, T=leaf_http]
│   ├── sub_140361A70 (530B) — URI builder [D2, T=leaf_http]
│   ├── sub_140361D20 (390B) — path segment [D2, T=leaf_http]
│   ├── sub_14064F550 (844B) — request finalize [D2]
│   ├── sub_140921FC0 — future drop [D2, T=runtime]
│   ├── sub_1410A1DF0 — string fmt [D2, T=utility]
│   ├── sub_1402F8620 — error mapper [D2, T=utility]
│   ├── sub_14080BB40 — Arc clone [D2, T=runtime]
│   ├── sub_1407FB480 — channel send [D2, T=runtime]
│   ├── sub_14109FB90 / sub_1410A9220 — poll ops [D2, T=runtime]
│   ├── sub_140301240 — timer/sleep [D2, T=runtime]
│   └── sub_1408E9E80 — cleanup [D2, T=runtime]
│
├── relay_event_payload_builder_sys (0x140229AF0) [D1]
│   ├── [schemaVersion field — literal uint]
│   ├── [success field — bool]
│   ├── [code field — int]
│   ├── [message field — string from chunk]
│   ├── relay_event_field_warnings_sys (0x1402494C0, stub) [D2, T=leaf]
│   │   └── sub_140257CD0 — serialize Option<String> as "warnings" [D3, T=leaf]
│   └── relay_event_field_data_sys (0x1402495E0, stub) [D2, T=leaf]
│       └── sub_140268550 — serialize data object as "data" [D3, T=leaf]
│
├── relay_draft_test_input_drop_sys (0x1401D6220, 305B) [D1, T=drop_leaf]
│   └── sub_140001370 — dealloc (5x String + HashMap + entries)
│
└── [async infra drop chain] [D1, T=runtime]
    ├── sub_1408EBDF0 — coroutine state drop (tag=3 path)
    ├── sub_1408ED5D0 — nested future drop
    ├── sub_1408EA510 — Arc-wrapped future drop
    ├── sub_140921810 — relay state drop (InterlockedDecrement64)
    └── sub_14091A6D0 — tagged-union drop dispatcher
```

## 深度统计

| 深度 | 节点数 | 说明 |
|------|--------|------|
| D0 | 1 | owner |
| D1 | 5 | 主要子任务 |
| D2 | ~25 | HTTP/SSE/drop 子模块 |
| D3 | ~15 | utility/leaf |
| D4 | 2 | ultra-leaf |
| 终止原因 | `leaf_enum`/`leaf_http`/`net_leaf`/`runtime`/`utility`/`drop_leaf`/`error_path` |

深度 ≥ 5 已经在 runtime 层终止（hyper/tokio 内部不再展开）。
