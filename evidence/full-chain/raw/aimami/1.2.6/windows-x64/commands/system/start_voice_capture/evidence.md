# Evidence: start_voice_capture

## 命令身份
- 命令名: `start_voice_capture`
- Owner EA: `0x14015b7b0`
- Owner 函数名: `start_voice_capture`
- 模块: `commands/system`
- 版本: 1.2.6 / 平台: windows-x64
- 函数大小: 0x42c (1068 bytes)

## Owner 定位
- 方法: delta-commands.txt 已记录 EA (conf=high)，IDA find_regex 确认命令名串存在
- Xrefs to owner: tauri generate_handler! dispatcher

## 反编译
- 文件: `ida/pseudocode/start_voice_capture_0x14015b7b0.c`
- 状态: decompiled
- IDA 注释: 职责：Tauri 命令 start_voice_capture 的 dispatch 入口，薄壳转发到 core::voice::runtime::start_capture，结果经 CoreEnvelope::ok 包装返回。边界：commands::voice_runtime 模块，薄壳转发模式。副作用：转发调用触发下游开始语音捕获（音频设备占用）。1.2.4→1.2.6 delta 新增命令

## 调用树
- 文件: `call-tree.json`
- Callee 数量: 13 / Edge 数量: 13
- 终止原因: leaf_handler

## 接口报告
- 文件: `interface-report.json`
- 置信度: high
- 副作用: 无检测到

## 字符串引用
- `0x0x14177a50f`: start_voice_capture
- `0x0x14177a424`: app
