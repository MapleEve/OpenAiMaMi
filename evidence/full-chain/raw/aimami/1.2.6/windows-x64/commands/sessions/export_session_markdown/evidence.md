# Evidence: export_session_markdown

## 命令身份
- 命令名: `export_session_markdown`
- Owner EA: `0x140d5b000`
- Owner 函数名: `export_session_markdown`
- 模块: `commands/sessions`
- 版本: 1.2.6 / 平台: windows-x64
- 函数大小: 0x185b (6235 bytes)

## Owner 定位
- 方法: delta-commands.txt 已记录 EA (conf=high)，IDA find_regex 确认命令名串存在
- Xrefs to owner: tauri generate_handler! dispatcher

## 反编译
- 文件: `ida/pseudocode/export_session_markdown_0x140d5b000.c`
- 状态: decompiled
- IDA 注释: Tauri命令handler:把sessionId会话导出为Markdown到targetPath。副作用:写磁盘文件。归属:锚src\commands\sessions.rs。

## 调用树
- 文件: `call-tree.json`
- Callee 数量: 31 / Edge 数量: 31
- 终止原因: leaf_handler

## 接口报告
- 文件: `interface-report.json`
- 置信度: high
- 副作用: 无检测到

## 字符串引用
- `0x0x141886f98`: export_session_markdown
- `0x0x141886e13`: repo
- `0x0x141886e23`: sessionId
- `0x0x141886faf`: targetPath
- `0x0x1418939d4`: &yL
- `0x0x1418939d4`: &yL
- `0x0x1418939d4`: &yL
- `0x0x1418939d4`: &yL
- `0x0x1417f3f68`: poisoned lock: another task failed inside
- `0x0x1418939d4`: &yL
- ... (共 15 条)
