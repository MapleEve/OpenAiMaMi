# Evidence: confirm_pending_auto_switch

## 命令身份
- 命令名: `confirm_pending_auto_switch`
- Owner EA: `0x140d7eeb0`
- Owner 函数名: `confirm_pending_auto_switch`
- 模块: `commands/accounts`
- 版本: 1.2.6 / 平台: windows-x64
- 函数大小: 0x9c3 (2499 bytes)

## Owner 定位
- 方法: delta-commands.txt 已记录 EA (conf=high)，IDA find_regex 确认命令名串存在
- Xrefs to owner: tauri generate_handler! dispatcher

## 反编译
- 文件: `ida/pseudocode/confirm_pending_auto_switch_0x140d7eeb0.c`
- 状态: decompiled
- IDA 注释: Tauri命令handler:确认挂起的auto-switch切换,不重启Codex。副作用:提交pending切换(mutation)。归属:锚src\commands\system.rs。

## 调用树
- 文件: `call-tree.json`
- Callee 数量: 21 / Edge 数量: 21
- 终止原因: leaf_handler

## 接口报告
- 文件: `interface-report.json`
- 置信度: high
- 副作用: 无检测到

## 字符串引用
- `0x0x141894034`: 2
- `0x0x141894034`: 2
- `0x0x141894034`: 2
- `0x0x141894034`: 2
- `0x0x141887235`: confirm_pending_auto_switch
- `0x0x1418864e7`: app
- `0x0x141894044`: g
- `0x0x141894044`: g
- `0x0x141891b78`: a Display implementation returned an error unexpectedly
