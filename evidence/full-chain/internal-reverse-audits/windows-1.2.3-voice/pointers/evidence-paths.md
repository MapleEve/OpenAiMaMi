# Evidence Pointers — windows-1.2.3-voice

所有路径均相对 `${C5CM_INTERNAL_HISTORY_ROOT:-$C5CM_SHARE_ROOT}`（本会话解析为 ``）。本文件只给指针，不复制 raw 内容。

## raw evidence（backend, 171 个 .c 文件，10 个原始目录）

- `raw/aimami/1.2.3/windows-x64/commands/ida/pseudocode/*voice*.c` — 28 个已命名 voice_* 命令 wrapper（与非 voice 命令共用同一 `commands/` 桶，非独立 `commands/voice/` 目录）
- `raw/aimami/1.2.3/windows-x64/codexmate_lib/ida/pseudocode/{capture_voice_trigger_key,generate_voice_prompt,inject_voice_text}_0x*.c` — 3 个已命名文件（与非 voice 内容共用 `codexmate_lib/` 桶）
- `raw/aimami/1.2.3/windows-x64/commands/voice/ida/pseudocode/sub_{140755DC0,140ACDB60}_0x*.c` — 2 个未命名 sub_，module-attributed 到 `codexmate_lib/commands/voice`
- `raw/aimami/1.2.3/windows-x64/aliyun_asr/ida/pseudocode/*.c` — 62 个文件（59 未命名 sub_ + 3 有语义名：`start_message`/hash-closure ×2 类）
- `raw/aimami/1.2.3/windows-x64/llm/ida/pseudocode/*.c` — 6 个未命名 sub_
- `raw/aimami/1.2.3/windows-x64/runtime/ida/pseudocode/*.c` — 42 个文件（41 未命名 sub_ + 1 已命名 `show_voice_overlay_0x140aedb20.c`）
- `raw/aimami/1.2.3/windows-x64/tray/ida/pseudocode/*.c` — 2 个未命名 sub_
- `raw/aimami/1.2.3/windows-x64/workspace/ida/pseudocode/*.c` — 21 个文件（17 未命名 sub_ + 4 有语义名：`default_templates`/`read_workspace_file`/`serialize_2`/1 个 hash-closure）
- `raw/aimami/1.2.3/windows-x64/voice_trigger_windows/ida/pseudocode/*.c` — 4 个未命名 sub_，module-attributed 到 `codexmate_lib/platform/voice_trigger_windows`
- `raw/aimami/1.2.3/windows-x64/text_injection_windows/ida/pseudocode/*.c` — 1 个未命名 sub_，module-attributed 到 `codexmate_lib/platform/text_injection_windows`（macOS 侧 `platform/text_injection` 有 10 个，Windows 只有 1 个，明显更薄）

## raw evidence（frontend）

- `raw/aimami/1.2.3/windows-x64/frontend/ipc-contracts.jsonl` — win 专用 IPC 契约提取（95895 字节，2026-07-24 产出），本包用于 dim1 命令面枚举（37 条 voice 命令）
- `raw/aimami/1.2.3/windows-x64/package/AiMaMi-1.2.3-win64/tauri-dumped-assets/direct/assets/voice-page-CV7DqakD.js` — VoicePage 前端 bundle（与 macOS 同名同内容类，跨平台共享，未在本 pass 深读组件树）

## INDEX.jsonl 命中（本次核实，未 append 新行）

- 7 条 `codexmate_lib/core/voice/*` 或 `codexmate_lib/platform/voice_trigger_windows` module 前缀条目，均属 session `win-1.2.3-app-function-inventory-gapfill-20260724`（key: `aliyun_asr/win-app-inventory-gapfill-leaf`、`llm/...`、`runtime/...`、`tray/...`、`workspace/...`、`voice_trigger_windows/...`、`commands/voice/...`），累计 census_gap_candidates 139（62+6+42+2+21+4+2）
- 此外 `commands/ida/pseudocode` 与 `codexmate_lib/ida/pseudocode` 下的 31 个已命名 voice_* 文件（28+3）未在本次 module-prefix 扫描中单独命中（这些文件的 INDEX key 使用的是通用 `commands`/`codexmate_lib` module 字符串，不含 "voice" 子串，因此未被本次筛选条件捕获；文件本身在磁盘上确认存在，见上方 raw evidence 小节的独立 `find` 核实）
- `text_injection_windows` 目录本次未在 INDEX.jsonl module-prefix 扫描命中（该目录本身可能未单独建 INDEX 行，或其 module 字符串未含 "voice"）；磁盘核实其 1 个文件确实存在且 module-attributed 到 `codexmate_lib/platform/text_injection_windows`
- 本次未产出新 raw/intermediate 证据，未 append INDEX.jsonl；`manifest.json.coverage.measurement_basis` 与本文件的计数均为本次 distillation session 独立的文件系统重新核实，不是照抄旧文档数字

## IDA MCP 活性核实（本次 session）

- `python3 idacall.py <host> server_health` → `{"status":"ok","uptime_sec":123915.691,"idb_path":"E:\\binary\\AiMaMi.1.2.3 win64.exe.i64","module":"AiMaMi.1.2.3 win64.exe","imagebase":"0x140000000","auto_analysis_ready":true,"IDA decompiler_ready":true,"strings_cache_ready":true}` — 满足红线 17 IDA_LIVE_GATE
- `func_query` 带 `queries` 参数调用未按预期过滤（返回值与查询词无关，疑似该工具签名与 skill 文档描述不一致或本次调用方式有误）；本次未进一步排障，如实记录为本 pass 未完成的 angle-A 尝试，未静默当作"已核实无 gap"

## 姊妹包 / 版本前身

- `internal-reverse/audits/macos-1.2.3-voice/` — 跨平台姊妹包，212 个 raw 文件、37/37 命令 name-stem 映射，dim2/dim2-identity 覆盖显著强于本 Windows 包；本包未从其外推任何 Windows 结论
- `internal-reverse/audits/windows-1.0.9-voice/` — 同平台前一版本；结论为 34/34 命令 backend-absence accepted substitute（voice 在 1.0.9 windows 上无后端实现，纯 UI 孤儿）。本包不沿用该结论（RULE9 diff_reversed，见 manifest.json/gate-report.json）

## 跨仓库参照材料（仓外，非 internal-reverse，红线 23 内部专用）

- 无（本 pass 未产出 goal-aimami-122 侧对应文档；如需 byte-level diff/详细逐函数记录，后续 producer pass 应在 goal-aimami-122/ 补充，遵循红线 23 内部专用边界）

## 2026-07-26 Update — 新发现证据指针（reduce pass）

- `raw/aimami/1.2.3/windows-x64/asr/ida/pseudocode/*.c` — 3 个文件，module-attributed 到 `codexmate_lib/core/voice/asr`；此前完全未被 2026-07-25 pass 的目录扫描覆盖（目录名不含 "voice"）。文件：`keyring_entry_0x140a55230.c`、`__u7b__u7b_closure_u7d__u7d__16_0x140a543a0.c`、`load_saved_config_0x140a55530.c`。
- `raw/aimami/1.2.3/windows-x64/models/ida/pseudocode/serialize_VoiceGeneratePayload_0x140aa7ae0.c` 和 `serialize_VoiceWorkspacePayload_0x140aa76f0.c` — 2 个文件，此前完全未被扫描覆盖。真实 DTO 序列化实现（dim4 证据）。
- `raw/aimami/1.2.3/windows-x64/commands/relay/ida/pseudocode/open_path_0x140194810.c` — **核心新发现**：共享 ICF-folded Tauri 命令字符串调度器（2205 行），承载 4 个此前标记 blocked 的 voice 命令的真实 owner（`resolve_voice_vocabulary_app_info`=`0x140170790`、`upsert_voice_vocabulary_app_scope`=`0x140170D00`、`remove_voice_vocabulary_app_scope`=`0x140171760`、`set_voice_trigger_listener_suppressed`=`0x140182C20`）。该文件本身不在任何 voice 专属目录下，位于 `commands/relay/`。
- `raw/aimami/1.2.3/windows-x64/commands/voice/ida/pseudocode/__u7b__u7b_closure_u7d__u7d__17_0x140abe3c0.c` — 此前完全未被计入（manifest 曾记为 `commands/voice` 只有 2 个文件，实际 3 个）；`generate_voice_prompt` 的三层嵌套闭包，跨平台字符串签名匹配已确认。

## 本轮 live IDA MCP 会话记录（只读验证，未写入 IDB）

- Host: `<host>:13337/mcp`；客户端脚本：`idacall.py`（既有脚本，位于 `/private/tmp/verify_win_iso/idacall.py` 等临时目录，非本轮新增）。
- `server_health {}` → `status=ok`, `IDA decompiler_ready=true`, `idb_path=E:\binary\AiMaMi.1.2.3 win64.exe.i64`，满足红线 17 IDA_LIVE_GATE。
- `get_bytes` 对 `0x1416C7020`/`0x1416C7010` 各取 16 字节，解码确认 `open_path` 的 `case 0x1CLL` 是 `refresh_single_account_usage`（28 字符），排除其作为 `cancel_voice_trigger_capture`（同 28 字符）候选的假设。
- `decompile` 对 `0x140170790`/`0x140170D00`/`0x140171760`/`0x140182C20` 四个地址取得完整伪代码 + xref 列表（读出 live IDB 中已存在、非本轮写入的中文分析注释）。
- `lookup_funcs` 精确查询 `cancel_voice_trigger_capture` → `Not found`。
- `find_regex` 全二进制字符串缓存精确匹配 `cancel_voice_trigger_capture` → `n:0`。
- `search_text` 两次尝试（30s、120s）均超时，未获结果，如实记录为未完成尝试。
- 本轮**未调用** `rename`/`set_comments`/`idb_save`/`patch` 等任何写入类工具。
