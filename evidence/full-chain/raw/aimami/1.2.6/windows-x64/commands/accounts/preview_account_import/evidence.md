# Evidence: preview_account_import

## 命令身份
- 命令名: `preview_account_import`
- Owner EA: `0x140d65310`
- Owner 函数名: `preview_account_import`
- 模块: `commands/accounts`
- 版本: 1.2.6 / 平台: windows-x64
- 函数大小: 0xd33 (3379 bytes)

## Owner 定位
- 方法: delta-commands.txt 已记录 EA (conf=high)，IDA find_regex 确认命令名串存在
- Xrefs to owner: tauri generate_handler! dispatcher

## 反编译
- 文件: `ida/pseudocode/preview_account_import_0x140d65310.c`
- 状态: decompiled
- IDA 注释: Tauri命令handler:预览账号导入文件(filePath),只解析不落库,返回可导入账号预览。归属:锚src\commands\account_io.rs。

## 调用树
- 文件: `call-tree.json`
- Callee 数量: 26 / Edge 数量: 26
- 终止原因: leaf_handler

## 接口报告
- 文件: `interface-report.json`
- 置信度: high
- 副作用: 无检测到

## 字符串引用
- `0x0x141893b38`: )
- `0x0x141893b38`: )
- `0x0x141893b48`: ~
- `0x0x141893b48`: ~
- `0x0x141893b48`: ~
- `0x0x141893b48`: ~
- `0x0x14188706e`: preview_account_import
- `0x0x1418864e7`: app
- `0x0x141887034`: filePath
- `0x0x141893b58`: 0
- ... (共 17 条)
