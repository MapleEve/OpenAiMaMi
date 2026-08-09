# Evidence: upsert_voice_vocabulary

## 命令身份
- 命令名: `upsert_voice_vocabulary`
- Owner EA: `0x140154050`
- Owner 函数名: `sub_140154050`
- 模块: `commands/system`
- 版本: 1.2.6 / 平台: windows-x64
- 函数大小: 0xbaa (2986 bytes)

## Owner 定位
- 方法: delta-commands.txt 已记录 EA (conf=high)，IDA find_regex 确认命令名串存在
- Xrefs to owner: tauri generate_handler! dispatcher

## 反编译
- 文件: `ida/pseudocode/upsert_voice_vocabulary_0x140154050.c`
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
- `0x0x14177a37c`: upsert_voice_vocabulary
- `0x0x14177a18a`: repo
- `0x0x14177a1e8`: id
- `0x0x14177a393`: source
- `0x0x14177a399`: replacement
- `0x0x14177a353`: kind
- `0x0x14177a32b`: appBundleId
- `0x0x14177a357`: appName
- `0x0x14177a3a4`: notes
