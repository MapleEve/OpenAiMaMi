# Evidence: set_autostart_enabled

## 命令身份
- 命令名: `set_autostart_enabled`
- Owner EA: `0x1401660a0`
- Owner 函数名: `set_autostart_enabled`
- 模块: `commands/system`
- 版本: 1.2.6 / 平台: windows-x64
- 函数大小: 0x5eb (1515 bytes)

## Owner 定位
- 方法: delta-commands.txt 已记录 EA (conf=high)，IDA find_regex 确认命令名串存在
- Xrefs to owner: tauri generate_handler! dispatcher

## 反编译
- 文件: `ida/pseudocode/set_autostart_enabled_0x1401660a0.c`
- 状态: decompiled
- IDA 注释: Tauri 命令 set_autostart_enabled 处理器（commands::autostart，argKeys: enabled）。设置开机自启动。⚠副作用：写系统自启配置。

## 调用树
- 文件: `call-tree.json`
- Callee 数量: 15 / Edge 数量: 15
- 终止原因: leaf_handler

## 接口报告
- 文件: `interface-report.json`
- 置信度: high
- 副作用: 无检测到

## 字符串引用
- `0x0x14177a759`: set_autostart_enabled
- `0x0x14177a424`: app
- `0x0x14177a18a`: repo
- `0x0x14177a163`: enabled
