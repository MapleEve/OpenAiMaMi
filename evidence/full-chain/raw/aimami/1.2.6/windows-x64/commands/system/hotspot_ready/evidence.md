# Evidence: hotspot_ready

## 命令身份
- 命令名: `hotspot_ready`
- Owner EA: `0x1401721d0`
- Owner 函数名: `hotspot_ready`
- 模块: `commands/system`
- 版本: 1.2.6 / 平台: windows-x64
- 函数大小: 0x35c (860 bytes)

## Owner 定位
- 方法: delta-commands.txt 已记录 EA (conf=high)，IDA find_regex 确认命令名串存在
- Xrefs to owner: tauri generate_handler! dispatcher

## 反编译
- 文件: `ida/pseudocode/hotspot_ready_0x1401721d0.c`
- 状态: decompiled
- IDA 注释: Tauri 命令 hotspot_ready 处理器（commands::hotspot）。查询/上报热点就绪状态。

## 调用树
- 文件: `call-tree.json`
- Callee 数量: 11 / Edge 数量: 11
- 终止原因: leaf_handler

## 接口报告
- 文件: `interface-report.json`
- 置信度: high
- 副作用: 无检测到

## 字符串引用
- `0x0x14177aa5d`: hotspot_ready
- `0x0x14177a424`: app
