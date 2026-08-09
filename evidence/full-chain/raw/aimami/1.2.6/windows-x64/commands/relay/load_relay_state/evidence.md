# Evidence: load_relay_state

## 命令身份
- 命令名: `load_relay_state`
- Owner EA: `0x140171c40`
- Owner 函数名: `load_relay_state`
- 模块: `commands/relay`
- 版本: 1.2.6 / 平台: windows-x64
- 函数大小: 0x388 (904 bytes)

## Owner 定位
- 方法: delta-commands.txt 已记录 EA (conf=high)，IDA find_regex 确认命令名串存在
- Xrefs to owner: tauri generate_handler! dispatcher

## 反编译
- 文件: `ida/pseudocode/load_relay_state_0x140171c40.c`
- 状态: decompiled
- IDA 注释: Tauri 命令 load_relay_state 的 handler：加载 relay 持久化状态（provider 列表/活跃项等，经 relay manager）。归属：命令名串精确 xref 唯一归属（live 复验）；模块按命令族推断 src\commands\relay.rs。

## 调用树
- 文件: `call-tree.json`
- Callee 数量: 12 / Edge 数量: 12
- 终止原因: leaf_handler

## 接口报告
- 文件: `interface-report.json`
- 置信度: high
- 副作用: 无检测到

## 字符串引用
- `0x0x14177aa4d`: load_relay_state
- `0x0x14177a10e`: manager
