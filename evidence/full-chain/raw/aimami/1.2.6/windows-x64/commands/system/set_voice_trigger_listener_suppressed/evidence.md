# Evidence: set_voice_trigger_listener_suppressed

## 命令身份
- 命令名: `set_voice_trigger_listener_suppressed`
- Owner EA: `0x140161330`
- Owner 函数名: `sub_140161330`
- 模块: `commands/system`
- 版本: 1.2.6 / 平台: windows-x64
- 函数大小: 0x509 (1289 bytes)

## Owner 定位
- 方法: delta-commands.txt 已记录 EA (conf=high)，IDA find_regex 确认命令名串存在
- Xrefs to owner: tauri generate_handler! dispatcher

## 反编译
- 文件: `ida/pseudocode/set_voice_trigger_listener_suppressed_0x140161330.c`
- 状态: decompiled

## 调用树
- 文件: `call-tree.json`
- Callee 数量: 15 / Edge 数量: 15
- 终止原因: leaf_handler

## 接口报告
- 文件: `interface-report.json`
- 置信度: high
- 副作用: 无检测到

## 字符串引用
- `0x0x14177a682`: set_voice_trigger_listener_suppressed
- `0x0x14177a424`: app
- `0x0x14177a6a7`: suppressed
