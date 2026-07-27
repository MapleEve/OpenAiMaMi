# DISTILLED — windows-1.2.3-system

浓缩证据文本，供 `logic/`/复核引用。原始 pseudocode 全文留 SMB `raw/`，本文件只摘录关键片段与结构化发现。

## 1. server_health 门（本轮现场核验）

```
{"status":"ok","uptime_sec":121304.538,"idb_path":"E:\\binary\\AiMaMi.1.2.3 win64.exe.i64",
 "module":"AiMaMi.1.2.3 win64.exe","input_path":"E:\\binary\\AiMaMi.1.2.3 win64.exe.exe"(sic-truncated in capture),
 "imagebase":"0x140000000","auto_analysis_ready":true,"IDA decompiler_ready":true,"strings_cache_ready":true}
```
module 名与 `IDA decompiler_ready=true` 均匹配红线 17 IDA_LIVE_GATE 要求，门通过。

## 2. 9 个 system 域原始地址 — 归属注释逐条摘录

| 地址 | 模块 | 归属方法 | 备注 |
|---|---|---|---|
| 0x140021540 | src/commands/system.rs | panic-Location xref | `__noreturn` 函数，含多个局部变量，非平凡桩 |
| 0x140322890 | src/commands/system.rs | call-graph propagation (>=2 same-module callers) | 接受 `unsigned __int8 **` 首参，返回 `__int64` |
| 0x1403d28a0 | src/commands/system.rs | panic-Location xref | 返回 `__m128i *`，含 SIMD 局部变量 |
| 0x14089b320 | src/commands/system.rs | call-graph propagation (>=2 same-module callers) | 含 `volatile signed __int64 *` 参数，疑似原子/并发相关 |
| 0x140cf8380 | src/commands/system.rs | panic-Location xref | 返回 `char`（bool-like） |
| 0x141471f80 | src/commands/system.rs | call-graph propagation (>=2 same-module callers) | 接受 `unsigned int *`/`char *`/`unsigned __int64`/`unsigned int` 四参，疑似格式化/编码相关 |
| 0x1401b88c0 | src/platform/system_volume_windows.rs | call-graph propagation (>=2 same-module callers) | 无参，返回 `unsigned __int8`，内部调用两个函数指针（COM 风格 vtable 调用模式） |
| 0x1401b8c50 | src/platform/system_volume_windows.rs | panic-Location xref | 无参 `void`，含 `HRESULT` 局部变量，明确 COM/DirectSound 或类似 Windows 音量 API 交互 |
| 0x1401b91a0 | src/platform/system_volume_windows.rs | panic-Location xref | 2 参，含 57-元素 `_QWORD` 数组（`v8[57]`）局部缓冲区 |

**观察**：`system_volume_windows` 三个函数的伪代码明确显示 COM/`HRESULT`/函数指针 vtable 调用模式，与"系统音量控制"这一模块名语义高度吻合（Windows 音量 API 通常经 `IAudioEndpointVolume`/`IMMDeviceEnumerator` COM 接口），这是本轮新增的**语义合理性交叉验证**（未写入 gate 结论，仅作为归属可信度的辅助佐证，不单独作为 accepted proof）。

## 3. Platform 支撑抽验样本

`paths/ida/pseudocode/sub_140425480_0x140425480.c` 头部：
```
// module: codexmate_lib/platform/paths
// addr: 0x140425480
// name: sub_140425480
// win 1.2.1 | module src/platform/paths.rs | attributed via call-graph propagation (>=2 ...
```
`debug_log/` 抽验 1 个文件同样携带一致格式的归属注释（未逐字摘录，格式确认与 `paths` 一致）。

## 4. WIN-APP-FUNCTION-INVENTORY.jsonl 关键统计（本轮 grep 现场核验）

```
总行数: 1133
codexmate_lib/commands/system:            6 行, on_disk字段全部false(STALE, 实际6/6在盘)
codexmate_lib/platform/system_volume_windows: 3 行, on_disk字段全部false(STALE, 实际3/3在盘)
codexmate_lib/platform/process:          34 行, on_disk字段false(STALE, 实际34/34在盘)
codexmate_lib/platform/paths:             3 行, on_disk字段false(STALE, 实际3/3在盘)
codexmate_lib/platform/debug_log:         3 行, on_disk字段false(STALE, 实际3/3在盘)
codexmate_lib/platform/proxy:             5 行, on_disk字段false(STALE, 实际5/5在盘)
codexmate_lib/platform/daemon:            0 行
codexmate_lib/platform/single_instance:   0 行
```

行样例（schema 参考）：
```json
{"addr":"0x140084c90","name_or_sub":"sub_140084C90","module":"codexmate_lib","confidence":"high",
 "evidence":"panic_location_seed","comment_raw":"win 1.2.1 | module src/lib.rs | attributed via panic-Location xref (win-native)",
 "on_disk":false}
```

## 5. INDEX.jsonl 落盘记录（本轮 grep 现场核验，2 条）

两条 `win-app-inventory-gapfill-leaf` 记录，`produced_by` 字段原文注明使用工具为 `IDA Python+IDA decompiler.decompile direct-write batch driver batch_decompile.py`——本轮 `tools/list` 未见 `IDA Python` 作为独立 MCP 工具暴露，判断这是该次 gapfill session 自己的内部驱动脚本名，非本轮可直接调用的 MCP 工具；本轮改用标准 `decompile` 单地址工具逐一核验同一批地址，结果一致（非截断、非失败）。

## 6. 前端命令名核对（26/26，本轮 grep 现场核验）

对 `macos-1.2.3-system` README 记录的全部 26 个命令名逐一 grep windows-x64 `ipc-contracts.jsonl`，全部命中且均为 1 次精确匹配（无重复/无缺失）。
