# Evidence: remove_voice_mode_shortcut

## 命令身份
- 命令名: `remove_voice_mode_shortcut`
- Owner EA: `0x140159140`
- Owner 函数名: `sub_140159140`
- 模块: `commands/system`
- 版本: 1.2.6 / 平台: windows-x64
- 函数大小: 0x49c (1180 bytes)

## Owner 定位
- 方法: delta-commands.txt 已记录 EA (conf=high)，IDA find_regex 确认命令名串存在
- Xrefs to owner: tauri generate_handler! dispatcher

## 反编译
- 文件: `ida/pseudocode/remove_voice_mode_shortcut_0x140159140.c`
- 状态: decompiled

## 调用树
- 文件: `call-tree.json`
- Callee 数量: 13 / Edge 数量: 13
- 终止原因: leaf_handler

## 接口报告
- 文件: `interface-report.json`
- 置信度: high
- 副作用: 无检测到

## 字符串引用
- `0x0x14177a47f`: remove_voice_mode_shortcut
- `0x0x14177a424`: app
- `0x0x14177a499`: modeId
