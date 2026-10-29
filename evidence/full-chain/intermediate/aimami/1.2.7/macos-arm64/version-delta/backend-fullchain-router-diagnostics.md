# backend-fullchain-router-diagnostics.md — AiMaMi 1.2.7 智能路由重构深 diff

- session: `<审计会话>`（macos-arm64）
- 命令面变化: `get_codex_router_auth_readiness`（删）→ `run_codex_router_diagnostics` / `fix_codex_router_issue`（增）；`set_codex_no_account_slots`（删，收编路由重构）
- 后端面变化: `core::relay::codex_diagnostic` +23/−10；`RelayManager::fix_diagnostic_issue` → `DiagnosticRepairOutcome`；`router_unlock_auth` 29→14 fns

---

## 1. `run_codex_router_diagnostics` → `core::relay::codex_diagnostic::run_diagnostics_with_mode`

- **dim2**: EA/census 事实 sz=40131 bb=1243，**103 callees**，伪代码 199554 字符（无截断标记，写盘 `decomp-1.2.7/0065__…`）。这是 1.2.7 最大新增逻辑面之一。
- **诊断项清单**（字面量证据，即检查器 key）：
  `config_access` / `router_recovery_record` / `config_replace_readiness` / `proxy_running` / `router_postcondition` / `thread_history_integrity` / `native_off_invalid_openai_thread_models` / `thread_response_item_ids` / `residual_manifest` / `residual_cache` / `relay-state-cache` / `official_catalog_freshness` / `api_key_integrity`
- **实现叶（dim3）**: `platform::process` 进程扫描（`ps -ax -o etime=,comm=`，mac 专用命令面；`CFBundleShortVersionString` 读取）+ config 文件读 + 状态缓存读 + catalog 新鲜度（HTTP/文件）。
- **dim4**: 输出=诊断项集合（key+status）；每项独立成败；无副作用（只读诊断）。

## 2. `fix_codex_router_issue` → `codex_diagnostic::fix_issue` + `RelayManager::fix_diagnostic_issue`

- `fix_issue`（34 callees，bb=99）：issue key → 分发到对应 fix_* 实现。
- `RelayManager::fix_diagnostic_issue`（47 callees，bb=196）：字面量 `Codex router transition lock is poisoned` / `repairing Codex diagnostics` / `router_postcondition` / `diagnostic repair`；输出类型 `DiagnosticRepairOutcome`（3 个相关符号：构造/serde）。
- **fix_* 家族**（1.2.7 可用修复器，字面量+规模证据）：

| fix 函数 | 规模 | 要点 |
|---|---|---|
| `fix_all` | 29 callees，89.8KB | 前置：`diagnostic fix-all requires a verified ChatGPT quiet window`（静默窗校验）；覆盖 `auth_integrity` `router_unlock_auth_residue` `takeover_backup_orphan` `config_toml_syntax` `config_third_party` `config_profile_conflict` `config_stale` `router_http_contract` `catalog_integrity` `catalog_path_validity` `rollout_orphan_providers` `db_orphan_providers` |
| `fix_orphan_thread_providers_with_catalog` | 105 callees，168KB | 孤儿线程 provider 收养：`thread-provider-adoptions` / `session_meta anchors are missing` / `permanentAdoption` / `fallbackModel` / `databaseBackups`；SQL 事务 COMMIT/ROLLBACK；`last-wal-shm` 占用探测（lsof） |
| `fix_thread_poisoned_instructions` | 54 | 识别并清理注入的系统提示词（poison 串 `Follow the user's instructions carefully…`） |
| `fix_config_third_party_text` | 37 | 第三方段隔离：`# >>> aimami-relay codex-router top start (DO NOT EDIT MANUALLY)` 标记；识别 `cc-switch`/`cc_switch`/`codex-switch` 外来段 |
| `fix_config_toml_syntax_text` | 21 | config.toml 语法修复 |
| `fix_state_db_relocation` | 29 | `state_db_relocation`；`-wal`/`-shm` 残留与占用探测（lsof） |
| `fix_thread_response_item_ids` | 16 | `thread_response_item_ids` 修复 |
| `rollback_orphan_thread_adoption` | 20 | 收养回滚：条件 UPDATE（`WHERE id=?2 AND COALESCE(archived,0)=0 AND model_provider=?3` + model/reasoning_effort 条件变体）；事务 COMMIT/ROLLBACK |
| `RelayManager::set_codex_router_enabled` closure | bb 5→30 | 路由开关设置面扩展 |

- **dim4**: 修复器有事务纪律（COMMIT/ROLLBACK/备份 databaseBackups/config-backups）；破坏性写集中在 config/threads 表，均有 backup + quiet-window 前置。

## 3. `router_unlock_auth` 收缩 + `live_auth_state` 重写（红线32: bb 14→42）

- 模块 29→14 fns：`write_json` / `read_marker` / `managed_api_key` 等 readiness 支撑面删除（对应 IPC 删除 `get_codex_router_auth_readiness`）。
- `live_auth_state`（8 callees）：字面量 `auth_mode` / `OPENAI_API_KEY` / `tokens` —— 从 1.2.6 的 readiness 标记读改为**活体凭据状态推断**（读 auth.json/tokens 结构）。
- 保留面: `has_residue` / `marker_exists`（bb 3→11）/ `cleanup_unlocked` / `read_cleanup_backup`（bb 58→105）——清理与备份校验面反而增强。

## 4. router_transition 装配（`run_with_environment` 3 变体，sz 17.5-18.2KB）

字面量状态机: `stopping_codex` → `stop_complete` → `reconciling` → `postcondition_failed`/`settle_failed` → `reconcile_retry` / `stop_failed` / `retry_exhausted`；埋点 `start/url/elapsedMs/firstToken/ok/firstTokenMs/totalMs`；联动 `diagnostic repair` / `router_postcondition`。
- 判读: 路由切换生命周期与诊断修复闭环（postcondition 失败 → 诊断 → 修复 → 重试）=「智能路由加载逻辑重构」的编排面。

## 5. 1.2.6 已有底子、1.2.7 正式命令化

盘点轮 strings 普查：`fix_codex_router_issue` / `run_codex_router_diagnostics` 字符串在 1.2.6 win 已存在（诊断文案/实现底子），1.2.7 正式注册为 IPC 命令并扩展为 `run_diagnostics_with_mode` 双模式 + `DiagnosticRepairOutcome` 结构化结果。1.2.6 的 codex_diagnostic 证据束见 `raw/aimami/1.2.6/macos-arm64/core/relay/codex_diagnostic/`。

## 6. 平台门与 Unknown

- mac: 全部 live IDA 证据。win: `run_diagnostics_with_mode` 的进程扫描叶在 win 必为不同实现（mac 用 `ps`），win 侧进程枚举叶未逆（本轮 census 级；下轮 win 深恢复时须专项核对 `platform::process` 差异）。
- `DiagnosticRepairOutcome` 的字段级 DTO 未逐字段命名（serde 序列化面已定位）；`fix_issue` 的 issue-key 全集以 fix_all 覆盖清单为准推断，未逐分支核（建议消费侧实现前对 `fix_issue` 做一次定向 decompile 复核）。
