# Evidence: test_voice_asr_config

## 命令身份
- 命令名: `test_voice_asr_config`
- Owner EA: `0x14014de80`
- Owner 函数名: `sub_14014DE80`
- 模块: `commands/system`
- 版本: 1.2.6 / 平台: windows-x64
- 函数大小: 0x705 (1797 bytes)

## Owner 定位
- 方法: delta-commands.txt 已记录 EA (conf=high)，IDA find_regex 确认命令名串存在
- Xrefs to owner: tauri generate_handler! dispatcher

## 反编译
- 文件: `ida/pseudocode/test_voice_asr_config_0x14014de80.c`
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
- `0x0x14177a1ea`: test_voice_asr_config
- `0x0x14177a1ff`: asrProvider
- `0x0x14177a20a`: asrApiKey
- `0x0x14177a213`: asrModel
- `0x0x14177a21b`: asrBaseUrl
