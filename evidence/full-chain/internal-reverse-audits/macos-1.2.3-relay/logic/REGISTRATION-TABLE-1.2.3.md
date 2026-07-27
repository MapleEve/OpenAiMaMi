# REGISTRATION-TABLE-1.2.3 — macOS relay 命令注册表

23 条上游 `commands::relay` 命令（Ground truth: Windows `commands/relay/SURFACE-MANIFEST.md` 前端 ipc-contracts.jsonl + 深层页面提取交叉核验，跨平台命令名普适）。Mac 侧文件名/地址来自 `raw/aimami/1.2.3/macos-arm64/commands/relay/ida/pseudocode/`。

| 命令名 | Mac 反编译文件 | Mac 地址 | 前端调用方（服务对象方法） | 备注 |
|---|---|---|---|---|
| `load_relay_state` | `load_relay_state_0x10053cff0.c` | 0x10053cff0 | `je.loadState` | 组合查询 hook `ea` 聚合入口之一 |
| `get_relay_active` | `get_relay_active_0x1009a4f70.c` | 0x1009a4f70 | `je.getActive` | 定位方法：`callees(run 分发器)` 匹配 hash |
| `get_relay_proxy_status` | `get_relay_proxy_status_0x1009a3d50.c` | 0x1009a3d50 | `je.getProxyStatus` | 同上定位方法 |
| `upsert_relay_provider` | `upsert_relay_provider_0x10053f260.c` | 0x10053f260 | `je.upsert` | Add/Edit Provider Dialog 提交 |
| `delete_relay_provider` | `delete_relay_provider_0x10053def0.c` | 0x10053def0 | `je.delete` | 二次确认 AlertDialog |
| `set_relay_provider_network` | `set_relay_provider_network_0x10053fae0.c` | 0x10053fae0 | `je.setProviderNetwork` | NetworkModeDialog |
| `activate_relay_provider` | `activate_relay_provider_0x10053f4a0.c` | 0x10053f4a0 | `je.activate` | Provider 卡片 IconActionButton |
| `deactivate_relay_provider` | `deactivate_relay_provider_0x10053f8a0.c` | 0x10053f8a0 | `je.deactivate` | 同上 |
| `reorder_relay_providers` | `reorder_relay_providers_0x10053f6e0.c` | 0x10053f6e0 | `je.reorderProviders` | dnd-kit 拖拽落位后调用 |
| `set_codex_router_enabled` | `core/relay/manager/set_codex_router_enabled_0x*.c`（4 地址变体） | 多个（manager 内） | `je.setCodexRouterEnabled` | CodexRouter 总开关；本轮定位到具体地址变体，见 gate report §⓪ |
| `set_codex_router_no_account_mode` | `set_codex_router_no_account_mode_0x1006fae50.c` | 0x1006fae50 | `je.setCodexRouterNoAccountMode` | NoAccountMode 子开关 |
| `get_codex_router_auth_readiness` | `get_codex_router_auth_readiness_0x10053fd20.c` | 0x10053fd20 | `je.getCodexRouterAuthReadiness` | **Windows 对应体是 ICF 折叠共享 dispatcher `open_path`，以 Mac 此文件为跨平台 ground truth** |
| `diagnose_codex_router` | `diagnose_codex_router_0x10053e0c0.c` | 0x10053e0c0 | 通用 invoke 包装 `da` | Router 开关成功后自动核实调用 |
| `export_relay_config` | `export_relay_config_0x10053d250.c` | 0x10053d250 | 导入导出下拉菜单 `us` | |
| `import_relay_config` | `import_relay_config_0x10053d540.c` | 0x10053d540 | 同上 | |
| `test_relay_draft_stream` | `test_relay_draft_stream_0x1000eabb0.c` | 0x1000eabb0 | `TestStreamDialog` (`tn`) | Tauri Channel 流式测试 |
| `fetch_relay_models_draft` | `fetch_relay_models_draft_0x100193810.c` | 0x100193810 | AddModelDialog / 编辑表单草稿测试 | 历史曾有 decompile 服务端截断（1023/69580 chars），已用 disasm 分块补完，见 DELTA-LOGIC-1.2.3.md |
| `get_relay_provider_quota` | `get_relay_provider_quota_0x1001ca750.c` | 0x1001ca750 | `ProviderQuotaBlock` (`gs`) useQuery | 定位方法：`find_regex` 命令名字符串偏移 → `xrefs_to` |
| `load_quota_history` | `load_quota_history_0x1006d4d30.c` | 0x1006d4d30 | quota 历史查询 | |
| `reveal_relay_api_key` | `core/relay/manager/reveal_api_key_0x1002737e0.c`（命名变体） | 0x1002737e0 | IconActionButton | 本轮新定位（此前 B 角度未提及） |
| `detect_api_proxy_config` | 物理归属 `commands/system/ida/pseudocode/detect_api_proxy_config_0x1006fcbb0.c` | 0x1006fcbb0 | NetworkModeDialog | 不在 `commands/relay/` 目录，属误判缺失后补正 |
| `set_api_proxy_config` | 物理归属 `commands/system/ida/pseudocode/set_api_proxy_config_0x1007c89e0.c` | 0x1007c89e0 | 同上 | 同上 |
| `test_api_proxy_config` | 物理归属 `commands/system/ida/pseudocode/test_api_proxy_config_0x1006fc8e0.c` | 0x1006fc8e0 | 同上 | 同上 |

**非 23 条清单内、额外发现的内部方法**：`quit_keeping_router_0x10053d7b0.c`（⚠ `AppHandle::exit(0)`，退出应用留路由运行）。

**辅助/非独立命令的 3 个 `serialize_*` 文件**（`serialize_0x10053d980.c`/`_dc80.c`/`_ddd0.c`）：内部序列化辅助函数，非独立命令 wrapper，不计入 23 条命令表。

**入参/出参字段**：未系统抽取（dim4 gap），本表只提供命令↔函数地址↔前端调用点的注册映射，不是 DTO 契约文档。
