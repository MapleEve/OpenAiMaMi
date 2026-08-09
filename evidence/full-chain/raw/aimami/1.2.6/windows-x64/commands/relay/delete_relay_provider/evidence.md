# Evidence: delete_relay_provider

## 命令身份
- 命令名: `delete_relay_provider`
- Owner EA: `0x140170a40`
- Owner 函数名: `delete_relay_provider`
- 模块: `commands/relay`
- 版本: 1.2.6 / 平台: windows-x64
- 函数大小: 0x60b (1547 bytes)

## Owner 定位
- 方法: delta-commands.txt 已记录 EA (conf=high)，IDA find_regex 确认命令名串存在
- Xrefs to owner: tauri generate_handler! dispatcher

## 反编译
- 文件: `ida/pseudocode/delete_relay_provider_0x140170a40.c`
- 状态: decompiled
- IDA 注释: Tauri 命令 delete_relay_provider 的 handler：按入参 providerId 删除 relay provider 配置（破坏性副作用：移除持久化 provider 记录），引用 app(AppHandle) 与 relay manager。归属：命令名串精确 xref 唯一归属（live 复验）；模块按命令族推断 src\commands\relay.rs。

## 调用树
- 文件: `call-tree.json`
- Callee 数量: 15 / Edge 数量: 15
- 终止原因: leaf_handler

## 接口报告
- 文件: `interface-report.json`
- 置信度: high
- 副作用: delete

## 字符串引用
- `0x0x14177a9ff`: delete_relay_provider
- `0x0x14177a424`: app
- `0x0x14177a10e`: manager
- `0x0x14177a980`: providerId
