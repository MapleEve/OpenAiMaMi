# Evidence: capture_voice_trigger_key

## 命令身份
- 命令名: `capture_voice_trigger_key`
- Owner EA: `0x140d61ae0`
- Owner 函数名: `sub_140D61AE0`
- 模块: `commands/system`
- 版本: 1.2.6 / 平台: windows-x64
- 函数大小: 0xce7 (3303 bytes)

## Owner 定位
- 方法: delta-commands.txt 已记录 EA (conf=high)，IDA find_regex 确认命令名串存在
- Xrefs to owner: tauri generate_handler! dispatcher

## 反编译
- 文件: `ida/pseudocode/capture_voice_trigger_key_0x140d61ae0.c`
- 状态: decompiled

## 调用树
- 文件: `call-tree.json`
- Callee 数量: 25 / Edge 数量: 25
- 终止原因: leaf_handler

## 接口报告
- 文件: `interface-report.json`
- 置信度: high
- 副作用: 无检测到

## 字符串引用
- `0x0x141886ffd`: capture_voice_trigger_key
- `0x0x1418864e7`: app
- `0x0x141887016`: style
- `0x0x141893ac4`: t
- `0x0x141893ac4`: t
- `0x0x1412ddf00`: H
- `0x0x14188772c`: %failed to join trigger capture task: 
- `0x0x141891b78`: a Display implementation returned an error unexpectedly
