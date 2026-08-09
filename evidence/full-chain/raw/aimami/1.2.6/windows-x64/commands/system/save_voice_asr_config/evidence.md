# Evidence: save_voice_asr_config

## 命令身份
- 命令名: `save_voice_asr_config`
- Owner EA: `0x14014ea20`
- Owner 函数名: `sub_14014EA20`
- 模块: `commands/system`
- 版本: 1.2.6 / 平台: windows-x64
- 函数大小: 0x6a0 (1696 bytes)

## Owner 定位
- 方法: delta-commands.txt 已记录 EA (conf=high)，IDA find_regex 确认命令名串存在
- Xrefs to owner: tauri generate_handler! dispatcher

## 反编译
- 文件: `ida/pseudocode/save_voice_asr_config_0x14014ea20.c`
- 状态: decompiled

## 调用树
- 文件: `call-tree.json`
- Callee 数量: 9 / Edge 数量: 9
- 终止原因: leaf_handler

## 接口报告
- 文件: `interface-report.json`
- 置信度: high
- 副作用: 无检测到

## 字符串引用
- `0x0x14177a225`: save_voice_asr_config
- `0x0x14177a1ff`: asrProvider
- `0x0x14177a20a`: asrApiKey
- `0x0x14177a213`: asrModel
- `0x0x14177a21b`: asrBaseUrl
