# Evidence: reveal_relay_api_key

## 命令身份
- 命令名: `reveal_relay_api_key`
- Owner EA: `0x14016e1d0`
- Owner 函数名: `reveal_relay_api_key`
- 模块: `commands/relay`
- 版本: 1.2.6 / 平台: windows-x64
- 函数大小: 0x56e (1390 bytes)

## Owner 定位
- 方法: delta-commands.txt 已记录 EA (conf=high)，IDA find_regex 确认命令名串存在
- Xrefs to owner: tauri generate_handler! dispatcher

## 反编译
- 文件: `ida/pseudocode/reveal_relay_api_key_0x14016e1d0.c`
- 状态: decompiled
- IDA 注释: Tauri 命令 reveal_relay_api_key 的 handler：按入参 providerId 取回该 relay provider 的 API Key 明文返回前端（敏感：凭据明文出进程）。归属：命令名串精确 xref 唯一归属（live 复验）；模块按命令族推断 src\commands\relay.rs。

## 调用树
- 文件: `call-tree.json`
- Callee 数量: 14 / Edge 数量: 14
- 终止原因: leaf_handler

## 接口报告
- 文件: `interface-report.json`
- 置信度: high
- 副作用: 无检测到

## 字符串引用
- `0x0x14177a96c`: reveal_relay_api_key
- `0x0x14177a10e`: manager
- `0x0x14177a980`: providerId
