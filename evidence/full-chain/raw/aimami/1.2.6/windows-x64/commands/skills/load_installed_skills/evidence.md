# Evidence: load_installed_skills

## 命令身份
- 命令名: `load_installed_skills`
- Owner EA: `0x140d57470`
- Owner 函数名: `load_installed_skills`
- 模块: `commands/skills`
- 版本: 1.2.6 / 平台: windows-x64
- 函数大小: 0x1723 (5923 bytes)

## Owner 定位
- 方法: delta-commands.txt 已记录 EA (conf=high)，IDA find_regex 确认命令名串存在
- Xrefs to owner: tauri generate_handler! dispatcher

## 反编译
- 文件: `ida/pseudocode/load_installed_skills_0x140d57470.c`
- 状态: decompiled
- IDA 注释: Tauri 命令 load_installed_skills 处理器（commands::skills）。读取并返回已安装技能列表（mac 符号 CoreEnvelope<SkillListPayload> 佐证）。

## 调用树
- 文件: `call-tree.json`
- Callee 数量: 37 / Edge 数量: 37
- 终止原因: leaf_handler

## 接口报告
- 文件: `interface-report.json`
- 置信度: high
- 副作用: kill

## 字符串引用
- `0x0x141886f67`: load_installed_skills
- `0x0x141886e13`: repo
- `0x0x1417f3f68`: poisoned lock: another task failed inside
- `0x0x1417f3f68`: poisoned lock: another task failed inside
- `0x0x141891b78`: a Display implementation returned an error unexpectedly
- `0x0x141891b78`: a Display implementation returned an error unexpectedly
- `0x0x141891b78`: a Display implementation returned an error unexpectedly
- `0x0x141891b78`: a Display implementation returned an error unexpectedly
- `0x0x141891b78`: a Display implementation returned an error unexpectedly
- `0x0x141891b78`: a Display implementation returned an error unexpectedly
