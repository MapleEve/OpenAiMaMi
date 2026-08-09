# Evidence: get_relay_provider_quota

## 命令身份
- 命令名: `get_relay_provider_quota`
- Owner EA: `0x140d85690`
- Owner 函数名: `get_relay_provider_quota`
- 模块: `commands/relay`
- 版本: 1.2.6 / 平台: windows-x64
- 函数大小: 0x12f0 (4848 bytes)

## Owner 定位
- 方法: delta-commands.txt 已记录 EA (conf=high)，IDA find_regex 确认命令名串存在
- Xrefs to owner: tauri generate_handler! dispatcher

## 反编译
- 文件: `ida/pseudocode/get_relay_provider_quota_0x140d85690.c`
- 状态: decompiled
- IDA 注释: Tauri 命令 get_relay_provider_quota 的 handler：按入参 providerId 查询 relay provider 额度/quota。归属：命令名串精确 xref 唯一归属 + panic-Location 两跳锚定 src\commands\relay.rs（内联 core\relay\manager.rs）。

## 调用树
- 文件: `call-tree.json`
- Callee 数量: 28 / Edge 数量: 28
- 终止原因: leaf_handler

## 接口报告
- 文件: `interface-report.json`
- 置信度: high
- 副作用: 无检测到

## 字符串引用
- `0x0x1418941a4`: >
- `0x0x1418941a4`: >
- `0x0x1418872a7`: get_relay_provider_quota
- `0x0x1418865b4`: manager
- `0x0x1418872bf`: providerId
- `0x0x1418941d4`: =
- `0x0x1418941d4`: =
- `0x0x1418941d4`: =
- `0x0x1418941d4`: =
- `0x0x1402ddc10`: I
- ... (共 12 条)
