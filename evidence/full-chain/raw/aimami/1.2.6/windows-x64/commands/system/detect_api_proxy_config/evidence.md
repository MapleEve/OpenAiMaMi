# Evidence: detect_api_proxy_config

## 命令身份
- 命令名: `detect_api_proxy_config`
- Owner EA: `0x140d83110`
- Owner 函数名: `detect_api_proxy_config`
- 模块: `commands/system`
- 版本: 1.2.6 / 平台: windows-x64
- 函数大小: 0xae9 (2793 bytes)

## Owner 定位
- 方法: delta-commands.txt 已记录 EA (conf=high)，IDA find_regex 确认命令名串存在
- Xrefs to owner: tauri generate_handler! dispatcher

## 反编译
- 文件: `ida/pseudocode/detect_api_proxy_config_0x140d83110.c`
- 状态: decompiled
- IDA 注释: Tauri 命令 detect_api_proxy_config 的 handler：探测当前系统/环境 API 代理配置（引用 app/deepLink/protocol 上下文）。归属：命令名串精确 xref 唯一归属 + panic-Location 两跳锚定 src\commands\system.rs。

## 调用树
- 文件: `call-tree.json`
- Callee 数量: 22 / Edge 数量: 22
- 终止原因: leaf_handler

## 接口报告
- 文件: `interface-report.json`
- 置信度: high
- 副作用: 无检测到

## 字符串引用
- `0x0x141894124`: 6
- `0x0x141894124`: 6
- `0x0x141887274`: detect_api_proxy_config
- `0x0x1418864e7`: app
- `0x0x1412ddf00`: H
- `0x0x141891b78`: a Display implementation returned an error unexpectedly
