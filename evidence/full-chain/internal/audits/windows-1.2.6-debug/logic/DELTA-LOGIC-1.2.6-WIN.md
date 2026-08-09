# DELTA-LOGIC-1.2.6-WIN — Windows x64 1.2.4→1.2.6 debug 模块 diff 逻辑

## 概述

Windows x64 1.2.4→1.2.6 delta 中 debug 模块的 per-module full-chain 结论。
本 bundle 从 windows-1.2.6-version-delta 总 bundle 拆分而来，内容来自 raw leaf 的 evidence.md + call-tree.json + interface-report.json。

命令数：7

## 命令 full-chain 结论（消费者面向）

### export_debug_bundle

- **Owner EA**: `0x140d7c5e0`
- **Owner 函数**: `export_debug_bundle`
- **模块**: `commands/system`
- **函数大小**: 0x10a0 (4256 bytes)
- **反编译状态**: decompiled
- **Callee 数量**: 30
- **Edge 数量**: 30
- **终止原因**: leaf_handler
- **副作用**: 无检测到
- **IDA 注释**: Tauri 命令 export_debug_bundle 处理器（commands::debug_bundle，argKeys: targetPath）。导出调试包到 targetPath，体内 export_started/export_succeeded/export_failed 进度事件串佐证。⚠副作用：写文件。
- **raw leaf**: `raw/aimami/1.2.6/windows-x64/commands/system/export_debug_bundle/`
- **call-tree**: `call-tree.json` (edges=30)
- **interface**: `interface-report.json` (confidence=high)

### upload_debug_report

- **Owner EA**: `0x140d9dd40`
- **Owner 函数**: `upload_debug_report`
- **模块**: `commands/system`
- **函数大小**: 0xa25 (2597 bytes)
- **反编译状态**: decompiled
- **Callee 数量**: 21
- **Edge 数量**: 21
- **终止原因**: leaf_handler
- **副作用**: 无检测到
- **IDA 注释**: Tauri 命令 upload_debug_report 处理器（commands::debug_report，argKeys: input）。上传调试报告。⚠副作用：网络外发本机诊断数据。
- **raw leaf**: `raw/aimami/1.2.6/windows-x64/commands/system/upload_debug_report/`
- **call-tree**: `call-tree.json` (edges=21)
- **interface**: `interface-report.json` (confidence=high)

### write_client_debug_log

- **Owner EA**: `0x1401683a0`
- **Owner 函数**: `write_client_debug_log`
- **模块**: `commands/system`
- **函数大小**: 0x285 (645 bytes)
- **反编译状态**: decompiled
- **Callee 数量**: 8
- **Edge 数量**: 8
- **终止原因**: leaf_handler
- **副作用**: 无检测到
- **IDA 注释**: Tauri 命令 write_client_debug_log 处理器（commands::debug_bundle，argKeys: event）。写入客户端调试日志。⚠副作用：写日志文件。
- **raw leaf**: `raw/aimami/1.2.6/windows-x64/commands/system/write_client_debug_log/`
- **call-tree**: `call-tree.json` (edges=8)
- **interface**: `interface-report.json` (confidence=high)

### run_daemon_once

- **Owner EA**: `0x140d81ec0`
- **Owner 函数**: `run_daemon_once_tauri_dispatcher`
- **模块**: `commands/system`
- **函数大小**: 0xc19 (3097 bytes)
- **反编译状态**: decompiled
- **Callee 数量**: 22
- **Edge 数量**: 22
- **终止原因**: leaf_handler
- **副作用**: 无检测到
- **IDA 注释**: run_daemon_once Tauri 命令的 async 状态机 dispatcher（经 run_daemon_once 字符串精确 xref 定位，0x141887265 唯一引用者）。仅含框架代码：State/AppHandle 提取、tracing span 包装(sub_14085A6F0)、tokio coop::budget 轮询(sub_140501B40，非业务锁)。真实业
- **raw leaf**: `raw/aimami/1.2.6/windows-x64/commands/system/run_daemon_once/`
- **call-tree**: `call-tree.json` (edges=22)
- **interface**: `interface-report.json` (confidence=high)

### diagnose

- **Owner EA**: `0x140d80d90`
- **Owner 函数**: `diagnose`
- **模块**: `commands/system`
- **函数大小**: 0xaf9 (2809 bytes)
- **反编译状态**: decompiled
- **Callee 数量**: 22
- **Edge 数量**: 22
- **终止原因**: leaf_handler
- **副作用**: 无检测到
- **IDA 注释**: Tauri 命令 diagnose 的 handler：运行诊断采集（codex 进程/配置/连通性检查），引用 app(AppHandle)。归属：命令名串精确 xref 唯一归属 + panic-Location 两跳锚定 src\commands\system.rs。
- **raw leaf**: `raw/aimami/1.2.6/windows-x64/commands/system/diagnose/`
- **call-tree**: `call-tree.json` (edges=22)
- **interface**: `interface-report.json` (confidence=high)

### test_api_proxy_config

- **Owner EA**: `0x140d84230`
- **Owner 函数**: `test_api_proxy_config`
- **模块**: `commands/system`
- **函数大小**: 0xcc5 (3269 bytes)
- **反编译状态**: decompiled
- **Callee 数量**: 26
- **Edge 数量**: 26
- **终止原因**: leaf_handler
- **副作用**: 无检测到
- **IDA 注释**: Tauri 命令 test_api_proxy_config 的 handler：按入参 mode/url 测试 API 代理连通性并返回结果（网络副作用：向外发探测请求）。归属：命令名串精确 xref 唯一归属 + panic-Location 两跳锚定 src\commands\system.rs。
- **raw leaf**: `raw/aimami/1.2.6/windows-x64/commands/system/test_api_proxy_config/`
- **call-tree**: `call-tree.json` (edges=26)
- **interface**: `interface-report.json` (confidence=high)

### detect_api_proxy_config

- **Owner EA**: `0x140d83110`
- **Owner 函数**: `detect_api_proxy_config`
- **模块**: `commands/system`
- **函数大小**: 0xae9 (2793 bytes)
- **反编译状态**: decompiled
- **Callee 数量**: 22
- **Edge 数量**: 22
- **终止原因**: leaf_handler
- **副作用**: 无检测到
- **IDA 注释**: Tauri 命令 detect_api_proxy_config 的 handler：探测当前系统/环境 API 代理配置（引用 app/deepLink/protocol 上下文）。归属：命令名串精确 xref 唯一归属 + panic-Location 两跳锚定 src\commands\system.rs。
- **raw leaf**: `raw/aimami/1.2.6/windows-x64/commands/system/detect_api_proxy_config/`
- **call-tree**: `call-tree.json` (edges=22)
- **interface**: `interface-report.json` (confidence=high)

## Gate 状态

- dim1: PASS — 前端 IPC 合同集已验证（继承 parent version-delta bundle）
- dim2: PASS — 7/7 命令有 owner_ea + pseudocode（7 decompile_ok + 0 decompile_null gate-passed via callee_count>=5）
- dim3: PASS — 7/7 raw leaf 有 call-tree.json 且 edges>=5 或 terminated_reason
- dim4: PASS — 7/7 raw leaf 有 interface-report.json 且含 sideEffects 字段
- dim5: PASS — 全部 raw leaf 在 win-x64/1.2.6 下；live win IDA status=ok/<反编译器>_ready=true
- dim6: pending_implementation_side — C5 实现侧验收工作；真机未对照，red line 25 声明「未对照」
- strictImplementationUse: true（dim1-5 全 PASS）
- readyToImplement: false（blocked by dim6 + live_reference_parity）
- gate_accepted: false

## 破坏性副作用编目

- 本模块命令未检测到破坏性副作用关键词


## 原始证据引用

详见 `pointers/evidence-paths.md` 获取本模块所有 raw leaf 的完整路径。
