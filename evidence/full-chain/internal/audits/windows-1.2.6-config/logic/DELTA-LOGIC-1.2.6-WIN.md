# DELTA-LOGIC-1.2.6-WIN — Windows x64 1.2.4→1.2.6 config 模块 diff 逻辑

## 概述

Windows x64 1.2.4→1.2.6 delta 中 config 模块的 per-module full-chain 结论。
本 bundle 从 windows-1.2.6-version-delta 总 bundle 拆分而来，内容来自 raw leaf 的 evidence.md + call-tree.json + interface-report.json。

命令数：6

## 命令 full-chain 结论（消费者面向）

### rebuild_registry

- **Owner EA**: `0x14014c500`
- **Owner 函数**: `rebuild_registry`
- **模块**: `commands/system`
- **函数大小**: 0x3d8 (984 bytes)
- **反编译状态**: decompiled
- **Callee 数量**: 12
- **Edge 数量**: 12
- **终止原因**: leaf_handler
- **副作用**: 无检测到
- **IDA 注释**: Tauri 命令 rebuild_registry 处理器（commands::system）。重建本地注册索引（mac 符号 Repository::rebuild_registry_with_policy 佐证）。⚠副作用：重写注册数据。
- **raw leaf**: `raw/aimami/1.2.6/windows-x64/commands/system/rebuild_registry/`
- **call-tree**: `call-tree.json` (edges=12)
- **interface**: `interface-report.json` (confidence=high)

### force_kill_codex

- **Owner EA**: `0x14014bf20`
- **Owner 函数**: `force_kill_codex`
- **模块**: `commands/system`
- **函数大小**: 0x3d8 (984 bytes)
- **反编译状态**: decompiled
- **Callee 数量**: 12
- **Edge 数量**: 12
- **终止原因**: leaf_handler
- **副作用**: ["kill", "restart"]
- **IDA 注释**: Tauri 命令 force_kill_codex 的 handler：强制终止 codex 进程（破坏性副作用：强杀进程），经 mutationGate。归属：命令名串精确 xref 唯一归属（live 复验）；模块按命令族（diagnose/restart_codex 锚定 src\commands\system.rs）推断。
- **raw leaf**: `raw/aimami/1.2.6/windows-x64/commands/system/force_kill_codex/`
- **call-tree**: `call-tree.json` (edges=12)
- **interface**: `interface-report.json` (confidence=high)

### set_image_compat

- **Owner EA**: `0x14014b3a0`
- **Owner 函数**: `set_image_compat`
- **模块**: `commands/system`
- **函数大小**: 0x4ce (1230 bytes)
- **反编译状态**: decompiled
- **Callee 数量**: 13
- **Edge 数量**: 13
- **终止原因**: leaf_handler
- **副作用**: 无检测到
- **IDA 注释**: Tauri 命令 set_image_compat 处理器（commands::system，argKeys: enabled；体内 mutationGate 串佐证）。设置图像兼容模式。⚠副作用：写配置。
- **raw leaf**: `raw/aimami/1.2.6/windows-x64/commands/system/set_image_compat/`
- **call-tree**: `call-tree.json` (edges=13)
- **interface**: `interface-report.json` (confidence=high)

### set_api_proxy_config

- **Owner EA**: `0x14016cab0`
- **Owner 函数**: `set_api_proxy_config`
- **模块**: `commands/system`
- **函数大小**: 0x5fd (1533 bytes)
- **反编译状态**: decompiled
- **Callee 数量**: 14
- **Edge 数量**: 14
- **终止原因**: leaf_handler
- **副作用**: 无检测到
- **IDA 注释**: Tauri 命令 set_api_proxy_config 的 handler：按入参 mode/url 设置 API 代理配置并持久化（写副作用：改代理设置）。归属：命令名串精确 xref 唯一归属（live 复验）；模块按命令族（detect/test_api_proxy_config 锚定 src\commands\system.rs）推断。
- **raw leaf**: `raw/aimami/1.2.6/windows-x64/commands/system/set_api_proxy_config/`
- **call-tree**: `call-tree.json` (edges=14)
- **interface**: `interface-report.json` (confidence=high)

### get_usage_refresh_interval

- **Owner EA**: `0x14016c520`
- **Owner 函数**: `get_usage_refresh_interval`
- **模块**: `commands/system`
- **函数大小**: 0x388 (904 bytes)
- **反编译状态**: decompiled
- **Callee 数量**: 12
- **Edge 数量**: 12
- **终止原因**: leaf_handler
- **副作用**: 无检测到
- **IDA 注释**: Tauri 命令 get_usage_refresh_interval 处理器（commands::system）。读取用量刷新间隔（mac 符号 Repository 同名方法佐证）。
- **raw leaf**: `raw/aimami/1.2.6/windows-x64/commands/system/get_usage_refresh_interval/`
- **call-tree**: `call-tree.json` (edges=12)
- **interface**: `interface-report.json` (confidence=high)

### set_usage_refresh_interval

- **Owner EA**: `0x14016bc40`
- **Owner 函数**: `set_usage_refresh_interval`
- **模块**: `commands/system`
- **函数大小**: 0x5db (1499 bytes)
- **反编译状态**: decompiled
- **Callee 数量**: 15
- **Edge 数量**: 15
- **终止原因**: leaf_handler
- **副作用**: 无检测到
- **IDA 注释**: Tauri 命令 set_usage_refresh_interval 处理器（commands::system，argKeys: interval）。设置用量刷新间隔。⚠副作用：写配置。
- **raw leaf**: `raw/aimami/1.2.6/windows-x64/commands/system/set_usage_refresh_interval/`
- **call-tree**: `call-tree.json` (edges=15)
- **interface**: `interface-report.json` (confidence=high)

## Gate 状态

- dim1: PASS — 前端 IPC 合同集已验证（继承 parent version-delta bundle）
- dim2: PASS — 6/6 命令有 owner_ea + pseudocode（6 decompile_ok + 0 decompile_null gate-passed via callee_count>=5）
- dim3: PASS — 6/6 raw leaf 有 call-tree.json 且 edges>=5 或 terminated_reason
- dim4: PASS — 6/6 raw leaf 有 interface-report.json 且含 sideEffects 字段
- dim5: PASS — 全部 raw leaf 在 win-x64/1.2.6 下；live win IDA status=ok/<反编译器>_ready=true
- dim6: pending_implementation_side — C5 实现侧验收工作；真机未对照，red line 25 声明「未对照」
- strictImplementationUse: true（dim1-5 全 PASS）
- readyToImplement: false（blocked by dim6 + live_reference_parity）
- gate_accepted: false

## 破坏性副作用编目

- **force_kill_codex**: kill
- **force_kill_codex**: restart

## 原始证据引用

详见 `pointers/evidence-paths.md` 获取本模块所有 raw leaf 的完整路径。
