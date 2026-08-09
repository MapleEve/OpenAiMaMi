# DELTA-LOGIC-1.2.6-WIN — Windows x64 1.2.4→1.2.6 mcp 模块 diff 逻辑

## 概述

Windows x64 1.2.4→1.2.6 delta 中 mcp 模块的 per-module full-chain 结论。
本 bundle 从 windows-1.2.6-version-delta 总 bundle 拆分而来，内容来自 raw leaf 的 evidence.md + call-tree.json + interface-report.json。

命令数：3

## 命令 full-chain 结论（消费者面向）

### load_mcp_servers

- **Owner EA**: `0x1401656b0`
- **Owner 函数**: `load_mcp_servers`
- **模块**: `commands/mcp`
- **函数大小**: 0x388 (904 bytes)
- **反编译状态**: decompiled
- **Callee 数量**: 12
- **Edge 数量**: 12
- **终止原因**: leaf_handler
- **副作用**: 无检测到
- **IDA 注释**: Tauri 命令 load_mcp_servers 的 handler：从持久化 repo 加载 MCP server 配置列表。归属：命令名串精确 xref 唯一归属（live 复验）；模块按命令族推断 src\commands\mcp.rs（MCP 配置面）。
- **raw leaf**: `raw/aimami/1.2.6/windows-x64/commands/mcp/load_mcp_servers/`
- **call-tree**: `call-tree.json` (edges=12)
- **interface**: `interface-report.json` (confidence=high)

### upsert_mcp_server

- **Owner EA**: `0x140163e30`
- **Owner 函数**: `upsert_mcp_server`
- **模块**: `commands/mcp`
- **函数大小**: 0xe95 (3733 bytes)
- **反编译状态**: decompiled
- **Callee 数量**: 18
- **Edge 数量**: 18
- **终止原因**: leaf_handler
- **副作用**: 无检测到
- **IDA 注释**: Tauri 命令 upsert_mcp_server 的 handler：新增或更新 MCP server 配置，入参含 transport/command/args/headers/environment/url 连接字段，经 mutationGate 落盘（写副作用：改 MCP 配置）。归属：命令名串精确 xref 唯一归属（live 复验）；模块按命令族推断 src\commands\mcp
- **raw leaf**: `raw/aimami/1.2.6/windows-x64/commands/mcp/upsert_mcp_server/`
- **call-tree**: `call-tree.json` (edges=18)
- **interface**: `interface-report.json` (confidence=high)

### set_mcp_server_enabled

- **Owner EA**: `0x140163410`
- **Owner 函数**: `set_mcp_server_enabled`
- **模块**: `commands/mcp`
- **函数大小**: 0x71d (1821 bytes)
- **反编译状态**: decompiled
- **Callee 数量**: 15
- **Edge 数量**: 15
- **终止原因**: leaf_handler
- **副作用**: 无检测到
- **IDA 注释**: Tauri 命令 set_mcp_server_enabled 的 handler：按入参 name + enabled 开关指定 MCP server，经 mutationGate 变更门禁后落盘（写副作用：改 MCP 配置）。归属：命令名串精确 xref 唯一归属（live 复验）；模块按命令族推断 src\commands\mcp.rs。
- **raw leaf**: `raw/aimami/1.2.6/windows-x64/commands/mcp/set_mcp_server_enabled/`
- **call-tree**: `call-tree.json` (edges=15)
- **interface**: `interface-report.json` (confidence=high)

## Gate 状态

- dim1: PASS — 前端 IPC 合同集已验证（继承 parent version-delta bundle）
- dim2: PASS — 3/3 命令有 owner_ea + pseudocode（3 decompile_ok + 0 decompile_null gate-passed via callee_count>=5）
- dim3: PASS — 3/3 raw leaf 有 call-tree.json 且 edges>=5 或 terminated_reason
- dim4: PASS — 3/3 raw leaf 有 interface-report.json 且含 sideEffects 字段
- dim5: PASS — 全部 raw leaf 在 win-x64/1.2.6 下；live win IDA status=ok/<反编译器>_ready=true
- dim6: pending_implementation_side — C5 实现侧验收工作；真机未对照，red line 25 声明「未对照」
- strictImplementationUse: true（dim1-5 全 PASS）
- readyToImplement: false（blocked by dim6 + live_reference_parity）
- gate_accepted: false

## 破坏性副作用编目

- 本模块命令未检测到破坏性副作用关键词


## 原始证据引用

详见 `pointers/evidence-paths.md` 获取本模块所有 raw leaf 的完整路径。
