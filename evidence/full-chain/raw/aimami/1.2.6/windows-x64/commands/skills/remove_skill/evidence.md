# Evidence: remove_skill

## 命令身份
- 命令名: `remove_skill`
- Owner EA: `0x140d50540`
- Owner 函数名: `remove_skill`
- 模块: `commands/skills`
- 版本: 1.2.6 / 平台: windows-x64
- 函数大小: 0x19db (6619 bytes)

## Owner 定位
- 方法: delta-commands.txt 已记录 EA (conf=high)，IDA find_regex 确认命令名串存在
- Xrefs to owner: tauri generate_handler! dispatcher

## 反编译
- 文件: `ida/pseudocode/remove_skill_0x140d50540.c`
- 状态: decompiled
- IDA 注释: Tauri 命令 remove_skill 处理器（commands::skills）。按 id 移除已安装技能。⚠破坏性副作用：删除技能数据。凭证：命令名串 live 唯一 xref + 前端契约 argKeys(id)。

## 调用树
- 文件: `call-tree.json`
- Callee 数量: 32 / Edge 数量: 32
- 终止原因: leaf_handler

## 接口报告
- 文件: `interface-report.json`
- 置信度: high
- 副作用: kill

## 字符串引用
- `0x0x141893864`: &
- `0x0x141893864`: &
- `0x0x141893874`: {
- `0x0x141893874`: {
- `0x0x141893874`: {
- `0x0x141893874`: {
- `0x0x141886f3d`: remove_skill
- `0x0x141886e13`: repo
- `0x0x141886f27`: id
- `0x0x141893894`: Z
- ... (共 18 条)
