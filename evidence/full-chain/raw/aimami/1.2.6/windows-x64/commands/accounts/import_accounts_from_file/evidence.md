# Evidence: import_accounts_from_file

## 命令身份
- 命令名: `import_accounts_from_file`
- Owner EA: `0x140d62e30`
- Owner 函数名: `import_accounts_from_file`
- 模块: `commands/accounts`
- 版本: 1.2.6 / 平台: windows-x64
- 函数大小: 0x1742 (5954 bytes)

## Owner 定位
- 方法: delta-commands.txt 已记录 EA (conf=high)，IDA find_regex 确认命令名串存在
- Xrefs to owner: tauri generate_handler! dispatcher

## 反编译
- 文件: `ida/pseudocode/import_accounts_from_file_0x140d62e30.c`
- 状态: decompiled (disasm_reconstructed — Hex-Rays null_cfunc, IDA disasm 重建)
- source: ida
- 重建依据: IDA disasm(0x140d62e30-0x140d64572) + strings(17条) + callees(33个) + basic_blocks(162块/CC=51) + IDA注释
- IDA 注释: Tauri命令handler:从filePath导入账号,支持expectedContentSha256校验/overwriteExisting/selectedKeys,导入后触发运行时刷新(失败报RUNTIME_REFRESH_FAILED_AFTER_IMPORT)。副作用:写账号库(mutation)。归属:win锚accounts.rs+account_io.rs 1:1,mac符号裁定

## 调用树
- 文件: `call-tree.json`
- Callee 数量: 33 / Edge 数量: 33
- 终止原因: leaf_handler

## 接口报告
- 文件: `interface-report.json`
- 置信度: high
- 副作用: WRITE(账号数据库mutation via sub_140AFFC30) | FILE_READ(账号文件filePath via sub_140856D70) | TRIGGER(运行时刷新 via sub_140DB62C0, 失败报RUNTIME_REFRESH_FAILED_AFTER_IMPORT) | VALIDATE(SHA256校验 via sub_14049D260)

## 字符串引用
- `0x0x14188701b`: import_accounts_from_file
- `0x0x1418864e7`: app
- `0x0x141887034`: filePath
- `0x0x141893b14`: ;
- `0x0x141893b14`: ;
- `0x0x141893b14`: ;
- `0x0x141893b14`: ;
- `0x0x141893b28`: 6
- `0x0x141893b28`: 6
- `0x0x14188703c`: expectedContentSha256
- ... (共 17 条)
