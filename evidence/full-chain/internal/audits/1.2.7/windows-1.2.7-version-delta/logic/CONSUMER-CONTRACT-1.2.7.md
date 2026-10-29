# CONSUMER-CONTRACT-1.2.7.md — AiMaMi 1.2.7 消费者自足合同（windows-x64）

- session: `<审计会话>`（dim4 字段级补闭 + 合同合成），2026-09-30，machine <本地机器>
- 上游: AiMaMi 1.2.7 测试包 win64，sha256 `06091864a42a1e5505cbc556b971f63c47a89c6e2805507de41bb66d00f1afea`（2026-09-30 合同合成时的旧 pre-update 构建口径，112715 函数；当前 canonical 二进制 SOT=最新 exe `51cb41b6`〔112594 函数〕，EA 换算见 §2 重基准注）
- 自足性: 与 mac 合同同构的五个 delta 目标 dim1-5 消费面。**字段级 DTO/错误面/端点/模型族经 win 串池独立实证与 mac 零分叉**（`dto-fieldlevel-win.md` 10 项抽查全 PASS）；本合同给出 win owner EA 与平台分叉面，行为语义与 mac 合同共用（红线5 迁移引用，红线8 已独立实证处逐一标注）
- 门控: `consumerStartReady=true` / `strictImplementationUse=true`（限五个 delta 目标面）/ `readyToImplement=false`
- voice/audio/capture/runtime-settings/trigger-listener out-of-scope；dim6 留白

---

## 1. 命令面

与 mac 合同 §1 相同命令集（ipc 134→147，+20/−7/1 参数漂移，双平台前端 bundle 字节级同哈希；win 侧 20 条新命令 18 条 strings 命中 + 7 条删除命令串 1.2.7 win 二进制全部消失实证）。win handler EA 见 §2-§6 各表。

## 2. accounts（win owner 实证）

> **最新 exe 重基准注（§2-§6 通则，2026-10-06 轮补充）**：本合同 §2-§6 各表 win owner EA 为 2026-09-30 旧 pre-update 构建口径（sha256 `06091864…`，112715 函数）；当前 canonical 二进制 SOT=最新 exe **51cb41b6**（112594 函数，`raw/binary/MANIFEST.md`），整体性 EA 重排、旧 EA 锚点不可直接沿用——消费侧引用 EA 前按 `intermediate/aimami/1.2.7/windows-x64/version-delta/win-latest-exe-rebaseline.json`（vs 1.2.6 匹配矩阵 matched=84293/净增 6322；truly_undone 25 簇已按最新 exe 重锚定：610 relocated 重锚定+368 body-changed 重逆+85 unlocated 如实开放）换算；0x140aa7d50..0x140aaa5e0 60 函数族已内容级定性为 tauri 命令 glue 模板实例（`scripts/win127-aa60-family-classification-20261006.json`）。§8.1/§8.2 两撤销轮（2026-10-06/07）的 EA 已是最新 exe 口径。

| 面 | win owner | 要点 |
|---|---|---|
| 切换聚合体 | `0x1405a8ba0`（28374B/429bb/174cal） | `switch_account` 命令串直接引用；兼 `get_usage_refresh_all_accounts`/`confirm_pending_auto_switch_and_restart_codex` |
| finish_switch_failure_with_client | `0x140c5b650`（11113B/377bb/60cal） | 1.2.7 新增双平台一致；三回滚校验字面量 owner；≈mac 9891B/352bb/59cal |
| switch_account_and_restart handler | `0x140b0ffd0`（3721B/113bb） | 反编译器 null（疑似 ICF 孪生 `0x140b11830`），行为经聚合体间接闭合，census 在案 |
| 错误码 | `SWITCH_LIVE_VERIFY_FAILED` 2\|2 / `SWITCH_ROLLBACK_CAPTURE_FAILED` 1\|1 | 两码为 1.2.6 底子；1.2.7 变化在快照覆盖面+失败收尾新函数 |
| persist_oauth_account | `0x140173120`（5196B/152bb/35cal） | `OAUTH_COMMIT_NOT_STARTED`/`OAUTH_CLIENT_UPDATE_DEFERRED` 均 0\|1 新增 |
| set_account_alias handler | `0x140b0c6a0`（4043B/28cal） | 新命令；`Invalid account remark` 0\|1 |
| 重置卡 handlers | `0x140b0b3a0` / `0x140b09e20` | 双 0→1；守卫字面量全 0\|1；cursor 分页 DTO 同 mac（win 串池 `expiresAt`/`occurredAt`/`nextCursor`/`next_cursor` 实证） |
| account_observer | `0x140c4f610`（1760B/66bb/19cal） | `aimami-account-observer` 线程名 0\|1 |
| 用量刷新族 | interval `0x1405a0d00`/`0x1405a0420`；all_accounts `0x14059fd90` | `usage_401_retry`（`0x140216100`）为 1.2.6 底子保留 |

DTO（与 mac 相同，win 串池实证）: `ResetCreditsPayload{credits}` / `ResetCredit{id,expiresAt}` / `ResetCreditGrant{id,occurredAt}` / `ResetCreditHistoryPayload{events,nextCursor}`；上游 snake_case `events`/`next_cursor`/`occurred_at`/`kind`；校验链=凭据存在→可读→身份匹配→请求；副作用只读。rollback snapshot 无 serde 面（mac 实证），win 同判。

## 3. threads（win owner 实证）

| 命令 | win handler | 要点 |
|---|---|---|
| `inspect_session_index_health` | `0x140ae8340` | `SELECT count(*) FROM thread_items` owner `0x14035b070` |
| `clean_catalog_ghost_threads` | `0x140ae1940` | 0→1 |
| `clean_missing_rollout_rows` | `0x140ae33c0` | 0→1 |
| `clean_orphan_rollouts` | `0x140ae4e40` | 0→1；fs delete ⚠ 有 matching 校验 |
| `clean_global_state_tmp_files` | `0x140ae68c0` | 0→1（NEW_BACKEND） |
| `export_sessions_batch` | `0x140ae9d50`（6723B/34cal） | `jsonl` 字面量 5\|18 倍增；行 schema=CodexSession 26 字段（mac serde 解码 + win 串池 `parentSessionId`/`agentNickname`/`isConversationThread`/`worktreeMigration` 实证，本轮闭合） |
| `load_session_messages` | `0x140aec460` | `Untitled Session` 兜底 |

- thread_visibility win 对应体: `repair_missing_rollouts_for_convergence` `0x14025c3f0`（17666B/630bb/**58cal**，与 mac callee 数精确一致）；`restore_no_account_model_threads` `0x140230dc0`；`model_fallback::restore_relay_model_threads` `0x140c90350`；竞态重试/历史保留纪律字面量在案。sqlite threads 表列与 JSON 指针面同 mac 合同 §3.1。
- analytics: `analytics-v3.sqlite` owner `0x140f7eb70`（0\|1）；parser `0x140f82290`；worker `0x140f7e180`；命令 `load_dashboard_analytics`→`0x140b37d80`、`set_dashboard_analytics_active`→`0x1405a8150`、`load_thread_analytics[_detail]`→`0x140b32940`+`0x140b36340`、`export_thread_statistics`→`0x140b34640`；符号链接防护 owner `0x14035cee0`；5 条旧 analytics 命令串 1.2.7 win 全消失（1\|0）。
- codex_app_server: `thread/list` `0x140bbaa20`/`0x140c4a970`；`thread/items/list`/`thread/fork` 0→1/0→2。`load_quota_history` range 漂移后端 `0x140ec7a00`（2573B/104bb/23cal ≈ mac sz 2676）。
- CodexSession 26 字段 schema 同 mac 合同 §3.4（字段名集合 win 串池实证一致）。

## 4. router（win owner 实证）

- 诊断 handler `0x140b01130`；诊断引擎 `0x140f427e0`（32339B/997bb/114cal ≈ mac 1243bb/103cal）；CHECK 引擎 `0x140f10f70`（1264bb/95cal，持全部 13 诊断键）；`router_recovery_record` 0\|1 新增。
- 13 诊断键 + `DiagnosticReport{items,hasIssues,transitionInFlight}` / `DiagnosticItem{label,detail,fixable}` / `FixResult{fixedIds,failedIds,details}`：win 串池实证（`fixedIds`@`0x141a56786`/`failedIds`/`hasIssues`/`transitionInFlight` 邻接同序）。
- fix 分派 handler `0x140add8a0`（4727B/126bb/31cal，旧构建口径；最新 exe 为 `0x140333570`）。**键集字节级裁决（2026-10-01 创建 + 2026-10-05 最新 exe 重建双轮 case 表实证）**：fix 键集 1.2.6→1.2.7 为 **24→23 收缩**——case 39 `native_off_invalid_openai_thread_models` INLINE 修复臂双平台删除、该键降级为 CHECK-only 诊断键；`router_recovery_record` 为 1.2.7 新增 **CHECK-only** 诊断键、不入 fix 分派表；**mac 23 键 == win 23 键逐键 1:1（平台差集=零）**。前序「24 键全保留+新增超集无删除」系 owner 映射粒度临时结论，已字节级证伪更正。逐 case 字节级表证据（4 份）：`raw/aimami/1.2.7/windows-x64/relay/codex_diagnostic/_shared-fix-dispatcher-sub_140f58a10/`（`data/case_table_win_1.2.7.json` 23 行/14 桶 + `data/case_table_win_1.2.6_live_reverify.json` 24 行/15 桶 + `data/case_table_win_1.2.7-latest_live_rebuild_2026-10-05.json` / `data/case_table_win_1.2.6_live_rebuild_2026-10-05.json` 最新 exe 双重建表）。逐键 owner 权威映射 `win-diagnostic-key-owners.json`（config_toml_syntax→0x140f10310、db_orphan_providers→0x140f0ebc0、takeover_backup_orphan→0x140f23360、thread_poisoned_instructions→0x140f39bb0、auth_integrity→0x140f069b0、catalog_integrity→0x140f09d10、config_stale→0x140f04070 等 19 键双 owner 在案，旧构建口径）。
- quiet-window/备份/事务纪律字面量 win 在案（`diagnostic repair` 3\|4、`router_postcondition` 2\|3、`quiet window` 3\|4 面扩张）。
- **进程扫描叶（dim5 分叉实证）**: Toolhelp32 API 族（CreateToolhelp32Snapshot/Process32FirstW/NextW/OpenProcess/QueryFullProcessImageNameW）；三叶 decompile `0x140ee4dc0`/`0x140ee8460`/`0x141040bc0`；mac `ps` 子进程面 win 0\|0，`tasklist` 0\|0（win 纯 API 枚举无 shell-out），`CFBundleShortVersionString` mac-only。
- live_auth_state 活体凭据推断（`auth_mode`/`OPENAI_API_KEY`/`tokens`）与转态机字面量同 mac 合同 §4.3/§4.4；`0x140d88820` 为 `Codex router transition lock is poisoned` owner 之一（200bb/51cal）。

## 5. engine（win owner 实证）

- 端点集与 mac 完全一致（win 串池：base/`/models`/`/responses`/`/responses/compact`/`/images/generations`/`/images/edits`）；base 端点 1.2.6 底子 3\|3，1.2.7 新增为目录修订/修复目录装配面。
- `x-aimami-catalog-revision` owners `0x14022f700`（75bb/17cal）+ `0x140d388c0`（0\|3 新增）；`requires_openai_auth` owner 族 `0x14022f700`/`0x140c72940`/`0x140c73960`/`0x140ef2020`；`native_repair_catalog` 核心 `0x140396de0`（panic-Location 两跳落位）。
- CodexPaths win 布局：**串池级实证与 mac 一致**（`sqlite`+`codex-dev.db` 邻接、`CODEX_SQLITE_HOME`、`state_5.sqlite`、`codexmate`+`aionsale` 邻接，本轮 dto-fieldlevel-win.md）——home 解析/legacy aionsale→codexmate 迁移面 win 同存；函数级 owner 未逐 decompile（strip 二进制路径族无 IPC 面），粒度如实标注。
- LaunchAgents plist 为 mac-only 自启面；win 自启面非本轮范围（不判缺席）。
- config_takeover 备份/隔离/legacy 行兼容面同 mac 合同 §5.3（`# >>> aimami-relay managed start` 标记族 win 串池在案）。

## 6. protocol（win owner 实证）

- 协议常量 win 串池实证：`anthropic-version`+`2023-06-01`（双点）、模型族 `sonnet-5-5`/`fable-5-1`/`mythos-5-1`/`fable-5`/`mythos-5` 邻接同序、`message_start`/`Duplicate Anthropic message_start`。
- 流引擎（最新 exe 口径，2026-10-05 IDB 回写轮闭合）：旧 pre-update 构建单体 `AnthropicDirectToResponsesStream::handle_event` `0x140e38370`（50168B/**1643bb**/81cal，decomp 210391 字符完整）**在最新 exe（51cb41b6）不存在同形函数**（三判别串全二进制 0 命中、旧 EA 落 0x140e2fed0 内部），能力重构为**四条后继通路**：①vendor cc-switch-anthropic 直转 `ccswitch_anthropic_to_responses_event_dispatch` 0x14116A730（← 流驱动 `ccswitch_anthropic_sse_stream_driver` 0x140BE2C50）②relay `AnthropicToChat` 0x140A5FA60（feed_line 0x140A64880 / 跨协议 driver 0x14075CE80；无 post-stop 守卫，守卫移至 Chat 层）③relay `ChatToResponses` 0x140A375F0（「Chat content or conflicting finish_reason arrived after completion」守卫所在层）④relay `ChatToAnthropic` 0x140A32260——逐转移枚举见 raw leaf `raw/aimami/1.2.7/windows-x64/backend/non-command-backend-fullchain/interface-report.json` 顶层键 `handle_event_transitions_latest_exe`（15 份伪代码 `ida/pseudocode-latest-exe/`）。旧构建口径参考：`anthropic_search_incomplete` ×2 owner + `Conflicting Anthropic stop_reason`；feed_line 族 `0x140dc42e0`/`0x140dc5580`/`0x140e5a130`（截断检测三 owner）。
- 续传 `Exchange::resume` `0x140d36390`（89bb/29cal，≈mac 27cal）；能力门 `0x14032e670`；签名历史保护 `0x140362420`；web_search 工具 `0x14027f810`/`0x140327c90`（`external_web_access` 0\|1 门控）。
- anthropic_trace win 落位 `0x1401b1c10`/`0x1401f6f80`/`0x1401f9780`/`0x1402249d0`/`0x140227cf0`。
- translator 新文件面（anthropic_search/anthropic_tools/chat_content panic-Location 双命中）；`anthropic_reasoning.rs`/`anthropic_history.rs` 为底子文件 1\|1 扩展；旧单文件 translator.rs 路径消失（拆分一致）。
- SSE 事件枚举/Responses 事件集/错误 envelope/上游错误映射/续传历史校验同 mac 合同 §6（行为语义零分叉）。
- HTTP 客户端栈：reqwest 底层 1.2.6 既有；1.2.7 `http_client.rs` 新文件面（0\|1）；TLS/代理栈深层差异未逆，维持 Unknown。

## 7. 平台门汇总（dim5 终判）

| 面 | 判定 |
|---|---|
| DTO/错误码/端点/模型族/协议常量 | 双平台零分叉（win 独立实证） |
| 进程扫描 | mac `ps` vs win Toolhelp32（三叶 decompile 在案） |
| 自启 | mac LaunchAgents；win 面未逆（非本轮范围） |
| `useStateDbOnly`/`authinfo` 字面量 | win 双版本 0 命中，1.2.7 当前 build 内待深核，不阻塞 dim5（DTO/错误/端点已实证零分叉；红线38：不因它重开 1.2.6 baseline IDB） |
| `system_volume`→`system_volume_windows` | per-OS 命名分叉（voice 邻接 out-of-scope） |
| keychain/凭据存储 | mac Keychain；win 对应面未专项逆（out-of-detail） |

## 8. 未覆盖/禁实现/待办

**2026-10-06 裁决更新（session <审计会话>）**：`load_runtime_display_snapshot` 的禁实现已由用户裁决撤销（win 侧）——既往「双平台零符号」系全名搜索对池化碎片存储的假阴性（≥16B 命令名拆 first16+last16 窗口常量）；win 1.2.7 最新 exe 存在真 handler（glue 0x1405EC7D0，dispatcher 碎片比较 + .rdata 注册表项 0x141ea6c70 + glue 内容级核验三重实证，本轮 live 独立复验），完整合同见下方 §8.1。mac 侧维持零符号如实标注（win-only 注册，mac 不外推）。其余边界与 mac 合同 §9 相同。**禁实现 2 项**——2026-10-07 起，原 3 项中 `graceful_restart_for_update` 已由用户「欠账全做完 0 残留」直派撤销，完整合同见 §8.2：`custom_instructions_entry_enabled` / `recharge_entry_enabled`（前端侧名称，无后端符号）。**开放面（SoT 现行，2026-10-07 REVERSE-STATUS L8712 清单）**：①NEEDS_REDO 3 部分簇（proxy_server 26/29、codex_config 4/7、codex_mutation 5/7）+ 85 非 voice unlocated（translator.rs 37 / anthropic 家族 22 / mcp 5 / 散点 21，最新 exe 口径如实开放）②60 函数族下游两层（状态分发层 0x14067ce90+i·0x380 与命令队列层 0x140c5e550+i·0x2D0 连排未命名；idx40/51/52 backend-only 命令实现 body 未定位）③2 内联臂命令（`get_or_create_remote_device_secret` / `import_remote_device_secret_if_empty`，非前端 CCF 宇宙，仅登记）④skills 2 命令深链⑤两命令 local_outtake 分类（`load_quota_history` / `reveal_relay_api_key`，angle_b 分类维持未改判；证据恢复已由 2026-09-30 recovery 轮完成——双平台 gate-report amendment + bundle interface-report status PASS）⑥glue 后缀命名待 PM 追认（aa60 轮 57 命令统一 `<command>_glue` 后缀，全程可逆）；LIVE_REFERENCE_NOT_RUN 维持。win 侧附加：CodexPaths 函数级 owner 未逐 decompile（串池级已闭）；HTTP 客户端栈深层差异 Unknown。**已完成（原开放工作单收口）**：truly_undone 25 簇非命令后端实现叶——mac 80/80 函数 strictImplementationUse=true（`raw/aimami/1.2.7/macos-arm64/backend/non-command-backend-fullchain/`，80 伪码 0 截断）+ win 347 函数重逆（leaf 1070 记录/90 模块，伪码 1070+377 份，`raw/aimami/1.2.7/windows-x64/backend/non-command-backend-fullchain/`）；最新 exe 重基准 21 NEEDS_REDO 项 18 全闭+3 部分+85 unlocated 如实；1.2.6 callee 线已终局（2406=1627 未变+779 体级 CHANGED，127 条 already_in_canonical 中 15 条 handler 体变〔12 非 voice〕；`samename-callee-diff-1.2.6-to-1.2.7.json` + `win-body-match-1.2.6-to-1.2.7.json`）；win dirtree 红线24 全量命名已完成（**1016 函数归目录 + 1070 函数中文注释**，/codexmate_lib 下 90 目录链 0 stranded，`audits/WIN-1.2.7-IDB-WRITEBACK.md`）；win fix 逐 case 字节级表已完成（§4 裁决 + 4 份 case 表）；`clean_orphan_rollouts` 白名单匹配条件与 `native_catalog::revision` 失效策略已恢复落盘（mac bundle interface-report PASS 条目，2026-09-30 recovery 轮）。

## 8.1 `load_runtime_display_snapshot` 完整合同（win 1.2.7，2026-10-06）

- **注册**：win-only（dispatcher 0x1405fbca0 碎片比较 first16 "load_runtime_dis"@0x141a23440 + last16 "display_snapshot"@0x141a23430 → jz 0x1405FE736 → call 0x1405fe788 → glue 0x1405EC7D0；注册表项 0x141ea6c70 首字段=glue RVA 0x5ec7d0）。mac 1.2.7 零符号（未注册）。
- **模块**：src/commands/accounts.rs（runtime-state 字符串簇邻接 `codexmate_lib::commands::accounts` 模块路径串 + 全部 writer feeder 在 commands/accounts，panic-Location 两跳真值互证）。
- **输入**：零参数（前端 CCF `loadRuntimeDisplaySnapshot` argKeys=[]；glue 仅拷贝 tauri 环境结构 520+400B）。
- **成功响应**（serde_json）：
  `{ "schemaVersion": 1, "success": true, "code": "ok", "message": "Success", "warnings": [], "data": <RuntimeDisplaySnapshot|null> }`
  - `data` = null 当全局运行时状态未初始化（静态 0x142239468 首 dword==-1）。
  - RuntimeDisplaySnapshot：`{ status: { activeAccount: AccountItem|null, paths: {codexHome, accountsPath, authPath, registryPath, sessionsPath, launchAgentPath, autoSwitchLogPath, authExists, registryExists, sessionsExists}, autoSwitch: {serviceLabel, threshold5hPercent:u32, thresholdWeeklyPercent:u32, enabled:bool, serviceState:enum}, activeAccountKey: string|null, api: {proxy}|null, apiConnectivity: {usageLastError: string|null, usageStatus: enum}|null, authRevision: {epoch: string, sequence: u64}|缺省, lastScanAt: u64, accountCount: u32, usageSource: "local"|"api" }, accounts: AccountItem[], refreshReport: {revision, scope:"full"|"usage"|"account", accountKey: string|null, startedAt:u64, finishedAt:u64, token/metadata/usage: {attempted:u32, succeeded:u32, failed:u32, status:enum}}|缺省 }`
  - AccountItem（384B，25 字段）：planObservedAt:u64 / subscriptionExpiresAt・subscriptionObservedAt・lastUsedAt・lastUsageAt・availableResetCredits: Option / primaryWindow・secondaryWindow: {resetsAt, windowMinutes, usedPercent:Option<f64>, remainingPercent:u32}|null / tokenStatus: {accessTokenExpiresAt, credentialGeneration, code}|缺省 / accountKey・email・alias: string / accountName・workspaceName・profileName: string|null / createdAt:u64 / authMode:"chatgpt"|"apikey" / isActive:bool / usageSource:"local"|"api" / hasActiveSubscription・subscriptionWillRenew: bool|null / planSource:"jwt"|"remote"|"usage" / subscriptionStatus:"active"|"inactive"|"stale" / subscriptionSource:"livePlan"|"jwt"|"remote" / plan:"free"|"plus"|"pro5x"|"pro20x"|"team"|"business"|"enterprise"|"edu"|"unknown"。
- **错误面**：应用层不可失败——envelope 恒成功；不可用以 `data:null` 带内表达。envelope 类型的 -2 错误变体（responder 0x140AABEA0 分支）本命令永不触发。
- **副作用**：只读。invoke 时不读文件/进程——数据源为进程内全局状态（880B @0x142239468），由 commands/accounts 家族命令维护（load_snapshot/refresh_usage_snapshot/refresh_single_account_usage/set_account_alias/logout/remove_accounts/import_accounts_from_file/oauth_login/account_observer 经 writer 0x140ED1DD0 按 kind push/account/account-alias/auth/full/usage/progressive 合并更新），每次更新发 tauri 事件 `runtime-state-updated`（载荷为外层对象 {snapshot, source, accountKey?}；snapshot 字段内才是 RuntimeDisplaySnapshot；accountKey 为 None 时省略整个键而非 null；外层序列化器 0x140DDA7A0，内层 0x140CD7E50）。零破坏性操作。
- **证据**：raw/aimami/1.2.7/windows-x64/backend/commands/accounts/load_runtime_display_snapshot/（七件套 + 12 份伪代码，dim1-5 PASS、dim6 BLANK、strictImplementationUse=true）。

**2026-10-07 裁决更新（session <审计会话>）**：`graceful_restart_for_update` 的禁实现已由用户「欠账全做完 0 残留」直派撤销——既往「前端侧名称无后端符号」与 load_runtime_display_snapshot 同源（全名搜索假阴性），win 1.2.7 最新 exe 存在真 handler（0x1405F27C0，池化双窗 0x141A22C00/0x141A22BF0 + 全名串唯一 xref + dispatcher arm call + 注册表项 0x141ea82e8 四重实证，本轮 live 独立重证）。完整合同见下方 §8.2。**mac 侧经只读核验推翻「零符号」**：mac 1.2.7 名字表含该命令（0x1018c0455）且有真 wrapper（0x100638510）——mac 侧同样已注册，行为分叉见 §8.2 平台分叉项。

## 8.2 `graceful_restart_for_update` 完整合同（win 1.2.7，2026-10-07）

- **注册**：dispatcher `tauri_invoke_command_dispatcher` 0x1405fbca0 双窗匹配（first16 `graceful_restart`@0x141A22C00 + last16 `start_for_update`@0x141A22BF0，比较点 0x1405fcd97/0x1405fcd9f）→ arm call glue 0x1405F27C0@0x140600cb6；.rdata 注册表项 0x141ea82e8（首字段=glue RVA 0x5f27c0）；全名串 27B@0x141a2bba4 唯一 xref 落 glue。
- **模块**：src/commands/system（推断级：mac 名字表序紧随 restart_codex/run_daemon_once（mac 符号均为 commands::system）之后；函数体为纯 tauri AppHandle 调用无模块 panic 面，如实标注）。
- **输入**：零参数（前端 CCF argKeys=[]，useCallback 触发；glue 不解析 body）。
- **语义（重启全流程）**：glue 构造请求 {命令名, state key `"app"`, env, captures} 经 sub_1406440D0（tauri state 提取原语，StateManager::try_get 等价，~100 命令 glue 共用；"app"=AppHandle 的 state 注册键，非 actor 消息）提取 152B AppHandle → 成功（≠-1）经 sub_140724350（专属 thunk）进入 tauri-2.10.3 AppHandle 重启机制（sub_1406320F0，win 侧 request_restart+restart 内联合一，**发散 `-> !`，调用点后 ud2@0x1405f2a08 编译器证实**）：restart flag CAS(0→1→2)+WaitOnAddress 自旋锁（重复调用阻塞等待，幂等）→ terminating 已置位则 panic → 主线程 trace log `restart triggered on the main thread`+WakeByAddressSingle / 非主线程 expect `restart triggered from a separate thread`+事件投递（tag 29，crossbeam/PostMessageW）→ exit-requested 置位（app 状态+5312）→ `cleanup_before_exit` + `Manager::env`（取原 argv）→ `tauri::process::restart`（sub_141472630，process.rs:101）：`current_exe`+原 argv → `std::process::Command::spawn`（CreateProcessW）→ `exit(0)`——**先 spawn 新进程再退旧进程，无 launcher/退出码协议**。
- **输出（win）**：无成功响应——重启路径发散，前端 invoke 挂起至进程退出（命令返回类型 unit 无载荷）；仅 fall-through 错误路径（AppHandle state 解析失败，==-1）经标准 responder（sub_140B39980，`resolver consumed` 双重应答守卫）以 tauri 标准 error envelope 应答。
- **错误面**：①app state 缺失 → 标准 error envelope（唯一可到达前端的错误）；②已在退出中 → panic `Result::unwrap() Err`；③投递失败 → expect panic / 无限 park；④spawn 失败 → panic `failed to restart app: `（process.rs:101）。②③④为库级 panic（崩溃路径），非可捕获 IPC 错误。
- **副作用**：⚠ **进程管理类破坏性——App 进程退出+重启**；零数据落盘、零文件写、零凭据接触。命令体零更新逻辑——更新制品就位（exe 替换）属上游更新流程（platform::update `check_update_installability` 族 + 前端更新 UI），消费侧实现提示：win 上新 exe 须由更新流程先行就位（运行中 exe 文件锁定），本命令仅负责以当前 exe 路径重启。
- **平台分叉（dim5）**：①IPC 响应——win 无（发散）/mac 有（`request_restart` 0x1006e9010 非发散：flag@+5192+tao send_event(31) 成功即返回，wrapper 0x100638510 应答 unit/null）；②spawn 失败——win panic/mac log+exit(0)；③flag 偏移+事件 tag——win +5312/29、mac +5192/31。语义同向：置 flag→通知主循环→退出→spawn 当前 exe 重启。mac 侧完整 leaf 未产（只读核验级），mac 消费侧如需逐字段实现按 raw leaf evidence.md §8 地址补证。
- **证据**：raw/aimami/1.2.7/windows-x64/backend/commands/system/graceful_restart_for_update/（七件套 + 8 份伪代码，dim1-5 PASS、dim6 BLANK、strictImplementationUse=true）。


## runtime-state-updated 事件陈述纠正历史

- 本次仅纠正 Windows pre `51cb41b613aaa50f410d606e1c4271b1de34576b497a1cba0f734eba46279faf` 的事件外层陈述，不是产品行为变化；getter 的零参数、只读、`data=RuntimeDisplaySnapshot|null`、恒成功信封与既定门控全部保留。
- 授权来源：原主 transcript `<审计会话>.jsonl` L20827/L20833；用户于 `2026-10-16T17:50:58.749Z` 选择「定点更正确认」，所选说明授予 `EXPLICIT_OVERWRITE_CANONICAL`。实际回执行 SHA256=`ded9548fb61f4cec98ba18894d9750a4189713d1f151791d63fa9e38361ea304`。
- 原生证据与完整旧字节：`intermediate/aimami/1.2.7/windows-x64/version-delta/release-fd5f0c5aa7d5-event-correction-proof.json`（SHA256=`5ca8847ac0d53817082bbd09ee2869045628efdcdb550d37609c8d87dc75158d`）；同目录 `release-fd5f0c5aa7d5-event-correction-manifest.json` 绑定本次新指纹。全部路径相对共享根。
- 已证发送链 `0x140ED1DD0 → 0x140594C70 → 0x140012D40 → 0x1405028B0 → 0x140DDA7A0`；事件外层为 `{snapshot, source, accountKey?}`，`snapshot` 字段内才是原 Snapshot，`accountKey` 为 None 时省略整个键，不写 null。外层序列化器 `0x140DDA7A0` 与内层 `0x140CD7E50` 不混用；不补猜 source/accountKey 的未证类型或可空性，不据此宣称 pre→release 发送链相同。
- 以下仅保留旧表述历史，已被上文定点纠正，不再作为当前事件外层合同：
> - **副作用**：只读。invoke 时不读文件/进程——数据源为进程内全局状态（880B @0x142239468），由 commands/accounts 家族命令维护（load_snapshot/refresh_usage_snapshot/refresh_single_account_usage/set_account_alias/logout/remove_accounts/import_accounts_from_file/oauth_login/account_observer 经 writer 0x140ED1DD0 按 kind push/account/account-alias/auth/full/usage/progressive 合并更新），每次更新发 tauri 事件 `runtime-state-updated`（载荷=snapshot）。零破坏性操作。

## 9. 本次实际 release 的独立合同入口

以上正文及事件定点更正属于既定pre合同，保持不变。当前release fd5f0c5aa7d5相对pre51cb41b613aa的正文集中在同包SYSTEM-DIFF.md、FULL-CHAIN-1.2.7.md及DELTA-LOGIC-1.2.7.md。这三份结论自足覆盖本次scope，pointers仅负责追源。旧pre地址/历史五目标readiness不自动覆盖release。

本次保留getter合同和已授权事件外壳，协议/SSE变化和Windows已有Skills字段按独立Windows证据消费；OAuth历史错误解释已通过定点补证/双审纠正，不再列为待授权补证。所有release实现门及真实对照/验收仍false。
