# DELTA-LOGIC-1.2.6-WIN — Windows x64 1.2.4→1.2.6 analytics 模块 diff 逻辑

## 概述

Windows x64 1.2.4→1.2.6 delta 中 analytics 模块的 per-module full-chain 结论。
本 bundle 从 windows-1.2.6-version-delta 总 bundle 拆分而来，内容来自 raw leaf 的 evidence.md + call-tree.json + interface-report.json。

命令数：9

## 命令 full-chain 结论（消费者面向）

### load_snapshot

- **Owner EA**: `0x140d73cb0`
- **Owner 函数**: `load_snapshot`
- **模块**: `commands/accounts`
- **函数大小**: 0x15ab (5547 bytes)
- **反编译状态**: decompile_null
- **Callee 数量**: 30
- **Edge 数量**: 30
- **终止原因**: leaf_handler
- **副作用**: 无检测到
- **raw leaf**: `raw/aimami/1.2.6/windows-x64/commands/accounts/load_snapshot/`
- **call-tree**: `call-tree.json` (edges=30)
- **interface**: `interface-report.json` (confidence=high)

### refresh_usage_snapshot

- **Owner EA**: `0x140d722f0`
- **Owner 函数**: `refresh_usage_snapshot`
- **模块**: `commands/accounts`
- **函数大小**: 0x1010 (4112 bytes)
- **反编译状态**: decompiled
- **Callee 数量**: 28
- **Edge 数量**: 28
- **终止原因**: leaf_handler
- **副作用**: 无检测到
- **raw leaf**: `raw/aimami/1.2.6/windows-x64/commands/accounts/refresh_usage_snapshot/`
- **call-tree**: `call-tree.json` (edges=28)
- **interface**: `interface-report.json` (confidence=high)

### refresh_single_account_usage

- **Owner EA**: `0x140d70840`
- **Owner 函数**: `refresh_single_account_usage`
- **模块**: `commands/accounts`
- **函数大小**: 0x1026 (4134 bytes)
- **反编译状态**: decompiled
- **Callee 数量**: 31
- **Edge 数量**: 31
- **终止原因**: leaf_handler
- **副作用**: 无检测到
- **raw leaf**: `raw/aimami/1.2.6/windows-x64/commands/accounts/refresh_single_account_usage/`
- **call-tree**: `call-tree.json` (edges=31)
- **interface**: `interface-report.json` (confidence=high)

### load_change_analytics

- **Owner EA**: `0x140d91b60`
- **Owner 函数**: `load_change_analytics`
- **模块**: `commands/analytics`
- **函数大小**: 0x141b (5147 bytes)
- **反编译状态**: decompiled
- **Callee 数量**: 33
- **Edge 数量**: 33
- **终止原因**: leaf_handler
- **副作用**: 无检测到
- **IDA 注释**: Tauri命令handler:加载变更分析(range)。归属:锚src\commands\analytics.rs。
- **raw leaf**: `raw/aimami/1.2.6/windows-x64/commands/analytics/load_change_analytics/`
- **call-tree**: `call-tree.json` (edges=33)
- **interface**: `interface-report.json` (confidence=high)

### load_quota_history

- **Owner EA**: `0x140d99620`
- **Owner 函数**: `load_quota_history`
- **模块**: `commands/analytics`
- **函数大小**: 0x1b79 (7033 bytes)
- **反编译状态**: decompiled
- **Callee 数量**: 33
- **Edge 数量**: 33
- **终止原因**: leaf_handler
- **副作用**: 无检测到
- **IDA 注释**: Tauri命令handler:加载配额历史(accountKey)。归属:锚src\commands\analytics.rs。
- **raw leaf**: `raw/aimami/1.2.6/windows-x64/commands/analytics/load_quota_history/`
- **call-tree**: `call-tree.json` (edges=33)
- **interface**: `interface-report.json` (confidence=high)

### load_session_analytics

- **Owner EA**: `0x140d977d0`
- **Owner 函数**: `load_session_analytics`
- **模块**: `commands/analytics`
- **函数大小**: 0x141b (5147 bytes)
- **反编译状态**: decompiled
- **Callee 数量**: 33
- **Edge 数量**: 33
- **终止原因**: leaf_handler
- **副作用**: 无检测到
- **IDA 注释**: Tauri命令handler:加载会话分析(range)。归属:锚src\commands\analytics.rs。
- **raw leaf**: `raw/aimami/1.2.6/windows-x64/commands/analytics/load_session_analytics/`
- **call-tree**: `call-tree.json` (edges=33)
- **interface**: `interface-report.json` (confidence=high)

### load_token_analytics

- **Owner EA**: `0x140d95800`
- **Owner 函数**: `load_token_analytics`
- **模块**: `commands/analytics`
- **函数大小**: 0x15b0 (5552 bytes)
- **反编译状态**: decompiled
- **Callee 数量**: 33
- **Edge 数量**: 33
- **终止原因**: leaf_handler
- **副作用**: 无检测到
- **IDA 注释**: Tauri命令handler:加载token用量分析(range)。归属:锚src\commands\analytics.rs。
- **raw leaf**: `raw/aimami/1.2.6/windows-x64/commands/analytics/load_token_analytics/`
- **call-tree**: `call-tree.json` (edges=33)
- **interface**: `interface-report.json` (confidence=high)

### load_tool_analytics

- **Owner EA**: `0x140d939b0`
- **Owner 函数**: `load_tool_analytics`
- **模块**: `commands/analytics`
- **函数大小**: 0x141b (5147 bytes)
- **反编译状态**: decompiled
- **Callee 数量**: 33
- **Edge 数量**: 33
- **终止原因**: leaf_handler
- **副作用**: 无检测到
- **IDA 注释**: Tauri命令handler:加载工具调用分析(range)。归属:锚src\commands\analytics.rs。
- **raw leaf**: `raw/aimami/1.2.6/windows-x64/commands/analytics/load_tool_analytics/`
- **call-tree**: `call-tree.json` (edges=33)
- **interface**: `interface-report.json` (confidence=high)

### load_usage_analytics

- **Owner EA**: `0x140d9c1e0`
- **Owner 函数**: `load_usage_analytics`
- **模块**: `commands/analytics`
- **函数大小**: 0x1236 (4662 bytes)
- **反编译状态**: decompiled
- **Callee 数量**: 32
- **Edge 数量**: 32
- **终止原因**: leaf_handler
- **副作用**: 无检测到
- **IDA 注释**: Tauri命令handler:加载用量分析总览。归属:锚src\commands\analytics.rs。
- **raw leaf**: `raw/aimami/1.2.6/windows-x64/commands/analytics/load_usage_analytics/`
- **call-tree**: `call-tree.json` (edges=32)
- **interface**: `interface-report.json` (confidence=high)

## Gate 状态

- dim1: PASS — 前端 IPC 合同集已验证（继承 parent version-delta bundle）
- dim2: PASS — 9/9 命令有 owner_ea + pseudocode（8 decompile_ok + 1 decompile_null gate-passed via callee_count>=5）
- dim3: PASS — 9/9 raw leaf 有 call-tree.json 且 edges>=5 或 terminated_reason
- dim4: PASS — 9/9 raw leaf 有 interface-report.json 且含 sideEffects 字段
- dim5: PASS — 全部 raw leaf 在 win-x64/1.2.6 下；live win IDA status=ok/<反编译器>_ready=true
- dim6: pending_implementation_side — C5 实现侧验收工作；真机未对照，red line 25 声明「未对照」
- strictImplementationUse: true（dim1-5 全 PASS）
- readyToImplement: false（blocked by dim6 + live_reference_parity）
- gate_accepted: false

## 破坏性副作用编目

- 本模块命令未检测到破坏性副作用关键词


## 原始证据引用

详见 `pointers/evidence-paths.md` 获取本模块所有 raw leaf 的完整路径。
