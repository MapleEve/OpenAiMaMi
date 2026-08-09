# DELTA-LOGIC-1.2.6-WIN — Windows x64 1.2.4→1.2.6 system 模块 diff 逻辑

## 概述

Windows x64 1.2.4→1.2.6 delta 中 system 模块的 per-module full-chain 结论。
本 bundle 从 windows-1.2.6-version-delta 总 bundle 拆分而来，内容来自 raw leaf 的 evidence.md + call-tree.json + interface-report.json。

命令数：14

## 命令 full-chain 结论（消费者面向）

### has_notch

- **Owner EA**: `0x140173ad0`
- **Owner 函数**: `has_notch`
- **模块**: `commands/system`
- **函数大小**: 0x35c (860 bytes)
- **反编译状态**: decompiled
- **Callee 数量**: 11
- **Edge 数量**: 11
- **终止原因**: leaf_handler
- **副作用**: 无检测到
- **IDA 注释**: Tauri 命令 has_notch 处理器（commands::hotspot）。检测屏幕刘海（mac 侧对应 platform::screen::has_notch_screen）。
- **raw leaf**: `raw/aimami/1.2.6/windows-x64/commands/system/has_notch/`
- **call-tree**: `call-tree.json` (edges=11)
- **interface**: `interface-report.json` (confidence=high)

### get_hotspot_enabled

- **Owner EA**: `0x140173550`
- **Owner 函数**: `get_hotspot_enabled`
- **模块**: `commands/system`
- **函数大小**: 0x378 (888 bytes)
- **反编译状态**: decompiled
- **Callee 数量**: 12
- **Edge 数量**: 12
- **终止原因**: leaf_handler
- **副作用**: 无检测到
- **IDA 注释**: Tauri 命令 get_hotspot_enabled 处理器（commands::hotspot）。读取热点开关状态。
- **raw leaf**: `raw/aimami/1.2.6/windows-x64/commands/system/get_hotspot_enabled/`
- **call-tree**: `call-tree.json` (edges=12)
- **interface**: `interface-report.json` (confidence=high)

### set_hotspot_enabled

- **Owner EA**: `0x140172c90`
- **Owner 函数**: `set_hotspot_enabled`
- **模块**: `commands/system`
- **函数大小**: 0x5be (1470 bytes)
- **反编译状态**: decompiled
- **Callee 数量**: 15
- **Edge 数量**: 15
- **终止原因**: leaf_handler
- **副作用**: 无检测到
- **IDA 注释**: Tauri 命令 set_hotspot_enabled 处理器（commands::hotspot，argKeys: enabled）。设置热点开关。⚠副作用：改变热点相关系统状态。
- **raw leaf**: `raw/aimami/1.2.6/windows-x64/commands/system/set_hotspot_enabled/`
- **call-tree**: `call-tree.json` (edges=15)
- **interface**: `interface-report.json` (confidence=high)

### hotspot_ready

- **Owner EA**: `0x1401721d0`
- **Owner 函数**: `hotspot_ready`
- **模块**: `commands/system`
- **函数大小**: 0x35c (860 bytes)
- **反编译状态**: decompiled
- **Callee 数量**: 11
- **Edge 数量**: 11
- **终止原因**: leaf_handler
- **副作用**: 无检测到
- **IDA 注释**: Tauri 命令 hotspot_ready 处理器（commands::hotspot）。查询/上报热点就绪状态。
- **raw leaf**: `raw/aimami/1.2.6/windows-x64/commands/system/hotspot_ready/`
- **call-tree**: `call-tree.json` (edges=11)
- **interface**: `interface-report.json` (confidence=high)

### get_device_id

- **Owner EA**: `0x140169df0`
- **Owner 函数**: `get_device_id`
- **模块**: `commands/system`
- **函数大小**: 0x388 (904 bytes)
- **反编译状态**: decompiled
- **Callee 数量**: 12
- **Edge 数量**: 12
- **终止原因**: leaf_handler
- **副作用**: 无检测到
- **IDA 注释**: Tauri 命令 get_device_id 处理器（commands::system，mac 符号）。读取设备唯一标识。
- **raw leaf**: `raw/aimami/1.2.6/windows-x64/commands/system/get_device_id/`
- **call-tree**: `call-tree.json` (edges=12)
- **interface**: `interface-report.json` (confidence=high)

### get_autostart_state

- **Owner EA**: `0x140166990`
- **Owner 函数**: `get_autostart_state`
- **模块**: `commands/system`
- **函数大小**: 0x4e8 (1256 bytes)
- **反编译状态**: decompiled
- **Callee 数量**: 14
- **Edge 数量**: 14
- **终止原因**: leaf_handler
- **副作用**: 无检测到
- **IDA 注释**: Tauri 命令 get_autostart_state 处理器（commands::autostart）。读取开机自启动状态。
- **raw leaf**: `raw/aimami/1.2.6/windows-x64/commands/system/get_autostart_state/`
- **call-tree**: `call-tree.json` (edges=14)
- **interface**: `interface-report.json` (confidence=high)

### set_autostart_enabled

- **Owner EA**: `0x1401660a0`
- **Owner 函数**: `set_autostart_enabled`
- **模块**: `commands/system`
- **函数大小**: 0x5eb (1515 bytes)
- **反编译状态**: decompiled
- **Callee 数量**: 15
- **Edge 数量**: 15
- **终止原因**: leaf_handler
- **副作用**: 无检测到
- **IDA 注释**: Tauri 命令 set_autostart_enabled 处理器（commands::autostart，argKeys: enabled）。设置开机自启动。⚠副作用：写系统自启配置。
- **raw leaf**: `raw/aimami/1.2.6/windows-x64/commands/system/set_autostart_enabled/`
- **call-tree**: `call-tree.json` (edges=15)
- **interface**: `interface-report.json` (confidence=high)

### get_notification_client_state

- **Owner EA**: `0x140168c10`
- **Owner 函数**: `get_notification_client_state`
- **模块**: `commands/system`
- **函数大小**: 0x388 (904 bytes)
- **反编译状态**: decompiled
- **Callee 数量**: 12
- **Edge 数量**: 12
- **终止原因**: leaf_handler
- **副作用**: 无检测到
- **IDA 注释**: Tauri 命令 get_notification_client_state 处理器（commands::system，mac 符号）。读取通知客户端状态。
- **raw leaf**: `raw/aimami/1.2.6/windows-x64/commands/system/get_notification_client_state/`
- **call-tree**: `call-tree.json` (edges=12)
- **interface**: `interface-report.json` (confidence=high)

### get_mystery_unlock_grants

- **Owner EA**: `0x140169860`
- **Owner 函数**: `get_mystery_unlock_grants`
- **模块**: `commands/system`
- **函数大小**: 0x388 (904 bytes)
- **反编译状态**: decompiled
- **Callee 数量**: 12
- **Edge 数量**: 12
- **终止原因**: leaf_handler
- **副作用**: 无检测到
- **IDA 注释**: Tauri 命令 get_mystery_unlock_grants 处理器（commands::system）。读取 mystery 解锁授权（mac 符号 Repository::get_mystery_unlock_grants 佐证）。
- **raw leaf**: `raw/aimami/1.2.6/windows-x64/commands/system/get_mystery_unlock_grants/`
- **call-tree**: `call-tree.json` (edges=12)
- **interface**: `interface-report.json` (confidence=high)

### merge_mystery_unlock_grants

- **Owner EA**: `0x1401691a0`
- **Owner 函数**: `merge_mystery_unlock_grants`
- **模块**: `commands/system`
- **函数大小**: 0x4ae (1198 bytes)
- **反编译状态**: decompiled
- **Callee 数量**: 13
- **Edge 数量**: 13
- **终止原因**: leaf_handler
- **副作用**: 无检测到
- **IDA 注释**: Tauri 命令 merge_mystery_unlock_grants 处理器（commands::system，argKeys: grants）。合并写入 mystery 解锁授权。⚠副作用：写本地存储。
- **raw leaf**: `raw/aimami/1.2.6/windows-x64/commands/system/merge_mystery_unlock_grants/`
- **call-tree**: `call-tree.json` (edges=13)
- **interface**: `interface-report.json` (confidence=high)

### load_bootstrap_state

- **Owner EA**: `0x14016ae90`
- **Owner 函数**: `load_bootstrap_state`
- **模块**: `commands/system`
- **函数大小**: 0x388 (904 bytes)
- **反编译状态**: decompiled
- **Callee 数量**: 12
- **Edge 数量**: 12
- **终止原因**: leaf_handler
- **副作用**: 无检测到
- **IDA 注释**: Tauri 命令 load_bootstrap_state 处理器（commands::system）。加载启动引导状态（mac 符号 Repository::load_bootstrap_state 佐证）。
- **raw leaf**: `raw/aimami/1.2.6/windows-x64/commands/system/load_bootstrap_state/`
- **call-tree**: `call-tree.json` (edges=12)
- **interface**: `interface-report.json` (confidence=high)

### focus_main_window

- **Owner EA**: `0x140172730`
- **Owner 函数**: `focus_main_window`
- **模块**: `commands/system`
- **函数大小**: 0x35c (860 bytes)
- **反编译状态**: decompiled
- **Callee 数量**: 11
- **Edge 数量**: 11
- **终止原因**: leaf_handler
- **副作用**: 无检测到
- **IDA 注释**: Tauri 命令 focus_main_window 处理器（commands::hotspot，mac 符号）。聚焦/前置主窗口。
- **raw leaf**: `raw/aimami/1.2.6/windows-x64/commands/system/focus_main_window/`
- **call-tree**: `call-tree.json` (edges=11)
- **interface**: `interface-report.json` (confidence=high)

### parse_aimami_deeplink

- **Owner EA**: `0x140149f60`
- **Owner 函数**: `parse_aimami_deeplink`
- **模块**: `commands/system`
- **函数大小**: 0x36c (876 bytes)
- **反编译状态**: decompiled
- **Callee 数量**: 11
- **Edge 数量**: 11
- **终止原因**: leaf_handler
- **副作用**: 无检测到
- **IDA 注释**: Tauri 命令 parse_aimami_deeplink 处理器（commands::deeplink，argKeys: url）。解析 aimami deeplink URL（体内 url 串佐证）。
- **raw leaf**: `raw/aimami/1.2.6/windows-x64/commands/system/parse_aimami_deeplink/`
- **call-tree**: `call-tree.json` (edges=11)
- **interface**: `interface-report.json` (confidence=high)

### restart_codex

- **Owner EA**: `0x140d7fef0`
- **Owner 函数**: `restart_codex`
- **模块**: `commands/system`
- **函数大小**: 0x8ee (2286 bytes)
- **反编译状态**: decompiled
- **Callee 数量**: 19
- **Edge 数量**: 19
- **终止原因**: leaf_handler
- **副作用**: ["restart"]
- **IDA 注释**: Tauri 命令 restart_codex 的 handler：重启 codex 进程（进程副作用：终止并拉起 codex），引用 app(AppHandle)。归属：命令名串精确 xref 唯一归属 + panic-Location 两跳锚定 src\commands\system.rs。
- **raw leaf**: `raw/aimami/1.2.6/windows-x64/commands/system/restart_codex/`
- **call-tree**: `call-tree.json` (edges=19)
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

- **restart_codex**: restart

## 原始证据引用

详见 `pointers/evidence-paths.md` 获取本模块所有 raw leaf 的完整路径。
