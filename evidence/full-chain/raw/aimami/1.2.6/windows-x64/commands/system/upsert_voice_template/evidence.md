# Evidence: upsert_voice_template

## 命令身份
- 命令名: `upsert_voice_template`
- Owner EA: `0x140155b30`
- Owner 函数名: `sub_140155B30`
- 模块: `commands/system`
- 版本: 1.2.6 / 平台: windows-x64
- 函数大小: 0x806 (2054 bytes)

## Owner 定位
- 方法: delta-commands.txt 已记录 EA (conf=high)，IDA find_regex 确认命令名串存在
- Xrefs to owner: tauri generate_handler! dispatcher

## 反编译
- 文件: `ida/pseudocode/upsert_voice_template_0x140155b30.c`
- 状态: decompiled

## 调用树
- 文件: `call-tree.json`
- Callee 数量: 12 / Edge 数量: 12
- 终止原因: leaf_handler

## 接口报告
- 文件: `interface-report.json`
- 置信度: high
- 副作用: 无检测到

## 字符串引用
- `0x0x14177a3be`: upsert_voice_template
- `0x0x14177a18a`: repo
- `0x0x14177a1e8`: id
- `0x0x14177904a`: title
- `0x0x14177a3d3`: description
- `0x0x14177a3de`: content
