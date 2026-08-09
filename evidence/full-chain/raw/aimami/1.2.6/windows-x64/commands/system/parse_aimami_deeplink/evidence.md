# Evidence: parse_aimami_deeplink

## 命令身份
- 命令名: `parse_aimami_deeplink`
- Owner EA: `0x140149f60`
- Owner 函数名: `parse_aimami_deeplink`
- 模块: `commands/system`
- 版本: 1.2.6 / 平台: windows-x64
- 函数大小: 0x36c (876 bytes)

## Owner 定位
- 方法: delta-commands.txt 已记录 EA (conf=high)，IDA find_regex 确认命令名串存在
- Xrefs to owner: tauri generate_handler! dispatcher

## 反编译
- 文件: `ida/pseudocode/parse_aimami_deeplink_0x140149f60.c`
- 状态: decompiled
- IDA 注释: Tauri 命令 parse_aimami_deeplink 处理器（commands::deeplink，argKeys: url）。解析 aimami deeplink URL（体内 url 串佐证）。

## 调用树
- 文件: `call-tree.json`
- Callee 数量: 11 / Edge 数量: 11
- 终止原因: leaf_handler

## 接口报告
- 文件: `interface-report.json`
- 置信度: high
- 副作用: 无检测到

## 字符串引用
- `0x0x14177a0e3`: parse_aimami_deeplink
- `0x0x14177a0f8`: url
