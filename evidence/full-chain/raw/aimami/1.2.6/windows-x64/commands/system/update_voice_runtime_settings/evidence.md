# Evidence: update_voice_runtime_settings

## 命令身份
- 命令名: `update_voice_runtime_settings`
- Owner EA: `0x14015dd80`
- Owner 函数名: `tauri_cmd_update_voice_runtime_settings_dispatch`
- 模块: `commands/system`
- 版本: 1.2.6 / 平台: windows-x64
- 函数大小: 0x91d (2333 bytes)

## Owner 定位
- 方法: delta-commands.txt 已记录 EA (conf=high)，IDA find_regex 确认命令名串存在
- Xrefs to owner: tauri generate_handler! dispatcher

## 反编译
- 文件: `ida/pseudocode/update_voice_runtime_settings_0x14015dd80.c`
- 状态: decompiled
- IDA 注释: 职责：Tauri 命令 update_voice_runtime_settings 的 dispatcher，对应 macOS tauri_cmd_update_voice_runtime_settings_dispatch(0x100623880)，confirmed_parity。边界：仅负责命令分发与参数封送，实际解析在 handler(sub_1403D6B90)，持久化在 core(su

## 调用树
- 文件: `call-tree.json`
- Callee 数量: 14 / Edge 数量: 14
- 终止原因: leaf_handler

## 接口报告
- 文件: `interface-report.json`
- 置信度: high
- 副作用: 无检测到

## 字符串引用
- `0x0x14177a59c`: update_voice_runtime_settings
- `0x0x14177a424`: app
- `0x0x14177a163`: enabled
- `0x0x14177a5b9`: shortcut
- `0x0x14177a5c1`: speechModel
- `0x0x14177a58e`: processingMode
- `0x0x14177a5cc`: processingModeId
