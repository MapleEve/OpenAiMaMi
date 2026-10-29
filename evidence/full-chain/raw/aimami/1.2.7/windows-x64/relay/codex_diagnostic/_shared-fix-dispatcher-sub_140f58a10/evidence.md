# evidence.md — codex_diagnostic shared FIX dispatcher `sub_140F58A10` (AiMaMi 1.2.7, windows-x64) + 1.2.6↔1.2.7 逐 case 字节级对账

session: `<审计会话>`
binary: `AiMaMi.1.2.7 win64.exe` (PE, AMD64, sha256 `06091864a42a…f1afea`); IDB `<内部存储>\AiMaMi.1.2.7 win64.exe.i64` @ <内部网络>:**<审计环境>**；对照 IDB `AiMaMi 1.2.6 win64.exe.i64` @ <内部网络>:**<审计环境>**。两个 `server_health` 均 status=ok / decompiler_ready=true / module 名匹配（红线17）；IDB 版本均为用户预先挂载，本轮零 `open_file`/`select_instance` 指向非挂载版本（红线37），零 IDB 写。
gate: `no_gate_promotion` — dispatcher 级 case 表 + dim4 字段级证据，不晋升任何 leaf 的 gate 状态。

## 任务来源

`intermediate/aimami/1.2.7/windows-x64/version-delta/backend-fullchain-win-router-catalog.md` §5 登记的 PENDING：「fix 分派 case 表的 1.2.7 win 全量重建（对齐 1.2.6 win 的 24 键字节级 case-table 方法）未做——需 1.2.6 win IDB」。用户于 2026-10-01 挂载 1.2.6 win IDB 到 <审计环境>（与 <审计环境> 的 1.2.7 并存），本轮执行该 PENDING 项。

## Method（字节级，红线31 合规：零 IDB 注释采信）

1. 定位 1.2.7 win 真分派器：`fix_codex_router_issue` 命令 handler `0x140ADD8A0`（4727B）实为 async poll 状态机（switch on state bytes +3664/+3680，请求字段串 `itemId`/`app`/`manager`），**不含**逐键 switch。经五个 fix owner 函数（catalog §2 键→owner 映射的 win 侧条目）`xrefs_to` 反查，全部收敛到共同调用者 `sub_140F58A10`（17556B）。
2. 身份内容级确认（红线13，非结构猜测）：(a) 23 个诊断键字节常量逐一命中；(b) 头 guard `sub_140F10310(a4=key, a5=len)` + `if (a8 || (v13 & 1) == 0)` = requires_quiet_window 模式（对应 mac `fix_requires_quiet_window`，a8=force 旁路）；(c) default 分支 → `"unknown diagnostic item: "`（len25 @`0x141A6267D`，长度前缀 0x19 @`0x141A6267C`）；(d) decompile 头 panic-Location 模块归属 `src/core/relay/codex_diagnostic.rs`；(e) 3 个代码调用者（见下）。
3. `` 内联脚本：`ida_反编译器.decompile(0x140F58A10)` → 2193 行伪代码 → 逐 case 提取标量 XOR 常量与 `xmmword_XXXX` 操作数 → `ida_bytes.get_bytes(16)` 逐常量解码 ASCII → `len(key)==case` 全 23 行程序化自校验。MCP 直读 decompile 双参变体均被服务端截断（106753/82753 chars，红线20 截断桩不当完整伪代码），故全部事实经 服务端计算 + 小载荷回传，未把截断输出写盘。
4. 1.2.6 win 对照：`` 同法 live 复核 `sub_1405CBF60`（25193B → 3120 行），15 bucket / 24 键逐行对账既有 `raw/aimami/1.2.6/windows-x64/relay/codex_diagnostic/_shared-fix-dispatcher-sub_1405cbf60/evidence.md` —— **24/24 行全部吻合**（含 case 39 `xmmword_141830401`='native_off_inval…' 现场字节复核）。明细见 `data/case_table_win_1.2.6_live_reverify.json`。

## Confirmed — 1.2.7 win 逐 case 字节级表（23 键 / 14 bucket / 0 未解析）

| case | key（字节解码） | target | size(B) | 处置 |
|---|---|---|---|---|
| 12 | `config_stale` | `0x140F03750` | 481 | call |
| 14 | `auth_integrity` | `0x140F04FE0` | 3513 | call |
| 14 | `residual_cache` | **INLINE**（report-build，qmemcpy "residual_cache"） | — | inline，同 1.2.6 模式 |
| 17 | `residual_manifest` | **INLINE**（~198 行体） | — | inline，同 1.2.6 模式 |
| 17 | `catalog_integrity` | `0x140F08830` | 201 | call |
| 18 | `config_toml_syntax` | `0x140F09A40` | 511 | call（fix_*_text+check+checked_fix_result 三段式，mac 同构） |
| 18 | `config_third_party` | `0x140F095C0` | 916 | call |
| 19 | `db_orphan_providers` | → LABEL_74 → `0x140F2BD30`（共享） | 1090 | 共享孤儿 provider 修复器（mac LABEL_42 / 1.2.6 LABEL_57 同构） |
| 19 | `state_db_relocation` | **INLINE** ⚠ DESTRUCTIVE | — | CodexPaths `resolve_codex_state_db`@`0x1401B79C0` + state_db 惰性访问器@`0x1401B8C00`，sqlite_home 串族 |
| 20 | `router_http_contract` | `0x140F0E1B0` = `relay_codex_writer__router_http_contract_a` | 1421 | call |
| 21 | `catalog_path_validity` | `0x140F10150` | 373 | call |
| 22 | `takeover_backup_orphan` | `0x140F23360` | 2111 | call |
| 22 | `config_global_validity` | `0x140F22610` | 2616 | call |
| 23 | `config_profile_conflict` | `0x140F25A20` | 913 | call |
| 23 | `thread_missing_rollouts` | `0x140F2CFD0` | 2488 | call |
| 23 | `legacy_migrated_threads` | `0x140F2AD80` | 2746 | call |
| 23 | `project_state_integrity` | `0x140F2C350` | 2207 | call |
| 24 | `thread_response_item_ids` | case 体 → `0x140F3DA20` | 4918 | 503 行 bucket 内 fix worker |
| 24 | `rollout_orphan_providers` | 落入 LABEL_74 → `0x140F2BD30`（共享） | — | 与 db_orphan_providers 同 target |
| 26 | `router_unlock_auth_residue` | `0x140F32530` | 1682 | call |
| 27 | `thread_provider_consistency` | `0x140F35E20` | 2489 | call |
| 28 | `thread_poisoned_instructions` | `0x140F39BB0` | 10264 | call |
| 32 | `thread_model_catalog_consistency` | case 体（330 行）；⚠ MUTATING SQL owner `0x1402620D0`（13717B） | — | `UPDATE threads SET model = ?2 WHERE id = ?1` @`0x1419DF040`（data-xref `0x140263A73`）；helper 链 `0x14024C500`→`0x1403FAE40`→`0x1402620D0`→`0x140F41CE0`→`0x140C23890` |

机器可读全表（含逐键字节常量 EA）：`data/case_table_win_1.2.7.json`。

## 差集裁决（核心结论）——mac 23 键 vs win「24+1」键

| 键集 | 键数 | bucket |
|---|---|---|
| 1.2.6 win `sub_1405CBF60`（live 复核） | **24** | 15（含 case **39**） |
| 1.2.7 win `sub_140F58A10`（本轮） | **23** | 14（无 case 39） |
| 1.2.7 mac `fix_issue`@`0x10077B370`（既有盘证，`decomp-1.2.7/0066__C_router__fix_issue.c` + dto-fieldlevel-mac.md §4.2） | **23** | 14（无 case 39） |

**裁决结论**：

1. **1.2.6 → 1.2.7 fix 分派键集是收缩不是增长**：`native_off_invalid_openai_thread_models`（39 字符，1.2.6 win case 39 INLINE FIX 臂 ~1235 行）在 1.2.7 **双平台 fix 分派表中均被删除**（1.2.7 win 无任何 39 桶、无 0x27-memp 辅助比对、全函数文本零 `native_off` 命中；mac fix_issue 同样无 case 39）。该键仍是 1.2.7 的 CHECK 诊断键（win CHECK 引擎 `0x140F10F70` ×4 + `0x140F10790`；mac 诊断键清单同含）——**诊断保留、修复臂移除**（fix_all `0x140BC2C60` 无自带 switch、逐键循环调 `sub_140F58A10`，故 fix_all 路径同样不再有该键的修复臂；1.2.7 串池存在 `"(unknown or non-fixable diagnostic item: "` @`0x141A4A693`，与非修复项语义相容）。
2. **`router_recovery_record` 不在任何平台的 fix 分派表**：它是 1.2.7 新增的 **CHECK-only 诊断键**（win CHECK 引擎 `0x140F10F70` ×2 + `0x140F2CFD0` 族；mac `run_diagnostics_with_mode` 键清单含）。win 1.2.7 case 22 桶全文本核验只有 `takeover_backup_orphan`/`config_global_validity` 两键（22 字符同桶若有第三键必在 case 22）。
3. **mac 23 键 vs win 1.2.7 23 键 = 完全一致**（逐键 1:1，含两个共享 target 臂与三个 inline 臂的分布都同构）——「mac 23 vs win 24+1」的表面差异来自前序轮 win 侧结论停在 .rdata 键→owner 映射粒度。
4. **更正前序临时结论**（决策检查点协议 A 条说明：该结论是自标 PENDING 的临时粒度，非门控 PASS 结论，本轮为其指定的收口动作）：`baseline-diff-1.2.6-to-1.2.7.json` 的 `diagnostic_keys` 与 `BASELINE-DIFF-1.2.6-TO-1.2.7.md` §诊断键所称「1.2.6 win fix dispatcher 24 键 case 表 1.2.7 全保留 + 新增 router_recovery_record（键集超集增长，无键删除）」在字节级 case 表粒度**不成立**，正确表述为：fix 键集 24→23（删 case 39 `native_off_invalid_openai_thread_models` 修复臂），CHECK 键集新增 `router_recovery_record`（CHECK-only）。

## dim4 字段级（win 1.2.7，字节证据）

- 命令面：`fix_codex_router_issue` handler `0x140ADD8A0`；请求字段 `itemId`（len6 @`0x141A29D10`）；内部 `app`/`manager` 状态引用（@`0x141A290EF`/`0x141A29378`）。
- 错误面：未知键 → `*a1=10` + `unknown diagnostic item: <key>`；guard 拒绝 → `*a1=10` + `diagnostic fix requires a verified ChatGPT quiet window: …`。
- 结果 DTO（win 串池邻接同序，池头 @`0x141A5677E`）：`FixResult{fixedIds @0x141A56786, failedIds @0x141A5678E, details @0x141A56797}`；`DiagnosticItem{label, detail, fixable}`；`DiagnosticReport{items, hasIssues @0x141A567A3, transitionInFlight @0x141A567AC}`；`DiagnosticRepairOutcome` 为 enum（mac 字段级：判别字 u32，2=无 target 变体，`FixResult` @+16；win 与 mac 同样无独立 Serialize 符号，经 command handler 映射返回，字段串池 1:1）。
- 副作用面：全部分派臂经 requires_quiet_window 前置（a8=force 旁路）；⚠ 破坏性写集中在 case 19 `state_db_relocation`（inline 搬迁）与 case 32（SQLite UPDATE threads）。

## 调用者面（1.2.7 win dispatcher 3 代码调用者）

`sub_140BC2C60`（fix_all 编排，19150B，逐键循环调分派器）、`sub_140D36F00`（3833B，单键修复路径 ≈ mac `RelayManager::fix_diagnostic_issue`）、`relay_codex_writer__router_http_contract_c` `0x140F51460`（17761B，共享注册/报告面）。与 1.2.6 win 的 3 调用者结构（fix_all `sub_1405C49F0` / 单键 `sub_1409A6E10` / 未深查 `sub_1409658F0`）同构；`0x140F51460` 的内部 CHECK/FIX 细分本轮未逐臂反编译（如实标注）。

## Unknown / 本轮未做

1. 各 fix owner 函数内部实现（`0x140F03750` 等 17 个 call target）本轮只解析地址/尺寸，未逐函数反编译——与 1.2.6 叶的「internal split unverified」口径一致。
2. case 32 除 SQL owner `0x1402620D0` 外的 helper（`0x14024C500`/`0x1403FAE40`/`0x140F41CE0`/`0x140C23890`）未逐个分类。
3. 四角度完整性（红线15）、双路复审、真机 parity（红线25）本轮未做——本叶为 dispatcher 级 case 表 + dim4 字段级证据，非「模块逆完」声明。
4. `native_off_invalid_openai_thread_models` 修复臂删除后的消费侧语义（该键在 1.2.7 是否经 `fix_orphan_thread_providers_with_catalog` 收养面间接覆盖）未闭合，建议消费侧实现前定向复核 `0x140F2BD30`（win）/ mac `fix_orphan_thread_providers_with_catalog`。

## Files in this leaf

- `evidence.md`（本文件）
- `interface-report.json`（dim4 字段级写回 + `rebuild_round_20261005` 最新 exe 重建记录〔session `<审计会话>`，binary_identity_update current_exe_sha256=51cb41b6…〕）
- `manifest.json`（case_table 23 行 + 差集裁决；binary_sha256 为 Oct 1 旧构建 06091864 口径，最新 exe 口径见 interface-report rebuild_round）
- `gate-report.json`（no_gate_promotion）
- `data/case_table_win_1.2.7.json`（1.2.7 win 23 行字节级全表，Oct 1 旧构建口径）
- `data/case_table_win_1.2.6_live_reverify.json`（1.2.6 win 24 行 live 复核对账，Oct 1）
- `data/case_table_win_1.2.7-latest_live_rebuild_2026-10-05.json`（最新 exe 51cb41b6 重建 23 行/14 桶，Oct 5）
- `data/case_table_win_1.2.6_live_rebuild_2026-10-05.json`（1.2.6 win 24 行/15 桶独立重算，Oct 5）
- `data/producer-ledger.json`（3 rounds，2026-10-07 追溯补建）
