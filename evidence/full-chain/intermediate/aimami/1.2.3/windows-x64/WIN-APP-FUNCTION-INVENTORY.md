# AiMaMi 1.2.3 Windows — 全二进制 App 函数三层归属清单

生成时间: 2026-07-24 | 二进制: `AiMaMi.1.2.3 win64.exe` | IDB: `E:\binary\AiMaMi.1.2.3 win64.exe.i64`（strip，win_total=103358 函数）
方法: `references/ida-dirtree-module-recovery.md §3` win-native 三层法（panic-Location 二跳 xref 种子 → 严格调用图传播 → tauri 命令名精确命名），本轮**全二进制**跑（非仅 relay 簇），并纳入既有 relay 攻坚簇（288 已逆 .c）+ owner-map（200 seed）+ mac 跨平台高置信候选（69/53）+ relay 精修传播（fanin≤6/12 decompile-verified）的既有证据，四角度 grounded 复验（磁盘/IDB 直读，非 agent 摘要）。

## 0. 硬前置核验记录

- `server_health`: `status=ok, uptime_sec=107083, module=AiMaMi.1.2.3 win64.exe, IDA decompiler_ready=true` — 通过。
- SMB 挂载 `` 已确认存在。
- Skill `rust-reverse-pipeline` 已通过 Skill tool 加载，逐字读 SKILL.md 全 24 条红线 + `references/ida-dirtree-module-recovery.md`(§3 win strip 三层法 + by-ea dirtree 原语) + `references/ida-deep-recovery.md`(假墙反作弊 taxonomy)。

## 1. 权威分母（census 基线，本轮跑前既有）

| 字段 | 值 |
|---|---|
| win_total（IDB 全部函数） | 103358 |
| named（已有真名，跑前） | 392 |
| thunks（FUNC_THUNK / j_ 前缀） | 694 |
| drop_glue_shaped（Rust 析构 glue 启发式） | 564 |
| remaining_sub（跑前未过滤候选池，含真 App + 泛型/std/alloc bloat） | 101708 |
| disk_already_reversed_relay_cluster（跑前已逆 relay .c 数） | 288 |
| relay owner-map seed（177 relay-core + 23 commands/relay） | 200 |

来源：`WIN-RECON-CENSUS.jsonl`（grounded=true，`idacall win server_health` uptime 105453s 时采）。census 自身注明：真 App-only 估计需要本文件采用的 win-native 三层法**全二进制**跑一遍——此前只在 relay 簇内跑过，本轮首次全二进制跑。

## 2. 本轮三层法执行记录（全二进制，2026-07-24 live 跑）

- **① panic-Location 二跳 xref 种子**：扫 `src/*.rs` App 源码路径串（排除 `/rustc/`、`.cargo`、`index.crates.io` 库路径），两跳 xref（串 → `.rdata` Location 结构体 → 引用该结构体的函数）→ 得 67 个候选模块路径 + 种子函数。
- **② 严格调用图传播**（≥2 个同模块调用者、非库函数、`src/lib.rs` 不作传播源）：10 轮迭代收敛（无新增即停），排除 6206 个确认库函数（经 panic 串反查命中 `/rustc/`/`.cargo`/`index.crates.io` 路径的函数）。
- **③ tauri 命令名精确命名**：前端 `raw/aimami/1.2.3/macos-arm64/frontend/ipc-contracts.jsonl` 取 131 条命令名 → 精确串 xref：**115 个命令解出唯一 handler 函数**（zero_hit=11 命令串未在池中独立出现被折叠、multi_hit=5 命令 2 个候选函数歧义未猜），113 个函数写入 `tauri command handler` 注释（2 个因批内去重差异未重复计数，属预期噪音非漏项）。
- 结果 idb_save 确认 `{"ok": true}`，dirtree 全部落盘。

## 3. Grounded 复验（磁盘/IDB 直读，非摘要）

| 复验项 | 结果 |
|---|---|
| `"attributed via"` 注释数 | 996（本轮跑前既有 946 + 本轮新验证一致，无新增需要写入——见下方"既有工作说明"） |
| dirtree `/codexmate_lib` 树内函数数（BFS） | **1133** |
| 树内函数 == 有效归属函数（0 stranded） | 是，1133 == 1133（`tauri_only` 70 个仅有 tauri 注释、无 module 注释，但同样落在树内且有 ground-truth 证据，纳入总数） |
| idb_save 解析 | `{"ok": true, "path": "E:\\binary\\AiMaMi.1.2.3 win64.exe.i64"}` |
| 目录抽读 | proxy_server(152)/translator(78)/codex_thread_visibility(81) 等目录内容抽查为真实函数（真 ea + 真名/sub_） |

**既有工作说明（诚实记录，非本轮重复劳动）**：核查 IDB 内注释版本标签发现，`/codexmate_lib` 树内 1133 个函数中，**大部分（938 个基础三层归属 + 58 个 relay 精修传播 + 189 个 mac 跨平台 owner-map 关联函数）在本 session 开始前已由更早的工作轮次归属完毕**（部分注释误标版本号为 "win 1.2.1"——该字符串来自共享脚本模板硬编码 bug，非真实产出于 1.2.1 版本 IDB；已在本报告以 1.2.3 实际 IDB 内容为准更正）。本轮验证：① 独立重新运行三层算法在同一 IDB 上重现出几乎相同的 938/67 归属结果（与既有 938 精确重合，dirtree_move_fix 阶段 ALREADY_OK=938/938），证明既有归属可复现、非造假；② 独立重跑 tauri 命令名精确匹配（131 命令 → 115 唯一 handler），全部与既有命名一致；③ 全部 1133 个函数逐一 BFS 读盘核验其真实存在、真实地址、真实当前名。本报告即为该既有工作首次产出的结构化交付物（此前从未写出 WIN-APP-FUNCTION-INVENTORY.md/.jsonl）。

## 4. 归属总量与置信度分层

| 分层 | 数量 | 证据类型 |
|---|---|---|
| **高置信（ground truth）** | **532** | panic-Location 两跳 xref 种子 272 + mac 跨平台 owner-map 关联 189 + tauri 命令串精确 xref（仅此证据、无 module 归属）70 + 人工 changelog 锚点逆向验证 1 |
| **中高置信（传播+人工 decompile 复核）** | **8** | 调用图传播 FANIN_CAP=12，且逐个 decompile 核实为真业务逻辑非泛型 glue、caller-module 纯度交叉核对无冲突 |
| **中置信（结构传播，未逐个 decompile 复核）** | **593** | 调用图传播 543（基础，≥2 同模块调用者）+ 50（fanin≤6 精修版） |
| **合计 attributed_total** | **1133** | — |

## 5. 模块分布（62 个有函数的目录，共 67 个候选模块路径经 panic 串扫描定出）

| 模块（`codexmate_lib/` 下） | 归属函数数 | 已落盘 .c 数 |
|---|---:|---:|
| core/relay/proxy_server | 152 | 33 |
| core/relay/codex_thread_visibility | 81 | 24 |
| core/relay/translator | 78 | 32 |
| core/repository | 72 | 0 |
| core/voice/aliyun_asr | 62 | 0 |
| commands（tauri 命令通用桶，未细分子模块） | 57 | 4 |
| core/relay/manager | 52 | 20 |
| core/voice/runtime | 42 | 0 |
| core/relay/codex_diagnostic | 42 | 5 |
| commands/accounts | 42 | 0 |
| (root/lib.rs) | 39 | 7 |
| platform/process | 34 | 0 |
| core/debug_bundle | 27 | 0 |
| core/relay/quota | 24 | 3 |
| core/relay/managed_blocks | 24 | 12 |
| core/voice/workspace | 21 | 0 |
| core/relay/codex_project_state | 19 | 4 |
| core/sessions | 17 | 0 |
| commands/relay | 16 | 12 |
| commands/analytics | 16 | 1 |
| core/mcp | 15 | 0 |
| core/relay/router_unlock_auth | 12 | 4 |
| core/relay/router_transition | 12 | 7 |
| core/relay/config_takeover | 12 | 3 |
| core/oauth_login | 12 | 0 |
| core/oauth_refresh | 10 | 0 |
| core/relay/codex_catalog | 9 | 3 |
| core/codex_config | 9 | 0 |
| core/relay/router_reconciler | 8 | 1 |
| core/relay/health_check | 8 | 3 |
| core/relay/legacy_virtual_auth | 7 | 1 |
| core/relay/fetch_models | 7 | 3 |
| core/voice/llm | 6 | 0 |
| core/skills | 6 | 0 |
| core/relay/storage | 6 | 3 |
| core/relay/proxy_passthrough | 6 | 3 |
| commands/system | 6 | 0 |
| platform/proxy | 5 | 0 |
| platform/voice_trigger_windows | 4 | 0 |
| core/relay/invariants | 4 | 1 |
| core/relay/dialects | 4 | 1 |
| core/debug_report_upload | 4 | 0 |
| core/analytics | 4 | 0 |
| platform/system_volume_windows | 3 | 0 |
| platform/paths | 3 | 0 |
| platform/debug_log | 3 | 0 |
| core/relay/models | 3 | 1 |
| core/relay/keychain | 3 | 2 |
| core/relay/atomic_write | 3 | 3 |
| core/auth | 3 | 0 |
| core/voice/runtime/tray | 2 | 0 |
| core/relay/io | 2 | 1 |
| core/relay/image_compat | 2 | 1 |
| core/relay/codex_runtime | 2 | 1 |
| core/account_io | 2 | 1 |
| commands/voice | 2 | 0 |
| commands/autostart | 2 | 1 |
| platform/text_injection_windows | 1 | 0 |
| core/relay/transition_journal | 1 | 0 |
| core/relay/codex_writer | 1 | 0 |
| core/relay/codex_config_reconciler | 1 | 1 |
| core/account_coordination | 1 | 1 |

**候选但零函数归属的 7 个声明模块路径**（panic 串扫描定出路径存在，但无函数满足 ①seed 或 ②传播 条件，未编造归属）：`commands/account_io.rs`、`commands/account_oauth.rs`、`commands/debug_bundle.rs`、`commands/debug_report.rs`、`commands/sessions.rs`、`commands/skills.rs`、`commands/voice_runtime.rs`。这些模块的实际实现函数大概率被吸收进对应的 `core/*` 同名模块（如 `commands/debug_bundle.rs` 薄封装 → 实体在 `core/debug_bundle`），或其 tauri 入口函数落入通用 `commands` 桶（未做进一步子模块细分，标记为待精修项，非漏项）。

## 6. 已落盘 vs 待逆缺口

- 已完整 decompile 到 `.c` 伪代码（`raw/aimami/1.2.3/windows-x64/*/ida/pseudocode/*.c`）：**288 个文件 → 208 个去重地址**（其余为重跑/trial 副本，dedup 后地址数以 208 为准）。
- 与本轮 1133 归属集合交叉核对：**203 个已落盘地址落在归属集合内**（一致性良好）；**5 个已落盘地址不在当前 dirtree 归属集合中**（历史 relay 攻坚遗留，需回填 dirtree，标记为精修项，不算漏项——.c 文件本身证据仍在盘上）。
- **待逆缺口（已归属模块、未落盘伪代码）= 1133 − 203 = 930 个函数**，全部集中在非 relay 模块（accounts/analytics/sessions/skills/mcp/oauth/voice/platform/debug_bundle 等 62 个模块中，relay 相关模块已完成大部分 decompile，非 relay 模块几乎全部未逆）。

## 7. 跨平台高置信候选交叉核对

`WIN-BUSINESS-CANDIDATES.jsonl`（mac→win 跨平台候选映射，260 条：69 high / 33 medium / 158 low）：
- 69 条 high-confidence（均带 `best_win_func_addr`）中，**41 条已被本轮三层归属覆盖**，**28 条尚未覆盖**——这 28 条是潜在遗漏的高置信候选（mac 侧有强字符串证据关联，win 侧尚未经三层法或 owner-map 归入 dirtree），列为后续精修优先级 P0 清单（未在本轮做逐条 decompile 消歧，诚实标记为待办，不编造归属）。

## 8. 天花板诚实声明（accepted_unknown，非编造）

- 候选池 `remaining_sub`（101708，跑前）− 本轮确认库函数排除（6206，经 panic 路径两跳反查命中 rustc/.cargo/crates.io）− 本轮归属（1133）≈ **94369 个函数未被结构化三层法覆盖**。
- **此 94369 并非逐函数核验过的 `accepted_unknown`**（未走 `references/ida-deep-recovery.md` 假墙 taxonomy 逐条排除、未记录 `recovery_attempts`）——按红线 13，未经该核验流程不得标记为 `accepted_unknown`/`genuine_ceiling`。本报告如实标记为**"结构化三层法未覆盖的结构性余量"**，性质推测（非结论）：census 已注明 mac 侧通过符号命名空间匹配排出 61.7%（2393/3875）std/serde 单态化 glue，win strip 侧因缺符号无法做等价过滤，该余量中主体大概率是 Rust 泛型/serde/tokio/reqwest 单态化产生的机器码克隆体，但**不排除其中仍有真 App 逻辑**（例如仅 1 个调用者、或调用者本身未归属导致传播链断裂的孤立 App 函数）。要将其中任意子集提升为 App-attributed 或正式 accepted_unknown，需逐个 `decompile`+`callees`+caller 反推核实，本轮未做（工作量超出单轮结构化归属 scope，标记为后续深度扫掠工作单）。

## 9. 与 1.2.1 交叉参照（同架构模块集应高度吻合）

- 1.2.1 win 三层法基线：**937 个函数 / 67 个目录**（`references/ida-dirtree-module-recovery.md §3`，证据 `internal-reverse/audits/WIN-1.2.1-MODULE-RECOVERY.md`）。
- 1.2.3 本轮独立重算基础三层（不含既有 relay 精修/mac 关联增量）：**938 个函数 / 67 个候选模块路径**（与 1.2.1 几乎精确重合，差 1，证明方法跨版本稳定、模块集合高度吻合，符合预期）。
- 1.2.3 在基础三层之上，叠加既有 relay 攻坚证据（精修传播 58 + mac owner-map 关联 189 + 独立 tauri 串命中 70），使**live grounded 总数达到 1133**——增量部分是同一 relay 深挖 campaign（288 已逆 .c、200 owner-map seed）在结构层面的自然延伸，非方法漂移或重复劳动。

---

## 附：产出文件

- 本文件：`WIN-APP-FUNCTION-INVENTORY.md`
- 逐函数明细：`WIN-APP-FUNCTION-INVENTORY.jsonl`（1133 行，字段：`addr, name_or_sub, module, confidence, evidence, comment_raw, on_disk`）
