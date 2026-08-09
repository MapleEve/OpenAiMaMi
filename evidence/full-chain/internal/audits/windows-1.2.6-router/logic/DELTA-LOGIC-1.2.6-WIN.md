# DELTA-LOGIC-1.2.6-WIN — Windows x64 1.2.4→1.2.6 router 模块 diff 逻辑

## 概述

Windows x64 1.2.4→1.2.6 delta 中 router 模块的 per-module full-chain 结论。
本 bundle 从 windows-1.2.6-version-delta 总 bundle 拆分而来，内容来自 raw leaf 的 evidence.md + call-tree.json + interface-report.json。

命令数：8

## 命令 full-chain 结论（消费者面向）

### set_codex_router_enabled

- **Owner EA**: `0x140d7aa10`
- **Owner 函数**: `set_codex_router_enabled`
- **模块**: `commands/relay`
- **函数大小**: 0x12e2 (4834 bytes)
- **反编译状态**: decompiled
- **Callee 数量**: 34
- **Edge 数量**: 34
- **终止原因**: leaf_handler
- **副作用**: 无检测到
- **IDA 注释**: Tauri 命令 set_codex_router_enabled 的 handler：按入参 enabled 开关 codex router（中转路由），涉及 relaunch 流程（进程副作用：可触发应用重启）。归属：命令名串精确 xref 唯一归属 + panic-Location 两跳锚定 src\commands\relay.rs。
- **raw leaf**: `raw/aimami/1.2.6/windows-x64/commands/relay/set_codex_router_enabled/`
- **call-tree**: `call-tree.json` (edges=34)
- **interface**: `interface-report.json` (confidence=high)

### set_codex_router_no_account_mode

- **Owner EA**: `0x140d77830`
- **Owner 函数**: `set_codex_router_no_account_mode`
- **模块**: `commands/relay`
- **函数大小**: 0x12af (4783 bytes)
- **反编译状态**: decompiled
- **Callee 数量**: 33
- **Edge 数量**: 33
- **终止原因**: leaf_handler
- **副作用**: 无检测到
- **IDA 注释**: Tauri 命令 set_codex_router_no_account_mode 的 handler：按入参 enabled 开关 codex router 免账号模式，涉及 relaunch（进程副作用：可触发应用重启）。归属：命令名串精确 xref 唯一归属 + panic-Location 两跳锚定 src\commands\relay.rs。
- **raw leaf**: `raw/aimami/1.2.6/windows-x64/commands/relay/set_codex_router_no_account_mode/`
- **call-tree**: `call-tree.json` (edges=33)
- **interface**: `interface-report.json` (confidence=high)

### set_auto_switch

- **Owner EA**: `0x140d466b0`
- **Owner 函数**: `set_auto_switch`
- **模块**: `commands/accounts`
- **函数大小**: 0xdef (3567 bytes)
- **反编译状态**: decompiled
- **Callee 数量**: 28
- **Edge 数量**: 28
- **终止原因**: leaf_handler
- **副作用**: 无检测到
- **IDA 注释**: Tauri命令handler:开关auto-switch(enabled),提交后刷新运行时(失败报RUNTIME_REFRESH_FAILED_AFTER_AUTO_SWITCH_UPDATE)。副作用:写配置(mutation)。归属:锚src\commands\system.rs。
- **raw leaf**: `raw/aimami/1.2.6/windows-x64/commands/accounts/set_auto_switch/`
- **call-tree**: `call-tree.json` (edges=28)
- **interface**: `interface-report.json` (confidence=high)

### configure_auto_switch

- **Owner EA**: `0x140d44bd0`
- **Owner 函数**: `configure_auto_switch`
- **模块**: `commands/accounts`
- **函数大小**: 0x10b0 (4272 bytes)
- **反编译状态**: decompiled (disasm_reconstructed — Hex-Rays null_cfunc, IDA disasm 重建)
- **Callee 数量**: 29
- **Edge 数量**: 29
- **终止原因**: leaf_handler
- **副作用**: [{"type": "WRITE", "desc": "配置文件写入 (mutation via sub_14085ACD0)", "severity": "destructive"}, {"type": "TRIGGER", "desc": "运行时刷新 (via sub_140D9FA30, 失败报RUNTIME_REFRESH_FAILED_AFTER_AUTO_SWITCH_UPDATE)", "severity": "warning"}, {"type": "VALIDATE", "desc": "阈值范围校验 (via sub_140C98E70, 0-100)", "severity": "info"}]
- **IDA 注释**: Tauri命令handler:配置auto-switch(enabled+threshold5hPercent+thresholdWeeklyPercent阈值),提交后刷新运行时(失败报RUNTIME_REFRESH_FAILED_AFTER_AUTO_SWITCH_UPDATE)。副作用:写配置(mutation)。归属:锚src\commands\system.rs。
- **raw leaf**: `raw/aimami/1.2.6/windows-x64/commands/accounts/configure_auto_switch/`
- **call-tree**: `call-tree.json` (edges=29)
- **interface**: `interface-report.json` (confidence=high)

### load_pending_auto_switch

- **Owner EA**: `0x14016a900`
- **Owner 函数**: `load_pending_auto_switch`
- **模块**: `commands/accounts`
- **函数大小**: 0x388 (904 bytes)
- **反编译状态**: decompiled
- **Callee 数量**: 12
- **Edge 数量**: 12
- **终止原因**: leaf_handler
- **副作用**: 无检测到
- **IDA 注释**: Tauri命令handler:读取当前挂起的auto-switch状态(repo参数),薄wrapper转Repository::load_pending_auto_switch。归属:win无直接锚,按auto-switch pending族归system(mac符号commands::system确认)。
- **raw leaf**: `raw/aimami/1.2.6/windows-x64/commands/accounts/load_pending_auto_switch/`
- **call-tree**: `call-tree.json` (edges=12)
- **interface**: `interface-report.json` (confidence=high)

### dismiss_pending_auto_switch

- **Owner EA**: `0x14016a380`
- **Owner 函数**: `dismiss_pending_auto_switch`
- **模块**: `commands/accounts`
- **函数大小**: 0x378 (888 bytes)
- **反编译状态**: decompiled
- **Callee 数量**: 12
- **Edge 数量**: 12
- **终止原因**: leaf_handler
- **副作用**: 无检测到
- **IDA 注释**: Tauri命令handler:撤销/忽略挂起的auto-switch(repo参数),薄wrapper转Repository::dismiss_pending_auto_switch。归属:win无直接锚,按auto-switch pending族归system(mac符号commands::system确认)。
- **raw leaf**: `raw/aimami/1.2.6/windows-x64/commands/accounts/dismiss_pending_auto_switch/`
- **call-tree**: `call-tree.json` (edges=12)
- **interface**: `interface-report.json` (confidence=high)

### confirm_pending_auto_switch

- **Owner EA**: `0x140d7eeb0`
- **Owner 函数**: `confirm_pending_auto_switch`
- **模块**: `commands/accounts`
- **函数大小**: 0x9c3 (2499 bytes)
- **反编译状态**: decompiled
- **Callee 数量**: 21
- **Edge 数量**: 21
- **终止原因**: leaf_handler
- **副作用**: 无检测到
- **IDA 注释**: Tauri命令handler:确认挂起的auto-switch切换,不重启Codex。副作用:提交pending切换(mutation)。归属:锚src\commands\system.rs。
- **raw leaf**: `raw/aimami/1.2.6/windows-x64/commands/accounts/confirm_pending_auto_switch/`
- **call-tree**: `call-tree.json` (edges=21)
- **interface**: `interface-report.json` (confidence=high)

### confirm_pending_auto_switch_and_restart_codex

- **Owner EA**: `0x140d7de70`
- **Owner 函数**: `confirm_pending_auto_switch_and_restart_codex`
- **模块**: `commands/accounts`
- **函数大小**: 0x9c3 (2499 bytes)
- **反编译状态**: decompiled
- **Callee 数量**: 21
- **Edge 数量**: 21
- **终止原因**: leaf_handler
- **副作用**: ["restart"]
- **IDA 注释**: Tauri命令handler:确认挂起的auto-switch切换并重启Codex。⚠副作用:重启Codex进程。归属:锚src\commands\system.rs。
- **raw leaf**: `raw/aimami/1.2.6/windows-x64/commands/accounts/confirm_pending_auto_switch_and_restart_codex/`
- **call-tree**: `call-tree.json` (edges=21)
- **interface**: `interface-report.json` (confidence=high)

## Gate 状态

- dim1: PASS — 前端 IPC 合同集已验证（继承 parent version-delta bundle）
- dim2: PASS — 8/8 命令有 owner_ea + pseudocode（7 decompile_ok + 1 decompile_null gate-passed via callee_count>=5）
- dim3: PASS — 8/8 raw leaf 有 call-tree.json 且 edges>=5 或 terminated_reason
- dim4: PASS — 8/8 raw leaf 有 interface-report.json 且含 sideEffects 字段
- dim5: PASS — 全部 raw leaf 在 win-x64/1.2.6 下；live win IDA status=ok/<反编译器>_ready=true
- dim6: pending_implementation_side — C5 实现侧验收工作；真机未对照，red line 25 声明「未对照」
- strictImplementationUse: true（dim1-5 全 PASS）
- readyToImplement: false（blocked by dim6 + live_reference_parity）
- gate_accepted: false

## 破坏性副作用编目

- **confirm_pending_auto_switch_and_restart_codex**: restart

## 原始证据引用

详见 `pointers/evidence-paths.md` 获取本模块所有 raw leaf 的完整路径。
