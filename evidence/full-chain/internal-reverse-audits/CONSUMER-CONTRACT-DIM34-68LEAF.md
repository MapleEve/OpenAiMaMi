# Windows 1.2.3 dim3/dim4 68-leaf 字段级自足消费者合同（consumer contract）

> session: `cc-consumer-reduce-win123-dim34-68leaf-20260817`
> 性质：消费侧归约收口终稿。本轮把 win 1.2.3 68 个 raw leaf 的 dim3（call-tree.json 追真调用树到 semantic leaf）+ dim4（interface-report.json / crossmap-dim4-win123-field-level.json 字段级 DTO）分片结果归约成消费者自足合同，消费者（实现侧）只读本文件即可得到 DTO/error/副作用/Unknown 分类，无需翻 raw。
> 授权：仓主本人对话确认 AiMaMi 为自家/已获书面授权产品并下达复刻/逆向工作。本文档只做消费者视角合同提炼，不提升任何实现门。
> 反造假立场：每一条 DTO 字段/副作用/Unknown 均以磁盘已落盘的 `raw/aimami/1.2.3/windows-x64/*/interface-report.json`（68 份）+ `crossmap-dim4-win123-field-level.json`（session `wf-aimami123-win-dim4-crossmap-20260817`）+ `call-tree.json`（68 份）为准，逐条可追溯。本轮是**归约重组**，不是重新逆向：零 IDA 调用、零 IDB 写回、零 raw leaf 重写。

---

## 0. 总账（grounded，2026-08-17 现场读盘）

| 指标 | 数值 |
|---|---|
| win 1.2.3 raw leaf 总数（含 call-tree.json + interface-report.json） | **68** |
| dim4 字段级 DTO 已匹配（crossmap `match=module_path_exact`，mac 同源推断） | **53** |
| dim4 未匹配 non-voice（win 本地 live decompile，conf=high/medium） | **11** |
| voice out-of-scope（active=0，conf=high，win 本地） | **4**（llm / runtime / tray / workspace） |
| 68 = 53 + 11 + 4 账目闭合 | ✅ |
| crossmap 源 | `raw/aimami/1.2.3/windows-x64/crossmap-dim4-win123-field-level.json`（40 KB，2026-08-17 11:30） |
| call-tree（dim3）源 | 68 份 `call-tree.json`（每 leaf 一份，edges 计数 3–327） |
| 实现门（consumerStartReady / strictImplementationUse / readyToImplement / implementation_use / gate_accepted） | **全部 false**（dim6 留白 + 红线25 live-reference 未对照） |

- **红线8 平台边界**：win 侧 DTO 字段名经 mac 同源 crossmap 推断（`cross_platform_inferred=true`），非 win 本地 serde 实测；win 本地 owner/handler 由 win live decompile 确认（见 crossmap `spot_check`）。两侧互不借证据。
- **红线25**：本轮未做真机/live-reference 对照，dim6 留白。
- 本文件是 `CONSUMER-CONTRACT-NONVOICE-54.md`（模块级 dim1-5 状态，session `cc-consumer-reduce-win123-nonvoice54-20260815`）的**字段级补充**：前者覆盖 18 个 module bundle 的 dim1/dim2/dim5/dim6 状态，本文件覆盖 68 leaf 的 dim3/dim4 字段级 DTO/error/副作用/Unknown。两者合读即消费者完整合同。

---

## 1. dim4 字段级 DTO 全量清单（grounded，逐 leaf interface-report.json）

> 以下分三组：A. 53 matched（mac 同源 crossmap，`cross_platform_inferred=true`）；B. 11 unmatched non-voice（win 本地 decompile，conf=high/medium）；C. 4 voice out-of-scope（不计 active）。
> 字段列表为 interface-report.json 的 `dto_boundary[].fields` 干净字段名；`fields=[]` 表示该 DTO 类型名已确认但字段名未在本轮字段级闭合（见 §6 Unknown）。

### A. 53 matched leaves（mac 同源 crossmap，cross_platform_inferred）

| leaf | DTO 类型（字段） |
|---|---|
| account_io | `ExportedAccount`（fields=[]，字段未闭合） |
| account_metadata | （无 DTO） |
| analytics | `SessionStats`、`TodaySummary`、`DailyActivity`、`CachedRolloutEntry`（均 fields=[]）、`UsageAnalyticsPayload`（`today`,`sessionStats`,`dailyActivity`） |
| atomic_write | （无 DTO，副作用 fs + fs_write） |
| auth | `AuthFile`（`auth_mode`,`OPENAI_API_KEY`,`aimami_router_unlock_auth`,`tokens`,`last_refresh`）、`AuthTokens`（`id_token`,`access_token`,`refresh_token`,`account_id`） |
| codex_catalog | （无 DTO） |
| codex_config | （无 DTO） |
| codex_diagnostic | `FixResult`（`fixedIds`,`failedIds`,`details`）、`DiagnosticItem`（`label`,`detail`,`fixable`）、`DiagnosticReport`（`items`,`transitionInFlight`） |
| codex_project_state | `ProjectStateInspection`（`path`,`text`,`data`,`unit`,`type`,`fullArgs`,`openWith`,`kind`,`save`,`uuid`,`emit`,`show`,`hide`） |
| codex_runtime | （无 DTO） |
| codex_thread_visibility | `ModelRestoreEntry`（fields=[]；副作用 error/fs/persistence/process） |
| codex_writer | （无 DTO） |
| codexmate_lib | `RouterExitGuardPayload`（`transitionInProgress`） |
| commands/account_io | （无 DTO） |
| commands/accounts | `RuntimeStateUpdatedPayload`（`snapshot`,`source`,`accountKey`） |
| commands/autostart | `AutostartState`（`enabled`,`userConfigured`） |
| commands/relay | `CodexRouterDiagnostic`（`router_enabled`,`proxy_running`,`proxy_port`,`proxy_last_error`,`activeCodexProviders`,`codex_provider_count`,`catalog_path`,`catalog_exists`,`config_toml_has_router`,`config_toml_has_catalog`,`user_top_level_profile`,`config_stale_reason`,`summary`）、`CodexRouterTogglePayload`（`state`,`codexLaunchError`,`usedVirtualAuth`,`warnings`）、`CodexRouterNoAccountModePayload`（`state`,`codexLaunchError`,`usedVirtualAuth`） |
| commands/system | （无 DTO） |
| commands/tray_menu | （无 DTO） |
| config_takeover | `TakeoverSection`（`key`,`lines`） |
| debug_bundle | `DebugBundlePayload`（fields=[]） |
| debug_log | （无 DTO，副作用 fs(log)） |
| debug_report_upload | `DebugReportUploadPayload`（`reportId`,`bytes`） |
| deeplink | `ImportDeeplinkPayload`（fields=[]） |
| dialects | （无 DTO） |
| fetch_models | （无 DTO，副作用 network） |
| health_check | （无 DTO，副作用 network） |
| image_compat | （无 DTO） |
| invariants | `Violation`（`dim`,`detail`）、`InvariantDim`（fields=[]） |
| io | `RelayExportSummary`（`filePath`,`providerCount`,`includeApiKeys`）、`RelayImportSkipped`（fields=[]）、`RelayImportSummary`（fields=[]）、`RelayExportProvider`（fields=[]） |
| keychain | （无 DTO，副作用 keychain） |
| legacy_virtual_auth | （无 DTO） |
| manager | `RouterToggleProgress`（`step`,`label`） |
| mcp | （无 DTO） |
| models | `RelayBrand`、`RelayState`、`RelayWireApi`、`RelayProvider`、`RelayModelEntry`、`RelayTestResult`、`RelayActiveByIde`、`RelayProxyStatus`、`RelayQuotaSnapshot`、`CodexRouteDiagnostic`（10 个类型名已确认，均 fields=[]；字段名见 crossmap `serialize_entry_key_literal` 原文，未逐字段拆解） |
| oauth_login | （无 DTO） |
| oauth_refresh | （无 DTO） |
| paths | （无 DTO） |
| plan_mapping | （无 DTO） |
| process | （无 DTO，副作用 process，call-tree 3 破坏性 edge） |
| proxy | （无 DTO，副作用 network） |
| proxy_passthrough | （无 DTO，副作用 network） |
| quota | （无 DTO） |
| repository | `RegistryFile`、`RegistryItem`、`HotspotConfig`、`AutoSwitchConfig`、`MysteryRouteGrant`、`ApiConfig`（6 个类型名已确认，均 fields=[]；字段名见 crossmap `serialize_entry_key_literal`，含 `schemaVersion/activeAccountKey/items/accountName/workspaceName/...` 完整串） |
| router_reconciler | （无 DTO） |
| router_transition | （无 DTO） |
| router_unlock_auth | `RouterUnlockAuthReadiness`（`hasUsableRealAuth`,`willUseVirtualAuth`,`virtualEmail`,`virtualAuthActive`,`canRestorePreviousAuth`） |
| sessions | （无 DTO，副作用 fs） |
| single_instance | （无 DTO） |
| skills | （无 DTO） |
| storage | （无 DTO，副作用 fs） |
| transition_journal | `TransitionJournal`（fields=[]）、`RecentTransitionFailure`（`target`,`phase`,`occurredAtMs`,`reason`） |
| translator | （无 DTO） |

### B. 11 unmatched non-voice leaves（win 本地 live decompile，非 mac 同源）

| leaf | conf | DTO/error（win 本地） |
|---|---|---|
| codex_config_reconciler | high | `reconcile`（sret 判别式）；无 serde struct 字段名；副作用 fs |
| codex_mutation | medium | `run`（lib.rs 入口）；Result/Option（sret），无 serde struct |
| commands/analytics | medium | 15 个 analytics command handler；字段 `range`,`repo`；`serialize_*_analytics_response` 为 serde Serialize 侧 |
| commands | medium | 53 个 tauri command handler；字段 `repo`,`state`；**destruct_flag=true**（1 破坏性 edge） |
| managed_blocks | medium | managed_blocks orchestration；Result/Option（sret），无 serde struct；副作用 fs |
| mod | high | dialects reasoning JSON patch（deserialize 侧 key）：`reasoning`,`reasoning_split`,`reasoning_effort`,`thinking`,`disabled`,`enabled`,`ultra/max/xhigh/high/medium/low/minimal`,`disfluency_removal_enabled`；Result unwrap panic 分支 |
| proxy_server | medium | relay proxy server（network）；Result/Option（sret）+ 网络错误码；副作用 network + persistence |
| session_analytics | high | session JSON parse（deserialize 侧 key，13 字段）：`type`,`timestamp`,`payload`,`total_token_usage`,`input_tokens`,`output_tokens`,`reasoning_output_tokens`,`total_tokens`,`name`,`arguments`,`/payload/type`,`/payload/info`,`/payload/timestamp`；副作用 fs |
| system_volume_windows | high | COM audio endpoint（win-only）；HRESULT→bool（CoCreateInstance/QueryInterface 失败返回 false），无 serde DTO；副作用 audio |
| text_injection_windows | high | foreground process path（win-only）：字段 `exe_path`；int 返回 + 出参 path，无 serde DTO；副作用 process |
| version-delta | high | `account_coordination` named-lock anchor；Result 判别式（-1 成功 / 10 错误枚举），无 serde struct |

### C. 4 voice out-of-scope leaves（active=0，不计入本合同 active）

| leaf | conf | dto_boundary 条目数 | 说明 |
|---|---|---|---|
| llm | high | 16 | `codexmate_lib::core::voice::llm` |
| runtime | high | 93 | `codexmate_lib::core::voice::runtime` |
| tray | high | 16 | `codexmate_lib::core::voice::runtime::tray` |
| workspace | high | 32 | `codexmate_lib::core::voice::workspace` |

> 注：这 4 个 leaf 的 `dto_boundary` 为字符串列表（非 dict 结构，故不参与 §A/B 字段级表）。voice 域全量 out-of-scope，active=0。

---

## 2. error envelope（统一模式，grounded）

- 绝大多数 leaf 的 `error_envelope` 一致：`CoreEnvelope<T>::ok/ok_with_warnings/err` 包裹；序列化失败走 `serde_json::ser::invalid_raw_value`。
- 非 serde leaf 的错误模式（见 §B）：
  - `codex_config_reconciler` / `codex_mutation` / `managed_blocks` / `proxy_server` / `version-delta`：`Result/Option`（sret 判别式）或自定义错误枚举（如 version-delta 的 -1 成功 / 10 错误）。
  - `mod`：`Result` unwrap panic 分支（无 serde Serialize struct）。
  - `system_volume_windows`：HRESULT→bool；`text_injection_windows`：int 返回 + 出参。
  - `commands` / `commands/analytics` / `session_analytics`：`CoreEnvelope<T>::ok/err` + Err 构造错误串回传 / deserialize 侧键。

---

## 3. 破坏性副作用编目（⚠ 红线20）

> win 侧 dim4 普遍非 closed，逐命令副作用未系统化闭合。以下为 call-tree.json / interface-report.json 里已确认的破坏性副作用，其余标 Unknown。

- **`commands`（destruct_flag=true，ct_destructive_edges=1）**：53 个 tauri handler 中 1 条破坏性 edge（kill 链）。
- **`commands/relay`（destruct_flag=true）**：side_effect 正则 `(?<![A-Za-z0-9])kill(?![A-Za-z0-9])`（kill 进程/子进程）。
- **`repository`（destruct_flag=true，6 类副作用）**：error / fs / http / persistence / process / response —— registry 落盘（atomic write auth.json / registry JSON）。
- **`process`（ct_destructive_edges=3）**：platform::process kill 链（3 条破坏性 edge）。
- **`codex_thread_visibility`（4 类副作用）**：error / fs / persistence / process。
- 常规非破坏性副作用：`atomic_write`（fs + fs_write）、`debug_log`（fs(log)）、`sessions`/`storage`/`transition_journal`/`session_analytics`/`managed_blocks`/`codex_config_reconciler`（fs/persistence）、`keychain`（keychain）、`fetch_models`/`health_check`/`proxy`/`proxy_passthrough`/`proxy_server`/`debug_report_upload`（network）、`system_volume_windows`（audio）、`text_injection_windows`/`process`（process）。
- **已确认但未在本轮字段级闭合的破坏性行为**（转述 NONVOICE-54 §2）：`sessions::delete_sessions`（SQL DELETE + JSONL `remove_file`）、`skills::remove_skill`/`delete_skill_backup`（`remove_dir_all`）、`remove_mcp_server`（config.toml 原子改写）、autostart 2 命令（登录项/开机自启）、`single_instance` 激活握手（写 `aimami-activate.request` JSON）。

---

## 4. dim3 调用树（call-tree.json）summary

> 68 leaf 各含一份 `call-tree.json`，`edges` 为 callee/addr/type/sha256/destructive/semantic 结构，即「追真调用树到 semantic leaf」的分片结果。

- edge 计数范围 3–327；最大：`repository`（327）、`codex_thread_visibility`（287）、`proxy_server`（247）、`translator`（152）、`commands`（113）、`manager`（112）、`codex_diagnostic`（107）。
- `semantic` 标注（persistence 等）已落在部分 edge 上（如 `commands/accounts` 的 load_snapshot/remove_accounts/store_bootstrap_snapshot_best_effort 标 `semantic:"persistence"`）。
- `destructive:true` edge 分布：`process`（3）、`commands`（1）、`commands/relay`（1）。其余 leaf `ct_destructive_edges=0`。
- `terminated_reason` 字段在本轮 68 份 call-tree.json 中均为 None（未显式标注 terminated），即 dim3 未以 terminated_reason 收口的 leaf 需消费者结合 §6 判定。

---

## 5. voice 排除声明（active=0 硬门）

- voice 域 leaf（llm / runtime / tray / workspace，均 `codexmate_lib::core::voice::*`）全量 out-of-scope，不计入本合同 active。
- `audits/windows-1.2.3-voice/` 的 1 条 blocked 不属本 68-leaf 归约范围（见 NONVOICE-54 §5）。

---

## 6. Unknown / blocks_start（诚实标注，不伪闭合）

- **fields=[] 的 DTO 类型**（类型名已确认、字段名未闭合）：`ExportedAccount`、`ModelRestoreEntry`、`DebugBundlePayload`、`ImportDeeplinkPayload`、`InvariantDim`、`RelayImportSkipped`/`RelayImportSummary`/`RelayExportProvider`、`models` 10 类型、`repository` 6 类型、`TransitionJournal`。字段名原始证据在 crossmap 的 `serialize_entry_key_literal`（mac serialize_entry 字符串 dump，未逐字段拆解）；消费者实现需字段级时须回 raw crossmap 拆串或做 win 本地 serde 实测。
- **无 DTO 的 leaf**（纯函数/无序列化边界，非缺口）：account_metadata、atomic_write、codex_catalog、codex_config、codex_runtime、codex_writer、commands/account_io、commands/system、commands/tray_menu、dialects、image_compat、keychain、legacy_virtual_auth、mcp、oauth_login、oauth_refresh、paths、plan_mapping、process、proxy、proxy_passthrough、quota、router_reconciler、router_transition、sessions、single_instance、skills、storage、translator、fetch_models、health_check、debug_log。这些 leaf 的 dim4 边界=无 serde 结构体（错误走 CoreEnvelope 包裹或 Result/Option 判别式）。
- **system 模块命令级缺口**（沿用 NONVOICE-54 §4，不属本字段级归约新增）：`commands/system` leaf dim4 fields=[]，26 命令 blocked（命令→owner 文件映射未建立）。
- **dim4 未闭合的本质**：53 matched 是 mac 同源推断（`cross_platform_inferred=true`），非 win 本地 serde 实测（红线8）；11 unmatched non-voice 是 win 本地 decompile 但仅部分 leaf 有干净字段名。**无任何 leaf 达到 win 本地 serde 实测级 dim4 闭合**。

---

## 7. 消费者读取指引

- 模块级 dim1-5 + unknowns → 本 bundle 同目录 `CONSUMER-CONTRACT-NONVOICE-54.md`（session `cc-consumer-reduce-win123-nonvoice54-20260815`）。
- 本文件（dim3/dim4 字段级）→ 上文 §1/§2/§3/§4。
- 逐 leaf 字段级原始证据 → `raw/aimami/1.2.3/windows-x64/<leaf>/interface-report.json` + `call-tree.json`（68 份）。
- dim4 字段级 crossmap 原文 → `raw/aimami/1.2.3/windows-x64/crossmap-dim4-win123-field-level.json`（session `wf-aimami123-win-dim4-crossmap-20260817`，含 spot_check 与 redline8_note）。
- 版本级终稿 → `audits/COVERAGE-FINAL-1.2.3.md` + `BASELINE-FINAL-1.2.3.md`。
- 逐模块 bundle → `audits/windows-1.2.3-<module>/`（manifest.json / gate-report.json / logic/*.md / pointers/evidence-paths.md）。
