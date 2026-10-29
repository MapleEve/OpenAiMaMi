# BASELINE-FINAL — AiMaMi 1.2.7 相对 1.2.6 基线终稿（delta 基线，非独立完整基线）

> 与 `BASELINE-FINAL-1.2.3.md` 的性质不同：1.2.3 是独立完整基线。1.2.7 是**相对 1.2.6 的 delta 基线**——命令集/DTO 层面对照 1.2.6 全量比较收敛，后端深挖聚焦官方 changelog 声明的 8 条变更（归并为五个 delta 目标），不重跑未变化存量面（红线30）。本文件是该 delta 基线的消费者终稿。
> 产出：2026-09-30，session `<审计会话>`，本机（<本地机器>）

## 1. 与 1.2.6 基线的整体关系（命令集 + DTO）

- **1.2.6 命令数 = 134；1.2.7 = 147**（+20/−7/1 参数漂移 `load_quota_history` +range）。双平台 ipc-contracts 集合完全一致，前端 bundle 双平台字节级同哈希（同一构建）。
- 新增 20：accounts 4（`set_account_alias`/`get_account_reset_credits`/`get_account_reset_credit_history`/`load_runtime_display_snapshot`〔win-only 注册，mac 零符号〕）+ 用量刷新族 2（`get/set_usage_refresh_all_accounts`）+ sessions 7（health×4+tmp 清理+`export_sessions_batch`+`load_session_messages`）+ router 2（`run_codex_router_diagnostics`/`fix_codex_router_issue`）+ analytics 5（`load_dashboard_analytics`/`set_dashboard_analytics_active`/`load_thread_analytics`/`load_thread_analytics_detail`/`export_thread_statistics`）。`get/set_usage_refresh_interval`、`start_usage_refresh_watcher` 为 1.2.6 既有命令（frontend-command-diff `ipc_contracts_added` 实证不在 +20 集合），归未变化面迁移。
- 删除 7：`get_codex_router_auth_readiness` / `set_codex_no_account_slots` / `load_change_analytics` / `load_session_analytics` / `load_token_analytics` / `load_tool_analytics` / `load_usage_analytics`（删除面双平台实证）。
- **DTO 漂移**：新增面字段级全部闭合（见 COVERAGE-FINAL-1.2.7 §1 与各 bundle 合同）；既有 DTO 无删除性字段漂移记录；`load_quota_history` 增 `range` 参数（后端 `0x140ec7a00` win / mac sz 2676 对应体）。
- canonical 消费入口：`audits/macos-1.2.7-version-delta/` + `audits/windows-1.2.7-version-delta/`。

## 2. 双端前端覆盖（147 IPC / 402 CCF，orphan=0）

- macOS-arm64：ipc-contracts 147；frontend-control-flow.jsonl 402 行、unresolved=0；ast-facts.json + frontend-control-flow-ast.jsonl 落盘。
- Windows-x64：与 mac **字节级同哈希**（同一前端构建），同 147/402 口径。
- 口径澄清（沿用 1.2.6 口径）：「orphan=0」指前端提取完整（dim1 PASS）；后端 owner 映射缺口（truly_undone）是另一维度，见 §4，不用前端 PASS 掩盖后端缺口。

## 3. 后端 delta 覆盖（五目标 dim1-5 全闭，摘要）

以 `COVERAGE-FINAL-1.2.7.md` §1 表为准；证据细节以双 bundle 合同 + `intermediate/aimami/1.2.7/` 六轮制品为准。量级锚点：

- codexmate 函数 4366→5318（+952）；规范化符号 diff +1632/−841/同名 2449。
- 红线32 体级：83 候选 → 43 真实业务 CHANGED + 40 模板 glue；同名稳定 2406 已终局（2026-10-01 callee 双线：**1627 证实未变 + 779 体级 CHANGED**，127 条 already_in_canonical 中 15 条 handler 体变；`samename-callee-diff-1.2.6-to-1.2.7.json` / `win-body-match-1.2.6-to-1.2.7.json`）。
- mac 263 函数 live decompile（0 截断 0 失败）；win 558 census + 176 decompile（0 截断；2 个反编译空体如实记录）。
- 本轮 dim4 补闭：ResetCredits 四 DTO / CodexSession 26 字段 / FixResult / DiagnosticItem / DiagnosticReport / DiagnosticRepairOutcome enum / CodexPaths 31 字段布局 + aionsale→codexmate 迁移 / fix_issue 23 键分派表 / anthropic-version 2023-06-01 / 模型族表 / SSE 事件全集。

## 4. 未变化面迁移声明（红线5/30）

- 未变化面（同名稳定 2406 + 1.2.6 既有 canonical 覆盖的命令/DTO）从 1.2.6 基线 bundle 迁移引用，不重跑等效逆向；`migration-matrix.json` 126 条迁移引用在案。
- 1.2.6 bundle 门控状态不因本 delta 自动升降；本 delta 双 bundle 门控=consumerStartReady=true / strictImplementationUse=true（限五目标面）/ readyToImplement=false。
- truly_undone 25 簇非命令业务面实现叶已完成（2026-09-30/10-01 双平台收口）：mac 80/80 函数 `strictImplementationUse=true`（`raw/aimami/1.2.7/macos-arm64/backend/non-command-backend-fullchain/`）+ win 347 函数重逆（leaf 伪码 1070+377 份，`raw/aimami/1.2.7/windows-x64/backend/non-command-backend-fullchain/`）；最新 exe（51cb41b6）重基准 21 NEEDS_REDO 项 18 全闭+3 部分+85 unlocated 如实——不再属开放工作单。
- ~~`load_runtime_display_snapshot` 禁实现~~ 已于 2026-10-06 由用户裁决撤销（与 COVERAGE-FINAL-1.2.7 §5 对齐）：既往「双平台零符号」系全名搜索对池化碎片存储的假阴性，win 1.2.7 最新 exe 存在真 handler（glue 0x1405EC7D0），full-chain leaf 落盘 `raw/aimami/1.2.7/windows-x64/backend/commands/accounts/load_runtime_display_snapshot/`（win-only 注册、mac 零符号如实标注），完整合同见 win 合同 §8.1。`graceful_restart_for_update` 禁实现亦已于 2026-10-07 撤销（win 合同 §8.2）。

## 5. 实现门状态

- 本 delta 双 bundle：`consumerStartReady=true`、`strictImplementationUse=true`（限五个 delta 目标面）、`readyToImplement=false`、`implementation_use=false`、`gate_accepted=false`、`full_leaf_100_definition_v2=false`。
- 阻塞项：dim6 留白（C5 实现侧）+ LIVE_REFERENCE_NOT_RUN（红线25 未对照）+ 开放面（§4）。（1.2.6 callee 线已于 2026-10-01 终局收口，不再构成阻塞项。）
- 本文件不提升任何实现门，仅归约既有磁盘证据。

## 6. 与既有文档的关系

- 消费终稿：`COVERAGE-FINAL-1.2.7.md`（同目录）。
- 自足合同：双 bundle `logic/CONSUMER-CONTRACT-1.2.7.md`。
- 基线源头：`BASELINE-FINAL-1.2.6.md` / `COVERAGE-FINAL-1.2.6.md`（1.2.6 基线，不变面迁移源）。

## 7. 同一1.2.7 pre→release 的 macOS 构建增量（2026-10-16）

以上§1–6均属历史pre `ac235ae0171a41d0a641431bb71e60a26093470eab78f2b8d6f91632f93916b9` /71204992B；旧裁决、双平台范围和五门不变。当前mac release为`f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0` /68357552B，版本仍1.2.7，不新建版本。完整SHA分栏及消费增量见`macos-1.2.7-version-delta/SYSTEM-DIFF.md`与同包合同§10。

五模块内容已消费最新冻结manifest及router必要增量；App1870按32/257/335/119/1127唯一归属，缺失/重叠0。稳定项是size/BB/directcalls浅筛迁移，不是1870逐体full_leaf。Skills原生库存及11键、go/pro500、reasoning额外过滤、新Anthropic请求/响应/SSE及hosted续传变化、MCP校验与catalog持有者选择均有实际内容证据。OAuth“取消三次重试”“新增保存凭据保护”已证伪，不能继续当release差异；worktree/fork/摘要保护不是删除/新增。

当前mac comparison尚未闭合：B缺release注册名→handler精确对账（109wrapper/125callsite/103命令，交集94，15wrapper-only及9direct-only须正确分类）；C仅有4760mention+148新库枚举，不能代替全40277名字的语义清查；IDB纠错保存待独立核验。content_closed/readiness/mac_ready=false。release实现五旗false、dim6/live_reference仍false；Windows release后端未由本增量验证，不整体ACK/DONE。不得引用历史readiness=true为release就绪。

## 双平台同版本 pre→release 的当前交付对账

此前“仅mac增量/注册待对账/C清查待做/Windows未验证”是原检查点历史，不作为当前待办。原1.2.6→pre内容和既定门保留；本次仍为1.2.7，按以下独立SHA比较，不新版本。

| 平台 | pre | release | 已核范围与消费入口 |
|---|---|---|---|
| macOS | ac235ae0171a41d0a641431bb71e60a26093470eab78f2b8d6f91632f93916b9 | f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0 | 真App1870责任、五模块变化与四角度；macos-1.2.7-version-delta/SYSTEM-DIFF.md |
| Windows | 51cb41b613aaa50f410d606e1c4271b1de34576b497a1cba0f734eba46279faf | fd5f0c5aa7d500fe7fcef21359028fa614ede9965fc48888601883832ee7d8df | catalog210/30分片+六scope、协议与账户/OAuth补证；windows-1.2.7-version-delta/SYSTEM-DIFF.md |

双平台均有真实保存i64和按模块保存/读回证据。最终交付状态以两包release_comparison、正式reviews及本轮七项核查为准，而非旧检查点文字。mac与win的Skills基线/forceReload/pause_turn旧行为不相同，不互相外推。静态比较交付不等于full_app/full_leaf、dim6或live_reference完成；release全部实现门保持false。
