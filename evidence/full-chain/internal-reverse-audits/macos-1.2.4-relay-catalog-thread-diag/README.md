# AiMaMi 1.2.4 macOS relay-catalog-thread-diag — internal-reverse 消费者结论包

同步时间：2026-07-29
范围：`core::relay::codex_catalog`（17 函数）+ `core::relay::codex_thread_visibility`（15 函数）+ `core::relay::codex_diagnostic`（11 函数）+ `core::relay::codex_writer`（1 函数）+ `core::relay::codex_config_reconciler`（1 函数）= **45 个 1.2.4 NEW-delta 函数**，全部 `[FULL decompile]`，0 截断桩。
baseline：1.2.3（`macos-1.2.3-relay`，consumerStartReady 23/23，readyToImplement=false，strictImplementationUse=false）。
最终结论：**本 delta 轮建立了 1.2.4 新行为证据（无账号模型槽路由 + 线程 provider 收养 + 诊断修复流水线 + 1 个新 IPC 命令 `set_codex_no_account_slots`），但不独立升档**（implementation_use=false，gate_accepted=false，full_leaf_100=false）。本包内部专用，供 Polaris 自有产品线参照实现，不对外发布（红线 23）。

## 模块职责（一句话）

1.2.4 在 relay 层新增了一条「无账号模型槽（no-account slot）路由 + 线程 provider 收养（orphan adoption）+ 诊断修复」流水线：硬编码 `gpt-5.x` 系列 native 模型 slug，`default_no_account_slots` 上限 5，落点是 `codex_router_catalog.json`（路由目录，atomic 写）、`config.toml`（config_takeover 重写）、`threads` 表（SQLite UPDATE，带 `archived=0` 守卫 + ROLLBACK）和一组 journal/recovery 文件（`no-account-model-restore` / `thread-provider-adoptions` / `rollout_orphan_providers`）。同时引入 `bundled`/`matching-account-cache`/`bundled+matching-account-cache` 三态 catalog 源枚举与 native system prompt（MiniMax-M3 / MiMo-Xiaomi）。

## 6dims 摘要

| dim | status | 摘要 |
|---|---|---|
| dim1 commands | closed-for-batch-scope | 1 个新 IPC 命令 `set_codex_no_account_slots`（win `@0x140e2de30`，Rust async 状态机 switch on poll 0/1/2/3，DTO 入参 `{Manager, slots, relaunch}`，Tauri invoke resolver `sub_1407A09A0` 确认注册到 invoke_handler）。mac setter 主体 `RelayManager::set_codex_no_account_slots@0x10079a8a0` 在 manager/ 模块，出本批 5 模块范围，经 DELTA-FINAL 引用。 |
| dim2 dto | partial | 7 个 DTO/结构体：`NativeThreadModelCatalog`（含 `supports_reasoning`）、`PreparedRouterCatalog`（`prepare_router_catalog` 产出、`write_prepared_catalog` 落盘，含 mode=catalog 源枚举）、`RouterCatalogModelIndex::disposition`、`NoAccountModelRestoreEntry`（impl Serialize，journal 单条）、`DiagnosticRolloutProviderCache`（含 read）、`TakeoverInspection`（reconciler 调 inspect/takeover）、catalog 源枚举三态。残留：`NoAccountModelRestoreEntry` 字段集由 journal 语义 + restore SQL 反推，非全量 4 字节键明文。 |
| dim3 fields | closed-for-batch | catalog/router 字段（`model`/`model_messages`/`tool_mode`/`visibility`/`slug`）；无账号槽硬编码 slug（`gpt-5.5`/`gpt-5.4`/`gpt-5.6-` 族，长名仅字节片段 `sol`/`luna`/`.6-terra`，不臆造完整商标）；`default_no_account_slots` 硬上限 5；native system prompt（MiniMax-M3 / MiMo-Xiaomi）实读为内联串；`threads` 表列（`id`/`model`/`model_provider`/`reasoning_effort`/`rollout_path`/`archived`）；journal/recovery JSON 键（`payload`/`model_reasoning_effort`/`rollout`/`version`/`createdAtMs`/`completedAtMs`/`failure`/`fallbackModel`/`permanentAdoption`/`thread-provider-adoptions`）；provider TOML 键 `requires_openai_auth`。 |
| dim4 error_paths | closed-for-batch | catalog 5 条降级路径 `[AiMaMi][catalog]`（merged/using-bundled/bundled-cmd-unavailable/catalog-unavailable/no-usable-official）；thread_visibility journal/session_meta 错误（7 串）；diagnostic `rollout has no database owner` + `ROLLBACK`；config_reconciler `prepared Codex catalog mode does not match the config target`。全部真码实测，无臆断。 |
| dim5 persistence | closed-for-batch | 文件：`models_cache.json`/`codex_router_catalog.json`/`no-account-model-restore` journal/`thread-provider-adoptions` recovery/`rollout_orphan_providers` cache/`config-backups`/`databaseBackups`；SQLite `threads` 表（2 SELECT + 4 UPDATE orphan-adoption 变体 + 1 UPDATE restore，全带 `archived=0` 守卫 + ROLLBACK）；`config.toml`（config_takeover 重写）；本批 45 函数内未观测 Keychain 写入（凭据持久化在 router_unlock_auth bundle 范围）。 |
| dim6 sidecar | closed-for-batch | `set_codex_no_account_slots` 出参 `relaunch=true` 驱动 Codex sidecar 重启（后端命令本身无 kill/spawn 执行体，只 persist + `router_transition::run` + 可选 `launch_codex_app_warning` 警告；实际重启由前端消费 `relaunch` 出参触发）；`reconcile_inner` 重写 config.toml + catalog，下一次 Codex 启动消费；诊断 orphan 收养走同进程 DB 事务（prepare/apply/rollback/mark_recovery），不杀进程。 |

## changelog 归属

本批 45 函数对应 1.2.4 changelog **A 条**（优化无账号登录模式，修复中转模型不显示及关闭路由后状态残留）的后端核心：
- **无账号模型槽路由**：`codex_catalog` 的 `canonical_no_account_slot_slug`/`is_no_account_slot_slug`/`default_no_account_slots`/`prepare_router_catalog`/`write_prepared_catalog` + `codex_config_reconciler::reconcile_inner` 重写 config.toml + catalog。
- **中转模型不显示修复**：`catalogSlug` 纳入槽位身份指纹（`verify_managed_auth_commit_boundary` 校验 slugs HashSet 严格相等，在 router-auth bundle 范围）；本批的 `canonical_no_account_slot_slug` 提供归一化基础。
- **关闭路由后状态残留**：`router_exit_guard_state`（router-auth bundle 范围）+ 本批的 `codex_thread_visibility` journal/restore + `codex_diagnostic` orphan 收养修复线程 provider 残留。

changelog **C 条**（Anthropic relay 翻译层）属 relay-translator-anthropic bundle 范围，不在本批。changelog **B 条**（Claude web search 兼容开关）的 `set_claude_web_search_compat` mac setter 亦不在本批（仅 DTO serialize@0x1005825c0，在 translator bundle）。

## 破坏性副作用

按「落盘 / DB / 进程 / 不可逆」分类，全部来自真码 destructive 标注：

### 文件落盘（atomic / persist）
- `write_prepared_catalog`：原子写 `codex_router_catalog.json`。
- `reconcile_inner`：重写 `config.toml`（config_takeover）+ 写/删 `codex_router_catalog.json`（必要时 `remove_catalog`）。
- `patch_no_account_model_restore_rollout`：写 journal 文件。
- `patch_session_meta_line` / `replace_session_meta_lines_with_strategy`：改 rollout 文件（带 overlap/length 校验）。
- `write_orphan_thread_adoption_recovery_file`：原子写 `thread-provider-adoptions`。
- `mark_orphan_thread_adoption_recovery`：写 recovery 记录（`failure`/`completedAtMs`）。

### DB（SQLite threads，事务 + ROLLBACK + archived=0 守卫）
- `restore_no_account_model_threads`：`UPDATE threads SET model=?2 WHERE id=?1`（恢复）+ 删 journal 文件。
- `fix_orphan_thread_providers_with_catalog`：备份 DB（`databaseBackups`）→ 4 个 UPDATE 变体收养 → 失败 `ROLLBACK` → 写 `thread-provider-adoptions` recovery。⚠ 带 `archived=0` 守卫但仍是批量改 `model`/`model_provider`。
- `rollback_orphan_thread_adoption` / `with_orphan_adoption_rollback`：改 DB 回滚。
- `apply_thread_metadata_rollout_adoption` / `restore_thread_metadata_rollout_adoptions`：改 rollout/DB。

### 进程 / Codex 重启（sidecar）
- `set_codex_no_account_slots` 后端命令**无 Codex 重启执行体**：不 kill/spawn Codex，只 persist + `router_transition::run` + 可选 `launch_codex_app_warning`（警告）；实际重启由前端按 `relaunch` 出参触发（`_r` 在 `routerEnabled && noAccountMode` 时强制 `relaunch=true`）。⚠ 前端「保存即重启」是**前端侧**默认行为，非后端命令直接执行。
- 诊断 orphan 收养走同进程 DB 事务（prepare/apply/rollback/mark_recovery），不杀进程。

### 内存突变（非落盘但改变运行态）
- relay 翻译层各 `push_*_block`/`close_*` 不在本批范围（translator bundle）。

## 证据指针

- 6dims 详实分析：`raw/aimami/1.2.4/macos-arm64/version-delta/relay-catalog-thread-diag-6dims.md`（19177B，45 函数逐函数清单 + 6dims 全维度）
- 跨平台整合终稿：`raw/aimami/1.2.4/macos-arm64/version-delta/DELTA-FINAL-1.2.4.md`（27345B，4 条主题主线 + 双平台差异 + 6dims 总表 + 破坏性副作用全编目）
- changelog↔前端对账：`raw/aimami/1.2.4/macos-arm64/version-delta/CHANGELOG-FRONTEND-ALIGNMENT-1.2.4.md`（15481B，6 条 changelog 逐条对账）
- 前端 CCF delta：`raw/aimami/1.2.4/macos-arm64/version-delta/FRONTEND-CCF-DELTA-1.2.4.md`
- raw .c 伪代码：见 `pointers/evidence-paths.md`
- baseline bundle：`internal-reverse/audits/macos-1.2.3-relay/`（manifest.json/gate-report.json/README.md/logic/pointers/data/reviews）

## Gate Leaf Status

`implementation_use=false`（delta 轮不独立升档）；`gate_accepted=false`；`full_leaf_100=false`。详见 `gate-report.json`。

## Unknown / Missing

1. `NoAccountModelRestoreEntry` 精确字段集——由 journal 语义 + restore SQL 反推（`model`/`model_provider`/`rollout_path` 等），serialize impl 用 serde derive，逐字段名未在伪代码中以明文 4 字节键全量出现。行为已闭合，仅字节级键枚举不完整，记 `accepted_unknown`。
2. 长度 11/12/13 的 no-account slug 后缀仅给字节片段（`sol`/`luna`/`.6-terra`），不臆造完整商标串；如需完整名请以 IDA `anon_*` 数据符号直读为准。记 `accepted_unknown`。
3. mac `RelayManager::set_codex_no_account_slots` setter body `@0x10079a8a0` 在 manager/ 模块，出本批 5 模块范围；本包覆盖 setter 调用的库层，setter 本体经 DELTA-FINAL 引用。记 `out_of_batch_scope`。
4. `cross_platform_sibling` `windows-1.2.4-relay-catalog-thread-diag` bundle 尚未组装——win delta pseudocode 锚点已存在于 `raw/aimami/1.2.4/windows-x64/version-delta/ida/pseudocode/`（20 文件），6dims doc 记录 14 个 win parity 锚点确认跨平台行为对齐，但无独立 windows gate-report。记 `blocks_start`。

## Action / Non-action

- **可以做**：Polaris 可基于本批 45 个已逆函数的行为语义 + DELTA-FINAL-1.2.4.md 整合结论开始实现 1.2.4 的 no-account-slot 路由 / orphan-adoption / diagnostic-repair 流水线，但不得宣称与 upstream 100% 等价（gate 未闭合）。
- **不要做**：不得把本批的 dim2 覆盖（45 函数）当作 `full_leaf_100` 或 `implementation_use=true` 依据；不得对外发布本包任何内容（红线 23，内部专用）；不得把本批 5 模块的 dim4/dim5/dim6 closed-for-batch 状态外推为全 32 子模块 relay 域的 dim4/dim6 已闭合（全模块 dim4/dim6 仍 not-closed，见 1.2.3 baseline gate-report）。
