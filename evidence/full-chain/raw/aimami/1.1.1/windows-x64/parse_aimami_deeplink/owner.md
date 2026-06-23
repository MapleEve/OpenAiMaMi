# parse_aimami_deeplink — Owner / VA Table (Windows x64, AiMaMi 1.1.1)

## Session
- session: <审计会话>
- machine: <本地机器>
- model: claude-sonnet-4-6
- date: 2026-06-16
- binary: AiMaMi 1.1.1 win64.exe
- sha256: d24e429ab16a9b683c1c23212555c7d1d59a3e2e6ee24a9f3a16acd7f8231610
- idb: <本地路径>
- imagebase: 0x140000000
- binary_format: pe
- pe_machine: x64

## String Locator
- "parse_aimami_deeplink" @ 0x1412ac601 (single xref)
- xref from: parse_aimami_deeplink_owner_sys @ 0x14002A690

## Command Handler (Tauri IPC wrapper)
| name | VA | size | role |
|---|---|---|---|
| parse_aimami_deeplink_owner_sys | 0x14002A690 | 895B (0x37F) | Tauri command wrapper; param extract + dispatch to core |
| parse_aimami_deeplink_core_sys | 0x1401C7B90 | ~2700B (large) | Business core: URL parse, validate, relay provider insert |

## Dispatcher Entry
- main dispatcher: tauri_ipc_main_dispatcher_sys @ 0x14000D2A0 (41-case switch, 17870B)
- parse_aimami_deeplink is in dispatcher callees list: ✅
- string pool in dispatcher confirms: "parse_aimami_deeplink" present in string pool

## IDB Write-Back (A/B level renames)
| old name | new name | VA | level |
|---|---|---|---|
| sub_14002A690 | parse_aimami_deeplink_owner_sys | 0x14002A690 | A |
| sub_1401C7B90 | parse_aimami_deeplink_core_sys | 0x1401C7B90 | A |
| sub_1401C7900 | deeplink_query_param_extract_sys | 0x1401C7900 | B |
| sub_1401C7780 | deeplink_endpoint_str_clone_sys | 0x1401C7780 | B |
| sub_1401C78A0 | deeplink_model_default_none_sys | 0x1401C78A0 | B |
| sub_140214EA0 | deeplink_success_response_build_sys | 0x140214EA0 | B |
| sub_14070B500 | str_trim_end_matches_char_sys | 0x14070B500 | B |
| sub_140730900 | relay_provider_hashmap_insert_sys | 0x140730900 | B |

idb_save: ok=true, path=<本地路径>

## Callers
- tauri_ipc_dispatcher_shim_sys → tauri_ipc_main_dispatcher_sys → parse_aimami_deeplink_owner_sys

## Namespace
- app namespace (in main dispatcher)

## Parameter
- url: String (3B key "url" @ 0x1412ac74a)
