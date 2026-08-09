# Evidence: set_usage_refresh_interval

## 命令身份
- 命令名: `set_usage_refresh_interval`
- Owner EA: `0x14016bc40`
- Owner 函数名: `set_usage_refresh_interval`
- 模块: `commands/system`
- 版本: 1.2.6 / 平台: windows-x64
- 函数大小: 0x5db (1499 bytes)

## Owner 定位
- 方法: delta-commands.txt 已记录 EA (conf=high)，IDA find_regex 确认命令名串存在
- Xrefs to owner: tauri generate_handler! dispatcher

## 反编译
- 文件: `ida/pseudocode/set_usage_refresh_interval_0x14016bc40.c`
- 状态: decompiled
- IDA 注释: Tauri 命令 set_usage_refresh_interval 处理器（commands::system，argKeys: interval）。设置用量刷新间隔。⚠副作用：写配置。

## 调用树
- 文件: `call-tree.json`
- Callee 数量: 15 / Edge 数量: 15
- 终止原因: leaf_handler

## 接口报告
- 文件: `interface-report.json`
- 置信度: high
- 副作用: 无检测到

## 字符串引用
- `0x0x14177a8f5`: set_usage_refresh_interval
- `0x0x14177a424`: app
- `0x0x14177a18a`: repo
- `0x0x14177a90f`: interval
