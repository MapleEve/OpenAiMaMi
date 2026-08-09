# AiMaMi 1.2.6 macOS — changelog-item-4 (GPT-5.6 模型清单修复) 深挖证据

- **session**: `<审计会话>
- **产出时间**: 2026-08-07
- **范围**: 承接 `internal-reverse/audits/CHANGELOG-CROSSMAP-1.2.6.md` changelog-item-4
  （原文标注"本轮最重要的诚实缺口：无任何反编译证据"），本轮首次对该缺口执行实际反编译。
- **用户指定 10 个符号目标**：
  `codex_catalog::{catalog_models, official_reasoning_profile, full_reasoning_levels, run_bundled_cli}`、
  `codex_diagnostic::{native_off_openai_model_needs_fallback, check_native_off_invalid_openai_thread_models,
  fix_native_off_invalid_openai_thread_models}`、
  `config_takeover::{is_aimami_owned_model_section, quarantined_model_provider_ids}`、
  `codex_writer::read_top_level_model_line`

## <门控>（红线17）

- mac IDA `server_health`: `status=ok`, `uptime_sec=141904.5`, `<反编译器>_ready=true`,
  `module=AiMaMi`, `idb_path=<内部存储>/<内部项目>/raw/binary/AiMaMi 1.2.6.app/Contents/MacOS/AiMaMi.i64`
- win IDA `server_health`: `status=ok`, `uptime_sec=141724.2`, `<反编译器>_ready=true`,
  `module=AiMaMi 1.2.6 win64.exe`, `idb_path=<二进制路径>\AiMaMi 1.2.6 win64.exe.i64`
- 均在任何 decompile/rename/set_comments 调用前确认。

## PREWRITE_PRODUCER_COLLISION_GATE（红线11/12）

- `grep -in "gpt56\|gpt-5\.6\|gpt5\.6"` 对 root `INDEX.jsonl` 与 `REVERSE-STATUS.md`
  在本轮开工前均 = 0 命中；`CHANGELOG-CROSSMAP-1.2.6.md` line 142 明确记录本目标此前
  "未执行任何逆向操作" → gate=ALLOW/first，无撞车，无需 takeover token。
- claim-first 行已写入 `REVERSE-STATUS.md`（`[<审计会话> in-progress`）。

## 结果总览（8/10 命中，2/10 确切符号名未找到）

| # | 目标符号 | 平台 | 状态 | EA | 大小 |
|---|---|---|---|---|---|
| 1 | `catalog_models` | mac | ✅ 完整反编译 | `0x100acecf0` | 153B |
| 2 | `official_reasoning_profile` | mac | ✅ 完整反编译 | `0x100adcb30` | 307B |
| 3 | `full_reasoning_levels` | mac | ✅ 完整反编译已确认（此前 635 字符预览曾误判为截断；decompile() 完整 26077 字符体，basic_blocks=75，确认只建 4 档 reasoning level，"6档吻合"旧结论已撤回） | `0x100acfc30` | 4666B |
| 4 | `run_bundled_cli` | mac | ✅ 完整反编译 | `0x100aceed0` | 1858B |
| 5 | `native_off_openai_model_needs_fallback` | mac | ✅ 完整反编译 | `0x100b28230` | 860B |
| 6 | `check_native_off_invalid_openai_thread_models` | mac | ✅ 完整反编译已确认（此前 573 字符预览曾误判为截断；decompile() 完整 23298 字符体，basic_blocks=109） | `0x100b34f30` | 3194B |
| 7 | `fix_native_off_invalid_openai_thread_models` | mac | ✅ 完整反编译已确认（此前 1875 字符预览曾误判为截断；<工具调用> 对 str(cfunc) 做 5 段×15000 字符切片拼接还原完整 62443 字符真实伪代码，basic_blocks=320 确认规模；⚠含破坏性副作用） | `0x100b30fc0` | 12719B |
| 8 | `is_aimami_owned_model_section` | mac | ✅ 完整反编译 | `0x100ae9de0` | 305B |
| 9 | `quarantined_model_provider_ids` | mac | ❌ 确切符号未找到（5种方法排查，见 0009 号文件） | — | — |
| 10 | `read_top_level_model_line` | mac | ❌ 确切符号未找到（记录最接近候选 `read_top_level_string_value`，见 0010/0011 号文件） | — | — |

Windows 侧（stripped 构建，无法用 func_query 精确定位）：见 `windows-x64/backend/gpt56-model-catalog-fix/evidence.md`，
本轮改用红线24 win-strip 两跳 panic-Location xref 方法定位到全部4个模块的候选函数簇（19个候选地址），
并**在 codex_catalog 模块的候选函数体内直接发现了内嵌的默认/bundled 目录 JSON 明文**（见下）。

## 核心发现：内嵌 GPT-5.6 默认目录 JSON（Windows 侧，`sub_1405622D0`@`0x1405622d0`）

Windows 二进制字符串常量中直接包含完整的默认/bundled 模型目录 JSON 明文（`analyze_function.strings`
字段原样提取，未编造）：

```json
{"models":[{"slug":"gpt-5.6-sol","display_name":"GPT-5.6-Sol",
"description":"Latest frontier agentic coding model.",
"default_reasoning_level":"low",
"supported_reasoning_levels":[
  {"effort":"low","description":"Fast responses with lighter reasoning"},
  {"effort":"medium","description":"Balances speed and reasoning depth for everyday tasks"},
  {"effort":"high","description":"Greater reasoning depth for complex problems"},
  {"effort":"xhigh","description":"Extra high reasoning depth for complex problems"},
  {"effort":"max","description":"Maximum reasoning depth for the hardest problems"},
  {"effort":"ultra","description":"Maximum reasoning with automatic task delegation"}
],
"shell_type":"shell_command","visibility":"list","supported_in_api":true,"priority":1,
"additional_speed_tiers":["fast"],
"service_tiers":[{"id":"priority","name":"Fast","description":"1.5x speed, increased usage"}],
"availability_nux":{"message":"Our most capable model yet. GPT-5.6 Sol can tackle complex code changes, dig into resea..."}
... [113506 字符总长，本轮未完整提取，仅截取首个 model 条目]
```

另在同一字符串池发现相邻常量 `"client_versiongpt-5.6-solgpt-5.6-terragpt-5.6-lunagpt-5.4"`
（多个字符串常量在 .rdata 段紧邻排布，解码器按连续读取展示），**证实 1.2.6 版本的默认目录
中共有 3 个 GPT-5.6 变体：`gpt-5.6-sol`、`gpt-5.6-terra`、`gpt-5.6-luna`**（`gpt-5.4` 为
上一代对照）。这与官方 changelog 第4条"修复部分 Windows 机型开启路由后缺少 GPT-5.6 系列模型"
的描述完全吻合——**该内嵌 JSON 极可能就是"离线/本地兜底目录"，当某些 Windows 机型对官方目录的
在线抓取失败或被截断时，程序应回退合并这份内嵌默认目录以确保 GPT-5.6 三个变体始终可见；
本次改动的性质推断为这份兜底目录的引入/扩充，或触发合并回退的判定逻辑修复**（该推断基于
静态字符串+调用图证据，未获得可执行环境做运行时验证，见红线25 未与真机对照声明）。

## 破坏性副作用清单（⚠ 用户可见）

- `fix_native_off_invalid_openai_thread_models`（mac, `0x100b30fc0`）：会调用
  `apply_thread_metadata_rollout_adoption` 写入线程元数据 rollout 补丁，并调用
  `apply_orphan_thread_adoption_db`/`mark_orphan_thread_adoption_recovery` 写恢复日志/DB。
  这是本轮唯一确认的持久化写入函数，非只读判定。

## 未与真实 App 做参照运行对照（红线25 声明）

本轮全部结论均来自静态反编译（decompile + analyze_function + 字符串/xrefs 交叉），
未启动真实 AiMaMi 1.2.6 App 做交互对照验证。

## 实现门状态

`implementation_use=false`、`gate_accepted=false`、`readyToImplement=false`、
`strictImplementationUse=false`。本轮仅完成 raw evidence 生产，未做本地+对抗双审
（task#154 式流程），未做四角度完整性核查（红线15），未提升任何实现门。
