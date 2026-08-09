# Evidence: load_bootstrap_state

## 命令身份
- 命令名: `load_bootstrap_state`
- Owner EA: `0x14016ae90`
- Owner 函数名: `load_bootstrap_state`
- 模块: `commands/system`
- 版本: 1.2.6 / 平台: windows-x64
- 函数大小: 0x388 (904 bytes)

## Owner 定位
- 方法: delta-commands.txt 已记录 EA (conf=high)，IDA find_regex 确认命令名串存在
- Xrefs to owner: tauri generate_handler! dispatcher

## 反编译
- 文件: `ida/pseudocode/load_bootstrap_state_0x14016ae90.c`
- 状态: decompiled
- IDA 注释: Tauri 命令 load_bootstrap_state 处理器（commands::system）。加载启动引导状态（mac 符号 Repository::load_bootstrap_state 佐证）。

## 调用树
- 文件: `call-tree.json`
- Callee 数量: 12 / Edge 数量: 12
- 终止原因: leaf_handler

## 接口报告
- 文件: `interface-report.json`
- 置信度: high
- 副作用: 无检测到

## 字符串引用
- `0x0x14177a8c6`: load_bootstrap_state
- `0x0x14177a18a`: repo
