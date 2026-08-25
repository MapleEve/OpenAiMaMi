# Windows 1.2.3 non-voice 54 目标 — 自足消费者合同（consumer contract）

> session: `cc-consumer-reduce-win123-nonvoice54-20260815`
> 性质：消费者面向收口终稿。消费者（实现侧）只读本文件即可读懂 1.2.3 Windows 每个模块的叶子清单、dim1-5 状态、DTO / success / error / 副作用 / Unknown 分类与终态，无需翻 raw leaf。
> 授权：仓主本人对话确认 AiMaMi 为自家/已获书面授权产品并下达复刻/逆向工作。本文档只做消费者视角合同提炼，不提升任何实现门。
> 反造假立场：每一条终态均以磁盘已落盘的 per-module `gate-report.json`（`internal-reverse/audits/windows-1.2.3-*/gate-report.json`）+ `COVERAGE-FINAL-1.2.3.md` + `BASELINE-FINAL-1.2.3.md` 为准，逐条可追溯。本轮是**格式重组**，不是重新逆向：1.2.3 的 `.c` 反编译文件与 18 个 module bundle 早已在盘，本轮只把它们重新组织成消费者合同 + 补 dim1-5 门控 + 补消费合同。

---

## 0. 总账（grounded，2026-08-15 现场读盘）

| 指标 | 数值 |
|---|---|
| Windows 1.2.3 module bundle 数 | **18**（`audits/windows-1.2.3-*`） |
| win strip 恢复 | **938 函数归属 / 67 模块** + **115/131 命令 handler 精确命名**（panic-Location + 严格传播，红线24） |
| non-voice consumerStartReady 目标（本合同 in-scope） | **54**（8 个模块求和） |
| readyToImplement / strictImplementationUse / implementation_use / gate_accepted | **全部 false**（dim4 未闭合 + dim6 留白 + 红线25） |
| non-voice BLOCKED 目标 | **34**（system 26 + tray 7 + relay 1） |
| voice active count | **0**（voice bundle 0 active + 1 blocked，全量 out-of-scope） |

- **Windows 侧整体弱于 macOS**（strip 无符号，靠 panic-Location 两层 xref + 严格调用图传播 + tauri 命令名串恢复）：多数模块 dim2=partial/weak、dim3=partial/weak、dim4=not-closed，无任何模块达到 strictImplementationUse。**禁止用 macOS 行为外推 Windows**（红线8），两侧互不借证据。
- 平台边界：本文件只覆盖 `windows-x64`（1.2.3 win 各 bundle）。macOS 侧由 `macos-1.2.3-version-delta/logic/CONSUMER-CONTRACT-NONVOICE-107.md` 独立闭合。
- dim6（test/acceptance mapping）是 C5 实现侧工作，本轮逆向侧留白；`LIVE_REFERENCE_NOT_RUN`（红线25）。

---

## 1. 模块叶子清单 + dim1-5 状态（grounded，逐 bundle gate-report.json）

| 模块 | consumerStartReady | blocked | dim1 | dim2 | dim3 | dim4 | dim5 |
|---|---|---|---|---|---|---|---|
| accounts | 4 | 0 | mixed | weak-mixed | partial-asymmetric（跨平台名已确认） | weaker-than-mac | win-native |
| bootstrap | 1 | 0 | not-produced | closed | partial | not-closed | windows-x64 |
| mcp | 4 | 0 | closed | partial | partial | partial | partial |
| relay | 22 | 1 | N/A-for-this-package | partial | weak | not-closed | closed-for-existence |
| sessions-analytics | 9 | 0 | mostly-closed | stronger-than-macOS（wrapper 层） | partial | not-closed | windows-closed-for-existence |
| skills | 6 | 0 | N/A | materially-partial | NOT | NOT | PARTIALLY |
| system-hotspot | 5 | 0 | strong | strong-for-existence/name-only | weak | not-closed | closed-for-existence |
| tray | 3 | 7 | accepted-native-substitute | partial | partial | not-closed | windows-partial |
| system | 0 | 26 | weak | module-attributed-but-command-unmapped | not-closed | not-closed | partially-improved-but-not-closed |
| home-usage-frontend | 0 | 0 | partial | missing | missing | partial | win-native |
| maintenance | 0 | 0 | weak-for-both | asymmetric | partial（rebuild_registry only） | partial（rebuild_registry only） | closed-for-existence（rebuild_registry） |
| system-usage | 0 | 0 | missing | partial | missing | missing | partial-platform-diff-noted |
| daemon-autoswitch | 0 | 0 | partial-strong-for-11 | mixed | not-produced | not-closed | closed-for-existence |
| （voice） | 0 | 1 | — | — | — | — | —（out-of-scope，active=0） |

- 其余在盘但 consumerStartReady=0：custom-instructions（`NO-BEHAVIOR-DIFF-MIGRATION`）、mystery-unlock（LIFECYCLE 文档）、plugins（`JUSTIFIED-NA`，模块 absent）、ui（`UI-THEME-GAP`，主题差异文档）。
- **Windows system 模块 26 命令全部 blocked**：raw 侧有 6 个 `commands/system` 文件 + 3 个 `system_volume_windows` 文件，但全部是 unresolved `sub_XXXX`（0 确认名），命令→owner 文件映射未建立，无法命令级闭合。这是 Windows 侧最大缺口。

### 各模块 consumerStartReady 命令清单（grounded）

- **accounts（4）**：`remove_accounts`、`export_accounts_to_file`、`preview_account_import`、`begin_chatgpt_oauth_login`
- **bootstrap（1，后端函数）**：`manager_bootstrap`（`core::relay::manager::bootstrap`，VA `0x14085a330`）
- **mcp（4）**：`load_mcp_servers`、`upsert_mcp_server`、`set_mcp_server_enabled`、`remove_mcp_server`
- **relay（22，缺 `get_codex_router_auth_readiness`）**：`load_relay_state`、`get_relay_active`、`get_relay_proxy_status`、`upsert_relay_provider`、`delete_relay_provider`、`set_relay_provider_network`、`activate_relay_provider`、`deactivate_relay_provider`、`reorder_relay_providers`、`set_codex_router_enabled`、`set_codex_router_no_account_mode`、`diagnose_codex_router`、`export_relay_config`、`import_relay_config`、`test_relay_draft_stream`、`fetch_relay_models_draft`、`get_relay_provider_quota`、`load_quota_history`、`reveal_relay_api_key`、`detect_api_proxy_config`、`set_api_proxy_config`、`test_api_proxy_config`
- **sessions-analytics（9）**：`load_sessions`、`delete_sessions`、`export_session_markdown`、`migrate_session_worktree`、`load_session_analytics`、`load_token_analytics`、`load_tool_analytics`、`load_change_analytics`、`load_usage_analytics`
- **skills（6）**：`import_skill`、`load_installed_skills`、`load_skill_backups`、`remove_skill`、`restore_skill_backup`、`delete_skill_backup`
- **system-hotspot（5）**：`has_notch`、`get_hotspot_enabled`、`set_hotspot_enabled`、`focus_main_window`、`hotspot_ready`
- **tray（3 + 7 blocked）**：csr=`load_tray_template_icon`、`create_bootstrap_tray_menu`、`handle_tray_menu_event`；blocked=其余 7 条 mac 命名 target 在 win 侧非精确名可寻（`sub_14025D570`/`sub_1407190E0` 身份映射未定）。

---

## 2. 破坏性副作用编目（⚠ 红线20）

> Windows 侧 dim4 普遍 not-closed，逐命令副作用未系统化闭合。以下为已确认的破坏性副作用（转述 BASELINE + win bundle logic），其余标 Unknown。**win strip 无法像 mac 那样全编目，side-effect 覆盖度低于 mac。**

- **删除/覆写**：`sessions::delete_sessions`（SQL `DELETE FROM threads/thread_spawn_edges` + rollout index JSONL `remove_file` + 回写）；`skills::remove_skill`/`delete_skill_backup`（`remove_dir_all`，删前备份）；`remove_mcp_server`（config.toml 改写，原子写）。
- **进程/系统**：autostart 2 命令（`get_autostart_state`/`set_autostart_enabled`，登录项/开机自启）；`platform::process` kill 链；`single_instance` 激活握手（写 `aimami-activate.request` JSON，非命名互斥体）。
- **数据库**：`PRAGMA wal_checkpoint(TRUNCATE)`（常规 WAL 维护，非数据破坏）。

---

## 3. dim4（DTO / error / 副作用）逐模块诚实标注

> 本轮原则：`.c`/logic 文档里**看不出 DTO/error 的就标 Unknown，不伪闭合**。Windows 侧没有任何模块 dim4=closed；只有 mcp 达到 partial（有 McpServerSummary/CoreEnvelope 叙述）。其余 DTO/error 一律 Unknown。

- **mcp（4，dim4 partial）**：DTO `McpServerSummary`、信封 `CoreEnvelope<Vec<McpServerSummary>>`；error poisoned lock / IO / CAS 重试 ≤3 轮；副作用 config.toml `write_atomic_with_mode` 原子写 + `DirBuilder` + `CodexMutationGate::lock`。**per-field struct dump（defaults/nullability）未产**（`core::mcp` census 在 win 侧 blocks_start）。
- **accounts（4，dim4 weaker-than-mac）**：DTO/error 字段级未在 win 侧闭合；5 个命令 wrapper 文件 Hex-Rays decompile 失败（blocks_start）。副作用沿用 mac 侧语义（atomic write auth.json / oauth 流程），但 win-native 证据未独立闭合。
- **relay（22）/ sessions-analytics（9）/ skills（6）/ system-hotspot（5）/ tray（3）/ bootstrap（1）**：dim4 全部 not-closed（skills 标 `NOT`），DTO/error 一律 Unknown；副作用仅转述 §2 已确认项。
- **system（26 blocked）/ home-usage-frontend（0）/ maintenance（0）/ system-usage（0）/ daemon-autoswitch（0）**：dim4 not-closed 或 missing，无命令级 DTO/error 可述。

---

## 4. BLOCKED 目标（实现门 false，blocks_start 诚实记录）

| 模块 | blocked 数 | blocks_start 摘要 |
|---|---|---|
| system | 26 | 命令→owner 文件映射未建立（6 `commands/system` raw 文件全 `sub_XXXX` 0 确认名）；`platform::daemon`/`platform::single_instance` win 侧零归因（truly_undone）；dim1/dim3/dim4 全 not-closed |
| tray | 7 | 7/10 mac 命名 target 在 win 侧非精确名可寻；`sub_14025D570`/`sub_1407190E0` 身份映射未定；win `tray_menu` 模块路径归因未闭合 |
| relay | 1 | `get_codex_router_auth_readiness`（win 侧 2 未命名命令 `sub_140187580`/`sub_140CCE030` 与 mac `diagnose_codex_router` 身份未定） |
| （voice） | 1 | out-of-scope，不计 active |

---

## 5. voice 排除声明（active=0 硬门）

- voice 域模块（voice/audio/capture/runtime-settings/trigger-listener）全量 out-of-scope。
- `audits/windows-1.2.3-voice/` 的 1 条 blocked（`sub_140755DC0`/`sub_140ACDB60` 已 RESOLVED 4/5，剩 131/171 通用 `sub_*` 身份未定）**不计入本合同 active**，voice active count=0。

---

## 6. 非动作声明（non-actions）

- 本轮为**格式重组**：读盘盘点 18 个 bundle 的 `gate-report.json`/`manifest.json`/`logic/*.md`，产出自足消费者合同；**零 IDA 调用、零 IDB 写回、零 raw leaf 重写、零新反编译**。
- 未修改任何 per-module bundle 的 manifest/gate-report/logic/pointers；未提升任何实现门字段（全 false）。
- `custom-instructions`（NO-BEHAVIOR-DIFF-MIGRATION）、`mystery-unlock`、`plugins`（JUSTIFIED-NA）、`ui`（UI-THEME-GAP）、`home-usage-frontend`/`maintenance`/`system-usage`/`daemon-autoswitch`（consumerStartReady=0）如实记录为「未产出命令级叶子」，不伪闭合。
- 未做真机/live-reference 对照（红线25，dim6 留白）。

## 7. 消费者读取指引

- 版本级终稿 → `audits/COVERAGE-FINAL-1.2.3.md`（win 1.2.1→1.2.3 delta）+ `audits/BASELINE-FINAL-1.2.3.md`。
- 逐模块叶子 + dim1-5 + unknowns → `audits/windows-1.2.3-<module>/gate-report.json`（+ `manifest.json`、`logic/*.md`、`pointers/evidence-paths.md`）。
- raw 反编译证据 → `raw/aimami/1.2.3/windows-x64/{commands,core,platform}/*/ida/pseudocode/*.c`。
- win strip 命名恢复（红线24）口径 → `COVERAGE-FINAL-1.2.3.md` §3（938 函数 / 67 模块 / 115/131 命令 handler）。
- 逐命令 DTO 字段级闭合（dim4）缺口 → 各 bundle `gate-report.json` 的 `unknowns[class=blocks_start]` 的 `dim4 interface/DTO extraction` 条目；Windows 侧系统缺口（system 26 blocked）是最大未闭合面。
