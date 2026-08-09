# Evidence: import_skill

## 命令身份
- 命令名: `import_skill`
- Owner EA: `0x140d52e00`
- Owner 函数名: `import_skill`
- 模块: `commands/skills`
- 版本: 1.2.6 / 平台: windows-x64
- 函数大小: 0x19ee (6638 bytes)

## Owner 定位
- 方法: delta-commands.txt 已记录 EA (conf=high)，IDA find_regex 确认命令名串存在
- Xrefs to owner: tauri generate_handler! dispatcher

## 反编译
- 文件: `ida/pseudocode/import_skill_0x140d52e00.c`
- 状态: decompiled
- IDA 注释: Tauri 命令 import_skill 处理器（commands::skills）。从 path 导入技能包（体内 path/repo 串佐证）。凭证：命令名串 live 唯一 xref + 前端契约 argKeys(path)。

## 调用树
- 文件: `call-tree.json`
- Callee 数量: 32 / Edge 数量: 32
- 终止原因: leaf_handler

## 接口报告
- 文件: `interface-report.json`
- 置信度: high
- 副作用: kill

## 字符串引用
- `0x0x141886f49`: import_skill
- `0x0x141886e13`: repo
- `0x0x14188631c`: path
- `0x0x1418938c4`: t
- `0x0x1418938c4`: t
- `0x0x1417f3f68`: poisoned lock: another task failed inside
- `0x0x141891b78`: a Display implementation returned an error unexpectedly
- `0x0x141891b78`: a Display implementation returned an error unexpectedly
- `0x0x141891b78`: a Display implementation returned an error unexpectedly
- `0x0x141891b78`: a Display implementation returned an error unexpectedly
