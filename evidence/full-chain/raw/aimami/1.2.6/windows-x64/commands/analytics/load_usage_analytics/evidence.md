# Evidence: load_usage_analytics

## 命令身份
- 命令名: `load_usage_analytics`
- Owner EA: `0x140d9c1e0`
- Owner 函数名: `load_usage_analytics`
- 模块: `commands/analytics`
- 版本: 1.2.6 / 平台: windows-x64
- 函数大小: 0x1236 (4662 bytes)

## Owner 定位
- 方法: delta-commands.txt 已记录 EA (conf=high)，IDA find_regex 确认命令名串存在
- Xrefs to owner: tauri generate_handler! dispatcher

## 反编译
- 文件: `ida/pseudocode/load_usage_analytics_0x140d9c1e0.c`
- 状态: decompiled
- IDA 注释: Tauri命令handler:加载用量分析总览。归属:锚src\commands\analytics.rs。

## 调用树
- 文件: `call-tree.json`
- Callee 数量: 32 / Edge 数量: 32
- 终止原因: leaf_handler

## 接口报告
- 文件: `interface-report.json`
- 置信度: high
- 副作用: 无检测到

## 字符串引用
- `0x0x1418944b0`: ~}P
- `0x0x1418944b0`: ~}P
- `0x0x141887385`: load_usage_analytics
- `0x0x141886e13`: repo
- `0x0x1417f3f68`: poisoned lock: another task failed inside
- `0x0x1412ddf00`: H
- `0x0x141891b78`: a Display implementation returned an error unexpectedly
- `0x0x141891b78`: a Display implementation returned an error unexpectedly
- `0x0x141891b78`: a Display implementation returned an error unexpectedly
