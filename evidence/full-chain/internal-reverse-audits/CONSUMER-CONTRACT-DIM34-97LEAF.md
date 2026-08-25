# macOS 1.2.3 dim3/dim4 97-leaf 字段级自足消费者合同（consumer contract）

> session: `cc-consumer-reduce-mac123-dim34-97leaf-20260818`
> 性质：消费侧归约收口终稿。本轮把 mac 1.2.3 97 个 raw leaf 的 dim3（`call-tree.json` 追真调用树到 semantic leaf）+ dim4（`interface-report.json` 的 `dto_boundary` / `error_envelope` / `side_effects`）分片结果归约成消费者自足合同，消费者（实现侧）只读本文件即可得到 DTO/error/副作用/Unknown 分类，无需翻 raw。
> 授权：仓主本人对话确认 AiMaMi 为自家/已获书面授权产品并下达复刻/逆向工作。本文档只做消费者视角合同提炼，不提升任何实现门。
> 反造假立场：每一条 DTO 字段/副作用/Unknown 均以磁盘已落盘的 `raw/aimami/1.2.3/macos-arm64/*/interface-report.json`（97 份）+ `call-tree.json`（97 份）为准，逐条可追溯。本轮是**归约重组**，不是重新逆向：零 IDA 调用、零 IDB 写回、零 raw leaf 重写。

---

## 0. 总账（grounded，2026-08-18 现场读盘）

| 指标 | 数值 |
|---|---|
| mac 1.2.3 raw leaf 总数（含 call-tree.json + interface-report.json） | **97** |
| dim3 call-tree（dim3 追 leaf） | 97 份 `call-tree.json`；82 leaf 有 `semantic_leaves`（合计 235）；26 leaf 有 `destructive_functions`；edge_count 1–259；`terminated_reason` 全 None |
| dim4 字段级 DTO 条目总数 | **134** |
| — 非 voice 字段数据（nfields>0） | **107**（= 20 干净可校验 + 87 长度表不可靠） |
| — 非 voice 仅类型名（nfields==0） | **13** |
| — voice out-of-scope（active=0） | **14**（11 字段数据 + 3 仅类型名） |
| 134 = 107 + 13 + 14 账目闭合 | ✅ |
| dim4 source | 97 份 `interface-report.json`，`dim4_resolution_session=wf-aimami123-macos-dim3dim4-20260816` |
| dim3 source | 97 份 `call-tree.json`，`dim3_resolution_session=wf-aimami123-macos-dim3dim4-20260816` |
| 实现门（consumerStartReady / strictImplementationUse / readyToImplement / implementation_use / gate_accepted） | **全部 false**（dim6 留白 + 红线25 live-reference 未对照） |

- **字段级闭合诚实口径（红线31/红线20/红线14）**：`dto_boundary` 的 `serialize_entry_key_literal`（serialize_entry 键字面量串）与 `serialize_entry_field_lengths`（字段边界长度表）并非可靠字段边界记录——只对 **20 个 DTO** 满足 `sum(field_lengths)==len(key_literal)`（干净可校验字段名）；其余 **87 个 DTO** 长度表与字面量串不匹配（缺尾字段/溢出/字面量过宽），字段名不可靠校验。详见 §1、§6。
- **红线8 平台边界**：本文件只覆盖 `macos-arm64`，且为 mac 本地 live IDA `serialize_entry` 键字面量提取（**非** crossmap 推断）——mac 带符号，可 live 提取 serde `Serialize` impl 的 `serialize_entry` 键字面量；Windows 侧（strip 无符号）由 `windows-1.2.3-version-delta/logic/CONSUMER-CONTRACT-DIM34-68LEAF.md` 经 mac 同源 crossmap 推断，二者互不外推。
- **红线25**：本轮未做真机/live-reference 对照，dim6 留白。
- 本文件是 `CONSUMER-CONTRACT-NONVOICE-107.md`（模块级 dim1-5 状态，session `cc-consumer-reduce-mac123-nonvoice107-20260815`）的**字段级补充**：前者覆盖 18 个 module bundle 的 dim1/dim2/dim5/dim6 状态，本文件覆盖 97 leaf 的 dim3/dim4 字段级 DTO/error/副作用/Unknown。两者合读即消费者完整合同。

---

## 1. dim4 字段级 DTO 清单（grounded，逐 leaf interface-report.json）

> 分四组：A. 20 干净字段级（`sum(field_lengths)==len(key_literal)`，字段名可校验）；B. 87 长度表不可靠（字段数据在盘但字段边界不校验）；C. 13 仅类型名（nfields==0）；D. 14 voice out-of-scope（不计 active）。
> 字段列表为 `serialize_entry_key_literal` 按 `serialize_entry_field_lengths` 拆分；仅 A 组可校验，B 组类型名已确认但字段名须回 raw 拆串或重反编译确认（见 §6）。

### A. 20 干净字段级 DTO（字段名可校验，mac live IDA serialize_entry 键字面量）

| leaf | DTO 类型（字段） |
|---|---|
| commands/accounts | `RuntimeStateUpdatedPayload`（`snapshot`,`source`,`accountKey`） |
| commands/autostart | `AutostartState`（`enabled`,`userConfigured`） |
| commands/relay | `CodexRouterDiagnostic`（`router_enabled`,`proxy_running`,`proxy_port`,`proxy_last_error`,`activeCodexProviders`,`codex_provider_count`,`catalog_path`,`catalog_exists`,`config_toml_has_router`,`config_toml_has_catalog`,`user_top_level_profile`,`config_stale_reason`,`summary`）、`CodexRouterTogglePayload`（`state`,`codexLaunchError`,`usedVirtualAuth`,`warnings`） |
| core/analytics | `UsageAnalyticsPayload`（`today`,`sessionStats`,`dailyActivity`） |
| core/auth | `AuthFile`（`auth_mode`,`OPENAI_API_KEY`,`aimami_router_unlock_auth`,`tokens`,`last_refresh`）、`AuthTokens`（`id_token`,`access_token`,`refresh_token`,`account_id`） |
| core/bootstrap_cache | `BootstrapStatePayload`（`writtenAt`,`snapshotProgressive`,`usageAnalytics`,`mcpServers`） |
| core/debug_report_upload | `DebugReportUploadPayload`（`reportId`,`bytes`） |
| core/models | `ApiConfigPayload`（`proxy`）、`DiagnoseSessionState`（`latestRolloutFound`,`latestRolloutTimestamp`）、`SessionDeleteFailure`（`id`,`reason`）、`ApiConnectivityPayload`（`usageStatus`,`usageLastError`） |
| core/relay/config_takeover | `TakeoverSection`（`key`,`lines`） |
| core/relay/invariants | `Violation`（`dim`,`detail`） |
| core/relay/io | `RelayExportSummary`（`filePath`,`providerCount`,`includeApiKeys`） |
| core/relay/router_unlock_auth | `RouterUnlockAuthReadiness`（`hasUsableRealAuth`,`willUseVirtualAuth`,`virtualEmail`,`virtualAuthActive`,`canRestorePreviousAuth`） |
| core/relay/transition_journal | `RecentTransitionFailure`（`target`,`phase`,`occurredAtMs`,`reason`） |
| core/repository | `ApiConfig`（`usageRefreshEnabled`） |
| toplevel | `RouterExitGuardPayload`（`transitionInProgress`） |

### B. 87 长度表不可靠 DTO（类型名已确认，字段边界不可校验）

> `serialize_entry_field_lengths` 与 `serialize_entry_key_literal` 不匹配（缺尾字段 / 溢出 / 字面量过宽）。字段名原始证据在 raw leaf 的字面量串，但边界需回 raw 拆串或重反编译确认，本文件不伪闭合。

| leaf | 类型名（count） |
|---|---|
| commands/deeplink | `ImportDeeplinkPayload`（1） |
| commands/relay | `CodexRouterNoAccountModePayload`（1，长度表缺尾字段 `warnings`） |
| core/account_io | `ExportedAccount`（1，长度表溢出，字面量疑截断） |
| core/analytics | `SessionStats`、`TodaySummary`、`DailyActivity`、`CachedRolloutEntry`（4） |
| core/debug_bundle | `DebugBundlePayload`（1） |
| core/models | `AccountSummary`、`ApiModePayload`、`TokenDaySeries`、`ChangeDaySeries`、`DiagnosePayload`、`RateLimitWindow`、`AppStatusPayload`、`DaemonRunPayload`、`DiagnoseApiState`、`DiagnosePlatform`、`McpServerSummary`、`SessionDaySeries`、`SkillListPayload`、`OauthLoginPayload`、`AccountTokenStatus`、`ImageCompatPayload`、`SessionListPayload`、`SkillBackupSummary`、`SkillImportPayload`、`SkillRemovePayload`、`ApiProxyTestPayload`、`CoreSnapshotPayload`、`SkillRestorePayload`、`AccountExportPayload`、`AccountImportSkipped`、`AccountImportPayload`、`AccountRefreshReport`、`McpServerListPayload`、`RefreshChannelReport`、`SessionDeletePayload`、`SessionExportPayload`、`ToolAnalyticsPayload`、`ApiProxyConfigPayload`、`ApiProxyDetectPayload`、`DiagnoseRegistryState`、`ForceKillCodexPayload`、`InstalledSkillSummary`、`TokenAnalyticsPayload`、`ChangeAnalyticsPayload`、`McpServerRemovePayload`、`PerModeShortcutPayload`、`RebuildRegistryPayload`、`SkillBackupListPayload`、`AutoSwitchConfigPayload`、`AutoSwitchStatusPayload`、`SessionAnalyticsPayload`、`McpServerMutationPayload`、`PendingAutoSwitchPayload`、`SkillDeleteBackupPayload`、`AccountImportPreviewEntry`、`AccountImportPreviewPayload`、`SessionWorktreeMigrationInfo`、`SessionMigrateWorktreePayload`、`CoreWarning`、`AppPathState`、`CleanPayload`、`CodexSession`、`ToolRankItem`、`LogoutPayload`、`RemovePayload`、`SwitchPayload`（61，`core/models` 共享 DTO 定义集） |
| core/quota_history | `QuotaHistoryPoint`、`QuotaHistoryPayload`（2） |
| core/quota_store | `QuotaStoreItem`（1） |
| core/relay/codex_diagnostic | `FixResult`、`DiagnosticItem`（2） |
| core/relay/codex_thread_visibility | `ModelRestoreEntry`（1） |
| core/relay/io | `RelayImportSkipped`、`RelayImportSummary`、`RelayExportProvider`（3） |
| core/relay/manager | `RouterToggleProgress`（1） |
| core/relay/models | `RelayTestResult`、`RelayProxyStatus`、`RelayQuotaSnapshot`、`CodexRouteDiagnostic`（4） |
| core/repository | `RegistryFile`、`RegistryItem`、`HotspotConfig`、`AutoSwitchConfig`（4） |

### C. 13 仅类型名 DTO（nfields==0，类型名确认，字段名未落盘）

`AccountTokenStatusCode`、`PlanType`（core/models）；`DiagnosticReport`（core/relay/codex_diagnostic）；`ProjectStateInspection`（core/relay/codex_project_state）；`InvariantDim`（core/relay/invariants）；`RelayBrand`、`RelayState`、`RelayWireApi`、`RelayProvider`、`RelayModelEntry`、`RelayActiveByIde`（core/relay/models）；`TransitionJournal`（core/relay/transition_journal）；`MysteryRouteGrant`（core/repository）。

### D. 14 voice out-of-scope DTO（active=0，不计入本合同 active）

`VoiceCaptureState`（0）、`VoiceHistoryEntry`（19）、`VoiceTemplateKind`（0）、`VoicePromptTemplate`（7）、`VoiceGeneratePayload`（5）、`VoicePermissionState`（0）、`VoiceVocabularyEntry`（8）、`VoiceLlmConfigPayload`（5）、`VoiceWorkspacePayload`（6）、`VoiceRuntimeStatusPayload`（37）、`VoiceVocabularyAppPayload`（3）、`VoiceTemplateMutationPayload`（2）、`VoiceRuntimePermissionsPayload`（3）、`VoiceVocabularyMutationPayload`（2）——均 `codexmate_lib::core::voice::*`，全量 out-of-scope。

---

## 2. error envelope（统一模式，grounded）

- 97 份 `interface-report.json` 的 `error_envelope` **全一致**：`CoreEnvelope<T>::ok/ok_with_warnings/err 包裹；序列化失败走 serde_json::ser::invalid_raw_value`（模板值，非 per-leaf 差异化错误路径分析）。
- 消费者须知：mac 侧 dim4 错误处理停在「CoreEnvelope 统一包裹」层级，**未**逐 leaf 展开 Result/Option（sret 判别式）、HRESULT、int 返回等非 serde 错误路径；这些细节需回 raw leaf `.c` 反编译正文（`ida/pseudocode/*.c`）追。本文件不伪闭合 per-leaf 错误分支。

---

## 3. 破坏性副作用编目（⚠ 红线20）

> 26 个 leaf 的 `call-tree.json` 带 `destructive_functions`（非空），以下为现场读盘逐 leaf 汇总；其余 71 leaf `destructive_functions=[]`。

- **进程 kill / 退出**：`commands/accounts`（`finish_switch_failure`,`restore`）、`platform/daemon`（`uninstall_daemon`）、`platform/single_instance`（`acquire`,`request_existing_instance_activation_*`，写单实例锁/激活握手）、`run`（`run` 入口）。
- **删除 / remove_file / remove_dir_all**：`core/relay/config_takeover`（`remove_backup_file`,`restore`）、`core/relay/codex_catalog`（`remove_catalog`）、`core/relay/keychain`（`delete_key_file`）、`core/relay/legacy_virtual_auth`（`cleanup`,`remove_file_if_exists`）、`core/relay/router_unlock_auth`（`cleanup`,`remove_file_if_exists`）、`core/relay/transition_journal`（`clear`）、`core/repository`（`clear_auto_switch_transient_state`,`clear_pending_auto_switch_request`,`commit_and_purge` 等 9 项）、`core/sessions`（`delete_sessions`,`export_session_markdown`,`truncate_chars`）、`core/skills`（`delete_skill_backup`,`publish_staged_skill`,`remove_skill`）、`platform/debug_log`（`append_line` 截断写日志）、`platform/system_volume`（`clear_marker`）。
- **文件覆写 / 迁移 / 校验点**：`core/account_io`（`failure_after_snapshot_writes`,`parse_import_file`）、`core/relay/atomic_write`（`sync_parent_dir`,`write_atomic_with_mode`）、`core/relay/codex_diagnostic`（`backup_config_before_fix`,`fix_db_orphan_providers`,`fix_residual_cache`）、`core/relay/codex_thread_visibility`（`checkpoint_after_committed_write` SQLite WAL checkpoint、`cleanup_orphan_router_threads_strict`、`find_first_session_meta_line` 等 9 项）、`core/quota_history`（`append_snapshot_at`,`load_history`）。
- **非数据破坏但涉文件/临时清理**：`core/debug_bundle`（`read_tail_text`）、`core/debug_report_upload`（`TempBundleGuard` drop 清理）、`core/analytics`（`session_analytics_parse_all_sessions`,`visit_dir`）、`core/session_analytics`（`parse_all_sessions`）、`core/relay`（`TempFileCleanup` drop）。
- 逐命令破坏性副作用系统化闭合度：mac 侧 dim4 未逐命令闭合，上表为 call-tree 已标注的破坏性函数；`interface-report.json` 的 `destructive_side_effects_flagged` 全 False（模板值），不可作逐命令破坏性判定依据。

---

## 4. dim3 调用树（call-tree.json）summary

> 97 leaf 各含一份 `call-tree.json`，`edges` 为 callee/addr/type/sha256/destructive/semantic 结构，即「追真调用树到 semantic leaf」的分片结果。

- edge_count 范围 1–259；最大：`core/models`（259）、`core/repository`（243）、`run`（194）、`core/relay/codex_diagnostic`（193）、`core/relay/manager`（153）、`core/relay/codex_thread_visibility`（128）、`commands/accounts`（112）、`core/relay/proxy_server`（112）、`commands/system`（105）、`core/relay/translator`（99）。
- `semantic_leaves`（dim3 追 leaf）：82 leaf 有非空 semantic_leaves（合计 235），`dim3_semantic_leaf_session=wf-aimami123-macos-dim3dim4-20260816`。`semantic` 标注（persistence 等）落在 semantic_leaves 条目上。
- `destructive_functions` 非空 leaf：26 个（见 §3）。
- `terminated_reason`：97 份全 None（未显式标注 terminated），`leaf_status` 全 `reorganized_module_leaf`。dim3 未以 `terminated_reason` 收口的 leaf 需消费者结合 §6 判定。

---

## 5. voice 排除声明（active=0 硬门）

- voice 域 DTO（14 个，均 `codexmate_lib::core::voice::*`）全量 out-of-scope，不计入本合同 active。
- voice 域 leaf 不在 97-leaf 字段级归约 active 内（见 `audits/macos-1.2.3-voice/` 与 `CONSUMER-CONTRACT-NONVOICE-107.md` §5，voice bundle 39 命令 active=0）。

---

## 6. Unknown / blocks_start（诚实标注，不伪闭合）

- **字段长度表不可靠（红线31/红线20）**：87 个非 voice DTO 的 `serialize_entry_field_lengths` 与 `serialize_entry_key_literal` 不匹配（缺尾字段如 `CodexRouterNoAccountModePayload` 长度表 `[5,16,15]` 缺第 4 字段 `warnings`；溢出如 `ExportedAccount` sum=149 > len=96；过宽如 `core/models` 多数 DTO 字面量 300–804 字符含多 DTO 字段）。字段名原始证据在 raw leaf 的字面量串 + 长度表，但**边界不可校验**，消费者实现需字段级时须回 raw 拆串或重反编译（`ida/pseudocode/*.c`）。
- **仅类型名 DTO**（13 个，nfields==0）：类型名已确认、字段名未落盘；字段名见 raw `.c` 反编译正文 serde `Serialize` impl。
- **error_envelope 未逐 leaf 差异化**：97 份全为 CoreEnvelope 模板值，非 serde 错误路径（Result/Option sret、HRESULT、int 返回）未展开，须回 raw `.c`。
- **dim4 未闭合的本质**：mac 侧虽为 live IDA `serialize_entry` 键字面量提取（非 crossmap 推断），但 `serialize_entry_field_lengths` 字段在 87/107 非 voice DTO 上不可靠，故**无任何 leaf 达到逐命令字段级 serde 实测级 dim4 闭合**；干净可校验字段级仅 20 个 DTO（§1.A）。
- **dim3 terminated_reason 全 None**：97 leaf 未以 terminated_reason 收口，属诚实未标注，非伪造闭合。
- **live-reference 未对照**：红线25，dim6 留白。

---

## 7. 消费者读取指引

- 模块级 dim1-5 + unknowns → 本 bundle 同目录 `CONSUMER-CONTRACT-NONVOICE-107.md`（session `cc-consumer-reduce-mac123-nonvoice107-20260815`）。
- 本文件（dim3/dim4 字段级）→ 上文 §1/§2/§3/§4。
- 逐 leaf 字段级原始证据 → `raw/aimami/1.2.3/macos-arm64/<leaf>/interface-report.json` + `call-tree.json`（97 份）。
- 逐 leaf 反编译正文 → `raw/aimami/1.2.3/macos-arm64/<leaf>/ida/pseudocode/*.c`（字段名/错误路径终审依据）。
- 版本级终稿 → `audits/COVERAGE-FINAL-1.2.3.md` + `audits/BASELINE-FINAL-1.2.3.md`。
- 逐模块 bundle → `audits/macos-1.2.3-<module>/`（manifest.json / gate-report.json / logic/*.md / pointers/evidence-paths.md）。
