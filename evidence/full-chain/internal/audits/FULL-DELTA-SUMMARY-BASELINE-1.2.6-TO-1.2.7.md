# FULL-DELTA-SUMMARY-BASELINE-1.2.6-TO-1.2.7.md

**Product**: AiMaMi | **Version span**: 1.2.6 → 1.2.7-release | **Platforms**: macOS arm64 + Windows x64
**Generated**: 2026-10-27

> 目标构建：macOS arm64 1.2.7-release `f019dbc8e267`（68,357,552 B）｜Windows x64 1.2.7-release `fd5f0c5aa7d5`（34,981,888 B）。
> 中间构建（1.2.7-pre，版本字符串仍 1.2.6）：mac `ac235ae0171a`（71,204,992 B）｜win `51cb41b613aa`（37,413,376 B）。基线：1.2.6（mac `e6e7cba4798d`）。1.2.6→1.2.7-release 全量 = 1.2.6→pre 变更面 + pre→release 增量面的并集，两个方向不混为一轮。
> 生成日期：2026-10-27。
> 证据面覆盖（`intermediate/aimami/1.2.7/evidence-supplement/supplement-manifest.jsonl` 实测）：manifest 147 行；57 个证据点（distinct point_id）；verdict 分布 covered 106 / blocked 31 / partial 4 / partially_covered 2 / uncovered 4；批次分布 mac-pre 47 / mac-release 24 / win-pre 23 / win-release 23 / frontend 10 / fixup-release 8 / mac-pre-fixup2 12。blocked 31 行为 append-only 历史记录（对应 18 点 mac-pre 侧）；环境性 blocked 已清零——2026-10-27 解除 6 点 7 条（PROTO-23 双条目 / SK1 / SK2 / SK3 / RT-09 / ACC-12，mac 侧环境恢复后补证；其中 SK2/SK3 解除形态 = pre 侧实证不存在、release 新增实证），2026-10-28 经 mac 侧实例（mac-pre-fixup2 批次）解除剩余 12 点：ACC-06、ACC-07、ACC-09、PROTO-22、PROTO-24、PROTO-27、RT-05、RT-06、T1、T2、T3、W1（W1 为 leaf 补登）。按逐点最新行计 covered 52 / partial 2（SK6、T3）/ uncovered 3（ACC-09、SK2、SK3，均为 pre 侧实证不存在类事实，非环境阻塞）；残留缺口均为真实 partial/uncovered，见第 6 章。
> 伪代码载体：`raw/aimami/1.2.7/macos-arm64/backend/` 实测 392 个 .c（按文件头 source 行分辨构建：release `f019dbc8e267` 328 个 / pre `ac235ae0171a` 64 个）。
> 范围：voice / audio / capture / runtime-settings / trigger-listener 全程 out-of-scope。

## 目录

- [1. 总览与统计](#1-总览与统计)
- [2. 逐模块详细逻辑](#2-逐模块详细逻辑)
  - [2.1 relay-anthropic-stream](#21-relay-anthropic-stream)
  - [2.2 relay-anthropic-aggregate](#22-relay-anthropic-aggregate)
  - [2.3 relay-anthropic-request](#23-relay-anthropic-request)
  - [2.4 relay-protocol-pre](#24-relay-protocol-pre)
  - [2.5 relay-probe-upstream-url](#25-relay-probe-upstream-url)
  - [2.6 router-catalog-config](#26-router-catalog-config)
  - [2.7 router-no-account-pre](#27-router-no-account-pre)
  - [2.8 accounts](#28-accounts)
  - [2.9 skills](#29-skills)
  - [2.10 threads-sessions](#210-threads-sessions)
  - [2.11 anthropic-trace](#211-anthropic-trace)
  - [2.12 runinner-闭包超大体分块重建](#212-runinner-闭包超大体分块重建)
- [3. 平台差异（mac vs win 行为分叉清单）](#3-平台差异mac-vs-win-行为分叉清单)
- [4. 坑清单汇总](#4-坑清单汇总)
- [5. 证据点结论总表](#5-证据点结论总表)
- [6. 证据面缺口](#6-证据面缺口)

---

## 1. 总览与统计

> 覆盖：双平台 SYSTEM-DIFF 合并、BACKEND-DELTA-1.2.6-TO-1.2.7.md 主线、backend-symbol-body-diff（同名函数体 diff 筛查）、four-angle A/B/C/D 分类、dto-fieldlevel（DTO 字段级）、contract-tables / interface-report 合同面、mac/win 行为差异清单（含 win strip 定位差异、架构差异）。
> 比较对象（四份构建，SHA12）：
> - macOS arm64：pre `ac235ae0171a`（71,204,992 B）→ release `f019dbc8e267`（68,357,552 B）
> - Windows x64：pre `51cb41b613aa`（37,413,376 B）→ release `fd5f0c5aa7d5`（34,981,888 B）
> - 1.2.6 → 1.2.7 维度以 1.2.7 pre（测试包，版本字符串仍 1.2.6）为最初锚点，pre→release 增量双平台各自独立实证；1.2.6→1.2.7-release 全量 = 1.2.6→pre 变更面 + pre→release 增量面的并集。
> voice/audio/capture/runtime-settings/trigger-listener 全片 out-of-scope。


### 变更面（1.2.6 → 1.2.7-release）

**前端 IPC / 控制流（双平台一致）**——证据 `intermediate/aimami/1.2.7/version-delta/ipc-command-diff.json`、`{macos-arm64,windows-x64}/version-delta/frontend-command-diff.json`、`frontend-ccf-diff.json`：

- IPC 命令 134 → 147：**新增 20、删除 7、参数漂移 1**。
  - 新增 20：`get_account_reset_credits`、`get_account_reset_credit_history`、`set_account_alias`、`get_usage_refresh_all_accounts`、`set_usage_refresh_all_accounts`、`load_runtime_display_snapshot`、`clean_catalog_ghost_threads`、`clean_global_state_tmp_files`、`clean_missing_rollout_rows`、`clean_orphan_rollouts`、`inspect_session_index_health`、`export_sessions_batch`、`export_thread_statistics`、`load_session_messages`、`run_codex_router_diagnostics`、`fix_codex_router_issue`、`load_dashboard_analytics`、`set_dashboard_analytics_active`、`load_thread_analytics`、`load_thread_analytics_detail`。
  - 删除 7：`get_codex_router_auth_readiness`、`load_change_analytics`、`load_session_analytics`、`load_token_analytics`、`load_tool_analytics`、`load_usage_analytics`、`set_codex_no_account_slots`。
  - 参数漂移 1：`load_quota_history` 增 `range` 参数（`{accountKey}` → `{accountKey, range}`；后端 `core::quota_history::load_history_range`，mac 体 2676 B / win owner `0x140ec7a00` 2573 B）。
- CCF（前端控制流命令提取）134 → 160：+33/−7；59 个既有命令控制流变化 + 65 条新命令链；3 条 voice 新增归入 out-of-scope 不计入后端优先级。
- CCF 补充面（不在 147 内）：6+1 条后端双版本既有（`get_or_create_remote_device_secret`、`open_macos_privacy_pane`、`quit_keeping_router`、`quit_after_closing_router`、`test_relay_draft_stream`、`test_relay_provider_stream`、`import_remote_device_secret_if_empty`）；`custom_instructions_entry_enabled`、`recharge_entry_enabled` 无后端符号（维持禁实现）；`graceful_restart_for_update` 已定位后端（win glue `0x1405F27C0` + mac wrapper `0x100638510`，平台分叉见「平台差异」章）。
- **双平台前端 bundle 字节级同哈希**（同一前端构建，仅 index.html 平台差异）→ 前端 IPC diff 即全平台 diff。证据 `four-angle-b-frontend-contracts.json#/cross_platform_note`。

**后端符号面（mac，符号未剥离）**——证据 `version-delta/mac-symbol-diff.json`、`BASELINE-DIFF-1.2.6-TO-1.2.7.md` §2：

- codexmate 函数总量 4366 → 5318（+952）；规范化符号 diff：**新增 1632 / 删除 841 / 同名 2449**。
- 「???」归属桶 +1040/−680 为 std `drop_in_place`/serde glue 模板实例（monomorphization 噪声），非业务函数。
- 新增 Top 模块：`core/relay/translator` +85（Anthropic V1）、`core/relay/codex_thread_visibility` +47、`core/analytics/*` +87（parser 42/threads 15/index 14/reader 9/aggregate 7）、`anthropic_{trace+27,reasoning+6,continuation+5,history+2}`、`codex_diagnostic` +23、`relay/manager` +12、`router_transition` +4、`codex_catalog` +16、`native_catalog` +13、`native_repair_catalog` +7、`config_takeover` +7、`platform/paths/CodexPaths` +6、`core/sessions/{health+12,history+11,export+10,worktree+5,detail+3}`、`codex_app_server` +6、account_reset_credits 四层子系统全新、account_observer/account_observation/usage_refresh 全新、`relay/keychain/revisions` +13、`response_item_id_compat` +8、`core/mcp` +3、`quota_history::load_history_range` +1。
- 删除主面：`router_unlock_auth` −17（29→14 readiness 收缩）、`translator` −14（旧 OpenAI-only 路径）、`codex_catalog` −14、`codex_thread_visibility` −14、`codex_diagnostic` −10、`core/session_analytics` 8 fns 全删、`commands/voice_runtime` 6 符号移位（oos 不追）、`core/sessions.rs` 拆子模块（文件级重组，函数多数改名保留）。

**同名函数体 diff（红线32，mac）**——证据 `macos-arm64/version-delta/backend-symbol-body-diff.json`、`samename-callee-diff-1.2.6-to-1.2.7.json`：

- bb/size ≥2x 漂移候选 83 → **43 个真实业务 CHANGED + 40 个模板 glue**；稳定面 2x 复核 44 个 flag 逐条核验全为 serde Deserialize/drop_in_place 模板实例，业务 0 个。
- 同名 2449 终局（callee 集合 + 体字节双线）：**1627 证实未变 + 779 体级 CHANGED**（725 非 voice + 54 voice oos）。verdict 细分：`UNCHANGED_CALLEE_IDENTICAL` 1570、`UNCHANGED_BYTE_IDENTICAL_MODULO_RELOC` 57、`CHANGED_CALLEE_SET` 463、`CHANGED_BODY_BYTES_DIFFER` 231、`CHANGED_VARIANT_SET_OR_BODY` 33、`CHANGED_SIZE_DIFFERS_GLUE_ONLY_CALLEE_RESIDUE` 51、`CHANGED_CALLEE_AND_BYTES` 1。
- 43 条 drift_real 的 callee/byte 补充线：41/43 亦呈 callee 或变体级变化，2 例 callee 集合一致（体级 bb/size 已证变）。
- 体级漂移 Top：`capture_switch_rollback_state` bb216→462/sz4309→8632；`openai_chat_to_anthropic_request` bb202→508/sz6945→13211；`patch_convergence_rollout_target` bb58→151；`verify_convergence_rollout_targets` bb24→122；`AnthropicDirectToResponsesStream::feed_line` bb25→107；`load_usage_only_runtime_snapshot` bb81→357；`check_thread_provider_consistency_with_cache` bb29→113；`read_cleanup_backup` bb58→105；`debug_bundle::add_text` bb6→212；`codex_config::update_text` bb40→122；`bootstrap_cache::load` bb21→107；`live_auth_state` bb14→42；`proxy_server::summarize_upstream_error` bb25→51；`anthropic_reasoning::model_matches_family` bb20→63；`auth::deserialize_optional_timestamp` bb52→117；`request_user_quit` bb15→56；`run::{{closure}}` sz412→19374。

**后端面（win，二进制 stripped）**——证据 `version-delta/win-symbol-diff-1.2.6-to-1.2.7.json`、`win-src-path-diff.json`、`windows-x64/version-delta/win-body-match-1.2.6-to-1.2.7.json`：

- 函数总量 1.2.6 = 106,272 → 1.2.7 = 112,715；**命名函数仅 167**（WinAPI import/aws-lc 回调），符号级同名映射不可行。
- 命名面：added_named 54 / removed_named 102 / common_exact_name 8,199 / common_named_stems 246（named_stems 347→300）。
- 体级匹配（reloc-masked body hash，替代同名线）：**84,431/106,272 = 79.45% 体级一致（modulo 重定位）**；unmatched 1.2.6-only 21,841 / 1.2.7-only 28,284；代码字节 23.7 MB → 25.5 MB，unmatched 字节占比 46.7%。交叉核验：25/25 core 对应函数落在 unmatched 1.2.7 侧；558 个 census 目标中 326 在 unmatched（另 232 体级未变，census 目标为变更面锚点邻域、非全部自身变化）。
- src 路径 +27/−8：新增 `commands/{account_alias,account_observer,account_reset_credits,sessions}.rs`、`core/analytics/{aggregate,index,reader,parser/tools}.rs`、`core/relay/{codex_catalog,codex_thread_visibility_history,codex_thread_visibility_model_fallback,http_client,keychain/revisions,models,native_catalog,proxy_access,proxy_stream,transition_journal}.rs`、`core/relay/translator/{anthropic_search,anthropic_tools,chat_content}.rs`、`core/repository/usage_refresh.rs`、`core/sessions/{detail,health,worktree}.rs`、`core/mcp.rs`、`core/quota_history.rs`——与 mac 模块面完全对应；移除 8 个均为文件级重组（translator.rs→子目录、storage.rs→子目录、sessions.rs→子目录、platform/proxy.rs 等），非功能删除。
- 深提取：558 目标 census + 176 份 live decompile（0 截断 0 失败；2 个 反编译 null 体 `0x140b0ffd0`/`0x140b11830` 为同尺寸 3721B/113bb/26cal 疑似 ICF 孪生，如实记录不留桩）。

**DTO / 字段级合同面**——证据 `macos-arm64/version-delta/dto-fieldlevel-mac.md`、`windows-x64/version-delta/dto-fieldlevel-win.md`、`codexpaths-interface-report-win.json`：

- accounts：`ResetCredit{id,expiresAt}` / `ResetCreditGrant{id,occurredAt}` / `ResetCreditsPayload{credits}` / `ResetCreditHistoryPayload{events,nextCursor}`（serde Serialize impl `0x100720d90`/`0x100720ea0`/`0x100720fb0`/`0x100721090`）；前端 camelCase ↔ 上游 snake_case（`events`/`next_cursor`/`occurred_at`/`kind`）双合同。
- threads：`CodexSession` 26 字段全 schema（Serialize `0x1003bf5c0`；`id, threadName, updatedAt, fileSize, filePath, projectName, projectPath, parentSessionId, depth, agentNickname, agentRole, isArchived, excerpt, projectPathMissing, isConversationThread, rolloutMissing, worktreeMigration, displayName, preview, tokensUsed, model, reasoningEffort, memoryMode, historyMode, projectId, gitBranch`）；`export_sessions_batch` jsonl 行 = CodexSession JSON。
- router：`FixResult{fixedIds,failedIds,details}` / `DiagnosticItem{label,detail,fixable}` / `DiagnosticReport{items,hasIssues,transitionInFlight}` / `DiagnosticRepairOutcome` enum（判别字 u32，≠2 含 `ReconciledRouterTarget`）；**fix_issue 23 键 → 23 handler 全分派表**（`fix_issue`@`0x10077B370` bb99，XOR/xmmword 常量池解码）。
- engine：`CodexPaths` 31 字段布局（mac `from_home`@`0x100b3f770` ↔ win `0x1401B9830` 1:1）、state_db 四级解析（`CODEX_SQLITE_HOME`→config `sqlite_home`→`state_*.sqlite` 数字茎扫描→`state_5.sqlite` 兜底）。
- protocol：`anthropic-version: 2023-06-01`（+`x-api-key`、`anthropic-beta: inline-tools-2026-09-15`）、模型族表（`sonnet-5-5`/`opus-5`/`opus-5-5`/`fable-5`/`fable-5-1`/`mythos-5`/`mythos-5-1`/`opus-4-8`）、SSE 六事件全集 + Responses 事件集 + 错误 envelope——双平台串池抽查全 PASS。
- skills（pre→release 增量）：`InstalledSkillSummary` 8 → 11 键，新增 `managed`/`source`/`enabled`；`AccountSummary` 仍 25 键、`ExportedAccount` 仍 14 键含 auth；`PlanType` 9 → 11（+`go`/`pro500`，内部 ordinal 非 IPC 整数）。
- 既有 DTO 无删除性字段漂移记录。

**pre→release 增量面（mac `ac235ae0171a`→`f019dbc8e267`）**——证据 `audits/macos-1.2.7-version-delta/SYSTEM-DIFF.md`：

- 前端资源 39→39（34 同名对、5 新增/5 移除；3 对字节相同、12 对仅构建 hash 变动、19 对内容变化）；wrapper 147→109（移除 38 全属排除面）；静态调用点 178→125 行、提取命令名 142→103。
- Skills：DTO 8→11 键；managed/app-server 库存按 canonical SKILL.md 路径合并；`remove_skill` 新增绝对 id 只读拒绝；warnings 为空才更新缓存。
- Accounts：`PlanType` +`go`/`pro500`；OAuth 两项旧误判撤销（无「取消启动后三次重试」、无「新增保存凭据校验」——pre `0x1007c1350` 已有）。
- Threads：`line_is_unusable_reasoning_response_item`@`0x1004b0390` 经 helper `0x1004f8b60` 新增 `ccswitch-anthropic-thinking-v1:` 前缀过滤；worktree 检测/fork 内联不删除；摘要校验为既有 SHA-256 外提。
- Protocol：116 个旧 Anthropic 命名空间符号消失，请求/响应/SSE 改由独立库 `cc_switch_anthropic`（148 函数）处理；`prepare_request` HTTP 前拒绝旧加密 reasoning 与 compaction 族；`[1m]` 后缀大小写不敏感移除；SSE 新状态机严格化；错误敏感片段先 `[REDACTED]` 再脱敏。
- Router/engine：`catalog_db_path` 改持有者筛选（谓词 `0x1008d30c0`）；MCP 写前 `validated_mcp_config`/`parse_mcp_document` 行词法守卫；`hex_digest` 固定 32B 泛化 slice（调用点仍传 32）。

**pre→release 增量面（win `51cb41b613aa`→`fd5f0c5aa7d5`）**——证据 `audits/windows-1.2.7-version-delta/SYSTEM-DIFF.md`：

- Accounts/OAuth：`PlanType` 9→11；refresh User-Agent `AiMaMi/1.2.6`→`AiMaMi/1.2.7`（15 秒时限保留）；启动后核验链 pre `0x14042f320→0x14042de60→0x140ec8db0→0x140d05b20` → release `0x1405ced90→0x1405cdef0→0x140367780→0x140a4dbb0`；两条 82 字节错误串双版本逐字节相同（`SWITCH_REGISTRY_VERIFY_FAILED: …`/`SWITCH_AUTH_VERIFY_FAILED: …`）。
- Runtime display：`load_runtime_display_snapshot` 事件 wire 为 `{snapshot, source, accountKey?}`（accountKey=None 整键省略）；getter 零参数只读。
- Protocol：HTTP 前拒绝 compaction 族、capabilities/effort/thinking 分校验、`allowed_tools` 不可保留即拒绝、`text.format=json_schema` 能力对应、post-normalization；SSE 严格化对照表（非法 UTF-8→`invalid_utf8`、EOF→`stream_truncated`、message_start 唯一、index 非负且已登记、block_stop 延迟收口、pause_turn→failed/invalid_response、成功白名单 `end_turn/tool_use/stop_sequence`）。
- Catalog/MCP/process/manager：serializer 外提不代表新增磁盘写；catalog 消费合同 30 分片/210 唯一责任记录闭合；provider 导入清理 revision guard（byte+80）语义定点裁决。
- Skills：**win pre 已有 11 字段与外部条目只读删除保护**；两版 `skills/list.forceReload=false`（与 mac 分叉，见「平台差异」章）。

**删除面（1.2.6→1.2.7，已证实）**：`core::session_analytics` 8 fns 全删 → 5 条旧 analytics IPC；`router_unlock_auth` 29→14 → `get_codex_router_auth_readiness` IPC 删除；`set_codex_no_account_slots` 收编（`restore_no_account_model_threads` + `validate_legacy_no_account_aliases`）；translator 旧 OpenAI-only 路径 −14。

**改名面**：`get_codex_router_auth_readiness` → `run_codex_router_diagnostics`+`fix_codex_router_issue`；5 条旧 analytics → 新两维 5 命令；`perform_switch_payload` → `perform_switch_payload_with_restart`；`session_analytics::compute_*`（8）→ `analytics::{index,parser,reader,threads,aggregate}` 全家；`core/sessions.rs`→`core/sessions/{health,export,detail,history,worktree}.rs`；`core/relay/translator.rs`→`translator/` 子目录；`core/relay/storage.rs`→`storage/` 子目录；`core/session_analytics`→`core/analytics`（124 fns）。

### 真实逻辑

**命令注册与分派对账（mac release，当前真实状态）**——证据 `audits/macos-1.2.7-version-delta/SYSTEM-DIFF.md` §2、伪代码 `raw/aimami/1.2.7/macos-arm64/backend/remove_skill.c`（dispatcher 闭包 `0x100701c90`）：

- 当前 dispatcher `run::{{closure}}`@`0x1006eac40` 独立证明 **112 个注册名 = 105 个分离 handler + 7 个 dispatcher 内联 handler**，未解 0。
- 前端观察集合：109 wrapper、103 个 CCF 提取名，交集 94、并集 118。真实 App 命令 = 103 − 2（`custom_instructions_entry_enabled`/`recharge_entry_enabled` 是 localStorage 读取键的 CCF 误报）+ 1（`clean` 被 CCF 漏提但页面调用与注册均在）= **102**，缺 handler 0。
- 并集 118 分解：111 App 注册名 + 5 个 unused wrapper（`apply_custom_instruction`、`clear_custom_instruction_block`、`load_custom_instruction_state`、`preview_custom_instruction_apply`、`rollback_custom_instruction`——未注册且无实际调用）+ 2 localStorage 误报；并集外另有 native-only `diagnose_codex_router`。
- 15 个 wrapper-only = clean（真实调用漏提）+ 9 已注册未观察到页面调用 + 5 unused；10 个「已注册未观察页面调用」保留边界，不把已注册升级为行为认证。

**四角度分类语义与计数**——证据 `{macos-arm64,windows-x64}/version-delta/four-angle-*.json`：

- 角度 A（后端函数普查）：mac 全 IDA 41,974 函数中 codexmate 归属 5,318（`commands` 640 / `core` 3,718 / `run` 761 / `platform` 192 / 其他）；release 侧 40,277 函数 EA/完整名唯一无重无缺。win 112,715 函数中命名仅 167（stripped），delta 目标 census 558 + 锚点归属 30。
- 角度 B（前端合同）：mac/win 均 147 IPC 唯一命令；mac 侧 release 补充为 109 wrapper/103 CCF/交 94/并 118（纠错后 102）。
- 角度 C（非命令业务孤儿）：mac 非命令业务函数 1,822 → 覆盖桶：基线未变迁移 775、delta decomp 244、drift 体变 39、fullchain 模块 665、未匹配合计 99（business_main 73 + closures 7 + 新 DTO serde glue 19）；25 个新函数簇全部完成深逆归零。win 镜像 25 簇 + 112 个语义候选，经串池扫（32,067 串，23 模块路径关键词两跳 DataRefsTo 定位 owner）census 级闭合。
- 角度 D（四分类似然调度：already_in_canonical / local_outtake / different_machine_owner / truly_undone）：mac 237 项终局 **209/28/0/0**；win 182 项终局 **154/28/0/0**。两平台 truly_undone 均已归零；1.2.6 与 1.2.7 的 D 宇宙不同（全量函数级 vs delta 目标集），计数只比归宿不比大小。

**fix_issue 分派表与键集语义**——证据 `dto-fieldlevel-mac.md` §4.2、`raw/aimami/1.2.7/windows-x64/relay/codex_diagnostic/_shared-fix-dispatcher-sub_140f58a10/`（4 份 case 表）：

- `fix_issue`@`0x10077B370`（bb99）：先 `fix_requires_quiet_window(key)`（force 旁路），再 `switch(key.len)` + 逐字节比对分派 23 键 → 23 handler（`config_stale→fix_config_stale`、`auth_integrity→fix_auth_integrity`、`residual_cache→fix_residual_cache`、`db_orphan_providers`/`rollout_orphan_providers` 两键共 `fix_orphan_thread_providers` 等）。
- 键集终局：1.2.6 fix 键 24 → 1.2.7 fix 键 **23（收缩 1）**：case 39 `native_off_invalid_openai_thread_models` 修复臂双平台删除、键降级 CHECK-only；`router_recovery_record` 为 CHECK-only 新增键、不入 fix 分派。**mac 23 键 == win 23 键 1:1**（win 分派器 `sub_140F58A10` 字节级重建实证）。

**体级 diff 判定方法（双平台不对称）**：

- mac（有符号）：同名函数走 callee 集合 + 体字节双线（`samename-callee-diff-1.2.6-to-1.2.7.json`，verdict 8 类）；≥2x 漂移走 bb/size 筛查。
- win（stripped）：同名映射不可行 → 全二进制逐函数 reloc-masked body hash 匹配（带 xref 指令尾部 min(4,len−1) 字节清零掩码 call/jmp rel32、rip-relative disp32；非 xref 指令全字节参与）。体级一致（modulo 重定位）⇒ call 指令结构一致（callee 集合等价），比同名 callee 线更强。

**合同表（contract tables）与接口报告**：`load_quota_history`/`reveal_relay_api_key` 两条 local_outtake 已恢复完整函数体（双 bundle `interface-report.json` status=PASS：`load_history_range` owner win `0x140ec7a00` 2573B / mac `0x100abde30` 2676B；reveal wrapper/核/ensure 链双平台已记录；mac 侧另含 `clean_orphan_rollouts`、`native_catalog::revision`）。独立 `contract-tables` 制品未落盘，等价字段级合同以 `dto-fieldlevel-{mac,win}.md` 与 audits `interface-report.json` 为准。未变化面经 `migration-matrix.json` 126 条迁移引用自 1.2.6 基线，不重跑。

### 坑（⚠）

1. **「103 个 CCF 命令名」≠真实 IPC 数**：含 2 个 localStorage 读取键误报（`custom_instructions_entry_enabled`/`recharge_entry_enabled`）、漏提 `clean`；纠错后真实观察命令为 102。证据 mac SYSTEM-DIFF §2。
2. **前端资源重分包 ≠ 功能删除**：release 39 资源中 12 对仅构建 hash 引用变动；wrapper 147→109 的 38 个移除全属排除面。证据 mac SYSTEM-DIFF §2。
3. **同名 ≠ 未变**：同名 2449 中 779 个体级 CHANGED（callee/byte 双线终局）；bb/size ≥2x 筛查只拦膨胀，收缩与 callee-only 变化会漏网——43 个 drift_real 之外的变化面由 callee 线补出。证据 `samename-callee-diff-1.2.6-to-1.2.7.json`。
4. **callee 差集受 IDB 分析状态污染**：两 IDB 分析完成度差异会让每行出现相同「新 callee」伪影；callee 差集只作 directional 参考，判定以 bb/size + 体字节为准。证据 `DELTA-INVENTORY-1.2.6-TO-1.2.7.md` §2.2。
5. **二进制体积下降 ≠ 功能删除**：mac release 68.4 MB < pre 71.2 MB、win release 35.0 MB < pre 37.4 MB，均为重分包/内联/glue 噪声；功能判定只以符号/体级/注册证据为准。证据双 SYSTEM-DIFF §1。
6. **win stripped 定位差异**：命名函数仅 167/112,715，`added_named 54` 系统性低估真实新增（多数业务体仍是 `sub_*`）；改名检测只能靠「stem 出现/消失对 + focus-area 语义」，不可大规模自动映射；2 个 反编译 null 体为疑似 ICF 折叠孪生（同尺寸同 bb 同 callee 数），不是分析失败。证据 `win-symbol-diff-1.2.6-to-1.2.7.json`、`win-symbol-body-diff.json#/counts`。
7. **「???」归属桶 +1040/−680 是 glue 噪声**：std `drop_in_place`/serde 模板实例，parser 未解析出 codexmate 前缀，不得计入业务增删。证据 `DELTA-INVENTORY` §4。
8. **fix 键集别当超集读**：终局是 24→23 收缩（case 39 修复臂删除）+ CHECK 键 +1（`router_recovery_record`）；把 CHECK-only 键并入 fix 表会高估修复面。证据 `_shared-fix-dispatcher-sub_140f58a10/` case 表。
9. **字面量引用以二进制实串为准**：「Restored auth.json does not match」实为格式串 `Restored file does not match captured state:`；「Anthropic server continuation limit reached」实为 `Anthropic server continuation rejected by upstream (HTTP …)`/`… failed (…` 族。证据 `BACKEND-DELTA-1.2.6-TO-1.2.7.md` §5.5、`dto-fieldlevel-mac.md` §2。
10. **provider 导入清理的 revision guard 语义**：最终 commit 前包装器把本次导入产生的 88B guard 条目 byte+80 置 1（抑制条件删除）；state commit out tag=−1 为成功支保持 1，非成功支才置 0 并销毁 guard buffer；仅 byte+80=false 才按保存路径与文件 identity 尝试删除新 revision，identity 不等拒删、删除失败只日志。**内存 drop 不是磁盘回滚**。证据 win SYSTEM-DIFF「Provider导入清理定点裁决」。
11. **`handle_event` 全转移表未逐枚举**：Anthropic 流协议为行为合同级闭合（win `0x140e38370` 50168B/1643bb 已记录），逐转移枚举未做，不标 accepted_unknown 也不得声称逐转移认证。
12. **维持禁实现**：`custom_instructions_entry_enabled`/`recharge_entry_enabled` 注册级零后端实证。`clean_orphan_rollouts` 删除白名单匹配条件未逐行核（实现前须定向复核）。win HTTP 客户端栈（TLS/代理链）专项差异未逆，维持 Unknown。证据 `BASELINE-DIFF` §9、`COVERAGE-FINAL-1.2.7.md` §5。
13. **注册对账只限当前 release 名字→分派映射**：112 注册完整性 ≠ 112 个命令均完成全文行为认证；10 个未观察页面调用的注册命令不得升级为行为已证。证据 mac SYSTEM-DIFF §2/§8。

### 证据点结论

本章为「总览与统计」章节，不独占 PROTO/RT/ACC/SK/T/W1/E/R 业务编号点（点级结论归各模块章节）。本章承载的跨切面证据账本汇总（`intermediate/aimami/1.2.7/evidence-supplement/supplement-manifest.jsonl`，147 行）：

- 按 批次：mac-pre 47 / mac-release 24 / win-pre 23 / win-release 23 / frontend 10 / fixup-release 8 / mac-pre-fixup2 12。
- 按 verdict：covered 106 / blocked 31 / partial 4 / partially_covered 2 / uncovered 4。
- blocked 31 行全部为 mac-pre 批次的 append-only 历史记录（含已解除行）；环境性 blocked 已清零：PROTO-23（双条目）/SK1/SK2/SK3/RT-09/ACC-12 已于 2026-10-27 补证解除（SK2/SK3 解除形态 = pre 侧实证不存在、release 新增实证），剩余 12 点（ACC-06/ACC-07/ACC-09/PROTO-22/PROTO-24/PROTO-27/RT-05/RT-06/T1/T2/T3/W1）已于 2026-10-28 经 mac 侧实例（mac-pre-fixup2 批次）补证解除，W1 为 leaf 补登；残留缺口均为真实 partial/uncovered，见第 6 章。
- frontend 批次 10 点（SK5/SK6/ACC-01/02/03/05/06/07/T2/W1）：covered 8 / partial 2（SK6、W1）。
- 总览级统计本身（IPC 134→147、符号 4366→5318、体级 79.45%、四角度计数）全部有落盘 JSON 实测来源，无 uncovered 项。

---

## 2. 逐模块详细逻辑

> 构建锚点（SHA256 前 12 位）：mac 1.2.6 = `e6e7cba4798d`；mac 1.2.7-pre = `ac235ae0171a`；mac 1.2.7-release = `f019dbc8e267`；win 1.2.7-pre = `51cb41b613aa`；win 1.2.7-release = `fd5f0c5aa7d5`。
> 关键时间线事实：Anthropic V1 协议链在 **1.2.6 → 1.2.7-pre** 引入 codexmate_lib（translator 重写 + 新流类型 + anthropic_* 子模块）；**1.2.7-pre → 1.2.7-release** 时请求/响应/SSE 主链迁入 vendored `cc_switch_anthropic` 库（mac release 侧 pre 的 116 个旧 Anthropic 命名空间符号消失，库函数 148 个单独普查），同时完成 SSE 收紧、inline-tools beta 头新增、ultra- 档前缀新增等 release 增量。两个方向不能混为一轮。

---

### 2.1 relay-anthropic-stream

**Anthropic SSE → Responses 事件流翻译与流式核心**

#### 变更面（1.2.6 → 1.2.7-release）

**1.2.6 → 1.2.7-pre（引入面，证据：BACKEND-DELTA-1.2.6-TO-1.2.7.md §2、backend-symbol-body-diff.json drift_real、mac pre 伪代码）**

- 新增流类型 `AnthropicDirectToResponsesStream`（14 fns：feed_line / handle_event / close_anthropic_block / close_anthropic_tool_block / close_all_blocks / close_pending_text / finish_text_block / emit_terminal_items / ensure_created / fail_with_status / failure_diagnostic / responses_event / enable_server_continuation / with_tool_maps），mac pre 伪代码全量在 `raw/aimami/1.2.7/macos-arm64/backend/codexmate_lib::core::relay::translator::stream::AnthropicDirectToResponsesStream::*.c`（pre `ac235ae0171a`）。
- `feed_line`（SSE 行入口）红线32 体级判定 **CHANGED**：bb 25→107，`AnthropicDirectToResponsesStream::feed_line@0x1002B18E0`（mac pre，backend-symbol-body-diff.json drift_real；release 侧同名体系已迁库，见下）。
- `ChatToResponsesStream::feed_line` CHANGED：bb 23→34（mac pre @0x100291350）。
- translator 旧 OpenAI-only 路径 −14 个函数（BACKEND-DELTA §3 删除面）。
- 新子模块：`anthropic_continuation`（12 fns：Exchange::{resume, stream, with_trace}、Failure::network、enabled 等，mac pre 伪代码已记录）、`anthropic_history`（7 fns）、`anthropic_reasoning`（12 fns）、`anthropic_trace`（mac release 实测 24 函数）、`translator::anthropic_search`（12）、`anthropic_tools`（21）、`chat_content`（2）。

**1.2.7-pre → 1.2.7-release（迁库 + 收紧面，证据：mac/windows SYSTEM-DIFF、evidence-supplement PROTO-01a~09）**

- pre 的 116 个旧 Anthropic 命名空间符号消失；release 的请求/响应/SSE 主链改由 vendored `cc_switch_anthropic` 处理（mac SYSTEM-DIFF §6）。release 侧状态机类型为 `cc_switch_anthropic::proxy::providers::streaming_codex_anthropic` / `transform_codex_anthropic` 下的 `AnthropicToResponsesState` 体系（函数群地址区 0x100c6f000–0x100cb7000，mac release `f019dbc8e267`）。
- release 真流调用链（mac）：vtable `0x101aabe68+24 = 0x100836f70` → `poll_frame@0x100584DA0` → `poll_next@0x10059B160` → SSE 状态机（mac SYSTEM-DIFF §6）。
- SSE 输入/终态合同逐项收紧（双侧实证，详见「真实逻辑」与「坑」）：非法 UTF-8 改增量解码报 `invalid_utf8`；EOF 无 message_stop 报 `stream_truncated`；message_start 唯一性与顺序守卫；content block index 校验；block 收尾推迟到 message_stop；工具参数/思考签名终态校验；终态映射白名单化（仅 end_turn/tool_use/stop_sequence 判 completed）。
- win release 侧流引擎锚点：handle_event 族状态机 `sub_140E38370`（50168B / 1643bb / 81cal，`anthropic_search_incomplete` + `Conflicting Anthropic stop_reason` 双锚）；feed_line 族 `sub_140DC42E0 / sub_140DC5580 / sub_140E5A130`（`Upstream Anthropic stream ended before message_stop` owner 三函数）（win `fd5f0c5aa7d5`，backend-fullchain-win-anthropic-platform.md §1）。

#### 真实逻辑

以下 release 侧逻辑以 vendored cc_switch_anthropic 伪代码/反汇编证据为准（证据文件：evidence-supplement/PROTO-01a~08），pre 侧以 codexmate_lib 伪代码为准（raw backend .c 文件）。

**SSE 增量 UTF-8 解码（PROTO-02）** — `streaming_codex_anthropic::append_anthropic_utf8@0x100CB0B50`（mac release）：把上一块残留的半截字节（pending 缓冲）拼到新 chunk 前，再整体 `str::from_utf8` 校验，三分支：

```
全合法            → 追加全部，返回 Ok(tag 2)
Err 且 error_len=Some（确定非法） → 返回 Err → 调用方 failed_event("Invalid Anthropic SSE UTF-8", "invalid_utf8")
Err 且 error_len=None（尾部可补全）→ 合法前缀进输出，剩余尾部写回 pending 留下一 chunk
EOF 时 pending 非空 → failed_event("Incomplete Anthropic SSE UTF-8", "invalid_utf8")
```

调用方为流驱动 `poll_next@0x10059B160`（mac release，反编译全文 917 行）。win release 等价物 `sub_140FA91E0` + 调用点 `sub_1404AE850`（sse.rs 内嵌源路径实证）。诊断链互证：`anthropic_trace::error_class` 把含 "utf-8" 的错误归类 "utf8"。**pre 行为**：非法字节替换为 U+FFFD、保留可跨 chunk 尾部（win SYSTEM-DIFF §3.4）。

**EOF 终态判定（PROTO-03）** — `poll_next@0x10059B160` EOF 分支（mac release）：

```c
if (!*(v4+929) && !*(v4+710)) {   // +710=已见 message_stop；+929=已按失败收尾
  v85 = rust_alloc(51); qmemcpy(v85, "Upstream Anthropic stream ended before message_stop", 51);
  v87 = rust_alloc(16); qmemcpy(v87, "stream_truncated", 16);
  AnthropicToResponsesState::failed_event(&state, msg, "stream_truncated");
}
```

即终态判定只认 message_stop 事件；message_delta 带的 stop_reason 字段本身不算终态信号。相邻分支：上游 Err(io) → `failed_event(Display(err), "stream_error")`；EOF 且 response 未开始且缓冲构成完整 JSON 文档（`json_document_candidate@0x100CB0E10`）→ aggregate 回放回退（见 relay-anthropic-aggregate 节）。win 等价面 `sub_1404AE850` LABEL_101（双字节旗标 v6+857/v6+710 联合门控）。**pre 行为**：有部分输出时可合成 max_tokens/incomplete（win SYSTEM-DIFF §3.4）。

**事件分派与状态机（release，mac 逐转移枚举已闭合）** — `AnthropicDirectToResponsesStream::handle_event` 逐转移枚举（pre 构建同名体 @0x10029AA60，44022B / 1110bb / 83cal，唯一调用者 feed_line；anthropic-handle-event-interface-report-mac.json 已逐转移枚举完毕）：

- 一级分派按 `event["type"]` 长度：5=error / 12=message_stop / 13=message_start|message_delta / 18=content_block_stop / 19=content_block_start|content_block_delta；其余（含 ping）静默忽略。
- **post-stop 守卫**：stop_reason 已设置后，error/message_stop/message_delta 仍受理；message_start/content_block_start/delta/stop 一律 `fail_with_status("upstream_protocol_error", "Anthropic content arrived after stop_reason")`。
- block 类型长度表：4=text、8=thinking|tool_use、15=server_tool_use、17=redacted_thinking、22=web_search_tool_result；delta 类型：10=text_delta、14=thinking_delta、15=citations_delta|signature_delta、16=input_json_delta。
- 发出的 Responses 事件清单：response.created / output_item.added / content_part.added / output_text.delta / reasoning_summary_part.added / reasoning_summary_text.delta / function_call_arguments.delta / completed / failed / incomplete；`responses_event@0x1002A81B0` 自动注入 `sequence_number` 自增序号。
- id 前缀约定：message_item="msg_"+uuid12、reasoning_item="rs_"+uuid12、function_call="fc_"（碰撞循环）、tool_call 回退="call_"+uuid16、web_search_call="ws_"+uuid。

release 侧对应分派器 `process_anthropic_sse_block@0x100CB6760`（mac release，537 行）：data JSON 解析失败 → protocol_failure("Invalid JSON in Anthropic SSE event", 35)；按 type 名分派同上；未知 type 忽略。

**message_start / 事件顺序守卫（PROTO-04）** — `handle_message_start@0x100CB2750`（mac release）：message_start 必须首个且唯一（state+365 标志位先查后置），`event["message"]` 必须是 JSON 对象（tag 5），id 无 "resp_" 前缀时经 fmt 重排补齐；任一不满足 → `protocol_failure("Invalid or duplicate Anthropic message_start", 44)`。`handle_content_block_start@0x100CB3650` 入口守卫：message_start 未見 → `protocol_failure("Anthropic content arrived before message_start", 46)`。release 无 "Conflicting stop_reason" 文案——stop_reason 为 last-wins 覆盖（`handle_message_delta@0x100CB2630` 提取 `/delta/stop_reason`，仅存在且为 string 时覆盖）。win 等价物 sub_140FA3350 / sub_140FA43F0（状态位偏移同为 +0x16D/+0x16E）。**pre 行为**：较宽松（win SYSTEM-DIFF §3.4）。

**content block index 校验（PROTO-05）** — 三 handler（mac release：block_start@0x100CB3650 / delta@0x100CB2C90 / stop@0x100CB2B90）共同判据：index 必须存在且为**非负整数 JSON number**（tag=2 且无小数部分）；区块登记在 `BTreeMap(state+296)`。

- block_start：index 缺失/非法 → "Anthropic content block is missing its index"(44)；BTreeMap 查重命中 → "Duplicate Anthropic content block index"(39)。
- delta：index 缺失 → "Anthropic delta is missing its content index"(44)；登记树未命中 → "Anthropic delta has no matching content block"(45)；区块已关闭（block+157）/ delta 类型与区块登记类型不匹配（block+159）/ 载荷缺失或非 string → "Invalid Anthropic content delta"(31)。
- block_stop：index 非法 → "Anthropic content_block_stop is missing its index"(49)；已关闭区块重复 stop → "Duplicate Anthropic content_block_stop"(38)；**未知 index 静默空返回**（不报错）。
- 以上全部为 protocol_failure（error.type=invalid_response）。win 等价：sub_140FA43F0 / sub_140FA3900 / sub_140FA37D0（校验文案簇 0x141901af8–0x141901c46）。

**区块收尾推迟到 message_stop（PROTO-06）** — `handle_content_block_stop@0x100CB2B90`（mac release）只置关闭标记（`*(区块+157)=1`），**自身不产生任何 SSE 事件**；`finalize@0x100CB4480`（1321 行）completed 路径遍历 blocks BTreeMap，任一区块未关闭 → `protocol_failure("Anthropic message ended with an open content block", 50)`；全部关闭才逐区块产出 output_item 并调 `codex_responses_sse::response_completed@0x100C83F20`。win：sub_140FA37D0 仅标记关闭；finalize（sub_140FA5770 0x140fa5c42–0x140fa5c78）步长 160 遍历区块查 +0x9D 关闭标志。**pre 行为**：block_stop 立即关闭/发 done；message_stop 尚有 open block 时可补关闭（win SYSTEM-DIFF §3.4）。

**工具调用终态校验（PROTO-07）** — finalize completed 路径（mac release）：工具区块 id（+40）或 name（+64）为空 → `protocol_failure("Invalid Anthropic tool arguments", 32)`；delta 阶段 `input_json_delta` 的 partial_json 逐段累积进区块参数缓冲；终态时 `serde_json::from_trait` 解析累积串，解析失败或结果不是 JSON 对象（tag≠5）→ 同一错误。通过后按工具类型发 `function_call_arguments_done@0x100C86170` / `custom_tool_call_input_done@0x100C85D40`。win 等价链：sub_140FB3230 解析器 + tag 5 校验（0x140fa5d72）→ 错误出口 0x140fa7405。**pre 行为**：参数在旧 block finalizer 中组装，无此校验。

**thinking 签名终态校验（PROTO-08）** — finalize 对 thinking 区块调 `anthropic_history::responses_reasoning_item_from_anthropic_block@0x100C702F0`（mac release，545 行）→ `encode_anthropic_thinking_block@0x100C70110`：block.type=="redacted_thinking" 取 "data" 字段；type=="thinking" 取 "signature" 字段；该字段必须 string 且长度非零，否则返回 None → `protocol_failure("Anthropic thinking block has no signature", 41)`。命中后组装可重放信封：`"ccswitch-anthropic-thinking-v1:" + base64(JSON(block))`（前缀常量经 off_101AC8640→0x1017BE896 核实），reasoning item 含 `encrypted_content`；标志位开启时再插 `{"replay":"ordered_v1","block":<原 block>}`。win：签名字符串 ≥31 字节且前缀全等 "ccswitch-anthropic-thinking-v1:"（xmmword_1418A9420/141866FB0 实证），去前缀 base64 解码 + JSON 解析（sub_140FD56A0）。

**终态映射（PROTO-01a/01b）** — `map_anthropic_stop_reason_to_status@0x100C7DED0`（mac release，decompile 完整；win 等价 sub_140CBF8F0 + 映射 switch 在 sub_140FA5770 反汇编 0x140fa584a–0x140fa59a4）：

| stop_reason | status | reason |
|---|---|---|
| end_turn / tool_use / stop_sequence | completed | — |
| max_tokens | incomplete | max_output_tokens |
| model_context_window_exceeded（29B SSE 双 xmmword 全等比较） | incomplete | max_output_tokens |
| refusal | incomplete | content_filter |
| pause_turn / 未知值 / 缺失（null 指针直接落 default） | **failed** | invalid_response + "Missing or unsupported Anthropic terminal reason"(48) |

finalize 对 incomplete 发 `response.incomplete` SSE（incomplete_details.reason 写入）；对 failed 走 `protocol_failure@0x100CB2330`（`qmemcpy(v11,"invalid_response",16)` → failed_event）。缺失 stop_reason 与未知值汇合到同一 failed 出口（PROTO-01b：`if (a2) {switch…} else {LABEL_13: status="failed"}`）。另有一层规范化 sub_140CBF8F0 把 model_context_window_exceeded 归一为 "context_limit" 供 anthropic_trace 下游使用，与终态判定层的原始字面量比较并存。**pre 行为**：pause_turn 判 completed、缺失/未知 stop_reason 默认 completed（win SYSTEM-DIFF §3.4 逐行对照实证）。

**trace 诊断（anthropic_trace，mac release 实测 24 函数）** — `Trace::{new,event,bytes,finish,attempt,headers,json_usage,json_result,output_item,response_text,response_usage,upstream_error}` + `Inner::emit@0x1005D7560` + `summary@0x1005DB2A0`。summary 字段：block_starts/block_stops/delta_counts/error_class/error_kind/first_byte_ms/last_byte_ms/max_gap_ms/message_stop/usage_omitted/usage_samples——纯诊断/计时/计数字段，不是业务能力。`error_class@0x1005D42F0`：上游错误文本 SIMD 小写化后按序子串分类（"prefill"→assistant_prefill、"effort"→effort、"signature"、"encrypt"→encrypted_state、"without stop_reason"→missing_stop_reason、"unclosed"→open_block、"before message_stop"→missing_message_stop、"utf-8"、"json"、"connection"、"limit"/"budget"，兜底 unclassified/空串 none）；结果写入 trace JSON 的 error_class 键（Trace::upstream_error@0x1005D8A90 / Trace::finish@0x1005DA740 调用）。`record_usage` 兼容双协议 token 字段名（cache_read_input_tokens/cache_creation_input_tokens/cached_input_tokens）。win 等价：`anthropic_trace_classify_error_helper_sys@0x140CBA6C0`。release 伪代码载体：`anthropic_trace::*.c`（13 个文件，release `f019dbc8e267`）。

#### 坑（⚠）

1. **pause_turn 改判 failed，不再自动续传**：release 把 pause_turn 与未知/缺失 stop_reason 一律判 failed（invalid_response）。pre 侧 `anthropic_continuation::Exchange::resume` 的自动续传链（continuation limit 计数、enabled 门、validate_pause 校验，mac pre 伪代码 `Exchange::resume::_{{closure}}.c@0x100877F00`，错误面 "Anthropic server continuation limit reached"(43B) / "Anthropic paused without a supported server search tool"(55B) / "Invalid Anthropic paused content"(32B)，HTTP 502）**不能迁移成 release 现行能力**（mac SYSTEM-DIFF §6 明确："旧 web_search_20250305 与 Exchange::resume 自动续传不能迁移成现行能力"）。消费侧若按 pre 语义实现续传，release 上会直接收到 failed。
2. **stop_reason 字段 ≠ 终态信号**：message_delta 携带 stop_reason 后若 EOF 前没有 message_stop 事件，仍判 stream_truncated；不能凭已有内容推断成功（PROTO-03）。
3. **content_block_stop 静默**：该事件只标记关闭、不发任何 SSE 帧；对未知 index 的 block_stop 是静默空返回而非报错——调试时"没报错"不等于"被处理"（PROTO-05/06）。
4. **thinking 信封前缀有两个版本且不兼容**：release 产出/要求 `ccswitch-anthropic-thinking-v1:` 前缀；旧 `aimami-anthropic-thinking-v1:` 前缀的 reasoning 记录被 prepare_request 在发 HTTP 前直接拒绝（中文提示"此会话包含旧版 AiMaMi Claude 推理记录……请新建会话"，PROTO-10）。跨版本历史不能混用。
5. **字面量冲突已核**：win 分册曾把续传上限错误写成 "Anthropic server continuation limit reached"，win release 二进制实串为 `Anthropic server continuation rejected by upstream (HTTP …)`/`… failed (…` 族（BACKEND-DELTA §5.5 纠正）；而 mac pre 伪代码 0x100878034 处 `qmemcpy(v14,"Anthropic server continuation limit reached",43)` 为 mac pre 实证原文——两个构建各自字面量不同，引用时以对应构建伪代码/实串为准。
6. **win release 无 Rust 符号**：全部定位靠串扫描→xref→enclosing function（stripped 二进制）；win 侧 handle_event 全转移表与 mac 同粒度闭合到事件字面量级（1643bb 状态机体已记录），未逐转移枚举。
7. **错误面全集（release 状态机）**：upstream_protocol_error（content after stop_reason / Conflicting stop_reason / Invalid server message state / tool input not complete JSON object / Search call has no id / Duplicate search call id / Unsupported server tool / Search result has no matching call）、anthropic_continuation_required（"Anthropic search has not returned its result; use an authorized client search tool instead"）、stream_truncated（"message ended with an unclosed content block"）、anthropic_search_incomplete、upstream_error。状态机本身无文件/进程级破坏性副作用（内存状态机 + SSE 帧 + debug_log + trace）。

#### 证据点结论

| 点 | 结论 | 依据 |
|---|---|---|
| PROTO-01a | covered（mac+win release） | 终态映射双平台逐项实证：completed 白名单三项、incomplete 两项映射、pause_turn/未知→failed；map@0x100C7DED0 / sub_140FA5770 |
| PROTO-01b | covered（mac+win release） | 缺失 stop_reason 与未知值同一 failed 出口（invalid_response / 48B 文案），mac `if(a2)…else LABEL_13` + win niche -1 检查 |
| PROTO-02 | covered（mac+win release） | 三分支增量解码器 + EOF 残片双路径 invalid_utf8；append_anthropic_utf8@0x100CB0B50 / sub_140FA91E0 |
| PROTO-03 | covered（mac+win release） | EOF 双旗标门控 → stream_truncated；poll_next@0x10059B160 / sub_1404AE850 LABEL_101 |
| PROTO-04 | covered（mac+win release） | message_start 唯一/对象校验、content 顺序守卫、终态幂等；@0x100CB2750/@0x100CB3650 / sub_140FA3350/sub_140FA43F0 |
| PROTO-05 | covered（mac+win release） | index 非负整数/重复/delta 对不上区块三类校验全部实证 |
| PROTO-06 | covered（mac+win release） | block_stop 只标记；message_stop 全量扫描未关闭区块 → failed |
| PROTO-07 | covered（mac+win release） | id/name 非空 + partial_json 必须解析为 JSON 对象 |
| PROTO-08 | covered（mac+win release） | thinking.signature/redacted_thinking.data 非空 + ccswitch 信封组装/解析双向实证 |

---

### 2.2 relay-anthropic-aggregate

**非流式（aggregate）Anthropic 响应路径**

#### 变更面（1.2.6 → 1.2.7-release）

- 非流式响应校验/回放体系随 V1 链引入（1.2.6→pre），release 收紧：形状/终态/区块逐项校验，失败显式拒绝（PROTO-09，双平台 covered）。
- release 新增 **EOF 聚合回退**：流式 EOF 时若 response 未开始且缓冲构成完整 JSON 文档（`json_document_candidate@0x100CB0E10` 判定），按 aggregate 路径回放——这是 stream_truncated 收紧后的唯一合法兜底（mac release，PROTO-03 证据内含此分支）。
- release 聚合错误簇（win，owner sub_1404597E0）："AiMaMi Anthropic response decode failed" / "conversion failed" / "Invalid Anthropic JSON response" / "Invalid Anthropic response UTF-8" / "decoded response exceeds relay buffer limit"。

#### 真实逻辑

**聚合校验 `validate_message@0x100C790C0`**（mac release，201 行；win 等价 sub_140FFAC90，881B decompile 完整）：

```
消息必须 tag==5 对象；"content" 必须存在且 tag==4 数组
"type" 缺省或 == "message"；"role" 缺省或 == "assistant"
"stop_reason" 存在且为 string → 调 map_anthropic_stop_reason_to_status；
  映射结果 == "failed"（len6 字面量比较）→ Err "Invalid Anthropic message shape or terminal reason"(50)
  —— 即 aggregate 侧 pause_turn/未知/缺失 stop_reason 同样被拒
逐 content block 调 validate_content_block@0x100C79490：
  text/thinking 区块同名载荷字段必须 tag==3 string，否则 Err "Invalid Anthropic text or thinking block"(40)
```

**聚合回放 `responses_sse_events_from_anthropic_message@0x100CB7260`**（mac release，1306 行）：非对象/错误信封 → failed；validate_message 不过 → failed("Invalid Anthropic message shape or terminal reason")；通过则把整则消息按 message_start → content_block_* → message_delta → finalize 顺序**回放进同一个 AnthropicToResponsesState 流式状态机**，产出 Responses SSE 事件序列——聚合路径复用流式状态机而非独立宽松路径。win 侧 sub_140FAA6A0 内嵌同一错误串引用（0x140faa9a2），同构（该函数为 52K 字符截断桩，事件序列细节以 mac 段为准）。

#### 坑（⚠）

1. **聚合不是宽松后门**：release 的 aggregate 复用流式状态机与同一终态映射，stop_reason 映射为 failed 即整则拒绝；不能假设非流式路径接受流式被拒的内容（PROTO-09）。
2. **EOF 聚合回退边界严格**：只有"response 未开始 且 缓冲是完整 JSON 文档"才回退；已经开始产出事件后被截断的流不会静默转成聚合成功（PROTO-03）。

#### 证据点结论

| 点 | 结论 | 依据 |
|---|---|---|
| PROTO-09 | covered（mac+win release） | validate_message 形状/终态/区块逐项校验 + 回放复用同一状态机；@0x100C790C0/@0x100CB7260 / sub_140FFAC90 |

---

### 2.3 relay-anthropic-request

**请求方向翻译、工具/schema/推理策略与转发**

#### 变更面（1.2.6 → 1.2.7-release）

**1.2.6 → 1.2.7-pre（mac，backend-symbol-body-diff.json drift_real + CHANGED_CALLEE_SET 面）**

- `translator::openai_chat_to_anthropic_request` 重写：bb 202→508、sz 6945→13211（mac pre @0x100816DE0，红线32 CHANGED；30 callees，伪代码 80239 字符）。release 同名函数仍存在（mac release @0x100463FB0，range 0x100463fb0–0x100467483 ≈13.5KB，伪代码 `openai_chat_to_anthropic_request.c` 截断头已记录）。
- `responses_to_anthropic_request_with_context`（mac pre @0x100829200，86 callees，21.2 万字符）与 `responses_to_chat_request`（57 callees，25.5 万字符）大装配家族。
- translator 同名体级变化面（mac callee-diff）：responses_to_chat_request / anthropic_to_openai_chat_request / anthropic_to_openai_chat_response / openai_chat_to_anthropic_response / responses_tool_to_anthropic_tool / strip_anthropic_web_search_tools / clean_input_for_anthropic_relay / set_anthropic_thinking_carrier / normalize_anthropic_tool_choice_for_tools / translate_anthropic_message_to_openai 等 25+ 函数 CHANGED（samename-callee-diff-1.2.6-to-1.2.7.json）。
- proxy_server 转发面 CHANGED：try_translate / try_pass_through / try_codex_responses_via_translation（bb 142→387，@0x100848CB0）/ forward_codex_responses_internal / forward_codex_router_responses_internal / summarize_upstream_error（bb 25→51，@0x1008425D0）/ upstream_error_with_reason / expand_aimami_compactions_for_upstream / is_anthropic_thinking_signature_rejection 等。
- 旧 `translator.rs` 单文件路径消失，拆分为子模块结构（双平台一致；win 侧 panic-Location 双命中证实 `anthropic_search.rs`/`anthropic_tools.rs`/`chat_content.rs` 新路径，`anthropic_reasoning.rs`/`anthropic_history.rs` 为底子文件扩展）。

**1.2.7-pre → 1.2.7-release（release 增量）**

- `anthropic-beta: inline-tools-2026-09-15` 请求头新增（PROTO-22，双平台 release 实证；win-pre 双重零命中证实 pre 无）。
- 型号档位表新增 `ultra-` 档前缀（PROTO-24：win-pre 双重零命中；mac release `codex_effort_to_anthropic@0x100897B40` 伪代码 0x100897e51 处 `"ultra-"` 字面量实证）。
- effort 拒绝措辞识别进入 trace error_class 分类（PROTO-23 covered 部分）。
- 请求侧收紧：compaction 类输入 HTTP 前拒绝、allowed_tools 显式拒绝、json_schema 改走 output_config.format、oneOf/anyOf/allOf 发送前归一化、cannot-disable-thinking 报错、签名历史保序/replay 版本混用校验（PROTO-10~15，全部双平台 covered）。
- 上游错误脱敏（[REDACTED]）与 413 归属改写（PROTO-17）；native Responses 托管 web_search 净化扩展到 additional_tools/allowed_tools（PROTO-18）。

#### 真实逻辑

**compaction 类输入 HTTP 前拒绝（PROTO-10）** — 两条入口：

1. `proxy_server::anthropic::request::prepare_request@0x1005D0A30`（mac release，825 行）：扫描 input[] 每项——type=="reasoning" 且 encrypted_content 为 string ≥29B 且前缀 == "aimami-anthropic-thinking-v1:" → 返回 Err（129B 中文："此会话包含旧版 AiMaMi Claude 推理记录，当前版本无法安全续接。请新建会话；原记录不会被修改。"）；type 长度 18 命中 "compaction_summary"/"compaction_trigger" 即拒；"context_compaction" 还要 encrypted_content 存在且非 null 才拒。全部在发 HTTP 之前返回。
2. `forward_codex_router_responses_internal::{{closure}}@0x1004EB1E0`（mac release，975 行）：路由解析返回 native compaction 标记 → log "reject legacy relay compaction model=" + `upstream_error_with_reason(400, "router.native_compaction_required", msg(136B))`，msg="中转模型请使用 ChatGPT 原生上下文压缩；请更新 ChatGPT 并重新打开任务。AiMaMi 不再生成兼容性伪摘要。"——HTTP 400 直接返回，不进上游转发。win 等价：sub_140455600（proxy_server.rs 请求准备层，0x140456df8 日志 + 0x140456e43 错误体 + var_758=0x190=400）。平台差异如实记录：win release 无 "compaction_summary"/"compaction_trigger"/"context_compaction" 同名字面量，拒绝键控在 `/responses/compact` 路由与 encrypted_content 存在性上。

**allowed_tools 显式拒绝（PROTO-11）** — `responses_request_to_anthropic_with_policy@0x100CA7BD0`（mac release，2426 行）行 810–838：

```c
v67 = Value::pointer(req, "/tool_choice/type", 17);
if (v67 && tag==string && len==13 && qword=="allowed_"+"ed_tools") {
    v79 = rust_alloc(82);
    memcpy(v79, &unk_1017C0F5A, 82);  // "Anthropic cannot safely preserve this allowed_tools constraint; it was not relaxed"
    *(v324+8) = 0x8000000000000011; *v324 = 1;  // 显式 Err，不降级不放宽
}
```

可表达集合对照 `map_tool_choice_to_anthropic@0x100CA6DE0`：字符串 "required"→any / "auto"→auto / "none"→none / 未知→默认 auto；对象 type=="function"/"custom" 经 `CodexToolContext::chat_name_for_response_function@0x100C8CBE0` 映射名字；type=="tool_search" 结构化输出。win 等价：sub_141011B00 内 0x1410123d1 读 "/tool_choice/type"，xor 立即数双段比对 "allowed_tools"，命中走 0x14101257D 构造 82B 错误。

**text.format=json_schema → output_config.format（PROTO-12）** — 同函数行 2191–2365（mac release）：读 request.text.format.type——"text" 跳过；"json_schema" 进入结构化输出装配：format 与 schema 都必须为对象；format 键白名单闭包 @0x100CA59E0（只允许 type/name/description/strict/schema，多出键即拒绝）；strict 缺省或简单值；装配 `{"type":"json_schema","schema":<原 schema>}`；能力门 `supports_structured_output@0x100898310`（模型画像 v321+23 位）通过则目标对象不存在时先建 `output_config` 空对象再 `index_or_insert("format",6)` 写入；模型不支持 → Err "Structured output is not supported by this Anthropic model"(58)；其他 format → "Unsupported Responses output format"(35)；text 配置非法 → "Invalid Responses text configuration"(36)。win：output_config 六处 xref 全在 sub_141011B00（0x141013b82 插入、0x1410151d6 查存在、0x141015218 占位空对象），另有 "/output_config/effort" 通道 xref 在 sub_140CBB9A0。

**工具 schema 发送前归一化（PROTO-13）** — 触发器 `normalize_tool_schemas::normalize@0x1005D2150`（mac release）：`index_into_mut("input_schema",12,tool)` 取 schema，仅当含 oneOf/anyOf/allOf 任一键才 clone → 调 `anthropic_schema::tool_input@0x10021EA20` 归一化 → 写回；失败显式 Err（不进 HTTP）。归一化规则：空/缺失 parameters 补默认 `{"type":"object"}`；组合 schema 处理 "$schema"（draft-04）与 "$defs/aimami_input" 重定位（`relocate_local_refs@0x10021F620` 递归遍历 properties/patternProperties/definitions/dependencies/not/if/prefixItems/additionalItems/additionalProperties/unevaluatedProperties/propertyNames/contentSchema 等）；遇未限定作用域的 $recursiveRef/$dynamicRef → Err "Anthropic composed tool schemas with unscoped recursive anchors are not supported"。win 等价：sub_1405A4510（唯一调用点，三连查触发）→ sub_140CD62A0 + 递归 walker sub_140CD71A0（18 处自调用，关键词集含 dependentSchemas/contains/if/then/else/$id/$extends）；input_schema 非对象 → "Anthropic tool input_schema must describe an object"。

**推理策略与型号档位（PROTO-14/24）** — `anthropic_reasoning` 模块（mac release 伪代码已记录）：

- `codex_effort_to_anthropic@0x100897B40`：trim + SIMD 小写化后按长度分派——len3 "low"/"max"、len4 "high"、len5 "xhigh" 或 "ultra"（byteswap 比对 0x756C7472="ultr"+'a'，命中时档前缀字面量 "ultra-" @0x100897E51）、len6 "medium"、len7 "minimal"；随后调 `model_profile` 取模型档位表（(label,len) 对数组）逐项 memcmp 匹配；xhigh 有回退链（查不到 xhigh 档时找 len3 "max" 项），ultra 有 `Iterator::any` 存在性回退。effort 非法 → 上游 prepare_request 报 "Unsupported Anthropic reasoning effort"(38)。
- `model_profile@0x100896E50`：`normalize_model_name` 后 `model_matches_family` 逐族前缀匹配，产出档位结构（off 表指针 + tier 编号 5/4/3 + effort 标签 + 能力布尔位；全不匹配 → tier 2，`*(a1+37)=2`）。`model_matches_family` 红线32 CHANGED bb 20→63（mac pre @0x100781B80；release CHANGED_CALLEE_SET）。
- 三项校验分离（PROTO-14，`responses_request_to_anthropic_with_policy` 行 1289–1614）：effort 小写归一后比对 "off"/"none"/"disabled" → 请求关闭推理；`thinking_cannot_be_disabled(model)` 为真 → Err(81B) "This Anthropic model cannot disable thinking; select a supported reasoning effort"；映射后 tool_choice type=="tool"/"any" 且模型要求自适应 thinking → Err(80B) "Anthropic model requires adaptive thinking and cannot honor a forced tool_choice"。win：0x141015f03 独立标志位（能否关闭）→ 81B 全文五段 xmmword 组装（0x141015f10–0x141015f8e）。
- 型号档位表（win-pre 实证，PROTO-24）：`sub_1401FA2E0@0x1401FA2E0` 逐前缀 starts_with 匹配——sonnet-5-5/fable-5-1/mythos-5-1/opus-5-5/fable-5/mythos-5 → 档5 high（opus-5-5 命中时 medium）；mythos-preview → 档4；opus-5/sonnet-5/opus-4-8/opus-4-7 → 档5；opus-4-6/sonnet-4-6 → 档4；opus-4-5 → 档3；旧名表（sub_1401CB890：3-7-sonnet/sonnet-4/sonnet-4-5/haiku-4-5/opus-4/opus-4-1）→ 档4 medium；全不匹配 → 档2。effort 标签表 "mediumlowhighxhigh"（win-pre 无 ultra，见 pre 差异节）。

**签名历史保序 / 动态工具 replay / namespace 声明先行 / replay 版本混用（PROTO-15）** — anthropic_history 模块函数群（mac release，地址区 0x100c6f000–0x100ca7000）：

- `tool_schema_refs_for_request@0x100C6F8E0`：遍历 request.tools 取每项载体 "aimami_tool_schema"(18) 字段，与 "root_ref_v1"(11) 比较；首项定型后后续项版本不一致 → Err(77B) "Mixed Anthropic tool schema replay versions cannot preserve the signed prefix"。
- `HistoryPlan::validate_placement@0x100C6C520`：首项 role 必须 "user"；其后每个 user 项前驱必须 "assistant" 且非末项时后继有完整 tool-result 回合；违例 → Err(80B) "Incomplete history cannot preserve mid-conversation Anthropic instructions/tools"。
- `HistoryPlan::new@0x100C6C710`：识别 "additional_tools"(16) 动态声明；声明项类型非法或 role=="developer" → "Invalid dynamic Anthropic tool declaration"(42) / "Unsupported dynamic Anthropic tool declaration"。
- `validate_delegation_replay@0x100C6F760`：is_codex_delegation 命中的工具其 "codex_delegation" 字段必须 == "v1"，否则 Err(126B) "This signed Anthropic history predates delegation input support; start a new delegated task. Existing history was not modified"。
- namespace 声明先行：`build_anthropic_tool_context` 先收集声明（`collect_input_declared_tools@0x100C8F050` / `add_namespace_tool@0x100C8B950`）；声明项 type 非 "function"/"custom" → Err(69B) "Unsupported namespace tool kind; declaration was not partially loaded"；命名空间转换后撞名 → Err(55B) "Anthropic tool names collide after namespace conversion"。
- win 等价：sub_140FD53A0（版本一致性跟踪）/ sub_140FD56A0（载体解析：前缀校验 → base64 → JSON 必须对象；"codex_delegation"=="v1"、"replay"=="ordered_v1" 才回放 "block"）/ sub_140FFB1F0（信封组装：namespace=="collaboration" 按 name∈{follow_up_task,send_message,spawn_agent} 白名单插入 "encrypted_function…" 字段）/ sub_140FE2CC0（请求侧校验，失败 "Invalid Anthropic thinking carrier; history was not modified"(60B)——不改写历史）。

**上游错误脱敏与 413 归属改写（PROTO-17）** — `anthropic::response::redact_error_text@0x1004F1880`（mac release）：当且仅当 fragment_len≠0 时 `str::replace(text, fragment, "[REDACTED]")`（常量 0x1016F7057，len 10）——**调用方提供的字面片段精确匹配替换，不是模式/正则**；随后无条件再套 `platform::debug_log::redact_text_inner@0x100504DA0`（客户端错误文本与 debug 日志复用同一通用脱敏例程）。`redact_error@0x1004F05B0` 是对上游错误体的递归 walker：JSON String→redact_error_text，Array/Object 逐元素/逐值递归——错误 JSON 里每个字符串值都过一遍。作用面 = 客户端错误响应 + vendored 库内部错误（`anthropic::forward::{{closure}}@0x1004ED170` 经 `Context::with_error_redactor@0x10032D830` 把脱敏闭包挂进 cc_switch Context）。413 映射在 `error_response@0x1004F0C60`：`/error/message` 长度 ≥52 且前缀全等 "Upstream provider rejected the request with HTTP 413" → `str::replacen(msg, "not a CC Switch limit.", 22, "not an AiMaMi limit.", 20, 1)`——只改归属文案，不改状态码语义；状态码由独立 error-kind→HTTP 映射表决定（1→409；2/7/8/9/10/12→503；6→502；11→透传上游；14/16→400；15→422；17/18→504；19→401；默认 500）。

**native Responses 托管 web_search 净化扩展（PROTO-18）** — 调用链 `try_codex_responses::{{closure}}@0x1004DD270` → `sanitize_body_for_native_responses_upstream@0x1004ECEF0` → `native_responses_compat::sanitize_request@0x10024C1A0` → 守卫 `rejects_hosted_web_search@0x10024C840`（mac release）。守卫四值：① protocol（上下文字节 a1+254）必须 ==1（native Responses）；② channel（a1+255）非零时 ∈{3,4} 即拒绝，==0 时改按 `brand_for_model(model)@0x10024C890` ∈{3,4}；③ model 小写化取最后一个 '/' 分段，前缀命中 `mimo`/`minimax`/`longcat`/`qwen3-coder` 即拒绝；④ base_url 小写化包含 `xiaomimimo.com`/`longcat.chat`/`minimax.io` 即拒绝，最终返回值 = 是否包含 `minimaxi.com`。净化语义（守卫通过且 body 为对象时）：tools[] `Vec::retain` 滤除 type∈{web_search, web_search_preview, web_search_minimax}，滤空则 `remove("tools")`；input[] 内 type=="additional_tools"(16) 的项对其嵌套 tools 数组套同一谓词，滤空的 additional_tools 项被移除；tool_choice 字符串匹配 web_search_preview/web_search/web_search_ 前缀 → `remove("tool_choice")`；对象形 type=="allowed_tools" → 对其嵌套 tools 套同一谓词；tools 已整体移除时一并 remove tool_choice。

**inline-tools beta 头注入/校验（PROTO-22，release 新增）** — `proxy_server::require_anthropic_inline_tools_header@0x1004EA2B0`（mac release）：

```
头不存在 → rust_alloc(23) + qmemcpy("inline-tools-2026-09-15",23) + HdrName::from_static("anthropic-beta",14) 插入
头已存在 → 按 ',' 切分 trim，token 长度==23 且双 16B SIMD 全等（"inline-tools-202"+"tools-2026-09-15"）→ 放行
         token 含非法字节（<0x20 且 !=9，或 ==127）或不匹配 → Err "Invalid Anthropic beta header"
```

触发门 `cc_switch_anthropic::requires_inline_tools@0x100CA5810`：body tools[] 任一 `defer_loading==true`，或 messages[] 存在 role=="system" 且其 content[] 任一项 type=="tool_addition"。调用链时序（`anthropic::forward::{{closure}}@0x1004ED170` 指令级）：先 `upstream_headers@0x1005D1BB0`（含 context-1m beta 逻辑）→ 置 attempt 标志 → 触发门 false 直接发送；true → 注入/校验，校验失败 → `Trace::finish("translation_error","invalid_beta_header")` + `upstream_error_with_reason(400,"proxy.anthropic_translation")`，**不重试**。win 等价：注入/校验 sub_1404A0EF0、触发门 sub_140FAFBD0、调用方 sub_1404597E0（0x140459d32–0x140459d70 指令级同构）。另一条独立 beta 路径：模型发生翻译（upstream_model 不等）时向 anthropic-beta 注入/追加 `context-1m-2025-08-07`（upstream_headers 内，mac 0x1005D1E24 / win sub_1405A3DB0）。

**effort 拒绝措辞识别（PROTO-23 covered 部分）** — 即 anthropic_trace::error_class 的 "effort" 子串分类（见 stream 节 trace 段）；只写 trace JSON error_class 键，**不驱动任何重试/改写分支**（双平台实证）。

**「上游拒绝 beta 后去掉 anthropic-beta 重试」不存在（PROTO-23 uncovered 部分）** — release 的 anthropic 转发路径无此逻辑：anthropic-beta 字面量全部代码 xref 只有 5 处（mac：build_upstream_headers_with_betas×2、require_anthropic_inline_tools_header×2、upstream_headers×2），均为构建/注入/校验，无 HeaderMap::remove；`anthropic::forward` 状态机 reqwest send 仅 1 处（0x1004ED9A4），attempt 块无回边；invalid beta 的处置是直接 400 失败。win 侧 xref 穷尽 + 失败路径指令级核实同结论。

#### 坑（⚠）

1. **旧签名推理记录被硬拒，且用户只能新建会话**：prepare_request 对 `aimami-anthropic-thinking-v1:` 前缀的 encrypted reasoning 直接 Err，中文文案明示"请新建会话；原记录不会被修改"——不迁移、不降级（PROTO-10）。
2. **compaction 拒绝产生用户可见 400**：codex 路由路径返回 router.native_compaction_required + "AiMaMi 不再生成兼容性伪摘要"——1.2.6 时代依赖兼容伪摘要的上游在 release 直接断（PROTO-10）。
3. **allowed_tools 不静默放宽**：无法等价表达时显式 82B 错误；消费侧若按"放宽成任意工具"实现就是行为不符（PROTO-11）。
4. **inline-tools beta 头校验失败 = 400 直接失败且无重试**：已有 anthropic-beta 头但 token 非法（控制字符/长度不符/值不匹配）即 translation_error；不存在"去掉 beta 重试"的兜底（PROTO-22/23）。
5. **413 文案归属改写不改变状态码语义**：仅把 "not a CC Switch limit." 改写为 "not an AiMaMi limit."；真正的 HTTP 状态由 error-kind 映射表决定（11→透传上游状态），不要把文案改写当成 413 特殊状态处理（PROTO-17）。
6. **脱敏是精确片段替换**：fragment 为空（len==0）时不做任何替换；脱敏强度完全取决于调用方传入的片段，泛化Pattern（如正则式密钥扫描）不在这条链上——通用脱敏另有 debug_log::redact_text_inner 一层（PROTO-17）。
7. **schema 归一化拒绝递归锚**：oneOf/anyOf/allOf 组合 schema 含无作用域 $recursiveRef/$dynamicRef 直接装配失败，不静默通过（PROTO-13）。
8. **强制推理型号双门**：cannot disable thinking（81B）与 adaptive thinking + forced tool_choice 冲突（80B）是两条独立错误，判据分离为独立标志位（PROTO-14）。
9. **签名历史校验失败一律"不改写历史"**：版本混用/委托版本过旧/载体非法三条错误文案都带 "history was not modified" 语义保证——校验是只读的（PROTO-15）。
10. **净化的守卫是四值与关系**：protocol==1 且 channel/model/base_url 命中才净化；不满足守卫的 native Responses 请求原样透传托管 web_search 工具——不要把 sanitize 当无条件执行（PROTO-18）。
11. **模型名 `[1m]` 后缀**：末尾 [1m] 大小写不敏感移除并 trim，原模型决定 context-1m beta（mac SYSTEM-DIFF §6；win-pre 证据 0x1407591e3 同逻辑）。

#### 证据点结论

| 点 | 结论 | 依据 |
|---|---|---|
| PROTO-10 | covered（mac+win release） | 双入口 HTTP 前拒绝：prepare_request@0x1005D0A30 + forward 闭包@0x1004EB1E0 / win sub_140455600（400 + router.native_compaction_required） |
| PROTO-11 | covered（mac+win release） | allowed_tools 82B 显式拒绝双平台实证；@0x100CA7BD0 行810-838 / sub_141011B00 |
| PROTO-12 | covered（mac+win release） | output_config.format 装配 + 能力门 + 三类显式错误；win output_config 六 xref 同函数 |
| PROTO-13 | covered（mac+win release） | 触发（oneOf/anyOf/allOf 存在）+ 归一化规则 + 递归锚拒绝双平台实证 |
| PROTO-14 | covered（mac+win release） | cannot disable thinking 81B 全文 + 独立标志位 + 三项校验分离 |
| PROTO-15 | covered（mac+win release） | 保序/动态 replay/namespace 先行/版本混用四项双平台实证；aimami_tool_schema 为 AiMaMi 自家信封字段 |
| PROTO-17 | covered（mac+win release） | redact_error_text@0x1004F1880 精确替换 + redact_error 递归 walker + 413 replacen + error-kind→HTTP 映射表 |
| PROTO-18 | covered（mac+win release） | 守卫四值（protocol==1/channel{3,4}/model 尾段/base_url 域名）+ tools/additional_tools/allowed_tools/tool_choice 净化面 |
| PROTO-22 | covered（mac+win release）；pre 无 | 字面量+注入点+触发门+调用链双平台齐全；win-pre 字节级双重零命中 → release 新增 |
| PROTO-23 | partially_covered（mac+win release） | effort 措辞识别 covered（trace error_class 分类）；「去 beta 重试」uncovered——xref 穷尽 + 单 send 无回边 + invalid beta 直接 400，release 不存在该重试路径 |
| PROTO-24 | release 侧 covered（mac）；pre 侧见下节 | mac release `codex_effort_to_anthropic` len5 "ultra" 分支 + "ultra-" 档前缀字面量 @0x100897E51 实证；win release 证据尚缺 |
| PROTO-27 | pre 侧 covered（win）；release 侧证据尚缺 | win-pre extra_headers_from_json@0x140730500 治理名单逐项常量比较已记录；release 侧无补证（见下节） |

---

### 2.4 relay-protocol-pre

**1.2.7-pre ↔ 1.2.7-release 差异专项（PROTO-22/23/24/27）**

#### 变更面（pre → release）

| 点 | pre | release | 判定 |
|---|---|---|---|
| anthropic-beta: inline-tools-2026-09-15 | 不存在（win-pre strings 全扫 + find_bytes 全镜像双重零命中；pre 实际 beta 值只有 interleaved-thinking-2025-05-14 / fine-grained-tool-streaming-2025-05-14 / context-1m-2025-08-07 三个） | 存在完整链（字面量+注入/校验+触发门+调用方，双平台） | **release 新增** |
| ultra- 型号档前缀 | 不存在（win-pre 双重零命中；"ultra" 仅出现在 trace_effort_label 的 effort 标签表 minimal/low/medium/high/xhigh/max/ultra，与型号档无关） | mac release 存在（codex_effort_to_anthropic "ultra" 分支 + "ultra-" 字面量） | **release 新增**；win release 侧证据尚缺 |
| effort 拒绝措辞识别 | pre 侧证据尚缺（mac-pre IDA 不可达；win-pre 未查） | trace error_class "effort" 分类（双平台） | release covered；pre 侧证据尚缺 |
| 去 anthropic-beta 重试 | pre 侧证据尚缺（mac-pre IDA 不可达） | release 不存在（双平台 xref 穷尽） | 双侧均未实证存在 |
| 转发头治理名单（authorization/cookie/origin/referer/via/forwarded 等） | win-pre 存在（extra_headers_from_json@0x140730500 全量 decompile 22474 字符） | release 侧证据尚缺 | pre covered；release 尚缺 |
| SSE/终态合同 | 宽松（见下表） | 收紧 | 见 stream/aggregate 节 |

#### 真实逻辑

**pre 侧 anthropic-beta 注入点（win-pre `51cb41b613aa`）**：

- `sub_140736EB0`（build_provider_base_headers 类）：0x14073749e 插入 anthropic-beta 头；值来自 rodata 描述符 off_141A3EE10——`interleaved-thinking-2025-05-14`(31B) 与 `fine-grained-tool-streaming-2025-05-14`(38B)，条件 a3≠0 且 x-api-key 鉴权分支。
- `sub_140759150`（build_anthropic_request_headers）：仅当模型带 [1m] 后缀时注入 `context-1m-2025-08-07`（0x1407591e3 / 0x1407594e9 两处引用）。

**pre 侧型号档位表（win-pre）**：见 request 节「推理策略与型号档位」——sub_1401FA2E0 前缀表全文（sonnet-5-5/fable-5-1/mythos-5-1/opus-5-5/fable-5/mythos-5/mythos-preview/opus-5/sonnet-5/opus-4-8/opus-4-7/opus-4-6/sonnet-4-6/opus-4-5 + 旧名表回退），mythos-5-1 档在 pre 已存在；**ultra- 档前缀 pre 无**。

**pre 侧转发头治理名单（PROTO-27，win-pre）** — `extra_headers_from_json@0x140730500`：extraHeaders JSON 合并进探测/请求头时按头名长度分 case 的有序表二分比较，命中即丢弃（不并入）。名单实际长于断言六项：

```
len2 te | len3 via | len4 host | len6 expect/cookie/origin | len7 upgrade/referer
len8 trailers | len9 x-api-key/forwarded/x-real-ip | len10 connection/keep-alive/set-cookie/cf-visitor
len11 x-client-ip 等 | len12 cf-ipcountry/x-azure-fdid/x-request-id/x-b3-traceid/x-b3-sampled
len13 authorization | len14 content-length/x-true-client-ip | len15 x-forwarded-for/x-amzn-trace-id
len16 sk-aimami-relay-x/x-forwarded-host/x-forwarded-port/cf-connecting-ip/fastly-client-ip
len17 x-azure-clientip/x-forwarded-proto
```

即名单覆盖 hop-by-hop 头、鉴权相邻头、CDN 客户端识别头与 x-forwarded-* 家族——语义是「禁止 extraHeaders 覆盖/注入这些头」。调用方：`build_openai_probe_headers@0x140731700` 与 `build_anthropic_probe_headers@0x140731E10`。相关面：sub_14096ACF0 做 extraHeaders 值形状解析（非法 shape 报 "invalid header shape"(20B)，日志打码 "[REDACTED]"(10B)，并引用 api key/token/secret/cookie/jwt/bearer 敏感词拼接表做值打码）。

**pre → release SSE/终态行为对照（win SYSTEM-DIFF §3.4 逐面实证，双平台同构）**：

| 面 | pre | release |
|---|---|---|
| 非法 UTF-8 | 替换为 U+FFFD，保留可跨 chunk 尾部 | 区分可续接尾部与确定非法；非法或 EOF 残片报 invalid_utf8 |
| 未见 message_stop 的 EOF | 有部分输出时可合成 max_tokens/incomplete | 不据已有内容推成功；报 stream_truncated（保留明确 aggregate fallback 边界） |
| message_start | 较宽松 | message 必须为对象且只能一次 |
| block index / delta | 多处缺失或错误索引为空输出 | 要求非负有效 index、已登记匹配 block，重复 index 拒绝 |
| block_stop | 立即关闭/发 done | 先标 closed，完整收口延至 message_stop 校验 |
| message_stop 尚有 open block | 可补关闭 | failed/invalid_response |
| tool 参数 | 旧 block finalizer 中组装 | id/name 必须非空，partial_json/input 必须可解析且为对象 |
| thinking | 旧宽松收口 | signature 或 redacted data 必须满足非空可重放要求 |
| pause_turn | completed | failed/invalid_response |
| 缺失/未知 stop reason | 默认 completed | failed/invalid_response |

#### 坑（⚠）

1. **pre 不能当 release 用**：win SYSTEM-DIFF 总判「pre 与实际 release 有真实行为差异，不能把 pre 当作 release 直接复用」——Anthropic 请求转换、SSE 非法输入/结束条件、套餐值域、Skills 前端刷新均有实质差异；mac 侧同判（116 旧命名空间符号消失 + 主链迁库）。
2. **mac-pre 证据缺口**：PROTO-22/24/27 的 mac-pre 批次 仍 blocked——这些点的 pre 侧结论目前由 win-pre 单平台承载，mac-pre 证据尚缺；PROTO-23 的 mac-pre 批次 已于 2026-10-27 补证 covered（去 beta 重试 `remove_rejected_optional_anthropic_beta@0x100853110` 链 + effort 措辞识别双侧实证）。
3. **effort 标签表的 ultra ≠ 型号档 ultra-**：win-pre 的 trace_effort_label@0x1407C9830 有 minimal/low/medium/high/xhigh/max/ultra 七档标签，那是 reasoning effort 展示标签；断言所指的 ultra- 型号档前缀在 pre 双重核查零命中，两者不能互相证明。
4. **release 侧 PROTO-27 缺口**：治理名单 pre 侧已证存在，但 release 侧（双平台）无补证证据；不能据 pre 存在外推 release 名单内容是否变化。
5. **字面量比较的长度陷阱**：release 多处校验按长度先行分派（如 allowed_tools len13、inline-tools token len23、model_context_window_exceeded len29 SSE 双 xmmword）；长度不符直接落 default/未知分支，差一个字符就是不同行为路径。

#### 证据点结论

| 点 | 结论 | 依据 |
|---|---|---|
| PROTO-22（pre vs release） | release 新增（covered） | win-pre 双重零命中（strings 21579 条 + find_bytes 全镜像 0x140000000–0x142100000）vs 双平台 release 完整链；mac-pre blocked |
| PROTO-23（pre vs release） | partially_covered | release：effort 识别 covered / 去 beta 重试 uncovered（附排查证据）；mac-pre 已补证 covered（去 beta 重试 `remove_rejected_optional_anthropic_beta@0x100853110` + 计数器上限 2 + `Trace::retry('optional_beta_rejected')` + `0x10084B395` 重发段；effort 识别 `is_anthropic_effort_rejection` 4 措辞→摘 effort→重发），win-pre 未查 |
| PROTO-24（pre vs release） | partial → release 新增 ultra- | win-pre：mythos-5-1 档在（sub_1401FA2E0 全文实证）、ultra- 双重零命中；mac release：ultra/ultra- 在 codex_effort_to_anthropic 实证；win release 与 mac-pre 证据尚缺 |
| PROTO-27（pre vs release） | pre covered；release 证据尚缺 | win-pre extra_headers_from_json 名单逐项常量比较 + 双调用方已记录；release 侧（含 mac-pre）无补证 |

---

构建指代（全节通用，SHA 取前 12 位）：

| 指代 | SHA256 前 12 | 制品 |
|---|---|---|
| mac-pre | `ac235ae0171a` | AiMaMi 1.2.7-pre.app（x86_64 slice 取证） |
| mac-release | `f019dbc8e267` | AiMaMi 1.2.7-release.app |
| win-pre | `51cb41b613aa` | AiMaMi 1.2.7 win64-pre.exe |
| win-release | `fd5f0c5aa7d5` | AiMaMi 1.2.7 win64-release.exe |

伪代码引用根：`raw/aimami/1.2.7/macos-arm64/backend/`（下文写作 `raw/.../backend/`）。证据补充包根：`intermediate/aimami/1.2.7/evidence-supplement/`（下文写作 `evidence-supplement/`）。

---

### 2.5 relay-probe-upstream-url

**模型发现 / 健康探测 / 上游 URL 拼接**

#### 变更面（1.2.6 → 1.2.7-release）

**新增 / 重写**

1. `fetch_relay_models_draft`（模型发现）整段重写：30 秒墙钟总预算包住整段分页发现调用，超时产出固定 51 字节错误 `model discovery exceeded its 30 second total budget`；旧终态 `all retries exhausted` 移除（win-pre 全二进制 strings 零命中，mac-pre 同）。证据：`fetch_relay_models_draft@0x14037c170`（win-pre）、命令体 `0x1001e5700`（mac-pre，`tauri::ipc::InvokeResolver<fetch_relay_models_draft>::respond_async_serialized_inner::{{closure}}`）；来源 `evidence-supplement/RT-04/evidence.md` + `evidence.mac-pre.md`。
2. 健康探测新增 `health_check::ProbeStream` 三协议流终态分类面（OpenAI `finish_reason` / Anthropic `stop_reason`+`message_stop` / Responses `response.*` 状态），并新增 embedding 探测的 `error`/`data` 校验。证据：`probe_stream_finish@0x140cf27e0`、`probe_stream_dispatch@0x140cf2a30`、`validate_embedding_response@0x140d6ee00`（均 win-pre）；来源 `evidence-supplement/RT-05/evidence.win-pre.md`。mac pre 侧证据尚缺。
3. 新增 `join_upstream_url_with_query` + `validate_endpoint_path`，由 health、quota、proxy、模型发现四处共用：端点路径拒绝 query/fragment/路径穿越，Base URL 自带 query 与请求 query 键冲突时报错。证据：`validate_endpoint_path@0x140992840`、`join_upstream_url_with_query@0x140992e20`（win-pre）；来源 `evidence-supplement/RT-06/evidence.win-pre.md`。mac pre 侧证据尚缺。

**移除**

4. 模型发现旧终态 `all retries exhausted`（双平台 pre 构建 strings 零命中，见 `evidence-supplement/RT-04/evidence.md` §(c)、`evidence.mac-pre.md` §(c)）。

**前端 / IPC 维度**：`test_relay_draft_stream`、`test_relay_provider_stream` 在 mac 前端 CCF diff 的新增观察集中（`intermediate/aimami/1.2.7/macos-arm64/version-delta/frontend-command-diff.json` added_commands_ccf）；跨平台 IPC 注册 diff（134→147，`intermediate/aimami/1.2.7/version-delta/ipc-command-diff.json`）的 +20 正式新增集合不含这两条，归属以注册证据为准。

#### 真实逻辑

##### fetch_relay_models_draft —— 30 秒墙钟单包发现（RT-04）

win-pre `fetch_relay_models_draft@0x14037c170`（src/core/relay/fetch_models.rs，`evidence-supplement/RT-04/evidence.md`）：

```
0x14037d4fc  Duration::new(30s, 0) + timeout 上下文
LABEL_97:
0x14037d559  poll timeout 包裹的发现 future（内层 sub_14076B330）
0x14037d595  if ( v90 == 2 )                       // 超时判别
0x14037d5df    qmemcpy(v93, "model discovery exceeded its 30 second total budget", 51);
0x14037d739  非超时错误走 (v90 - 1) | 0xA 错误编码直接返回
```

- 全函数 `goto` 标签地址比对零回边（无源码级 retry 循环）；`join_upstream_url_with_query(..., "/v1/models", ...)` 全函数仅调用一次（0x14037d426）。结论：30 秒预算包住整段分页发现，预算内允许多页顺序请求，**不做失败重试**，超时即终态。
- 内层发现 future `sub_14076B330@0x14076b330`（309 basic blocks）字符串面给出全部失败面：`model discovery exceeded the page limit` / `model discovery exceeded the model count limit` / `model list pagination did not advance` / `model list pagination conflicts with the configured URL query` / `upstream returned unsupported model list pagination` / `invalid model list pagination metadata`；请求头 `x-api-key`、`anthropic-version: 2023-06-01`；分页游标 `has_more`/`last_id`/`after_id`。
- mac-pre 同构：命令体 `0x1001e5700` 内 `Instant::now()` + `checked_add(30,0)` + `Sleep::new_timeout` + `Timeout<fetch_models::fetch_pages::{{closure}}>::poll@0x100beaf20` 各出现且仅出现 1 次；超时分支同样构造 51 字节错误串（错误编码 10）。工具函数：`parse_model_ids@0x10096a8f0`、`sanitize_api_key@0x10096aac0`、`parse_extra_headers@0x10096abd0`（`evidence-supplement/RT-04/evidence.mac-pre.md`）。

##### ProbeStream —— 三协议流终态分类（RT-05，win-pre 证据）

探测主 future `sub_1403AA2F0@0x1403aa2f0`（src/core/relay/health_check.rs）调用树：`build_anthropic_probe_headers` / `build_openai_probe_headers` → `join_upstream_url_with_query` → `read_probe_response_body@0x1403a9d20` → `probe_stream_feed@0x140cf2530` / `probe_stream_finish@0x140cf27e0`；embedding 走 `validate_embedding_response@0x140d6ee00`。

`probe_stream_finish@0x140cf27e0`（终态收口）：

```c
if ( *(_BYTE *)(a2 + 90) )                       // stream ended 标志
{
  if ( *(_QWORD *)(a2 + 80) ) { *a1 = 0; ... }   // 已有模型输出 → 成功
  else qmemcpy(v5, "upstream returned no model output for this probe", 48);
}
else
  qmemcpy(v8, "upstream stream ended without a successful terminal event", 57);
```

收口前先经 `probe_stream_next_frame@0x140cf20d0` 排干剩余帧，再 `probe_stream_dispatch` 解析尾部事件。

`probe_stream_dispatch@0x140cf2a30`（三协议终态解析，全文已核）：

- SSE 行尾处理 + `[DONE]` 哨兵识别（0x140cf2b78 常量比较 `[DON`+`E]`）。
- SSE `event: error` 分支 → 提取错误对象按模板 `upstream returned error: {0}` 格式化；长度不符给 31 字节 `upstream emitted an error event`。
- JSON 解析失败 → `invalid JSON in probe SSE`（25 字节）；字符串面另有 `invalid UTF-8 in probe SSE`。
- OpenAI 协议：JSON 指针 `choices/0/finish_reason` == `content_filter` → 28 字节 `upstream filtered this probe`。
- Responses 协议：`response.failed` / `response.incomplete` → 39 字节 `upstream probe failed or was incomplete`；`response.completed` 时还须 `response.status` == `completed`，否则 45 字节 `upstream returned conflicting terminal status`。
- Anthropic 协议：`delta.stop_reason` == `refusal` → 27 字节 `upstream refused this probe`；`type == "message_stop"` → 置 ended 标志（a2+90=1）。
- 增量文本由 `probe_extract_delta_text` 累计到 a2+80 计数器，超过 0x190（400）即置 ended。

`validate_embedding_response@0x140d6ee00`：JSON 解析（带尾部检查）失败 → `upstream returned invalid embedding JSON`（40 字节）；`error` 字段存在且为真值 → 无效；`data` 数组逐元素要求 `embedding` 非空且逐元素为数值（JSON 类型标签==2）；任一不符 → `upstream returned no valid embedding for this probe`（51 字节）；全过返回成功（*a1=-1）。

##### join_upstream_url_with_query / validate_endpoint_path（RT-06，win-pre 证据）

`validate_endpoint_path@0x140992840`：逐字符扫描（含 UTF-8 多字节解码路径），位掩码 `0x200000010000001` 命中即拒——bit 0 = `#`（fragment）、bit 28 = `?`（query）、bit 57 = `\`（反斜杠）；随后按 `/` 切段，逐段拒绝 `.` 与 `..`。任何违规落到同一 66 字节错误：

```
0x14099296f  qmemcpy(result, "relay endpoint must be a path without query, fragment or traversal", 66);
```

`join_upstream_url_with_query@0x140992e20`：0x140992f0e 先调 validate_endpoint_path 校验 endpoint 段；再分别解析 Base URL 自带 query 与请求 query 的键集合（hashmap 遍历），键冲突时构造 54 字节错误 `relay request query conflicts with configured Base URL`。

调用方面（XrefsTo 实测）：`fetch_relay_models_draft`（0x14037d426，模型发现 `/v1/models`）、health probe 链（0x1403aaf4b / 0x1403aefbb）、proxy 转发链（0x1406de99b 等，`sub_1406DE860`/`sub_1406E76A0`）、`responses_upstream_url@0x140992ac0`（0x140992c0d）。validate_endpoint_path 另被 `sub_140992450` 调用。

#### 坑（⚠）

- ⚠ **探测成功需要「终态事件 + 有模型输出」双条件**：流干净结束但零文本输出 → `upstream returned no model output for this probe`；只有文本没有终态 → `ended without a successful terminal event`。两个失败面文案不同，消费侧不能把「流结束」当成功（`probe_stream_finish@0x140cf27e0`，win-pre）。
- ⚠ **增量文本超 400 字符即提前置 ended**（a2+80 计数器 > 0x190，`probe_stream_dispatch@0x140cf2a30`）：探测只采样开头，不是完整生成。
- ⚠ **Responses 协议 `response.completed` 事件单独出现不算成功**：必须同时 `response.status == "completed"`，否则报 `upstream returned conflicting terminal status`。
- ⚠ **OpenAI `content_filter` 与 Anthropic `refusal` 是分类终态不是成功**，分别映射 `upstream filtered this probe` / `upstream refused this probe`。
- ⚠ **端点路径校验连 `\` 也拒**（位掩码 bit 57）——Windows 风格反斜杠路径在 endpoint 配置里同样非法；`.`/`..` 段拒绝是逐段比较，不是子串匹配。
- ⚠ **模型发现 30 秒预算内零重试**：失败/超时都直接终态；旧 `all retries exhausted` 语义不存在了，等待重试的消费方会失去该信号。
- ⚠ win-pre 字符串检索坑：两条流终态文案的头部被字符串拼接表吞掉，strings 全扫只能命中尾巴（`d this probe` / ` this probe`），定位须走 `src\core\relay\health_check.rs` panic-Location 两跳 xref（`evidence-supplement/RT-05/evidence.win-pre.md` probe 过程 1-2）。
- ⚠ mac pre 侧 ProbeStream / join_upstream_url_with_query 正文未落证（见证据点结论），上文 RT-05/RT-06 逻辑描述全部出自 win-pre，不外推 mac。

#### 证据点结论

| 点 | 结论 | 依据 |
|---|---|---|
| RT-04 | covered | win-pre `fetch_relay_models_draft@0x14037c170` 全文 + mac-pre 命令体 `0x1001e5700` 全文双 批次 覆盖；30s 预算、51 字节超时串、不重试、旧终态移除四项齐备（`evidence-supplement/RT-04/`） |
| RT-05 | partial | win-pre 七函数全文覆盖（`evidence-supplement/RT-05/evidence.win-pre.md`）；mac pre 侧证据尚缺（补证通道不可达，未落证），release 侧未单独立项 |
| RT-06 | partial | win-pre 两函数全文 + 调用方面覆盖（`evidence-supplement/RT-06/evidence.win-pre.md`）；mac pre 侧证据尚缺（同上），release 侧未单独立项 |

---

### 2.6 router-catalog-config

**官方目录 / 引擎检测 / MCP 守卫 / provider 管理 / quota 三命令 / 转场收尾**

#### 变更面（1.2.6 → 1.2.7-release）

**新增**

1. 官方模型目录由编译期内嵌快照改为运行时获取并校验（RT-01）：删除约 113KB 内嵌官方模型表（上游对应删除点 `official_catalog.rs:10 include_str!`）。新面：`native_catalog` 新模块（13 fns，含 `validate_official_models` / `official_headers` / `response_identity` / `revision` / `CatalogReply::into_http_response`）、`native_repair_catalog` 新模块（7 fns）、本地服务端点 `/codex/router/v1/models`、目录修订头 `x-aimami-catalog-revision`（win 侧字面量 1.2.6→1.2.7 为 0|3 新增，`backend-fullchain-win-router-catalog.md` §4）。
2. MCP 写配置前新增候选校验 + 结构行词法守卫（RT-08，mac-release）：`validated_mcp_config@0x10044d180`。来源 `evidence-supplement/RT-08/evidence.md`；mac pre→release 模块归约 row 8/9/10（`upsert_mcp_server` / `parse_mcp_document` / `set_mcp_server_enabled` 判 changed，`release-f019dbc8e267-router-engine-platform-baseline-content-reduction.json`）。
3. `run_codex_router_diagnostics` / `fix_codex_router_issue` 正式命令化（跨平台 IPC +20 集合内，`ipc-command-diff.json`；1.2.6 win 已有字符串底子 1|1，1.2.7 注册为 IPC）。
4. quota/usage refresh 族：`get_usage_refresh_all_accounts` / `set_usage_refresh_all_accounts` 进 +20 新增集；`load_quota_history` 增 `range` 参数（既有命令参数漂移，win owner `0x140ec7a00` / mac 对应体 2676B）；`get/set_usage_refresh_interval`、`start_usage_refresh_watcher` 为 1.2.6 既有命令（`audits/BASELINE-FINAL-1.2.7.md` §新增 20 注释行）。
5. `CodexPaths` +6 fns（新目录布局 + 老版探测）；`config_takeover` +7（`quarantine_damaged_backups` / `split_foreign_surface` / `merge_runtime_quarantine` / `validate_recovery_backups` / `read_backup_bytes` / `read_legacy_backup_lines` / `normalize_catalog_path` 等）。来源 `backend-fullchain-codex-catalog.md` §2-3。CodexPaths 31 字段布局已闭合、aionsale→codexmate legacy 就地迁移有证据（`audits/COVERAGE-FINAL-1.2.7.md` engine 行）。

**修改**

6. CLI 引擎检测细分失败合同（mac pre→release row 3，`ensure_native_router_client@0x1002bbcf0` pre）：缺引擎/spawn/wait/退出失败从单一不兼容错误改为 `NOT_FOUND` / `ACCESS_DENIED` / `PROBE_FAILED` / `PROBE_TIMEOUT` / `PROBE_EXIT` / `VERSION_UNKNOWN` / `VERSION_UNSUPPORTED` 分型传播；最低版本仍 0.155.0-alpha.9.2；1.5 秒 deadline、25ms 轮询、超时 kill/wait 为 pre 已有，不计新增。
7. `codex_bundled_cli_path`（row 22，pre `0x1007b8ed0`）：缺失语义由 Option None 改为 Result 错误 `CODEX_ENGINE_NOT_FOUND`，明确**不退到独立 CLI / IDE 插件**；仍只探测 ChatGPT bundle 内嵌路径。
8. `CodexPaths::catalog_db_path`（row 28，pre `0x100b3cbf0`）：由「首个存在路径/默认路径」改为枚举 sqlite/root/configured home 三处的 codex.db 与 codex-dev.db → metadata 严格区分 not-found 与不可读/非普通文件 → canonicalize 去重 → 验证目录库 → 多候选时按 ChatGPT 主进程 PID 与 DB 持有者列表筛选实际持有库；持有者唯一则验证返回，多持有或归属歧义**明确报错**；无候选返回 None 而不是伪造默认可用路径。mac SYSTEM-DIFF §7 同述（持有者谓词 `0x1008d30c0`）。
9. E12：`quota`、`proxy_status`、`get_relay_active` 三命令实现面 release 侧展开实证（mac-release + win-release，`evidence-supplement/E12/evidence.md`）；相对 pre 的逐体 same/重写面以 callee 展开为 delta 比对基准。
10. R7/R8（release 侧）：`RelayManager::set_codex_router_no_account_mode@0x100263400`（mac-release，44 callees）与 `RelayManager::set_codex_router_enabled@0x10025b710`（mac-release，51 callees）callee 集合逐一枚举；win-release 对应 `sub_140E14540`（34 callees）/ `sub_140E17770`（36 callees），31/34 公共骨架相同，差异三项为 per-command 状态机胶水（`evidence-supplement/R7/evidence.md`、`R8/evidence.md`）。
11. E7 第三方段隔离（身份核查实证「已实现或等价」）：mac-release `codex_diagnostic` 族 `check_config_third_party@0x10085ad80` / `fix_config_third_party@0x1008566b0` / `fix_config_third_party_text@0x10086e270` / `find_third_party_base_url@0x10085d820` / `is_explicit_third_party_marker@0x100879dc0`；win-release `sub_140B29B00`（入口/回写）+ `sub_140B2EFB0`（隔离核心，三分支）+ `sub_140B76BF0`（18KB 主处理面）（`evidence-supplement/E7/evidence.md`）。

**移除**

12. provider 增删改排/激活前的独立 config preflight 步骤（RT-14，win-release）：五个 manager 命令 handler 不再含 preflight/reconciler 调用（`evidence-supplement/RT-14/evidence.md`）。
13. `get_codex_router_auth_readiness` IPC 删除：`router_unlock_auth` 模块 29→14 fns，`write_json` / `read_marker` / `managed_api_key` 等 readiness 支撑面删除（`backend-fullchain-router-diagnostics.md` §3）；`live_auth_state` 重写（bb 14→42），改为活体凭据状态推断。
14. `set_codex_no_account_slots` IPC 删除：收编为 `validate_legacy_no_account_aliases` 兼容校验 + `restore_no_account_model_threads` 恢复链（`backend-fullchain-codex-catalog.md` §1.1）。

**win-pre 转场收尾安全闸**

15. RT-13（win-pre）：转场收尾段新增/存在受保护进程 DB 持有检测，静默关窗重试耗尽后仍被持有则报 `CODEX_DB_HELD_BY_PROTECTED_PROCESS` 并阻断转场（`evidence-supplement/RT-13/evidence.md`）。

#### 真实逻辑

##### 官方目录运行时获取（RT-01）

mac-pre：axum handler `0x1008b1a70`（`/codex/router/v1/models` 端点 owner）构造 4 秒墙钟（`Instant::now()` + `checked_add(4,0)` + `Sleep::new_timeout`）单次包裹 `native_catalog::fetch_official`，随后调 `validate_official_models` 与 `revision`；handler 内经 data xref 0x1008b20b7 引用 `https://chatgpt.com/backend-api/codex/models` 字面量（`evidence-supplement/RT-01/evidence.mac-pre.md`）。

`validate_official_models`（mac-release `0x1005d37d0`，伪代码 `raw/.../backend/codexmate_lib::core::relay::native_catalog::validate_official_models.c` 全文 226 行；mac-pre 对应 `0x100857b00`）：读 catalog JSON 的 `models` 数组（缺失/非数组 → 返回 sentinel `0x8000000000000000`+tag 4），逐项取 `slug` 并 `trim_matches`，丢弃两类 slug——含 `::` 的、以及前缀命中 `aimami_relay_i…` 的内部 slug（内联常量比较 `0x725F696D616D6961` / `0x5F79616C65725F69`）；经 HashMap insert 去重后产出保留列表 + dropped 计数（对应 DTO `droppedEntries`）。关键段：

```c
v4 = index_into("models", 6, a2);  if ( v4 && *v4 == 4 ) { ... }
// 逐项：trim 后
if ( !is_contained_in("::", 2, slug)
  && (len < 0xD || *slug ^ 0x725F696D616D6961LL | *(slug+5) ^ 0x5F79616C65725F69LL)
  && !HashMap::insert(&kept, slug, len) ) { break; }   // 保留
```

`official_headers`（mac-release `0x1005d2710`，`raw/.../backend/.../official_headers.c` 全文）：取 `authorization` 头（13 字节名），值须可打印且以 `Bearer `（7 字节，常量 `0x72616542`+`0x20726572`）开头；trim 后 token 命中 `aimami-`（`0x616D6961`+`0x2D696D61`）或 `sk-aimami-`（`0x6D616D69612D6B73`+`0x2D69`）前缀即拒绝；随后按 8 头白名单表（unk_1016FD552 起，长度序列 18/10/10/7/19/14/33…）逐个拷贝转发头。任何一步不满足 → 返回空结果（*a1=3）。

`response_identity`（mac-release `0x1005d2b50`，`raw/.../backend/.../response_identity.c` 全文）：校验 etag 可打印（字符 >0x1F 或为 tab，0x7F 拒绝），把「etag + 分隔 + revision」两个 Display 参数格式化后做 SHA-256（`Digest::digest`）再 LowerHex——即 ETag = sha256(etag NUL revision)（`evidence-supplement/RT-01/evidence.mac-pre.md` 引用行同述）。

DTO：`OfficialCatalogStatus::serialize`（mac-pre `0x1008577b0`）写 5 字段 `available/checkedAt/modelCount/droppedEntries/failure`；`CatalogFailure::serialize`（mac-pre `0x100856ef0`）按判别值输出 kind：0=`missingAuth`、1=`network`、2=`invalidCatalog`。win-pre 语义等价面（serde 变体表 0x141a06580+）为 **5 种**：`missingAuth/network/timeout/invalidCatalog/tooLarge`（`evidence-supplement/RT-01/evidence.win-pre.md` §(b)）。

win-pre 双通道：直连拉取 `sub_1406F9C70@0x1406f9c70`（src/core/relay/native_catalog.rs）带 etag 缓存、`invalid client_version` 校验，失败终态 `official_catalog_unavailable` + `Official model catalog refresh failed. No replacement catalog was returned.`，保护分支 `native catalog is not active` / `relay state poisoned` / `catalog configuration changed; reload client`；app-server 链 `sub_140CBA770@0x140cba770`（src/core/codex_app_server/models.rs）按 JSON-RPC 顺序 `config/read` → `model/list`（参数含 `includeLayers`/`includeHidden`）。本地端点 `/codex/router/v1/models` 由 `sub_140BC8230` / `sub_140C82D40`（src/core/relay/proxy_server.rs）暴露。

目录修复装配：`native_repair_catalog::PreparedRepairCatalog::prepare`（mac-release `0x10031fbf0`，`raw/.../backend/.../PreparedRepairCatalog::prepare.c` 前 100 行已读）：入口守卫 `*(a3+364)==1 && *(a3+382)` 不满足时直接返回 138 字节内联错误；随后 `read_optional` 两段来源 → `codex_app_server::models::read_model_list`（连接 AppServerClient、发 `config/read` 带 includeLayers、validate_source 后再 model/list，含 includeHidden 构造）→ `from_iter` 收集。关键常量：`model_providers`/`requires_openai_auth`/`http_headers`/`x-aimami-catalog-revision`/`https://chatgpt.com/backend-api/codex`/`base_url`（`backend-fullchain-codex-catalog.md` §1.3）。六端点集（base/models/responses/responses/compact/images/generations/images/edits）双平台一致（`audits/COVERAGE-FINAL-1.2.7.md` engine 行）。

legacy 兼容：`codex_catalog::validate_legacy_no_account_aliases`（mac-release `0x1009ac6f0`，`raw/.../backend/.../validate_legacy_no_account_aliases.c` 全文 133 行）：按 72 字节步进遍历别名条目，每条 trim 后先 `validate_relay_provider_id` 校验 provider 字段，再要求 legacy 别名命中 `is_no_account_slot_slug`；合规条目进 HashMap 去重，任一条目不合规即跳到错误构造（81 字节内联错误串，返回 tag 9）；全过返回 tag 11（Ok）。

##### MCP 写前守卫（RT-08，mac-release）

`validated_mcp_config@0x10044d180`（反编译 155 行，`evidence-supplement/RT-08/evidence.md`）：先调 `codex_config::validate_candidate` 做候选配置校验，非 Ok（tag!=11）直接透传错误；再构造「当前配置 vs 候选配置」两个 (ptr,len) 段序列（规范化解析形态/受管标记序列），逐段 `len 比较 + memcmp`；任一不一致 → 返回错误（tag 10），58 字节中文文案「MCP 编辑会改变路由受管块标记，未修改配置」——即结构行词法守卫：候选写会改动路由受管块标记序列时显式拒绝且**不写盘**；全一致 → Ok 携带原配置三元组。配套变化（mac pre→release row 8/9/10）：`parse_mcp_document` 新增 `TomlLexicalState::line_is_structural` 状态守卫（非结构行不作为 section/managed 标记处理）；`upsert_mcp_server` / `set_mcp_server_enabled` 在编辑输出写回前插入 validated_mcp_config 调用。toml_edit 目标块编辑、3 次冲突重试、原子发布为 pre 已有。

##### provider 管理命令与 preflight 归位（RT-14，win-release）

六个 handler 均为纯 dispatch shim，callee 集只含 dispatch、参数提取、结果序列化与分配器辅助，无任何 preflight/reconciler 调用（`evidence-supplement/RT-14/evidence.md`）：

| 命令 | handler（win-release） |
|---|---|
| activate_relay_provider | `sub_14024FF50` |
| upsert_relay_provider | `sub_140251110` |
| delete_relay_provider | `sub_1402507F0` |
| reorder_relay_providers | `sub_14024E740` |
| set_relay_provider_network | `sub_14024EE10` |
| deactivate_relay_provider | `sub_14024F6B0` |

preflight 三函数只存在于 router_transition 管线内部：`sub_140ACD7B0`（catalog/auth_preflight 本体，内部调 `sub_140B280F0` config.toml 修复）的调用者为 `sub_1402DC480`（router toggle，router_transition.rs）、`sub_1402E2B80`（auth-mode toggle + NativeOff compensation）、`sub_1402EE670`（router auth-mode toggle）、`sub_14032BE50`；`sub_1404A5D10`（relay-state preflight 写）的调用者为 `sub_1403267C0`/`sub_1403329C0`（诊断修复路径）。结论：写配置驱动 transition，preflight 与激活动作同层而非前置独立步骤。

##### quota / proxy_status / get_relay_active（E12）

mac-release（`evidence-supplement/E12/evidence.md`）：

- `get_relay_provider_quota` 命令体 `0x100174010`（InvokeResolver 闭包）poll `core::relay::quota::fetch_async::{{closure}}@0x1000df290`；quota 模块面：`fetch_siliconflow@0x1000e3b90` / `fetch_kimi_balance@0x1000e4390` / `fetch_minimax_coding_plan@0x1000e4a40` / `get_json@0x1000e5530` / `detect_official_provider@0x1004fb190` / `QuotaDraft::with_provider@0x1004f9d50` / `sanitize_api_key@0x1004d1f70` / `parse_extra_headers@0x1004d20d0`；格式化族 `value_to_f64/format_percent/format_currency/format_number_like`；错误族 `unsupported/unsupported_known/failed`。
- `RelayManager::compose_proxy_status@0x100258960`：callee = {Mutex::lock, OnceBox::initialize, panic_count::is_zero_slow_path, format_inner, Mutex::unlock}——锁内读状态并格式化报告字符串的纯组装。
- `RelayManager::get_active@0x100256a40`：{Mutex::lock, Vec::clone, Mutex::unlock, …}——锁内 clone 当前激活列表。

win-release：`get_relay_proxy_status` = `sub_140247580`、`get_relay_active` = `sub_140247B30`，两者为同构 dispatch shim（公共骨架 100% 相同，仅三个类型特化序列化胶水不同）；`get_relay_provider_quota` = `sub_140E20D50` 多态 async 状态机（case 0-3，27 个唯一 callee）。

##### usage refresh 系（quota 旁系，release 伪代码）

- `core::repository::normalize_usage_refresh_interval@0x100ae9060`（mac-release，`raw/.../backend/.../normalize_usage_refresh_interval.c` 全文）：按长度分派规范化间隔串——len 2：`1m`（0x6D31）/`3m`/`5m`；len 3：`30s`（`0x3033`+`0x73`）；len 6：`manual`；其余返回 nullptr。
- `usage_refresh_interval_seconds@0x100ae85e0`（全文 23 行）：normalize 失败回落默认 `"1m"`；归一结果为 `"manual"` 时返回 false（不排程自动刷新），其余 true。
- `commands::system::update_usage_refresh_schedule@0x1005028d0`（全文）：OnceLock/OnceBox 初始化全局 watcher 状态 → Mutex 锁内写调度参数，**间隔下限钳制 30**（`v6 = a2 >= 0x1F ? a2 : 30`）→ Condvar notify_all；锁中毒路径置标志字节。
- `commands::system::start_usage_refresh_watcher@0x100501f30`（全文 130 行）：`USAGE_REFRESH_WATCHER_STARTED` 一次性守卫（已启动直接返回）→ 取 Repository 状态 → 读 `get_usage_refresh_interval` 并 normalize（缺省路径常量 60）→ `update_usage_refresh_schedule` → `note_usage_refresh_activity`（SystemTime 打点）→ `std::thread::lifecycle::spawn_unchecked` 起 watcher 线程，JoinHandle 即弃（detach 语义）。
- 刷新纪律（win release 合同 `audits/windows-1.2.7-version-delta/SYSTEM-DIFF.md` §3.2）：先取/复制必要状态 → 释放锁执行慢操作 → 重取锁保存；保存失败成为 warning 而不是撤销已取得用量；可选额外刷新至多三轮，三轮仍待定时可返回首次快照（返回值不必等于最近广播值）；显示快照按同 epoch 的 revision/sequence 防旧覆盖新；事件 wire 为 `{snapshot, source, accountKey?}`，accountKey 为 None 时整个键省略。mac 侧另有「用量刷新至多 5 项一批」（`audits/macos-1.2.7-version-delta/SYSTEM-DIFF.md` §4）。

##### live_auth_state 重写（E12 邻接面，随 readiness 收缩）

`router_unlock_auth::live_auth_state`（mac-release `0x10031b9e0`，`raw/.../backend/.../live_auth_state.c` 全文 154 行）：metadata 失败 → 返回 0；`read_to_string` 失败 → 4；JSON 解析失败 → 4；之后查 `auth_mode` 字段：等于 `apikey`（6 字节逐字符大小写不敏感比较）且 `OPENAI_API_KEY` 存在（trim 后长度 ≥ 0x17 且匹配 23 字节内联模式）→ 状态 1；否则查 `tokens` 字段（类型标签 5 且非空）等分支落到判别值 3 族。即从 readiness 标记读改为读 auth.json/tokens 结构做活体凭据推断（`backend-fullchain-router-diagnostics.md` §3：bb 14→42；字面量 `auth_mode`/`OPENAI_API_KEY`/`tokens`）。保留面：`has_residue` / `marker_exists`（bb 3→11）/ `cleanup_unlocked` / `read_cleanup_backup`（bb 58→105）反而增强。

##### 转场收尾受保护进程 DB 持有闸（RT-13，win-pre）

链（`evidence-supplement/RT-13/evidence.md`）：`sub_14098BE70@0x14098be70`（src/platform/process.rs）用 Restart Manager——`RmStartSession` → `RmRegisterResources`（注册 DB 文件为资源）→ `RmGetList`（取占用者 RM_PROCESS_INFO）；`sub_14098EE20@0x14098ee20` 先跑静默关窗尝试循环（`sub_14090FAC0`，日志 `quiet-window safe shutdown request failed attempt={1}/{11} exhausted={2}`，每轮间隔 300ms = `sub_1416C57D0(0, 300000000)`），再重新枚举持有者；持有者列表非空则以 ` | ` 连接持有者显示名并套模板返回 Err（*v24=10）：

```
CODEX_DB_HELD_BY_PROTECTED_PROCESS: Codex 线程数据库仍被受保护进程占用，请先关闭相关 IDE/Codex 窗口后重试：{holders}
```

阻断点 `sub_1409357D0@0x1409357d0`（src/core/relay/router_reconciler.rs）：枚举受保护进程 → 静默关闭+复查 → 仍持有（Err）则发 `codex_process_lifecycle` / `force_close_completed` 生命周期事件并 `*a1 = -1` 向上传错——转场收尾中止。收尾相位调用者 `sub_1401BB9B0` 及兄弟（0x1401bc110、0x1401bc990、0x1401f7ff0、0x14071f400）。

##### 第三方段隔离（E7）

mac-release：`is_explicit_third_party_marker@0x100879dc0` 识别第三方切换工具标记 `cc_switch` / `cc-switch` / `ccswitch` / `codex-switch`（字面量实测）；`fix_config_third_party_text@0x10086e270` 含路由受管块标记 `# >>> aimami-relay managed start (DO NOT EDIT MANUALLY)`，文本级修复把第三方段与受管块隔离改写；`check_config_third_party@0x10085ad80`（诊断项 id `config_third_party`）；`find_third_party_base_url@0x10085d820`；结构化修复入口 `fix_config_third_party@0x1008566b0` 被 `codex_diagnostic::fix_all@0x100892620` 调用。win-release：`sub_140B29B00`（调 `sub_140B2EFB0` 处理后经 `sub_140ACCE00` 打 `config_third_party` 前缀日志并回写 a1+8..+72）+ `sub_140B2EFB0`（三分支各构不同后缀的诊断消息）+ `sub_140B76BF0`（18KB 主处理面，同段引用 4+ 处）；调用面 `sub_140A11C90` / `sub_1403170B0`。

#### 坑（⚠）

- ⚠ **CatalogFailure kind 集合双平台不一致（pre 侧）**：mac-pre 为 missingAuth/network/invalidCatalog 三种，win-pre 为五种（多 `timeout`/`tooLarge`）（`evidence-supplement/RT-01/` 双 批次）。消费侧做跨平台枚举映射时不能假设同一判别值表。
- ⚠ **`codex_bundled_cli_path` 缺失即硬错误 `CODEX_ENGINE_NOT_FOUND`，明确不退独立 CLI/IDE 插件**（mac pre→release row 22）；任何「找不到就退而求其次」的消费侧兜底都违背该边界。
- ⚠ **`catalog_db_path` 多候选歧义是显式错误，不再取首个存在路径**；无候选返回 None 而非默认路径（mac row 28，持有者谓词 `0x1008d30c0`）。依赖旧「默认路径兜底」行为的消费方会断。
- ⚠ **validated_mcp_config 拒绝即不写盘**（tag 10 + 「未修改配置」文案）；守卫比对的是「受管块标记序列」而不是语义等价——重写排版/换行若改变标记段序列同样被拒（mac-release `0x10044d180`）。
- ⚠ **official_headers 拒绝 `aimami-` / `sk-aimami-` 前缀 token**（mac-release `0x1005d2710`）：AiMaMi 自己的 relay key 不能当官方目录凭据用；Bearer 前缀缺失或值含不可打印字符也走空结果分支。
- ⚠ **官方目录拉取 4 秒单次超时不重试**（mac-pre handler `0x1008b1a70`）；win 直连通道另有「relay state poisoned / catalog configuration changed; reload client」保护分支，中毒态下不重载就直接失败。
- ⚠ **quota/proxy_status/get_active 三命令的状态读取都在 Mutex 锁内完成**（compose_proxy_status 锁内 format、get_active 锁内 clone），锁中毒走 `panic_count::is_zero_slow_path` 慢路径——消费侧不能假设无锁快照。
- ⚠ **usage refresh 的保存失败只降级为 warning，不回滚已取得的用量**；至多三轮额外刷新仍待定时返回首次快照——返回值可能落后于最近广播（win SYSTEM-DIFF §3.2）。事件里 accountKey 为 None 时整键省略（不是 null）。
- ⚠ **`update_usage_refresh_schedule` 间隔下限钳 30（秒）**：传入 <30 静默抬到 30（mac-release `0x1005028d0`）；`manual` 归一结果是「不排程」而不是报错（`usage_refresh_interval_seconds@0x100ae85e0`）。
- ⚠ **RT-13 阻断链只限 win**：持有者检测走 Windows Restart Manager API（RmStartSession/RmRegisterResources/RmGetList）；静默关窗重试日志分母为 11（attempt={1}/{11}），每轮 300ms；本模块 mac 侧无同形证据，不外推。
- ⚠ **破坏性副作用面（mac SYSTEM-DIFF §7 明示保留）**：路由修复/恢复、MCP/config 写、DB UPDATE、进程终止/重启仍是原有破坏性副作用；当前库/路径错误会阻止写入而不是 fallback 到别的数据库；诊断修复包装不可无差别压平为旧 generic fix_issue。

#### 证据点结论

| 点 | 结论 | 依据 |
|---|---|---|
| RT-01 | covered | mac-pre（handler `0x1008b1a70` + validate/serialize 全族）与 win-pre（直连 `0x1406f9c70` + app-server `0x140cba770` + 变体表）双 批次 覆盖（`evidence-supplement/RT-01/`）；release 侧 mac 由伪代码族实证（`validate_official_models@0x1005d37d0` 等，f019dbc8e267） |
| RT-08 | covered | mac-release `validated_mcp_config@0x10044d180` 反编译 全文 + 58 字节守卫文案解码（`evidence-supplement/RT-08/evidence.md`）；断言面限 mac |
| RT-14 | covered | win-release 六 handler callee 集 + preflight 三函数全调用者反查（`evidence-supplement/RT-14/evidence.md`） |
| E12 | covered | mac-release（quota 模块面 + compose_proxy_status + get_active callee 级）与 win-release（三命令体展开 + 逐 callee 比对）双 批次（`evidence-supplement/E12/evidence.md`）；与 pre 的逐体 same/重写判定留作 delta 合并输入 |
| R7（release） | covered | mac-release 44 callees 逐一枚举 + win-release 34 callees 与 R8 逐对 decompile 定性（`evidence-supplement/R7/evidence.md`） |
| R8（release） | covered | mac-release 51 callees + win-release 36 callees（`evidence-supplement/R8/evidence.md`） |
| RT-13 | covered | win-pre Restart Manager 检测 + 300ms 静默关窗循环 + 错误模板原文 + reconciler 阻断链四环齐备（`evidence-supplement/RT-13/evidence.md`）；断言面限 win |
| E7 | covered | mac-release 五函数族 + win-release 三函数面均实证「已实现或等价」（`evidence-supplement/E7/evidence.md`） |

---

### 2.7 router-no-account-pre

**转场闭环 / no-account 提交边界 / 诊断修复键**

#### 变更面（1.2.6 → 1.2.7-release）

**新增**

1. 只检查诊断键 `router_recovery_record`（RT-12）：mac-pre 唯一引用点在 `codex_diagnostic::run_diagnostics_with_mode@0x100742bb0`（site 0x100743160）；win-pre 在诊断 runner `sub_1409A45C0` 内 2 站点（0x1409a4c98 / 0x1409a4e21）。两侧修复分派均无对应臂——CHECK-only（`evidence-supplement/RT-12/` 双 批次）。
2. 诊断命令化面：13 个诊断键（`config_access` / `router_recovery_record` / `config_replace_readiness` / `proxy_running` / `router_postcondition` / `thread_history_integrity` / `native_off_invalid_openai_thread_models` / `thread_response_item_ids` / `residual_manifest` / `residual_cache` / `relay-state-cache` / `official_catalog_freshness` / `api_key_integrity`），mac 体 40131B/1243bb/103cal（`run_diagnostics_with_mode`），win 双引擎（`0x140f427e0` 997bb + CHECK 引擎 `0x140f10f70` 持全部 13 键）（`backend-fullchain-router-diagnostics.md` §1、`backend-fullchain-win-router-catalog.md` §1）。DTO 面 DiagnosticReport/DiagnosticItem/FixResult 字段级已闭合（`audits/COVERAGE-FINAL-1.2.7.md` router 行）。
3. RT-09 转场 journal committing 相位与 `ROUTER_COMMIT_*` 恢复态合同（见真实逻辑）。

**修改**

4. 诊断修复分派键 24→23（RT-11）：`native_off_invalid_openai_thread_models` 的 INLINE 修复臂双平台删除，键降级为只检查；mac 23 键 == win 23 键 1:1（win 侧字节级 case 表：1.2.7 fix 分派器 `sub_140F58A10` = 23 键 / 14 bucket；证据目录 `raw/aimami/1.2.7/windows-x64/relay/codex_diagnostic/_shared-fix-dispatcher-sub_140f58a10/`）。mac-pre 侧：`fix_issue@0x10077b370` 的 23 个 `fix_*` 臂活体枚举无该键（`evidence-supplement/RT-11/` 双 批次 + `audits/COVERAGE-FINAL-1.2.7.md` router 行）。
5. R7/R8 pre 侧 callee 集合实证（供 pre↔release 集合级 diff）：mac-pre R7 `RelayManager::set_codex_router_no_account_mode@0x10058d110`（19 个 codexmate 调用目标）、R8 `RelayManager::set_codex_router_enabled@0x100588890`（30 个）；win-pre R7 `sub_14036E160`（34 callees）、R8 `sub_1403713D0`（35 callees）（`evidence-supplement/R7|R8/evidence.{mac,win}-pre.md`）。
6. R4 postcondition→诊断→修复→重试闭环在 pre 双侧实证（mac-pre 执行器 `router_transition::run_with_environment@0x1008601d0`；win-pre 转场状态机族 + postcondition 探针 `sub_1409A45C0`）（`evidence-supplement/R4/` 双 批次）。
7. RT-10 no-account provider 门：`verify_no_account_commit_boundary@0x10077f0e0`（mac-pre）/ `sub_1401F7250`（win-pre）的拒绝路径逐条条件实证（计数差异见坑）。

**移除**

8. `native_off_invalid_openai_thread_models` 修复臂（同 4；release 同样 23 键）。
9. `set_codex_no_account_slots` IPC 删除（收编 legacy 校验 + 恢复链，见模块 B2 变更面 14）。

#### 真实逻辑

##### fix_issue —— 23 臂修复分派（RT-11 行为基座，mac-pre 伪代码全文）

`codex_diagnostic::fix_issue@0x10077b370`（mac-pre，641 行全文 `raw/.../backend/codexmate_lib::core::relay::codex_diagnostic::fix_issue.c`）：入口先跑 `fix_requires_quiet_window` 静默窗校验（`a8` 强制标志可绕过）；随后 `switch (key_len)` + 逐臂常量比较（内联 8 字节/XOR 比较键串）分派到 23 个 `fix_*` 实现；键不匹配落 LABEL_47 默认。臂清单（伪代码 xref 枚举，与 RT-11 mac 证据一致）：

```
fix_config_stale, fix_auth_integrity, fix_residual_cache, fix_catalog_integrity,
fix_residual_manifest, fix_state_db_relocation, fix_router_http_contract,
fix_catalog_path_validity, fix_requires_quiet_window, fix_config_global_validity,
fix_takeover_backup_orphan, fix_config_third_party_text, fix_config_toml_syntax_text,
fix_legacy_migrated_threads, fix_orphan_thread_providers, fix_project_state_integrity,
fix_thread_missing_rollouts, fix_thread_response_item_ids, fix_router_unlock_auth_residue,
fix_thread_provider_consistency, fix_config_profile_conflict_text,
fix_thread_poisoned_instructions, fix_thread_model_catalog_consistency   (23)
```

`fix_all`（mac 29 callees）前置 `diagnostic fix-all requires a verified ChatGPT quiet window`，覆盖 auth_integrity / router_unlock_auth_residue / takeover_backup_orphan / config_toml_syntax / config_third_party / config_profile_conflict / config_stale / router_http_contract / catalog_integrity / catalog_path_validity / rollout_orphan_providers / db_orphan_providers（`backend-fullchain-router-diagnostics.md` §2）。命令层 `RelayManager::fix_diagnostic_issue`（mac-pre `0x100584e60`，47 callees）引用键仅 `router_postcondition` / `missing_rollouts` / `thread_missing_rollouts` / `reconciling_threads` / `restoring_config` / `all`，输出 `DiagnosticRepairOutcome`；字面量 `Codex router transition lock is poisoned` / `repairing Codex diagnostics`。

`native_off_invalid_openai_thread_models` 键只存在于检查侧：mac-pre `run_diagnostics_with_mode`（sites 0x100744f24 / 0x100745b4d）+ `mark_transition_in_flight@0x100742620`（site 0x100742723）；win-pre 诊断 runner `sub_1409A45C0` 内 4 站点构造 issue 记录、键匹配器 `sub_1409A3DE0` case 39（39 字符键串 SSE 比对）；描述串「NativeOff 官方线程模型检查（路由启用中，跳过）」「NativeOff 官方线程模型正常」「条旧对话保留了中转模型选择」——只读检查语义，路由启用中跳过（`evidence-supplement/RT-11/evidence.win-pre.md`）。

##### router_recovery_record —— 只检查键的判定链（RT-12）

mac-pre（`evidence-supplement/RT-12/evidence.mac-pre.md`）：`run_diagnostics_with_mode` 内 `std::fs::read_to_string` 读恢复记录文件 → `std::io::Error::kind` 分类 → 成功走 `ok_item`（相邻文案「路由恢复记录可正常读取」）；随后 `router_transition::ensure_recovery_records_allowed@0x100877b40`（全文 1785 字符）做链式只读校验——`transition_journal::read_checked` → `codex_thread_visibility::validate_model_restore_journals` → `config_takeover::validate_recovery_backups`，任一级失败即返回错误结构，全程无写；失败路径走 `CoreError::fmt` 构造错误项。win-pre：诊断 runner 两站点经 `sub_140D76130` 读取/校验 + `sub_140906570` 辅助判定后组装 issue；描述串「路由恢复记录可正常读取」「路由恢复记录需要单独处理」「恢复资料已保留；当前自动修复不会覆盖或删除它。」——明示自动修复不触碰该记录。

##### R4 闭环 —— postcondition→诊断→修复→重试

mac-pre（`evidence-supplement/R4/evidence.mac-pre.md`）：执行器 `router_transition::run_with_environment@0x1008601d0`（size 18197）内调用点按地址序：

```
0x100860201  ensure_recovery_records_allowed        ; 前置：恢复记录校验（RT-12 同链）
0x100860429  write_journal + CodexTransitionFence::acquire_with_policy
   …（迁移 mutation 段：commit_reconciled_target / persist_with_commit）
0x1008608d8  codex_diagnostic::fix_issue            ; 诊断+单键修复
0x100860958  verify_target_state_at_with_depth      ; postcondition 校验①
0x1008609a0  reconcile_current_mode_after_stop      ; 不一致时重收敛
0x100860af6  codex_diagnostic::fix_all              ; 内含 2× run_diagnostics_with_mode + fix_issue
0x1008611e8  CodexTransitionFence::finish
0x1008612fb  verify_target_state_at_with_depth      ; postcondition 校验②（修复后重验）
0x10086132b  format_violations                      ; 仍违规 → 违规清单进错误
```

`verify_target_state_at_with_depth` → `invariants::verify_invariants_with_depth@0x100967cf0`（RouterConfigSurface::parse / verify_thread_provider / verify_router_on_http_contract / config_surface_violations_for_surface）+ `proxy_handle_port_accepts`。`run_with_environment` 被 R8（`set_codex_router_enabled@0x100588890`）调用；R7 走姊妹入口 `run_with_writer_policy@0x100872d60`。

win-pre（`evidence-supplement/R4/evidence.win-pre.md`）：postcondition 探针 `sub_1409A45C0`（字符串面含 `.aimami_probe` 探针文件与 `router_postcondition` 键，命名 callee 含 `check_takeover_backup_orphan` / `legacy_migrated_threads_apply`）；转场主状态机 `sub_140954330`（LABEL_69 调探针）；失败时 ICF 折叠变体族（`sub_140DB56E0` / `sub_140DBC3E0` / `sub_140DC2880` / `sub_140DC84B0` / `sub_140DCE020` / `sub_140DD3C60`）格式化 ` postcondition still failed: {0}` 并以 `postcondition_failed` 为事件名发事件；修复链 `repair_if_needed@0x1409eec80` + `sub_1409BF9A0`（修复后接诊断键校验分类，修复失败构造 39 字节错误）；消息表（0x141a9b700 区原文）：`remained clean after Codex re-entry (attempt={1}…)` / `Codex re-entry changed {0}; retrying (attempt={1}, violations={2})` / `retrying attempt={0} error={1}` / `settle_failed` / `reconcile_failed`——attempt 计数贯穿，postcondition 失败 → 诊断/修复 → 重试直至 clean 或耗尽。

##### RT-09 —— 转场 journal 提交回读与恢复态

win release 内容闭合事实（`release-fd5f0c5aa7d5-content-closure-router-catalog-mcp-lifecycle.json` facts[13] `journal-recovery-commit`，verdict `same-critical-recovery-facet`）：恢复可见阶段为 `retrying` / `committing` / `reconciling` / `stopping_codex`；**已 committing 记录不能被普通新阶段覆盖**；target 不符或同步未确认时保留恢复记录并返回 `ROUTER_COMMIT_RECOVERY_REQUIRED`，明确**不自动启动 ChatGPT**；三个 transition 完成器区分 `commit_failed` / `commit_sync_unconfirmed` / `degraded`；只有成功路径写完成阶段并清理相应恢复记录；pre 存在同一 critical 错误与 phase/target 分支。release 锚点：相位分派 `0x140cc4980`（case 8/0xA/0xB/0xE）、提交操作体 `0x140cbff40`（`committing` 八字节常量 `0x697474696D6D6F63` 比较；`ROUTER_COMMIT_RE…` 170 字节消息引用行）、`0x140cbfa50`（commit quiet-window 面）。

mac 侧锚点（mac pre→release 模块归约 row 13/14，`release-f019dbc8e267-router-engine-platform-baseline-content-reduction.json`）：pre `has_confirmed_target_state@0x10058ac60` 完整旧体读取 checked journal 后检测十字节 `committing` 标记——journal 读错或处于 committing 均判 false，其余走 `verify_target_state_at_with_depth(...,0)` 且 violation 数为 0 才 true；pre `rollback_router_enabled_stably@0x10058c0b0` 已有 `begin_commit` / pending commit 检查 / `persist_with_commit` / `Publication::require_sync` / `warn_after_commit` / 失败保留警告全链。mac SYSTEM-DIFF §7 同述：recovery journal/backup、commit_pending、require_sync、commit 警告保留/清理原已在调用链，不把展开显示算新增安全保障。

##### RT-10 —— no-account provider 提交边界门（六/七条拒绝路径）

mac-pre `router_reconciler::verify_no_account_commit_boundary@0x10077f0e0`（13181 字符全文）+ 错误映射闭包 `0x10077fdc0`（`evidence-supplement/RT-10/evidence.mac-pre.md`）。六条拒绝构造点（全部 `*a1 = 10` 错误变体，命中即终止，无部分提交）：

| # | 判定条件 | 消息前缀（`no-account provider refused: ` 省略） |
|---|---|---|
| 1 | 本地代理 URL `url::ParseOptions::parse` 失败 | `invalid local proxy URL: ` |
| 2 | 代理非精确 loopback HTTP 端点：scheme 必须 `http`、host_str 必须 `127.0.0.1`、path 必须空或 `/` | `proxy is not an exact loopback HTTP endpoint (` |
| 3 | `std::fs::read_to_string` 读 converged config.toml 失败 | `cannot read converged config.toml: ` |
| 4 | router HTTP contract 校验 mismatch 列表非空（2 字节分隔符 join 后格式化） | `router HTTP contract mismatch: ` |
| 5 | `codex_writer::read_top_level_string_value("model_catalog_json")` 读取失败，或读出路径与预期路径 `Path::components` 不等 | `model_catalog_json does not point to ` |
| 6 | `read_catalog_model_slugs` + `read_catalog_no_account_mode` 后，no-account 目录 slug 集与选中 relay 模型/legacy 别名 HashSet 不等 | `no-account catalog does not match the selected relay models and legacy aliases; `（107 字节） |

闭包 `0x10077fdc0` 提供第 7 条变体 `converged config.toml is invalid: `（TOML 解析失败映射，同属第 3 条关卡的不同失败面）。另有无前缀姊妹错误 `no-account catalog mode mismatch`（32 字节内联，read_catalog_no_account_mode 后 mode 标志不符）。

win-pre `sub_1401F7250@0x1401f7250`（14127 字符全文，`evidence-supplement/RT-10/evidence.win-pre.md`）：实测 **7 条**带前缀拒绝 + 1 条无前缀姊妹错误；与 mac 差异——第 2 条增加 port 非零要求；第 3/4 条（cannot read / invalid config.toml）是独立包装函数 `sub_1401DC750` / `sub_1401DC690`；第 6 条两侧路径分别 canonicalize 后比较。调用者唯一：`sub_1401B9E10`（src/core/relay/router_transition.rs）——拒绝面发生在 router 转场/no-account 校验段。

##### R7 / R8 pre 侧 callee 集合与结构差异

mac-pre（`evidence-supplement/R7|R8/evidence.mac-pre.md`）：R7（19 目标）经 `run_with_writer_policy` 执行迁移、直接调 `transition_journal::commit_pending_error`、复用 `set_codex_router_enabled::{{closure}}@0x10058a760` 做委托，收尾 `restore_router_enabled_stably` + `verify_target_state_at_with_depth`；R8（30 目标）独有 `run_with_environment`（R4 闭环执行器）、`rollback_router_enabled_stably`、`has_confirmed_target_state`、两个 `*_for_snapshot` stale 判定、`reconcile_current_mode_locked_from_with_writer_policy`、`CodexRelaunchPolicy::relaunch_after_verified_state`、`record_router_event/timing`、`relaunch_error_detail`、`format_invariant_violations`、`app_event`。win-pre：R7 `sub_14036E160`（34 callees）/ R8 `sub_1403713D0`（35 callees），共享 router 命令脚手架（设置存储写 `0x1404c0180`、事件 emit `0x140b39980`、catalog 读写族 `0x1406440d0`/`0x1406458c0`），R8 独有 0x1400197d0/0x1402606f0/0x140281a40/0x1404bcab0，R7 独有 0x14001a0c0/0x140260860/0x140281380。

release 侧对照（mac）：R7 release `0x100263400`（44 callees）改为经 `run_with_environment@0x10022e390` 执行（pre 是 run_with_writer_policy），链为 gate→snapshot→journal read_checked/commit_pending/commit_pending_error→RouterOnPlan from_state/prepare→run_with_environment→into_verified_parts→verify→restore_stably→persist_with_commit+Publication::acknowledge，DTO `CodexRouterNoAccountModePayload::serialize@0x100a02d00`；R8 release `0x10025b710`（51 callees）保留 relaunch/rollback/format_invariant_violations 全链。

##### model_fallback / legacy 恢复链

`codex_thread_visibility::model_fallback::restore_relay_model_threads`（mac-release `0x100af6c70`，`raw/.../backend/.../model_fallback::restore_relay_model_threads.c`——该文件前 45 行后截断，正文待续）。win-pre 关联恢复链 `sub_1401F7FF0`（`no_account_model_restore` 串 xref，`evidence-supplement/R7/evidence.win-pre.md`；同地址在 RT-11 win 证据中定性为 native_off_config_sync 修复 handler——同一函数在两条链的角色归并以函数级证据为准）。旧 `set_codex_no_account_slots` 命令面删除后，legacy 别名经 `validate_legacy_no_account_aliases`（见模块 B2）校验、恢复走 restore 链，诊断面新增 `router_recovery_record` 只检查键看守恢复记录。

#### 坑（⚠）

- ⚠ **fix_issue 静默窗门可被调用方强制标志绕过**：`fix_requires_quiet_window` 先行校验，但 `a8` 为真时直接跳过分派（mac-pre `0x10077b370` 入口分支）——「修复前必静默窗」不是绝对不变量。
- ⚠ **no-account 门命中即终止（*a1=10），无部分提交**：六/七条条件按固定顺序评估，先命中者决定用户看到的错误；排查时后序条件可能被前序掩盖（`verify_no_account_commit_boundary@0x10077f0e0` / `sub_1401F7250`）。
- ⚠ **loopback 判定是精确值比较**：scheme 恰为 `http`、host 恰为 `127.0.0.1`、path 空或 `/`（win 另要求 port 非零）——`localhost`、IPv6 `::1`、`https` 一律拒绝（RT-10 第 2 条）。
- ⚠ **拒绝路径计数不要强行凑「六」**：mac-pre 为 6 条主函数 + 1 条闭包变体；win-pre 实测 7 条带前缀 + 1 条无前缀姊妹错误 `no-account catalog mode mismatch`（`evidence-supplement/RT-10/evidence.win-pre.md` 计数差异说明）。
- ⚠ **RT-11 是行为删除**：`native_off_invalid_openai_thread_models` 从 24 键分派中删臂降为只检查——保留了中转模型选择的旧对话从此只被诊断、不再被自动修复（双平台，win 字节级 case 表 + mac 臂枚举互证）。
- ⚠ **`router_recovery_record` 明示自动修复不触碰恢复资料**（win-pre 描述串原文「恢复资料已保留；当前自动修复不会覆盖或删除它。」）；该键异常需要人工/单独处理路径。
- ⚠ **win-pre postcondition 探针带 `.aimami_probe` 探针文件副作用**（`sub_1409A45C0` 字符串面）——诊断不全是纯读。
- ⚠ **R4 闭环的 postcondition 校验跑两次**（迁移后一次、fix_all 后一次）；第二次仍违规时 `format_violations` 把完整违规清单（32 字节步进、` | ` 连接）拼进错误——错误文本体量随违规数增长。
- ⚠ **RT-09 已 committing 的 journal 记录不可被普通新阶段覆盖**；target 不符/同步未确认返回 `ROUTER_COMMIT_RECOVERY_REQUIRED` 且**不自动启动 ChatGPT**——恢复是显式动作，消费侧不能假设转场失败后系统会自愈或自动拉起引擎。
- ⚠ **release 侧 R7 换了执行器**：pre 走 `run_with_writer_policy`，mac-release 改走 `run_with_environment@0x10022e390`（R4 闭环执行器进入 no_account_mode 转场路径）——按 callee 证据（pre 19/30 目标 vs release 44/51 callees），不要把 pre 的双入口分工照搬到 release。
- ⚠ **破坏性副作用集中在 fix_* 家族**：config/threads 表写、SQL 事务 COMMIT/ROLLBACK、`databaseBackups`/`config-backups` 备份、孤儿线程收养的条件 UPDATE（`WHERE id=?2 AND COALESCE(archived,0)=0 AND model_provider=?3` 及条件变体）、收养回滚 UPDATE、`-wal`/`-shm` 占用探测（lsof）、`fix_thread_poisoned_instructions` 清理注入系统提示词（`backend-fullchain-router-diagnostics.md` §2 表）——全部有备份 + quiet-window 前置纪律，但均为真实写操作。
- ⚠ **诊断进程扫描叶平台分叉**：mac 用 `ps -ax -o etime=,comm=` 子进程 + `CFBundleShortVersionString` 读取；win 用 Toolhelp32 API 族（`CreateToolhelp32Snapshot`/`Process32FirstW`/`Process32NextW`，三个扫描叶 `0x140ee4dc0`/`0x140ee8460`/`0x141040bc0`），win 二进制无 shell-out（`ps`/`tasklist` 均 0 命中）（`backend-fullchain-win-router-catalog.md` §3）。
- ⚠ `restore_relay_model_threads` 的 mac-release 伪代码文件前 45 行后截断（`raw/.../backend/.../model_fallback::restore_relay_model_threads.c`），model_fallback 正文级逻辑证据尚缺。

#### 证据点结论

| 点 | 结论 | 依据 |
|---|---|---|
| RT-01（pre 出处） | covered | mac-pre handler/validate/serialize 全族 + win-pre 双通道（`evidence-supplement/RT-01/`），见模块 B2 |
| RT-09 | covered | win-release 闭合事实 facts[13]（三锚点 `0x140cc4980`/`0x140cbff40`/`0x140cbfa50`，判定 pre 同形）+ mac 侧 row 13/14 pre 体证据与 release 字符串面（`ROUTER_COMMIT_STATE_CONFLICT` 等）+ mac-pre 逐体补证（2026-10-27，`evidence-supplement/RT-09/evidence.mac-pre.md`）：`begin_commit@0x1003a4620`→write_inner+`require_sync` 落盘 fsync、`verify_router_commit@0x10087c600` 回读逐字段比对（STATE_CONFLICT 139B @0x1018ce84b）、`commit_pending_error@0x1003a6520`（170B RECOVERY_REQUIRED @0x101827c65 含「ChatGPT 不会自动启动」）、`commit_verified@0x10085ad20` 编排 + commit_failed/commit_sync_unconfirmed/degraded 收尾全部实证 |
| RT-10 | covered | mac-pre 主函数+闭包全文六条逐条件 + win-pre 全文七条逐条件（`evidence-supplement/RT-10/` 双 批次） |
| RT-11 | covered | mac-pre 检查侧 3 站点 + 23 臂枚举无该键；win-pre 键串 5 站点全在诊断链 + 字节级 case 表 24→23 双平台互证（`evidence-supplement/RT-11/` + `raw/aimami/1.2.7/windows-x64/relay/codex_diagnostic/_shared-fix-dispatcher-sub_140f58a10/`） |
| RT-12 | covered | mac-pre 判定链（read→kind→ensure_recovery_records_allowed 三级只读链）+ win-pre 两站点与描述串原文（`evidence-supplement/RT-12/` 双 批次） |
| R4 | covered | mac-pre 执行器调用序列（双 postcondition 夹诊断/修复/重收敛）+ win-pre 探针/状态机/事件/重试模板四环（`evidence-supplement/R4/` 双 批次） |
| R7 | covered | 四 批次：mac-pre 19 目标、win-pre 34 callees、mac-release 44 callees、win-release 34 callees 及与 R8 差异对定性（`evidence-supplement/R7/`） |
| R8 | covered | 四 批次：mac-pre 30 目标、win-pre 35 callees、mac-release 51 callees、win-release 36 callees（`evidence-supplement/R8/`） |

---

### 2.8 accounts

**账号**

#### 变更面（1.2.6 → 1.2.7-release）

**命令集（IPC）**：1.2.6 = 134 条命令，1.2.7 = 147 条（+20/−7/1 参数漂移），双平台 ipc-contracts 集合完全一致（证据：`audits/BASELINE-FINAL-1.2.7.md` §1）。accounts 域新增 4 条：

| 命令 | 说明 | 证据 |
|---|---|---|
| `set_account_alias` | 账号备注编辑（A4） | mac release 命令 glue `run::{{closure}}::hedfc5786f01a444d` @ `0x1007040e0`（f019dbc8e267）；win-pre handler @ `0x140362320`（51cb41b613aa）；`frontend-command-diff.json` `ipc_contracts_added` |
| `get_account_reset_credits` | 重置卡余额/状态 | mac fullchain §3；win-pre handler @ `0x140361020` |
| `get_account_reset_credit_history` | 重置卡发放历史 cursor 分页（A6） | win-pre handler @ `0x14035faa0`；mac release `core::account_reset_credits::fetch_history` @ `0x1009fc9c0` |
| `load_runtime_display_snapshot` | 运行时显示快照 getter | **win-only 注册**（win glue `0x1405EC7D0`；mac 双版本零符号）；getter 零参只读，`data=RuntimeDisplaySnapshot|null` 不把成功信封改失败（`BASELINE-FINAL-1.2.7.md` §4、win SYSTEM-DIFF §3.2） |

用量刷新族新增 2 条：`get_usage_refresh_all_accounts` / `set_usage_refresh_all_accounts`（A8）。注意 `get/set_usage_refresh_interval`、`start_usage_refresh_watcher` 为 1.2.6 既有命令，不在 +20 集合（`frontend-command-diff.json` 实证）。

**参数漂移**：`load_quota_history` 增加 `range` 参数（`frontend-command-diff.json` `param_drift: {"load_quota_history": {"added": ["range"]}}`；前端契约 `argKeys:["accountKey","range"]`，默认 `"week"`，双平台一致）。

**DTO / 值域**：
- `PlanType` JSON 值域 9 → 11 项：新增 `go`、`pro500`。完整值域 = `{free, go, plus, pro5x, pro20x, pro500, team, business, enterprise, edu, unknown}`；`unknown` 判别值由 8 漂移到 **10**。mac release：`PlanType::deserialize` @ `0x100277630`、`FieldVisitor::visit_str` @ `0x100282cf0`（11 项值域 switch，f019dbc8e267）；win release：序列化双生子 `sub_1402FBE20` / `sub_1402FBF00`、slug 串池 `0x1418520d7` 起、slug→枚举 (len,ptr) 解析表 `0x141853270`（fd5f0c5aa7d5）。
- `AccountSummary` 仍 25 键、`ExportedAccount` 仍 14 键且包含 auth——**无字段面删除**（mac SYSTEM-DIFF §4）。

**内部状态机（非 IPC，行为变化）**：
- 切换失败回滚重写：`capture_switch_rollback_state` bb 216→462（快照字段扩到约 30 个 String + 5 次 `FileRestoreState::capture`）；新增 `finish_switch_failure_with_client`（sz 9891、bb 352，1.2.6 无此函数）；新错误码 `SWITCH_ROLLBACK_CAPTURE_FAILED`、`SWITCH_LIVE_VERIFY_FAILED`（mac fullchain-accounts §1，decomp-1.2.7/ 263 函数全量提取）。
- OAuth 持久化新增 `OAUTH_COMMIT_NOT_STARTED` / `OAUTH_CLIENT_UPDATE_DEFERRED` 分支（A5）：mac release `persist_oauth_account` @ `0x100320780`；win-pre owner `sub_14017C4C0` @ `0x14017c4c0`。
- 账号观测者新子系统：`commands::account_observer::{run,start}` + `core::account_observation` 8 fns（常驻线程 `aimami-account-observer`，auth.json 守卫链），服务到期高亮（mac fullchain-accounts §4.1）。
- 启动后核验链 pre→release 地址换面但算法保留（见 ACC-12）：win pre `0x14042f320→0x14042de60→0x140ec8db0→0x140d05b20` → win release `0x1405ced90→0x1405cdef0→0x140367780→0x140a4dbb0`；mac release `verify_after_launch` @ `0x1003223e0`。
- refresh 请求 User-Agent `AiMaMi/1.2.6` → `AiMaMi/1.2.7`（win SYSTEM-DIFF §3.1；POST endpoint、grant 面与 **15 秒 HTTP 时限保留**）。

**前端变更面**（双平台 bundle 逐字节一致：`accounts-page-qAKt90X_.js` md5 `26b85ad671affdcf7f0b125f91dca335`、`index-BfxRLS9t.js` md5 `10c015de6f5be4497e662e90f042ff9a`）：
- Go/Pro500 名称与徽标（ACC-01 badge）：徽标映射表 `gr={free:Cs,go:Ps,plus:Ts,pro5x:At,pro20x:At,pro500:Ss,team:_s,business:ws,enterprise:Ht,edu:ks,unknown:null}`，徽标渲染 `br({plan,unknownLabel})` 输出 `<span class="account-plan-badge" data-plan data-premium data-pro>`；套餐顺序表 `Dr=["free","go","plus","pro5x","pro20x","pro500","team","business","enterprise","edu"]`（`accounts-page-qAKt90X_.js`）。
- Go/Pro500 价格展示（ACC-02）：名称/价格表 `$m={free:{name:"Free"},go:{name:"Go"},plus:{name:"Plus"},pro5x:{name:"Pro",price:"$100"},pro20x:{name:"Pro",price:"$200"},pro500:{name:"Pro",price:"$500"},team:{name:"Team"},business:{name:"Business"},enterprise:{name:"Enterprise"},edu:{name:"Edu"},unknown:{name:"Unknown"}}`；查询函数 `h$` 未命中回落 `unknown`，拼接函数 `p$` 输出 `"name price"`（`index-BfxRLS9t.js`）。审计口径把价格点挂在 mac 平台，实测 win release bundle 与该表字节一致（同 md5）。
- 账号卡备注编辑入口（ACC-03 前端）：卡内联编辑组件（编辑态/草稿 state），i18n keys `accounts.remark` / `accounts.editRemark` / `accounts.remarkSaveFailed`，保存链 `setAccountAlias(accountKey, alias)` mutation（`accounts-page-qAKt90X_.js`）。
- 重置卡历史展示区（ACC-05 前端）：`useInfiniteQuery` + `pageParam` → `get_account_reset_credit_history(accountKey, cursor)`；details/summary 折叠区（`accounts.resetCards.history`/`historyRange`）；「更多」按钮 `fetchNextPage`（加载中 spinner + disabled）；行内 `occurredAt`/`received`，`viewDetails` 对话框（`accounts-page-qAKt90X_.js`）。
- 刷新全部账号开关（ACC-06 前端）：独立 chunk `usage-refresh-scope-setting--ewDlHx4.js`（md5 `ad6f40177ed3a40b8649c9262871ef06` 双平台一致）Switch 设置项 `settings.refreshAllAccounts` + `settings.refreshAllAccountsDesc`；设置页接线 `settings-page-lEVBjq2v.js`；IPC 读写 `get/set_usage_refresh_all_accounts`（`index-BfxRLS9t.js`）。
- 配额历史 range 切换（ACC-07 前端）：quota tab 下 `["today","week","month"]` 三档分段按钮（activity tab 另为 `["week","month","year"]`），`aria-pressed` 标当前档；选中档同时进 `queryKey:["quota-history",…]` 与 `loadQuotaHistory` 第二参，`staleTime=30000`（`analytics-panel-BnxRO0Iq.js`，md5 `59db9235b489ee78d05cefdbf660d600` 双平台一致）。

#### 真实逻辑

**`set_account_alias`（ACC-03，A4）**——mac release core `core::repository::account_alias::<impl Repository>::set_account_alias` @ `0x100adce90`（f019dbc8e267，伪代码 `raw/aimami/1.2.7/macos-arm64/backend/codexmate_lib::core::repository::account_alias::_<impl ...>::set_account_alias.c`，323 行）：

1. `normalize_alias` 先校验/规整备注文本（校验失败直接返回错误变体 `*a1=3`）。
2. `FileLock::acquire("account state.oauth-refresh.lock")`——**与 OAuth 刷新/持久化共用同一把文件锁**（mac-pre 补证：`FileLock::acquire` @ `0x100966b50` 全库 26 个调用方，含 `oauth_refresh::refresh_token_with_policy` @ `0x1007f0410`、`account_oauth::persist_oauth_account` @ `0x1007aac80`）。
3. 锁内 `load_local_state`，第一轮按 384 字节步进扫账号记录、按 id（ptr+len memcmp）定位；第二轮按 424 字节步进扫 registry 条目，先比对现存 alias（entry+272/+280）。
4. alias 不同则重新分配并把新串三元组（ptr/len/cap）写入条目偏移 +256/+264/+272，随后 `persist_registry(…, 1)` 落盘。
5. 找到活跃账号（记录内 `byte+753==1`）→ clone 其 `AccountSummary` → `make_status_payload_with_service_state` 重建运行时显示快照 → `CoreEnvelope::ok_with_warnings` 返回。
6. 错误路径：账号 id 未命中 → `Account is no longer available`（30B）；锁失败/载入失败原样透传。win-pre 互证：handler @ `0x140362320` 内 `runtime_display_state_update_and_emit(…, "account-alias", 13, …)` 把别名并入运行时显示快照并 emit；核心实现 `sub_14014EFF0`（`src\commands\account_alias.rs`）带锁占用守卫（`_InterlockedCompareExchange8`）与 Mutex poison 检测。

**重置卡历史分页（ACC-05，A6）**——四层结构（commands/core/repository/serde）：
- 命令上下文 `commands::account_reset_credits::request_context` @ `0x100a002e0`（mac release）：装配请求上下文，忙时 `Account state is busy`；守卫链 = ChatGPT 凭据存在 → 凭据可读 → 账号身份匹配，错误面 `Account is no longer available` / `Reset card credentials are unreadable` / `Reset card account identity does not match` / `Reset card details require ChatGPT login credentials`（release 语义写回块 + repository `reset_credit_context` @ `0x100ae1ae0`）。
- 分页协议：`fetch_history` @ `0x1009fc9c0`（mac release，360 行伪代码）：解析响应 `events` 数组 + `next_cursor`（snake_case 键原样解析）；对响应里的 `next_cursor` 也跑 `validate_cursor`；逐事件校验 `type=="granted"` 且 `id` 存在且 ≤0x100；`occurred_at` 经 `chrono::DateTime::parse_from_rfc3339` 解析；事件按 id 进 hashmap 去重。任一不符 → `Reset credit details returned an invalid response`（49B）。
- 游标校验 `validate_cursor` @ `0x1009fd240`（mac release）：null 游标放行；长度 >0x800 拒绝；逐 UTF-8 字符解码，拒绝控制字符（<0x20）与 0x7F–0x9F 区段，错误文案 `Invalid reset credit history cursor`（35B）。
- 副作用=只读（无本地写）；snake_case→camelCase 由 serde 层承担（4 个 Serialize impl）。
- win-pre 互证：handler @ `0x14035faa0`，响应解析 `sub_1407180A0`（同 `events`/`next_cursor`/`granted` 校验与同 49B 无效响应文案）。**证据面注意**：win-pre 补证以子串 `invalid cursor` 检索零命中——真实串是更长的 `Invalid reset credit history cursor`，该检索口径不覆盖它；win 侧同款文案未独立实证，如实标注。

**刷新全部账号开关（ACC-06，A8）**——mac release 命令 glue @ `0x1006fa530` 调 `commands::system::set_usage_refresh_all_accounts`（入参 `enabled` bool + `repo` state）；win-pre：setter @ `0x1405f2b40`（入参字段 `repo`/`enabled`，写设置存储后读回校验），getter @ `0x140725670`（读设置存储后 `WakeByAddressSingle` 唤醒等待者——守护任务按开关等待/唤醒的机制证据）。守护侧：仓储模块 `core/repository/usage_refresh.rs`，`normalize_usage_refresh_interval` 默认 `5m`、特殊值 `usage_401_retry`（401 退避触发刷新）；watcher 线程按 schedule 轮刷——开关开启时刷全部账号、关闭时只刷活跃账号（mac fullchain-accounts §4.2；守护循环体逐行未单独逆出，win-pre 补证已标注边界）。

**配额历史 range 切窗（ACC-07，合并 T8）**——win-pre：`load_quota_history` handler @ `0x140384ec0`；range 解析/切窗 `sub_1407C77A0`（`quota_history.rs` 面）：先取本地时间（失败 panic 守卫 `Local time out of range`），再按串长度+内容分派——`today`=自然日 0 点（日序号换算，400 年=146097 天儒略历修正）、`week`=自然周起点（weekday 偏移归周）、`month`=自然月 1 日（月长表 + 修正表；日期越界报 `Quota history date is out of range`）；其它值 → `Quota history range must be today, week, or month`（49B，错误变体 9）。文件不存在时返回空列表；「剔除未来时间戳」无独立字符串面（strings 含 `future` 条目均为 async executor/rustc 路径），win-pre 补证未在 42KB 状态机内逐行隔离该比较，如实标注。mac 侧对应体 `core::quota_history` 模块已记录（release idb-module 清单）。

**OAuth 持久化两新分支（ACC-09，A5）**——mac release `persist_oauth_account` @ `0x100320780`（690 行伪代码）；win-pre owner `sub_14017C4C0`（23994 字符全量）：
- `OAUTH_COMMIT_NOT_STARTED`（mac @ `0x1003210c3` 段 / win @ `0x14017cf93`）：commit 状态 = 未开始（win 侧 `v92 == -2`）的 else 臂，组装 `OAUTH_COMMIT_NOT_STARTED: active account could not be saved`（59B）并入聚合错误串返回——**错误变体，非延迟**。
- `OAUTH_CLIENT_UPDATE_DEFERRED`（mac @ `0x10032172b` / win @ `0x14017d455`）：commit 已完成但客户端登录态更新未确认时触发；28B 错误码套中文说明模板「新凭据已保存，但客户端登录状态尚未确认，请确认当前登录状态后重新授权该账号：」，随后记入 deferred 状态继续（**非致命**）；mac 侧可见该码被 push 进 deferred 错误 Vec。
- 写入顺序：先落盘并发事件 `account_oauth`/`disk_committed`，再更新客户端登录态；邻接后缀模板 ` | CLIENT_RESTART_FAILED: ` / ` | CLIENT_RESTART_DEFERRED: `。持锁面：`.account-transition.lock` + `Mutex<Repository>`（mac 尾部可见 `LiveAuthLock` drop 与 `MutexGuard<Repository>` drop）。

**切号后启动三次采样核验（ACC-12）**——mac release `verify_after_launch` @ `0x1003223e0`（84 行伪代码，全文如上引用）：
```
sleep(100ms);  r1 = verify_account_switch(target);   // 第 1 次采样
sleep(250ms);  r2 = verify_account_switch(target);   // 第 2 次，失败则保留 r1
sleep(500ms);  r3 = verify_account_switch(target);   // 第 3 次
// 收尾：三次都成功 → 成功；r3 失败且 r2 成功 → 用 r2 结果；
// r2/r3 均失败且当前无具体错误 → 报 SWITCH_LIVE_VERIFY_FAILED（25B）
```
win SYSTEM-DIFF §3.1 把语义钉死：**固定执行三次，成功不提前结束；失败清零连续成功计数但不重置重试索引；仅 SSS、FSS 成功（最后两次必须连续通过），SSF 不成功；最终失败保留最后一次具体错误**。核验内容是 registry active 身份与 auth 派生身份在长度和字节上等于同一目标身份（不是逐项比 access_token）；虚拟受管 auth / API-key 模式 / 不可用 token 形态的排除保护 pre 已存在。win 两条错误全文均 82 字节、两版逐字节相同：`SWITCH_REGISTRY_VERIFY_FAILED: active account does not match the requested account`、`SWITCH_AUTH_VERIFY_FAILED: auth.json identity does not match the requested account`。850ms 只是名义等待和，不是总切换时限；win 等待落到 waitable timer / `WaitForSingleObject`，失败回落 `Sleep`。可见接口差别：pre 向采样读取入口显式传配置路径，release 调无参读取入口。**1.2.6 侧基线**：1.2.6 已有 `verify_after_launch` 面，1.2.7 +3 fns 并新增 live-verify 错误码（BACKEND-DELTA §1.4）；1.2.6 是否已是同一三采样算法未做体级对照（1.2.6 侧证据尚缺），如实标注。

#### 坑（⚠）

1. ⚠ **账号切换/恢复写 auth.json/registry 是破坏性写**：先快照（`capture_switch_rollback_state`）、互斥（quiet acquire）、失败验证（`finish_switch_failure_with_client` 三条硬校验：回滚后 auth.json 与凭据代次一致 / auth.json 残留检测 / registry active 与回滚目标一致），任一失败即报错；这条链不能收窄（mac SYSTEM-DIFF §4）。`SWITCH_ROLLBACK_CAPTURE_FAILED` 下 capture 失败即中止切换、不进 quiet acquire（顺序强制）。
2. ⚠ **账号导出仍含 auth**（`ExportedAccount` 14 键含 auth）——不得当脱敏日志处理（win SYSTEM-DIFF §4）。
3. ⚠ `OAUTH_CLIENT_UPDATE_DEFERRED` 是**延迟语义不是失败**：凭据已落盘（`disk_committed` 先发），只是客户端登录态未确认；消费侧不能把它当错误重试落盘。
4. ⚠ `PlanType` 内部 ordinal 不是 IPC 整数合同；`unknown` 判别值 8→10 属值域漂移——按位置/判别值消费双方都会错。
5. ⚠ `set_account_alias` 与 OAuth 刷新/持久化**共用同一把文件锁**（`account state.oauth-refresh.lock`），并发模型上 alias 写会阻塞 OAuth 刷新，反之亦然。
6. ⚠ 三次采样核验**不提前成功退出**（SSS/FSS 才过），把它当「一次成功即返回」实现会误判时序；100/250/500ms 是三次独立等待，不是 850ms 总时限。
7. ⚠ `load_runtime_display_snapshot` 是 **win-only 注册**（mac 零符号）——跨平台消费时 mac 侧没有这条命令；事件 wire 为 `{snapshot, source, accountKey?}`，`accountKey` 为 None 时整键省略（win SYSTEM-DIFF §3.2）。
8. ⚠ 用量刷新「保存失败可能成为 warning 而不是撤销已取得用量」；可选额外刷新最多三轮，三轮仍等待时可返回首次快照——**返回值不必等于最近广播值**（win SYSTEM-DIFF §3.2）。
9. 平台差异：进程扫描 win=Toolhelp32 API 族（CreateToolhelp32Snapshot/Process32FirstW/NextW）vs mac=`ps` 子进程（BACKEND-DELTA §4）——涉及切换/观测的进程面实现不能跨平台照搬。
10. 两项旧中间分析已失效、不得用于实现（mac SYSTEM-DIFF §4）：①「取消 OAuth 启动后三次重试」为误报（三次采样仍在）；②「action+64 保存凭据校验新增」为误报（pre 已有）。

#### 证据点结论

| 点 | 结论 | 依据 |
|---|---|---|
| ACC-01（backend 值域） | covered | mac-release + win-release 双侧补证：11 项值域、序列化串池、(len,ptr) 解析表、`unknown`=10、`is_pro_500_label` 规则（pro500/chatgptpromax 直中 + promax 令牌 + pro+500 组合令牌）已从二进制取证 |
| ACC-01(badge)（frontend） | covered | 双平台 bundle 字节一致；徽标映射表 + `account-plan-badge` 渲染 + 套餐顺序表实测 |
| ACC-02(price)（frontend） | covered（审计口径挂 mac；实测 win bundle 同 md5 同表） | `index-BfxRLS9t.js` 名称/价格表 `$m` 全文提取；价格数值来源即 bundle 常量（Go 无 price 键、pro500="$500"） |
| ACC-03 | covered | mac-pre/win-pre 补证 + mac release 伪代码（0x100adce90）+ 前端入口双平台一致 |
| ACC-05 | covered | win-pre 补证 + mac release 伪代码（fetch_history/validate_cursor/request_context）+ 前端展示面；win 侧「非法游标专属文案」检索口径缺口如实标注 |
| ACC-06 | covered | win-pre 补证 + mac release glue/命令链 + 前端开关双平台一致；守护轮刷循环体未逐行展开（边界已注） |
| ACC-07 | covered | win-pre 补证（range 三档切窗 + 非法 range 报错原文）+ 前端契约/控件双平台一致；「剔除未来时间戳」未独立隔离（已查路径零命中） |
| ACC-09 | covered | win-pre 补证 + mac release 伪代码（0x100320780 两分支原文 + 写入顺序事件） |
| ACC-12 | covered（1.2.7 内部 pre↔release 维度）；**1.2.6 基线维度证据尚缺** | mac release 伪代码三采样全文 + win 双侧四函数链（两版逐字节相同的 82B 错误串）+ mac-pre 补证（2026-10-27，`evidence-supplement/ACC-12/evidence.mac-pre.md`）：`verify_after_launch` 两单态化 `@0x100b34b00`/`@0x100b34550` 算法正文全量（100/250/500ms 三档 sleep + 逐次 verify/live 身份比对 + 全败 SWITCH_LIVE_VERIFY_FAILED）；1.2.6 是否同一算法未做体级对照（1.2.6 侧证据尚缺，基线制品零命中、红线 38 只读取数） |

mac-pre 侧（ac235ae0171a）SK/ACC/T/W 各点未独立补证，上述结论以 mac-release 伪代码 + win-pre 补证 + 审计包正文为据；mac-pre 侧证据尚缺。

---

### 2.9 skills

**技能**

#### 变更面（1.2.6 → 1.2.7-release）

**DTO（SK1）**：`InstalledSkillSummary` 8 键 → 11 键，新增 `managed` / `source` / `enabled`：
- 字段布局（mac release 实测偏移）：`updatedAt@0, id@16, name@40, relativePath@64, directoryPath@88, skillFilePath@112, title@136, summary@160, managed@184, enabled@185, source@186`，size 184→192（pre 观测 remove 向量 184 → release 192）。
- `source` 七值枚举：`managed(0)/user(1)/project(2)/plugin(3)/system(4)/admin(5)/native(6)`——七项是来源**值**，不是新增 7 个 IPC。构造规则：plugin 来源 Option 为 Some 优先于 scope 判定；无 plugin 归属时按 scope=user/repo/system/admin 映射，其余或未知 scope → native；managed 文件扫描得到且与 native 同 canonical 路径合并时仍保留 managed。
- `enabled` 三态：键**始终存在**，字节 2 写 null / 0 写 false / 1 写 true（enabled-helper @ `0x10041b330`），不是 None 时省略。
- 证据：`release-f019dbc8e267-skills-content.json`（seven_source_contract / installed_skill_dto），锚点 `focus-decompile-isolated.json@0x100277a10 / @0x1005e1180`、`release-dto-constants.json`。
- **平台口径**：mac 侧字段 8→11 属 pre→release 变化；**win 两版（pre/release）都已有 11 字段**（win SYSTEM-DIFF §2/§3.2），不是 win 的 release 新增。

**原生库存合并（SK2）**：`load_installed_skills` 调用链 = `BlockingTask::poll` @ `0x100373f50` → `inventory::load_inventory` @ `0x1005e1180` → `codex_app_server::skills::read_skills` @ `0x1007081d0` → request closure @ `0x10070a940` → `AppServerClient::request_with_timeout`（mac release）。行为合同：
- 总 deadline 30 秒、单请求至多 10 秒。
- `project/list`：分页 limit 100、至多 20 页、根至多 256；初始 Codex home canonicalize；project 根必须绝对且 is_dir；canonicalize 后去重；重复 cursor 防线。
- `skills/list`：入参 `cwds`=已验证根列表 + **`forceReload=true`（mac）/ `false`（win，两版均如此——平台分叉）**；响应 root 为 `data`；每个返回 cwd canonicalize、必须属于请求集合且不重复；skill path 必须绝对且末名 `SKILL.md`；不合法返回 CoreError → inventory 统一按 unavailable 降级。
- 合并规则：managed 扫描与 app-server 库存按 **canonical SKILL.md 路径**合并；相同路径保留 managed 身份并补 enabled（managed_index_helper @ `0x100a553e0`：对每个 managed.skillFilePath canonicalize 成功插入 path→index，失败跳过；原生同 key 不追加外部条目）。enabled 冲突转 null 并把该 path 放冲突集合，后续不反复覆盖。
- 外部条目形态：`managed=false`，id = canonical SKILL.md 绝对路径显示串，directoryPath/relativePath = 父目录，updatedAt=null，enabled 保留原生三态。
- 告警 envelope：数据是 `SkillListPayload {items,total,rootPath,lastScanAt}`，warnings 在外层 envelope 不在 data 内。库存失败降级为 managed 列表成功结果 + `skills_native_unavailable`（「ChatGPT 原生 Skills 列表暂不可用，当前仅显示 AiMaMi 管理的技能。」）；原生 partial、单项 canonicalize 失败、缺父目录或 enabled 冲突 → `skills_native_partial`（「部分 ChatGPT Skills 来源未能读取，当前列表可能不完整。」）。

**删除保护（SK3）**：`remove_skill` 新增绝对路径 id 只读拒绝。mac release `core::skills::remove_skill` @ `0x100afc9d0`（8492 字符伪代码，`focus-decompile-isolated.json`）：
```
if ( Path::is_absolute(id) ) {                       // 第一行即判
    // alloc 29B → "External Skills are read-only"
    return Err;   // 在 lock_skill_mutations / load_installed_skills / 备份 / 删除之前
}
```
managed 删除仍**先备份后删除**：`backup_skill_directory(…, "remove", 6)`；备份目录 `skill-backups`；备份 metadata 六键 `backupID/skillID/name/title/relativePath/createdAt`；先写临时内容再 rename 发布，失败清理规则保留（mac SYSTEM-DIFF §3）。

**bootstrap 缓存守卫（SK4）**：release 技能列表只在 **warnings 为空**时更新 bootstrap 缓存。mac release 技能列表命令闭包 @ `0x100166160`（InvokeResolver 闭包）：
```
0x10016704b  cmp [rbp+var_138], 0      ; warnings vec len == 0 ?
0x100167053  jnz loc_100167123         ; 非空 → 跳过 store
0x10016706f  call Repository::store_bootstrap_installed_skills   ; 仅空 warnings 才执行
0x100167074..0x100167112               ; store 失败 → 构造 CoreError Display + log 后照常继续（let _ 丢弃）
```
`store_bootstrap_installed_skills` @ `0x100ad5ff0` 内部调 `bootstrap_cache::update` @ `0x10021d2e0`；响应仍由 `CoreEnvelope::ok_with_warnings` @ 调用点 `0x1001671cc` 组装——warnings 随响应返回但缓存不刷新（SK4 补证，mac release f019dbc8e267）。pre 已有 inline ensure_directories/bootstrap_cache::update，命名 helper 不算新增持久化。

**前端变更面**：
- SK5：已安装技能查询 `staleTime` 由 `Infinity` 改为 `60000`，加 `refetchOnMount:"always"`、`refetchOnWindowFocus:false`；新增按当前 tab（installed/backups）手动刷新按钮，分别调对应 query 的 `refetch()`，`isFetching` 期间 disabled 防重入（`skills-page-CBEf8tkS.js`，md5 `319f821a5b554648a507789728d1e952` 双平台一致）。
- SK6：列表行渲染来源标签 `t(\`skills.sources.${s.source??"managed"}\`)`；`managed===false` 显示只读徽标 `skills.readOnly`；installed tab 顶部渲染 warnings 列表（`role=status`，message/code 键）；删除按钮整体被 `s.managed!==false` 门控；`enabled===false` 显示 `skills.disabled` 徽标。列表失败 alert 与库存降级 warning 分开（mac SYSTEM-DIFF §2）。

#### 真实逻辑

- 加载主链：IPC `load_installed_skills`（release glue @ `0x1006ebe93` 起 spawn）→ `BlockingTask::poll` @ `0x100373f50` → `inventory::load_inventory` @ `0x1005e1180`（managed 文件扫描 + 原生 RPC 合并 + 降级/告警组装）→ `read_skills` @ `0x1007081d0`（app-server JSON-RPC 客户端，30s deadline/10s 单请求）→ 按 canonical 路径合并 → `SkillListPayload` + envelope warnings → 空 warnings 才刷 bootstrap 缓存。
- 导入/备份/恢复面（既有命令，1.2.7 沿用）：`import_skill` 两闭包按 canonicalize fallback 与 `Invalid skill source` 内容唯一消歧；`load_skill_backups` / `restore_skill_backup` / `delete_skill_backup` glue 均在 release 命令表（glue 地址 0x1006f3300/0x1006ef42e/0x1006f46a0 族）。
- 降级语义：`skills_native_unavailable` 时**仍返回成功的 managed 列表**，不把原生失败冒成整列表错误或空列表；`skills_native_partial` 同理只加告警不删 managed 结果。

#### 坑（⚠）

1. ⚠ **`remove_skill` 的绝对路径 = 外部条目**：外部条目 id 就是 canonical SKILL.md 绝对路径，所以「id 是绝对路径」等价于「外部条目」；拒绝发生在锁、备份及删除**之前**，错误原文 `External Skills are read-only`（29B，mac release @ `0x100afc9d0` 首分支）。
2. ⚠ **`forceReload` 平台分叉**：mac `skills/list` 用 `forceReload=true`，win 两版用 `false`（win SYSTEM-DIFF §2）——跨平台实现不能统一照抄。
3. ⚠ **win pre 已有 11 字段与外部条目只读删除保护**：把「字段 8→11、绝对 id 拒绝」当 win 的 release 新增是错的；它们只属于 mac pre→release 变化面。
4. ⚠ warnings 位置：warnings 属外层 envelope，不在 `data` 内；前端 HTTP 响应对象再包一层——不能因页面 `.data.warnings` 就改 IPC 字段位置（skills-content.json warning_envelope）。
5. ⚠ enabled 冲突合并语义：冲突转 null 且入冲突集合后**不再反复覆盖**——消费侧不要指望后续扫描能自愈该字段。
6. ⚠ 「bootstrap 缓存只在空 warnings 时更新」意味着降级/部分失败的会话里缓存保持旧值——缓存新鲜度不能从「列表刚加载过」推断。
7. ⚠ Skills 来源枚举里的 `plugin` 是来源**值**，不得据此推导新增 Tauri plugin/capability 权限（双平台 SYSTEM-DIFF §7 同口径）。
8. 前端 enabled 展示实测只有二态（false → disabled 徽标），第三态（null）无独立渲染分支；DTO 三态属后端口径（SK6 partial 如实标注）。

#### 证据点结论

| 点 | 结论 | 依据 |
|---|---|---|
| SK1 | covered | mac release skills-content.json（11 字段布局 + 七来源枚举 + enabled 三态字节级写规则，锚点 0x100277a10/0x1005e1180/0x10041b330）+ win SYSTEM-DIFF §2/§3.2（win 两版已有）+ mac-pre 补证（2026-10-27，`evidence-supplement/SK1/evidence.mac-pre.md`）：pre `InstalledSkillSummary::serialize@0x1003bab80` 恰序列化 8 字段、无 managed/source/enabled——11 字段归 release 新增实证 |
| SK2 | covered | mac release 调用链四锚点（0x100373f50/0x1005e1180/0x1007081d0/0x10070a940）+ 时限/分页/校验/降级/合并规则全文（skills-content.json native_inventory_rpc）；win forceReload=false 平台差异实证；mac-pre 补证（2026-10-27）：pre `core::skills::load_installed_skills@0x1003cbdf0` 全文 = scan+sort、无 app-server 合并（skills_native_unavailable/forceReload 等串 0 命中）——pre 无该合并（uncovered-in-pre），release 新增实证 |
| SK3 | covered | mac release `remove_skill` @ 0x100afc9d0 伪代码首分支即绝对路径拒绝（"External Skills are read-only"），先于锁/备份/删除；mac-pre 补证（2026-10-27）：pre `remove_skill@0x1003c71a0` 无该分支（id 仅 memcmp 匹配已装条目，不匹配走 `Skill not found: {id}`，命中后备份+remove_dir_all）——mac release 新增实证 |
| SK4 | covered | mac release 命令闭包 @ 0x100166160 守卫指令序列逐指令核对 + store→bootstrap_cache::update @ 0x10021d2e0 xref |
| SK5 | covered | 前端双平台 bundle 字节一致；staleTime/refetchOnMount/refetchOnWindowFocus 同句命中 + 手动刷新按钮 + isFetching 防重入 |
| SK6 | partial | 来源/只读/warnings/managed 门控删除四子项 covered；enabled 三态 UI 仅二态实测（第三态渲染分支未找到，DTO 值域属后端口径），子项 uncovered-partial 如实标注 |

---

### 2.10 threads-sessions

**线程与会话**

#### 变更面（1.2.6 → 1.2.7-release）

**命令集**：sessions 域新增 7 条 IPC（`BASELINE-FINAL-1.2.7.md` §1；`frontend-command-diff.json` `ipc_contracts_added`；win-pre 七 handler 全部定位，win SYSTEM-DIFF/分册实证；release 判两版相同）：

| 命令 | mac release core owner | win-pre handler |
|---|---|---|
| `inspect_session_index_health` | `core::sessions::health::inspect_session_index_health` @ `0x100b1dd90` | `0x14033e010` |
| `clean_catalog_ghost_threads` | `…::health::clean_catalog_ghost_threads` @ `0x100b1bfa0` | `0x140337610` |
| `clean_missing_rollout_rows` | `…::health::clean_missing_rollout_rows` @ `0x100b1aa50` | `0x140339151` |
| `clean_orphan_rollouts` | `…::health::clean_orphan_rollouts` @ `0x100b182d0` | `0x14033ab10` |
| `clean_global_state_tmp_files` | （**1.2.6 无此符号，NEW_BACKEND**；release glue @ `0x100702b20`） | `0x14033c651` |
| `export_sessions_batch` | `core::sessions::export::export_sessions_batch` @ `0x10027dd50` | `0x14033fa30` |
| `load_session_messages` | `core::sessions::detail::load_session_messages` @ `0x1007ae310` | `0x140342140` |

**删除面**：`core::session_analytics` 8 fns 全删 → 旧 IPC `load_change/session/token/tool/usage_analytics` 5 条删除（双平台实证）；session 分析由 `core::analytics`（124 fns：index/parser/reader/threads/aggregate）接替，`load_quota_history` 增 `range` 参数（见 Accounts 节）。

**模块结构**：`core::sessions` 拆分为 `sessions/{health,export,detail,history,worktree}`；`core::relay::codex_thread_visibility` +47/−14（3 个新文件面 history / model_fallback）；`codex_app_server` 新 API：`fork_thread_to_cwd`（`thread/fork`、`excludeTurns`）、`load_legacy_messages`、`load_paginated_messages`（`thread/items/list`、`sortDirection`）、`list_thread_scope`（`thread/list`、`useStateDbOnly`、`sourceKinds`、`parentThreadId`、`recency_at`）。

**T1（线程收敛/可见性重写）**：win-pre 补证实证三函数链——事件识别器 `sub_1407D9A70`（逐行扫 rollout JSONL，识别 `type=="event_msg"` 且 `/payload/type=="thread_settings_applied"`，命中提取该行写入状态）、一致性检查器 `sub_1407DA5E0`（"thread_settings" 23B 键）、重写 applier `sub_1407DB070`（37988 字符，可见性重写主循环逐行处理 rollout 并写回规范化行）；保留历史有独立模块面 `codex_thread_visibility_history.rs`（panic-Location 串 `0x141a5a780`）；「竞态要求重试」无专属文案，按代码路径证据+边界标注。mac 侧重写函数族（红线32 判 CHANGED）：`repair_missing_rollouts_for_convergence`（58 callees）、`verify_convergence_rollout_targets`（bb 24→122）、`patch_convergence_rollout_target`（bb 58→151）、`converge_threads_to_provider_with_reads`（69 callees，SQL `UPDATE threads SET model_provider = ?2 WHERE id = ?1` + `thread_settings_applied` 事件 + ROLLBACK 事务）、`converge_router_thread_models_with_reads`、`cleanup_orphan_router_threads_strict`（42 callees）、`restore_no_account_model_threads`、`model_fallback::restore_relay_model_threads`、`inspect_thread_history_integrity`、`cleanup_private_reasoning_target`、`open_codex_db_for_convergence`（`db holders: none detected` 占用探测）。

**T3（CodexSession 子代理关系字段）**：四字段 `parentSessionId` / `depth` / `agentNickname` / `agentRole` 在 CodexSession 序列化器全部有内容级证据。win-pre：序列化器 `sub_140CD8F30`（逐字段写入：`parentSessionId`←结构体+152、`depth`←+528 经整数序列化、`agentNickname`/`agentRole`←结构体字段）；反序列化键表 `parentThreadIdagentNicknameagentRoleprojectIdhistoryModegitInfo` @ `0x141a874b2` → `sub_140B7FC00`。mac 侧 `load_sessions_internal` @ `0x100b0c930`（release）装配列表，含 `subAgent/thread_spawn/depth/parent_thread_id`、`agent_nickname/agent_role` 面与排序键 `recency_at_ms/updated_at_ms/created_at_ms`；`CODEX_INDEX_UNAVAILABLE` 错误码。`compute_session_depths` 上游计算在 win-pre IDB 无命名条目，序列化读取点 a1+528 为字段真值（边界已注）；nickname/role 赋值规则正文未实证（尚缺）。

**W1（线程 fork 到指定 cwd）**：后端存在——mac-pre `codex_app_server::fork_thread_to_cwd` @ `0x10027d7b0`（ac235ae0171a，400 行伪代码全文）；win-pre handler `sub_14096C470`（13285 字符全文）。release 把它**内联进创建副本的调用方**，行为不变：`thread/fork`、`excludeTurns`、120 超时与 cwd 校验保留（mac SYSTEM-DIFF §5）。前端 **fork 本体 UI 入口未找到**（release 前端 147 命令无双平台 fork/copy 类命令，sessions-page 无 fork/copyTo/duplicateThread 字样）；相邻能力 `migrate_session_worktree`（搬迁非复制，win-pre @ `0x1403301f0`；mac release glue @ `0x100702250`）有 UI 入口：线程详情区 migrate 按钮（`canMigrate` 门控 + `blockedReason` 提示），错误路径匹配 `WORKTREE_MIGRATION_REQUIRES_CODEX_EXIT|CODEX_EXTERNAL_WRITER_RUNNING`，i18n keys `sessions.migrateWorktree/CheckBeforeRetry/Failed/Success/Unavailable/Uncertain`（`sessions-page-GoZD0l79.js`，md5 `9b4fc496af35171c5153f0bb03e4b01a` 双平台一致）。

**前端变更面（T2 七条入口，双平台一致）**：
- 体检：`inspectSessionIndexHealth()` 无参 query（`staleTime:1e4`，`networkMode:"always"`），健康面板驱动四条清理行计数展示。
- 四条清理：各配 mutation（`cleanGlobalStateTmpFiles/cleanOrphanRollouts/cleanMissingRolloutRows/cleanCatalogGhostThreads`）与行项（计数/字节描述）；点击进确认对话框（`sessions.sessionIndexCleanConfirmTitle/Desc/Action`），执行中整组 disabled，结果 toast `sessionIndexCleanDone/Failed/Partial`。
- 批量导出：目录选择器（`batchExportPickDir`）→ `exportSessionsBatch(ids, targetDir, format)`；toasts `batchExportSuccess/PartialTitle/Failed`。
- 消息加载：会话详情对话框内 `loadSessionMessages(sessionId)`（`staleTime:15e3`）。
- 七条命令双平台契约：`ipc-contracts.jsonl` 各 147 条，七条均在且 argKeys 一致。

#### 真实逻辑

**`fork_thread_to_cwd`（W1 后端）**——mac-pre @ `0x10027d7b0`（伪代码 `raw/aimami/1.2.7/macos-arm64/backend/codexmate_lib::core::codex_app_server::fork_thread_to_cwd.c`）：
1. `AppServerClient::connect`；两个入参（thread id、目标 cwd）各自 `trim_matches` 后必须非空（win 侧对应文案「目标工作目录不能为空」）。
2. 组装 BTreeMap 参数：`"threadId"`（内联常量 `0x6449646165726874` = "threadId"）、`"cwd"`（3B）、`"excludeTurns"`（12B，值 true）。
3. `AppServerClient::request_rpc_with_timeout("thread/fork", 11, params, 120, 0)`——120 秒超时。
4. 响应按 `ThreadReadResponse` deserialize_struct 解析；**副本探测/一致性校验**：返回的工作目录 trim 后与请求目标逐字节比对，不一致 → 错误「ChatGPT app-server 返回的工作目录与目标不一致：{0}」（win-pre @ `0x14096cd46` 模板）；未返回有效新线程 ID → 49B 错误（win-pre @ `0x14096cccd`）；全部通过 → 拷贝响应字段返回成功变体。

**七条会话命令**：
- `inspect_session_index_health`（mac release @ `0x100b1dd90`，44 callees，36.8KB）：`SELECT count(*) FROM thread_items`、`thread_items`/`thread_id` 一致性体检；**只读**。
- `clean_orphan_rollouts`（mac release @ `0x100b182d0`，412 行伪代码）：`HistoryInventory::load` → `HistoryInventory::health` → `cleanable_orphan_rollout_ids` @ `0x100b1d940`（过滤出可清理孤儿）→ 日志（`src/core/sessions/health.rs`）→ **`delete_sessions`** 执行删除 → `deletion_cleanup_result` 汇总。另有 `reconcile_official_thread_rows`、`load_complete_health_thread_rows` 参与匹配。删除白名单匹配条件未逐行核（有 matching 语义，fullchain §5 建议实现前补一轮针对性复核）。
- `clean_missing_rollout_rows`（mac release @ `0x100b1aa50`，918 行）：rollout 文件缺失行的 DB 行清理（26 callees，27KB）。
- `clean_catalog_ghost_threads`（mac release @ `0x100b1bfa0`，370 行）：目录幽灵线程清理，写 sqlite；调 `CodexPaths::catalog_db_path`；尾部两处 `drop_in_place<rusqlite::Connection>`。
- `clean_global_state_tmp_files`（NEW_BACKEND）：全局状态 tmp 清理；win 侧日志串 `cleaning stale global-state tmp files`、失败日志 `[AiMaMi][sessions] remove stale global-state tmp failed`（win-pre handler `0x14033c651` → `sub_140A7D640`）。
- `export_sessions_batch`（mac release @ `0x10027dd50`，47 callees，bb 273）：jsonl / md 两格式分支（字面量 `jsonl`）；fs write 叶；导出格式 schema 字段未逐字段枚举（边界已注）。
- `load_session_messages`（mac release @ `0x1007ae310`，598 行，bb 172）：会话消息装载，`Untitled Session` 兜底名、`reasoning_effort` 面。

**线程可见性重写的公共契约（T1）**：sqlite `threads` 表列（`model_provider/model/reasoning_effort/rollout_path/source/archived`）+ rollout JSONL JSON 指针写（`/payload/model_provider`、`/payload/history_mode`、`/payload/history_base`、`/payload/model_reasoning_effort`、`/reasoning/effort`）；错误范式=「表示变化/竞态 → retry required」「历史保留不删」：`rollout backup representation changed; history preserved` / `rollout changed while router migration was streaming; retry required` / `rollout changed before private reasoning cleanup; retry required` / `rollout is no longer owned by the router; history preserved`。

**release 侧 pre→release 变化（同 1.2.7 标签两构建）**：真实变化为 `line_is_unusable_reasoning_response_item` @ `0x1004b0390` 经 helper `0x1004f8b60` 新增 `ccswitch-anthropic-thinking-v1:` 前缀判断（pre 只检查 AiMaMi 前缀）——既有历史清理因此额外过滤这些 reasoning 条目，不是 token/计费安全改进。两个 `detect_worktree_copies` 消失为内联：列表父函数仍收集/排序 cwd、至多 4 组调度、scoped 线程、结果映射传给 `build_codex_session`（mac SYSTEM-DIFF §5）。

#### 坑（⚠）

1. ⚠ **四条清理命令全部有破坏性副作用**：`clean_orphan_rollouts` 走 `delete_sessions` 删 sqlite 行与 rollout 文件（fs delete）；`clean_missing_rollout_rows` / `clean_catalog_ghost_threads` 写 sqlite（含 DB 行删除）；`clean_global_state_tmp_files` 删全局临时文件，**删除失败仅记日志**（`remove stale global-state tmp failed`），不冒错不补偿。前端虽有确认对话框，后端无二次确认。
2. ⚠ **rollout 重写纪律**：成功 rename **覆盖**历史，失败回收临时文件；`ReadStamp` 只是并发变更检测，**不等于持久备份**（mac SYSTEM-DIFF §5）。`missing_candidate` 是 UPDATE 不是 DELETE；provider 收养保留事务/恢复写入；fork 仍创建线程。
3. ⚠ **`PRAGMA wal_checkpoint(TRUNCATE)`** 出现在 `cleanup_orphan_router_threads_strict`（provider 归一清理）——WAL 截断是全局 DB 副作用，不只影响目标行。
4. ⚠ 竞态错误范式是「retry required」不是自动重试：`repair_missing_rollouts_for_convergence` / `cleanup_private_reasoning_target` 检出竞态即报错要求调用方重试，消费侧实现不能把错误吞掉当成功。
5. ⚠ 导出防护（analytics 侧 `write_export`，同族纪律）：`statistics export requires a matching .csv or .json extension` / `statistics exports cannot replace ChatGPT data or symbolic links`（符号链接防护）/ `missing export directory`——sessions 批量导出消费时应沿用同级防护意识。
6. ⚠ **fork 与 migrate 是两个能力**：`thread/fork` = 复制线程到指定 cwd（有 `excludeTurns`）；`migrate_session_worktree` = 搬迁（有 `canMigrate` 门控与 blockedReason）。前端 release 只暴露 migrate 入口；fork 无 UI、无 IPC 命令面——消费侧要做 fork UI 属新增能力，不是「已有入口对齐」。
7. ⚠ `load_session_messages` 读面边界：消息读取有 2MiB/64KiB 预算与服务失败回退 warning（win SYSTEM-DIFF §10 catalog 承接条）；不要把回退 warning 当空会话。
8. 反直觉：`thread_settings_applied` 事件识别器未命中时返回 `*a1=-1`（不是错误抛出）；可见性重写写回的是**规范化行**（会改写 rollout 文件内容）。
9. 平台差异：七条命令 handler 地址与函数形态双平台独立实证（win stripped 无 Rust 符号，一律串扫描→xref→enclosing function）；健康检查、路径解析、删除后的 UI/广播和持久化结果分开——后置刷新 warning 不等于前置删除自动回滚（win SYSTEM-DIFF §3.6）。

#### 证据点结论

| 点 | 结论 | 依据 |
|---|---|---|
| T1 | covered | win-pre 补证（识别器 0x1407d9a70 + 检查器 0x1407da5e0 + applier 0x1407db070 + history 模块面）；mac 侧重写函数族 bb/callees/字面量证据（fullchain-threads §1）；「竞态重试」无专属文案，按代码路径+边界标注；mac-pre 侧证据尚缺 |
| T2 | covered | win-pre 七 handler 全定位 + mac release 六个 core owner 伪代码 + 前端七入口双平台字节一致；release 判两版相同 |
| T3 | covered | win-pre 序列化器四字段（名串+结构体偏移+序列化调用）+ 反序列化键表；depth 计算函数未命名标注、nickname/role 赋值规则正文未实证（边界如实标注）；mac-pre 侧证据尚缺 |
| W1 | partial | 后端 covered：mac-pre fork_thread_to_cwd @ 0x10027d7b0 全文 + win-pre handler 0x14096c470 全文（cwd 非空校验、返回 cwd 一致性比对、新线程 ID 缺失报错）；release 内联行为不变。前端 UI-entry uncovered：无双平台 fork 类命令与 UI 字样，只有相邻 migrate_session_worktree 入口（如实标注）；mac-pre 侧证据尚缺 |

---

### 2.11 anthropic-trace

**诊断字段扩展**

#### 变更面（1.2.6 → 1.2.7-release）

Anthropic 协议 V1.0 迁移（116 个旧 Anthropic 命名空间符号消失、请求/响应/SSE 改由 `cc_switch_anthropic` 处理）伴随的诊断面：**`anthropic_trace` 诊断 DTO 字段扩展**——这是诊断字段，**不是新增上游业务能力**（win SYSTEM-DIFF §3.3 末条、win DELTA-LOGIC §11.58 ID190）。

诊断对象完整字段表（win DELTA-LOGIC ID190，两版合同相同、内联/外提变化）：`outcome`、`error_class`、`error_kind`、`attempts`、`events`、`deltas`、`delta_counts`、`bytes`、`first_byte_ms`、`last_byte_ms`、`max_gap_ms`、`block_starts`、`block_stops`、`message_stop`、`stop`、`tail`、`text`、`usage_samples`、`usage_omitted`。mac release 对应体：`core::relay::anthropic_trace::summary` @ `0x1005db2a0`（613 行伪代码，字段写入 `block_starts/block_stops/delta_counts/error_class/error_kind/first_byte_ms/last_byte_ms/max_gap_ms/message_stop/usage_samples/usage_omitted` 逐键命中）、`record_usage` @ `0x1005d4790`（599 行）。win release 落位 `0x1401b1c10 / 0x1401f6f80 / 0x1401f9780 / 0x1402249d0 / 0x140227cf0`（win CONSUMER-CONTRACT §trace）。

#### 真实逻辑

- **summary @ `0x1005db2a0`（mac release）**：由 `finish`/`Inner::drop` 调用，`Inner::emit` 最终流向 `debug_log::app_event`——**消费者是诊断计数**，不是请求长度/token 计费或工具限制。序列化语义（ID190）：`delta_counts` 固定按六个原始 u64 顺序；`first/last_byte_ms` 可空；`tail` 按环形缓冲逻辑顺序（先连续尾段再环回段，不按物理数组）；`text` 内 upstream/responses 的非 Some 写 null；`usage_omitted` = samples 减 8 的饱和减法；**末尾才发布完整本地对象**，序列化失败清理暂存并可能被 unwrap 为 panic，不返回部分成功 JSON；不写日志文件、不发 HTTP。
- **record_usage @ `0x1005d4790`（mac release）**：usage 字段双协议名归一——Anthropic 侧 `input_tokens/output_tokens/cache_read_input_tokens/cache_creation_input_tokens` + Responses/Chat 侧 `cached_input_tokens/responses_cached_tokens/input_tokens_details/chat_cached_tokens/prompt_tokens_details`；分类串 `invalid/object`；附带 `usage_stage/usage_state/observed_ms`。
- **错误分类器（win release）**：`anthropic_trace_classify_error_helper_sys` @ `0x140cba6c0`（伪代码 `internal-reverse/tmp/recovery-worklist-20261025/trace-classify.c`）——先把错误串转小写（SIMD 大小写折叠），再按子串匹配归类：`prefill→assistant_prefill`、`unclosed→unclosed`、`before message stop→missing_message_stop`、`without stop reason→missing_stop_reason`、`encrypt→encrypted_state`、`utf8`、`json→objectinvalid`、`timeout/timed out`、`connection`、`budget`、空串→`none`、兜底 `unclassified`。`error_class` 值域与 mac CONSUMER-CONTRACT §6.4 一致（`unclosed/missing_message_stop/open_block/missing_stop_reason/encrypted_state/assistant_prefill/objectinvalid`）。
- **安全边界**：无密钥明文写日志证据（header 白名单治理）；错误提供方敏感片段先替换为 `[REDACTED]` 再经文本脱敏并递归 JSON（mac SYSTEM-DIFF §6）。

#### 坑（⚠）

1. ⚠ **诊断字段 ≠ 业务能力**：anthropic_trace 扩展只是观测面，不得据此声称新增上游协议能力或计费口径（not_admitted 定性）。
2. ⚠ `usage_omitted` 是**饱和减法**（samples−8），samples 小于 8 时为 0，不做负值；环形缓冲 `tail` 逻辑顺序 ≠ 物理数组顺序，消费侧按数组顺序读会错位。
3. ⚠ 序列化失败路径可 panic（unwrap），不返回部分成功 JSON——诊断面不能当可靠遥测通道做容错假设。
4. ⚠ 错误分类是**小写化后的子串包含匹配**，不是精确码表——上游错误文案微调会落进 `unclassified`。

#### 证据点结论

| 点 | 结论 | 依据 |
|---|---|---|
| anthropic_trace | covered | mac release summary/record_usage 两函数伪代码逐键命中 + win DELTA-LOGIC ID190 字段全文与序列化语义 + win release 分类器伪代码（0x140cba6c0）+ 五落位地址；「诊断非业务能力」定性双侧审计一致 |

---

### 2.12 run::inner 闭包（超大体分块重建）

**启动期上下文构造器（非事件分派体）**

#### 变更面（1.2.6 → 1.2.7-release）

`codexmate_lib::run::inner::_{{closure}}` @ `0x1002bc7c0`–`0x1003098bd`（mac release `f019dbc8e267`，函数体 315,645 B）：体级 diff 筛查中 `run::{{closure}}` sz412→19374 的同族巨体；本轮按红线 13 超大体破法完成 basic_blocks 分块重建，方法标注 `blockwise_reconstructed`。

#### 真实逻辑

- **方法**：反编译 decompile ×3 失败（超大体）→ 改为 basic_blocks 分块重建：`blocks.jsonl` 6,218 行（全 block 拓扑 + callee 边 + 字符串/常量引用）+ `disasm/batch-00..31.txt`（51,859 条指令分批转储）组装行为描述；区域语义由锚点（命名 callee / 字符串 / 常量）+ 控制流拓扑交叉确认。证据 `raw/aimami/1.2.7/macos-arm64/backend/codexmate_lib::run::inner::_{{closure}}.blocks/LOGIC.md`。
- **定性**：该 315KB 巨闭包**不是事件循环/命令分派体**，而是 Tauri 启动时一次性运行的应用上下文构造器：config 解析（`url::ParseOptions::parse` updater 端点、`RpmConfig/MacConfig/IosConfig::default` 组装、`semver::Version::from_str`、产品元数据 AiMaMi/1.2.7/borawong/codexmate 物化）→ capability/ACL manifest 解析（216 个 glob from_str）→ 108 个命令逐一对窗口标签 'hotspot'/'main' 各编译一次权限作用域 glob 并 insert → `RuntimeAuthority::new`（全函数唯一一次）收口写出 out-struct 返回。6,937 条直接调用边 + 1 条间接调用（config 合并段 vtable 0 号槽，单点动态分发，非分派表）。
- **无分派表、无循环**：出度分布 {0:1709, 1:2021, 2:2488}，无 ≥3 后继块——命令分派在 generate_handler 系函数，不在本体内；1,809 条相邻 (N→N-1)「回边」为逐命令单元错误汇合形态，非循环——一次性线性构造的直接证据。
- **冷区（idx 2803–6217）**：218 个 `core::result::unwrap_failed` 桩（panic Location 指 `src/lib.rs`）+ 1,489 个 alloc 失败桩，全部汇入 ud2 @ `0x1002fdc57`；正常路径只经 idx 2802 的 retn。
- **副作用面**：25 个唯一 callee 无文件删除/keychain 删/进程 kill 等破坏性 API；⚠ updater 端点为 `http://localhost:3123/`（明文 HTTP + 本地地址，minisign 公钥 ID 9718C9FEBC6D1926 内嵌）——消费者不得当生产端点硬编码（红线 26 同类）。

#### 坑（⚠）

1. ⚠ **超大体 ≠ 分派体**：315KB/51,859 指令的体积来自 108 命令 × 2 窗口标签的 ACL glob 编译内联 + 218 unwrap 桩 + 1,489 alloc 桩；在命令分派意义上本函数是空面，找命令分派须移步 generate_handler 系。
2. ⚠ **panic 面即启动崩溃面**：218 个 unwrap_failed 桩汇入 ud2 @ `0x1002fdc57`——启动期任何 config/ACL 解析失败直接 panic 终止、无降级路径；复刻启动逻辑时这些 unwrap 应换显式错误传播，否则二进制级行为是「启动即崩」。
3. ⚠ **分块重建的口径边界**：未逐指令精读全部 51,859 条；区域语义由锚点 + 拓扑交叉确认，不得把本结论当逐指令级伪代码引用。

#### 证据点结论

| 点 | 结论 | 依据 |
|---|---|---|
| run::inner 闭包（超大体） | blockwise_reconstructed | blocks.jsonl 6,218 行 + disasm 32 批 51,859 指令 + 6,937 调用边；启动期上下文构造器定性（config→updater 公钥→108 命令 ACL→RuntimeAuthority::new）；`codexmate_lib::run::inner::_{{closure}}.blocks/LOGIC.md` 已记录 |

---

## 3. 平台差异（mac vs win 行为分叉清单）
### 变更面（1.2.6 → 1.2.7-release）

双平台**零分叉**面（win 串池 10 项独立抽查全 PASS）：DTO 字段集（ResetCredit 系/CodexSession 26/FixResult 系/CodexPaths 31）、错误面、引擎端点集（base/`/models`/`/responses`/`/responses/compact`/`/images/generations`/`/images/edits` + `x-aimami-catalog-revision`）、模型族表、`anthropic-version: 2023-06-01` 协议头、SSE 事件枚举、fix 23 键分派表。证据 `dto-fieldlevel-win.md` 抽查矩阵。

双平台**已证分叉**面（逐条见「真实逻辑」）：Skills pre 基线字段数与 `forceReload`、SSE `pause_turn` 旧行为、进程枚举实现、自启面、`system_volume_windows` 命名、`useStateDbOnly`/`authinfo` 字面量、`load_runtime_display_snapshot` 注册面、`graceful_restart_for_update` 应答形态、OAuth 等待原语、catalog DB 持有者判别实现。

### 真实逻辑

1. **Skills 基线分叉（pre→release 维度最重要的一条）**：win pre（`51cb41b613aa`）**已有** 11 个 `InstalledSkillSummary` 字段与外部条目（`managed=false`）只读删除保护，且 win 两版 `skills/list.forceReload=false`；mac 侧字段 8→11、绝对 id 删除前拒绝、`forceReload=true` 均为 mac release（`f019dbc8e267`）侧证据。两边「现状」在 release 收敛，但变更归因完全不同——mac 记为新增，win 记为既有。证据 win SYSTEM-DIFF §2/§3.2、mac SYSTEM-DIFF §3。
2. **SSE `pause_turn` 旧行为分叉**：win pre 对 `pause_turn` 的处理是 `completed`；mac 旧链是 `Exchange::resume` 自动续传。release 两侧统一为 failed/invalid_response（成功白名单 `end_turn/tool_use/stop_sequence`）。不得把 mac 的续传叙述套到 win pre，也不得反向套用。证据 win SYSTEM-DIFF §3.4 对照表、mac SYSTEM-DIFF §6。
3. **进程枚举架构差异**：mac = `ps -ax -o etime=,comm=` 子进程 shell-out；win = Toolhelp32 API 族纯 API 枚举（`CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS)`+`Process32FirstW/NextW`，imports `0x14193a008`/`0x14193a010`/`0x14193a1f0`，三叶 decompile `0x140ee4dc0`/`0x140ee8460`/`0x141040bc0` 已记录；`tasklist` 与 `ps` 字面量在 win 二进制 0 命中）。证据 `win-symbol-body-diff.json#/platform_divergences_dim5`。
4. **自启面**：mac 有 `~/Library/LaunchAgents/dev.aimami.auto-switch.plist`；win 串池未见 LaunchAgents 字面量（win 自有自启面不在本轮范围，如实记录不判缺席）。
5. **命名差异**：`system_volume`（mac）vs `system_volume_windows`（win）——voice 邻接面，out-of-scope，仅登记。
6. **字面量缺席（待核）**：`useStateDbOnly`（`codex_app_server::list_thread_scope` payload 字段）与 `authinfo`（mac `account_observer` 观测状态字面量）在 win 双版本二进制 0 命中；DTO/错误/端点已实证零分叉，不阻塞合同，深层核对需 1.2.6 win IDB。证据 `dto-fieldlevel-win.md` 分叉表。
7. **`load_runtime_display_snapshot` 注册分叉**：win-only 注册（真 handler glue `0x1405EC7D0`，dispatcher 双窗 + `.rdata` 注册表项三重实证）；mac 零符号（如实标注）。曾误判「双平台零符号禁实现」，系全名搜索对池化碎片存储的假阴性，已撤销。证据 win 合同 §8.1、`four-angle-d-classification.json#/runtime_display_snapshot_unban_20261006`。
8. **`graceful_restart_for_update` 应答分叉**：后端双平台均在（win glue `0x1405F27C0` + mac wrapper `0x100638510`/名字表 `0x1018c0455`），但 ⚠ win 无 IPC 响应、mac 应答 unit；且语义为进程退出+重启（破坏性）。证据 win 合同 §8.2、mac 合同 §9.1。
9. **OAuth 启动后核验链双平台独立**：算法同构（每次检查前同步等待 100/250/500ms、固定三次、仅 `SSS`/`FSS` 通过、失败清零连续成功计数不重置重试索引、最终失败保留最后一次错误），实现原语不同——win 用 waitable timer/`WaitForSingleObject`、失败回落 `Sleep`（850ms 只是名义等待和，不是总切换时限）；两条 82 字节错误全文双平台逐字节相同。调用链地址各自独立（见总览 pre→release 增量面）。证据 win SYSTEM-DIFF §3.1、mac SYSTEM-DIFF §9。
10. **catalog DB 持有者判别**：共同语义 = 枚举两类 DB、canonicalize 去重验证、按 ChatGPT 主进程 PID 与 DB 持有者筛选、多持有/归属歧义明确报错（不取首个存在路径）；实现分叉——mac 持有者谓词 `0x1008d30c0`，win 走原生 Restart Manager 边界、名称/路径 fallback、退出后复查、提权一次，多值进程判别不得压成 bool。证据 mac SYSTEM-DIFF §7、win SYSTEM-DIFF §3.5。
11. **前端零分叉**：双平台 JS 资产字节级同哈希（同一前端构建），IPC/CCF diff 即全平台 diff；唯一平台差异为 index.html。证据 `four-angle-b-frontend-contracts.json#/cross_platform_note`。
12. **注册计数不可移植**：mac release 的 112 注册/102 实际观察调用是 mac 独立对账结果；win 侧仅证「活动命令标签匹配、缺 handler 0」，不得把 112/102 移植成 win 结果。证据 win SYSTEM-DIFF §2。

### 坑（⚠）

1. **禁止跨平台外推（红线8 级）**：mac 的 Skills 字段 8→11、绝对 id 删除拒绝、`forceReload=true` 不能记到 win 头上（win pre 已有）；win pre 的 `pause_turn=completed` 不能套 mac 的续传叙述；反之亦然。证据双 SYSTEM-DIFF 互引条款。
2. **前端同哈希 ≠ 后端同构**：bundle 字节一致只覆盖前端；后端进程扫描/自启/等待原语/注册面均有实质分叉。
3. **`graceful_restart_for_update` 双平台应答形态不同**：win 无 IPC 响应、mac 应答 unit——消费者按任一侧假设写 awaiting 逻辑都会在另一侧挂起；且命令本身触发进程退出+重启，验收环境不可随意调。证据 win 合同 §8.2。
4. **`load_runtime_display_snapshot` 的 mac 零符号是真缺口不是笔误**：全名搜索假阴性教训已记录（池化碎片存储），但对 mac 侧该命令当前仍无注册证据，消费者不得按 win 合同在 mac 上实现该命令调用。
5. **win 字面量 0 命中 ≠ 功能缺席**：stripped + 串池提取阈值会造成假阴性（`load_runtime_display_snapshot` 曾因此被误判）；`useStateDbOnly`/`authinfo` 维持「待核」而非「删除」。证据 `win-symbol-body-diff.json#/platform_divergences_dim5` 第 3/4 条。
6. **win 多值进程判别不可压 bool**：名称/路径 fallback、退出后复查、提权一次、Restart Manager 边界都是合同的一部分；省略任何一环都会写出在真实 win 上误判 DB 持有者的实现。证据 win SYSTEM-DIFF §3.5。
7. **架构差异（arm64 vs x86-64）对 diff 方法的影响**：mac 走同名 callee/byte 双线，win 只能走 reloc-masked body hash；两侧的「CHANGED/UNCHANGED」判定强度不同（win 的体级一致蕴涵 callee 结构等价，mac 的 callee 一致不蕴涵字节一致）——跨平台比较覆盖率数字时不得直接对齐口径。证据 `win-body-match-1.2.6-to-1.2.7.json#/method`、`samename-callee-diff-1.2.6-to-1.2.7.json#/verdict_legend`。

### 证据点结论

本章不独占业务编号点；与平台差异直接相关的点级状态：

- **W1（线程 fork 到 cwd 的 UI 入口）**：frontend 批次 **partial**；win-pre 批次 covered；mac-pre 批次 blocked——**mac pre 侧证据尚缺**。
- **SK5/SK6（Skills 前端）**：SK5 covered（双平台）、SK6 partial（双平台）；Skills 后端字段分叉以双 SYSTEM-DIFF 为准，点级明细归 skills 模块分片。
- **T1/T2/T3（threads pre 侧）**：win-pre 全 covered；mac-pre 全 blocked——**mac pre 侧证据尚缺**；release 侧与字段级合同已由 threads 模块分片覆盖。
- **E7/E12、R4/R7/R8（router/catalog 系）**：mac-release/win-release/win-pre/mac-pre（R4/R7/R8）均 covered；平台分叉结论（持有者判别、fix 键集 1:1）与这些点的证据一致。
- dim5 字面量点（`useStateDbOnly`/`authinfo`）：**待核**——需 1.2.6 win IDB 深核，本章标注为开放项，不判「删除」也不判「一致」。

---

## 4. 坑清单汇总

各模块 ⚠ 节的汇总表（一行一条；明细与原文见「证据锚点」列指向的章节/证据点）。类型 → 影响。

| 编号 | 模块 | 坑（类型 → 影响） | 证据锚点 |
|---|---|---|---|
| P-01 | §2.1 | 终态判定收紧 → pause_turn/未知/缺失 stop_reason 一律 failed（invalid_response）；pre 的 `Exchange::resume` 自动续传链不能迁移成 release 能力，按 pre 语义实现续传会直接收到 failed | PROTO-01a/01b |
| P-02 | §2.1 | 终态信号 → message_delta 带的 stop_reason 字段 ≠ 终态信号；EOF 前无 message_stop 事件即 stream_truncated，不能凭已有内容推断成功 | PROTO-03 |
| P-03 | §2.1 | 事件语义 → content_block_stop 只标记关闭不发任何 SSE 帧；未知 index 的 block_stop 静默空返回——「没报错」≠「被处理」 | PROTO-05/06 |
| P-04 | §2.1 | 版本兼容 → thinking 信封 `ccswitch-anthropic-thinking-v1:` 与旧 `aimami-anthropic-thinking-v1:` 不兼容；旧前缀记录发 HTTP 前硬拒（中文提示新建会话），跨版本历史不能混用 | PROTO-08/10 |
| P-05 | §2.1 | 字面量口径 → 续传错误文案两构建实串不同（win release `…rejected by upstream…` 族 vs mac pre `…limit reached`），引用以对应构建伪代码/实串为准 | BACKEND-DELTA §5.5 |
| P-06 | §2.1 | 取证方法 → win release stripped 无 Rust 符号，定位靠串扫描→xref→enclosing function；handle_event 闭合到事件字面量级，未逐转移枚举 | §2.1 坑 6 |
| P-07 | §2.1 | 错误面边界 → release 状态机错误面全集已记录（upstream_protocol_error / stream_truncated / anthropic_search_incomplete 等）；状态机无文件/进程级破坏性副作用 | §2.1 坑 7 |
| P-08 | §2.2 | 行为边界 → aggregate 复用流式状态机与同一终态映射，不是宽松后门；非流式路径不接受流式被拒的内容 | PROTO-09 |
| P-09 | §2.2 | 回退边界 → EOF 聚合回退仅限「response 未开始且缓冲构成完整 JSON 文档」；已产出事件后被截断的流不静默转聚合成功 | PROTO-03 |
| P-10 | §2.3 | 兼容性 → 旧 aimami 前缀签名推理记录硬拒，用户只能新建会话；不迁移、不降级 | PROTO-10 |
| P-11 | §2.3 | 兼容性 → compaction 拒绝产生用户可见 400（router.native_compaction_required + 「不再生成兼容性伪摘要」）；依赖兼容伪摘要的上游在 release 直接断 | PROTO-10 |
| P-12 | §2.3 | 语义保持 → allowed_tools 无法等价表达时显式 82B 错误，不静默放宽；按「放宽成任意工具」实现即行为不符 | PROTO-11 |
| P-13 | §2.3 | 重试 → inline-tools beta 头校验失败 = 400 直接失败且无重试；不存在「去掉 beta 重试」兜底 | PROTO-22/23 |
| P-14 | §2.3 | 状态码 → 413 归属改写只把文案改成「not an AiMaMi limit.」，不改状态码语义；真正状态由 error-kind→HTTP 映射表决定 | PROTO-17 |
| P-15 | §2.3 | 脱敏 → 精确片段替换（fragment 为空不替换），不是模式/正则；通用脱敏另有 debug_log::redact_text_inner 一层 | PROTO-17 |
| P-16 | §2.3 | schema → oneOf/anyOf/allOf 组合 schema 含无作用域 $recursiveRef/$dynamicRef 直接装配失败，不静默通过 | PROTO-13 |
| P-17 | §2.3 | 推理门 → cannot disable thinking（81B）与 adaptive thinking + forced tool_choice 冲突（80B）是两条独立错误，判据分离 | PROTO-14 |
| P-18 | §2.3 | 历史校验 → 签名历史校验只读，版本混用/委托过旧/载体非法三条错误都带「history was not modified」语义保证 | PROTO-15 |
| P-19 | §2.3 | 净化守卫 → web_search 净化是四值与关系（protocol==1 且 channel/model/base_url 命中）；不满足守卫的 native Responses 请求原样透传 | PROTO-18 |
| P-20 | §2.3 | 模型名 → `[1m]` 后缀大小写不敏感移除并 trim；原模型决定 context-1m beta | §2.3 坑 11 |
| P-21 | §2.4 | 版本混用 → pre 不能当 release 用：Anthropic 请求转换、SSE 非法输入/结束条件、套餐值域、Skills 前端刷新均有实质差异 | §2.4 坑 1 |
| P-22 | §2.4 | 证据缺口 → PROTO-22/24/27 的 mac-pre 批次 仍 blocked，这些点的 pre 侧结论目前由 win-pre 单平台承载；PROTO-23 mac-pre 已于 2026-10-27 补证 covered | §2.4 坑 2 |
| P-23 | §2.4 | 概念区分 → effort 标签表的 ultra（trace_effort_label 七档）≠ 型号档 ultra- 前缀，两者不能互相证明 | §2.4 坑 3 |
| P-24 | §2.4 | 证据缺口 → 转发头治理名单 pre 侧已证存在，release 侧（双平台）无补证；不能据 pre 外推 release 名单内容 | PROTO-27 |
| P-25 | §2.4 | 实现细节 → 多处校验按长度先行分派（allowed_tools len13 / inline-tools token len23 / context_window len29 等）；长度不符直接落 default，差一个字符就是不同行为路径 | §2.4 坑 5 |
| P-26 | §2.5 | 成功判据 → 探测成功需「终态事件 + 有模型输出」双条件；两个失败面文案不同，不能把「流结束」当成功 | RT-05 |
| P-27 | §2.5 | 采样截断 → 增量文本超 400 字符即提前置 ended；探测只采样开头，不是完整生成 | RT-05 |
| P-28 | §2.5 | 成功判据 → Responses 协议 `response.completed` 事件单独出现不算成功，还须 `response.status=="completed"` | RT-05 |
| P-29 | §2.5 | 终态分类 → OpenAI `content_filter` 与 Anthropic `refusal` 是分类终态不是成功 | RT-05 |
| P-30 | §2.5 | 输入校验 → 端点路径连 `\` 也拒（位掩码 bit 57）；`.`/`..` 段拒绝是逐段比较不是子串匹配 | RT-06 |
| P-31 | §2.5 | 重试 → 模型发现 30 秒预算内零重试，失败/超时都直接终态；旧 `all retries exhausted` 终态已移除 | RT-04 |
| P-32 | §2.5 | 取证方法 → win-pre 两条流终态文案头部被字符串拼接表吞掉，strings 全扫只命中尾巴，定位须走 panic-Location 两跳 xref | RT-05 |
| P-33 | §2.5 | 证据缺口 → RT-05/RT-06 mac pre 侧未落证，逻辑描述全部出自 win-pre，不外推 mac | §2.5 坑末条 |
| P-34 | §2.6 | 跨平台枚举 → CatalogFailure kind pre 侧 mac 3 种 / win 5 种（多 timeout/tooLarge），跨平台枚举映射不能假设同一判别值表 | RT-01 |
| P-35 | §2.6 | 硬错误 → `codex_bundled_cli_path` 缺失即 `CODEX_ENGINE_NOT_FOUND`，明确不退独立 CLI/IDE 插件；任何兜底都违背边界 | §2.6 坑 2 |
| P-36 | §2.6 | 路径解析 → `catalog_db_path` 多候选歧义显式报错，不再取首个存在路径；无候选返回 None 而非伪造默认路径 | §2.6 坑 3 |
| P-37 | §2.6 | 写守卫 → `validated_mcp_config` 比对受管块标记序列（词法非语义等价），重写排版/换行改变标记段序列同样被拒；拒绝即不写盘 | RT-08 |
| P-38 | §2.6 | 凭据边界 → `official_headers` 拒 `aimami-`/`sk-aimami-` 前缀 token（AiMaMi relay key 不能当官方目录凭据）；Bearer 缺失或值含不可打印字符走空结果 | RT-01 |
| P-39 | §2.6 | 超时 → 官方目录拉取 4 秒单次超时不重试；win 直连通道中毒态（relay state poisoned）不重载就直接失败 | RT-01 |
| P-40 | §2.6 | 并发 → quota/proxy_status/get_active 三命令状态读取全在 Mutex 锁内完成，锁中毒走慢路径；不能假设无锁快照 | E12 |
| P-41 | §2.6 | 刷新语义 → usage 保存失败只降级 warning 不回滚已取得用量；至多三轮额外刷新仍待定时返回首次快照；事件 accountKey 为 None 时整键省略 | §2.6 坑 8 |
| P-42 | §2.6 | 参数钳制 → `update_usage_refresh_schedule` 间隔下限钳 30 秒（<30 静默抬升）；`manual` 归一结果是不排程不是报错 | §2.6 坑 9 |
| P-43 | §2.6 | 平台限定 → RT-13 受保护进程 DB 持有闸仅 win（Restart Manager API；静默关窗重试分母 11、每轮 300ms）；mac 无同形证据不外推 | RT-13 |
| P-44 | §2.6 | 副作用 → 路由修复/恢复、MCP/config 写、DB UPDATE、进程终止/重启仍是破坏性副作用；当前库/路径错误阻止写入而非 fallback；诊断修复不可压平为旧 generic fix_issue | §2.6 坑末条 |
| P-45 | §2.7 | 前置门 → fix_issue 静默窗校验可被调用方强制标志绕过（a8 为真跳过分派），「修复前必静默窗」非绝对不变量 | RT-11 |
| P-46 | §2.7 | 提交边界 → no-account 门命中即终止（*a1=10）无部分提交；条件按固定顺序评估，先命中者掩盖后序条件 | RT-10 |
| P-47 | §2.7 | 精确比较 → loopback 判定为精确值：scheme 恰 http、host 恰 127.0.0.1、path 空或 `/`（win 另要求 port 非零）；localhost/::1/https 一律拒绝 | RT-10 |
| P-48 | §2.7 | 计数口径 → 拒绝路径 mac-pre 6 条主函数 + 1 条闭包变体 / win-pre 7 条带前缀 + 1 条无前缀姊妹错误，不要强行凑「六」 | RT-10 |
| P-49 | §2.7 | 行为删除 → `native_off_invalid_openai_thread_models` 修复臂双平台删除、键降级 CHECK-only（24→23）；保留中转模型选择的旧对话只被诊断不再被自动修复 | RT-11 |
| P-50 | §2.7 | 恢复保护 → `router_recovery_record` 明示自动修复不触碰恢复资料（「不会覆盖或删除它」）；该键异常需人工/单独处理 | RT-12 |
| P-51 | §2.7 | 诊断副作用 → win-pre postcondition 探针带 `.aimami_probe` 探针文件写——诊断不全是纯读 | R4 |
| P-52 | §2.7 | 闭环 → R4 postcondition 校验跑两次（迁移后、fix_all 后）；第二次仍违规把完整违规清单拼进错误，错误文本体量随违规数增长 | R4 |
| P-53 | §2.7 | 恢复语义 → 已 committing 的 journal 记录不可被普通新阶段覆盖；target 不符/同步未确认返回 `ROUTER_COMMIT_RECOVERY_REQUIRED` 且不自动启动 ChatGPT——恢复是显式动作 | RT-09 |
| P-54 | §2.7 | 执行器变更 → release R7 改走 `run_with_environment`（pre 是 `run_with_writer_policy`）；不要把 pre 的双入口分工照搬到 release | R7 |
| P-55 | §2.7 | 写面 → fix_* 家族含 config/threads 表写、SQL COMMIT/ROLLBACK、条件 UPDATE、lsof 探测、注入提示词清理；全部有备份 + quiet-window 前置，但均为真实写操作 | §2.7 坑 11 |
| P-56 | §2.7 | 平台分叉 → 诊断进程扫描 mac=`ps -ax` 子进程 / win=Toolhelp32 API 族纯 API（win 二进制无 shell-out） | §2.7 坑 12 |
| P-57 | §2.7 | 证据缺口 → `restore_relay_model_threads` mac release 伪代码前 45 行后截断，正文级逻辑证据尚缺 | §2.7 坑末条 |
| P-58 | §2.8 | 破坏性写 → 切号/恢复写 auth.json+registry：先快照、互斥、失败三条硬校验，链不能收窄；capture 失败即中止切换（顺序强制） | §2.8 坑 1 |
| P-59 | §2.8 | 敏感数据 → `ExportedAccount` 14 键含 auth，不得当脱敏日志处理 | §2.8 坑 2 |
| P-60 | §2.8 | 语义 → `OAUTH_CLIENT_UPDATE_DEFERRED` 是延迟语义不是失败：凭据已落盘（disk_committed 先发），不能当错误重试落盘 | ACC-09 |
| P-61 | §2.8 | 值域漂移 → PlanType 内部 ordinal 不是 IPC 整数合同；`unknown` 判别值 8→10，按位置/判别值消费双方都会错 | ACC-01 |
| P-62 | §2.8 | 并发 → `set_account_alias` 与 OAuth 刷新/持久化共用同一把文件锁（`account state.oauth-refresh.lock`），互相阻塞 | ACC-03 |
| P-63 | §2.8 | 时序 → 三次采样核验不提前成功退出（仅 SSS/FSS 过）；100/250/500ms 是三次独立等待，不是 850ms 总时限 | ACC-12 |
| P-64 | §2.8 | 平台限定 → `load_runtime_display_snapshot` 是 win-only 注册（mac 零符号）；事件 wire accountKey 为 None 时整键省略 | §2.8 坑 7 |
| P-65 | §2.8 | 刷新语义 → usage 保存失败可成 warning 而非撤销；可选额外刷新最多三轮，返回值不必等于最近广播值 | §2.8 坑 8 |
| P-66 | §2.8 | 平台分叉 → 进程扫描 win=Toolhelp32 API 族 / mac=ps 子进程，切换/观测的进程面实现不能跨平台照搬 | §2.8 坑 9 |
| P-67 | §2.8 | 失效结论 → 两项旧中间分析为误报不得用于实现：「取消 OAuth 启动后三次重试」（三次采样仍在）、「action+64 保存凭据校验新增」（pre 已有） | §2.8 坑 10 |
| P-68 | §2.9 | 删除保护 → `remove_skill` 绝对路径 id = 外部条目，拒绝发生在锁、备份及删除之前（`External Skills are read-only`） | SK3 |
| P-69 | §2.9 | 平台分叉 → `skills/list` forceReload：mac=true / win 两版=false，跨平台实现不能统一照抄 | SK2 |
| P-70 | §2.9 | 归因 → win 两版已有 11 字段与外部条目只读删除保护；字段 8→11、绝对 id 拒绝只是 mac pre→release 变化面 | SK1/SK3 |
| P-71 | §2.9 | 合同位置 → warnings 在外层 envelope 不在 data 内；不能因页面 `.data.warnings` 改 IPC 字段位置 | §2.9 坑 4 |
| P-72 | §2.9 | 合并语义 → enabled 冲突转 null 并入冲突集合后不再反复覆盖，后续扫描不能自愈该字段 | SK2 |
| P-73 | §2.9 | 缓存新鲜度 → bootstrap 缓存只在空 warnings 时更新；降级/部分失败会话缓存保持旧值，新鲜度不能从「列表刚加载过」推断 | SK4 |
| P-74 | §2.9 | 权限 → source 枚举的 `plugin` 是来源值，不得据此推导新增 Tauri plugin/capability 权限 | SK1 |
| P-75 | §2.9 | 展示口径 → 前端 enabled 展示实测只有二态（false→disabled 徽标），第三态 null 无独立渲染分支；DTO 三态属后端口径 | SK6 |
| P-76 | §2.10 | 破坏性写 → 四条清理命令全部有破坏性副作用（delete_sessions 删 sqlite 行与 rollout 文件、写 sqlite、删全局 tmp）；tmp 删除失败仅记日志不冒错不补偿；后端无二次确认 | T2 |
| P-77 | §2.10 | 重写纪律 → rollout 重写成功 rename 覆盖历史，失败回收临时文件；`ReadStamp` 只是并发变更检测，不等于持久备份；missing_candidate 是 UPDATE 不是 DELETE | T1 |
| P-78 | §2.10 | DB 副作用 → `cleanup_orphan_router_threads_strict` 含 `PRAGMA wal_checkpoint(TRUNCATE)`——WAL 截断是全局 DB 副作用 | T1 |
| P-79 | §2.10 | 竞态范式 → 「retry required」是报错要求调用方重试，不是自动重试；消费侧不能把错误吞掉当成功 | T1 |
| P-80 | §2.10 | 导出防护 → 扩展名匹配（.csv/.json）+ 符号链接防护 + 目录存在校验；sessions 批量导出应沿用同级防护意识 | T2 |
| P-81 | §2.10 | 能力区分 → `thread/fork`（复制，带 excludeTurns）与 `migrate_session_worktree`（搬迁）是两个能力；release 前端只暴露 migrate 入口，fork 无 UI 无 IPC 面——做 fork UI 属新增能力 | W1 |
| P-82 | §2.10 | 读面边界 → `load_session_messages` 有 2MiB/64KiB 预算与服务失败回退 warning；不要把回退 warning 当空会话 | T2 |
| P-83 | §2.10 | 反直觉 → `thread_settings_applied` 识别器未命中返回 *a1=-1（非错误抛出）；可见性重写写回规范化行会改写 rollout 文件内容 | T1 |
| P-84 | §2.10 | 取证方法 → win stripped 定位靠串扫→xref→enclosing function；健康检查/路径解析/删除后的 UI 广播与持久化结果分开——后置刷新 warning ≠ 前置删除自动回滚 | §2.10 坑 9 |
| P-85 | §2.11 | 定性 → anthropic_trace 诊断字段扩展 ≠ 新增上游协议能力或计费口径（not_admitted 定性） | anthropic_trace |
| P-86 | §2.11 | 序列化 → `usage_omitted` 是饱和减法（samples−8）；`tail` 环形缓冲逻辑顺序 ≠ 物理数组顺序，按数组顺序读会错位 | anthropic_trace |
| P-87 | §2.11 | 可靠性 → 序列化失败路径可 panic（unwrap），不返回部分成功 JSON；诊断面不能当可靠遥测通道 | anthropic_trace |
| P-88 | §2.11 | 分类器 → error_class 是小写化后的子串包含匹配不是精确码表；上游错误文案微调会落 `unclassified` | anthropic_trace |
| P-89 | §1 | 计数口径 → 「103 个 CCF 命令名」≠ 真实 IPC 数（含 2 个 localStorage 误报、漏提 clean）；纠错后真实观察命令 102 | §1 坑 1 |
| P-90 | §1 | 资源重分包 → release 39 资源中 12 对仅构建 hash 引用变动；wrapper 147→109 的 38 个移除全属排除面——重分包 ≠ 功能删除 | §1 坑 2 |
| P-91 | §1 | 同名 ≠ 未变 → 同名 2449 中 779 个体级 CHANGED；bb/size ≥2x 筛查只拦膨胀，收缩与 callee-only 变化会漏网 | §1 坑 3 |
| P-92 | §1 | callee 差集 → 受 IDB 分析完成度差异污染会出现「新 callee」伪影；只作 directional 参考，判定以 bb/size + 体字节为准 | §1 坑 4 |
| P-93 | §1 | 体积 → 二进制体积下降 ≠ 功能删除（重分包/内联/glue 噪声）；功能判定只以符号/体级/注册证据为准 | §1 坑 5 |
| P-94 | §1 | win stripped → 命名函数仅 167/112,715，added_named 54 系统性低估真实新增；改名检测只能 stem 对 + 语义；2 个 反编译 null 体为疑似 ICF 折叠孪生 | §1 坑 6 |
| P-95 | §1 | glue 噪声 → 「???」归属桶 +1040/−680 是 std drop_in_place/serde 模板实例，不得计入业务增删 | §1 坑 7 |
| P-96 | §1 | 键集 → fix 键集终局 24→23 收缩 + CHECK 键 +1（router_recovery_record）；把 CHECK-only 键并入 fix 表会高估修复面 | §1 坑 8 |
| P-97 | §1 | 字面量 → 引用以二进制实串为准（「Restored auth.json does not match」实为格式串「Restored file does not match captured state:」等两处曾写错） | §1 坑 9 |
| P-98 | §1 | revision guard → provider 导入清理 byte+80 语义：最终 commit 前抑制条件删除；仅 byte+80=false 才按路径与文件 identity 尝试删除；内存 drop 不是磁盘回滚 | §1 坑 10 |
| P-99 | §1 | 枚举边界 → `handle_event` 全转移表未逐枚举（行为合同级闭合）；不标 accepted_unknown 也不得声称逐转移认证 | §1 坑 11 |
| P-100 | §1 | 禁实现 → `custom_instructions_entry_enabled`/`recharge_entry_enabled` 注册级零后端实证维持禁实现；`clean_orphan_rollouts` 删除白名单未逐行核（实现前须定向复核）；win HTTP 客户端栈维持 Unknown | §1 坑 12 |
| P-101 | §1 | 注册对账 → 112 注册完整性 ≠ 112 个命令均完成全文行为认证；10 个未观察页面调用的注册命令不得升级为行为已证 | §1 坑 13 |
| P-102 | §3 | 红线 → 禁止跨平台外推：mac 的 Skills 字段 8→11/绝对 id 拒绝/forceReload=true 不能记到 win（win pre 已有）；win pre 的 pause_turn=completed 不能套 mac 的续传叙述；反之亦然 | §3 坑 1 |
| P-103 | §3 | 口径 → 前端 bundle 字节级同哈希 ≠ 后端同构；后端进程扫描/自启/等待原语/注册面均有实质分叉 | §3 坑 2 |
| P-104 | §3 | 应答分叉 → `graceful_restart_for_update`：win 无 IPC 响应 / mac 应答 unit——按任一侧假设写 awaiting 逻辑都会在另一侧挂起；且命令触发进程退出+重启，验收环境不可随意调 | §3 坑 3 |
| P-105 | §3 | 注册缺口 → `load_runtime_display_snapshot` 的 mac 零符号是真缺口不是笔误；消费者不得按 win 合同在 mac 上实现该命令调用 | §3 坑 4 |
| P-106 | §3 | 假阴性 → win 字面量 0 命中 ≠ 功能缺席（stripped + 串池阈值）；`useStateDbOnly`/`authinfo` 维持「待核」而非「删除」 | §3 坑 5 |
| P-107 | §3 | 进程判别 → win 多值进程判别不可压 bool：名称/路径 fallback、退出后复查、提权一次、Restart Manager 边界缺一不可 | §3 坑 6 |
| P-108 | §3 | 方法不对称 → mac 同名 callee/byte 双线 vs win reloc-masked body hash，两侧 CHANGED/UNCHANGED 判定强度不同，覆盖率数字不得直接对齐口径 | §3 坑 7 |
| P-109 | §2.12 | panic 面 → run::inner 超大体闭包（315,645 B / 51,859 指令 / 6,218 blocks，blockwise_reconstructed）218 个 unwrap 桩汇入 ud2 @0x1002fdc57：启动期 config/ACL 解析失败直接 panic 无降级；该闭包是启动期上下文构造器（config→updater 公钥→108 命令 ACL→RuntimeAuthority::new）而非命令分派体，别在里面找分派表 | §2.12 |

---

## 5. 证据点结论总表

57 个证据点逐点结论（distinct point_id，supplement-manifest.jsonl 实测；「覆盖 批次」= manifest 中有落盘行的 批次，fixup-release 行覆盖 mac+win release 双平台）。pre 侧尚缺的一律在末列标注，不展开原因。

| 编号 | 组 | verdict | 覆盖 批次 | 一句话依据 | pre 侧/缺口标注 |
|---|---|---|---|---|---|
| PROTO-01a | relay 协议 | covered | mac+win release | 终态映射白名单：end_turn/tool_use/stop_sequence→completed，max_tokens/context_window→incomplete | — |
| PROTO-01b | relay 协议 | covered | mac+win release | 缺失/未知 stop_reason 与 pause_turn 汇合同一 failed 出口（invalid_response） | — |
| PROTO-02 | relay 协议 | covered | mac+win release | 三分支增量 UTF-8 解码 + EOF 残片双路径 invalid_utf8 | — |
| PROTO-03 | relay 协议 | covered | mac+win release | EOF 双旗标门控 → stream_truncated；聚合回退边界严格 | — |
| PROTO-04 | relay 协议 | covered | mac+win release | message_start 唯一/对象校验 + content 顺序守卫 + 终态幂等 | — |
| PROTO-05 | relay 协议 | covered | mac+win release | block index 非负整数/查重/delta 对不上区块三类校验全实证 | — |
| PROTO-06 | relay 协议 | covered | mac+win release | block_stop 只标记；message_stop 全量扫未关闭区块 → failed | — |
| PROTO-07 | relay 协议 | covered | mac+win release | 工具 id/name 非空 + partial_json 必须解析为 JSON 对象 | — |
| PROTO-08 | relay 协议 | covered | mac+win release | thinking signature/redacted data 非空 + ccswitch 信封组装/解析双向实证 | — |
| PROTO-09 | relay 协议 | covered | mac+win release | aggregate 形状/终态/区块逐项校验 + 回放复用同一流式状态机 | — |
| PROTO-10 | relay 协议 | covered | mac+win release | 旧签名/compaction 双入口 HTTP 前拒绝（prepare_request + forward 闭包） | — |
| PROTO-11 | relay 协议 | covered | mac+win release | allowed_tools 82B 显式拒绝不放宽 | — |
| PROTO-12 | relay 协议 | covered | mac+win release | json_schema → output_config.format 装配 + 能力门 + 三类显式错误 | — |
| PROTO-13 | relay 协议 | covered | mac+win release | oneOf/anyOf/allOf 发送前归一化 + 递归锚拒绝 | — |
| PROTO-14 | relay 协议 | covered | mac+win release | cannot disable thinking 81B 全文 + 独立标志位 + 三项校验分离 | — |
| PROTO-15 | relay 协议 | covered | mac+win release | 保序/动态 replay/namespace 先行/版本混用四项，校验只读不改写历史 | — |
| PROTO-17 | relay 协议 | covered | mac+win release（fixup） | [REDACTED] 精确片段替换 + 递归 walker + 413 归属改写 + error-kind 映射表 | — |
| PROTO-18 | relay 协议 | covered | mac+win release（fixup） | 净化守卫四值 + tools/additional_tools/allowed_tools/tool_choice 净化面 | — |
| PROTO-22 | relay 协议 | covered | mac+win release（fixup）+ mac-pre + win-pre | inline-tools-2026-09-15 字面量+注入/校验+触发门+调用链全链；mac-pre 补证 covered：`require_anthropic_inline_tools_header@0x100850290`（8.5KB 全文）→ptr 0x101C02DC0→字面量 @0x1018cdaa0 三跳 xref 全通，pre 与 release 同字面量+同注入点+同触发门——该头 pre 侧本就有，非 release 新增；win-pre 零命中为 win 二进制侧局部事实 | — |
| PROTO-23 | relay 协议 | partially_covered | mac+win release（fixup）+ mac-pre | effort 措辞识别 covered（trace error_class）；「去 beta 重试」uncovered——xref 穷尽+单 send 无回边+invalid beta 直接 400，release 不存在该路径；mac-pre 已补证 covered：`remove_rejected_optional_anthropic_beta@0x100853110` + 计数器上限 2 + `Trace::retry('optional_beta_rejected')` + `0x10084B395` 重发段，`is_anthropic_effort_rejection` 4 措辞→摘 effort→重发 | release 去 beta 重试子项维持 uncovered（双侧实证不存在）；win-pre 未查 |
| PROTO-24 | relay 协议 | covered | win-pre + mac release（§2.3）+ mac-pre | mythos-5-1 档位与档位名集合 pre↔release 逐名吻合；mac-pre 补证 covered：`anthropic_reasoning::model_profile@0x100781670`（7.4KB 全文）+ 'mythos-5-1'@0x1018c84ee（字节级唯一）+ 'ultra-'@0x1018c8574 唯一引用者 `codex_effort_to_anthropic@0x100782661`——ultra- 语义=effort 标签而非档前缀（win-pre 零命中争议由 mac 符号实证）；改档位表须同步 PRD 的负责方=model_profile | win release 侧 ultra- 的 win 二进制级证据尚缺 |
| PROTO-27 | relay 协议 | pre covered（win-pre + mac-pre） | win-pre + mac-pre | 转发头治理名单逐项常量比较 + 双调用方已记录；mac-pre 补证 covered：`proxy_access::allowed@0x1008375e0`（origin/referer/via/forwarded）+ `apply_extra_headers@0x100834c60`（24.7KB 跳过名单）+ 治理名单 rodata @0x1018cd0cd 逐名偏移与消费者 xref 对上；名单方向=出口侧治理（跳过/剥除）而非入站白名单 | release 双侧尚缺 |
| RT-01 | router/catalog | covered | mac-pre + win-pre（+mac release 伪代码族） | 官方目录运行时获取/validate/revision/双通道（直连 + app-server） | — |
| RT-04 | router/probe | covered | mac-pre + win-pre | 模型发现 30s 墙钟零重试 + 51B 超时串 + 旧终态移除四项齐备 | — |
| RT-05 | router/probe | covered | win-pre + mac-pre | ProbeStream 三协议流终态分类 + embedding error/data 校验七函数全文；mac-pre 补证 covered：`ProbeStream::finish@0x1003a0790` + `dispatch@0x1003a0a50`（19.5KB 全文，三协议 SSE 终态）+ `validate_embedding@0x1003a16c0` 全文，终态文案逐字一致；零命中文案经 decompile 破（内联假阴性，非真缺，无 accepted_unknown） | — |
| RT-06 | router/probe | covered | win-pre + mac-pre | join_upstream_url_with_query + validate_endpoint_path 两函数全文 + 四处调用面；mac-pre 补证 covered：`validate_endpoint_path@0x100855110`（位掩码 0x200000010000001 拒 '#''?''\'+按 '/' 切段拒 '.'/'..'）+ `join_upstream_url_with_query@0x100855470`（29.5KB 全文，query 键冲突检测）+ 模块其余 4 函数 pre universe 符号全在，两条错误文案逐字一致 | — |
| RT-08 | router/mcp | covered | mac release | validated_mcp_config 反编译 全文 + 58B 守卫文案；候选写改受管块标记序列即拒且不写盘 | 断言面限 mac |
| RT-09 | router/transition | covered | win release + mac 侧 row 13/14 + mac-pre | journal committing 相位 + ROUTER_COMMIT_* 恢复态合同（闭合事实 facts[13] 三锚点）；mac-pre 补证 covered：`begin_commit@0x1003a4620`→write_inner+require_sync fsync、`verify_router_commit@0x10087c600` 回读逐字段比对（STATE_CONFLICT 139B）、`commit_pending_error@0x1003a6520`（170B RECOVERY_REQUIRED 含「ChatGPT 不会自动启动」）、`commit_verified@0x10085ad20` 编排 + commit_failed/commit_sync_unconfirmed/degraded 收尾全部实证 | — |
| RT-10 | router/no-account | covered | mac-pre + win-pre | no-account 提交边界门六条（mac）/七条（win）拒绝逐条件实证 | — |
| RT-11 | router/diagnostics | covered | mac-pre + win-pre | fix 键 24→23：native_off_invalid_openai_thread_models 修复臂双平台删除降级 CHECK-only | — |
| RT-12 | router/diagnostics | covered | mac-pre + win-pre | router_recovery_record CHECK-only：read→kind→ensure_recovery_records_allowed 三级只读链 | — |
| RT-13 | router/transition | covered | win-pre | 受保护进程 DB 持有检测（Restart Manager）+ 300ms 静默关窗循环 + 阻断链四环 | 断言面限 win |
| RT-14 | router/provider | covered | win release | provider 六 handler 纯 dispatch shim，preflight 归位 router_transition 管线内部 | — |
| R4 | router/transition | covered | mac-pre + win-pre | postcondition→诊断→修复→重试闭环（双 postcondition 夹修复，attempt 计数贯穿） | — |
| R7 | router/commands | covered | mac-pre + win-pre + mac-release + win-release（四 批次） | set_codex_router_no_account_mode callee 集逐一枚举；release 改走 run_with_environment | — |
| R8 | router/commands | covered | mac-pre + win-pre + mac-release + win-release（四 批次） | set_codex_router_enabled callee 集；relaunch/rollback/format_invariant_violations 全链保留 | — |
| E7 | engine/诊断 | covered | mac release + win release | 第三方段隔离：mac 五函数族 + win 三函数面实证「已实现或等价」 | — |
| E12 | engine/quota | covered | mac release + win release | quota/proxy_status/get_relay_active 三命令实现面展开 + usage refresh 系 | — |
| ACC-01 | accounts | covered | mac+win release + frontend | PlanType 值域 9→11（+go/pro500）、unknown 判别值 10、徽标映射表与套餐顺序表 | — |
| ACC-02 | accounts | covered | frontend（双平台 bundle 同 md5） | Go/Pro500 名称/价格表 `$m` 全文提取（pro500="$500"，Go 无 price 键） | — |
| ACC-03 | accounts | covered | mac-pre + win-pre + mac release + frontend | set_account_alias：normalize→共用 OAuth 文件锁→registry 偏移写→快照重建 | — |
| ACC-05 | accounts | covered | win-pre + mac release + frontend | 重置卡历史 cursor 分页：events/next_cursor/granted 校验 + validate_cursor | win 侧游标专属文案检索口径缺口如实标注 |
| ACC-06 | accounts | covered | win-pre + mac release + frontend + mac-pre | 刷新全部账号开关：setter 写设置存储读回校验 + watcher WakeByAddressSingle 唤醒；mac-pre 补证 covered：`get/set_usage_refresh_all_accounts@0x1003d6090/0x1003d62d0`（写+读回同族）+ `start_usage_refresh_watcher@0x1003d5640` + `update_usage_refresh_schedule@0x1003d5f40`（2.2KB 全文），pre 与 release 行为一致 | — |
| ACC-07 | accounts | covered | win-pre + frontend + mac-pre | quota range 三档切窗（today/week/month，儒略历修正）+ 非法 range 报错原文；mac-pre 补证 covered：`load_history_range@0x100abde30`（16.2KB 全文，chrono 自然日/周一/月 1 日切窗）+ 两条错误文案内联立即数 @0x100abdfe5/@0x100abe1f4（find_bytes 零命中=内联假阴性，已记录） | 「剔除未来时间戳」未独立隔离（结构级证据 @0x100abde94） |
| ACC-09 | accounts | covered（win-pre + mac release）；mac-pre 实证不存在 | win-pre + mac release + mac-pre | OAUTH_COMMIT_NOT_STARTED / OAUTH_CLIENT_UPDATE_DEFERRED 两分支原文 + 写入顺序事件；mac-pre 补证：`persist_account_auth@0x100c36260`（42.7KB 全文）错误码面仅 OAUTH_LIVE_AUTH_WRITE_FAILED/OAUTH_REGISTRY_REBUILD_FAILED，两新分支 strings(18443 缓存)+find_bytes 双零命中——分支本体在 mac-pre 不存在，属 pre↔release 分界后增量（双 pre 构建不同源快照） | — |
| ACC-12 | accounts | covered（1.2.7 pre↔release 维度） | mac release + win 双版本 + mac-pre | 三次采样核验（100/250/500ms，仅 SSS/FSS 过）；两条 82B 错误串双版逐字节相同；mac-pre 补证 covered：`verify_after_launch` 两单态化 `@0x100b34b00`/`@0x100b34550` 算法正文全量（三档 sleep + 逐次 verify/live 身份比对 + 全败 SWITCH_LIVE_VERIFY_FAILED） | 1.2.6 基线维度未决（基线制品零命中，红线 38 只读取数） |
| SK1 | skills | covered | mac release + mac-pre + win SYSTEM-DIFF | InstalledSkillSummary 8→11 键（managed/source/enabled）+ source 七值枚举 + enabled 三态字节级写规则；mac-pre 补证 covered：pre `InstalledSkillSummary::serialize@0x1003bab80` 恰 8 字段（id/name/title/summary/relativePath/directoryPath/skillFilePath/updatedAt）、无 managed/source/enabled——11 字段归 release 新增实证 | win 两版已 11 字段（归因分叉） |
| SK2 | skills | covered | mac release + mac-pre（+win 分叉实证） | 原生库存合并：30s/10s 时限、分页校验、canonical 路径合并、降级告警两级；mac-pre 补证：pre `core::skills::load_installed_skills@0x1003cbdf0` 全文 = scan+sort、无 app-server 合并（skills_native_unavailable/forceReload 等串 0 命中）——pre 无该合并（uncovered-in-pre），release 新增实证 | forceReload 平台分叉（mac=true/win=false） |
| SK3 | skills | covered | mac release + mac-pre | remove_skill 首分支即绝对路径只读拒绝，先于锁/备份/删除；mac-pre 补证：pre `remove_skill@0x1003c71a0` 无该分支（id 仅 memcmp 匹配已装条目，不匹配走 `Skill not found: {id}`，命中后备份+remove_dir_all）——mac release 新增实证 | win 两版已有（归因分叉） |
| SK4 | skills | covered | mac release | bootstrap 缓存仅 warnings 为空时更新（守卫指令序列逐指令核对） | — |
| SK5 | skills | covered | frontend 双平台 | staleTime Infinity→60000 + refetchOnMount + 手动刷新按钮 + isFetching 防重入 | — |
| SK6 | skills | partial | frontend 双平台 | 来源标签/只读徽标/warnings 列表/删除门控四子项 covered；enabled 第三态无独立渲染分支 | 子项 uncovered-partial 如实标注 |
| T1 | threads | covered | win-pre + mac release 函数族 + mac-pre | 线程收敛/可见性重写三函数链（识别器/检查器/applier）+ 重写函数族 bb/callees 证据；mac-pre 补证 covered：`capture_latest_settings@0x100ada660`（'thread_settings_applied'@0x1018d6d92 字节级）→ `patch_convergence_rollout_target@0x100ae8ed0`（fit_record 保留历史）→ `verify_convergence_rollout_targets@0x100af0c10` 写后校验三段内容级闭环 | 「竞态重试」无专属文案按代码路径标注（双平台零命中，行为级证据） |
| T2 | threads | covered | win-pre + mac release + frontend + mac-pre | 七条会话命令全定位 + 六个 core owner 伪代码 + 前端七入口双平台字节一致；mac-pre 补证 covered：四条清理（`clean_catalog_ghost_threads@0x1002d6b40`/`clean_missing_rollout_rows@0x1002d5470`/`clean_orphan_rollouts@0x1002d2710`/`clean_global_state_tmp_files@0x1002d7750`）与 `load_session_messages@0x100b1c680` 全文，inspect/export 两主体截断桩以 callees+字符串佐证；⚠ clean_global_state_tmp_files fs::remove_file@0x1002d7ffb | — |
| T3 | threads | covered（字段面）；mac-pre partial | win-pre（+mac release 装配面）+ mac-pre | CodexSession 四字段（parentSessionId/depth/agentNickname/agentRole）内容级证据；mac-pre 补证 partial：serialize 键池 @0x101829e77（'parentSessionId depth agentNickname agentRole…'）+ `FieldVisitor::visit_str@0x1002e0690`（case13 'agentNickname'→field7）serialize/deserialize 双向实证字段面；赋值规则止于 app-server 载荷透传级 | depth 计算未命名、nickname/role 赋值规则正文双平台未实证 |
| W1 | threads/fork | partial（后端 covered；前端 uncovered） | mac-pre + win-pre 后端 covered | fork_thread_to_cwd 全文（cwd 校验 + 返回一致性比对）；release 内联行为不变；mac-pre 补证 covered（leaf 补登，为 10-26/10-27 两轮 blocked 后首个 mac-pre 落盘）：`fork_thread_to_cwd@0x10027d7b0` + 'thread/fork'@0x1018212b1 xref 唯一引用 + request_rpc_with_timeout(120s) + 返回 cwd memcmp@0x10027df48 + paths_equivalent 兜底 | 前端 fork UI 入口 uncovered（无双平台 fork 类命令） |
| anthropic_trace | 诊断 | covered | mac release + win release | 诊断 DTO 字段扩展（非业务能力）+ error_class 子串分类器 + 五落位地址 | — |

---

## 6. 证据面缺口

当前缺口清单（一行一条，不展开叙事；以 supplement-manifest.jsonl 147 行逐点最新行实测为准，2026-10-28 复核。环境性 blocked 已清零：mac-pre 批次 31 条 blocked 历史行对应的 18 点已分两轮全部解除——2026-10-27 解除 6 点 7 条，2026-10-28 经 mac 侧实例（mac-pre-fixup2 批次）解除剩余 12 点（ACC-06/ACC-07/ACC-09/PROTO-22/PROTO-24/PROTO-27/RT-05/RT-06/T1/T2/T3/W1，W1 为 leaf 补登）；残留项均为真实 partial/uncovered，无环境阻塞项）：

- ACC-09：mac-pre 侧 uncovered——OAUTH_COMMIT_NOT_STARTED / OAUTH_CLIENT_UPDATE_DEFERRED 分支本体在 mac-pre 不存在（`persist_account_auth@0x100c36260` 错误码面仅两个既有错误码 + strings/find_bytes 双重零命中）；win-pre 有字面量 → 双 pre 构建不同源快照，该新增面属 pre↔release 分界后增量。
- SK2 / SK3：mac-pre 侧 uncovered = pre 侧实证不存在（`load_installed_skills@0x1003cbdf0` 无合并 / `remove_skill@0x1003c71a0` 无只读拒绝分支），release 新增实证——归因事实记录，非缺口。
- PROTO-23：「上游拒绝 beta 后去掉 anthropic-beta 重试」release 双侧实证不存在（uncovered 子项）；mac-pre 侧已补证 covered（`remove_rejected_optional_anthropic_beta@0x100853110` 链），win-pre 未查。
- PROTO-24：win release 侧 ultra- 的 win 二进制级证据尚缺（mac release 已实证存在、win-pre 已实证不存在、mac-pre 已补证 ultra- 语义=effort 标签而非档前缀）。
- PROTO-27：release 双侧（mac+win）转发头治理名单证据尚缺（win-pre + mac-pre 均已实证存在）。
- ACC-12：1.2.6 基线维度未决（基线制品零命中，红线 38 只读取数；1.2.7 内部 pre↔release 维度已 covered，mac-pre 已补证）。
- W1：前端 fork UI 入口 uncovered——release 前端无双平台 fork 类命令与 UI 字样（相邻 `migrate_session_worktree` 入口已记录）；mac-pre 后端已补证 covered（leaf 补登）。
- SK6：enabled 第三态（null）前端独立渲染分支未找到（uncovered-partial 子项）。
- T3：`compute_session_depths` 上游计算未命名定位、agentNickname/agentRole 赋值规则正文未实证（mac-pre 补证 partial：serialize 键池 + deserialize visitor 双向实证字段面，赋值规则止于 app-server 载荷透传级）。
- `restore_relay_model_threads`：mac release 伪代码前 45 行后截断，model_fallback 正文级逻辑尚缺。
- dim5 字面量 `useStateDbOnly` / `authinfo`：win 双版本 0 命中，维持「待核」（需 1.2.6 win IDB 深核），不判删除也不判一致。
- `clean_orphan_rollouts`：删除白名单匹配条件未逐行核（实现前须定向复核）。
- win HTTP 客户端栈（TLS/代理链）专项差异未逆，维持 Unknown。
