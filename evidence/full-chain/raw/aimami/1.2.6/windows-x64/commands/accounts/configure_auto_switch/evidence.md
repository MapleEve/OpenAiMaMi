# Evidence: configure_auto_switch

## 命令身份
- 命令名: `configure_auto_switch`
- Owner EA: `0x140d44bd0`
- Owner 函数名: `configure_auto_switch`
- 模块: `commands/accounts`
- 版本: 1.2.6 / 平台: windows-x64
- 函数大小: 0x10b0 (4272 bytes)

## Owner 定位
- 方法: delta-commands.txt 已记录 EA (conf=high)，IDA find_regex 确认命令名串存在
- Xrefs to owner: tauri generate_handler! dispatcher

## 反编译
- 文件: `ida/pseudocode/configure_auto_switch_0x140d44bd0.c`
- 状态: decompiled (disasm_reconstructed — Hex-Rays null_cfunc, IDA disasm 重建)
- source: ida
- 重建依据: IDA disasm(0x140d44bd0-0x140d45c80) + strings(16条) + callees(29个) + basic_blocks(134块/CC=44) + IDA注释
- IDA 注释: Tauri命令handler:配置auto-switch(enabled+threshold5hPercent+thresholdWeeklyPercent阈值),提交后刷新运行时(失败报RUNTIME_REFRESH_FAILED_AFTER_AUTO_SWITCH_UPDATE)。副作用:写配置(mutation)。归属:锚src\commands\system.rs。

## 调用树
- 文件: `call-tree.json`
- Callee 数量: 29 / Edge 数量: 29
- 终止原因: leaf_handler

## 接口报告
- 文件: `interface-report.json`
- 置信度: high
- 副作用: WRITE(配置文件mutation via sub_14085ACD0) | TRIGGER(运行时刷新 via sub_140D9FA30, 失败报RUNTIME_REFRESH_FAILED_AFTER_AUTO_SWITCH_UPDATE) | VALIDATE(阈值范围校验 via sub_140C98E70, 0-100)

## 字符串引用
- `0x0x1418936cc`: \
- `0x0x1418936cc`: \
- `0x0x141886d63`: configure_auto_switch
- `0x0x1418864e7`: app
- `0x0x141886d78`: threshold5hPercent
- `0x0x1418936fc`: [
- `0x0x1418936fc`: [
- `0x0x1418936fc`: [
- `0x0x1418936fc`: [
- `0x0x141886d8a`: thresholdWeeklyPercent
- ... (共 16 条)
