# Evidence: stop_voice_capture

## 命令身份
- 命令名: `stop_voice_capture`
- Owner EA: `0x14015b140`
- Owner 函数名: `stop_voice_capture_owner_sys`
- 模块: `commands/system`
- 版本: 1.2.6 / 平台: windows-x64
- 函数大小: 0x42c (1068 bytes)

## Owner 定位
- 方法: delta-commands.txt 已记录 EA (conf=high)，IDA find_regex 确认命令名串存在
- Xrefs to owner: tauri generate_handler! dispatcher

## 反编译
- 文件: `ida/pseudocode/stop_voice_capture_0x14015b140.c`
- 状态: decompiled
- IDA 注释: 职责：停止语音捕获的 core 层 owner 实现（core::voice::runtime::stop_capture），被命令层 stop_voice_capture 调用，处理音频流停止与资源释放。边界：core::voice::runtime 模块，归属 /codexmate_lib/core/voice/runtime/。副作用：停止音频捕获设备占用，释放相关运行时资源。mac 侧对应

## 调用树
- 文件: `call-tree.json`
- Callee 数量: 13 / Edge 数量: 13
- 终止原因: leaf_handler

## 接口报告
- 文件: `interface-report.json`
- 置信度: high
- 副作用: 无检测到

## 字符串引用
- `0x0x14177a4fd`: stop_voice_capture
- `0x0x14177a424`: app
