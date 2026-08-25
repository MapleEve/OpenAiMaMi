# macOS 1.2.3 non-voice 107 目标 — 自足消费者合同（consumer contract）

> session: `cc-consumer-reduce-mac123-nonvoice107-20260815`
> 性质：消费者面向收口终稿。消费者（实现侧）只读本文件即可读懂 1.2.3 macOS 每个模块的叶子清单、dim1-5 状态、DTO / success / error / 副作用 / Unknown 分类与终态，无需翻 raw leaf。
> 授权：仓主本人对话确认 AiMaMi 为自家/已获书面授权产品并下达复刻/逆向工作。本文档只做消费者视角合同提炼，不提升任何实现门。
> 反造假立场：每一条终态均以磁盘已落盘的 per-module `gate-report.json`（`internal-reverse/audits/macos-1.2.3-*/gate-report.json`）+ `COVERAGE-FINAL-1.2.3.md` + `BASELINE-FINAL-1.2.3.md` 为准，逐条可追溯。本轮是**格式重组**，不是重新逆向：1.2.3 的 `.c` 反编译文件与 18 个 module bundle 早已在盘，本轮只把它们重新组织成消费者合同 + 补 dim1-5 门控 + 补消费合同。

---

## 0. 总账（grounded，2026-08-15 现场读盘）

| 指标 | 数值 |
|---|---|
| macOS 1.2.3 module bundle 数 | **18**（`audits/macos-1.2.3-*`） |
| 后端完整基线函数 | **1638 全 App 函数**（1422 baseline same-set + 216 delta；94 dirtree 目录） |
| 前端命令总数（1.2.3） | **131**（1.2.2=129，新增 2 条 autostart 命令） |
| non-voice consumerStartReady 目标（本合同 in-scope） | **107**（12 个模块求和，含跨模块交叉引用，非去重） |
| strictImplementationUse 目标 | **2**（window-path：`focus_main_window` / `open_path`，dim1-5 全闭） |
| readyToImplement / implementation_use / gate_accepted | **全部 false**（dim6 留白 + 红线25 未做真机对照） |
| non-voice BLOCKED 目标 | **1**（maintenance `rebuild_registry`，dim1 UI 触发缺失） |
| voice active count | **0**（voice bundle 39 命令全量 out-of-scope，未计入 active） |

- 跨模块交叉引用（非重复计数）：`clean`/`load_snapshot` 同属 system 与 maintenance；`detect/set/test_api_proxy_config` 同属 relay 与 system；`load_{session,token,tool,change,usage}_analytics` 5 条同属 home-usage-frontend（前端页）与 sessions-analytics（后端）。107 是 per-module `consumerStartReady` 列表求和，去重后唯一 non-voice 命令 ≈ 92（131 前端命令 − 39 voice − 少量跨模块重复），去重口径本文件不强行闭合，消费者以 per-module 列表为准。
- 平台边界：本文件只覆盖 `macos-arm64`（1.2.3 各 bundle manifest `arch=arm64`）。Windows 侧由 `windows-1.2.3-version-delta/logic/CONSUMER-CONTRACT-NONVOICE-54.md` 独立闭合，二者互不外推（红线8）。
- dim6（test/acceptance mapping）是 C5 实现侧工作，本轮逆向侧留白；`LIVE_REFERENCE_NOT_RUN`（红线25，未启动参照 App 对照）。

---

## 1. 模块叶子清单 + dim1-5 状态（grounded，逐 bundle gate-report.json）

> dim1=前端 control-flow/IPC 触发；dim2=后端 owner 反编译；dim3=call-tree 到实现叶；dim4=interface/DTO/error/副作用；dim5=同平台活体证据门。状态值取各 bundle `gate-report.json` 的 `dim_status` 首词，全文以 bundle 为准。

| 模块 | consumerStartReady | dim1 | dim2 | dim3 | dim4 | dim5 |
|---|---|---|---|---|---|---|
| accounts | 8 | mixed | strong | partial | partial | macOS-only |
| bootstrap | 4 | not-produced | closed | not-closed | not-closed | macOS |
| home-usage-frontend | 8 | mostly-closed | not-closed | not-closed | partial-frontend-only | macOS-confirmed |
| maintenance | 2 (+1 blocked) | uneven | strong | partial | partial | macOS-only |
| mcp | 4 | closed | strong | partial | not-closed | open |
| relay | 23 | mostly-closed | strong | partial | not-closed | closed-for-existence |
| sessions-analytics | 9 | mostly-closed | partial | partial | not-closed | macOS-closed-for-existence |
| skills | 6 | strong | strong | strong-narrative | mostly-closed | NOT |
| system | 26 | weak | mostly-inherited-strong | partial-narrative | not-closed | not-closed |
| system-hotspot | 5 | strong | strong | mixed | not-closed | open |
| tray | 10 | accepted-native-substitute | strong | partial | not-closed | mac-closed-for-existence |
| window-path | 2 (strict) | closed | closed | closed | closed | closed |
| （voice） | 39 | — | — | — | — | —（out-of-scope，active=0） |

- 模块在盘但 consumerStartReady=0（未产出命令级叶子，见 §4/§6）：custom-instructions、daemon-autoswitch、mystery-unlock、relay-core、plugins（`NOT-APPLICABLE`，1.2.3 已移除，功能由 mcp 承接）。
- 全盘最高门 = `strictImplementationUse`（仅 window-path 2 叶）；无任何 readyToImplement（dim6 留白 + 红线25）。

### 各模块 consumerStartReady 命令清单（grounded）

- **accounts（8）**：`switch_account_and_restart_codex`、`remove_accounts`、`refresh_single_account_usage`、`export_accounts_to_file`、`import_accounts_from_file`、`preview_account_import`、`begin_chatgpt_oauth_login`、`cancel_chatgpt_oauth_login`
- **bootstrap（4，后端函数非前端命令）**：`app_run_entry`、`bootstrap_cache`（背 `load_bootstrap_state`）、`auto_switch_pending_emitter`（背 `dismiss_pending_auto_switch` + `load_pending_auto_switch`）
- **home-usage-frontend（8）**：`load_usage_analytics`、`load_session_analytics`、`load_token_analytics`、`load_tool_analytics`、`load_change_analytics`、`load_quota_history`、`load_snapshot`、`refresh_usage_snapshot`
- **maintenance（2）**：`clean`、`load_snapshot`（+1 blocked：`rebuild_registry`）
- **mcp（4）**：`load_mcp_servers`、`upsert_mcp_server`、`set_mcp_server_enabled`、`remove_mcp_server`
- **relay（23）**：`load_relay_state`、`get_relay_active`、`get_relay_proxy_status`、`upsert_relay_provider`、`delete_relay_provider`、`set_relay_provider_network`、`activate_relay_provider`、`deactivate_relay_provider`、`reorder_relay_providers`、`set_codex_router_enabled`、`set_codex_router_no_account_mode`、`get_codex_router_auth_readiness`、`diagnose_codex_router`、`export_relay_config`、`import_relay_config`、`test_relay_draft_stream`、`fetch_relay_models_draft`、`get_relay_provider_quota`、`load_quota_history`、`reveal_relay_api_key`、`detect_api_proxy_config`、`set_api_proxy_config`、`test_api_proxy_config`
- **sessions-analytics（9）**：`load_sessions`、`delete_sessions`、`export_session_markdown`、`migrate_session_worktree`、`load_session_analytics`、`load_token_analytics`、`load_tool_analytics`、`load_change_analytics`、`load_usage_analytics`
- **skills（6）**：`import_skill`、`load_installed_skills`、`load_skill_backups`、`remove_skill`、`restore_skill_backup`、`delete_skill_backup`
- **system（26）**：`get_usage_refresh_interval`、`get_notification_client_state`、`load_pending_auto_switch`、`diagnose`、`set_auto_switch`、`open_path`、`dismiss_pending_auto_switch`、`configure_auto_switch`、`merge_mystery_unlock_grants`、`get_mystery_unlock_grants`、`set_image_compat`、`get_system_info`、`set_usage_refresh_interval`、`force_kill_codex`、`clean`、`get_device_id`、`load_bootstrap_state`、`restart_codex`、`get_image_compat`、`rebuild_registry`、`run_daemon_once`、`confirm_pending_auto_switch`、`confirm_pending_auto_switch_and_restart_codex`、`detect_api_proxy_config`、`set_api_proxy_config`、`test_api_proxy_config`
- **system-hotspot（5）**：`has_notch`、`get_hotspot_enabled`、`set_hotspot_enabled`、`focus_main_window`、`hotspot_ready`
- **tray（10）**：`create_tray_menu`、`create_bootstrap_tray_menu`、`create_tray_menu_from_snapshot`、`append_codex_router_section`、`handle_tray_menu_event`、`refresh_tray_menu`、`refresh_tray_menu_with_snapshot`、`quota_text`、`load_tray_template_icon`、`update_tray_recording_state`
- **window-path（2，strictImplementationUse）**：`focus_main_window`、`open_path`

---

## 2. 破坏性副作用编目（⚠ 红线20，来源 BASELINE-FINAL-1.2.3.md §1 62 处全编目）

> 只有明确读到的破坏性副作用才列出；未在本表出现不代表无副作用，只代表 dim4 未逐命令闭合（见 §3 Unknown）。结论：**无对用户真实 auth.json/config.toml 的无条件裸删**——config.toml 是覆盖写+备份；账号删除走隔离区+回滚保护。

- **进程 kill / 退出**：`platform::CodexProcessLifecycle::prepare_transition`（osascript 向 com.openai 发 AppleScript 退 ChatGPT → 超时强杀链）、`kill_codex_processes_until_clear`/`force_kill_targets`（kill）、`commands::system::force_kill_codex`、`quit_keeping_router`/tray 退出（`AppHandle::exit(0)` 退应用留路由）。
- **删除（remove_dir_all / remove_file）**：`repository::remove_accounts` → `SnapshotQuarantine::commit_and_purge`（remove_dir_all 不可逆，先 stage 隔离区）；`skills::remove_skill`/`delete_skill_backup`（remove_dir_all，删前先备份）；`sessions::delete_sessions`；`keychain::delete_api_key`（文件 + macOS Keychain）；`config_takeover`/`transition_journal`/`router_unlock_auth` remove_file（均自建中间态，有备份/存在性兜底）。
- **系统级**：`daemon install/uninstall`（launchd plist）、`autostart::set_autostart_enabled`（登录项）、`single_instance::acquire`（`File::set_len(0)` 截断单实例锁文件）、`harden_private_tree`（chmod）、`system_volume`（改系统音量）、`CodexPaths::from_home`（rename 迁移）。
- **文件覆写（atomic）**：`oauth_refresh::write_auth_if_changed`（atomic_write 覆写 auth.json）、`account_io::failure_after_snapshot_write`（回滚删新建快照）、`bootstrap_cache::update`（fs::write 覆写）。
- **数据库维护（非数据破坏）**：`codex_thread_visibility::checkpoint_after_committed_write`（SQLite `PRAGMA wal_checkpoint(TRUNCATE)`）。

---

## 3. dim4（DTO / error / 副作用）逐模块诚实标注

> 本轮原则：`.c`/logic 文档里**看不出 DTO/error 的就标 Unknown，不伪闭合**。只有 dim4 `closed` / `mostly-closed` / `partial` 且 logic 文档实际记录了字段的模块，下面才列出字段级内容；其余模块 DTO/error 一律 Unknown，副作用只转述 BASELINE 编目（§2）。

### 3.1 dim4 closed —— window-path（2 叶，唯一逐字段闭合）

| 命令 | 入参 | 出参 | 错误 | 副作用 |
|---|---|---|---|---|
| `focus_main_window` | 无 | `Result<(), tauri::Error>`（Ok→undefined） | 原子 ref-count 溢出→`BUG()` abort；`send_user_message` 失败→`tauri::Error` | 发 `WryUserEvent(discriminant=28)`→NSApp 窗口聚焦/前置；无文件/网络/持久化 |
| `open_path` | `{path: String}` | `Result<String, String>`（Ok=child handle info；Err=spawn 错误信息） | spawn 失败→关闭 3 fd 后返 Err | spawn `/usr/bin/open <path>`；**无 path 校验/canonicalize**（依赖 caller/upstream allowlist） |

### 3.2 dim4 mostly-closed —— skills（6 命令，DTO/error 字段级）

- **DTO**：`InstalledSkillSummary`、`SkillBackupSummary`、`SkillBackupMetadata { backupID, skillID, name, title, relativePath, createdAt }`（序列化进 `metadata.json`）。
- **error（字符串）**：`"Skill mutation lock is poisoned"`、`"<path> not found"`、`"Skill source must not be a symbolic link"`、`"Directory must contain SKILL.md"`、`"Must be a directory with SKILL.md or a SKILL.md file"`、`"Invalid skill after import"`、`"Invalid skill source"`、`"Invalid skill backup id"`、`"Backup corrupted"`、`"Skill backup contains an invalid relative path"`、`"Skill backup target must not traverse a symbolic link"`、`"Published skill failed validation"`。
- **副作用**：4 个写命令（import/remove/restore/delete）先 `lock_skill_mutations()` 全局 `Mutex` 串行化；`StagedDirectory` RAII 失败自动 `remove_dir_all` 清理暂存；`remove_skill` 永远先备份再 `remove_dir_all`（reason="remove"）；`delete_skill_backup` 直接 `remove_dir_all`。路径穿越防护：`resolve_backup_path`（backup id 只允许单段 Normal）、`resolve_skill_target`（逐段 `symlink_metadata` 查符号链接逃逸）。

### 3.3 dim4 partial（字段部分已知）—— maintenance / accounts / home-usage-frontend

- **maintenance `clean`**：无参 → 响应字段（前端 toast 回显叙述，backend 未字节确认）：`authBackupsRemoved` / `registryBackupsRemoved` / `staleEntriesRemoved`。error：wrapper 显式 `"poisoned lock: another task failed inside"` 分支；core 级 `load_registry/persist_registry` 错误路径未复验（Unknown）。
- **maintenance `load_snapshot`**：入参 `argKeys: ["localOnly","forceMetadata"]`（ipc-contracts.jsonl 确认）；响应 `AppStatusPayload{registry_items, account_summary, app_path_state, settings, service_state}` 为 1.0.9 形状，1.2.3 未独立确认（Unknown）。
- **maintenance `rebuild_registry`（BLOCKED）**：无请求参（`argKeys: []`）；响应未知（1.2.3 无任何 UI 文档确认）；core `rebuild_registry_with_policy` 相对 1.2.2 新增 2 个 policy 参数（`a3:int, a4:__int64`），语义未定。
- **accounts**：DTO `AuthFile`/`AuthTokens`/`AuthSnapshot`；import 冲突分类 `ACCOUNT_MISSING_TOKEN`/`ACTIVE_ACCOUNT_PROTECTED`/`CONFLICT_SKIPPED`/`INVALID_ACCOUNT_KEY`/`UNSUPPORTED_AUTH_MODE`；error 信封 `CoreError`。`begin_chatgpt_oauth_login` 走 PKCE → `open_in_browser`（`/usr/bin/open`）→ 本地临时 axum Router + `tokio TcpListener` 收回调 → `tokio::time::timeout` 限时。`oauth_refresh` 固定 `client_id=app_EMoamEEZ73f0CkXaXp7hrann` 向 `https://auth.openai.com/oauth/token` 发 `refresh_token` grant。**逐命令 DTO 字段级未闭合**（`dim4 field-level DTO extraction` 列为 blocks_start）。
- **home-usage-frontend（8）**：纯前端页逆向（dim4 partial-frontend-only）；后端 owner/pseudocode/call-tree（dim2/dim3）对本模块 8 命令全部 not-closed，DTO/error 全 Unknown。

### 3.4 dim4 not-closed（DTO/error = Unknown，副作用转述 §2）

- **mcp（4）**：DTO `McpServerSummary`、信封 `CoreEnvelope<Vec<McpServerSummary>>`（FULL-CHAIN 叙述，非 per-field struct dump——dim4 仍标 not-closed）。error：poisoned lock / IO error / CAS 重试 3 轮后 `"attempted N times"`。副作用：`write_atomic_with_mode` 原子写 config.toml + `DirBuilder` 建目录 + `CodexMutationGate::lock`（与 relay 共用同一把锁，mcp 与 relay 配置写入互斥）。**per-field defaults/nullability/error-envelope 表未产**。
- **relay（23）**：DTO 模块级 `RelayProvider`/`RelayState`/`RelayUpsertInput`（符号级）；error `CoreError`。副作用：config.toml 注入块（`render_router_top_block`/`# >>> aimami-relay managed`）、relay provider 明文 key 文件（三级密钥）、本地 axum proxy_server。逐命令 DTO 未闭合。
- **system（26）/ sessions-analytics（9）/ system-hotspot（5）/ tray（10）/ bootstrap（4）**：dim4 全部 not-closed，DTO/error 一律 Unknown；副作用见 §2 编目（如 `force_kill_codex`=kill、`delete_sessions`=SQL DELETE + remove_file、`set_autostart_enabled`=登录项、`set_hotspot_enabled`=CodexMateSettings 字段 shape 未闭合）。

---

## 4. BLOCKED 目标（实现门 false，blocks_start 诚实记录）

| 目标 | 模块 | blocks_start |
|---|---|---|
| `rebuild_registry` | maintenance | dim1 UI 触发缺失（`frontend-control-flow.jsonl` 只有 wrapper 定义无调用元素，任何 UI 文档未 trace 到此命令）；core `rebuild_registry_with_policy` 新增 2 policy 参数语义未定；响应 DTO 未知。backend owner 证据反而最强，但 `uiCallEntryReady` 不满足即 blocked |

- 其余 `consumerStartReady=0` 的模块（custom-instructions / daemon-autoswitch / mystery-unlock / relay-core / plugins）不是 BLOCKED，而是**未产出命令级叶子**（见 §6 非动作声明）。

---

## 5. voice 排除声明（active=0 硬门）

- voice 域模块 `voice/runtime/workspace/llm/aliyun_asr/asr + commands/voice + platform/voice_trigger_macos/text_injection` 全量 out-of-scope。
- `audits/macos-1.2.3-voice/` 的 39 条命令（`cancel_voice_trigger_capture`/`capture_voice_trigger_key`/`load_voice_asr_config`/…/`open_macos_privacy_pane` 等）**不计入本合同 active**，voice active count=0。
- 覆盖 voice/audio/capture/runtime-settings/trigger-listener 全子域（含 `set_voice_trigger_listener_suppressed`）。

---

## 6. 非动作声明（non-actions）

- 本轮为**格式重组**：读盘盘点 18 个 bundle 的 `gate-report.json`/`manifest.json`/`logic/*.md`，产出自足消费者合同；**零 IDA 调用、零 IDB 写回、零 raw leaf 重写、零新反编译**。
- 未修改任何 per-module bundle 的 manifest/gate-report/logic/pointers；未提升任何实现门字段（readyToImplement/implementation_use/gate_accepted 保持 false）。
- `custom-instructions`/`daemon-autoswitch`/`mystery-unlock`/`relay-core` 四个 bundle 在盘但 consumerStartReady=0（只有 DELTA-LOGIC/REGISTRATION-TABLE/LIFECYCLE 文档，未产出命令级叶子）——本文件如实记录为「未产出命令级叶子」，不伪闭合。
- `plugins` bundle = `NOT-APPLICABLE`（1.2.3 已移除该模块，功能由 mcp 承接，见 `logic/NOT-APPLICABLE.md`）。
- 未做真机/live-reference 对照（红线25，dim6 留白）。

## 7. 消费者读取指引

- 版本级终稿 → `audits/COVERAGE-FINAL-1.2.3.md`（delta 视图）+ `audits/BASELINE-FINAL-1.2.3.md`（1638 全函数独立基线 + 62 处破坏副作用编目 + 9 组模块覆盖分析）。
- 逐模块叶子 + dim1-5 + unknowns → `audits/macos-1.2.3-<module>/gate-report.json`（+ `manifest.json`、`logic/FULL-CHAIN-1.2.3.md`、`pointers/evidence-paths.md`）。
- raw 反编译证据 → `raw/aimami/1.2.3/macos-arm64/{commands,core,platform}/*/ida/pseudocode/*.c`（`logic/*.md` 内 pointers 指路）。
- 逐命令 DTO 字段级闭合（dim4）缺口 → 见各 bundle `gate-report.json` 的 `unknowns[class=blocks_start]` 的 `dim4 interface/DTO extraction` 条目；消费者若需逐字段 DTO，须先补 body 级反编译（红线32）。
