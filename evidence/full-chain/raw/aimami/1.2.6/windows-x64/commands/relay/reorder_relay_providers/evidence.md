# Evidence: reorder_relay_providers

## 命令身份
- 命令名: `reorder_relay_providers`
- Owner EA: `0x14016e9b0`
- Owner 函数名: `reorder_relay_providers`
- 模块: `commands/relay`
- 版本: 1.2.6 / 平台: windows-x64
- 函数大小: 0x4be (1214 bytes)

## Owner 定位
- 方法: delta-commands.txt 已记录 EA (conf=high)，IDA find_regex 确认命令名串存在
- Xrefs to owner: tauri generate_handler! dispatcher

## 反编译
- 文件: `ida/pseudocode/reorder_relay_providers_0x14016e9b0.c`
- 状态: decompiled
- IDA 注释: Tauri 命令 reorder_relay_providers 的 handler：按入参 orderedIds 重排 relay provider 优先级顺序并持久化（写副作用：改持久化顺序）。归属：命令名串精确 xref 唯一归属（live 复验）；模块按命令族推断 src\commands\relay.rs。

## 调用树
- 文件: `call-tree.json`
- Callee 数量: 13 / Edge 数量: 13
- 终止原因: leaf_handler

## 接口报告
- 文件: `interface-report.json`
- 置信度: high
- 副作用: 无检测到

## 字符串引用
- `0x0x14177a98a`: reorder_relay_providers
- `0x0x14177a10e`: manager
- `0x0x14177a9a1`: orderedIds
