# Evidence: force_kill_codex

## 命令身份
- 命令名: `force_kill_codex`
- Owner EA: `0x14014bf20`
- Owner 函数名: `force_kill_codex`
- 模块: `commands/system`
- 版本: 1.2.6 / 平台: windows-x64
- 函数大小: 0x3d8 (984 bytes)

## Owner 定位
- 方法: delta-commands.txt 已记录 EA (conf=high)，IDA find_regex 确认命令名串存在
- Xrefs to owner: tauri generate_handler! dispatcher

## 反编译
- 文件: `ida/pseudocode/force_kill_codex_0x14014bf20.c`
- 状态: decompiled
- IDA 注释: Tauri 命令 force_kill_codex 的 handler：强制终止 codex 进程（破坏性副作用：强杀进程），经 mutationGate。归属：命令名串精确 xref 唯一归属（live 复验）；模块按命令族（diagnose/restart_codex 锚定 src\commands\system.rs）推断。

## 调用树
- 文件: `call-tree.json`
- Callee 数量: 12 / Edge 数量: 12
- 终止原因: leaf_handler

## 接口报告
- 文件: `interface-report.json`
- 置信度: high
- 副作用: kill, restart

## 字符串引用
- `0x0x14177a16a`: force_kill_codex
- `0x0x14177a157`: mutationGate
