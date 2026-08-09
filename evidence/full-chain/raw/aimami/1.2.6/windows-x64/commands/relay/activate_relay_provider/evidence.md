# Evidence: activate_relay_provider

## 命令身份
- 命令名: `activate_relay_provider`
- Owner EA: `0x1401701b0`
- Owner 函数名: `activate_relay_provider`
- 模块: `commands/relay`
- 版本: 1.2.6 / 平台: windows-x64
- 函数大小: 0x5bb (1467 bytes)

## Owner 定位
- 方法: delta-commands.txt 已记录 EA (conf=high)，IDA find_regex 确认命令名串存在
- Xrefs to owner: tauri generate_handler! dispatcher

## 反编译
- 文件: `ida/pseudocode/activate_relay_provider_0x1401701b0.c`
- 状态: decompiled
- IDA 注释: Tauri 命令 activate_relay_provider 的 handler：按入参 providerId 激活指定 relay provider，经 relay manager 切换当前活跃 provider 并持久化状态。归属：命令名串精确 xref 唯一归属（live 复验串 0x14177a9e8→本函数）；模块按命令族+同文件 panic-Location 锚定推断为 src\c

## 调用树
- 文件: `call-tree.json`
- Callee 数量: 14 / Edge 数量: 14
- 终止原因: leaf_handler

## 接口报告
- 文件: `interface-report.json`
- 置信度: high
- 副作用: 无检测到

## 字符串引用
- `0x0x14177a9e8`: activate_relay_provider
- `0x0x14177a10e`: manager
- `0x0x14177a980`: providerId
- `0x0x14177a9e5`: ide
