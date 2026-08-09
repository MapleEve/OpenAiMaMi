# Evidence: generate_voice_prompt

## 命令身份
- 命令名: `generate_voice_prompt`
- Owner EA: `0x140d9fdd0`
- Owner 函数名: `sub_140D9FDD0`
- 模块: `commands/system`
- 版本: 1.2.6 / 平台: windows-x64
- 函数大小: 0x5dee (24046 bytes)

## Owner 定位
- 方法: delta-commands.txt 已记录 EA (conf=high)，IDA find_regex 确认命令名串存在
- Xrefs to owner: tauri generate_handler! dispatcher

## 反编译
- 文件: `ida/pseudocode/generate_voice_prompt_0x140d9fdd0.c`
- 状态: decompiled

## 调用树
- 文件: `call-tree.json`
- Callee 数量: 33 / Edge 数量: 33
- 终止原因: leaf_handler

## 接口报告
- 文件: `interface-report.json`
- 置信度: high
- 副作用: 无检测到

## 字符串引用
- `0x0x141886e2c`: generate_voice_prompt
- `0x0x1418864e7`: app
- `0x0x141886e13`: repo
- `0x0x141886e41`: templateId
- `0x0x1417f3f68`: poisoned lock: another task failed inside
- `0x0x141886e4b`: rawText
- `0x0x141886e52`: selectedText
- `0x0x141886e5e`: clipboardText
- `0x0x141886e6b`: targetBundleId
- `0x0x141886e79`: targetAppName
- ... (共 26 条)
