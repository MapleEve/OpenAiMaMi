# parse_aimami_deeplink — Call Tree (Windows x64, AiMaMi 1.1.1)

## session: <审计会话> | date: 2026-06-16

## Full Call Tree

```
tauri_ipc_dispatcher_shim_sys
└── tauri_ipc_main_dispatcher_sys @ 0x14000D2A0 [41-case switch, 17870B]
    └── parse_aimami_deeplink_owner_sys @ 0x14002A690 [895B] (A-level rename)
        ├── sub_141212FB0 @ 0x141212FB0  [memory copy helper]
        ├── sub_1402FED40 @ 0x1402FED40  [Tauri serde param deserialize — extracts url:String from invoke args]
        │   └── [Tauri 2 internal deserialization, not reversed further — standard Tauri invoke pattern]
        │
        ├── [SUCCESS PATH: url deserialized]
        │   └── parse_aimami_deeplink_core_sys @ 0x1401C7B90 [~2700B] (A-level rename)  ← BUSINESS CORE
        │       │
        │       ├── sub_14104E1B0 @ 0x14104E1B0  [URL parser: parse url string → scheme/path/query components]
        │       │   └── LEAF: URL tokenization, pure computation, no side-effect
        │       │
        │       ├── sub_1410518F0 @ 0x1410518F0  [URL component extractor: get path from parsed URL]
        │       │   └── LEAF: pure computation
        │       │
        │       ├── sub_141051690 @ 0x141051690  [URL scheme part accessor]
        │       │   └── LEAF: pure computation
        │       │
        │       ├── sub_141051750 @ 0x141051750  [URL query string accessor]
        │       │   └── LEAF: pure computation
        │       │
        │       ├── relay_provider_hashmap_insert_sys @ 0x140730900 [B-level rename, parses query string]
        │       │   ├── sub_141077010 @ 0x141077010  [TLS accessor: TLS[TlsIndex]+584 = relay_providers_hashmap]
        │       │   │   └── LEAF: TLS read (Windows NtCurrentTeb → TlsIndex offset 584)
        │       │   ├── sub_14108CEE0 @ 0x14108CEE0  [lazy init relay HashMap if not yet init'd]
        │       │   │   └── [not reversed — standard Rust Once/lazy_static init]
        │       │   ├── sub_14106CA00 @ 0x14106CA00  [query string iterator: iterate k=v pairs]
        │       │   │   └── LEAF: string parsing, pure computation
        │       │   └── sub_1403703F0 @ 0x1403703F0  [HashMap::insert SIMD Robin-Hood probe]
        │       │       ├── sub_140624F90 @ 0x140624F90  [hash fn for relay provider key]
        │       │       │   └── LEAF: hash computation
        │       │       ├── sub_141242E30 @ 0x141242E30  [HashMap resize/grow]
        │       │       │   └── LEAF: memory realloc
        │       │       └── sub_141213640 @ 0x141213640  [str equality check]
        │       │           └── LEAF: memcmp
        │       │
        │       ├── sub_140375340 @ 0x140375340 (×3: "resource", "app" validate; then again for resource)
        │       │   [HashMap::get SIMD probe]
        │       │   ├── sub_140625680 @ 0x140625680  [hash fn]
        │       │   │   └── LEAF: hash computation
        │       │   └── sub_141213640 @ 0x141213640  [str equality]
        │       │       └── LEAF: memcmp
        │       │
        │       ├── deeplink_query_param_extract_sys @ 0x1401C7900 (×3: name, endpoint, apiKey)
        │       │   [B-level rename]
        │       │   ├── sub_140625680  [hash fn]
        │       │   │   └── LEAF
        │       │   └── sub_1400D48E0 @ 0x1400D48E0  [HashMap::get with error format]
        │       │       └── LEAF: probe + error string build
        │       │
        │       ├── sub_1410A1DF0 @ 0x1410A1DF0  [Rust core fmt::Display — error message builder]
        │       │   └── LEAF: string formatting (multiple error paths)
        │       │
        │       ├── str_trim_end_matches_char_sys @ 0x14070B500  [trim '/' from apiKey]
        │       │   └── LEAF: UTF-8 scan from end, pure computation
        │       │
        │       ├── sub_14010E700 @ 0x14010E700  [Vec capacity alloc / buffer size check]
        │       │   └── LEAF: arithmetic + conditional alloc
        │       │
        │       ├── deeplink_endpoint_str_clone_sys @ 0x1401C7780  [clone endpoint URL string]
        │       │   ├── sub_1410518F0  [URL path accessor] → LEAF
        │       │   └── sub_140001360 @ 0x140001360  [alloc] → LEAF
        │       │
        │       ├── deeplink_model_default_none_sys @ 0x1401C78A0  [alloc default model string "sonnet-..."]
        │       │   └── sub_140001360  [alloc 7B] → LEAF
        │       │
        │       ├── sub_1401C7780 / sub_1410A2210 @ 0x1410A2210  [Option::None builder for endpoint error case]
        │       │   └── LEAF
        │       │
        │       ├── deeplink_success_response_build_sys @ 0x140214EA0  [build {status:ok,result:success}]
        │       │   ├── sub_140001360 @ 0x140001360  [alloc 2B for "ok"]  → LEAF
        │       │   └── sub_140001360  [alloc 7B for "success"]  → LEAF
        │       │
        │       ├── sub_140082DE0 @ 0x140082DE0  [drop/free query HashMap]
        │       │   └── LEAF: dealloc
        │       │
        │       └── sub_141212FB0  [copy result to output slot]  → LEAF
        │
        └── [RESPONSE DISPATCH]
            ├── sub_14083A250 @ 0x14083A250  [InvokeResolver::return_result — send Ok response to frontend]
            │   └── [Tauri 2 IPC internals, not reversed further]
            └── sub_14080C3C0 @ 0x14080C3C0  [InvokeResolver finalize/error — sends error to frontend]
                └── [WakeByAddressSingle for resolver unlock on Windows]
```

## Depth Analysis
- Depth from IPC entry to LEAF: 5-6 levels achieved
- Terminal leaf types confirmed: alloc/dealloc (fs-level not observed), TLS read (relay state), hash computation, string ops
- **NO fs write leaf** (no atomic_write, no open()/write() path, no config.toml)
- **NO HTTP outbound leaf** (no reqwest/hyper/winhttp calls in call tree)
- **NO IPC re-dispatch** (no sub-invoke to other commands)
- **terminated_reason**: full callee tree of parse_aimami_deeplink_core_sys enumerated; all callees analyzed; terminal leaves are memory/hash/string; no deeper analysis needed

## IDB Write-Back Summary
| function | old name | new name | scope | VA |
|---|---|---|---|---|
| command handler | sub_14002A690 | parse_aimami_deeplink_owner_sys | A-rename | 0x14002A690 |
| business core | sub_1401C7B90 | parse_aimami_deeplink_core_sys | A-rename | 0x1401C7B90 |
| query extractor | sub_1401C7900 | deeplink_query_param_extract_sys | B-rename | 0x1401C7900 |
| endpoint clone | sub_1401C7780 | deeplink_endpoint_str_clone_sys | B-rename | 0x1401C7780 |
| model default | sub_1401C78A0 | deeplink_model_default_none_sys | B-rename | 0x1401C78A0 |
| response builder | sub_140214EA0 | deeplink_success_response_build_sys | B-rename | 0x140214EA0 |
| trim_end_matches | sub_14070B500 | str_trim_end_matches_char_sys | B-rename | 0x14070B500 |
| hashmap insert | sub_140730900 | relay_provider_hashmap_insert_sys | B-rename | 0x140730900 |

idb_save: ok=true path=<本地路径>

## Accepted Unknown

| item | recovery_attempts | ceiling_reason | genuine_ceiling |
|---|---|---|---|
| model default string exact content | hex decode of LE constants 762605671/875443501 attempted — partial: "ons-" + "m024" suggest "sonnet-X" or "claude-..." | 7B embedded const in alloc; no string xref in 逆向分析 cache; full content requires memory read | false — not genuine ceiling, low priority |
| InvokeResolver internals (sub_1402FED40, sub_14083A250) | structure recognized as Tauri 2 serde/resolve pattern; not reversed further | standard framework internals, not relevant to C5 impl | false — not business logic |
| sub_14080C3C0 error path details | analyzed: it is InvokeResolver finalization with _InterlockedCompareExchange8 + WakeByAddressSingle; standard Win IPC pattern | Tauri 2 Win64 resolver, not C5 business logic | false |

All business-relevant leaves: ACCEPTED (no genuine ceilings blocking consumerStartReady)
