# Evidence: resolve_voice_vocabulary_app_info

## 命令身份
- 命令名: `resolve_voice_vocabulary_app_info`
- Owner EA: `0x140151740`
- Owner 函数名: `sub_140151740`
- 模块: `commands/system`
- 版本: 1.2.6 / 平台: windows-x64
- 函数大小: 0x36c (876 bytes)

## Owner 定位
- 方法: delta-commands.txt 已记录 EA (conf=high)，IDA find_regex 确认命令名串存在
- Xrefs to owner: tauri generate_handler! dispatcher

## 反编译
- 文件: `ida/pseudocode/resolve_voice_vocabulary_app_info_0x140151740.c`
- 状态: decompiled

## 调用树
- 文件: `call-tree.json`
- Callee 数量: 11 / Edge 数量: 11
- 终止原因: leaf_handler

## 接口报告
- 文件: `interface-report.json`
- 置信度: high
- 副作用: 无检测到

## 字符串引用
- `0x0x14177a2bc`: resolve_voice_vocabulary_app_info
- `0x0x14177a2dd`: path
