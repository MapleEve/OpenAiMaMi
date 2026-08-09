# DELTA-LOGIC-1.2.6-WIN — Windows x64 1.2.4→1.2.6 sessions 模块 diff 逻辑

## 概述

Windows x64 1.2.4→1.2.6 delta 中 sessions 模块的 per-module full-chain 结论。
本 bundle 从 windows-1.2.6-version-delta 总 bundle 拆分而来，内容来自 raw leaf 的 evidence.md + call-tree.json + interface-report.json。

命令数：4

## 命令 full-chain 结论（消费者面向）

### load_sessions

- **Owner EA**: `0x140d5f0b0`
- **Owner 函数**: `load_sessions`
- **模块**: `commands/sessions`
- **函数大小**: 0x110b (4363 bytes)
- **反编译状态**: decompiled
- **Callee 数量**: 30
- **Edge 数量**: 30
- **终止原因**: leaf_handler
- **副作用**: 无检测到
- **IDA 注释**: Tauri命令handler:加载会话列表(repo)。归属:锚src\commands\sessions.rs。
- **raw leaf**: `raw/aimami/1.2.6/windows-x64/commands/sessions/load_sessions/`
- **call-tree**: `call-tree.json` (edges=30)
- **interface**: `interface-report.json` (confidence=high)

### delete_sessions

- **Owner EA**: `0x140d5d450`
- **Owner 函数**: `delete_sessions`
- **模块**: `commands/sessions`
- **函数大小**: 0x136c (4972 bytes)
- **反编译状态**: decompiled
- **Callee 数量**: 31
- **Edge 数量**: 31
- **终止原因**: leaf_handler
- **副作用**: ["delete"]
- **IDA 注释**: 职责：Tauri 命令 delete_sessions 的公开异步命令实现（完整 Rust async Future 状态机 switch(state)，非薄壳转发，本轮完整反编译确认为真实业务逻辑：按 ids 批量删除会话记录并重建仓库互斥锁/Repo 状态）。边界：commands::sessions 模块。副作用：删除本地会话存储记录（持久化写操作）。交叉核实：mac 侧 1.2.4→1.2
- **raw leaf**: `raw/aimami/1.2.6/windows-x64/commands/sessions/delete_sessions/`
- **call-tree**: `call-tree.json` (edges=31)
- **interface**: `interface-report.json` (confidence=high)

### export_session_markdown

- **Owner EA**: `0x140d5b000`
- **Owner 函数**: `export_session_markdown`
- **模块**: `commands/sessions`
- **函数大小**: 0x185b (6235 bytes)
- **反编译状态**: decompiled
- **Callee 数量**: 31
- **Edge 数量**: 31
- **终止原因**: leaf_handler
- **副作用**: 无检测到
- **IDA 注释**: Tauri命令handler:把sessionId会话导出为Markdown到targetPath。副作用:写磁盘文件。归属:锚src\commands\sessions.rs。
- **raw leaf**: `raw/aimami/1.2.6/windows-x64/commands/sessions/export_session_markdown/`
- **call-tree**: `call-tree.json` (edges=31)
- **interface**: `interface-report.json` (confidence=high)

### migrate_session_worktree

- **Owner EA**: `0x140d491f0`
- **Owner 函数**: `migrate_session_worktree`
- **模块**: `commands/sessions`
- **函数大小**: 0x13cd (5069 bytes)
- **反编译状态**: decompiled
- **Callee 数量**: 31
- **Edge 数量**: 31
- **终止原因**: leaf_handler
- **副作用**: 无检测到
- **IDA 注释**: Tauri命令handler:迁移会话worktree(sessionId+mutationGate),返回SessionMigrateWorktreePayload。⚠副作用:迁移/改写worktree目录(mutation)。归属:win锚sessions.rs+analytics.rs 1:1,mac符号裁定commands::sessions。
- **raw leaf**: `raw/aimami/1.2.6/windows-x64/commands/sessions/migrate_session_worktree/`
- **call-tree**: `call-tree.json` (edges=31)
- **interface**: `interface-report.json` (confidence=high)

## Gate 状态

- dim1: PASS — 前端 IPC 合同集已验证（继承 parent version-delta bundle）
- dim2: PASS — 4/4 命令有 owner_ea + pseudocode（4 decompile_ok + 0 decompile_null gate-passed via callee_count>=5）
- dim3: PASS — 4/4 raw leaf 有 call-tree.json 且 edges>=5 或 terminated_reason
- dim4: PASS — 4/4 raw leaf 有 interface-report.json 且含 sideEffects 字段
- dim5: PASS — 全部 raw leaf 在 win-x64/1.2.6 下；live win IDA status=ok/<反编译器>_ready=true
- dim6: pending_implementation_side — C5 实现侧验收工作；真机未对照，red line 25 声明「未对照」
- strictImplementationUse: true（dim1-5 全 PASS）
- readyToImplement: false（blocked by dim6 + live_reference_parity）
- gate_accepted: false

## 破坏性副作用编目

- **delete_sessions**: delete

## 原始证据引用

详见 `pointers/evidence-paths.md` 获取本模块所有 raw leaf 的完整路径。
