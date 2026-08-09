# Evidence: refresh_single_account_usage

## 命令身份
- 命令名: `refresh_single_account_usage`
- Owner EA: `0x140d70840`
- Owner 函数名: `refresh_single_account_usage`
- 模块: `commands/accounts`
- 版本: 1.2.6
- 平台: windows-x64
- 函数大小: 0x1026 (4134 bytes)

## Owner 定位
- 方法: delta-commands.txt 已记录 EA (conf=high)，IDA find_regex 确认命令名串存在
- 命令名串地址: 见 strings
- Xrefs to owner: tauri generate_handler! dispatcher

## 反编译
- 文件: `ida/pseudocode/refresh_single_account_usage_0x140d70840.c`
- 状态: decompiled

## 调用树
- 文件: `call-tree.json`
- Callee 数量: 31
- Edge 数量: 31
- 终止原因: leaf_handler

## 接口报告
- 文件: `interface-report.json`
- 置信度: high
- 副作用: 无检测到

## 字符串引用
- `0x0x141893d90`: s
- `0x0x141893d90`: s
- `0x0x141893d90`: s
- `0x0x141893d90`: s
- `0x0x141887128`: refresh_single_account_usage
- `0x0x1418864e7`: app
- `0x0x141887110`: accountKey
- `0x0x141893db0`: %
- `0x0x141893db0`: %
- `0x0x141893db0`: %
- ... (共 14 条)
