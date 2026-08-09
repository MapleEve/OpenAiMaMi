# Evidence: set_auto_switch

## 命令身份
- 命令名: `set_auto_switch`
- Owner EA: `0x140d466b0`
- Owner 函数名: `set_auto_switch`
- 模块: `commands/accounts`
- 版本: 1.2.6 / 平台: windows-x64
- 函数大小: 0xdef (3567 bytes)

## Owner 定位
- 方法: delta-commands.txt 已记录 EA (conf=high)，IDA find_regex 确认命令名串存在
- Xrefs to owner: tauri generate_handler! dispatcher

## 反编译
- 文件: `ida/pseudocode/set_auto_switch_0x140d466b0.c`
- 状态: decompiled
- IDA 注释: Tauri命令handler:开关auto-switch(enabled),提交后刷新运行时(失败报RUNTIME_REFRESH_FAILED_AFTER_AUTO_SWITCH_UPDATE)。副作用:写配置(mutation)。归属:锚src\commands\system.rs。

## 调用树
- 文件: `call-tree.json`
- Callee 数量: 28 / Edge 数量: 28
- 终止原因: leaf_handler

## 接口报告
- 文件: `interface-report.json`
- 置信度: high
- 副作用: 无检测到

## 字符串引用
- `0x0x141893720`: ;0K
- `0x0x141893720`: ;0K
- `0x0x141893720`: ;0K
- `0x0x141893720`: ;0K
- `0x0x141886dd0`: set_auto_switch
- `0x0x1418864e7`: app
- `0x0x141886da0`: enabled
- `0x0x141893730`: }3K
- `0x0x141893730`: }3K
- `0x0x1412ddf00`: H
- ... (共 14 条)
