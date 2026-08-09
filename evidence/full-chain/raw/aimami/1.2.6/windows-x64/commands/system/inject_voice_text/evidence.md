# Evidence: inject_voice_text

## 命令身份
- 命令名: `inject_voice_text`
- Owner EA: `0x140d60900`
- Owner 函数名: `sub_140D60900`
- 模块: `commands/system`
- 版本: 1.2.6 / 平台: windows-x64
- 函数大小: 0xb47 (2887 bytes)

## Owner 定位
- 方法: delta-commands.txt 已记录 EA (conf=high)，IDA find_regex 确认命令名串存在
- Xrefs to owner: tauri generate_handler! dispatcher

## 反编译
- 文件: `ida/pseudocode/inject_voice_text_0x140d60900.c`
- 状态: decompiled

## 调用树
- 文件: `call-tree.json`
- Callee 数量: 23 / Edge 数量: 23
- 终止原因: leaf_handler

## 接口报告
- 文件: `interface-report.json`
- 置信度: high
- 副作用: 无检测到

## 字符串引用
- `0x0x141893a74`: 7
- `0x0x141893a74`: 7
- `0x0x141893a74`: 7
- `0x0x141893a74`: 7
- `0x0x141886fd8`: inject_voice_text
- `0x0x141886fe9`: text
- `0x0x141893a94`: 2
- `0x0x141893a94`: 2
- `0x0x141893a94`: 2
- `0x0x141893a94`: 2
- ... (共 16 条)
