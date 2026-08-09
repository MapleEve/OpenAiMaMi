# REGISTRATION-TABLE-1.2.3 — Windows relay 命令注册表

23 条上游 `commands::relay` 命令，Windows 侧地址/文件来自 `raw/aimami/1.2.3/windows-x64/commands/relay/ida/pseudocode/` + `relay-core/owner-map.jsonl`。命令名与 macOS 对齐（跨平台命令名普适），入参/出参未系统抽取（dim4 gap，同 macOS 包）。

| 命令名 | Win 反编译文件 | Win 地址 | 状态 |
|---|---|---|---|
| `activate_relay_provider` | `activate_relay_provider_0x140190250.c` | 0x140190250 | ✅ 已存在 |
| `deactivate_relay_provider` | `deactivate_relay_provider_0x14018f9c0.c` | 0x14018f9c0 | ✅ 已存在 |
| `delete_relay_provider` | `delete_relay_provider_0x140190ae0.c` | 0x140190ae0 | ✅ 已存在 |
| `detect_api_proxy_config` | `detect_api_proxy_config_0x140cc3950.c` | 0x140cc3950 | ✅ 已存在 |
| `export_relay_config` | `export_relay_config_0x14016a7b0.c` | 0x14016a7b0 | ✅ 已存在 |
| `fetch_relay_models_draft` | `fetch_relay_models_draft_0x140cc9510.c` | 0x140cc9510 | ✅ 完整（54514 chars, <工具调用> chunking 恢复） |
| `get_relay_active` | `get_relay_active_0x140188800.c` | 0x140188800 | ✅ 已存在 |
| `get_relay_provider_quota` | `get_relay_provider_quota_0x140cc79d0.c` | 0x140cc79d0 | ✅ 已存在 |
| `get_relay_proxy_status` | `get_relay_proxy_status_0x140188250.c` | 0x140188250 | ✅ 已存在 |
| `import_relay_config` | `import_relay_config_0x14018d960.c` | 0x14018d960 | ✅ 已存在 |
| `load_quota_history` | `load_quota_history_0x140cdb800.c` | 0x140cdb800 | ✅ 完整（36418 chars, <工具调用> chunking 恢复） |
| `load_relay_state` | `load_relay_state_0x140191ce0.c` | 0x140191ce0 | ✅ 已存在 |
| `get_codex_router_auth_readiness` | **无独立 Windows 反编译**——ICF 折叠进共享 dispatcher `open_path_0x140194810.c` | 0x140194810 (共享体) | ⛔ blocked-on-Windows-native-evidence，以 Mac `get_codex_router_auth_readiness_0x10053fd20.c` 为准 |
| `reorder_relay_providers` | `reorder_relay_providers_0x14018ea50.c` | 0x14018ea50 | ✅ 已存在 |
| `reveal_relay_api_key` | `reveal_relay_api_key_0x14018e270.c` | 0x14018e270 | ✅ 已存在 |
| `set_api_proxy_config` | `set_api_proxy_config_0x14018d140.c` | 0x14018d140 | ✅ 已存在 |
| `set_codex_router_enabled` | `set_codex_router_enabled_0x140cbb250.c` | 0x140cbb250 | ✅ 已存在 |
| `set_codex_router_no_account_mode` | `set_codex_router_no_account_mode_0x140cb8050.c` | 0x140cb8050 | ✅ 已存在 |
| `set_relay_provider_network` | `set_relay_provider_network_0x14018f120.c` | 0x14018f120 | ✅ 已存在 |
| `test_api_proxy_config` | `test_api_proxy_config_0x140cc4a70.c` | 0x140cc4a70 | ✅ 已存在 |
| `upsert_relay_provider` | `upsert_relay_provider_0x1401913f0.c` | 0x1401913f0 | ✅ 已存在 |
| `diagnose_codex_router` (推测) | `sub_140187580_0x140187580.c` | 0x140187580 | ⚠️ 内容存在，与 Mac `diagnose_codex_router` 的身份映射未字节级证实 |
| `test_relay_draft_stream` (推测) | `sub_140CCE030_0x140cce030.c` | 0x140cce030 | ⚠️ 内容存在，与 Mac `test_relay_draft_stream` 的身份映射未字节级证实 |

**22/23 命令有清晰同名 Windows 文件**；1 条（`get_codex_router_auth_readiness`）无法从 Windows 侧独立切出；2 条（末两行）内容存在但身份待证。
