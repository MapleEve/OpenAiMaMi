# DELTA-LOGIC-1.2.6-WIN — Windows x64 1.2.4→1.2.6 relay 模块 diff 逻辑

## 概述

Windows x64 1.2.4→1.2.6 delta 中 relay 模块的 per-module full-chain 结论。
本 bundle 从 windows-1.2.6-version-delta 总 bundle 拆分而来，内容来自 raw leaf 的 evidence.md + call-tree.json + interface-report.json。

命令数：14

## 命令 full-chain 结论（消费者面向）

### load_relay_state

- **Owner EA**: `0x140171c40`
- **Owner 函数**: `load_relay_state`
- **模块**: `commands/relay`
- **函数大小**: 0x388 (904 bytes)
- **反编译状态**: decompiled
- **Callee 数量**: 12
- **Edge 数量**: 12
- **终止原因**: leaf_handler
- **副作用**: 无检测到
- **IDA 注释**: Tauri 命令 load_relay_state 的 handler：加载 relay 持久化状态（provider 列表/活跃项等，经 relay manager）。归属：命令名串精确 xref 唯一归属（live 复验）；模块按命令族推断 src\commands\relay.rs。
- **raw leaf**: `raw/aimami/1.2.6/windows-x64/commands/relay/load_relay_state/`
- **call-tree**: `call-tree.json` (edges=12)
- **interface**: `interface-report.json` (confidence=high)

### upsert_relay_provider

- **Owner EA**: `0x140171350`
- **Owner 函数**: `upsert_relay_provider`
- **模块**: `commands/relay`
- **函数大小**: 0x5ee (1518 bytes)
- **反编译状态**: decompiled
- **Callee 数量**: 15
- **Edge 数量**: 15
- **终止原因**: leaf_handler
- **副作用**: 无检测到
- **IDA 注释**: Tauri 命令 upsert_relay_provider 的 handler：按入参 input（provider 配置）新增或更新 relay provider（写副作用：改持久化配置），引用 app(AppHandle) 与 relay manager。归属：命令名串精确 xref 唯一归属（live 复验）；模块按命令族推断 src\commands\relay.rs。
- **raw leaf**: `raw/aimami/1.2.6/windows-x64/commands/relay/upsert_relay_provider/`
- **call-tree**: `call-tree.json` (edges=15)
- **interface**: `interface-report.json` (confidence=high)

### delete_relay_provider

- **Owner EA**: `0x140170a40`
- **Owner 函数**: `delete_relay_provider`
- **模块**: `commands/relay`
- **函数大小**: 0x60b (1547 bytes)
- **反编译状态**: decompiled
- **Callee 数量**: 15
- **Edge 数量**: 15
- **终止原因**: leaf_handler
- **副作用**: ["delete"]
- **IDA 注释**: Tauri 命令 delete_relay_provider 的 handler：按入参 providerId 删除 relay provider 配置（破坏性副作用：移除持久化 provider 记录），引用 app(AppHandle) 与 relay manager。归属：命令名串精确 xref 唯一归属（live 复验）；模块按命令族推断 src\commands\relay.rs。
- **raw leaf**: `raw/aimami/1.2.6/windows-x64/commands/relay/delete_relay_provider/`
- **call-tree**: `call-tree.json` (edges=15)
- **interface**: `interface-report.json` (confidence=high)

### activate_relay_provider

- **Owner EA**: `0x1401701b0`
- **Owner 函数**: `activate_relay_provider`
- **模块**: `commands/relay`
- **函数大小**: 0x5bb (1467 bytes)
- **反编译状态**: decompiled
- **Callee 数量**: 14
- **Edge 数量**: 14
- **终止原因**: leaf_handler
- **副作用**: 无检测到
- **IDA 注释**: Tauri 命令 activate_relay_provider 的 handler：按入参 providerId 激活指定 relay provider，经 relay manager 切换当前活跃 provider 并持久化状态。归属：命令名串精确 xref 唯一归属（live 复验串 0x14177a9e8→本函数）；模块按命令族+同文件 panic-Location 锚定推断为 src\c
- **raw leaf**: `raw/aimami/1.2.6/windows-x64/commands/relay/activate_relay_provider/`
- **call-tree**: `call-tree.json` (edges=14)
- **interface**: `interface-report.json` (confidence=high)

### deactivate_relay_provider

- **Owner EA**: `0x14016f920`
- **Owner 函数**: `deactivate_relay_provider`
- **模块**: `commands/relay`
- **函数大小**: 0x5bb (1467 bytes)
- **反编译状态**: decompiled
- **Callee 数量**: 14
- **Edge 数量**: 14
- **终止原因**: leaf_handler
- **副作用**: 无检测到
- **IDA 注释**: Tauri 命令 deactivate_relay_provider 的 handler：按入参 providerId 停用 relay provider，经 relay manager 清除活跃标记并持久化。归属：命令名串精确 xref 唯一归属（live 复验）；模块按命令族推断 src\commands\relay.rs。
- **raw leaf**: `raw/aimami/1.2.6/windows-x64/commands/relay/deactivate_relay_provider/`
- **call-tree**: `call-tree.json` (edges=14)
- **interface**: `interface-report.json` (confidence=high)

### set_relay_provider_network

- **Owner EA**: `0x14016f080`
- **Owner 函数**: `set_relay_provider_network`
- **模块**: `commands/relay`
- **函数大小**: 0x5cb (1483 bytes)
- **反编译状态**: decompiled
- **Callee 数量**: 14
- **Edge 数量**: 14
- **终止原因**: leaf_handler
- **副作用**: 无检测到
- **IDA 注释**: Tauri 命令 set_relay_provider_network 的 handler：按入参 providerId + network 设置指定 relay provider 的网络配置并持久化（写副作用）。归属：命令名串精确 xref 唯一归属（live 复验）；模块按命令族推断 src\commands\relay.rs。
- **raw leaf**: `raw/aimami/1.2.6/windows-x64/commands/relay/set_relay_provider_network/`
- **call-tree**: `call-tree.json` (edges=14)
- **interface**: `interface-report.json` (confidence=high)

### reorder_relay_providers

- **Owner EA**: `0x14016e9b0`
- **Owner 函数**: `reorder_relay_providers`
- **模块**: `commands/relay`
- **函数大小**: 0x4be (1214 bytes)
- **反编译状态**: decompiled
- **Callee 数量**: 13
- **Edge 数量**: 13
- **终止原因**: leaf_handler
- **副作用**: 无检测到
- **IDA 注释**: Tauri 命令 reorder_relay_providers 的 handler：按入参 orderedIds 重排 relay provider 优先级顺序并持久化（写副作用：改持久化顺序）。归属：命令名串精确 xref 唯一归属（live 复验）；模块按命令族推断 src\commands\relay.rs。
- **raw leaf**: `raw/aimami/1.2.6/windows-x64/commands/relay/reorder_relay_providers/`
- **call-tree**: `call-tree.json` (edges=13)
- **interface**: `interface-report.json` (confidence=high)

### fetch_relay_models_draft

- **Owner EA**: `0x140d871d0`
- **Owner 函数**: `fetch_relay_models_draft`
- **模块**: `commands/relay`
- **函数大小**: 0x3097 (12439 bytes)
- **反编译状态**: decompiled
- **Callee 数量**: 51
- **Edge 数量**: 51
- **终止原因**: leaf_handler
- **副作用**: 无检测到
- **IDA 注释**: Tauri 命令 fetch_relay_models_draft 的 handler：按入参 input（provider 草稿配置）拉取模型列表草稿；HTTP GET {base}/v1/models，支持 OpenAI 与 Anthropic（x-api-key + anthropic-version: 2023-06-01）两种鉴权头，带重试（all retries exhausted）。
- **raw leaf**: `raw/aimami/1.2.6/windows-x64/commands/relay/fetch_relay_models_draft/`
- **call-tree**: `call-tree.json` (edges=51)
- **interface**: `interface-report.json` (confidence=high)

### reveal_relay_api_key

- **Owner EA**: `0x14016e1d0`
- **Owner 函数**: `reveal_relay_api_key`
- **模块**: `commands/relay`
- **函数大小**: 0x56e (1390 bytes)
- **反编译状态**: decompiled
- **Callee 数量**: 14
- **Edge 数量**: 14
- **终止原因**: leaf_handler
- **副作用**: 无检测到
- **IDA 注释**: Tauri 命令 reveal_relay_api_key 的 handler：按入参 providerId 取回该 relay provider 的 API Key 明文返回前端（敏感：凭据明文出进程）。归属：命令名串精确 xref 唯一归属（live 复验）；模块按命令族推断 src\commands\relay.rs。
- **raw leaf**: `raw/aimami/1.2.6/windows-x64/commands/relay/reveal_relay_api_key/`
- **call-tree**: `call-tree.json` (edges=14)
- **interface**: `interface-report.json` (confidence=high)

### get_relay_provider_quota

- **Owner EA**: `0x140d85690`
- **Owner 函数**: `get_relay_provider_quota`
- **模块**: `commands/relay`
- **函数大小**: 0x12f0 (4848 bytes)
- **反编译状态**: decompiled
- **Callee 数量**: 28
- **Edge 数量**: 28
- **终止原因**: leaf_handler
- **副作用**: 无检测到
- **IDA 注释**: Tauri 命令 get_relay_provider_quota 的 handler：按入参 providerId 查询 relay provider 额度/quota。归属：命令名串精确 xref 唯一归属 + panic-Location 两跳锚定 src\commands\relay.rs（内联 core\relay\manager.rs）。
- **raw leaf**: `raw/aimami/1.2.6/windows-x64/commands/relay/get_relay_provider_quota/`
- **call-tree**: `call-tree.json` (edges=28)
- **interface**: `interface-report.json` (confidence=high)

### get_relay_active

- **Owner EA**: `0x14016dbe0`
- **Owner 函数**: `get_relay_active`
- **模块**: `commands/relay`
- **函数大小**: 0x3e8 (1000 bytes)
- **反编译状态**: decompiled
- **Callee 数量**: 13
- **Edge 数量**: 13
- **终止原因**: leaf_handler
- **副作用**: 无检测到
- **IDA 注释**: Tauri 命令 get_relay_active 的 handler：读取当前活跃 relay provider（经 relay manager 状态）。归属：命令名串精确 xref 唯一归属（live 复验）；模块按命令族推断 src\commands\relay.rs。
- **raw leaf**: `raw/aimami/1.2.6/windows-x64/commands/relay/get_relay_active/`
- **call-tree**: `call-tree.json` (edges=13)
- **interface**: `interface-report.json` (confidence=high)

### get_relay_proxy_status

- **Owner EA**: `0x140167df0`
- **Owner 函数**: `get_relay_proxy_status`
- **模块**: `commands/relay`
- **函数大小**: 0x3a8 (936 bytes)
- **反编译状态**: decompiled
- **Callee 数量**: 13
- **Edge 数量**: 13
- **终止原因**: leaf_handler
- **副作用**: 无检测到
- **IDA 注释**: Tauri 命令 get_relay_proxy_status 的 handler：查询 relay 中转代理运行状态（经 relay manager/proxy 状态面）。归属：命令名串精确 xref 唯一归属（live 复验）；模块按命令族推断 src\commands\relay.rs。
- **raw leaf**: `raw/aimami/1.2.6/windows-x64/commands/relay/get_relay_proxy_status/`
- **call-tree**: `call-tree.json` (edges=13)
- **interface**: `interface-report.json` (confidence=high)

### export_relay_config

- **Owner EA**: `0x14014a4d0`
- **Owner 函数**: `export_relay_config`
- **模块**: `commands/relay`
- **函数大小**: 0x61b (1563 bytes)
- **反编译状态**: decompiled
- **Callee 数量**: 14
- **Edge 数量**: 14
- **终止原因**: leaf_handler
- **副作用**: 无检测到
- **IDA 注释**: Tauri 命令 export_relay_config 的 handler：导出 relay 配置到入参 filePath 指定文件，includeApiKeys 控制是否含 API Key 明文（敏感：可写出凭据）。归属：命令名串精确 xref 唯一归属（live 复验）；模块按命令族推断 src\commands\relay.rs。
- **raw leaf**: `raw/aimami/1.2.6/windows-x64/commands/relay/export_relay_config/`
- **call-tree**: `call-tree.json` (edges=14)
- **interface**: `interface-report.json` (confidence=high)

### import_relay_config

- **Owner EA**: `0x14016d2d0`
- **Owner 函数**: `import_relay_config`
- **模块**: `commands/relay`
- **函数大小**: 0x60b (1547 bytes)
- **反编译状态**: decompiled
- **Callee 数量**: 15
- **Edge 数量**: 15
- **终止原因**: leaf_handler
- **副作用**: 无检测到
- **IDA 注释**: Tauri 命令 import_relay_config 的 handler：从入参 filePath 导入 relay 配置（写副作用：覆盖/合并现有 provider 配置），引用 app(AppHandle) 与 relay manager。归属：命令名串精确 xref 唯一归属（live 复验）；模块按命令族推断 src\commands\relay.rs。
- **raw leaf**: `raw/aimami/1.2.6/windows-x64/commands/relay/import_relay_config/`
- **call-tree**: `call-tree.json` (edges=15)
- **interface**: `interface-report.json` (confidence=high)

## Gate 状态

- dim1: PASS — 前端 IPC 合同集已验证（继承 parent version-delta bundle）
- dim2: PASS — 14/14 命令有 owner_ea + pseudocode（14 decompile_ok + 0 decompile_null gate-passed via callee_count>=5）
- dim3: PASS — 14/14 raw leaf 有 call-tree.json 且 edges>=5 或 terminated_reason
- dim4: PASS — 14/14 raw leaf 有 interface-report.json 且含 sideEffects 字段
- dim5: PASS — 全部 raw leaf 在 win-x64/1.2.6 下；live win IDA status=ok/<反编译器>_ready=true
- dim6: pending_implementation_side — C5 实现侧验收工作；真机未对照，red line 25 声明「未对照」
- strictImplementationUse: true（dim1-5 全 PASS）
- readyToImplement: false（blocked by dim6 + live_reference_parity）
- gate_accepted: false

## 破坏性副作用编目

- **delete_relay_provider**: delete

## 原始证据引用

详见 `pointers/evidence-paths.md` 获取本模块所有 raw leaf 的完整路径。
