# Evidence: load_voice_runtime_status

## 命令身份
- 命令名: `load_voice_runtime_status`
- Owner EA: `0x140162d80`
- Owner 函数名: `load_voice_runtime_status_owner_sys`
- 模块: `commands/system`
- 版本: 1.2.6 / 平台: windows-x64
- 函数大小: 0x44c (1100 bytes)

## Owner 定位
- 方法: delta-commands.txt 已记录 EA (conf=high)，IDA find_regex 确认命令名串存在
- Xrefs to owner: tauri generate_handler! dispatcher

## 反编译
- 文件: `ida/pseudocode/load_voice_runtime_status_0x140162d80.c`
- 状态: decompiled
- IDA 注释: 职责：load_voice_runtime_status IPC 命令的 tracing::instrument 包装壳（真实业务体在同 IDB 内已命名的 load_voice_runtime_status@0x140c37a50，本次会话确认该重命名+注释来自更早轮次但从未落 raw evidence bundle，本次补写证据）。边界：core::voice::runtime 模块状态查询。

## 调用树
- 文件: `call-tree.json`
- Callee 数量: 13 / Edge 数量: 13
- 终止原因: leaf_handler

## 接口报告
- 文件: `interface-report.json`
- 置信度: high
- 副作用: 无检测到

## 字符串引用
- `0x0x14177a6e3`: load_voice_runtime_status
- `0x0x14177a424`: app
