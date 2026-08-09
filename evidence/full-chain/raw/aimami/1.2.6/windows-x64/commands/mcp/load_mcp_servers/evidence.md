# Evidence: load_mcp_servers

## 命令身份
- 命令名: `load_mcp_servers`
- Owner EA: `0x1401656b0`
- Owner 函数名: `load_mcp_servers`
- 模块: `commands/mcp`
- 版本: 1.2.6 / 平台: windows-x64
- 函数大小: 0x388 (904 bytes)

## Owner 定位
- 方法: delta-commands.txt 已记录 EA (conf=high)，IDA find_regex 确认命令名串存在
- Xrefs to owner: tauri generate_handler! dispatcher

## 反编译
- 文件: `ida/pseudocode/load_mcp_servers_0x1401656b0.c`
- 状态: decompiled
- IDA 注释: Tauri 命令 load_mcp_servers 的 handler：从持久化 repo 加载 MCP server 配置列表。归属：命令名串精确 xref 唯一归属（live 复验）；模块按命令族推断 src\commands\mcp.rs（MCP 配置面）。

## 调用树
- 文件: `call-tree.json`
- Callee 数量: 12 / Edge 数量: 12
- 终止原因: leaf_handler

## 接口报告
- 文件: `interface-report.json`
- 置信度: high
- 副作用: 无检测到

## 字符串引用
- `0x0x14177a749`: load_mcp_servers
- `0x0x14177a18a`: repo
