# Evidence: load_skill_backups

## 命令身份
- 命令名: `load_skill_backups`
- Owner EA: `0x140d556c0`
- Owner 函数名: `load_skill_backups`
- 模块: `commands/skills`
- 版本: 1.2.6 / 平台: windows-x64
- 函数大小: 0x13a3 (5027 bytes)

## Owner 定位
- 方法: delta-commands.txt 已记录 EA (conf=high)，IDA find_regex 确认命令名串存在
- Xrefs to owner: tauri generate_handler! dispatcher

## 反编译
- 文件: `ida/pseudocode/load_skill_backups_0x140d556c0.c`
- 状态: decompiled
- IDA 注释: Tauri 命令 load_skill_backups 处理器（commands::skills）。列出技能备份清单。

## 调用树
- 文件: `call-tree.json`
- Callee 数量: 34 / Edge 数量: 34
- 终止原因: leaf_handler

## 接口报告
- 文件: `interface-report.json`
- 置信度: high
- 副作用: kill

## 字符串引用
- `0x0x1418938e4`: -
- `0x0x1418938e4`: -
- `0x0x1418938f4`: ~
- `0x0x1418938f4`: ~
- `0x0x1418938f4`: ~
- `0x0x1418938f4`: ~
- `0x0x141886f55`: load_skill_backups
- `0x0x141886e13`: repo
- `0x0x141893904`: N
- `0x0x141893904`: N
- ... (共 16 条)
