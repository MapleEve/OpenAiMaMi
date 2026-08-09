# Evidence: export_accounts_to_file

## 命令身份
- 命令名: `export_accounts_to_file`
- Owner EA: `0x140d668d0`
- Owner 函数名: `export_accounts_to_file`
- 模块: `commands/accounts`
- 版本: 1.2.6 / 平台: windows-x64
- 函数大小: 0x102e (4142 bytes)

## Owner 定位
- 方法: delta-commands.txt 已记录 EA (conf=high)，IDA find_regex 确认命令名串存在
- Xrefs to owner: tauri generate_handler! dispatcher

## 反编译
- 文件: `ida/pseudocode/export_accounts_to_file_0x140d668d0.c`
- 状态: decompiled
- IDA 注释: Tauri命令handler:把选中账号(accountKeys)导出到targetPath文件,含10M大小校验。副作用:写磁盘文件。归属:锚src\commands\account_io.rs。

## 调用树
- 文件: `call-tree.json`
- Callee 数量: 27 / Edge 数量: 27
- 终止原因: leaf_handler

## 接口报告
- 文件: `interface-report.json`
- 置信度: high
- 副作用: 无检测到

## 字符串引用
- `0x0x141887084`: export_accounts_to_file
- `0x0x1418864e7`: app
- `0x0x141886faf`: targetPath
- `0x0x141893b98`: 10M
- `0x0x141893b98`: 10M
- `0x0x141893ba8`: p0M
- `0x0x141893ba8`: p0M
- `0x0x141893ba8`: p0M
- `0x0x141893ba8`: p0M
- `0x0x1412ddf00`: H
- ... (共 12 条)
