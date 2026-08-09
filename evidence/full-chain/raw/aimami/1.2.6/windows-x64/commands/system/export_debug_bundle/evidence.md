# Evidence: export_debug_bundle

## 命令身份
- 命令名: `export_debug_bundle`
- Owner EA: `0x140d7c5e0`
- Owner 函数名: `export_debug_bundle`
- 模块: `commands/system`
- 版本: 1.2.6 / 平台: windows-x64
- 函数大小: 0x10a0 (4256 bytes)

## Owner 定位
- 方法: delta-commands.txt 已记录 EA (conf=high)，IDA find_regex 确认命令名串存在
- Xrefs to owner: tauri generate_handler! dispatcher

## 反编译
- 文件: `ida/pseudocode/export_debug_bundle_0x140d7c5e0.c`
- 状态: decompiled
- IDA 注释: Tauri 命令 export_debug_bundle 处理器（commands::debug_bundle，argKeys: targetPath）。导出调试包到 targetPath，体内 export_started/export_succeeded/export_failed 进度事件串佐证。⚠副作用：写文件。

## 调用树
- 文件: `call-tree.json`
- Callee 数量: 30 / Edge 数量: 30
- 终止原因: leaf_handler

## 接口报告
- 文件: `interface-report.json`
- 置信度: high
- 副作用: 无检测到

## 字符串引用
- `0x0x1418871f5`: export_debug_bundle
- `0x0x1418865b4`: manager
- `0x0x141886faf`: targetPath
- `0x0x141888211`: target=selected
- `0x0x1418881f7`: debug_bundle
- `0x0x141888203`: export_started
- `0x0x1412ddf00`: H
- `0x0x141553f20`: UVWH
- `0x0x1418881f7`: debug_bundle
- `0x0x141888261`: export_succeeded
- ... (共 15 条)
