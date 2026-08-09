# Evidence: set_codex_router_no_account_mode

## 命令身份
- 命令名: `set_codex_router_no_account_mode`
- Owner EA: `0x140d77830`
- Owner 函数名: `set_codex_router_no_account_mode`
- 模块: `commands/relay`
- 版本: 1.2.6 / 平台: windows-x64
- 函数大小: 0x12af (4783 bytes)

## Owner 定位
- 方法: delta-commands.txt 已记录 EA (conf=high)，IDA find_regex 确认命令名串存在
- Xrefs to owner: tauri generate_handler! dispatcher

## 反编译
- 文件: `ida/pseudocode/set_codex_router_no_account_mode_0x140d77830.c`
- 状态: decompiled
- IDA 注释: Tauri 命令 set_codex_router_no_account_mode 的 handler：按入参 enabled 开关 codex router 免账号模式，涉及 relaunch（进程副作用：可触发应用重启）。归属：命令名串精确 xref 唯一归属 + panic-Location 两跳锚定 src\commands\relay.rs。

## 调用树
- 文件: `call-tree.json`
- Callee 数量: 33 / Edge 数量: 33
- 终止原因: leaf_handler

## 接口报告
- 文件: `interface-report.json`
- 置信度: high
- 副作用: 无检测到

## 字符串引用
- `0x0x1418871a4`: set_codex_router_no_account_mode
- `0x0x1418864e7`: app
- `0x0x1418865b4`: manager
- `0x0x141886da0`: enabled
- `0x0x1412ddf00`: H
- `0x0x14188719c`: relaunch
- `0x0x141891b78`: a Display implementation returned an error unexpectedly
- `0x0x141891b78`: a Display implementation returned an error unexpectedly
