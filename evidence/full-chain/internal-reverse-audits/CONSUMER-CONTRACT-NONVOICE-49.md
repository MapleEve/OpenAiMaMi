# Windows 1.2.6 non-voice 49 目标 — 自足消费者合同（consumer contract）

> session: `cc-consumer-reduce-win126-nonvoice49-20260815`
> 性质：消费者面向收口终稿。消费者（实现侧）只读本文件即可读懂每个目标的 DTO / success / error / 副作用 / Unknown 分类，无需翻 raw leaf。
> 授权：仓主本人对话确认 AiMaMi 为自家/已获书面授权产品并下达复刻/逆向工作。本文档只做消费者视角合同提炼，不提升任何实现门。
> 反造假立场：每一条目标终态均以磁盘已落盘的 `manifest.json` + `gate-report.json`（raw leaf 与 internal-reverse bundle 双侧）为准，逐条可追溯到 root `INDEX.jsonl` 对应行。

## 0. 总账（grounded）

| 指标 | 数值 |
|---|---|
| non-voice 目标总数 | 49 |
| DONE（dim1-5 闭合，dim6 留白） | 41 |
| 原 BLOCKED → handler RESOLVED + dim4 字段级闭合（dim6 留白） | 8（0 残留 BLOCKED） |
| voice active count | **0**（voice 全量 out-of-scope，未计入 active） |
| readyToImplement | 0（无任何目标达最高档；dim6 留白） |
| implementation_use / gate_accepted | 全部 false（最高档实现门，保持不变） |

- 门禁分层（诚实区分证据档与实现档）：
  - 41 项 DONE 目标在 **leaf 级**闭合 dim1-5，故 `consumerStartReady=true` + `strictImplementationUse=true`（Gate 1/2，证据档）；但 `readyToImplement=false`、`implementation_use=false`、`gate_accepted=false`（Gate 3 需 strict + dim6 六维门，dim6 留白 → 最高档不闭合）。
  - 8 项原 BLOCKED 目标经 2026-08-16 深挖（round4 actor-channel handler 静态钉死 + round5 vtable 填充枚举 + deep-recovery DTO 字段级闭合）已 **handler RESOLVED + dim4 字段级闭合**（详见 §2）：7 项（除 clean）leaf 级 dim4 闭合、dim6 留白；clean 归位 `semantic_recovery`（非用户面 repo-clean helper，DTO/error/副作用已恢复，`implementation_leaf=false`）。这些是 **leaf 级证据档闭合**，不提升任何实现门。
  - bundle/version 级 `windows-1.2.6-version-delta` 的 gate-report 不因本轮收敛而提升任何档位（load_snapshot decompile_null N0 blocker + dim6 开放，整体不能宣称 readyToImplement）。
- dim6（test/acceptance mapping）是 C5 实现侧工作，本轮逆向侧留白，符合 GATE-SPEC §DIM1-6 定义。
- 平台边界：本文件只覆盖 `windows-x64`；macOS 侧由 `macos-1.2.6-version-delta` 独立闭合，二者互不外推（红线 8 / GATE-SPEC 平台策略）。

---

## 1. DONE 目标（41 项，dim1-5 闭合，dim6 留白）

### 1.1 angle_b（1 项）

| target | owner | DTO / success / error / 副作用 | Unknown |
|---|---|---|---|
| `open_path` | `open_path@0x140b2c530` | 打开指定路径（系统 file-open 语义）；成功=系统打开器返回 ok，失败=路径无效/系统调用错误；副作用=启动外部进程打开路径。dim1-5 closed，dim6 blank | dim6（实现侧验收映射） |

### 1.2 angle_c implementation_leaf_recovered（16 项）

全部落盘 canonical raw leaf（`raw/aimami/1.2.6/windows-x64/backend/**`），gate=`IMPLEMENTATION_LEAF_RECOVERED_FULL_CLOSURE` 或 `PARTIAL_CLOSURE`，`strictImplementationUse=true`（证据级），`readyToImplement=false`，dim6 blank。消费者合同要点：

| target | module | 行为合同摘要 |
|---|---|---|
| `toml_lexical_state_line_is_structural` | core::relay::managed_blocks | TOML 词法状态机判定某行是否结构性行（纯判定，无副作用） |
| `takeover` | core::relay::config_takeover | 配置接管核心（13517B 完整反编译体，86/86 bb） |
| `check_native_off_invalid_openai_thread_models` | core::relay::codex_diagnostic | 校验 native_off 状态下无效 OpenAI 线程模型（诊断判定） |
| `write_orphan_thread_adoption_recovery` | core::relay::codex_diagnostic | 孤儿线程收养恢复写（⚠ 破坏性写线程元数据 rollout） |
| `stability_issue` | core::relay::codex_project_state | 项目状态稳定性判定 |
| `repair_if_needed` | core::relay::codex_project_state | 按需修复（条件性修复，partial closure） |
| `repair` | core::relay::codex_project_state | 执行修复（full closure） |
| `inspect` | core::relay::codex_project_state | 项目状态检查（full closure） |
| `orphan_thread_adoption_row_to_json_MAPFOLD` | core::relay::codex_diagnostic | 孤儿线程收养行转 JSON（MAPFOLD 折叠） |
| `emit_response_done_events_for_delta` | core::relay::translator | 为 delta 发射 response.done 事件 |
| `reconcile_native_off_after_stop_with_progress` | core::relay::manager | native_off 停止后带进度 reconcile |
| `reconcile_inner` | core::relay::codex_config_reconciler | reconcile 内层（73/73 bb 非截断） |
| `preflight_save_cleanup_closure` | core::relay::storage | 保存前清理闭包 |
| `preflight_save` | core::relay::storage | 保存前预检 |
| `staged_file_cleanup_drop` | core::relay::response_item_id_compat | 暂存文件清理 drop |
| `ensure_transition_rollout_write_capacity` | core::relay::codex_thread_visibility | 确保转换 rollout 写容量 |

> 逐函数 DTO 字段/错误信封/副作用边界细节在各 canonical raw leaf 的 `interface-report.json` / `evidence.md` 内，本文件以 module 归组给出消费者可读摘要；实现侧如需逐字段闭合，按 `pointers/evidence-paths.md` 指向对应 raw leaf 读取（不再要求消费者翻 raw 才能判断「能不能动工」——上表已给终态与行为合同）。

### 1.3 angle_c already_in_canonical（22 项，pointer-only correction / 既有 canonical 归位）

全部为「既有 raw leaf 已存在，本轮仅做 pointer 修正 / 归位 / 迁移」，行为合同以既有 canonical leaf 为准：

- `main_cli_daemon_run_once_dispatch`（daemon 派发）
- `auto_switch_daemon_once_core`（core::daemon，daemon-lifecycle 内容级证据）
- `apply_handler_invoke_shared_glue`（commands::relay 共享 glue）
- `get_codex_router_auth_readiness_owner_sys`（core::relay）
- `official_reasoning_profile`（MIGRATED_REFERENCE_CLOSED）
- `is_aimami_owned_model_section`（core::relay::config_takeover，CONFIRMED）
- `translate_anthropic_response_to_output_items`（core::relay::translator）
- `reconcile_router_on`（router_reconciler）
- `repository_auto_switch_gating` / `repository_dispatch_daemon_payload` / `repository_config_repair`（⚠ 含真实破坏性副作用链）/ `repository_resolve_account_state` / `repository_synchronize_account_state` / `repository_apply_account_state` / `repository_resolve_account_transition`（core::repository 簇）
- `resolve_chatgpt_app_bundled_cli_candidates` / `locate_chatgpt_desktop_app` / `codex_bundled_cli_path`（platform::process 簇）
- `append_thread_reconcile_warnings` / `reconcile_native_off_with_progress`（router_reconciler）
- `migrate_legacy_deepseek_v4_flash_official_protocol`（core::relay::storage，⚠ 持久化状态迁移写）
- `commit_auth_for_router`（router_unlock_auth，pointer fixed 2026-08-13）

### 1.4 angle_c 特殊分类（2 项）

| target | 分类 | 说明 |
|---|---|---|
| `coop_budget_poll_wrapper` | tokio_coop_budget_wrapper_confirmed | tokio task::coop 预算轮询 wrapper，非业务行为，无消费者实现面 |
| `generic_enum_option_drop_glue` | trivial_drop_glue_confirmed | 泛型 enum option drop glue，无消费者实现面 |

---

## 2. 8 原 BLOCKED 目标 → handler RESOLVED + DTO 字段级闭合（2026-08-16 深挖 round4/round5/deep-recovery）

> 2026-08-16 三轮深挖（`round4_handler_pinned` actor-channel 静态钉死 + `round5_vtable_deep_recovery` vtable 填充枚举 + `deep-recovery-dto-field-close` DTO 字段级闭合）把 8 个原 BLOCKED 目标的 **handler 身份静态 RESOLVED** + **DTO 字段级闭合**（不再是「动态派发不可恢复／Rust 私有 DTO 无法恢复」的假上限）。这些是 **leaf 级证据档闭合**，`consumerStartReady`/`strictImplementationUse`/`readyToImplement`/`implementation_use`/`gate_accepted` 均不变（dim6 留白 + bundle 级 N0 blocker 仍开放）。

### 2.1 逐目标最终状态（消费者不翻 raw 即可读）

| target | 原 canonical_state | 最终状态 | handler（win 静态钉死地址） | 输入 DTO | 返回 DTO | 错误信封 | 副作用 |
|---|---|---|---|---|---|---|---|
| `angle_b:clean` | BLOCKED_DIAGNOSTIC_ONLY | `semantic_recovery`（非用户面，`implementation_leaf=false`） | `sub_140AF0C50`（706 instr/106 cfg） | unit（无参数） | `CoreEnvelope<CleanResult>` | `CoreError`（AUTH_BACKUP_CLEANUP_INCOMPLETE / REGISTRY_BACKUP_CLEANUP_INCOMPLETE / QUOTA_CACHE_CLEANUP_INCOMPLETE / 'atomic write: missing parent'） | ⚠ remove_file（备份文件）+ MoveFileExW REPLACE_EXISTING（snapshot/quota 覆盖）+ persist_registry(0x140AD1C40)+quota_store::save(0x1404D7BC0) |
| `angle_b:get_claude_web_search_compat` | BLOCKED | RESOLVED（dim4 CLOSED，dim6 留白） | getter `0x14014ade0`（薄壳 manager.request 动态派发→同源 `RelayManager::snapshot` 读 +318） | 无参 | `CoreEnvelope<bool>` | `CoreError`（Display） | 无（只读） |
| `angle_b:set_claude_web_search_compat` | BLOCKED | **handler RESOLVED**（dim4 CLOSED，dim6 留白） | vtable `off_14188A280`[0]=`sub_140E47CD0` → `sub_140DCCD00` → `sub_140958E00` → **`sub_1409B6420`**（lock transition + lock state + clone RelayState(318B) + 比较/写 +318 bool + **`sub_1409C0B10` persist**） | `{enabled: bool}`（serde key@0x101679d55） | `CoreEnvelope<ClaudeWebSearchCompatPayload={enabled}>` | `CoreError`("Codex router transition lock is poisoned") | ⚠ persist RelayState（sub_1409C0B10） |
| `angle_b:set_codex_no_account_slots` | BLOCKED | **handler RESOLVED**（dim4 CLOSED，dim6 留白） | vtable `off_141889D80`[0]=`sub_140E3E7D0` → case0 **`sub_140DC9E00`**（读 payload+validate）+ **`sub_140C774F0`**（字段写+persist+transition） | `{slots: Vec<CodexNoAccountSlot{providerId@8,model@32,catalogSlug@48}>, relaunch: bool}` | `CoreEnvelope<CodexNoAccountSlotsPayload={state,codexLaunchError,warnings}>` | `CoreError`("Codex router transition lock is poisoned") | ⚠ persist + router transition（不直接重启）；relaunch→is_codex_app_running+launch_codex_app_warning |
| `angle_b:get_codex_router_auth_readiness` | BLOCKED | RESOLVED（dim4 CLOSED，dim6 留白） | `0x140547c70` → `sub_140BF9190`(auth)+`sub_1409C2D20`(snapshot)；复合位域 v5\|v4&0xFFFF00FF | 无参 | `CoreEnvelope<i32>` 复合位域（bit0/bit8/bit16/bit24） | 无（恒 ok） | 无（只读 local file open/read/close） |
| `angle_b:remove_mcp_server` | BLOCKED | RESOLVED（dto_field_gap_closed，dim6 留白） | entry `0x140156D90` → facade `0x1409F42E0` → impl `0x1409D0ED0`（= mac `core::mcp::remove_mcp_server`） | `{name: String}` | `CoreEnvelope<Vec<McpServerSummary>>`（envelope=[schemaVersion,success,code,message,payload]） | `CoreError`("no entry found for key") 平铺进 envelope code+message | ⚠ 原子写 codex_config.rs（0x140A6DB10→0x140A6D6A0）+ 内存 MCP 记录移除 |
| `angle_c:run_bundled_cli` | BLOCKED | CONFIRMED（MIGRATED_REFERENCE_CLOSED） | `0x140555b60`（199 行完整非截断） | 内部回退源（非 IPC，无前端 DTO） | `Result<Output>` | `io::Error` | spawn 子进程 + 500ms 超时 kill+wait |
| `angle_c:set_anthropic_thinking_carrier` | BLOCKED | CONFIRMED（100% parity） | `0x140a28fb0`（= mac `0x100a1cdd0`） | 内部 translator 助手（非 IPC，无前端 DTO） | 原地 JSON 变异 | 无 | 无（纯内存 SSE 构造） |

### 2.2 vtable 填充枚举（round4/round5 静态钉死，原「动态派发不可恢复」假上限破除）

- **set_codex_no_account_slots** vtable `off_141889D80`（8 槽，512B 请求信封 offset0=tag 0xCC / offset16=vtable / offset56=state / offset64+=payload{slots,relaunch}）：`[0]_handle=0x1408083F0=jmp sub_140E3E7D0`、`[1]_dealloc=0x140825630`、`[2]_drop_payload=0x14080B710`、`[3]_poll_await=0x140801580→sub_1413AE230(AtomicWaker)`、`[4]_wake=0x140807610`、`[5][6]_drop_variants=0x140804E80/0x140825B00`、`[7]_size=0x1b0(432B)`。
- **set_claude_web_search_compat** vtable `off_14188A280`（7 槽）：`[0]=0x1408084F0=jmp sub_140E47CD0`、`0x140825630`、`0x14080D350(drop_in_place)`、`0x140802B90(+24 JoinHandle 等待+320B 转交)`、`0x140807710(thunk)`、`0x140805180`、`0x140826000`；apply-glue `sub_140504EE0` 的 `((*a2+16)+24)=0x140802B90`，callback-builder `sub_14085B5A0`（discriminant 0xCC + vtable + `sub_141393940` mpsc send）。
- **correction**：round3 曾把 `((*a2+16)+24)=vtable[3]` 误当 handler 目标；`vtable[3]` 实为 poll/await（response 等待），真正 handler 是 `vtable[0]` 链，静态可钉。

### 2.3 DTO 字段级闭合（serde `serialize_entry` 键字面量，双端一致）

- `ClaudeWebSearchCompatPayload` = `{enabled: bool}`（serde impl mac `0x1005a3380`）。
- `CodexNoAccountSlotsPayload` = `{state@0, codexLaunchError@344, warnings@320}`（serde impl mac `0x1007cf110`）。
- `CodexNoAccountSlot`（72B）= `{providerId@8(String), model@32(String), catalogSlug@48(Option<String>)}`（serde impl mac `0x10059b230`）。
- **`McpServerSummary` 9 字段**（remove_mcp_server 返回 payload，win serializer `0x1404A70C0` = mac `0x1005a14a0`，9 个 serialize_entry 键双端字节偏移一致）：`name@0`、`transport@217`、`enabled@216`、`sourcePath@24`、`command@72`、`args@48(Vec<String>)`、`url@96`、`headers@120(object/map)`、`environment@168(object/map)`。
- **`CleanResult` 3 字段**（clean 返回 payload，serde keys 命中 mac `0x10167a954/0x10167a966/0x10167a97c`）：`authBackupsRemoved: u32`、`registryBackupsRemoved: u32`、`staleEntriesRemoved: u32`。
- **`CoreEnvelope` 错误信封**（所有命令统一）：`{schemaVersion, success, code, message, payload}`；`CoreError` 经 Display 平铺进 envelope 的 `code`(integer)+`message`(string)+`success=false`（err_discriminator `0x8000000000000000`，无嵌套 error DTO）。

### 2.4 前端 CCF 闭合

- `get_claude_web_search_compat`：MaintenancePage 读 `response.data.enabled`（toggle 默认 true、pending 禁用、mutation invalidate、成功/失败 toast）。
- `remove_mcp_server`：MCP 行 hover/focus-within 删除图标 → `setPendingName(server.name)` → 确认框 `pendingName!=null` 时 `removeMutation.mutate(pendingName)`；onSuccess `setPendingName(null)` + invalidate `["mcp-servers"]`；onError toast `mcp.operationFailed`。前端不回读返回 payload。
- `clean`：maintenance-page 按钮 `w('clean', ()=>F.mutateAsync())`；onSuccess `toast maintenance.cleanResult(authBackupsRemoved, registryBackupsRemoved, staleEntriesRemoved)`；onError `toast String(t)`。

> 逐目标字段级证据原始出处：`raw/aimami/1.2.6/windows-x64/{commands/relay/set_codex_no_account_slots, backend/claude-web-search-compat, backend/core/mcp/remove_mcp_server, commands/repo/clean, backend/codex-router-auth-readiness}/` 的 `interface-report.json` + `crossmap-dim4-field-level.json`。dim6（test/acceptance 映射 + 真机对照）为 C5 实现侧工作，本轮逆向侧留白（红线 25）。

---

## 3. 非动作声明（non-actions）

- 本文件是消费者面向收口，不做任何 IDA 调用 / rename / idb_save / raw leaf 重写。
- 不提升任何实现门字段；41 项 DONE 的 dim1-5 闭合 ≠ 实现放行。
- voice 目标（voice/audio/capture/runtime-settings/trigger-listener）全量 out-of-scope，本文件不计入 active，voice active count=0 硬门满足。
- 不写产品仓、不公开发布；逆向制品只落内部 SMB 卷。
- 未做真机/live-reference 对照（红线 25，用户本轮明确跳过 dim6）。

## 4. 消费者读取指引

- 逐函数 DTO/错误信封/副作用边界 → 各 canonical raw leaf `interface-report.json` + `evidence.md`（`pointers/evidence-paths.md` 给出 env 相对路径）。
- 四角度/六维门 → `audits/windows-1.2.6-version-delta/manifest.json` / `gate-report.json`。
- 版本级消费者终稿 → `audits/COVERAGE-FINAL-1.2.6.md` + `BASELINE-FINAL-1.2.6.md`。
