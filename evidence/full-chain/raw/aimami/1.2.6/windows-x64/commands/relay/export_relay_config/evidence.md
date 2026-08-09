# Evidence: export_relay_config

## 命令身份
- 命令名: `export_relay_config`
- Owner EA: `0x14014a4d0`
- Owner 函数名: `export_relay_config`
- 模块: `commands/relay`
- 版本: 1.2.6 / 平台: windows-x64
- 函数大小: 0x61b (1563 bytes)

## Owner 定位
- 方法: delta-commands.txt 已记录 EA (conf=high)，IDA find_regex 确认命令名串存在
- Xrefs to owner: tauri generate_handler! dispatcher

## 反编译
- 文件: `ida/pseudocode/export_relay_config_0x14014a4d0.c`
- 状态: decompiled
- IDA 注释: Tauri 命令 export_relay_config 的 handler：导出 relay 配置到入参 filePath 指定文件，includeApiKeys 控制是否含 API Key 明文（敏感：可写出凭据）。归属：命令名串精确 xref 唯一归属（live 复验）；模块按命令族推断 src\commands\relay.rs。

## 调用树
- 文件: `call-tree.json`
- Callee 数量: 14 / Edge 数量: 14
- 终止原因: leaf_handler

## 接口报告
- 文件: `interface-report.json`
- 置信度: high
- 副作用: 无检测到

## 字符串引用
- `0x0x14177a0fb`: export_relay_config
- `0x0x14177a10e`: manager
- `0x0x14177a115`: filePath
- `0x0x14177a11d`: includeApiKeys
