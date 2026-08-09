# Evidence: import_relay_config

## 命令身份
- 命令名: `import_relay_config`
- Owner EA: `0x14016d2d0`
- Owner 函数名: `import_relay_config`
- 模块: `commands/relay`
- 版本: 1.2.6 / 平台: windows-x64
- 函数大小: 0x60b (1547 bytes)

## Owner 定位
- 方法: delta-commands.txt 已记录 EA (conf=high)，IDA find_regex 确认命令名串存在
- Xrefs to owner: tauri generate_handler! dispatcher

## 反编译
- 文件: `ida/pseudocode/import_relay_config_0x14016d2d0.c`
- 状态: decompiled
- IDA 注释: Tauri 命令 import_relay_config 的 handler：从入参 filePath 导入 relay 配置（写副作用：覆盖/合并现有 provider 配置），引用 app(AppHandle) 与 relay manager。归属：命令名串精确 xref 唯一归属（live 复验）；模块按命令族推断 src\commands\relay.rs。

## 调用树
- 文件: `call-tree.json`
- Callee 数量: 15 / Edge 数量: 15
- 终止原因: leaf_handler

## 接口报告
- 文件: `interface-report.json`
- 置信度: high
- 副作用: 无检测到

## 字符串引用
- `0x0x14177a949`: import_relay_config
- `0x0x14177a424`: app
- `0x0x14177a10e`: manager
- `0x0x14177a115`: filePath
