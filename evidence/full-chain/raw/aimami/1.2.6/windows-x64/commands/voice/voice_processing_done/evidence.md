# Evidence: voice_processing_done

## 命令身份
- 命令名: `voice_processing_done`
- Owner EA: `0x14015be20`
- Owner 函数名: `sub_14015BE20`
- 模块: `commands/voice`
- 版本: 1.2.6 / 平台: windows-x64
- 函数大小: 0x46c (1132 bytes)

## Owner 定位
- 方法: delta-commands.txt 已记录 EA (conf=high)，IDA find_regex 确认命令名串存在
- Xrefs to owner: tauri generate_handler! dispatcher

## 反编译
- 文件: `ida/pseudocode/voice_processing_done_0x14015be20.c`
- 状态: decompiled

## 调用树
- 文件: `call-tree.json`
- Callee 数量: 14 / Edge 数量: 14
- 终止原因: leaf_handler

## 接口报告
- 文件: `interface-report.json`
- 置信度: high
- 副作用: 无检测到

## 字符串引用
- `0x0x14177a522`: voice_processing_done
- `0x0x14177a424`: app
- `0x0x14177a537`: sessionGeneration
