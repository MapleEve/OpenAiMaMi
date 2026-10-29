# COVERAGE-FINAL — AiMaMi 1.2.7 Changelog 逆向消费者终稿

> 产出时间：2026-09-30 | session `<审计会话>`（dim1-5 闭合 + 消费侧合同轮）| 产出于本机（<本地机器>，消费者+生产者全量）
> 目标版本：1.2.7 测试包（版本字符串仍 1.2.6）；基线 1.2.6（已收口）
> 证据单一权威来源：`intermediate/aimami/1.2.7/`（六轮制品，见 §6 轮次清单）+ 双 bundle `audits/{macos,windows}-1.2.7-version-delta/`；本文档只做消费者视角归约，不重复贴证据细节
> voice/audio/capture/runtime-settings/trigger-listener out-of-scope；dim6 留白

## 0. 范围声明与免责（必读）

- **未做真机对照**：LIVE_REFERENCE_NOT_RUN（红线25 声明「未对照」）；dim6（C5 实现侧验收）留白。全部结论为静态反编译/字符串池证据结论。
- **1.2.6 双平台 IDB 体级 callee 双线已终局（2026-10-01，原 PENDING 收口）**：同名稳定面 2406 个 = **1627 证实未变 + 779 体级 CHANGED**；127 条 already_in_canonical 中 15 条 handler 体级变化（12 非 voice）。证据：`intermediate/aimami/1.2.7/macos-arm64/version-delta/samename-callee-diff-1.2.6-to-1.2.7.json`（2449 项逐函数 verdict）+ `intermediate/aimami/1.2.7/windows-x64/version-delta/win-body-match-1.2.6-to-1.2.7.json`（win strip 侧全二进制 body-hash 匹配，84431 函数一致 modulo 重定位）——provisional 表述已被终局取代。
- **门控**：双 bundle `consumerStartReady=true` / `strictImplementationUse=true`（**限五个 delta 目标面**）/ `readyToImplement=false`（dim6 + live-reference + 开放面）。未变化面迁移自 1.2.6 基线 bundle，门控状态不因本 delta 自动升降。

## 1. changelog 八项 ↔ 覆盖终态（dim1-5）

| changelog | delta 目标 | 覆盖终态 | 要点 |
|---|---|---|---|
| 修复账号卡片切换失败 | accounts | **COVERED（dim1-5 全闭）** | capture 快照面扩大（bb 216→462）+ finish_switch_failure_with_client 新增（双平台 owner 实证：win `0x140c5b650`；mac 合同 §2.1 未给 EA）+ 三重回滚校验 + `SWITCH_ROLLBACK_CAPTURE_FAILED`/`SWITCH_LIVE_VERIFY_FAILED`（两码 1.2.6 底子）；rollback snapshot 无 serde 面（全名表扫描实证），内部字段非消费面 |
| 修复添加账号 | accounts | **COVERED** | `set_account_alias` 新命令（win handler `0x140b0c6a0`）+ persist_oauth_account commit 保护（win `0x140173120`，`OAUTH_COMMIT_NOT_STARTED`/`OAUTH_CLIENT_UPDATE_DEFERRED` 0\|1） |
| 重置卡显示提醒 | accounts | **COVERED** | 四层新子系统；DTO 字段级：ResetCreditsPayload{credits}/ResetCredit{id,expiresAt}/ResetCreditGrant{id,occurredAt}/ResetCreditHistoryPayload{events,nextCursor}；前端 camelCase↔上游 snake_case（events/next_cursor/occurred_at/kind）；6 条错误面；校验链顺序实证 |
| 到期高亮提醒 | accounts | **COVERED** | 常驻 observer 线程（win `0x140c4f610`）+ AuthObservation 守卫链 + AuthFileStamp + 用量刷新族（默认 5m；usage_401_retry 1.2.6 底子）；win `authinfo` 字面量 0 命中（1.2.7 当前 build 内待深核，不阻塞 dim5——DTO/错误/端点已实证零分叉） |
| 线程管理重构 | threads | **COVERED** | 可见性 11 重写函数（sqlite threads 列+rollout JSON 指针+事务/竞态纪律）；sessions 7 新命令 win 全落位；analytics v3 索引器（`analytics-v3.sqlite`）；**CodexSession 26 字段 DTO 本轮字段级闭合**（mac serde `0x1003bf5c0` + win 串池实证）；`export_sessions_batch` jsonl/md 双格式；5 旧 analytics 命令删除双平台实证 |
| 智能路由重构 | router | **COVERED** | 13 诊断项 + DiagnosticReport/DiagnosticItem/FixResult 字段级 DTO（本轮 serde 解码）；**fix_issue 23 键→23 修复器分派表本轮逐分支闭合**（mac 二进制常量解码）；win 键集字节级裁决：fix 键集 1.2.6→1.2.7 **24→23 收缩**（case 39 `native_off_invalid_openai_thread_models` 修复臂双平台删除、键降级 CHECK-only；`router_recovery_record` 为 CHECK-only 新键不入 fix 表；**mac 23 键==win 23 键 1:1**；证据 `raw/aimami/1.2.7/windows-x64/relay/codex_diagnostic/_shared-fix-dispatcher-sub_140f58a10/` 4 份 case 表）；quiet-window+备份+事务纪律；live_auth_state 活体凭据推断；readiness 29→14 收缩 |
| ChatGPT 引擎目录适配 | engine | **COVERED** | 六端点集双平台一致（base/models/responses/responses/compact/images/generations/images/edits）+ `x-aimami-catalog-revision`；**CodexPaths 31 字段布局本轮闭合**（mac `from_home` 全解码 + win 串池实证）+ **aionsale→codexmate legacy 就地迁移（新证据）**；validate_legacy_no_account_aliases 校验规则闭合 |
| Anthropic 协议 V1.0 | protocol | **COVERED（行为合同级）** | **版本协商字段本轮闭合：`anthropic-version: 2023-06-01`**（+anthropic-beta 头，beta 值 inline-tools-2026-09-15）；模型族表（sonnet-5-5/opus-5/opus-5-5/fable-5/fable-5-1/mythos-5/mythos-5-1）；SSE 六事件全集+Responses 事件集+错误 envelope；web_search `external_web_access=false` 拒绝门；续传+签名历史保护；handle_event 逐转移表未逐枚举（行为合同级闭合，如实标注） |

## 2. 前端（dim1）

ipc 134→147（+20/−7/1 参数漂移 load_quota_history +range）；CCF 134→160 命令（+33/−7），402 行 unresolved=0；双平台 bundle 字节级同哈希=同一前端构建；59 个既有命令控制流变化 + 30 个新命令链。

## 3. 删除面（已证实）

`core::session_analytics` 8 fns 全删→5 条旧 analytics IPC；`get_codex_router_auth_readiness`（readiness 29→14）；`set_codex_no_account_slots`（收编 legacy 校验+恢复链）；translator 旧 OpenAI-only 路径 −14。

## 4. 平台门（dim5 终判）

DTO/错误码/端点/模型族/协议常量**双平台零分叉**（win 10 项独立串池抽查全 PASS）；已证分叉=进程扫描（mac `ps` vs win Toolhelp32 三叶）/mac LaunchAgents 自启/`system_volume_windows` 命名（voice 邻接 oos）/`useStateDbOnly`+`authinfo` 字面量 win 0 命中（1.2.7 当前 build 内待深核，不阻塞 dim5——DTO/错误/端点已实证零分叉）。

## 5. 禁实现与开放面（如实）

1. **禁实现（2 项）**：`custom_instructions_entry_enabled` / `recharge_entry_enabled`（无后端符号）。~~`load_runtime_display_snapshot`~~ 已于 2026-10-06 撤销（win handler full-chain leaf `raw/aimami/1.2.7/windows-x64/backend/commands/accounts/load_runtime_display_snapshot/`，win-only 注册、mac 零符号如实标注）；~~`graceful_restart_for_update`~~ 已于 2026-10-07 撤销（win handler full-chain leaf `raw/aimami/1.2.7/windows-x64/backend/commands/system/graceful_restart_for_update/`，四重注册实证；⚠进程退出+重启破坏性、win 无 IPC 响应/mac 应答 unit 平台分叉；mac 侧同轮只读核验推翻「零符号」——名字表 0x1018c0455 + wrapper 0x100638510，完整合同见 win 合同 §8.2 与 mac 合同 §9.1）。
2. **原开放工作单已收口（2026-09-30 → 10-06）**：truly_undone 25 簇非命令业务面——mac 80/80 函数 `strictImplementationUse=true` / win 347 函数重逆（leaf 伪码 1070+377 份）+ 最新 exe 重基准 18/21 全闭+3 部分（proxy_server 26/29、codex_config 4/7、codex_mutation 5/7）+85 unlocated 如实（双平台 leaf `raw/aimami/1.2.7/{macos-arm64,windows-x64}/backend/non-command-backend-fullchain/`）；win 红线24 dirtree 全量命名已完成（1016 归目录+1070 注释，`audits/WIN-1.2.7-IDB-WRITEBACK.md`）；win fix 逐 case 字节级表已完成（4 份 case 表，见 §1 router 行）。**仍开放**：CodexPaths win 函数级 owner（串池级已闭）。
3. **local_outtake（已恢复）**：`load_quota_history`/`reveal_relay_api_key` 已于 2026-09-30 由 recovery 轮（session `<审计会话>`）以现有 1.2.7 IDB live decompile 恢复完整函数体——双平台 bundle `interface-report.json` status=PASS（dim4 字段级 DTO+错误面落盘：win load_history_range owner `0x140ec7a00` 2573B / mac `0x100abde30` 2676B，reveal wrapper/核/ensure 链双平台在案），gate-report 2026-09-30 amendment 在案；四角度 D angle_b 分类维持 local_outtake 登记未改判。
4. **勘误**：win 分册两字面量以二进制实串为准（`Restored file does not match captured state:` / `Anthropic server continuation rejected by upstream (HTTP …)` 族）。

## 6. 轮次清单（全部 DONE，本机）

1. `<审计会话>` — delta 盘点（二进制/双 IDB/前端 diff/符号 diff）
2. `<审计会话>` — 前端 CCF+AST 补齐 + 前端 diff 驱动后端优先级
3. `<审计会话>` — mac 后端深 diff（263 decomp/红线32/五 mac 分册/dirtree）
4. `<审计会话>` — win 深 diff（176 decomp/四 win 分册/键 owner 映射）
5. `<审计会话>` — 双平台四角度 D1 分类（mac 237/win 182 items）
6. `<审计会话>` — **本轮**：dim4 字段级补闭 + 双平台 CONSUMER-CONTRACT + 双 bundle + SoT 回写

## 7. 消费入口

- 自足合同：`audits/macos-1.2.7-version-delta/logic/CONSUMER-CONTRACT-1.2.7.md` / `audits/windows-1.2.7-version-delta/logic/CONSUMER-CONTRACT-1.2.7.md`
- 门禁：`audits/{macos,windows}-1.2.7-version-delta/gate-report.json`
- 证据指针：同 bundle `pointers/evidence-paths.md`

## 8. macOS pre→release SHA 增量覆盖（2026-10-16，非双平台完成声明）

本节pre为`ac235ae0171a41d0a641431bb71e60a26093470eab78f2b8d6f91632f93916b9` /71204992B，release为`f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0` /68357552B。§1–7及其门控只属此前1.2.6→pre历史，不重新裁决。

| 维度 | 当前实际覆盖 | 状态与边界 |
|---|---|---|
| A App枚举 | 4760 mention=1870真App+2890泛型/胶水；责任32+257+335+119+1127=1870 | EA/完整名匹配，缺0重0；稳定浅筛不称逐体full_leaf |
| B 当前前端/注册 | IPC109、CCF125行/103命令；交集94、wrapper-only15、direct-only9；75wrapper有同名App符号关联、34无同名（25有调用） | 当前release注册→handler/alias证据未全，true_gaps未判定，不能拿pre147命令表替代 |
| C 非commands/全二进制语义 | 去commands的1728 App中关键词命中903，全归属；cc_switch_anthropic另148函数 | 全IDA40277仅total，已保存名字4908，余35369未全枚举，尚不能全binary语义PASS |
| D manifest/孤儿 | 函数责任already_in_canonical1870、local_outtake0、different_machine_owner0、truly_undone0 | 仅表示本次比较已分类可追源；命令四分类受B待补约束，不宣称命令0缺口 |

五模块必要pre输入缺口0、定向候选语义待判0。Skills新11键/库存/warnings/无告警才缓存、PlanType新增go/pro500、reasoning新增ccswitch前缀、Anthropic新协议/hosted续传边界、MCP校验与catalog持有者选择是实际差异。OAuth两项相反旧断言已在活跃源文撤销；旧watch/retry/摘要/原子发布/恢复保护不得误报新增，worktree/fork内联不得报删除。

当前comparison content_closed/readiness/mac_ready=false；B/C精确待补及IDB单写纠错保存指针见mac包SYSTEM-DIFF §8–9/AI.md，IDB198EA/42模块旧hash不替代新纠错验证。release实现五旗false，dim6/live_reference未做；Windows后端独立未闭合。本节只mac本scope，不改前史、不整体ACK。

## 双平台同版本 pre→release 的当前交付对账

此前“仅mac增量/注册待对账/C清查待做/Windows未验证”是原检查点历史，不作为当前待办。原1.2.6→pre内容和既定门保留；本次仍为1.2.7，按以下独立SHA比较，不新版本。

| 平台 | pre | release | 已核范围与消费入口 |
|---|---|---|---|
| macOS | ac235ae0171a41d0a641431bb71e60a26093470eab78f2b8d6f91632f93916b9 | f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0 | 真App1870责任、五模块变化与四角度；macos-1.2.7-version-delta/SYSTEM-DIFF.md |
| Windows | 51cb41b613aaa50f410d606e1c4271b1de34576b497a1cba0f734eba46279faf | fd5f0c5aa7d500fe7fcef21359028fa614ede9965fc48888601883832ee7d8df | catalog210/30分片+六scope、协议与账户/OAuth补证；windows-1.2.7-version-delta/SYSTEM-DIFF.md |

双平台均有真实保存i64和按模块保存/读回证据。最终交付状态以两包release_comparison、正式reviews及本轮七项核查为准，而非旧检查点文字。mac与win的Skills基线/forceReload/pause_turn旧行为不相同，不互相外推。静态比较交付不等于full_app/full_leaf、dim6或live_reference完成；release全部实现门保持false。
