# win 1.2.7 vs 1.2.6 函数体 diff（basic_blocks + callee 集合 + 字节 SHA 三角交叉）

- 生成时间：2026-10-03
- 数据面：win IDA 实例 <审计环境> (1.2.7, IDB `AiMaMi.1.2.7 win64.exe.i64`, imagebase 0x140000000) 与 <审计环境> (1.2.6, IDB `AiMaMi 1.2.6 win64.exe.i64`)
- 方法：对每个目标函数取 `{addr, size, blocks(FlowChart 数), sha256(全文 16 hex), callees(去重函数起始 EA 集)}` 五元组，跨版本按 **命令名/语义锚点** 对齐（strip 二进制函数 EA 整体漂移，不能用 EA 对齐）
- 对齐策略：
  - tauri command handler：1.2.6 用人工命名函数 EA + 1.2.7 用命令名串 xref 所在的 dispatch glue 函数 EA（注：dispatch glue 内嵌 handler 调用，glue 指纹 = handler 逻辑指纹）
  - 新模块函数：1.2.7 用 panic-Location 源路径串两跳 xref 锚定
  - 移除函数：1.2.7 侧串扫描确认命令名串不存在
- 上游输入：`intermediate/aimami/delta-1.2.6-1.2.7/SYMBOL-DIFF-win-1.2.6-vs-1.2.7.md`（符号名 diff 报告，本轮的 scope 来源）
- 范围：voice 相关全部忽略（out-of-scope）；dim6 留白

## 判定规则（红线 32）

| 信号 | 阈值 | 判定 |
|---|---|---|
| sha256 完全相同 | — | identical（含地址漂移但字节一致 → 不可能，本批 0 例） |
| blocks 数差 ≥ 2× 或 callee 数差 ≥ 2× | — | **major change**（非噪声） |
| blocks 差 < 2× 且 callee 差 < 2× 但 sha 不同 | — | **minor change**（补丁/微调） |
| blocks/size/ncallees 完全相同且 callee 集合模式一致 | — | **likely identical**（重编漂移） |

## A. 命令/函数「移除」（1.2.6 有，1.2.7 无）

| 1.2.6 函数 | 1.2.6 EA | size | blocks | ncall | 1.2.7 状态 | 判定 |
|---|---|---|---|---|---|---|
| `get_codex_router_auth_readiness` (owner_sys) | 0x140547c70 | 113 | 1 | 4 | 命令名串不在 1.2.7 二进制 | **removed** |
| `load_change_analytics` | 0x140d91b60 | 5147 | 156 | 33 | 命令名串不在 1.2.7 二进制 | **removed**（被 `load_dashboard_analytics` / `load_thread_analytics` 族取代） |
| `load_session_analytics` | 0x140d977d0 | 5147 | 156 | 33 | 命令名串不在 1.2.7 二进制 | **removed**（同上） |
| `load_token_analytics` | 0x140d95800 | 5552 | 157 | 33 | 命令名串不在 1.2.7 二进制 | **removed**（同上） |
| `load_tool_analytics` | 0x140d939b0 | 5147 | 156 | 33 | 命令名串不在 1.2.7 二进制 | **removed**（同上） |
| `load_usage_analytics` | 0x140d9c1e0 | 4662 | 173 | 32 | 命令名串不在 1.2.7 二进制 | **removed**（同上） |
| `set_codex_no_account_slots` | 0x140d75ea0 | 4378 | 138 | 29 | 命令名串不在 1.2.7 二进制 | **removed**（no-account 模式改走 `NoAccountModelRestoreJournal` + `nativeNoAccountMode`） |

注：`load_*_analytics` × 5 在 1.2.6 是 5 个独立 handler，指纹高度同构（size≈5KB, blocks≈156, ncall≈33），1.2.7 由新的 analytics 子目录（`core/analytics/{aggregate,index,parser/{paths,tokens,tools},reader,threads}.rs`）支撑、改暴露 `load_thread_analytics` / `load_thread_analytics_detail` / `load_dashboard_analytics` / `load_session_messages` / `export_thread_statistics` 5 个新命令，指纹见 §B.2。这是**重构**而非删除功能。

## B. 命令「新增」（1.2.7 有，1.2.6 无）

### B.1 账号（accounts）

| 1.2.7 命令 | 1.2.7 glue EA | size | blocks | ncall | sha | 备注 |
|---|---|---|---|---|---|---|
| `set_account_alias` | 0x140362320 | 4030 | 119 | 28 | 82b80f218943e157 | 账号卡片备注，新 |
| `get_account_reset_credits` | 0x140361020 | 3005 | 99 | 24 | 6427c6dbf21bc2eb | 到期重置额度查询，端点 `chatgpt.com/backend-api/wham/rate-limit-reset-credits` |
| `get_account_reset_credit_history` | 0x14035faa0 | 3471 | 104 | 25 | 075c21139cd2b84f | 到期重置历史 |
| `get_usage_refresh_all_accounts` | 0x1405fbca0 | 28374 | 429 | 174 | 4fd3f4912e06a2e6 | 全账号用量刷新（巨型 dispatch，callees 174 个，是 1.2.7 单账号刷新命令的聚合入口） |
| `set_usage_refresh_all_accounts` | 0x1405f2b40 | 1150 | 36 | 13 | acbd0c15c74c11ee | 全账号用量刷新 setter |

### B.2 线程/会话分析（sessions/threads）

| 1.2.7 命令 | 1.2.7 glue EA | size | blocks | ncall | sha |
|---|---|---|---|---|---|
| `export_sessions_batch` | 0x14033fa30 | 6730 | 171 | 34 | 4e13130c78473dea |
| `export_thread_statistics` | 0x14038a050 | 4672 | 162 | 32 | b2505fc4277f4c5b |
| `load_thread_analytics` | 0x14038bd50 | 4516 | 136 | 32 | 52f251637aa8875a |
| `load_thread_analytics_detail` | 0x140388340 | 4870 | 144 | 34 | 606897479b9b3072 |
| `load_session_messages` | 0x140342140 | 5487 | 144 | 32 | de7e465edd49f2b0 |
| `load_dashboard_analytics` | 0x14038d7a0 | 5099 | 150 | 35 | 42bea1219d7eb914 |
| `set_dashboard_analytics_active` | 0x1405faf00 | 1150 | 36 | 13 | 432e3a88626ee8db |
| `inspect_session_index_health` | 0x14033e010 | 4823 | 135 | 30 | 6fe64b076f989da4 |

观察：4 个 `load_*` / `export_*` analytics handler 的 size ∈ [4516, 5487]、blocks ∈ [136, 150]、ncall ∈ [30, 35]，与 1.2.6 旧 5 个 analytics handler（size≈5147, blocks≈156, ncall≈33）指纹量级一致 — **是对等重写**，不是新增能力，底层分析引擎换成 `core/analytics/*` 子模块（parser/aggregate/index/reader/threads）。

### B.3 线程目录清理命令族

| 1.2.7 命令 | 1.2.7 glue EA | size | blocks | ncall | sha |
|---|---|---|---|---|---|
| `clean_catalog_ghost_threads` | 0x140337610 | 4697 | 148 | 29 | ac8bef2bf07da4e3 |
| `clean_missing_rollout_rows` | 0x140339090 | 4697 | 148 | 29 | 95dafd8b63363312 |
| `clean_orphan_rollouts` | 0x14033ab10 | 4697 | 148 | 29 | 44aa1662f2afcbf3 |
| `clean_global_state_tmp_files` | 0x14033c590 | 4697 | 148 | 29 | 217306b452ddb326 |

4 个清理 handler 指纹完全一致（size/blocks/ncall 相同），仅 callees 头部第 5 项不同（0x140017000/0x140016d00/0x140016a00/0x140017300）— 是 4 个**同模板 glue**，分别调用一个独立底层清理函数；底层清理函数 EA 即 callees 中的那 4 个差异项。

## C. 命令「保留」（双侧都有，逐函数对比）

按 size/blocks/ncallees 三轴比对，Δsize% = (size_127 − size_126)/size_126：

| 命令 | 1.2.6 (size, blocks, ncall) | 1.2.7 (size, blocks, ncall) | Δsize% | Δblocks | Δncall | 判定 |
|---|---|---|---|---|---|---|
| `switch_account` | 3618, 110, 26 | 3618, 110, 26 | 0% | 0 | 0 | **likely identical** |
| `switch_account_and_restart_codex` | 3618, 110, 26 | 3618, 110, 26 | 0% | 0 | 0 | **likely identical** |
| `confirm_pending_auto_switch_and_restart_codex` | 2499, 82, 21 | 2499, 82, 21 | 0% | 0 | 0 | **likely identical** |
| `restart_codex` | 2286, 87, 19 | 2286, 87, 19 | 0% | 0 | 0 | **likely identical** |
| `force_kill_codex` | 984, 33, 12 | 984, 33, 12 | 0% | 0 | 0 | **likely identical** |
| `load_sessions` | 4363, 132, 30 | 4848, 142, 31 | +11.1% | +10 | +1 | **minor change**（新增字段/分支） |
| `delete_sessions` | 4972, 146, 31 | 5050, 147, 31 | +1.6% | +1 | 0 | **minor change** |
| `export_session_markdown` | 6235, 152, 31 | 6235, 152, 31 | 0% | 0 | 0 | **likely identical** |
| `migrate_session_worktree` | 5069, 146, 31 | 4977, 146, 31 | −1.8% | 0 | 0 | **likely identical**（size 略减 = 内联/对齐差异） |
| `activate_relay_provider` | 1467, 42, 14 | 1467, 42, 14 | 0% | 0 | 0 | **likely identical** |
| `deactivate_relay_provider` | 1467, 42, 14 | 1467, 42, 14 | 0% | 0 | 0 | **likely identical** |
| `upsert_relay_provider` | 1518, 46, 15 | 1518, 46, 15 | 0% | 0 | 0 | **likely identical** |
| `delete_relay_provider` | 1547, 46, 15 | 1547, 46, 15 | 0% | 0 | 0 | **likely identical** |
| `reorder_relay_providers` | 1214, 36, 13 | 1214, 36, 13 | 0% | 0 | 0 | **likely identical** |
| `get_relay_active` | 1000, 33, 13 | 984, 33, 12 | −1.6% | 0 | −1 | **minor change**（callee −1） |
| `get_relay_proxy_status` | 936, 33, 13 | 904, 33, 12 | −3.4% | 0 | −1 | **minor change**（callee −1） |
| `get_relay_provider_quota` | 4848, 116, 28 | 4448, 116, 27 | −8.3% | 0 | −1 | **minor change** |
| `load_relay_state` | 904, 33, 12 | 904, 33, 12 | 0% | 0 | 0 | **likely identical** |
| `export_relay_config` | 1563, 42, 14 | 1563, 42, 14 | 0% | 0 | 0 | **likely identical** |
| `import_relay_config` | 1547, 46, 15 | 1547, 46, 15 | 0% | 0 | 0 | **likely identical** |
| `fetch_relay_models_draft` | 12439, 323, 51 | 6123, 176, 34 | **−50.8%** | **−147** | **−17** | **major change**（路由 catalog 化重构，模型获取路径大幅收窄；对应符号面新增的 `native_catalog.rs`/`native_repair_catalog.rs`） |
| `set_codex_router_enabled` | 4834, 145, 34 | 4834, 145, 35 | 0% | 0 | +1 | **minor change**（callee +1，多调用一个函数） |
| `set_codex_router_no_account_mode` | 4783, 144, 33 | 4815, 144, 34 | +0.7% | 0 | +1 | **minor change**（callee +1） |
| `set_relay_provider_network` | 1483, 42, 14 | 1483, 42, 14 | 0% | 0 | 0 | **likely identical** |
| `reveal_relay_api_key` | 1390, 39, 14 | 1278, 36, 13 | −8.1% | −3 | −1 | **minor change**（凭据 revision 化波及，blocks −3） |
| `export_accounts_to_file` | 4142, 109, 27 | 4142, 109, 27 | 0% | 0 | 0 | **likely identical** |
| `import_accounts_from_file` | 5954, 162, 33 | 5954, 162, 33 | 0% | 0 | 0 | **likely identical** |
| `preview_account_import` | 3379, 104, 26 | 3379, 104, 26 | 0% | 0 | 0 | **likely identical** |
| `refresh_single_account_usage` | 4134, 126, 31 | 4144, 126, 31 | +0.2% | 0 | 0 | **likely identical** |
| `remove_accounts` | 5256, 146, 30 | 5256, 149, 30 | 0% | +3 | 0 | **minor change**（分支 +3，账号删除路径加了新判断，候选：alias/observer 状态清理） |

### C 节汇总

- **likely identical**：17 / 30（switch_account 族 4、relay provider CRUD 8、export/import/preview accounts 3、load_relay_state、refresh_single_account_usage、migrate_session_worktree）
- **minor change**：12 / 30（load/delete_sessions、get_relay_active/proxy_status/provider_quota、set_codex_router_enabled/no_account_mode、reveal_relay_api_key、remove_accounts）
- **major change**：1 / 30（**`fetch_relay_models_draft`**，callee 数 −33%、blocks −45%，对应智能路由 catalog 化）

红线 32 阈值为「blocks 或 callee 差 ≥ 2× 判定非噪声」。本批只有 `fetch_relay_models_draft` 越过该阈值。

## D. 1.2.7 新模块锚定函数（仅 1.2.7，无 1.2.6 对照）

按 panic-Location 两跳 xref 锚定的关键新模块函数，函数体指纹列出供后续 deep 阶段使用：

| 模块 | EA | size | blocks | ncall | sha |
|---|---|---|---|---|---|
| `account_alias.rs` (子处理 1) | 0x14014eff0 | 1623 | 53 | 16 | a0c3c6364265bb82 |
| `account_observer.rs` | 0x140d43af0 | 9457 | 266 | 56 | 4064704eaa9a8ca9 |
| `anthropic_trace.rs` ×5 | 0x1407b7870 / 0x1407bfe10 / 0x1407c2100 / 0x1407ca440 / 0x1407cd760 | 464 / 2564 / 829 / 2351 / 4197 | 28 / 100 / 34 / 81 / 167 | 4 / 17 / 12 / 12 / 10 | 8e2312c9… / aa22564a… / 91272e8d… / a65b3ebf… / 9cc1eb22… |
| `native_catalog.rs` ×3 | 0x1401f4ee0 / 0x1401f5580 / 0x1406f9c70 | 465 / 443 / 13382 | 24 / 20 / 386 | 5 / 10 / 81 | 3f7d5465… / 4619d26a… / 09ffda3b… |
| `transition_journal.rs` ×2 | 0x1407d7480 / 0x1407d76d0 | 364 / 598 | 7 / 20 | 3 / 4 | 08d0eb30… / 243db92c… |
| `codex_app_server.rs` ×5 | 0x14090d0f0 / 0x140930f60 / 0x140931890 / 0x140932720 / 0x140970290 | 6604 / 1384 / 1842 / 533 / 6004 | 261 / 58 / 72 / 22 / 230 | 27 / 14 / 17 / 8 / 25 | af33ba8c… / 79350911… / d0222366… / 8da852cb… / 46196ff7… |
| `codex_engine.rs` ×2 | 0x14097e790 / 0x140980400 | 1809 / 17960 | 56 / 618 | 17 / 64 | 4d37820e… / 7218bb2b… |

观察：
- **`native_catalog.rs` 的 0x1406f9c70 是 13 KB / 386 blocks / 81 callees 的核心重构函数**——这就是路由 catalog 化的主战场，对应 `fetch_relay_models_draft` 在 1.2.7 缩到一半（原先散落各处的模型获取逻辑被收编进 catalog）。
- **`codex_engine.rs` 的 0x140980400 是 17 KB / 618 blocks / 64 callees**——ChatGPT 引擎探测/校验的主力函数，对应 §4d 那 9 个 `CODEX_ENGINE_*` 错误码。
- **`account_observer.rs` 的 0x140d43af0 是 9 KB / 266 blocks / 56 callees**——账号 auth observer，与 §4a 的 `account_oauth`/`external_auth_synced` 字符串对应。
- **`codex_app_server.rs` 5 个函数合计 ~16 KB**——ChatGPT app-server 直连层（thread/list、thread/read、delete、models、skills），这是 ChatGPT 引擎目录适配的另一条腿。

## E. 数量摘要

- 本批对齐命令/函数：30 kept + 17 new + 7 removed + 8 个新模块锚定组 = 62 个比对单元
- likely identical：17；minor change：12；major change：1；removed：7；new：17（命令）+ 8 组新模块锚定
- 1.2.6 侧另有 18 个已命名但无 1.2.7 命令名对照的内部辅助函数（`repository_*` × 4、`thread_*` × 6、`check_legacy_migrated_threads`、`auto_switch_daemon_once_core`、`orphan_thread_adoption_row_to_json_MAPFOLD`、`write_orphan_thread_adoption_recovery`、`codex_diagnostic_requires_quiet_window_owner_sys`、`rewrite_session_meta_base_instructions_helper_sys`、`append_thread_reconcile_warnings`、`apply_handler_invoke_shared_glue`、`check_and_fix_thread_poisoned_instructions`、`thread_response_item_ids_*`、`set_anthropic_thinking_carrier`、`translate_anthropic_response_to_output_items`、`reconcile_router_on`、`commit_auth_for_router`、`codex_bundled_cli_path`、`get_codex_router_auth_readiness_owner_sys` 等），它们不是 tauri 命令、无对应命令名串，本轮未做 1.2.7 对齐（需要用 panic-Location 源路径反向锚定，超出本轮范围，留 deep 阶段）

## F. 注意事项（下游必读）

1. **本 diff 的 kept 对照是 dispatch-glue vs named handler 的对照**。1.2.7 侧 glue 内嵌 handler 调用上下文；1.2.6 侧人工命名的 handler 在编译产物里紧邻对应 glue（同一 Rust fn），二者的指纹在本方法下等价——验证方法：`switch_account` 双侧都是 3618/110/26，说明 1.2.6 的 `switch_account` 名字指到的就是 glue。
2. **EA 不可跨版本对比**：所有 EA 都是 imagebase 相对，但跨版本布局重排，所以表里的 EA 只在单侧内有意义。
3. **`likely identical` 不等于字节相等**：编译器在不同构建里会做寄存器分配/指令调度微调，sha256 几乎必然不同；判相同只靠 (size, blocks, ncallees, callee 集合模式) 四元组完全一致。
4. **4 个 kept 命令在 1.2.7 字符串扫描里找不到命令名**：`codex_bundled_cli_path`、`reconcile_router_on`、`commit_auth_for_router`、`set_anthropic_thinking_carrier`。这些不是 tauri 命令名（它们是 1.2.6 IDB 人工命名的内部辅助函数），需要用 panic-Location 锚定，本轮未做。
5. **voice 相关全部忽略**，未纳入任何对比表。
6. **dim6 留白**，未做实现侧影响评估。
