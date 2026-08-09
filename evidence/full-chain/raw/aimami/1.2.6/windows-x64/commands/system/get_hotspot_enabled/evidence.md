# Evidence: get_hotspot_enabled

## 命令身份
- 命令名: `get_hotspot_enabled`
- Owner EA: `0x140173550`
- Owner 函数名: `get_hotspot_enabled`
- 模块: `commands/system`
- 版本: 1.2.6 / 平台: windows-x64
- 函数大小: 0x378 (888 bytes)

## Owner 定位
- 方法: delta-commands.txt 已记录 EA (conf=high)，IDA find_regex 确认命令名串存在
- Xrefs to owner: tauri generate_handler! dispatcher

## 反编译
- 文件: `ida/pseudocode/get_hotspot_enabled_0x140173550.c`
- 状态: decompiled
- IDA 注释: Tauri 命令 get_hotspot_enabled 处理器（commands::hotspot）。读取热点开关状态。

## 调用树
- 文件: `call-tree.json`
- Callee 数量: 12 / Edge 数量: 12
- 终止原因: leaf_handler

## 接口报告
- 文件: `interface-report.json`
- 置信度: high
- 副作用: 无检测到

## 字符串引用
- `0x0x14177aa8e`: get_hotspot_enabled
- `0x0x14177a18a`: repo
