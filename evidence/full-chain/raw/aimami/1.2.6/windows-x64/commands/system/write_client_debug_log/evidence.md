# Evidence: write_client_debug_log

## 命令身份
- 命令名: `write_client_debug_log`
- Owner EA: `0x1401683a0`
- Owner 函数名: `write_client_debug_log`
- 模块: `commands/system`
- 版本: 1.2.6 / 平台: windows-x64
- 函数大小: 0x285 (645 bytes)

## Owner 定位
- 方法: delta-commands.txt 已记录 EA (conf=high)，IDA find_regex 确认命令名串存在
- Xrefs to owner: tauri generate_handler! dispatcher

## 反编译
- 文件: `ida/pseudocode/write_client_debug_log_0x1401683a0.c`
- 状态: decompiled
- IDA 注释: Tauri 命令 write_client_debug_log 处理器（commands::debug_bundle，argKeys: event）。写入客户端调试日志。⚠副作用：写日志文件。

## 调用树
- 文件: `call-tree.json`
- Callee 数量: 8 / Edge 数量: 8
- 终止原因: leaf_handler

## 接口报告
- 文件: `interface-report.json`
- 置信度: high
- 副作用: 无检测到

## 字符串引用
- `0x0x14177a7bf`: write_client_debug_log
- `0x0x14177a7d5`: event
