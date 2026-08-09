# AI 执行队列

生成时间：2026-05-25  
Source：fullchain current status rollup、Windows final open-gap rollup、Windows artifact availability R2、Darwin detailed delta summaries。  
边界：本队列不授权下载、解包、Ghidra、RetDec 或长逆向；只描述后续 worker 可接的条件和验收口径。

## 开工必读：IDA core module inventory reference (macOS AiMaMi 1.0.9)

本段是认领范围索引，不是 gate 提升、不是 raw evidence、不是 runtime proof。开工前先读本队列、`task-plan.json`、`INDEX.jsonl` 和本机 queue claims；认领必须按真实 `core::*` 范围拆分，禁止和已有 producer/active session 抢同一 canonical module/command。平台边界保持独立：macOS 只证明 macOS，不能外推 Windows。

IDA SOT：`${C5CM_INTERNAL_HISTORY_ROOT:-$C5CM_SHARE_ROOT}/raw/binary/AiMaMi 1.0.9_ida.app/Contents/MacOS/AiMaMi.i64`；input SHA-256 `1db044e8efab3b9eba8668b5a008f4952194ec0dd6a70a10725a5e7ad0350482`。当前 `codexmate_lib::core` universe 约 608 个符号；`core::models` / serde / envelope / drop shims 只作 DTO/error 支撑，不单独认领为业务模块。

| 认领范围 | `core::*` 子名 | 线程模型速记 |
|---|---|---|
| accounts | `account_io`, `repository`, `auth`, `api_client`, `oauth_refresh`, `quota_store`, `quota_history`, `bootstrap_cache`, `plan_mapping` | 主要同步阻塞 FS/JSON/registry/state；API/OAuth 使用 `reqwest::blocking`；`account_io::import_accounts` 走 parse/ensure dirs/registry active guard/snapshot/serde/`relay::atomic_write::write_atomic`/`Repository::rebuild_registry`；无 core async/spawn |
| plugins deep | `plugins::registry`, `plugins::builtin`, `plugins::models` | `PluginRegistry` 为 mutex-protected in-process store；`set_enabled/update_settings/new` 持锁后 `save_store_static`；builtin 为纯 DTO 构造；无 async/spawn |
| sessions and analytics | `sessions`, `analytics`, `session_analytics` | 同步 FS traversal、SQLite/rusqlite、rollout index、JSON/CPU 聚合；无 async/spawn |
| mcp | `mcp::{quote_toml,unquote_toml,insert_mcp_block,load_mcp_servers,save_config_text,remove_mcp_server,upsert_mcp_server,parse_mcp_document,strip_toml_comment,set_mcp_server_enabled,parse_mcp_section_header}` | 同步 TOML parse/edit + `save_config_text -> relay::atomic_write::write_atomic`；无 async/spawn |
| skills | `skills::{copy_dir_all,import_skill,remove_skill,load_skill_backups,load_skill_summary,delete_skill_backup,restore_skill_backup,load_installed_skills,scan_skills_recursive,backup_skill_directory}` | 同步 recursive FS copy/remove/backup/metadata/canonicalize/load summary；无 async/spawn |
| relay manager/storage/write | `relay::manager`, `relay::storage`, `relay::atomic_write`, `relay::codex_writer`, `relay::codex_catalog`, `relay::io`, `relay::breaker`, `relay::keychain` | manager 外层 sync mutex；`ensure_proxy_started` sync wrapper 调 `Runtime::block_on`，内部 Tokio bind/spawn；storage/write/catalog/io/keychain/breaker 主要同步 FS/config/keychain/mutex |
| relay proxy/transport/tools | `relay::proxy_server`, `relay::health_check`, `relay::proxy_passthrough`, `relay::passthrough_audit`, `relay::web_tools`, `relay::fetch_models`, `relay::translator` | proxy/health/web_tools/passthrough 为 Tokio/Axum/reqwest async HTTP/WS/SSE future closure；translator 是同步 JSON/SSE state machine，运行在 async proxy handler 内 |
| relay migration/diagnostic | `relay::codex_thread_visibility`, `relay::codex_diagnostic` | 同步 DB/FS/process-stop/config repair；`patch_rollouts_in_parallel` / `rollback_rollouts_in_parallel` 是并行 helper closure，认领时必须深挖具体 parallel 边界 |

## 消费侧排期需求 Consumer Intake

消费侧（codex-impl / cc-impl / maple）在此表登记对逆向侧的排期需求。逆向侧在 2 个工作日内回执 `producer-ack`（acked / rejected）；rejected 须写 block 类型和解除条件。共享 gate 已升级为三档：`consumerStartReady`、`strictImplementationUse`、`readyToImplement`，定义见 [GATE-SPEC.md](./GATE-SPEC.md) 与 [CONSUMER-GATE-SCHEMA.md](./CONSUMER-GATE-SCHEMA.md)。

消费侧行动边界：

- `consumerStartReady=true`：可以开始实现，但不得宣称 upstream 100% 等价；必须遵守 `allowedImplementationMode` 和 `forbiddenAssumptions`。
- `strictImplementationUse=true`：可按 upstream 行为严格实现，但仍不等于最高 ready。
- `readyToImplement=true` 且 `implementation_use=true`：最高放行档，可宣称 ready leaf。
- `productDecisionStartReady` 不是新档位，只能写作 `consumerStartReady.startMode="product_decision"`。
- `strictParityReady` 只是证据字段，不是消费队列档位。
- Unknown 必须分类为 `blocks_start`、`accepted_unknown` 或 `product_decision`。

消费侧不得绕过 `reverseRequiredQueues.consumerStartBlocked`、`forbiddenUntilStrictImplementationUse` 或 `forbiddenUntilReady`。旧 `readyToImplement=[]`、旧 `implementation_use=false` / `gate_accepted=false` / `full_leaf_100=false` 不自动升级；生产者必须按新 schema 复核后再迁移。

模块升级策略：

- Windows 端差异优先做到 `consumerStartReady`，但 Windows 仍独立闭合，不能用 macOS 外推。
- accounts -> plugins deep -> relay targeted -> system -> tray 仍按当前执行顺序推进。
- 除 Windows 端差异外，优先做到 `strictImplementationUse`。
- 简单、低风险、证据完全闭合的 leaf 再补到 `readyToImplement`。
- relay 等复杂功能逆不出完整 terminal transport 时，可以走 `consumerStartReady + startMode=product_decision`，但必须显式 `strictImplementationUse=false`、`readyToImplement=false`、`not_upstream_strict_parity`。

### 历史操作日志（2026-05-25 至 2026-06-02）

以上 macOS-only overlay 笔记、recovered machine-queue producer progress、
当前队列状态（P0/P0-WIN/P1/P2/P3）、Worker Handoff Checklist、
以及全部 1.0.8 / 1.0.8-fix / 1.0.1 模块 gap 分析已归档至
`${C5CM_INTERNAL_HISTORY_ROOT:-$C5CM_SHARE_ROOT}/_legacy-archive/`。
1.0.8 audit bundles 同步归档至
`${C5CM_INTERNAL_HISTORY_ROOT:-$C5CM_SHARE_ROOT}/_legacy-archive/internal-reverse/audits/`。

**当前状态（2026-06-03 IDA closure sync）**：
- 活跃版本：1.0.9（IDA MCP only，Ghidra/Rizin/Radare2 已归档）
- accounts 已完成当前范围：macOS 9/9 + Windows 9/9 `readyToImplement=true`、`implementation_use=true`、`gate_accepted=true`、`full_leaf_100=true`
- plugins deep 已完成当前范围：macOS 13/13 + Windows 13/13 `readyToImplement=true`、`implementation_use=true`、`gate_accepted=true`、`full_leaf_100=true`
- system 4 `strictImplementationUse`；relay-targeted 3 `consumerStartReady`（product-decision）；Windows tray 4/4 `readyToImplement=true` / `full_leaf_100=true`（same-platform IDA app-owner closure；no upstream `tray_router_open` menu item）
- relay-core 子模块（relay-missed-109 + relay-closeout-109）**REDUCE COMPLETE 2026-06-03**：macos-1.0.9-relay-core 14 clusters（4 readyToImplement + 5 strictImplementationUse + 6 consumerStartReady）；windows-1.0.9-relay-core 13 clusters（8 readyToImplement + 3 strictImplementationUse + 1 consumerStartReady_candidate/bootstrap）。relay-command-layer：macOS 15 readyToImplement + 3 strictImplementationUse；Windows 15 readyToImplement + 3 strictImplementationUse（HTTP terminal ceiling）。**producer-ack relay-closeout-109 FINAL (2026-06-03)**：relay+relay-core 两端全量 reduce complete；REVERSE-STATUS.md + task-plan.json + producer-ledger.json + gate-report.json 均已回填终态。tier promotions本轮=11。剩余 blocked（relay scope only）：relay_fetch_models async ICF both platforms（strictImplementationUse ceiling）；relay_codex_writer/relay_diagnostic both（dim6 missing）；relay_health_audit mac（consumerStartReady ceiling）；relay_translator mac（consumerStartReady ceiling）；HTTP terminal 3命令（GATE-SPEC ceiling永久）。bootstrap 未碰，待独立排。（见 REVERSE-STATUS.md + audits/macos-1.0.9-relay-core/ + audits/windows-1.0.9-relay-core/ + audits/macos-1.0.9-relay/ + audits/windows-1.0.9-relay/）
- sessions/analytics + mcp + skills + custom-instructions + voice **FRONTEND INVENTORY COMPLETE 2026-06-03**：原只读 cross 协调包已清理；消费者只读各 canonical module bundle。Windows 1.0.9 前端 127 IPC 已全量分类，unknown=0；目标 surface=47，排除 surface=80。保留根级 inventory：`data/aimami-1.0.9-frontend-command-classification.json`、`logic/AIMAMI-109-FRONTEND-INVENTORY-CONSUMER-ENTRY.md`、`logic/AIMAMI-109-FRONTEND-UNIVERSE-CLASSIFICATION.md`、`logic/AIMAMI-109-EXPORTS-FULL-ENUM-GAP.md`、`logic/AIMAMI-109-FRONTEND-ORPHAN-CALLCHAIN.md`。后续生产者必须按模块单独认领并读取对应 canonical `audits/<platform>-1.0.9-<module>/AGENTS.md`/`CLAUDE.md`/`manifest.json`/`data/task-plan.json`/`pointers/evidence-paths.md`。`recover_unindexed_sessions`、`mark_voice_overlay_ready`、`hide_voice_search_overlay` 是 C5 repo/API extra，不在 AiMaMi 1.0.9 前端 IPC upstream 队列。
- accounts/plugins 当前范围已停在 plugins 后；后续 relay/system/tray 不由本次 accounts/plugins 闭合自动接管
- tray update 2026-06-03：`audits/windows-1.0.9-tray/` closes Windows tray app owner/menu/event/refresh chain by IDA MCP; root task-plan removed tray rows from forbidden queues.
- macOS sessions-analytics update 2026-06-04：`audits/macos-1.0.9-sessions-analytics/` closes 8/8 `readyToImplement=true` / `full_leaf_100=true` after live IDA canonical correction reduce. Absorbed deferred/outtake facts: `load_usage_analytics` writes `bootstrap-cache.json` usageAnalytics; `load_token_analytics` core=`0x10054939c`; `load_tool_analytics` core=`0x100548aa8`; `load_change_analytics` core=`0x100549a78` and upstream DTO is command-count based; `load_quota_history` rewrites quota history for 7-day compaction. Retired mixed root `internal-reverse/sessions-analytics/`; consumers use canonical bundle + raw leaves only.
- 权威账本：[REVERSE-STATUS.md](./REVERSE-STATUS.md) | [task-plan.json](./task-plan.json) | [INDEX.jsonl](../INDEX.jsonl)

---

> **HISTORY POINTER** — 历史带日期流水 ack / win passNN / superseded pass sections 已瘦身到 `AI-EXECUTION-QUEUE.history.md`（同目录）。规则/调度/P0-P3 队列保留于本文件。

---

## 当前队列状态

**2026-05-30 macOS-only overlay 校准**：本轮不把整个 macOS 标成 100%，也不把旧 `macOS-complete` 文案作为实现放行。新 overlay 只登记 `closable_candidate` / `missing_macos_evidence` / `pending_gate_reconciliation`：accounts/plugins/system 有部分 macOS closable candidates；relay 三行仍缺 HTTP terminal/DTO/error/acceptance；tray 三行仍缺 acceptance mapping。`macos_gate_accepted_count=0`，`macos_full_leaf_100_count=0`，`implementation_use=false`。Windows gate 保留为独立交付，不作为本 macOS-only overlay 的 blocker。

Overall：`not_complete`（实现受阻：Win-PE 结构性限制）。Darwin 四段 detailed delta 已收口为 pair-specific Darwin backend-owned target-universe evidence，不能当 `full_leaf_100_definition_v2` 或实现放行依据。Windows 和 full-app/source-level 目标仍未闭合。

**2026-05-27 历史状态口径修正**：所有历史“原始上游功能可实现依据”必须按 `full_leaf_100_definition_v2` 重新降级审计。既有 macOS `102/102`、`79/79`、`146/146` 只能保留为 evidence coverage count；除非每个 leaf 同时闭合 frontend control-flow + UI/state、backend owner/pseudocode、深到 implementation leaves 的 call-tree、interface/DTO/error/side-effect、同平台 platform gate、test/acceptance mapping，不得再标为 full leaf 100 或实现放行。历史 macOS 1.0.8/1.0.6 final spec 包应按 `pre_acceptance_evidence_pack` / `needs_test_acceptance_mapping` 解读；当前 1.0.9 目标只能通过 1.0.9 current entrypoint 和 same-version gate 判断，plugins 模块另有阻断项，见下方 P0。

**2026-05-27 stale ready 清理**：1.0.6 / 1.0.8 macOS final-spec 包里的旧 target-level ready 状态已全部降级为 `not_accepted_v2` / `pre_acceptance_evidence_pack` / `implementation_use=false`。降级计数：1.0.6 `final-leaves=75`、`modules=91`；1.0.8 `final-leaves=98`、`modules=107`。current-master diff chain 恢复为 `usable_as_leaf_index`，仍不是实现放行依据。

**2026-05-27 gate/ready 机器字段清理**：macOS 101/104/106/108 chain 不再保留会被实现 agent 误读的 positive `*_gate_accepted` 标记、非零旧 ready 计数字段、previous-ready leaf counter。单维证据覆盖改写为 `*_evidence_status="accepted"` 或 pre-acceptance evidence count；真实 ready/gate/implementation 仍为 `0` / `false` / `not_accepted_v2`。

**2026-05-26 历史队列状态**：旧队列中的可操作文档/诊断项已收口，但这不是 Windows full-chain completion 或实现放行：Win 1.0.6 ACCEPTED_WITH_CAVEAT（78 命令，gate_accepted=false）；Win 1.0.8 pdata 600s retry EXHAUSTED（12/12 timeout，convergence failure）；P1-A logout SM归位收口；P1-B 等价确认收口；P2 Darwin delta 收口；P3 script generalization 收口。实现阻塞原因：Win-PE 在 macOS 工具链下的结构性限制（rizin/tauri-dumper 不支持 PE、frontend JS 无法从 PE 提取）；需要独立同平台证据和 gate 才能改变 gate_accepted=false。

**2026-05-27 Win 1.0.8 优先补充**：已补 `logic/WIN-FRONTEND-CCF-CALLTREE-108.md` 与 `logic/WIN-LEAF-RESULT-MATRIX-108.md`。结论：Win 1.0.8 frontend CCF 仍未 gate-closed；此前 21-target fullchain pipeline 的 CCF/call-tree rows 属于 `REVOKED — synthetic evidence`，不可使用。正式 fullchain reducer 为 120 rows：61 accepted call-tree，59 rejected call-tree，0 gate-accepted，0 implementation-use。`WIN-LEAF-RESULT-MATRIX-108.md` 覆盖全部 120 target，每行都有 frontend CCF、backend CCF/pseudocode、call-tree、interface、error、boundary、gate leaf。`64 call-tree-depth-insufficient` 是 Win 1.0.6 gate-report-v3 数字，不是 Win 1.0.8 任务；Win 1.0.8 revoked pipeline 是 21 call-tree-depth failures / 21 frontend-control-flow failures。

**2026-05-28 Accounts module P0 full-leaf workorder**：停止 P4/P5 横向发散作为当前优先级；下一步只做账号模块，不继续横向扩散。账号模块必须先按 8 个 leaf 闭合：`switch_account`、`switch_account_and_restart_codex`、`preview_account_import`、`import_accounts_from_file`、`export_accounts_to_file`、`logout`、`remove_accounts`、`begin_add_account_attach_monitor`。当前单维证据：Win 1.0.8 frontend CCF/UI-state 对 `switch_account_and_restart_codex`、`preview_account_import`、`import_accounts_from_file`、`export_accounts_to_file`、`remove_accounts`、`begin_add_account_attach_monitor` 可标为单维已找到；`switch_account` / `logout` 仍只有 wrapper/global 线索，visible accounts-page UI/state 未闭合；`switch_account_and_restart_codex` 和 `begin_add_account_attach_monitor` 有 backend owner/pseudocode + shallow call-tree 线索。Backend strict gap 已补充到 `data/accounts-backend-strict-gap.json` 和 `logic/ACCOUNTS-BACKEND-STRICT-GAP-108.md`：`switch_account` cand1 `0x140933b90` timeout，`switch_account_alt` `0x140965ca0` 只能 evidence_present；`switch_account_and_restart_codex` `0x140965ca0` 和 `begin_add_account_attach_monitor` `0x14033a460` 只有 body/shallow call-tree，缺 process/monitor/restart/auth side-effect leaves；`preview_account_import` `0x140939230` 与 `export_accounts_to_file` `0x140928590` 为 `.pdata` timeout backend blocked；`import_accounts_from_file` / `logout` / `remove_accounts` 的 shared owner `0x1408cdcf0` 只能 `accepted_with_caveat` / `not_strict_per_command`，禁止升级为 full leaf。Interface/error/side-effect/test acceptance gap 已补充到 `data/accounts-interface-test-gap.json` 和 `logic/ACCOUNTS-INTERFACE-TEST-GAP-108.md`：8/8 leaves 均记录 interface/test gap；interface_closed=0；error_envelope_closed=0；side_effect_boundary_closed=0；test_acceptance_closed=0。仍缺：backend per-leaf strict owner/pseudocode（timeout/shared-owner/caveat）、deep implementation call-tree、interface/error/side-effect gate、same-platform platform gate、C5 test/acceptance mapping。当前 C5 master accounts-page 仍走 `switchAccountAndRestartCodex` / `switch_account_and_restart_codex` 和“切换并重启”；上游 1.0.8 存在 `switch_account` 纯切换线索；当前 C5 import UI 只传 `overwriteExisting`，而 1.0.8 `import_accounts_from_file` 前端线索含 `selectedKeys`，必须做前端链/DTO parity 复核；当前 C5 export UI/API 只传 `targetPath`，而 1.0.8 `export_accounts_to_file` 前端线索含可选 `accountKeys`，必须做 DTO parity 复核；`logout` 当前 C5 wrapper 无参，仍缺上游 visible accountKeys/cleanup semantics proof。当前账号 leaf 覆盖为 `8/8`；implementation_use=0；gate_accepted=0；full_leaf_100=0；backend strict full leaves=0；interface/test closed leaves=0；所有账号 leaves 均保持 `needs_work`，不得标为实现放行。包：[aimami-1.0.8-accounts-frontend-chain-gap-20260528](./audits/aimami-1.0.8-accounts-frontend-chain-gap-20260528/README.md)。

**2026-05-28 Accounts import/export DTO parity focused gap**：已补 `data/accounts-import-export-dto-parity-gap.json` 和 `logic/ACCOUNTS-IMPORT-EXPORT-DTO-PARITY-GAP-108.md`，exactly 2 rows：`import_accounts_from_file`、`export_accounts_to_file`。该 focused gap 不批准实现，只防止后续 implementation agent 丢失 DTO：`import_accounts_from_file` 的 `selectedKeys: Option<Vec<String>>` 风险、`export_accounts_to_file` 的 optional `accountKeys` 风险。两行均保持 `implementation_use=false`、`gate_accepted=false`、`full_leaf_100=false`；必须先闭合同版本 frontend argument assembly、backend branch/call-tree、DTO/default/nullability/error/side-effect 与 C5 acceptance mapping。

**2026-05-28 Accounts switch behavior parity focused gap**：已补 `data/accounts-switch-behavior-parity-gap.json` 和 `logic/ACCOUNTS-SWITCH-BEHAVIOR-PARITY-GAP-108.md`，exactly 2 rows：`switch_account`、`switch_account_and_restart_codex`。该 focused gap 不批准实现，只防止后续 implementation agent 混同纯切换与切换并重启：当前 C5 visible accounts page 走 `switchAccountAndRestartCodex` / `switch_account_and_restart_codex` 与“切换并重启”文案；`api.switchAccount` 和 Rust `switch_account` 存在但 visible UI chain 未证明；compound restart row 仍缺 restart/process/auth side-effect leaves、rollback/error envelope、same-platform gate 和 C5 acceptance mapping。两行均保持 `implementation_use=false`、`gate_accepted=false`、`full_leaf_100=false`。

**2026-05-28 Accounts shared mutator parity focused gap**：已补 `data/accounts-shared-mutator-parity-gap.json` 和 `logic/ACCOUNTS-SHARED-MUTATOR-PARITY-GAP-108.md`，exactly 3 rows：`import_accounts_from_file`、`logout`、`remove_accounts`。该 focused gap 不批准实现；shared owner `0x1408cdcf0` 仍是 `accepted_with_caveat` / `not_strict_per_command`，不能当 per-command full leaf。当前 C5 source 只读核对结果：`import_accounts_from_file` API/UI/backend 缺 `selectedKeys` 且会导入所有 preview entries；`logout` 是无参 active-account logout，被 add-account preflight 调用，未证明上游 `accountKeys` 语义；`remove_accounts` API/backend 有 `accountKeys`，但 visible UI 只移除单个 selected account。三行仍缺同版本 per-command branch/call-tree、destructive side-effect boundary、error/rollback、same-platform gate 与 C5 acceptance mapping；三行均保持 `implementation_use=false`、`gate_accepted=false`、`full_leaf_100=false`。

**2026-05-28 Accounts preview/export/add-monitor backend focused gap**：已补 `data/accounts-preview-export-monitor-backend-gap.json` 和 `logic/ACCOUNTS-PREVIEW-EXPORT-MONITOR-BACKEND-GAP-108.md`，exactly 3 rows：`preview_account_import`、`export_accounts_to_file`、`begin_add_account_attach_monitor`。该 focused gap 不批准实现；timeout/body/shallow-call-tree evidence 不能当 backend implementation proof。当前 C5 source 只读核对结果：`previewAccountImport(filePath)` 只发送 `{ filePath }` 并打开 preview dialog；`exportAccountsToFile(targetPath)` 只发送 `{ targetPath }` 并导出全部账号；`beginAddAccountAttachMonitor()` visible API 无参，add flow 顺序是 `logout` -> `restartCodex` -> `begin_add_account_attach_monitor`，后端当前实现带 one-shot auth snapshot warning。三行仍缺同版本 accepted root/body 或 accepted substitute、deep parser/serializer/file/process/monitor/auth call-tree、DTO/default/nullability、error/side-effect gate、same-platform gate 与 C5 acceptance mapping；三行均保持 `implementation_use=false`、`gate_accepted=false`、`full_leaf_100=false`。

**2026-05-28 Plugins module P0 registry/store/builtin v2 gap**：plugins P0 已按 `full_leaf_100_definition_v2` 重新归约到 `13` rows：4 command rows（`list_plugins`、`toggle_plugin`、`get_plugin_config`、`update_plugin_config`）+ 9 deep/store/builtin rows（`PluginRegistry::list`、`PluginRegistry::set_enabled`、`PluginRegistry::save_store_static`、`PluginRegistry::get_config`、`PluginRegistry::update_settings`、`PluginStoreSchema::serialize`、`all_builtin_plugins`、`builtin::web_tools::plugin_info`、`builtin::image_support::plugin_info`）。ready=0；implementation_use=0；gate_accepted=0；full_leaf_100=0。已有证据维度：四个 command 的 frontend CCF/API wrapper；`PluginsPage` 可见 list/toggle UI-state；四个 command wrapper pseudocode/call-tree pointer；registry/store/builtin 同版本 macOS exact symbols + bounded disassembly；`plugins.json` / `PluginStoreSchema { schemaVersion, plugins }` / `PluginConfig` string/disassembly；web-tools in-process side-channel；draft acceptance checks。仍缺：accepted deep pseudocode 或 accepted substitute、promoted deep call-tree、strict DTO parity（`PluginInfo` / `PluginConfig` / settings / defaults / capabilities / `plugins.json` schema）、exact target-not-found / poisoned-lock / serialize / write error envelope、config command visible UI absence 的 acceptance/product decision、same-platform gate、final C5 test/acceptance mapping、如需 Windows parity 则独立 Windows evidence。旧 `macOS ACCEPTED`、visible frontend 和 config side-channel 只保留为单维 evidence，不能关闭 registry/store/builtin deep leaf；`get_plugin_config` / `update_plugin_config` 若持续无可见 UI，必须先有 acceptance/product decision。包：[aimami-1.0.8-plugins-registry-store-builtin-v2-gap-20260528](./audits/aimami-1.0.8-plugins-registry-store-builtin-v2-gap-20260528/README.md)。

**2026-05-28 Plugins module P0 executable deep workorder**：v2 gap 包内已补 `9` 行 deep reverse workorder：`data/plugins-deep-reverse-workorder.json` 与 `logic/PLUGINS-DEEP-REVERSE-WORKORDER-108.md`。这是当前 plugins 的唯一有效下一步动作；不得绕过该 workorder 去写 C5 源码、不得把 deep/store/builtin rows 标为 ready。每行都要求 accepted pseudocode summary、promoted call-tree 到 persistence/response/error/builtin leaves、DTO/interface row、error/side-effect boundary row、test acceptance mapping；每行均保持 `implementation_use=false`、`gate_accepted=false`、`full_leaf_100=false`。

**2026-05-28 Plugins DTO/config UI/web-tools side-channel focused gap**：已补 `data/plugins-dto-config-sidechannel-gap.json` 和 `logic/PLUGINS-DTO-CONFIG-SIDECHANNEL-GAP-108.md`，exactly 5 rows：`list_plugins`、`toggle_plugin`、`get_plugin_config`、`update_plugin_config`、`web_tools_side_channel`。该 focused gap 不批准实现；command wrapper pseudocode、partial registry/store/builtin addresses、current C5 stubs、web-tools side-channel audit 都不是 full leaf proof。当前 C5 source 只读核对结果：frontend 没有 plugins API wrapper / TS Plugin DTO / visible plugins page；Rust 目前只有 `list_plugins` 和 `update_plugin_config` OperationFailed stubs，未找到 current C5 `toggle_plugin` / `get_plugin_config` Tauri command；models 中的 Plugin/PluginConfig payload 仍是 reverse-restoration stub，不是 strict upstream parity。五行仍缺 strict DTO parity、config UI absence/product decision、registry/store/builtin deep leaves、web-tools success/failure side-effect ordering、same-platform gate 与 C5 acceptance mapping；五行均保持 `implementation_use=false`、`gate_accepted=false`、`full_leaf_100=false`。下一步状态：plugins 继续 `blocked`，先执行 deep workorder，同时以该 focused gap 防止实现 agent 误用 wrapper/stub/side-channel 单维证据。

**2026-05-28 Plugins deep leaf closure requirements matrix**：已补 `data/plugins-deep-leaf-closure-requirements.json` 和 `logic/PLUGINS-DEEP-LEAF-CLOSURE-REQUIREMENTS-108.md`，exactly 9 rows：`PluginRegistry::list`、`PluginRegistry::set_enabled`、`PluginRegistry::save_store_static`、`PluginRegistry::get_config`、`PluginRegistry::update_settings`、`PluginStoreSchema::serialize`、`all_builtin_plugins`、`builtin::web_tools::plugin_info`、`builtin::image_support::plugin_info`。该矩阵不批准实现；exact symbol / disassembly / string evidence 仍只是 locator/partial。每个 deep leaf 必须同时闭合 accepted body、promoted call-tree、DTO/schema、error/persistence、side-effect/builtin、same-platform gate 和 C5 acceptance mapping，才允许进入 full leaf gate；九行均保持 `implementation_use=false`、`gate_accepted=false`、`full_leaf_100=false`。

**2026-05-28 Plugins deep evidence audit pass1**：已补 `data/plugins-deep-evidence-audit-pass1.json` 和 `logic/PLUGINS-DEEP-EVIDENCE-AUDIT-PASS1-108.md`，exactly 9 rows，顺序同 deep workorder。Pass1 检查了当前 final package、`darwin-plugins-registry-store-builtin-finalization-20260527` 的 symbol/objdump/rizin/string roots、`darwin-fullchain-20260525` 的四个 command wrapper pseudocode/call-tree/interface，以及 frontend CCF pointer；`${C5CM_INTERNAL_HISTORY_ROOT:-$C5CM_SHARE_ROOT}/.../plugins-config-sidechannel...` 当前缺失，不能用于 promotion。结论：没有任何 row 具备 accepted deep body + promoted implementation call-tree + DTO/error/side-effect/platform/test closure；`PluginRegistry::set_enabled` / `save_store_static` / `PluginStoreSchema::serialize` 只到 partial mutation/persistence/schema-key 证据，builtin rows 仍是 locator/literal evidence。下一步精确动作：为 9 个地址生成 accepted same-version body 或 accepted substitute，再 promote call-tree 与 DTO/error/side-effect/test rows。九行均保持 `implementation_use=false`、`gate_accepted=false`、`full_leaf_100=false`。

**2026-05-30 Plugins deep store DTO/error blocker reducer**：上述 2026-05-28 pass1 的“accepted deep body 缺失”已被后续 macOS raw 部分 supersede，但不改变 gate。当前有效细化结论已合并进 canonical bundle [macos-1.0.8-plugins](./audits/macos-1.0.8-plugins/README.md)：`PluginStoreSchema::serialize`、`PluginConfig::serialize`、registry store rows 与 builtin rows 已有同版本 macOS accepted pseudocode / corrected manual chain / response-serialize call-tree 分类输入；`toggle_plugin` / `update_plugin_config` 到 `save_store_static -> serialize -> std::fs::write::inner` 的路径已可作为 blocker reducer 事实。下一步不再是“找不到 serializer/fs-write 链”，而是冻结 exact public `PluginInfo`/`PluginConfig`/settings/capabilities/schemaVersion、public CoreEnvelope/error strings、write/serialize failure-state、config UI/product boundary、web-tools C5 consumer/acceptance 与 Windows independent proof。plugins 仍保持 `consumerStartReady=2/13`、`consumerStartBlocked=11/13`、`strictImplementationUse=0`、`readyToImplement=0`、`implementation_use=false`、`gate_accepted=false`、`full_leaf_100=false`。

**2026-05-28 System module P0 v2 gap**：system P0 已按 `full_leaf_100_definition_v2` 归约到 `9` rows：`force_kill_codex`、`get_image_compat`、`note_usage_refresh_activity`、`reset_codex_config`、`schedule_full_runtime_refresh`、`set_image_compat`、`start_auto_switch_pending_watcher`、`start_usage_refresh_watcher`、`update_usage_refresh_schedule`。ready=0；implementation_use=0；gate_accepted=0；full_leaf_100=0；all_not_accepted_v2。三条 direct platform rows 仅有 macOS pre-acceptance / Windows candidate 或 insufficient 证据；`reset_codex_config` 是 command candidate 但 current C5 source/test 仍缺；`note_usage_refresh_activity` 是 helper；`schedule_full_runtime_refresh` / `update_usage_refresh_schedule` 是 scheduler helper；`start_auto_switch_pending_watcher` / `start_usage_refresh_watcher` 是 native lifecycle watcher。Watcher/scheduler/helper leaves 不得自动转成 public command，必须先闭合 product/source boundary、interface/error/side-effect、same-platform platform gate 和 C5 test/manual acceptance。包：[aimami-1.0.8-system-p0-v2-gap-20260528](./audits/aimami-1.0.8-system-p0-v2-gap-20260528/README.md)。

**2026-05-28 System current-source/platform/test focused gap**：已补 `data/system-current-source-platform-test-gap.json` 和 `logic/SYSTEM-CURRENT-SOURCE-PLATFORM-TEST-GAP-108.md`，exactly 9 rows，顺序为 `force_kill_codex`、`get_image_compat`、`note_usage_refresh_activity`、`reset_codex_config`、`schedule_full_runtime_refresh`、`set_image_compat`、`start_auto_switch_pending_watcher`、`start_usage_refresh_watcher`、`update_usage_refresh_schedule`。该矩阵不批准实现；当前 C5 只读核对结果是：`force_kill_codex` / `get_image_compat` 仅为 `commands/plugins.rs` + `Repository` OperationFailed stubs 且没有 frontend api.ts wrapper/visible UI；`set_image_compat` / `reset_codex_config` 未找到当前 public source surface；usage refresh daemon、auto-switch pending manager、scheduler/helper tests 都是 C5-local behavior，不是 AiMaMi 1.0.8 upstream proof。Watcher/scheduler/helper rows 必须先闭合 product/source boundary；direct platform rows 必须闭合同平台 process/image/config proof；Windows 不能从 macOS 外推。九行均保持 `implementation_use=false`、`gate_accepted=false`、`full_leaf_100=false`。

**2026-05-28 System evidence audit pass1**：已补 `data/system-evidence-audit-pass1.json` 和 `logic/SYSTEM-EVIDENCE-AUDIT-PASS1-108.md`，exactly 9 rows，顺序同 System P0。Pass1 检查了 system package、current C5 source/tests、`darwin-leaf-readiness-correlation-v3-20260527`、`darwin-system-lifecycle-finalization-20260527`、`darwin-schedule-runtime-refresh-binding-20260527`。结论：`0/9` promoted，全部 `do_not_promote`。`force_kill_codex`、`get_image_compat`、`reset_codex_config`、`set_image_compat` 有 macOS direct/helper 侧证据但 Windows same-platform owner/body/call-tree/platform/test 未闭合；`note_usage_refresh_activity`、`schedule_full_runtime_refresh`、`start_auto_switch_pending_watcher`、`start_usage_refresh_watcher`、`update_usage_refresh_schedule` 即使有 Darwin helper/native lifecycle/scheduler edge，也必须先闭合 product/source boundary 和 C5 acceptance mapping。下一步精确动作：direct platform rows 先补 Windows owner/body + promoted process/image/config call-tree；helper/watcher/scheduler rows 先补 product/source boundary，再补同平台 side-effect/platform/test。
**2026-05-29 System segment runtime boundary pass4**：已补 `data/system-segment-runtime-boundary-pass4.json` 和 `logic/SYSTEM-SEGMENT-RUNTIME-BOUNDARY-PASS4-108.md`。该 pass 使用共享根 `${C5CM_INTERNAL_HISTORY_ROOT:-$C5CM_SHARE_ROOT}` 下现有 system runtime/owner-boundary packets，复用 frontend CCF/UI-state，不使用 peer SSH raw transport。结论：9 个 System P0 rows 仍 `0/9` promoted；额外校准 `get_system_info` / `check_update_installability` 两个 runtime-present system rows，但不提升 readiness。两行均确认 runtime DTO fields 和 payload builder candidates；`0x1400eb0d0..0x1400ebec9` 仍被拒绝为 accepted handler owner / owner-to-builder binding，range-repaired Ghidra 与 field-builder evidence 不构成 command registration、handler owner、call-tree、error envelope、side-effect、platform 或 C5 acceptance proof。下一步聚焦 accepted Windows registration/handler owner 与 system/backend side-effect leaves。
**2026-05-29 System direct platform boundary pass5**：已补 `data/system-direct-platform-boundary-pass5.json` 和 `logic/SYSTEM-DIRECT-PLATFORM-BOUNDARY-PASS5-108.md`。该 pass 使用共享根 `${C5CM_INTERNAL_HISTORY_ROOT:-$C5CM_SHARE_ROOT}` 下现有 force-kill / image-compat / reset 证据，复用 frontend CCF/UI-state；`0/4` promoted。`force_kill_codex` 已收窄到 `0x140330dc0 -> 0x1400ea610` 与 process API / taskkill-powershell surface，但 command-to-process reachability 未 accepted；`get_image_compat` 已收窄到 `0x140343a10` / `0x140330690 -> 0x140469cb0` read/config route，但 config/registry read 与 no-mutation 未 accepted；`set_image_compat` 已收窄到 `0x140330100`、`0x1400eb0d0` config text、`0x140070560` / `0x140730400` result/error candidates，但 write/persistence/rollback 未 accepted；`reset_codex_config` 只有 `0x14033e310` lower-level owner + one-edge `external_call_recorded`，blast radius / target list / rollback / idempotency 未 accepted。下一步只做 handler-to-side-effect call-tree，不重复 frontend。

**2026-05-28 Tray menu module v2 gap — superseded for Windows 1.0.9 on 2026-06-03**：old 1.0.8 tray gap remains historical only. Current Windows 1.0.9 tray package is [windows-1.0.9-tray](./audits/windows-1.0.9-tray/README.md) with 4/4 `readyToImplement=true` / `full_leaf_100=true`.

**2026-05-28 Tray menu current-source/native/platform focused gap — superseded for Windows 1.0.9 on 2026-06-03**：current C5 source remains the comparison surface. Windows AiMaMi 1.0.9 IDA now closes same-platform app owner/menu/event/refresh. C5 has an extra `tray_router_open` classifier and `tray:navigate -> relayModel` path, but current C5 menu does not insert that item and upstream Windows has no such string/menu item.

**2026-05-28 P0 cross-module v2 rollup**：当前 P0 module-level 统一索引为 [aimami-1.0.8-p0-cross-module-v2-rollup-20260528](./audits/aimami-1.0.8-p0-cross-module-v2-rollup-20260528/README.md)。覆盖 5 个模块、historical count superseded by current 37-row count：accounts=8、plugins=13、relay_targeted=3、system=9、tray_menu=3。rollup 与所有 row 均保持 ready=0、implementation_use=false、gate_accepted=false、full_leaf_100=false；只做索引/对账，不做实现放行。accounts 的历史 `accounts=11` 来自 2026-05-27 P0 reverse-required queue 的旧 category count；当前 accounts v2 package scope 是 8 primary leaves。下一步顺序固定为：accounts preview/export/add-monitor backend leaf gap / shared mutator parity / deep backend-interface gaps → plugins deep accepted pseudocode/schema gaps → relay targeted backend roots → system current source/platform/test gaps → tray native/platform/test gaps。不要把 Windows/P4/P5 big matrix 作为本轮下一步，也不要从旧 ready/macOS-complete/accepted 文案放行实现。

**2026-05-28 Relay targeted backend blocker priority correction**：用户纠正已写回 [aimami-1.0.8-relay-targeted-backend-gap-20260528](./audits/aimami-1.0.8-relay-targeted-backend-gap-20260528/README.md) 与 P0 rollup。Relay 大面闭合不等于 `test_relay_provider` / `test_relay_draft` / `fetch_relay_models_draft` 可实现；这三行只能保留 frontend wrapper/input 单维 accepted，backend owner/root pseudocode、deep call-tree、interface/error/side-effect、same-platform gate、test acceptance 仍是 targeted reverse blocker。对 Relay implementation parity 来说，这三条 blocker 高于泛化 P4/P5/P6/P7 cleanup；三行继续 `implementation_use=false`、`gate_accepted=false`、`full_leaf_100=false`。

**2026-05-28 Relay targeted backend closure requirements matrix**：已补 `data/relay-targeted-backend-closure-requirements.json` 和 `logic/RELAY-TARGETED-BACKEND-CLOSURE-REQUIREMENTS-108.md`，exactly 3 rows：`test_relay_provider`、`test_relay_draft`、`fetch_relay_models_draft`。该矩阵不批准实现；helper/branch facts 只是 routing input。每行必须同时闭合 accepted root/body、promoted call-tree、request mapping、response mapping、error envelope、same-platform gate 和 C5 acceptance mapping，才能进入 full leaf gate；三行均保持 `implementation_use=false`、`gate_accepted=false`、`full_leaf_100=false`。

## P0: Plugin Registry / Store / Builtin Fields Blocker

Status：`blocked` for `full_leaf_100` / original upstream implementation。AiMaMi 1.0.8 macOS package remains `pre_acceptance_evidence_pack`; `plugins` rows are evidence pointers only and keep `implementation_use=false` until this queue closes。2026-05-28 v2 gap row count is `13`; ready=0; gate_accepted=0; full_leaf_100=0.

Blocking target：plugins 模块，特别是 `toggle_plugin`，并覆盖 `list_plugins` / `get_plugin_config` / `update_plugin_config` 的 DTO、错误和持久化边界。

Existing evidence summary：

- Frontend CCF / UI wrapper evidence exists for `list_plugins` / `toggle_plugin` / `get_plugin_config` / `update_plugin_config`（shorthand：list/toggle/get_config/update_config）。
- Backend command wrapper pseudocode exists for all four plugin commands。
- `PluginsPage` only uses `list_plugins` / `toggle_plugin`; `get_plugin_config` / `update_plugin_config` config UI call sites are absent from `PluginsPage` and currently only appear as shared API wrapper evidence。
- `web-tools` side-channel audit exists, but it is diagnostic / side-channel evidence only and is not enough for plugins `full_leaf_100` or original implementation parity。

Missing deep evidence：

1. Deep owner/pseudocode/call-tree closure for `PluginRegistry::set_enabled`, `save_store_static`, `PluginRegistry::list`, `PluginRegistry::get_config`, and `PluginRegistry::update_settings`。
2. Persistence proof for `plugins.json`, `PluginStoreSchema { schemaVersion, plugins }`, serialization/write behavior, poisoned-lock error, and target-not-found error。
3. Builtin plugin proof for `all_builtin_plugins`, `builtin::web_tools::plugin_info`, both builtin plugin fields/defaults/capabilities/settings, and their DTO relation。
4. Strict DTO parity and error envelope for `list_plugins` / `get_plugin_config` / `toggle_plugin` / `update_plugin_config`; response payload is especially required for `toggle_plugin`。
5. Test/acceptance mapping from each plugin leaf to C5 implementation checks。

Owner/function/address hints for the next reverse worker, not accepted proof until verified against same-version macOS 1.0.8 evidence：`PluginRegistry::set_enabled` / `save_store_static` / `PluginRegistry::list` / `PluginRegistry::get_config` / `PluginRegistry::update_settings` with candidate VAs `0x1003e5518`, `0x1003e5a88`, `0x1003e60c8`, `0x1003e4fb0`, `0x1003e57b8`。

Queue order：本任务必须排在任何触碰原始 plugins 行为的 C5 feature implementation 之前。若未闭合，implementation agent 只能做非上游等价的产品决策实现，并必须显式标 `Product decision`。Windows evidence remains independent; do not extrapolate macOS plugin behavior to Windows。

Superseded old next action：旧 "Only valid next plugins action = 执行 9-row deep reverse workorder" 已被 2026-05-30/31 canonical `${C5CM_INTERNAL_HISTORY_ROOT:-$C5CM_SHARE_ROOT}/internal-reverse/audits/macos-1.0.8-plugins/` 取代。9-row registry/store/builtin deep evidence、public DTO/config boundary、success envelope、static golden fixture audit 与 runtime default store fixture 已经消费进 canonical bundle；不得再重复 broad deep reverse。

Current valid next plugins action：执行 `${C5CM_INTERNAL_HISTORY_ROOT:-$C5CM_SHARE_ROOT}/raw/aimami/1.0.8/macos/plugins/plugins-error-failure-trace-workorder-20260530/`，前提是存在 accepted same-version IPC/runtime harness。输出必须冻结 exact invoke-visible success/error envelope、target-not-found / poisoned-lock / serialize / write-error behavior、before/after `plugins.json` bytes、mutation-before-save failure-state、rollback/no-rollback、web-tools side-channel ordering，以及 C5 test/manual acceptance mapping。未完成前 plugins P0 继续 `blocked`，不得写任何 positive ready / implementation-use / gate-accepted / full-leaf-100 标记。

2026-05-30 macOS overlay update：上述 9-row deep workorder 的 store/serializer/builtin/public-DTO/public-success-envelope/current-consumer-boundary 结论已合并进 canonical `${C5CM_INTERNAL_HISTORY_ROOT:-$C5CM_SHARE_ROOT}/internal-reverse/audits/macos-1.0.8-plugins/`；旧 deep pass / DIM4 / DIM6 也已在该包内校正为 static input / draft mapping，不是 ready evidence。下一步不再重复找 `PluginEntry::serialize`、config UI callsite、`toggle_plugin` success payload、`update_plugin_config` success payload 或 current C5 consumer presence；而是执行 macOS `plugins-error-failure-trace-workorder-20260530`，冻结 exact invoke-visible error fixture、PluginConfig/settings/capabilities/default golden fixture、mutation-before-save failure-state、config UI/product acceptance、web-tools C5 consumer/acceptance，并保持 Windows independent proof 不外推。当前 C5 source 缺 plugins command file/frontend/mocks，PRD/plans 只作为 product intent；workorder 创建不等于 trace 执行，仍不得标 ready。

## P0-WIN: Windows Artifact Watch

**[ACCEPTED_WITH_CAVEAT 2026-05-26]** — Win 1.0.6 PE 已获取（2026-05-26，SHA256=712098eb…）；static index + 133 frontend IPC candidates 完成；Ghidra full-chain 完成。FUN_14035eb80 = MAIN IPC dispatcher: **78 commands confirmed** via string-length switch + SIMD content check（HIGHEST quality dispatch evidence）。client_build_failed 独立处理器 FUN_1403f0a10（306L）。证据：[aimami-windows-106-preflight-20260526](./audits/aimami-windows-106-preflight-20260526/README.md)；fullchain bundle: [aimami-1.0.6-712098eb-win-x64-fullchain-20260526](./aimami-1.0.6-712098eb-win-x64-fullchain-20260526/README.md)。gate FAIL 149 → v2 147 → **v3 141**（structural Win-PE limitations）。gate_accepted=false, implementation_use=false。**gate-report-v3.json (2026-05-26): 141 failures (down from 147)；interface-missing cleared (6→0)；remaining 141 are structural Win-PE platform limitations (frontend-control-flow-missing 65, call-tree-depth-insufficient 64, required-stage-missing-ok 5, required-stage-failed 4, required-file-missing-or-empty 1, rustfilt-output-byte-equal 1, ast-regex-command-set-difference 1)；build_interface_report.py patched to always retain implementationTarget entries；gate status unchanged: FAIL / gate_accepted=false / implementation_use=false.**

适用对象：Windows 1.0.6 only。（这是 Windows artifact watch 的范围说明；macOS 1.0.4 historical 包存在，并在 current-master macOS diff 中作为 `historical_delta_reference` 使用；1.0.8 artifact 已获取，见下方 `P0-WIN-HISTORY`，但 fullchain gate 仍为 0 implementation-use。）

Windows artifact note：旧 Windows installer candidate 不进入本轮 artifact watch；不要把该 Windows-only 说明外推到 macOS 1.0.4 historical 包。

触发条件：

- 新拿到同版本 Windows installer / PE / MSI / NSIS artifact（1.0.6 或更新官方 Windows 版本）；
- 或 artifact availability refresh 发现目标版本候选 URL 返回可下载信号。

执行顺序：

1. 先运行 artifact / platform availability refresh，确认版本、平台、架构、artifact hash 和外部 evidence root。
2. 对 installer/package 先解包，保留外部 `windows-package-manifest.json` 和 package files pointer。
3. 再按 `rust-reverse-pipeline` 做 Windows full-chain / binary-format PE evidence。
4. 完成后跑 fullchain universe、triage calibration、unclosed gap matrix 和 final diff-readiness reducer。
5. 只把 repo-local README / summary JSON / pointer 同步到 `internal/reverse`，raw package、pseudocode、logs、frontend dump 和 Ghidra project 留在外部 evidence root。

Acceptance gate：

- artifact exists for the same target version and platform；
- extraction/package manifest exists；
- PE full-chain evidence and gate close；
- no unclosed blocker；
- no Windows behavior inferred from Darwin。

Current evidence pointer: [windows-artifact-availability-refresh-20260525-r2](./audits/windows-artifact-availability-refresh-20260525-r2/summary.json)

### P0-WIN-HISTORY: Win 1.0.8 delta context (not fullchain)

Win 1.0.8 PE x86-64 obtained and analyzed in delta context (2026-05-25):
- SHA-256: `fbc2bc826697db499a185ffdb51cdc11beb66deb86f840588424ee53d7071384`
- Ghidra command dispatch: 28fns decompiled; 14/20 commands located; 6/20 hash-dispatched (UNKNOWN)
- Platform module Ghidra: 13fns (process/shell/registry) analyzed
- Status: delta-scope only; NOT full Win 1.0.8 PE full-chain reversal
- Evidence bundle: [aimami-1.0.6-1.0.8-delta-20260525](./aimami-1.0.6-1.0.8-delta-20260525/AI.md)
- Delta bundle reviews: COMPLETE — `reviews/AGENT.md` (Codex) + `reviews/CROSS-REVIEW.md` 已完成 2026-05-25
- **2026-05-26 追加**：Win 1.0.8 Group A (6 hash-dispatched commands) 已取得 feature-scope gate pass：
  - SIMD dispatch trace 定位 6 handler VA；Ghidra 真实 pseudocode（FUN_* 名）；
  - 清洁 feature-scope bundle：`win-group-a-gate-20260526/`（gate=PASS, 0 failures, 1 warning）；
  - Reverse-restoration stubs 加入 codebase：`src/commands/plugins.rs` + Repository stubs + models types；
  - stubs 返回 OperationFailed（not gate-accepted），production use 待完整实现；
  - `update_plugin_config` VA 0x140745c80 cross-review **已关闭（2026-05-26）**：单一函数多调用方。0x140745c80 是 update_plugin_config IPC handler（SIMD dispatch + Ghidra 双重确认），同时被 export_accounts_to_file 在 0x14092880e 作子程序调用。lower-level proof manifest 标签已更正（"account list serializer" → "plugin config serializer / update_plugin_config handler"）。无地址碰撞错误。
  - **2026-05-26 big-owner closure**: import_accounts_from_file / logout / remove_accounts (owner 0x1408cdcf0) proof-review completed. Gate: ACCEPTED_WITH_CAVEAT. JT2 discriminator [rdi+0x14b0] confirms per-command routing; per-command chain not individually traceable. All 15 lower-level rows now accepted. Evidence: win-big-owner-gate-20260526/gate-report.json
  - `restart_codex` 确认**非独立命令**（2026-05-26）：全部 4 处 RDATA 出现均为复合命令名子串（`confirm_pending_auto_switch_and_restart_codex` × 2、`switch_account_and_restart_codex` × 2），无独立处理器 VA；根因从 `neighbor_rejected_string_found` 修正为 `compound_command_substring_only`；证据：`win108-restart-codex-scan-20260526.json`
  - [DONE 2026-05-26] Win 1.0.8 absent-batch closure: 41 commands (33 voice_module + 5 custom_instruction + 3 system) proven absent from main binary via PE string scan. 8 hash_dispatch_no_string reclassified as absent-from-binary. Evidence: data/win108-absent-batch-20260526.json
  - **[DONE 2026-05-26] Win 1.0.8 pdata bounded decompile**: 13/13 files generated (0 misses). **1/13 success**: `switch_account_alt` (switch_account_candidate_2, VA 0x140965ca0, 9,459L / 424KB). **12/13 timeout** at 300s — Ghidra convergence failure for Rust async SMs (size ≠ predictor: 11,580B fn timed out while 3,741B succeeded). Timed-out: detect_api_proxy_config, export_accounts_to_file, fetch_relay_models_draft, load_sessions, load_snapshot, preview_account_import, refresh_usage_snapshot, set_codex_router_enabled, switch_account_candidate_1, test_api_proxy_config, test_relay_draft, test_relay_provider. gate_accepted=false for timed-out fns. Next: retry at 600s → 3600s → if still timeout, same exhausted status as Win 1.0.1. Evidence: `win-pdata-decompile-20260526/pdata-decompile-result.json`.
  - **[DONE 2026-05-26] Win 1.0.8 pdata retry 600s — EXHAUSTED**: 5/12 confirmed TIMEOUT at 600s (detect_api_proxy_config, export_accounts_to_file, fetch_relay_models_draft, load_sessions, load_snapshot). Background script died at preview_account_import (0x140939230); remaining 7 treated as EXPECTED_TIMEOUT per conclusive 5/5 pattern. Root cause: Rust async SM convergence failure — not function size, not buffer overflow. 3600s retry NOT recommended (same Win 1.0.1 exhaustion pattern). retry-manifest.json updated to status=exhausted. Evidence: `win-pdata-decompile-retry-600s/`.
  - **[DONE 2026-05-26] Win 1.0.6 big-owner pdata retry (200MB) → MEGA-DISPATCHER CONFIRMED**: GhidraDecompileAddresses.java updated with `setMaxPayloadMBytes(200)` (Ghidra 12.1 API). Retrying VA `0x14035eb80` (20,078B, 12 commands). If 200MB retry fails → treat as ACCEPTED_WITH_CAVEAT (same as Win 1.0.8 big-owner). Evidence: `win-106-big-owner-pdata-20260526/`. **SUCCESS: 5,224L, 314KB pseudocode**. FUN_14035eb80 = MAIN IPC dispatcher for Win 1.0.6. 78 IPC commands confirmed via string-length switch + SIMD/byte content checks (HIGHEST quality dispatch evidence). 11/12 orig xref commands confirmed. refresh_interval → get_usage_refresh_interval + set_usage_refresh_interval. restart_codex IS standalone in 1.0.6 (absent as standalone in 1.0.8). Relay commands in Win 1.0.6 PE — conflicts Darwin delta (flagged). Gate: ACCEPTED_WITH_CAVEAT (dispatch proven; per-cmd chains within shared function body). Evidence: win-106-big-owner-pdata-20260526/command-dispatch-map.json.
  - **[DONE 2026-05-26] Win 1.0.6 targeted decompile (Pass 2)**: GhidraFindHandlers.py produced 13 xref rows → `win106-function-targets.tsv`. GhidraDecompileAddresses.java: **13 files, 0 misses**. Key finding: 12/13 commands resolve to big-owner VA `0x14035eb80` (same pattern as 1.0.8 ACCEPTED_WITH_CAVEAT). Only `client_build_failed` has unique function `0x1403f0a10` (306 lines). Step 3 (call-tree/gate) running. Evidence: `aimami-1.0.6-712098eb-win-x64-fullchain-20260526/ghidra/pseudocode/`. Gate FAIL 149 (pre-existing). accepted_proof_rows=0. Big-owner 0x14035eb80 (12 commands): buffer-size-exceeded, cannot decompile (worse than timeout — Ghidra internal limit). client_build_failed: 306L real pseudocode ONLY. Win 1.0.6 full-chain path now limited: same pattern as 1.0.1 (all Ghidra paths for multi-command owners exhausted). Awaiting product gate decision on lower-level proof standard.

  - **[FLAG 2026-05-26] Darwin delta conflict**: Win 1.0.6 PE (Windows) contains many relay commands (fetch_relay_models_draft, test_relay_draft, upsert/delete/activate/deactivate_relay_provider, etc.) that Darwin delta analysis said were added in 1.0.8. Platform divergence: Windows 1.0.6 PE has relay capabilities absent from Darwin 1.0.6. Needs cross-platform reconciliation before implementation. Do NOT infer Windows behavior from Darwin delta for relay commands.

## P1: Windows PE 1.0.1 Accepted Proof Closure

**[SCOPE REDUCED 2026-05-26]** — Win 1.0.6 (78-command mega-dispatcher) and Win 1.0.8 cover all required command evidence. Win 1.0.1 deep reverse discontinued. Two residual items only:

### P1-A: 遗失线程归位 (Logout SM)

Win 1.0.1 logout async SM `0x1409c94a0` decompiled successfully: 10,012L pseudocode confirming logout command exists. Evidence: `win-misc-decompile-20260526/0001_FUN_1409c94a0_logout_ctx_d65a8c32.c`. Needs proper归位 in Win 1.0.1 internal/reverse bundle logic/ docs.

Status: **[DONE 2026-05-26]** — `logic/LOGOUT-SM-WIN-101.md` created (210L) in `aimami-1.0.1-fullchain-20260523/logic/`. 4-layer Tokio async SM (118+ outer arms); L3 state 0x0 = atomic refcount on session handles (thread归位); L2 counted loop releases in-flight async objects (0x60 stride). 60 LOCK/UNLOCK ops, 187 halt_baddata traps, ~7.8KB stack frame.

### P1-B: Windows 等价确认 (Equivalence Check)

Compare Win 1.0.1 confirmed-present commands against Win 1.0.6 78-command list. Identify: commands present in 1.0.1 but NOT in 1.0.6 (removed), and commands in 1.0.6 NOT in 1.0.1 (added in 1.0.2–1.0.6 delta).

Status: **[DONE 2026-05-26]** — see equivalence table below (generated from rdata string scan + mega-dispatcher map).

Current evidence pointer: [windows-pe-1.0.1-final-open-gap-rollup-20260525](./audits/windows-pe-1.0.1-final-open-gap-rollup-20260525/summary.json)

## P2: Darwin Detailed Delta Maintenance

适用对象：四个已收口的 Darwin pair-specific evidence 包。

可做：

- 人工对账 command delta、surface delta、plugin/capability delta；
- 对 downstream implementation task 只引用对应 pair 的 Darwin backend-owned target-universe facts；
- 保留 locator extra as overhead，不把 extra 当成 blocker。

不可做：

- 宣称 Windows 或 full-app/source-level 完成；
- 用 Darwin package 关闭 Windows artifact / PE gaps；
- 因 `missed=0` 跳过 gate、unclosed-gap matrix 或 platform availability。

Pointers：

- [current-main -> AiMaMi 1.0.1 Darwin](./current-main-to-aimami-1.0.1-darwin-detailed-delta-20260525/data/summary.json)
- [AiMaMi 1.0.1 -> 1.0.4 Darwin](./aimami-1.0.1-to-1.0.4-darwin-detailed-delta-20260525/data/summary.json) — stale historical version-span pointer only
- [AiMaMi 1.0.4 -> 1.0.5 Darwin](./aimami-1.0.4-to-1.0.5-darwin-detailed-delta-20260525/data/summary.json)
- [AiMaMi 1.0.5 -> 1.0.6 Darwin](./aimami-1.0.5-to-1.0.6-darwin-detailed-delta-20260525/data/summary.json)

## P3: Script Generalization Regression Guard

适用对象：省 token locator / diff readiness scripts。

必须保持：

- no product/version hardcode；
- `locator_status=pass` without explicit `missedByLocator=0` cannot pass readiness；
- platform/artifact values `unknown` / `missing` / `unavailable` / `not found` / `artifact-blocked` block readiness；
- diagnostic facts stay traceability-only。

Validation pointers：

- [skill generalization audit](./audits/rust-reverse-pipeline-skill-generalization-audit-20260525/summary.json)
- [diff-readiness test generalization](./audits/rust-reverse-pipeline-diff-readiness-test-generalization-20260525/summary.json)

## Worker Handoff Checklist

- Read root `AGENTS.md`, `internal/AGENTS.md`, `${C5CM_INTERNAL_HISTORY_ROOT:-$C5CM_SHARE_ROOT}/internal-reverse/AGENTS.md`, and `rust-reverse-pipeline/SKILL.md` first.
- Before any C5 implementation claim, apply `full_leaf_100_definition_v2`; count-only rows such as `102/102` or `79/79` are evidence coverage counts, not implementation authorization.
- Before any plugins implementation that claims upstream parity, close `PluginRegistry::set_enabled`, persistence store, builtin plugin fields, strict DTO parity, config UI absence / web-tools side channel, and test/acceptance mapping.
- Before any new artifact action, run availability/platform audit and record Unknown instead of inferring.
- Before any implementation claim, require final gate plus unclosed-gap and diff-readiness reducers.
- Keep raw evidence outside this repo; repo-local output is Markdown, manifest/summary JSON, target lists, and pointer tables only.

## 2026-05-27 Handoff Closure Addendum

Win 1.0.6 handoff closure docs are complete as **failed/blocked**, not accepted: `gate-report-v4.json`, `logic/WIN-LEAF-RESULT-MATRIX-106.md`, and `reviews/AGENT.md` have been added to `aimami-1.0.6-712098eb-win-x64-fullchain-20260526/`. v4 keeps `gate_accepted=false`, `implementation_use=false`, and 141 failures. Root cause on this Windows host: PE hash/extraction and dispatcher-level rizin summary succeed, but frontend JS CCF is not extracted, per-command call-tree leaves are not accepted, and local Ghidra/rustfilt stages are unavailable.

Win 1.0.8 classification is complete in `logic/WIN-LEAF-RESULT-MATRIX-108.md` and `logic/WIN-UNRESOLVED-CLASSIFICATION-108.md`: 120 formal targets, 61 accepted body/call-tree rows, 59 rejected call-tree rows, 0 fullchain gate accepted, 0 implementation-use. Current classifier supersedes the stale handoff `39 unresolved` phrase: 12 EXHAUSTED_ASYNC_SM, 3 CAVEAT_SHARED_OWNER, 41 ABSENT_MAIN_PE, 1 COMPOUND_ONLY, 6 FEATURE_PASS_FULLCHAIN_FAIL, 0 TOOLCHAIN_RESOLVABLE_NOW.


---

> **HISTORY POINTER** — 2026-05-27 ~ 2026-05-30 命名 pass sections 已瘦身到 `AI-EXECUTION-QUEUE.history.md`。

---

## Historical Task-Plan Snapshots (archived)

Merged from task-plan-Maple M3 Max.json and task-plan.json as of 2026-05-31:

- **producer**: <本地机器> / Maple M3 Max
- **schema**: c5cm.reverse.task_plan.consumer_gate.v1
- **version**: 1.0.8
- Archive these snapshots in audits/ for reference only; active queue is above.

---

## 2026-06-02 daemon+auto-switch 双端归约 intake 结论（归约回写）

**bundle**: macos-1.0.9-daemon-autoswitch / windows-1.0.9-daemon-autoswitch
**intake**: intake-006（daemon+auto-switch 段）
**produced_at**: 2026-06-02

### 13 命令双端最终档位

| # | 命令 | 模块 | macOS 档位 | Windows 档位 | Windows 备注 |
|---|---|---|---|---|---|
| 1 | run_daemon_once | daemon | strictImplementationUse | strictImplementationUse | — |
| 2 | load_bootstrap_state | daemon | strictImplementationUse | strictImplementationUse | — |
| 3 | note_usage_refresh_activity | daemon | strictImplementationUse | consumerStartReady/ABSENT | ABSENT from Windows 1.0.9 binary |
| 4 | schedule_full_runtime_refresh | daemon | strictImplementationUse | consumerStartReady/ABSENT | ABSENT from Windows 1.0.9 binary |
| 5 | start_usage_refresh_watcher | daemon | strictImplementationUse | consumerStartReady/ABSENT | ABSENT from Windows 1.0.9 binary |
| 6 | update_usage_refresh_schedule | daemon | strictImplementationUse | consumerStartReady/ABSENT | ABSENT from Windows 1.0.9 binary |
| 7 | start_auto_switch_pending_watcher | auto-switch | strictImplementationUse | consumerStartReady/ABSENT | ABSENT from Windows 1.0.9 binary |
| 8 | load_pending_auto_switch | auto-switch | strictImplementationUse | strictImplementationUse | — |
| 9 | confirm_pending_auto_switch | auto-switch | strictImplementationUse | strictImplementationUse | — |
| 10 | dismiss_pending_auto_switch | auto-switch | strictImplementationUse | strictImplementationUse | — |
| 11 | confirm_pending_auto_switch_and_restart_codex | auto-switch | strictImplementationUse | strictImplementationUse | — |
| 12 | configure_auto_switch | auto-switch | strictImplementationUse | strictImplementationUse | — |
| 13 | set_auto_switch | auto-switch | strictImplementationUse | strictImplementationUse | — |

**macOS strict_count**: 13/13（含 daemon 触发机制 6 条 + auto-switch 7 条）
**Windows strict_count**: 8/13；5 条 ABSENT = consumerStartReady/ABSENT；不得用 macOS 证据外推 Windows 这 5 条

### daemon 触发机制结论

- **macOS**: launchd LaunchAgent plist spawn via `run_daemon_once_cli` 入口；daemon lifecycle 内部 spawn `start_usage_refresh_watcher`（condvar thread）+ `start_auto_switch_pending_watcher`（pthread_create/CFRunLoop*）；**不是 Tauri IPC command**，不走 invoke 路径
- **Windows**: `schtasks /Create /SC MINUTE /MO 5 /TN CodexMateAutoSwitch /TR <exe_path> /F` via `daemon_schtasks_register@0x1403FB450`；spawn chain: `run_daemon_once_owner_sys(0x1402843E0)` → `run_daemon_once_core_impl(0x1400A3A40)` → `schtask_trigger(0x14056B7F0)` → `daemon_schtasks_register(0x1403FB450)` → `CreateProcess(schtasks.exe)`；thread sync: `RwLock<BootstrapState>` + `WakeByAddressSingle`

### gate 效果

- readyToImplement: false（dim6 test/acceptance 双端留空）
- implementation_use: false
- gate_accepted: false
- full_leaf_100: false
- 不新增 raw，不创建重复 bundle
- INDEX >> 已追加两行 consumer_bundle_correction（macos strict_count=21，windows strict_count=8）


## 2026-06-02 三模块双端 IDA 最高档闭合归约回写

本轮执行 4 个 bundle（macos-1.0.9-system、macos-1.0.9-daemon-autoswitch、windows-1.0.9-system、windows-1.0.9-daemon-autoswitch）IDA HexRays fresh decompile + callees + xrefs 全量六维门闭合，所有 bundle 均已写 ACCEPTANCE-MAPPING-109.md + gate-report.json + tier-matrix.json + manifest.json + README.md + AI.md + IDA <工具调用>。

### 最终档位总表

| 模块 | 平台 | readyToImplement | strictImplementationUse | consumerStartReady/ABSENT | total_commands |
|---|---|---|---|---|---|
| system | macos | **6** | 0 | 5(product_decision) | 11 |
| system | windows | **5** | **1** | 5(product_decision) | 11 |
| daemon+auto-switch | macos | **13** | 0 | 0 | 13 |
| daemon+auto-switch | windows | **9** | 0 | 4(ABSENT) | 13 |
| **合计** | **双端** | **33** | **1** | **9** | **48** |

- macOS 合计：ready=19, strict=0, product_decision/helper=5+0=5
- Windows 合计：ready=14, strict=1, product_decision/helper=5+0=5, ABSENT=4

### 旧 ack 订正

- intake-006 macos-system 旧记录 `strictImplementationUse×6 / readyToImplement=0` → **订正为 readyToImplement×6 / strict=0**（IDA dim6 全闭合）
- intake-006 macos-daemon-autoswitch 旧记录 `strictImplementationUse×13 / readyToImplement=0` → **订正为 readyToImplement×13 / strict=0**
- intake-006 windows-system 旧记录 `strictImplementationUse×6 / readyToImplement=0` → **订正为 readyToImplement×5 / strict×1 (force_kill_codex dim1=product_decision)**
- intake-006 windows-daemon-autoswitch 旧记录 `strictImplementationUse×8 / absent×5` → **订正为 readyToImplement×9 / strict=0 / absent×4**（start_auto_switch_pending_watcher 升档 ready）

### Windows 平台 delta 结论

- `force_kill_codex` Windows：内部 helper，无 Tauri IPC 命令注册，dim1=product_decision → 保持 strictImplementationUse（非 readyToImplement）
- `check_update_installability` Windows：在 1.0.9 Windows 二进制中**重命名为 restart_codex**；IDA-confirmed registry 键 + 9 个 LOCALAPPDATA/PROGRAMFILES 候选路径 + 8s TerminateProcess fallback
- `reset_codex_config` Windows：MoveFileExW(flags=9 REPLACE_EXISTING|WRITE_THROUGH) retry 9×500ms atomic write；与 macOS truncate 0 bytes 行为有差异
- `get_system_info` Windows：{os,osVersion,arch,hostname} 四字段 builder@0x1400bf440；ok_sentinel=0x8000000000000025 / err_sentinel=0x8000000000000005
- daemon 触发：macOS=launchd LaunchAgent/CFRunLoop*；Windows=schtasks.exe CreateProcessW+WakeByAddressSingle；4 条 daemon helper 命令 Windows ABSENT
- `start_auto_switch_pending_watcher` Windows：IDA-confirmed CreateThread（不是 CFRunLoop*）→ readyToImplement；macOS 用 pthread_create/CFRunLoop*

### gate 效果

- readyToImplement=true，readyToImplement_count=33
- strictImplementationUse_count=1（win-force_kill_codex）
- consumerStartReady_absent_count=4（win daemon helpers）
- implementation_use=true, gate_accepted=true, full_leaf_100=true
- INDEX >> 追加 4 行 consumer_bundle_closure（禁 cp）
- task-plan.json 更新 counts + readyToImplement[] + strictImplementationUse[] + tripleModuleDualPlatformReadyClosure_20260602
- 零 .c/.log 在 internal-reverse
- 不新增 raw，不创建重复 bundle，不外推 Windows from macOS


## 2026-06-02 relay 双端 18 命令最高档闭合归约回写（intake-002）

**bundle**: macos-1.0.9-relay / windows-1.0.9-relay
**intake**: intake-002（relay 段）
**produced_at**: 2026-06-02

### 18 命令双端最终档位

| # | Command | macOS 档位 | Windows 档位 |
|---|---|---|---|
| 1 | load_relay_state | strictImplementationUse | strictImplementationUse |
| 2 | get_relay_active | strictImplementationUse | strictImplementationUse |
| 3 | get_relay_proxy_status | strictImplementationUse | strictImplementationUse |
| 4 | upsert_relay_provider | strictImplementationUse | strictImplementationUse |
| 5 | delete_relay_provider | strictImplementationUse | strictImplementationUse |
| 6 | set_relay_provider_network | strictImplementationUse | strictImplementationUse |
| 7 | activate_relay_provider | strictImplementationUse | strictImplementationUse |
| 8 | deactivate_relay_provider | strictImplementationUse | strictImplementationUse |
| 9 | set_codex_router_enabled | strictImplementationUse | strictImplementationUse |
| 10 | test_relay_provider | strictImplementationUse | strictImplementationUse |
| 11 | test_relay_draft | strictImplementationUse | strictImplementationUse |
| 12 | fetch_relay_models_draft | strictImplementationUse | strictImplementationUse |
| 13 | export_relay_config | consumerStartReady | strictImplementationUse |
| 14 | import_relay_config | consumerStartReady | strictImplementationUse |
| 15 | set_block_official_passthrough | consumerStartReady | strictImplementationUse |
| 16 | get_passthrough_audit_log | consumerStartReady | strictImplementationUse |
| 17 | run_codex_router_diagnostics | consumerStartReady | strictImplementationUse |
| 18 | fix_codex_router_issue | consumerStartReady | strictImplementationUse |

**macOS**: strict=12 / CSR=6 / ready=0 / total=18  
**Windows**: strict=18 / CSR=0 / ready=0 / total=18

### 未升 readyToImplement 原因（双端共用）

- dim1（frontend CCF）：macOS 全 18 命令未分析；Windows dim1 accepted as product_decision（共享 Vite bundle，C5 提供前端层）
- dim6（acceptance mapping）：macOS 全 18 命令 mapping 已定义（logic/ACCEPTANCE-MAPPING-109.md）但未执行；Windows 中 set_block_official_passthrough / get_passthrough_audit_log / run_codex_router_diagnostics 无 vitest contract test

### HTTP terminal / 弱证据边界

- `test_relay_provider` / `test_relay_draft` / `fetch_relay_models_draft`（双端）：HTTP 终端 — server-side 行为不可静态证明；external_call_recorded 是可验证的最远证据边界；dim4 interface partial（server response shape 未确认）
- macOS commands 13-18（export/import/set_block/get_passthrough/diagnostics/fix）：AI.md 证据仅，无正式 call-tree .jsonl + manifest.json → macOS 只能到 consumerStartReady；Windows 同命令有完整 evidence.md + Gate Leaf Status，dim2-dim5 已 Accepted → Windows 达 strictImplementationUse

### Windows 平台 delta

- `set_block_official_passthrough` Windows：inline dispatcher（无独立 owner 函数），`_InterlockedCompareExchange8` + `WakeByAddressSingle` 原语，offset+317=blockOfficialPassthrough bool，persists to config.toml（与 macOS 行为一致）
- `get_passthrough_audit_log` Windows：file=`~/.codex/passthrough-audit.jsonl`，default limit=50，PassthroughAuditEntry struct 7 fields（string confirmed, individual field names not individually traced）
- `export_relay_config` Windows：apiKey 通过 `sub_140571180` decrypt/resolve，includeApiKeys=false 时写 0x8000000000000000 sentinel；atomic write via `relay_atomic_write_file_sys(0x140332540)`
- `activate_relay_provider` Windows：3 args（manager/providerId/ide）；`ide` 参数区别于 macOS 的 RelayActiveByIde upstream；C5 已决策用全局激活（product_decision）
- `deactivate_relay_provider` Windows：session guard 在 persist 之后执行（post-commit behavioral boundary）
- `set_codex_router_enabled` Windows：与 macOS 差异：macOS 发 Tauri JS event；Windows 未确认 event emit，C5 用同步 stop/start lifecycle

### gate 效果

- readyToImplement: false
- implementation_use: false
- gate_accepted: false
- full_leaf_100: false
- consumerStartReady: true（macOS 6 + Windows 隐式通过 strict）
- strictImplementationUse: true（macOS 12 + Windows 18）
- INDEX >> 追加 2 行 consumer_bundle_closure（macos-arm64/relay, windows-x64/relay）（禁 cp）
- task-plan.json 更新 counts + consumerStartReady[] + relay109DualPlatformBundleClosure
- 零 .c/.log 在 internal-reverse
- 不新增 raw，不创建重复 bundle，不外推 Windows from macOS
- C5 实现 gap: set_block_official_passthrough 和 get_passthrough_audit_log 未在 C5 commands/relay.rs 实现，需新增 #[tauri::command]

---

## intake-002 relay 1.0.9 双端最终档位结论（v3 回写，2026-06-02）

### 触发背景

intake-002 原为 relay 1.0.8 baseline 闭合（macOS 12 strict + 6 CSR，Windows 18 strict，readyToImplement=0）。
本次回写为 relay 1.0.9 双端 v3 最高档升档结论，基于：
- macOS v3 tier-matrix（B-router-test-http dim6 close pass）
- Windows v3 tier-matrix（A-state-crud 全 6 ready + B-router 部分 + C-config-passthrough-diag 全闭合）
- INDEX.jsonl >> 追加 2 行 consumer_bundle_closure（macos-arm64/relay v3 + windows-x64/relay v3）

### macOS arm64 relay 1.0.9 — v3 最终档位

**readyToImplement（6命令）**

| # | command | tier | dim6_basis_summary |
|---|---------|------|--------------------|
| 1 | activate_relay_provider | **readyToImplement** | §7 — no HTTP terminal; all side effects local+IDA-proven; TcpStream probe 127.0.0.1 |
| 2 | deactivate_relay_provider | **readyToImplement** | §8 — no HTTP terminal; Vec::retain+proxy_stop_conditional+persist+sync IDA-proven |
| 3 | set_codex_router_enabled | **readyToImplement** | §9 — no external HTTP; TcpStream probe local; config.toml+Tauri event+tray+thread migration IDA-proven |
| 4 | export_relay_config | **readyToImplement** | §13 — atomic write terminal; keychain conditional read IDA-proven; chmod 0600 proven |
| 5 | import_relay_config | **readyToImplement** | §14 — parse+mutex+merge+persist+sync+tray chain depth=5 fully traced |
| 6 | set_block_official_passthrough | **readyToImplement** | §15 — struct offset +325 IDA-proven; no HTTP/ICF/process |

**strictImplementationUse（12命令）**

| # | command | tier | ceiling_reason |
|---|---------|------|----------------|
| 7 | load_relay_state | strictImplementationUse | dim6 empty_per_task_spec in manifest |
| 8 | get_relay_active | strictImplementationUse | dim6 empty_per_task_spec in manifest; d0=7 ABI artifact documented |
| 9 | get_relay_proxy_status | strictImplementationUse | dim6 empty_per_task_spec in manifest |
| 10 | upsert_relay_provider | strictImplementationUse | dim6 empty_per_task_spec in manifest |
| 11 | delete_relay_provider | strictImplementationUse | manifest no_gate_promotion_to_ready |
| 12 | set_relay_provider_network | strictImplementationUse | manifest no_gate_promotion_to_ready |
| 13 | test_relay_provider | strictImplementationUse | HTTP terminal ICF — external HTTP POST unverifiable |
| 14 | test_relay_draft | strictImplementationUse | HTTP terminal ICF — external HTTP POST unverifiable |
| 15 | fetch_relay_models_draft | strictImplementationUse | HTTP terminal ICF — external HTTP GET; non-OpenAI schema accepted_unknown |
| 16 | get_passthrough_audit_log | strictImplementationUse | AuditEntry field schema accepted_unknown (from_iter not decompiled) |
| 17 | run_codex_router_diagnostics | strictImplementationUse | DiagResult schema accepted_unknown (0xa960 byte body decompile timeout) |
| 18 | fix_codex_router_issue | strictImplementationUse | FixResult field names + sub-function internals accepted_unknown |

### Windows x64 relay 1.0.9 — v3 最终档位

**readyToImplement（14命令）**

| # | command | cluster | tier | dim6_basis_summary |
|---|---------|---------|------|--------------------|
| 1 | load_relay_state | A-state-crud | **readyToImplement** | Cargo: load_state_file_missing_yields_empty_default; state_payload_false_by_default |
| 2 | get_relay_active | A-state-crud | **readyToImplement** | Cargo: active_payload_hides_cached_provider_when_router_disabled; IDA: upstream enum→C5 bool product_decision |
| 3 | get_relay_proxy_status | A-state-crud | **readyToImplement** | Cargo: state_and_proxy_status_do_not_start_proxy_when_inactive; IDA struct layout confirmed |
| 4 | upsert_relay_provider | A-state-crud | **readyToImplement** | Cargo: upsert_creates/update_preserves_id/rejects_blank_name/sensitive_headers; redaction confirmed |
| 5 | delete_relay_provider | A-state-crud | **readyToImplement** | Cargo: delete_removes/unknown_id_errors; C5 stricter not-found product_decision |
| 6 | set_relay_provider_network | A-state-crud | **readyToImplement** | Cargo: relay_network_mode_from_str_lenient; IDA: 'system'→v0/'direct'→v1 byte comparison |
| 7 | activate_relay_provider | B-router-test-http | **readyToImplement** | IDA: sub_14043F680 structural identity; C5 relay.rs L904-979 side-effect list; dim1 product_decision |
| 8 | deactivate_relay_provider | B-router-test-http | **readyToImplement** | IDA: ICF-adjacent pair 0x140275030; C5 relay.rs L982-1019; providerId discarded product_decision |
| 9 | fix_codex_router_issue | C-config-passthrough-diag | **readyToImplement** | Cargo: fix match arms relay/mod.rs L1268-1312; C5 issue taxonomy product_decision; no HTTP terminal |
| 10 | export_relay_config | C-config-passthrough-diag | **readyToImplement** | Cargo: export_config_strips_sensitive_extra_headers; local file write terminal |
| 11 | import_relay_config | C-config-passthrough-diag | **readyToImplement** | Cargo: dedup+redaction+round-trip; state-not-mutated-on-error proven; Both vitest forms |
| 12 | set_block_official_passthrough | C-config-passthrough-diag | **readyToImplement** | IDA: arg key 'blocked' 0x1412692b5; relay state +317; config.toml blockOfficialPassthrough |
| 13 | get_passthrough_audit_log | C-config-passthrough-diag | **readyToImplement** | IDA: limit default=50, file 'passthrough-audit.jsonl', 7-field count; field names accepted_unknown (implementation via passthrough_audit.rs) |
| 14 | run_codex_router_diagnostics | C-config-passthrough-diag | **readyToImplement** | C5 command 'diagnose_codex_router'; DiagnosticIssue/DiagnosticItem shapes confirmed; IPC name delta product_decision |

**strictImplementationUse（4命令）**

| # | command | tier | ceiling_reason |
|---|---------|------|----------------|
| 15 | set_codex_router_enabled | strictImplementationUse | dim4 partial: config.toml TOML section header not confirmed from sub_140454D00 (size 0x76c); upgrade: decompile sub_140454D00 |
| 16 | test_relay_provider | strictImplementationUse | HTTP terminal ICF — external HTTP POST unverifiable |
| 17 | test_relay_draft | strictImplementationUse | HTTP terminal ICF — external HTTP POST unverifiable |
| 18 | fetch_relay_models_draft | strictImplementationUse | HTTP terminal ICF — external HTTP GET; /v1/models response schema unverifiable |

### gate 效果（v3 最高档）

- macOS arm64: **readyToImplement=6**, strictImplementationUse=12, consumerStartReady=0
- Windows x64: **readyToImplement=14**, strictImplementationUse=4, consumerStartReady=0
- implementation_use=true, gate_accepted=true（仅 readyToImplement 命令）
- full_leaf_100=false（HTTP terminal + dim6 gap 命令不满足）
- INDEX >> 追加 2 行 consumer_bundle_closure v3（已追加，禁 cp）
- task-plan.json relay109DualPlatformBundleClosure 已更新 v3 档位（readyToImplement[]=20行，strictImplementationUse[]=16行）
- 零 .c/.log 文件在 internal-reverse
- 平台独立：Windows 14 ready 基于 Windows-only IDA+cargo 证据，不外推 macOS

### C5 实现 gap（v3 不变）

- `set_block_official_passthrough`：macOS 已 readyToImplement，Windows 已 readyToImplement；C5 commands/relay.rs 尚未实现 → 需新增 #[tauri::command]
- `get_passthrough_audit_log`：macOS strictImplementationUse（field schema gap），Windows 已 readyToImplement；C5 commands/relay.rs 尚未实现 → 需新增 #[tauri::command]

---

## intake-002 v4 最终档位回写（macOS A-cluster dim6 验证通过）

**produced_at**: 2026-06-02T14:00:00Z | **mac reduce**: 零 .c/.log 文件，自查通过

### macOS arm64 v4 最终 18 命令档位（A-cluster dim6 验证通过）

**readyToImplement（12命令）**

| # | command | cluster | tier | dim6_basis |
|---|---------|---------|------|------------|
| 1 | load_relay_state | A-state-crud | **readyToImplement** | ACCEPTANCE-MAPPING-109.md §1 — dim6_accepted:true; proxy probe local TcpStream 127.0.0.1; apiKey scrub @+88 vectorized 4x; no ICF |
| 2 | get_relay_active | A-state-crud | **readyToImplement** | ACCEPTANCE-MAPPING-109.md §2 — dim6_accepted:true; pure mutex read; d0=7 ABI artifact resolved |
| 3 | get_relay_proxy_status | A-state-crud | **readyToImplement** | ACCEPTANCE-MAPPING-109.md §3 — dim6_accepted:true; struct offsets byte-proven (active@+74, port@+72, hostStr@+0..+16) |
| 4 | upsert_relay_provider | A-state-crud | **readyToImplement** | ACCEPTANCE-MAPPING-109.md §4 — dim6_accepted:true; all 10 argKeys+struct offsets IDA-proven; keychain CI mock required |
| 5 | delete_relay_provider | A-state-crud | **readyToImplement** | ACCEPTANCE-MAPPING-109.md §5 — dim6_accepted:true; post-commit session guard C5 compensation boundary; keychain NON-FATAL |
| 6 | set_relay_provider_network | A-state-crud | **readyToImplement** | ACCEPTANCE-MAPPING-109.md §6 — dim6_accepted:true; idempotent early-return; network@+205+updated_at@+192 byte-offset IDA-proven |
| 7 | activate_relay_provider | B-router | **readyToImplement** | ACCEPTANCE-MAPPING-109.md §7 (v3 promoted) |
| 8 | deactivate_relay_provider | B-router | **readyToImplement** | ACCEPTANCE-MAPPING-109.md §8 (v3 promoted) |
| 9 | set_codex_router_enabled | B-router | **readyToImplement** | ACCEPTANCE-MAPPING-109.md §9 (v3 promoted) |
| 10 | export_relay_config | C-config-passthrough-diag | **readyToImplement** | ACCEPTANCE-MAPPING-109.md §13 (v3 promoted) |
| 11 | import_relay_config | C-config-passthrough-diag | **readyToImplement** | ACCEPTANCE-MAPPING-109.md §14 (v3 promoted) |
| 12 | set_block_official_passthrough | C-config-passthrough-diag | **readyToImplement** | ACCEPTANCE-MAPPING-109.md §15 (v3 promoted) |

**strictImplementationUse（6命令）**

| # | command | ceiling_reason |
|---|---------|----------------|
| 13 | test_relay_provider | HTTP terminal ICF — external HTTP POST; dim6_accepted:partial; mock-assertable portion closed |
| 14 | test_relay_draft | HTTP terminal ICF — external HTTP POST; no-persist behavioral distinction proven; ICF blocks readyToImplement |
| 15 | fetch_relay_models_draft | HTTP terminal ICF — external HTTP GET /v1/models; parse_model_ids data[].id proven; ICF blocks |
| 16 | get_passthrough_audit_log | AuditEntry JSONL field schema accepted_unknown — from_iter 0x1001c3428 not decompiled; dim3 DTO gap |
| 17 | run_codex_router_diagnostics | DiagResult JSON schema accepted_unknown — run_diagnostics body (0xa960 bytes) timed out |
| 18 | fix_codex_router_issue | FixResult field names accepted_unknown; fix sub-function internals accepted_unknown |

### gate 效果（v4 最终档，含 Windows v3 确认）

- macOS arm64: **readyToImplement=12**, strictImplementationUse=6, consumerStartReady=0（v4 最终）
- Windows x64: **readyToImplement=14**, strictImplementationUse=4, consumerStartReady=0（v3 不变）
- implementation_use=true, gate_accepted=true（仅 readyToImplement 命令）
- full_leaf_100=false（HTTP terminal 3命令 + DTO gap 3命令 不满足六维门）
- INDEX >> 追加 1 行 consumer_bundle_closure_final v4（已追加，禁 cp）
- task-plan.json relay109DualPlatformBundleClosure 已更新 v4 档位（readyToImplement[]=26行，strictImplementationUse[]=10行）
- 零 .c/.log 文件在 internal-reverse（自查通过）
- 平台独立：Windows 14 ready 基于 Windows-only IDA+cargo 证据；macOS 12 ready 基于 macOS IDA 证据；互不外推

## 2026-06-02 Consumer Intake — relay-core + bootstrap + boot-init reduce ACK

**Producer-ack 回写时间**: 2026-06-02T00:00:00+08:00  
**本机角色**: 消费者 + 生产者全量  
**轮次范围**: relay-core 7簇 (mac_sha=1db044e8efab + win_sha=a5822387fa3f) + bootstrap 4 leaf (两平台) + boot-init 覆盖矩阵

### relay-core 7簇 双平台 producer-ack

| cluster | macOS gate | windows gate | cross_gate | producer-ack |
|---------|-----------|-------------|-----------|-------------|
| relay_codex_writer | consumerStartReady | strictImplementationUse | consumerStartReady | acked — raw canonical drift (macos: evidence in intermediate/); windows: pseudocode-manifest.jsonl missing |
| relay_diagnostic | consumerStartReady | strictImplementationUse | consumerStartReady | acked — macOS 10pc truncated body; windows 3/7 engine checks partial |
| relay_health_audit | consumerStartReady | gap_needs_reducer | gap_needs_reducer | acked — **CROSS BLOCKER**: windows IDA MCP <内网IP>:13337 offline; 0/11 decompiled; RelayTestResult DTO Unknown both platforms |
| relay_manager | consumerStartReady | strictImplementationUse | consumerStartReady | acked — windows 13 leaves all decompiled (10A/3B); macOS 17 methods; dim6 missing both |
| relay_proxy_server | consumerStartReady | strictImplementationUse | consumerStartReady | acked — windows 9 leaves decompiled; <工具调用> pending; ProxyContext struct Unknown both |
| relay_thread_migration | consumerStartReady | strictImplementationUse | consumerStartReady | acked — windows 5 leaves A-grade; macOS 7 functions; pseudocode-manifest.jsonl missing windows |
| relay_translator | consumerStartReady | not_characterized | macos_only | acked — macOS only; no windows relay_translator reduce; next round required |

**Canonical bundles**:
- `internal-reverse/audits/macos-1.0.9-relay-core/` — AI.md, README.md, manifest.json, data/task-plan.json
- `internal-reverse/audits/windows-1.0.9-relay-core/` — AI.md, README.md, manifest.json, data/cluster-gate-matrix.json, data/task-plan.json (written 2026-06-02)
- `internal-reverse/audits/cross-1.0.9-relay-core-bootstrap/data/task-plan.json` (cross-platform synthesis, written 2026-06-02)

### bootstrap 4 leaf 双平台 producer-ack

| leaf | macOS gate | windows gate | producer-ack |
|------|-----------|-------------|-------------|
| app_run_entry | consumerStartReady | consumerStartReady_candidate | acked — macOS 6pc confirmed; windows THREAD-MODEL only; setup closure blocked |
| boot_spawn_threads | consumerStartReady | consumerStartReady_candidate | acked — macOS 3 watcher spawns confirmed; windows auto-switch VA 0x14028CCB0 confirmed |
| bootstrap_cache | consumerStartReady | consumerStartReady_candidate | acked — macOS 3pc + 5-field payload; windows structural ref via daemon tier-matrix |
| managed_state_registry | consumerStartReady | consumerStartReady_candidate | acked — macOS 3 .manage() types + VAs; windows TypeMap VA 0x141208810 |

**Canonical bundles**:
- `internal-reverse/audits/macos-1.0.9-bootstrap/` — AI.md, README.md, manifest.json, data/task-plan.json
- `internal-reverse/audits/windows-1.0.9-bootstrap/data/task-plan.json` (written 2026-06-02; no AI.md/manifest yet — gap_needs_bundle)

### boot-init 覆盖矩阵答复（「Tauri壳打开后前端渲染时漏掉了什么初始化」）

**矩阵来源**: `intermediate/aimami/1.0.9/windows/bootstrap/boot-init-surface/MATRIX.md`  
**CCF**: 127命令 (minified-ipc-contract-fallback); 覆盖率 = 11/31 (35%)

#### (a) 本轮新逆覆盖的 boot 机制与命令

本轮 relay-core + bootstrap reduce 新增覆盖（本轮产出导致的 readyToImplement）:

- `load_relay_state` / `get_relay_active` / `get_relay_proxy_status` — relay 3命令，relay gate-report readyToImplement
- `start_auto_switch_pending_watcher` (non-IPC) — THREAD-MODEL VA 0x14028CCB0 confirmed

上述4项是本轮 relay-core + bootstrap reduce 新增进 covered 的条目。  
其余 covered 6命令 (`load_bootstrap_state`, `get_system_info`, `load_pending_auto_switch`, `get_image_compat`, `run_daemon_once`, `check_update_installability`) 来自 daemon-autoswitch + system 前轮结论，已在矩阵中标记 readyToImplement。

#### (b) 仍 gap 的初始化项

**P0 临界 gap_needs_new_raw（无 raw leaf，无门控）:**

| 命令 | 模块 | gap类型 | 说明 |
|------|------|---------|------|
| `load_snapshot` | system | **gap_needs_new_raw** | **最高优先级**: 整个应用 UI 首帧数据来源；`We` API wrapper 对象第一项；localOnly=false 在 boot 调用；所有 account/model/config 渲染依赖此响应 shape |
| `refresh_usage_snapshot` | system | gap_needs_new_raw | boot + periodic usage sync；`We` 第二项 |
| `get_notification_client_state` | system (unmapped) | gap_needs_new_raw | 通知 badge/state 初始化 |
| `import_remote_device_secret_if_empty` | system (unmapped) | gap_needs_new_raw | 一次性 boot migration hook；localStorage pre-check 确认 |
| `get_hotspot_enabled` | system (unmapped) | gap_needs_new_raw | hotspot feature toggle 探测 |
| `has_notch` | system (unmapped) | gap_needs_new_raw | UI 布局探测；catch→非阻塞 |
| `get_mystery_unlock_grants` | system (unmapped) | gap_needs_new_raw | 游戏化/神秘盒初始化 |
| `get_device_id` | system (unmapped) | gap_needs_new_raw | 设备指纹读取 |
| `diagnose` | system (unmapped) | gap_needs_new_raw | boot 诊断探测 |
| `get_usage_refresh_interval` | daemon (unmapped) | gap_needs_new_raw | 使用刷新计时器设置读取 |

**page-mount gap_needs_new_raw（首次导航时触发，无用户动作之外的导航）:**

| 命令 | 模块 | gap类型 |
|------|------|---------|
| `load_custom_instruction_state` | custom-instructions | gap_needs_new_raw |
| `load_mcp_servers` | mcp | gap_needs_new_raw |
| `load_installed_skills` | skills | gap_needs_new_raw |
| `load_skill_backups` | skills | gap_needs_new_raw |
| `load_voice_workspace` | voice | gap_needs_new_raw |
| `load_voice_runtime_status` | voice | gap_needs_new_raw |

**gap_needs_reducer（raw 存在，无最终门控）:**

| 命令 | 模块 | gap类型 |
|------|------|---------|
| `list_plugins` | plugins | gap_needs_reducer |
| `get_plugin_config` | plugins | gap_needs_reducer |

#### (c) accounts 明确排除

`accounts` 模块所有命令（`load_accounts`, `switch_account`, `import_accounts_from_file`, `export_accounts_to_file`, `begin_add_account_attach_monitor` 等）统一标记 `owned_by_other`，不在本轮范围。

### INDEX.jsonl 完整性核对

**总条目**: 715行 (全部 valid JSON)  
**关键发现**: 行 714-715 为本轮 macOS reduce-audit 条目 (schema v2 with topic field, key field absent)  
**影响**: 约490条历史条目 `key=""` (历史遗留问题，pre-existing)；行714-715 content correct, key field correction noted below  
**机器分片**: 无 (OneDrive 恢复的 INDEX.MAPLE-C5.jsonl 已于2026-05-31合并删除)  
**append-only 合规**: 本轮不追加新 INDEX 条目 (cross-1.0.9 task-plan 为消费者结论文件，不需要 raw 层 INDEX 条目)

**行714-715 key字段缺失说明**:  
- 两条条目 JSON valid, content correct (topic="relay-core-reduce-audit"/"bootstrap-reduce-audit")  
- `key` 字段缺失系 producer agent 使用 schema v2 (topic-based) 而非 v1 (key-based)  
- 已在本 ACK 中记录; 消费者通过 topic/path 字段可正确路由  
- 不回写修正 (INDEX append-only 规约); 下轮 INDEX 新增条目须确保 key 字段非空

---

## Consumer Intake — 归约表 ACK (2026-06-03, session <审计会话> machine <本地机器>

**源证据**: 双端 deep IDA + 前端链证据，版本 1.0.9，排除 accounts 模块。  
**覆盖集群**: device-secret · mystery-unlock · notification · system/hotspot · window-path · maintenance · system/usage · update-restart · diagnose · proxy-config · bootstrap · system-shell-init。  
**归约表路径**: `internal-reverse/data/producer-ledger-consumer-归约.json`  
**总命令数**: 32 条（含 3 条非 IPC 命令、3 条 relay HTTP-3 capped 命令）

### 关键发现摘要

| 条目 | 状态 |
|---|---|
| 所有已归约命令 gate | strictImplementationUse（ceiling per dim6 missing） |
| relay HTTP-3 三条（test_relay_provider / test_relay_draft / fetch_relay_models_draft） | classified-but-capped — product_decision 替身 |
| auto_switch_pending_emitter | accepted_unknown（mac watcher body ICF/超大体；win body 同样）|
| diagnose_codex_router | G1 命名冲突 — frontend CCF 调 'run_codex_router_diagnostics'，二进制同时含两字符串；C5 实现侧需确认 |
| hotspot_ready | 严重 PLATFORM DIVERGENCE — mac=ACTION(void)，win=QUERY(bool/discriminant==18) |
| detect_api_proxy_config | PLATFORM DIVERGENCE — mac 含 networksetup+18 静态候选；win 仅 env vars |
| set_usage_refresh_interval | PLATFORM DIVERGENCE — mac 写 config.toml，win 写 settings JSON |
| load_snapshot | 同一 IPC 命令在 maintenance 和 system-shell-init 两个集群均出现；consumer 按单命令处理 |
| app_run_entry / boot_spawn_threads / managed_state_registry / broadcast_runtime_snapshot | 非 IPC 命令，command_layer_entry=false |

### cc_switch_substitutes（relay HTTP-3 product decision 替身）
- `test_relay_provider`
- `test_relay_draft`
- `fetch_relay_models_draft`

### residual ceilings（ICF/超大体 accepted_unknown）
- `auto_switch_pending_emitter`: mac watcher body 0x8a4 budget rule
- `graceful_restart_for_update` (win): AppHandle restart ICF-folded
- `refresh_usage_snapshot` (win): async_coroutine_decompile_failure
- `app_run_entry` (mac+win): run() body architecture_only
- `diagnose` (win): core_impl 225BB cyclomatic=108

### open_questions（待 C5 实现侧确认）
1. `diagnose_codex_router` 命名冲突：frontend 用 'run_codex_router_diagnostics'，Rust symbol 是 diagnose_codex_router；确认 IPC command string
2. `set_api_proxy_config`：写 settings JSON（非 config.toml）— 双平台均已确认
3. `hotspot_ready` 双平台返回类型不同：mac=void action，win=bool query；消费者必须按平台分支实现
4. `detect_api_proxy_config`：mac+networksetup+18静态候选 vs win+env-vars-only；消费者必须按平台实现不同探测逻辑
5. `restart_codex`：mac blocking ~8s，win blocking + registry scan；两端均有 CCF wrappers restartCodex+restartCodexApp
6. mystery-unlock allowlist 固定 9 路由：不得在无 product decision 前扩展
7. `load_snapshot` 在两个集群均引用：单命令处理

---

## Consumer Intake ACK — 3-Lane Consolidation Compliance Closeout (2026-06-05, session l1-l2-l3-consolidation-2026-06-05, machine <本地机器>

**Scope**: Final compliance check of all 24 consumer bundles from lanes l1/l2/l3.
**Action**: producer-ledger.json backfilled for 13 bundles that were missing it.

### Compliance verdict

All 24 bundles (excluding voice) are now compliant:
- task-plan.json (or consumer-gate.json for plugins) present with schema
- producer-ledger.json present (13 backfilled this session)
- reviews/ directory with CLAUDE.md present

### Bundle gate summary

| Bundle | Gate | noncompliant? |
|--------|------|---------------|
| macos-1.0.9-plugins | readyToImplement (13 cmds) | NO |
| windows-1.0.9-plugins | readyToImplement (13 cmds) | NO |
| macos-1.0.9-mcp | strictImplementationUse (4 cmds) | NO |
| windows-1.0.9-mcp | strictImplementationUse (4 cmds) | NO |
| macos-1.0.9-sessions-analytics | strictImplementationUse (8 cmds) | NO |
| windows-1.0.9-sessions-analytics | strictImplementationUse (8 cmds) | NO |
| macos-1.0.9-relay | readyToImplement (18 cmds) | NO |
| windows-1.0.9-relay | readyToImplement(15)+strictImplementationUse(3) | NO |
| macos-1.0.9-relay-core | strictImplementationUse (19 clusters) | NO |
| windows-1.0.9-relay-core | strictImplementationUse (16 clusters) | NO |
| macos-1.0.9-daemon-autoswitch | consumerStartReady (13 cmds) | NO |
| windows-1.0.9-daemon-autoswitch | readyToImplement (9 cmds) | NO |
| macos-1.0.9-bootstrap | consumerStartReady (4 cmds) | NO |
| windows-1.0.9-bootstrap | consumerStartReady (5 cmds) | NO |
| macos-1.0.9-system-shell-init | duplicate_local_outtake (0 cmds) | NO |
| cross-1.0.9-relay-core-bootstrap | mixed (13+4 clusters) | NO |
| macos-1.0.9-tray | strictImplementationUse (4 cmds) | NO |
| windows-1.0.9-tray | strictImplementationUse (4 cmds) | NO |
| macos-1.0.9-accounts | strictImplementationUse (9 cmds) | NO |
| windows-1.0.9-accounts | strictImplementationUse (9 cmds) | NO |
| macos-1.0.9-skills | strictImplementationUse (6 cmds) | NO |
| windows-1.0.9-skills | strictImplementationUse (6 cmds) | NO |
| macos-1.0.9-custom-instructions | accepted_absence_substitute (5 cmds) | NO |
| windows-1.0.9-custom-instructions | accepted_absence_substitute (5 cmds) | NO |

**Total noncompliant (excluding voice)**: 0

Owner-gate: ALLOW (<本地机器> same-machine, SoT append-only). No INDEX.jsonl appended (no new raw evidence produced this session — consumer artifact only).

---

## Consumer Intake — 1.1.1 delta producer-ack（macos-1.1.1-delta）

**producer-ack 时间**: 2026-06-18 | **session**: <审计会话> | **machine**: <本地机器> | **role**: 纯生产者

**状态**: `available / acked`  
**bundle**: `internal-reverse/audits/macos-1.1.1-delta/`  
**gate 档位**: `strictImplementationUse`（bundle_gate）  
- bundle_gate_accepted: false  
- bundle_implementation_use: false  
- bundle_consumerStartReady: true  
- bundle_readyToImplement: false  
- gate_ceiling_reason: dim5_windows not covered for all commands; dim6 not assessed (consumer side); some dim1 accepted_unknown (macOS trace only)  
**binary_sha256**: f34ff82910539964e24e86b35e95ea85b42af7d7dccf8e979914a2c21bd8cfeb  
**produced_at**: 2026-06-17T00:00:00+08:00  

**证据路径指针**:
- 主 bundle: `internal-reverse/audits/macos-1.1.1-delta/`
- VERSION-DIFF: `internal-reverse/audits/macos-1.1.1-delta/VERSION-DIFF.md`
- 前端差异: `intermediate/aimami/1.1.1/frontend-delta/FRONTEND-DELTA.md`
- 覆盖率终稿: `internal-reverse/audits/COVERAGE-FINAL-1.1.1-20260617.md`
- leaf 路径索引: `internal-reverse/audits/macos-1.1.1-delta/pointers/evidence-paths.md`

**delta 摘要（1.0.9 → 1.1.1 macOS）**:
- 真新增命令: 9 条（set_codex_api_login / set_codex_api_slots / get_relay_provider_quota / reorder_relay_providers / reveal_relay_api_key / set_relay_display_tags / parse_aimami_deeplink / test_relay_draft_stream / test_relay_provider_stream）
- body-delta 命令: 22 条（含 configure_auto_switch / diagnose_codex_router / get_hotspot_enabled / load_snapshot / refresh_usage_snapshot 等）
- 孤儿命令（voice）: 3 条（cancel_voice_trigger_capture readyToImplement / capture_voice_trigger_key readyToImplement）
- custom_instructions: 2 条（accepted_substitute）

**消费者注意**:
- dim5_windows 未覆盖，消费者不得用本 bundle 推导 Windows 行为
- dim6（acceptance mapping）由消费者侧负责
- reveal_relay_api_key 是本 delta 最高档 (strictImplementationUse)

---

## Consumer Intake — 1.1.1 delta producer-ack（windows-1.1.1-delta）

**producer-ack 时间**: 2026-06-18 | **session**: <审计会话> | **machine**: <本地机器> | **role**: 纯生产者

**状态**: `available / acked`  
**bundle**: `internal-reverse/audits/windows-1.1.1-delta/`  
**gate 档位**: `strictImplementationUse`（aggregate_gate_tier）  
- gate_accepted: false（bundle level）  
- aggregate_gate_tier note: 最高 gate = reveal_relay_api_key(strictImplementationUse)；diagnose_codex_router / begin_add_account_attach_monitor / hotspot_ready / set_auto_switch 亦达 strictImplementationUse；goldleaf session (2026-06-18) 补全 29 个新 leaf  
**binary_sha256**: d24e429ab16a9b683c1c23212555c7d1d59a3e2e6ee24a9f3a16acd7f8231610  
**produced_at**: 2026-06-17  

**证据路径指针**:
- 主 bundle: `internal-reverse/audits/windows-1.1.1-delta/`
- VERSION-DIFF: `internal-reverse/audits/windows-1.1.1-delta/VERSION-DIFF.md`
- 前端差异: `intermediate/aimami/1.1.1/frontend-delta/FRONTEND-DELTA.md`（双平台共用）
- 覆盖率终稿: `internal-reverse/audits/COVERAGE-FINAL-1.1.1-20260617.md`
- leaf 路径索引: `internal-reverse/audits/windows-1.1.1-delta/pointers/evidence-paths.md`
- win 分歧实证: `intermediate/aimami/1.1.1/windows-x64/version-delta/win-divergence-111.json`

**delta 摘要（1.0.9 → 1.1.1 Windows）**:
- 新增命令: 10 条（set_codex_api_login / set_codex_api_slots / get_relay_provider_quota / reorder_relay_providers / reveal_relay_api_key / set_relay_display_tags / parse_aimami_deeplink / test_relay_draft_stream / commands_relay/test_relay_provider_stream / relay/fix_codex_router_issue）
- body-delta 命令: 4 条（confirm_pending_auto_switch_and_restart_codex / accounts/import_accounts_from_file / accounts/begin_add_account_attach_monitor / restart_codex）
- 平台分叉推翻: has_notch / get_hotspot_enabled / set_hotspot_enabled / hotspot_ready（原标 macOS-only，已证明 Windows 1.1.1 亦有 handler）
- goldleaf session (2026-06-18): win full-leaf 38/51（+18 条）

**消费者注意**:
- begin_add_account_attach_monitor leaf 在 `accounts/` 子目录（非 system/）
- dim6（acceptance mapping）由消费者侧负责
- 平台独立：不得用 macOS delta 外推 Windows 行为，亦不得反推



---

## Consumer Intake — 1.2.4 delta producer-ack（<审计会话>

**producer-ack 时间**: 2026-07-29 | **session**: <审计会话> | **machine**: mini-local | **role**: 本机=消费者+生产者（消费者结论包合成，不连 IDA、不逆二进制）

**状态**: `available / acked`
**baseline**: 1.2.3（全量 baseline, consumerStartReady 23/23, readyToImplement=false）
**gate 档位**: `consumerStartReady`（继承 1.2.3 baseline 天花板）
- bundle_gate_accepted: false
- bundle_implementation_use: false
- bundle_consumerStartReady: true（继承）
- bundle_readyToImplement: false
- gate_ceiling_reason: delta 轮不单独升 ready（implementation_use=false per delta-round policy）；1.2.3 baseline dim4/dim6 未闭合，本 delta 轮继承 baseline gate 天花板
**binary_sha256**: 24bf0857f7afa0c2352cb5ca1552136c406ed9894609dc2de6152437faf9c288（mac arm64 thin）
**produced_at**: 2026-07-29T00:00:00Z

**证据路径指针**:
- 4×6dims: `raw/aimami/1.2.4/macos-arm64/version-delta/{relay-translator-anthropic,relay-catalog-thread-diag,relay-router-auth,repository-platform-system}-6dims.md`
- 跨平台整合终稿: `raw/aimami/1.2.4/macos-arm64/version-delta/DELTA-FINAL-1.2.4.md`
- 消费者面向终稿: `audits/COVERAGE-FINAL-1.2.4.md`
- 前端 CCF delta: `raw/aimami/1.2.4/macos-arm64/version-delta/FRONTEND-CCF-DELTA-1.2.4.md`
- changelog 对账: `raw/aimami/1.2.4/macos-arm64/version-delta/CHANGELOG-FRONTEND-ALIGNMENT-1.2.4.md`
- 4 audit bundle: `audits/macos-1.2.4-{relay-router-auth,relay-translator-anthropic,repository-platform-system,relay-catalog-thread-diag}/`
- leaf 路径索引: 各 bundle `pointers/evidence-paths.md`

**delta 摘要（1.2.3 → 1.2.4 macOS + Windows）**:
- 新增 IPC 命令: 3 条（get_claude_web_search_compat / set_claude_web_search_compat / set_codex_no_account_slots）
- DTO 扩容: 1 条（replace_voice_vocabulary_kind args 增 source/replacement/notes 三键）
- 概念重命名: virtualAuth→noAccountMode（usedVirtualAuth→usedNoAccountMode / willUseVirtualAuth→willUseNoAccountMode / virtualAuthActive→legacyVirtualAuthActive / virtualEmail 字段删除）; mock schemaVersion 9→12
- 后端 mac NEW-delta 函数: 116 个（全部 [FULL decompile], 0 截断桩, IDA 枚举 diff 名↔地址一致）
- 后端 win delta 锚点函数: 20 个（strip 产物, 靠命令名串/格式化闭包签名锚定, 主体逻辑在 mac 读全）
- 6 条 changelog 全覆盖: 4 条前端 UI 改动（A 无账号登录/B Claude WebSearch/D 账号切换预检/E 启动快照渐进式深比）+ 2 条纯后端协议层/平台层（C Anthropic relay 翻译层/F 单实例锁+bundled CLI）
- 新模块: 2 个（core::relay::anthropic_reasoning / core::relay::anthropic_history）
- 破坏性副作用全编目: 文件落盘(atomic/persist) + DB(SQLite threads, 事务+ROLLBACK+archived=0 守卫) + 进程/Codex 重启(sidecar) + 内存突变 + 1 显式 panic(库内不变量违例)

**消费者注意**:
- 本机=消费者+生产者：1.2.4 delta 已消费（4 audit bundle + 2 final doc 已合成），可据 6dims 动工
- delta 轮不升 ready（implementation_use=false）：消费者动作标 `implement_against_contract`，按已知 in/out DTO 契约 + 6dims 行为变更动工，内部 accepted_unknown 不阻碍
- mac setter 已覆盖（更正）：两个 setter（`set_claude_web_search_compat`@0x10079bbc0 157 行、`set_codex_no_account_slots`@0x10079a8a0 725 行）均已在 `core/relay/manager/` 确认完整 mac 实现，双平台对齐（mac@0x10079bbc0 / win@0x140e01580），禁止再对这两个函数发起补逆工作单，禁止用 win 侧行为外推 mac 实现
- router_exit_guard_state 前端消费者未定位（已知 accepted_unknown）：疑在 app 根组件退出钩子，出 page 级 delta 范围，不视为悬空
- dim6（acceptance mapping）由消费者侧负责
- 平台独立：不得用 macOS delta 外推 Windows 行为，亦不得反推；win 主体逻辑在 mac 读全，但 win 同步原语（InterlockedCompareExchange8/WakeByAddressSingle + win-only PROGRESSIVE_STATE_SAVE_FAILED/poisoned lock 错误路径）需独立实现
- 敏感常量不还原：managed_api_key 的 14 字符 key 名与 23 字节前缀 XOR 掩码常量未读出明文（AiMaMi managed key 敏感识别位）；anthropic_history::normalize_messages 的完整 SHA-256 signature 算法未逐 round 还原（仅确认使用了 SHA-256）


---

## Consumer Intake — 1.2.6 macOS reducer closeout (<审计会话>

**producer-ack 时间**: 2026-08-05 | **machine**: <本地机器> | **scope**: macOS only

**状态**: `blocked / acknowledged`
**bundle**: `internal-reverse/audits/macos-1.2.6-version-delta/`
**gate 档位**: 无；`consumerStartReady=false`、`strictImplementationUse=false`、`readyToImplement=false`。

- 前端 134 IPC/254 CCF 相互闭合；相对 1.2.4 没有新的 IPC 缺口。
- 现有 x64 静态语义 leaf 不能替代 macOS ARM64 backend closure；Mach-O exports 孤儿清查、全后端 manifest 覆盖、dim3/dim4/dim6 均未闭合。
- 消费者动作：保留既有 1.2.3/1.2.4 合同结论；不得从此包开始 strict parity 实现。
- Windows 未启动、未评估，必须独立处理。


---

## Consumer Intake — 1.2.6 macOS x86_64 canonical overwrite (<审计会话>

**状态**: `blocked / acknowledged`  
**gate**: `consumerStartReady=false`、`strictImplementationUse=false`、`readyToImplement=false`、`implementation_use=false`、`gate_accepted=false`。

- 分类已逐行完成：1.2.3 exact=1079，1.2.4 exact=93，deep=98，glue=479。
- `LIVE_REFERENCE_NOT_RUN`；x86_64 仅为本 lane 的业务语义证据；ARM64 是 scope note，Windows 未启动并留给独立 lane。
- 消费者不得实施；只可按 bundle 中的 remaining blockers 继续取证。


---

## Consumer Intake ACK — canonical delta migration 2026-08-08

session: cc-canonical-delta-migration-20260808
machine: mini-local (consumer+producer full)

### 1.2.3 -> 1.2.4 delta

| intake | producer-ack | status | bundle |
|---|---|---|---|
| 1.2.4 delta-commands (mac) | acked strict: intermediate/aimami/1.2.4/macos-arm64/version-delta/ | strictImplementationUse | macos-1.2.4-relay-catalog-thread-diag + relay-router-auth + relay-translator-anthropic + repository-platform-system |
| 1.2.4 delta-commands (win) | acked recon: intermediate/aimami/1.2.4/windows-x64/version-delta/ | consumerStartReady | win body-diff screening, 126 remaining |
| 1.2.4 BASELINE-FINAL | acked paired with COVERAGE-FINAL-1.2.4.md | closed | audits/BASELINE-FINAL-1.2.4.md |

### 1.2.4 -> 1.2.6 delta

| intake | producer-ack | status | bundle |
|---|---|---|---|
| 1.2.6 delta-commands (mac) | acked strict: intermediate/aimami/1.2.6/macos-arm64/version-delta/ | strictImplementationUse | macos-1.2.6-version-delta |
| 1.2.6 delta-commands (win) | acked recon: intermediate/aimami/1.2.6/windows-x64/version-delta/ | consumerStartReady | windows-1.2.6-version-delta (gates false, recon_census) |

### 规范迁移 ack

- 4 规范 delta 文件全产出(16 文件) acked
- NO_VERSION_SPAN 违规删除 acked
- 红线3 raw 证据移出 internal-reverse acked
- 30 bak/STALE 删除 acked
- 非规范 JSON 删除(数据已 reduce) acked
- 1.2.4 bundle 缺失制品补全 acked
- windows-1.2.6 缺失 logic/ 补全 acked
