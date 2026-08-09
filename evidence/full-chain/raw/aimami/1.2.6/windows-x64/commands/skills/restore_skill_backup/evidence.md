# Evidence: restore_skill_backup

## 命令身份
- 命令名: `restore_skill_backup`
- Owner EA: `0x140d4dc70`
- Owner 函数名: `restore_skill_backup`
- 模块: `commands/skills`
- 版本: 1.2.6 / 平台: windows-x64
- 函数大小: 0x19fe (6654 bytes)

## Owner 定位
- 方法: delta-commands.txt 已记录 EA (conf=high)，IDA find_regex 确认命令名串存在
- Xrefs to owner: tauri generate_handler! dispatcher

## 反编译
- 文件: `ida/pseudocode/restore_skill_backup_0x140d4dc70.c`
- 状态: decompiled
- IDA 注释: Tauri 命令 restore_skill_backup 处理器（commands::skills）。按 id 从备份恢复技能。⚠副作用：写回覆盖技能数据。

## 调用树
- 文件: `call-tree.json`
- Callee 数量: 33 / Edge 数量: 33
- 终止原因: leaf_handler

## 接口报告
- 文件: `interface-report.json`
- 置信度: high
- 副作用: kill

## 字符串引用
- `0x0x141886f29`: restore_skill_backup
- `0x0x141886e13`: repo
- `0x0x141886f27`: id
- `0x0x141893844`: j
- `0x0x141893844`: j
- `0x0x1417f3f68`: poisoned lock: another task failed inside
- `0x0x141891b78`: a Display implementation returned an error unexpectedly
- `0x0x141891b78`: a Display implementation returned an error unexpectedly
- `0x0x141891b78`: a Display implementation returned an error unexpectedly
- `0x0x141891b78`: a Display implementation returned an error unexpectedly
