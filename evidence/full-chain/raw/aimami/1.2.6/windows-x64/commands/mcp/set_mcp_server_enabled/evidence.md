# Evidence: set_mcp_server_enabled

## 命令身份
- 命令名: `set_mcp_server_enabled`
- Owner EA: `0x140163410`
- Owner 函数名: `set_mcp_server_enabled`
- 模块: `commands/mcp`
- 版本: 1.2.6 / 平台: windows-x64
- 函数大小: 0x71d (1821 bytes)

## Owner 定位
- 方法: delta-commands.txt 已记录 EA (conf=high)，IDA find_regex 确认命令名串存在
- Xrefs to owner: tauri generate_handler! dispatcher

## 反编译
- 文件: `ida/pseudocode/set_mcp_server_enabled_0x140163410.c`
- 状态: decompiled
- IDA 注释: Tauri 命令 set_mcp_server_enabled 的 handler：按入参 name + enabled 开关指定 MCP server，经 mutationGate 变更门禁后落盘（写副作用：改 MCP 配置）。归属：命令名串精确 xref 唯一归属（live 复验）；模块按命令族推断 src\commands\mcp.rs。

## 调用树
- 文件: `call-tree.json`
- Callee 数量: 15 / Edge 数量: 15
- 终止原因: leaf_handler

## 接口报告
- 文件: `interface-report.json`
- 置信度: high
- 副作用: 无检测到

## 字符串引用
- `0x0x14177a6fc`: set_mcp_server_enabled
- `0x0x14177a18a`: repo
- `0x0x14177a157`: mutationGate
- `0x0x141778191`: name
- `0x0x14177a163`: enabled
