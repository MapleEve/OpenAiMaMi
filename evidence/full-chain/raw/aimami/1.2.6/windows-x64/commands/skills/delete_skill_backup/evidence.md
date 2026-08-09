# Evidence: delete_skill_backup

## 命令身份
- 命令名: `delete_skill_backup`
- Owner EA: `0x140d4b270`
- Owner 函数名: `delete_skill_backup`
- 模块: `commands/skills`
- 版本: 1.2.6 / 平台: windows-x64
- 函数大小: 0x1ae5 (6885 bytes)

## Owner 定位
- 方法: delta-commands.txt 已记录 EA (conf=high)，IDA find_regex 确认命令名串存在
- Xrefs to owner: tauri generate_handler! dispatcher

## 反编译
- 文件: `ida/pseudocode/delete_skill_backup_0x140d4b270.c`
- 状态: decompiled
- IDA 注释: Tauri 命令 delete_skill_backup 处理器（commands::skills）。按 id 删除指定技能的本地备份数据。⚠破坏性副作用：删除本机备份文件。凭证：命令名串 live 唯一 xref + 前端契约 argKeys(id) + mac 符号 commands::skills。

## 调用树
- 文件: `call-tree.json`
- Callee 数量: 32 / Edge 数量: 32
- 终止原因: leaf_handler

## 接口报告
- 文件: `interface-report.json`
- 置信度: high
- 副作用: delete, kill

## 字符串引用
- `0x0x1418937f4`: '{K
- `0x0x1418937f4`: '{K
- `0x0x1418937f4`: '{K
- `0x0x1418937f4`: '{K
- `0x0x141886f14`: delete_skill_backup
- `0x0x141886e13`: repo
- `0x0x141886f27`: id
- `0x0x1417f3f68`: poisoned lock: another task failed inside
- `0x0x141891b78`: a Display implementation returned an error unexpectedly
- `0x0x141891b78`: a Display implementation returned an error unexpectedly
- ... (共 12 条)
