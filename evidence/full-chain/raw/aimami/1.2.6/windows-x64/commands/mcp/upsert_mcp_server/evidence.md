# Evidence: upsert_mcp_server

## 命令身份
- 命令名: `upsert_mcp_server`
- Owner EA: `0x140163e30`
- Owner 函数名: `upsert_mcp_server`
- 模块: `commands/mcp`
- 版本: 1.2.6 / 平台: windows-x64
- 函数大小: 0xe95 (3733 bytes)

## Owner 定位
- 方法: delta-commands.txt 已记录 EA (conf=high)，IDA find_regex 确认命令名串存在
- Xrefs to owner: tauri generate_handler! dispatcher

## 反编译
- 文件: `ida/pseudocode/upsert_mcp_server_0x140163e30.c`
- 状态: decompiled
- IDA 注释: Tauri 命令 upsert_mcp_server 的 handler：新增或更新 MCP server 配置，入参含 transport/command/args/headers/environment/url 连接字段，经 mutationGate 落盘（写副作用：改 MCP 配置）。归属：命令名串精确 xref 唯一归属（live 复验）；模块按命令族推断 src\commands\mcp

## 调用树
- 文件: `call-tree.json`
- Callee 数量: 18 / Edge 数量: 18
- 终止原因: leaf_handler

## 接口报告
- 文件: `interface-report.json`
- 置信度: high
- 副作用: 无检测到

## 字符串引用
- `0x0x14177a712`: upsert_mcp_server
- `0x0x14177a18a`: repo
- `0x0x14177a157`: mutationGate
- `0x0x141778191`: name
- `0x0x14177a723`: transport
- `0x0x14177a163`: enabled
- `0x0x14177a72c`: command
- `0x0x14177a733`: args
- `0x0x14177a0f8`: url
- `0x0x14177a737`: headers
- ... (共 11 条)
