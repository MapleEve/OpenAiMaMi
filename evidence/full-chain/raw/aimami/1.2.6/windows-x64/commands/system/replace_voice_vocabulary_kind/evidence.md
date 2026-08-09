# Evidence: replace_voice_vocabulary_kind

## 命令身份
- 命令名: `replace_voice_vocabulary_kind`
- Owner EA: `0x140152de0`
- Owner 函数名: `sub_140152DE0`
- 模块: `commands/system`
- 版本: 1.2.6 / 平台: windows-x64
- 函数大小: 0x7dd (2013 bytes)

## Owner 定位
- 方法: delta-commands.txt 已记录 EA (conf=high)，IDA find_regex 确认命令名串存在
- Xrefs to owner: tauri generate_handler! dispatcher

## 反编译
- 文件: `ida/pseudocode/replace_voice_vocabulary_kind_0x140152de0.c`
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
- `0x0x14177a336`: replace_voice_vocabulary_kind
- `0x0x14177a18a`: repo
- `0x0x14177a353`: kind
- `0x0x14177a32b`: appBundleId
- `0x0x14177a357`: appName
- `0x0x14177a35e`: entries
