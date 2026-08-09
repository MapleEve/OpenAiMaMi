# DELTA-LOGIC-1.2.6-WIN — Windows x64 1.2.4→1.2.6 platform process 模块 diff 逻辑

## 概述

Windows x64 1.2.4→1.2.6 delta 中 platform process 模块的 per-module full-chain 结论。
本 bundle 从 windows-1.2.6-version-delta 总 bundle 拆分而来，内容来自 raw leaf 的 evidence.md + call-tree.json + interface-report.json。

命令数：1

## 命令 full-chain 结论（消费者面向）

### chatgpt_desktop_app_locator

- **Owner EA**: `0x140b370f0`
- **Owner 函数**: `locate_chatgpt_desktop_app`
- **模块**: `platform/process`
- **函数大小**: 0x16cf (5839 bytes)
- **反编译状态**: decompiled
- **Callee 数量**: 25
- **Edge 数量**: 25
- **终止原因**: leaf_handler
- **副作用**: 无检测到
- **IDA 注释**: ChatGPT 桌面应用定位器（1.2.6 新增平台函数）。按优先级尝试四级定位链：①遍历 10 组环境变量+路径候选（LOCALAPPDATA/PROGRAMFILES/PROGRAMFILES(X86) × ChatGPT/OpenAI 各种目录组合）做文件存在性探测；②HKCU/HKLM SOFTWARE\Microsoft\Windows\CurrentVersion\App Paths\
- **raw leaf**: `raw/aimami/1.2.6/windows-x64/platform/process/chatgpt_desktop_app_locator/`
- **call-tree**: `call-tree.json` (edges=25)
- **interface**: `interface-report.json` (confidence=high)

## Gate 状态

- dim1: PASS — 前端 IPC 合同集已验证（继承 parent version-delta bundle）
- dim2: PASS — 1/1 命令有 owner_ea + pseudocode（1 decompile_ok + 0 decompile_null gate-passed via callee_count>=5）
- dim3: PASS — 1/1 raw leaf 有 call-tree.json 且 edges>=5 或 terminated_reason
- dim4: PASS — 1/1 raw leaf 有 interface-report.json 且含 sideEffects 字段
- dim5: PASS — 全部 raw leaf 在 win-x64/1.2.6 下；live win IDA status=ok/<反编译器>_ready=true
- dim6: pending_implementation_side — C5 实现侧验收工作；真机未对照，red line 25 声明「未对照」
- strictImplementationUse: true（dim1-5 全 PASS）
- readyToImplement: false（blocked by dim6 + live_reference_parity）
- gate_accepted: false

## 破坏性副作用编目

- 本模块命令未检测到破坏性副作用关键词


## 原始证据引用

详见 `pointers/evidence-paths.md` 获取本模块所有 raw leaf 的完整路径。
