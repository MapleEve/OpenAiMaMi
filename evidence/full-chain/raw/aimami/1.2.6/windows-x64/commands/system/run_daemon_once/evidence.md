# Evidence: run_daemon_once

## 命令身份
- 命令名: `run_daemon_once`
- Owner EA: `0x140d81ec0`
- Owner 函数名: `run_daemon_once_tauri_dispatcher`
- 模块: `commands/system`
- 版本: 1.2.6 / 平台: windows-x64
- 函数大小: 0xc19 (3097 bytes)

## Owner 定位
- 方法: delta-commands.txt 已记录 EA (conf=high)，IDA find_regex 确认命令名串存在
- Xrefs to owner: tauri generate_handler! dispatcher

## 反编译
- 文件: `ida/pseudocode/run_daemon_once_0x140d81ec0.c`
- 状态: decompiled
- IDA 注释: run_daemon_once Tauri 命令的 async 状态机 dispatcher（经 run_daemon_once 字符串精确 xref 定位，0x141887265 唯一引用者）。仅含框架代码：State/AppHandle 提取、tracing span 包装(sub_14085A6F0)、tokio coop::budget 轮询(sub_140501B40，非业务锁)。真实业

## 调用树
- 文件: `call-tree.json`
- Callee 数量: 22 / Edge 数量: 22
- 终止原因: leaf_handler

## 接口报告
- 文件: `interface-report.json`
- 置信度: high
- 副作用: 无检测到

## 字符串引用
- `0x0x1418940e4`: &
- `0x0x1418940e4`: &
- `0x0x1418940f4`: {
- `0x0x1418940f4`: {
- `0x0x1418940f4`: {
- `0x0x1418940f4`: {
- `0x0x141887265`: run_daemon_once
- `0x0x1418864e7`: app
- `0x0x1412ddf00`: H
- `0x0x1418877e7`: Auto-switch worker failed: 
- ... (共 11 条)
