# Evidence: restart_codex

## 命令身份
- 命令名: `restart_codex`
- Owner EA: `0x140d7fef0`
- Owner 函数名: `restart_codex`
- 模块: `commands/system`
- 版本: 1.2.6 / 平台: windows-x64
- 函数大小: 0x8ee (2286 bytes)

## Owner 定位
- 方法: delta-commands.txt 已记录 EA (conf=high)，IDA find_regex 确认命令名串存在
- Xrefs to owner: tauri generate_handler! dispatcher

## 反编译
- 文件: `ida/pseudocode/restart_codex_0x140d7fef0.c`
- 状态: decompiled
- IDA 注释: Tauri 命令 restart_codex 的 handler：重启 codex 进程（进程副作用：终止并拉起 codex），引用 app(AppHandle)。归属：命令名串精确 xref 唯一归属 + panic-Location 两跳锚定 src\commands\system.rs。

## 调用树
- 文件: `call-tree.json`
- Callee 数量: 19 / Edge 数量: 19
- 终止原因: leaf_handler

## 接口报告
- 文件: `interface-report.json`
- 置信度: high
- 副作用: restart

## 字符串引用
- `0x0x141894074`: +
- `0x0x141894074`: +
- `0x0x141894074`: +
- `0x0x141894074`: +
- `0x0x141887250`: restart_codex
- `0x0x1418864e7`: app
- `0x0x141894084`: 0
- `0x0x141894084`: 0
- `0x0x1412ddf00`: H
