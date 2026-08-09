# Evidence: switch_account_and_restart_codex

## 命令身份
- 命令名: `switch_account_and_restart_codex`
- Owner EA: `0x140d6d960`
- Owner 函数名: `switch_account_and_restart_codex`
- 模块: `commands/accounts`
- 版本: 1.2.6
- 平台: windows-x64
- 函数大小: 0xe22 (3618 bytes)

## Owner 定位
- 方法: delta-commands.txt 已记录 EA (conf=high)，IDA find_regex 确认命令名串存在
- 命令名串地址: 见 strings
- Xrefs to owner: tauri generate_handler! dispatcher

## 反编译
- 文件: `ida/pseudocode/switch_account_and_restart_codex_0x140d6d960.c`
- 状态: decompiled

## 调用树
- 文件: `call-tree.json`
- Callee 数量: 26
- Edge 数量: 26
- 终止原因: leaf_handler

## 接口报告
- 文件: `interface-report.json`
- 置信度: high
- 副作用: restart

## 字符串引用
- `0x0x141893cf0`: &
- `0x0x141893cf0`: &
- `0x0x141893cf0`: &
- `0x0x141893cf0`: &
- `0x0x1418870f0`: switch_account_and_restart_codex
- `0x0x1418864e7`: app
- `0x0x141887110`: accountKey
- `0x0x1412ddf00`: H
- `0x0x141891b78`: a Display implementation returned an error unexpectedly
