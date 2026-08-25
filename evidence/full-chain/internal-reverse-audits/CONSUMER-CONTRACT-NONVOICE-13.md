# macOS 1.2.6 non-voice 13 目标 — 自足消费者合同（consumer contract）

> session: `cc-consumer-reduce-mac126-nonvoice13-20260815`
> 性质：消费者面向收口终稿。消费者（实现侧）只读本文件即可读懂每个目标的 DTO / success / error / 副作用 / Unknown 分类与终态，无需翻 raw leaf。
> 授权：仓主本人对话确认 AiMaMi 为自家/已获书面授权产品并下达复刻/逆向工作。本文档只做消费者视角合同提炼，不提升任何实现门。
> 反造假立场：每一条终态均以磁盘已落盘的 `manifest.json` + `gate-report.json` + root `INDEX.jsonl`（`aimami/1.2.4-1.2.6/macos-arm64/delta-commands-fullchain-leaf-20260809` 行）为准，逐条可追溯。

## 0. 总账（grounded，2026-08-15 现场读盘）

| 指标 | 数值 |
|---|---|
| delta 权威口径（`VERSION-DIFF.md` v2-live-verified） | added **45**（20 functional + 25 serde-DTO）／ removed **23**（6 functional + 17 serde） |
| voice_runtime delta 命令（added） | **7**（全量 out-of-scope，active=0） |
| non-voice functional delta 目标（added+removed） | **13**（7 added + 6 removed/renamed） |
| serde-DTO delta | 42（25 added + 17 removed，dim4 相关，符号级） |
| non-voice 显式叶（`implementation-targets.txt`） | 1（`get_codex_router_auth_readiness`，BLOCKED） |
| voice active count | **0**（voice_runtime 7 命令 + 16 业务函数全量 out-of-scope，未计入 active） |
| readyToImplement / implementation_use / gate_accepted | 全部 false（dim6 留白 + LIVE_REFERENCE_NOT_RUN） |

- 关于派发前提「37 delta 命令（voice 7 + non-voice 30）」：**现场读盘未能精确复现 37/30 这两个数**。权威符号 diff（`intermediate/aimami/1.2.6/macos-arm64/version-delta/VERSION-DIFF.md` 与 `delta-commands.txt`，均 v2-live-verified）记录的是 added 45 / removed 23；其中 **voice_runtime=7 与派发口径精确一致**，non-voice functional=13、serde-DTO=42。本文以磁盘权威数为准，不沿用 37/30 的派发估计。
- 平台边界：本文件只覆盖 `macos-x86_64`（反编译实切片，见 `fullchain-target-plan.json.slice_resolution`：`macos-arm64` 目录标签实为 x86_64 切片）；Windows 侧由 `windows-1.2.6-version-delta` 独立闭合，二者互不外推（红线 8）。
- dim6（test/acceptance mapping）是 C5 实现侧工作，本轮逆向侧留白，符合 GATE-SPEC §DIM1-6 定义；`LIVE_REFERENCE_NOT_RUN`（红线 25，未启动参照 App）。
- **非命令后端 angle-D 验证（2026-08-16）**：1639 个非命令后端函数已 angle-D 四分类核验——183 already_in_canonical + 66 glue/local_outtake + 2 fullchain（即 §1.4 新增 2 个 truly_undone 收口）+ 其余 baseline 符号迁移。根 `four-angle-d-classification-exhaustive.json` `four_categories_rollup_251` 落盘核验：`truly_undone 2→0`、`already_in_canonical 183→185`、`deep_leaf_1_2_6 3→5`。
- **truly_undone 归零为真零**：此前 `truly_undone=0` 是 BOUNDED 2-regex angle-C 假零（session `cc-mac126-non-command-backend-fullchain-20260815` 判明 5 非命令后端簇 proxy_server/single_instance/daemon/legacy_migrated_threads/translator 共 25 semantic leaf 真实实现）；angle-D 穷尽枚举重算出唯一 2 个真缺口，已由 `cc-mac126-truly-undone-fullchain-20260816` fullchain 收口。现非命令后端 truly_undone 为真零，详见 §1.4。

---

## 1. non-voice functional delta（13 目标）

> 闭合口径：2026-08-09 `delta-commands-fullchain-leaf-20260809`（root `INDEX.jsonl` key `aimami/1.2.4-1.2.6/macos-arm64/delta-commands-fullchain-leaf-20260809`，status=DONE，`delta_gate_leaf_100=true`，`adversarial_verified=true`，adversarial 结果 `7/7 owner-ea-live-real; 10/10 calltree-edges-readback-exact; rename-chain-live-confirmed`）。
> 该叶在 **delta 级**闭合 dim1（前端 IPC 命令在 134 IPC 宇宙内）/ dim2（owner EA live 定位）/ dim3（call tree 到实现叶）/ dim5（x86_64 同平台活体证据）；**dim4 已于 2026-08-15 补齐 body 级反编译**（session `cc-dim4-nonvoice13-body-20260815`，live x86_64 IDB `AiMaMi 1.2.6`，`hexrays_ready=true`），13 目标逐字段 DTO/入参/出参/错误封装/副作用边界见 §1.3。dim6 仍留白（实现侧工作）。

### 1.1 added（7 目标，dim1/2/3/5 闭合，dim4 见 §1.3 body 级）

| target | module | 行为合同摘要 | Unknown |
|---|---|---|---|
| `confirm_pending_auto_switch_and_restart_sync` | codexmate_lib::commands::system | 确认待定自动切换并同步重启（commands::system 命令面） | dim4 逐字段 DTO/error；dim6 |
| `remove_mcp_server` | codexmate_lib::core::mcp | 移除 MCP 服务端（⚠ 破坏性：删除服务端配置/条目） | dim4 逐字段 DTO/persistence/error；dim6 |
| `ensure_transition_rollout_write_capacity` | codexmate_lib::core::relay::codex_thread_visibility | 确保转换 rollout 写容量（⚠ 写线程元数据 rollout） | dim4；dim6 |
| `reconcile_threads_with_progress` | codexmate_lib::core::relay::codex_thread_visibility | 带进度 reconcile 线程（`reconcile_threads` 改名后继） | dim4；dim6 |
| `TomlLexicalState::line_is_structural` | codexmate_lib::core::relay::managed_blocks | TOML 词法状态机判定结构性行（纯判定，无副作用） | dim4；dim6 |
| `preflight_save` | codexmate_lib::core::relay::storage | 保存前预检（storage 写前门） | dim4；dim6 |
| `StagedFileCleanup::drop` | codexmate_lib::core::relay::response_item_id_compat | 暂存文件清理 drop（⚠ 文件清理副作用） | dim4；dim6 |

### 1.2 removed/renamed（6 目标，改名链已 live 确认）

| target | 后继 / 裁定 | 行为合同摘要 |
|---|---|---|
| `delete_sessions` | commands::sessions（removed，检查后继） | 会话删除命令面移除，消费者侧核对改名后继 |
| `fallback_relay_model_threads` | → `_excluding` 变体（rename-chain live 确认） | relay 回退模型线程（改名扩参） |
| `patch_relay_thread_instructions` | → `_excluding` 变体（rename-chain live 确认） | relay 线程指令补丁（改名扩参） |
| `reconcile_threads` | → `reconcile_threads_with_progress`（rename-chain live 确认） | 线程 reconcile 核心 |
| `cleanup_for_native_off` | core::relay::router_unlock_auth（removed） | native_off 清理（移除，检查后继） |
| `AnthropicDirectToResponsesStream::flush` | core::relay::translator::stream（removed） | Anthropic 直转 Responses 流 flush（移除） |

---

### 1.3 dim4 body 级逐字段（2026-08-15 live x86_64 反编译，`classification_basis=body_level_decompiled`）

> 全部 13 目标均以 live IDB `AiMaMi 1.2.6`（`imagebase=0x100000000`，x86_64 切片）现场反编译 / callee 全量枚举，逐字段闭合。两超大函数（`confirm_pending_auto_switch_and_restart_sync`、`fallback_relay_model_threads_excluding`）完整伪代码超 MCP 显示上限，但已用 `basic_blocks` + `callees` 全量枚举补齐 side-effect/错误信封/消费字段证据（红线 20 截断桩已识别，未采信截断节点内部逻辑）。

#### added（7 目标）

| target | 地址 / 尺寸 | 入参 → 出参 | 错误封装 | 副作用边界 / 前端消费字段 |
|---|---|---|---|---|
| `confirm_pending_auto_switch_and_restart_sync` | 0x10049ce00 / 0x2c52 | `(result_out, State)` 无显式 DTO 入参 → `CoreEnvelope<SwitchPayload>` | CoreError（`CoreError Display`）+ `switch_error_code` + `finish_switch_failure`/`finalize_failed_switch_runtime` | ⚠ 确认待定账户切换 + 进程重启：`CodexMutationGate::lock`→`FileLock::acquire`→`CodexTransitionFence::acquire_with_policy/finish`→`Repository::confirm_pending_auto_switch`→`Repository::switch_account`→`CodexProcessLifecycle::launch`（重启）→`verify_account_switch(_after_launch)`→`finalize_committed_switch`。前端消费 `SwitchPayload` |
| `remove_mcp_server`（commands 包装） | 0x1007cbfc0 / 0x7ed | `(dst, a2, State, payload)` → `CoreEnvelope<Vec<McpServerSummary>>` | CoreError | `CodexMutationGate::lock("removing an MCP server…")`→委托 core→`load_mcp_servers`→`CoreEnvelope::ok`。Mutex lock/unlock。前端消费 `Vec<McpServerSummary>` |
| `remove_mcp_server`（core 实现） | 0x1009f31d0 / 0xcee | `(out, cfg_path, cfg_len, name, name_len)` → Result | `"no entry found for key"` / io error | ⚠ 破坏性：读 `codex_config`（`read_text`）→`parse_mcp_document`→HashMap 查名删除→`join_generic_copy` 重拼 TOML→`atomic_write::write_atomic_with_mode` 改写配置文件；重试 3 次防并发改写 |
| `ensure_transition_rollout_write_capacity` | 0x10076d070 / 0x17a4 | `(out, ctx)` → Result | 磁盘不足错误 | `fs2::statvfs` 磁盘探测→`all_codex_state_dbs`→`open_codex_db_readonly`→`collect_provider_convergence_targets`→`find_trusted_rollout_backup`→容量累加排序比对阈值。`app_event("router_transitioncapacity_preflight"/"capacity_preflight")`。无破坏性副作用 |
| `reconcile_threads_with_progress` | 0x1007507c0 / 0x145b / 140bb | `(out, ctx, args, progress_counter, progress_cb)` → Result | 结果枚举 | 5 阶段 `Instant` 计时：`repair_missing_rollouts_for_convergence`→`converge_threads_to_provider`→(cond)`patch_relay_thread_instructions_excluding`→(cond)`fallback_relay_model_threads_excluding`→`collect_active_rollout_paths`→`cleanup_private_reasoning_items_in_existing_rollout`（rayon 并行）。`app_event("thread_reconcile"/"phase_split")` 汇报各阶段；进度回调 `(counter, idx, total)` |
| `TomlLexicalState::line_is_structural` | 0x1007c0a00 / 0x1d5 | `(state*, bytes, len)` → bool | 无 | 纯判定：state 0=双引号串内 / 1=单引号串内 / 2=结构性；识别三重引号/转义/注释。无副作用 |
| `preflight_save` | 0x100773b70 / 0x4f5 | `(out, paths, value)` → Result | `"relay state path has no parent directory"` / io error | `ensure_directories`→`Path::is_dir`→`metadata`→`OpenOptions::_open`→`serde_json::to_vec_pretty`→uuid v4 临时名→`write_atomic_with_mode` 原子写；⚠ 失败时 `remove_file` 清理临时文件。caller `RelayManager::preflight_repair_state_write` |
| `StagedFileCleanup::drop` | 0x100229840 / 0x186 | `(self)` → () | Error::kind 检查后忽略 NotFound | ⚠ 破坏性：`std::sys::fs::remove_file` 删除暂存文件。caller `repair_invalid_ids_in_rollout` |

#### removed/renamed（6 目标，红线 32 body 级裁定）

| target | 地址 / bb | 红线 32 裁定（basic_blocks + callee） |
|---|---|---|
| `delete_sessions`（commands::sessions 命令包装器 removed） | core 体 0x10078f150 / 0x1af1 | 命令层移除，core::sessions::delete_sessions 仍在。core 体：SQL `DELETE FROM thread_spawn_edges WHERE child_thread_id=?1 OR parent_thread_id=?1` + `DELETE FROM threads WHERE id=?1`；⚠ 破坏性 `remove_file` + `read_to_string`（rollout index JSONL）→serde 解析 `id/status/completed`→`write` 回写。出参 HashMap 结果集 |
| `fallback_relay_model_threads` → `_excluding` | 0x100760be0 / 182bb | 改名扩参（新增 excluding）。`load_model_restore_journal`→`open_codex_db_for_convergence`→`read_thread_columns`→`patch_model_fallback_rollout`→`rollback_model_fallback_failure`→`thread::sleep`→`DirBuilder::create`→`to_vec_pretty`→`fs::write`。字符串 `router_no_account_model_restore.json` / `gpt-5.5` |
| `patch_relay_thread_instructions` → `_excluding` | 0x100770980 / 40bb | 改名扩参。`find_reference_instructions`→`collect_active_rollout_paths`→`patch_instructions_rollouts_serial`（>7 项 rayon 并行） |
| `reconcile_threads` → `reconcile_threads_with_progress` | 0x1007507c0 / 140bb | 改名 + 新增进度回调参数（见 added #4） |
| `cleanup_for_native_off`（router_unlock_auth） | — | 1.2.6 `func_query` 零命中，确认移除（非改名） |
| `AnthropicDirectToResponsesStream::flush` | — | 1.2.6 该 struct 方法集合（handle_event/capture_usage/ensure_created/fail_with_type/with_tool_maps/finish_response/responses_event/close_all_blocks/close_anthropic_block/close_anthropic_tool_block/feed_line）无 `flush`；兄弟流 ChatToResponsesStream/AnthropicToOpenAiStream/OpenAiToAnthropicStream 仍有 `flush`。确认移除 |

- 红线 32 跨版本 body-vs-body diff 说明：3 个改名的旧名（无 `_excluding`/`_with_progress` 后缀）在 1.2.6 `func_query` 零命中，确认已改名消失；跨版本旧体（1.2.4）对比需 1.2.4 IDB（当前未挂载，版本切换为用户专属操作，红线），本轮以 1.2.6 侧 bb/callee 全量枚举 + 既有 `rename-chain-live-confirmed` 证据（dim2/3/5）为准，无 `genuine_ceiling`/假墙。

---

### 1.4 非命令后端 fullchain（2 新增，angle-D truly_undone 收口，非 13 delta 目标）

> 口径：这 2 个函数是 angle-D 穷尽枚举重算出的**唯一 2 个真缺口（truly_undone）**，属非命令后端（backend-only，dim1=N/A，无前端 IPC 面）。两者 gate 均为 `consumerStartReady=true` + `strictImplementationUse=true` + `readyToImplement=false`（dim6 留白 + LIVE_REFERENCE_NOT_RUN）。

| target | 地址 / 尺寸 | 行为合同 | 入参 → 出参 | 错误封装 | 副作用边界 |
|---|---|---|---|---|---|
| `is_relay_protocol_object`（core::relay::translator） | 0x1009fb2b0 / 0x2fa | relay 协议对象字段级校验器：遍历 JSON 对象每个 key，memcmp 二分搜索 + 按 key 长度 switch 的 SIMD 字符串比对，判定 key 是否属已知 relay 协议 key 集（保留/剥离） | `(key_ptr, key_len) → i32`（1=是 relay 协议对象保留，0=不是剥离） | a1==null 返回 0；key 长度 default 分支 / 内容不匹配返回 0 | 纯谓词，无 OS/文件/网络副作用；唯一 callee memcmp。调用方 `strip_relay_unsupported_fields_inner@0x100a2bea0`（3 处 xref） |
| `migrate_legacy_auth_state`（core::relay::router_unlock_auth） | 0x100733fe0 / 0x1b9 | legacy 虚拟认证态迁移：ensure_directories → join `.live-auth.lock` → FileLock::acquire("live auth") → marker_exists/has_residue 分支 cleanup_unlocked/cleanup → 释放锁 | `(ctx: *const CodexPaths) → Result<MigrateOutcome, MigrateError>`（写 *a1 输出缓冲） | Ok=11（字段 cleaned bool@8）；Err(ensure_directories)=2；Err(acquire)=透传 v7+84B 载荷；Err(cleanup)=透传 v12/v17+87B 载荷 | ⚠ `legacy_virtual_auth::cleanup`/`cleanup_unlocked` 清理 legacy 虚拟认证标记/残留（写本机 auth 状态，破坏性属迁移正常功能）。调用方 prepare_auth_for_router / restore_real_auth_for_router / reconcile_native_off_with_progress / fix_router_unlock_auth_residue（4 处 xref） |

- **字段级 DTO 提取**：两函数 `field_level_dto_extraction=PASS`（`migrate_legacy_auth_state` 判别值/字段偏移/载荷大小/错误路径逐字节提取，serde Serialize impl 明确 N/A——backend-only 非 IPC 序列化路径，如实标注非 PASS 掩盖）。
- **反截断（红线20）+ 假墙排除（红线13）**：2/2 无 `[N chars total]` 截断、非 drop_in_place/async shim/vtable、VA `get_func(ea).start_ea == ea` 验证、0 accepted_unknown / 0 genuine_ceiling。
- **落盘（各 2 叶七件套）**：`raw/aimami/1.2.6/macos-arm64/core/relay/translator/is_relay_protocol_object/` 与 `raw/aimami/1.2.6/macos-arm64/core/relay/router_unlock_auth/migrate_legacy_auth_state/`（manifest.json + gate-report.json + evidence.md + interface-report.json + call-tree.json + ida/pseudocode/*.c + data/producer-ledger.json）。

---

## 2. BLOCKED 目标（1 项，实现门 false，blocks_start 已诚实记录）

| target | canonical_state | blocks_start |
|---|---|---|
| `get_codex_router_auth_readiness` | diagnostic-only-live-reference-required | ① 仅 dispatcher 级 canonical leaf，core owner 本体未展开为消费者 DTO/error/side-effect 合同 ② `LIVE_REFERENCE_NOT_RUN`（红线 25）③ dim6 acceptance 未产出（实现侧工作）。`consumerStartReady=false`，`implementation_use=false`、`gate_accepted=false` |

---

## 3. serde-DTO delta（42 符号，dim4 相关，符号级）

- added 25 + removed 17。含 `codexmate_lib::core::relay::models`（`RelayProvider` / `RelayState` / `RelayUpsertInput` 等）与 `codex_thread_visibility` 类型。
- 口径：符号名 diff 精确匹配，未做 body-hash/字段布局逐项比对；消费者如需逐字段 DTO 闭合，须先补 body 级反编译（红线 32）。

---

## 4. 非动作声明（non-actions）

- 本文件是消费者面向收口；dim4 轮（2026-08-15）做了 live IDA 只读反编译 / basic_blocks / callees 枚举（无 rename / idb_save / raw leaf 重写），证据见 §1.3。
- 不提升任何实现门字段；13 目标的 dim1/2/3/5 闭合 ≠ 实现放行（dim4 逐字段 + dim6 留白）。
- voice 目标（voice/audio/capture/runtime-settings/trigger-listener）全量 out-of-scope，本文件不计入 active，voice active count=0 硬门满足。
- 不写产品仓、不公开发布；逆向制品只落内部 SMB 卷。
- 未做真机/live-reference 对照（红线 25，dim6 留白）。

## 5. 消费者读取指引

- delta 权威口径 → `intermediate/aimami/1.2.6/macos-arm64/version-delta/VERSION-DIFF.md` + `delta-commands.txt` + `removed.txt`。
- 逐函数 owner/call-tree/改名链 → root `INDEX.jsonl` 的 `aimami/1.2.4-1.2.6/macos-arm64/delta-commands-fullchain-leaf-20260809` 行。
- 四角度/六维门 → `audits/macos-1.2.6-version-delta/manifest.json` / `gate-report.json`。
- 版本级消费者终稿 → `audits/COVERAGE-FINAL-1.2.6.md` + `BASELINE-FINAL-1.2.6.md`。
