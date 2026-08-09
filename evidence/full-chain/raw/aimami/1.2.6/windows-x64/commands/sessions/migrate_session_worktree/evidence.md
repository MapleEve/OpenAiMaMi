# Evidence: migrate_session_worktree

## 命令身份
- 命令名: `migrate_session_worktree`
- Owner EA: `0x140d491f0`
- Owner 函数名: `migrate_session_worktree`
- 模块: `commands/sessions`
- 版本: 1.2.6 / 平台: windows-x64
- 函数大小: 0x13cd (5069 bytes)

## Owner 定位
- 方法: delta-commands.txt 已记录 EA (conf=high)，IDA find_regex 确认命令名串存在
- Xrefs to owner: tauri generate_handler! dispatcher

## 反编译
- 文件: `ida/pseudocode/migrate_session_worktree_0x140d491f0.c`
- 状态: decompiled
- IDA 注释: Tauri命令handler:迁移会话worktree(sessionId+mutationGate),返回SessionMigrateWorktreePayload。⚠副作用:迁移/改写worktree目录(mutation)。归属:win锚sessions.rs+analytics.rs 1:1,mac符号裁定commands::sessions。

## 调用树
- 文件: `call-tree.json`
- Callee 数量: 31 / Edge 数量: 31
- 终止原因: leaf_handler

## 接口报告
- 文件: `interface-report.json`
- 置信度: high
- 副作用: 无检测到

## 字符串引用
- `0x0x141886dfb`: migrate_session_worktree
- `0x0x141886e13`: repo
- `0x0x141886e17`: mutationGate
- `0x0x141886e23`: sessionId
- `0x0x1417f3f68`: poisoned lock: another task failed inside
- `0x0x141891b78`: a Display implementation returned an error unexpectedly
- `0x0x141891b78`: a Display implementation returned an error unexpectedly
- `0x0x141891b78`: a Display implementation returned an error unexpectedly
