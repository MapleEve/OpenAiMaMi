# Evidence: get_device_id

## 命令身份
- 命令名: `get_device_id`
- Owner EA: `0x140169df0`
- Owner 函数名: `get_device_id`
- 模块: `commands/system`
- 版本: 1.2.6 / 平台: windows-x64
- 函数大小: 0x388 (904 bytes)

## Owner 定位
- 方法: delta-commands.txt 已记录 EA (conf=high)，IDA find_regex 确认命令名串存在
- Xrefs to owner: tauri generate_handler! dispatcher

## 反编译
- 文件: `ida/pseudocode/get_device_id_0x140169df0.c`
- 状态: decompiled
- IDA 注释: Tauri 命令 get_device_id 处理器（commands::system，mac 符号）。读取设备唯一标识。

## 调用树
- 文件: `call-tree.json`
- Callee 数量: 12 / Edge 数量: 12
- 终止原因: leaf_handler

## 接口报告
- 文件: `interface-report.json`
- 置信度: high
- 副作用: 无检测到

## 字符串引用
- `0x0x14177a87d`: get_device_id
- `0x0x14177a18a`: repo
