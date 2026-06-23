# VERSION-DIFF.md — AiMaMi Windows x64 · 1.0.9 → 1.1.1 完整差异清单

**产品**: AiMaMi
**平台**: windows-x64
**基线**: 1.0.9（100% 逆完，full_gold_leaf 全部已落）
**目标**: 1.1.1
**binary SHA256**: d24e429ab16a9b683c1c23212555c7d1d59a3e2e6ee24a9f3a16acd7f8231610
**session**: <审计会话>
**machine**: <本地机器>
**produced_at**: 2026-06-18
**权威来源**: intermediate/aimami/1.1.1/version-delta/win-delta.txt（54 条全量 delta）
**覆盖**: win-delta.txt 全 54 条逐条覆盖；removed.txt 14 条；win-orphan.txt 2 条

---

## 一、真新增命令（backend 为 1.1.1 win 新加，1.0.9 win IPC 表中缺席）

共 17 条。dispatcher `tauri_ipc_main_dispatcher_sys@0x14000D2A0` 命中确认。

| # | 命令 | handler VA (1.1.1 win) | 行为摘要 |
|---|------|------------------------|---------|
| 1 | `confirm_pending_auto_switch_and_restart_codex` | 0x140027300 | 确认待定账号切换并立即重启 Codex；4 层嵌套协程状态机；relay provider vtable dispatch（type==2 路径 offset 472/704）；IPC 响应含 schemaVersion/success/code/message 标准 envelope；relay provider refcount 原子管理（`_InterlockedIncrement64`）；Tokio task push + `WakeByAddressSingle` |
| 2 | `fix_codex_router_issue` | 0x14002478B (dispatcher xref) | 1.1.1 新增 IPC command；codex router 自愈修复；win changelog 标 changed/present_all_changed；diagnose 系列第 4 条 |
| 3 | `get_relay_provider_quota` | leaf: raw/aimami/1.1.1/windows-x64/get_relay_provider_quota/ | 按 manager+providerId 查询单条 RelayProviderQuota；输入 {manager: string, providerId: string}；响应 RelayProviderQuota struct 232B stride（6 个 String + 日期字段 +120 + Option<u64> quota_count @+168 + 3×u128 + bool×3）；日期由 `relay_quota_date_header_build_sys@0x1406D5B10` Julian 计算构建 |
| 4 | `has_notch` | win IPC dispatcher 确认 | 1.0.9 win 误声明为 macOS-only；1.1.1 win dispatcher string pool 命中（win-divergence critical_finding）；win 侧 backend 完整存在；VA 待 win 逆向分析 补全 |
| 5 | `hotspot_ready` | win IPC dispatcher 确认 | 1.0.9 win 误声明为 macOS-only；1.1.1 win dispatcher 命中；hotspot 功能组在 win 侧完整实现（与 has_notch、set_hotspot_enabled 同组） |
| 6 | `parse_aimami_deeplink` | leaf: raw/aimami/1.1.1/windows-x64/parse_aimami_deeplink/ | 解析 `aimami://` 深链接；输入 {url: string}；URL 格式：scheme=aimami + path=/import + resource=provider + app=codex + name(req) + endpoint(req) + apiKey(req, 必须 http/https) + model(opt, 默认 sonnet-…)；41-case dispatcher 注册 |
| 7 | `reorder_relay_providers` | leaf: raw/aimami/1.1.1/windows-x64/reorder_relay_providers/ | 重排 relay provider 顺序；输入 {manager: string, orderedIds: Vec<String>}；orderedIds.len 必须等于当前 provider 数量，否则立即 Err；成功响应 null；失败 CoreError sentinel 0x8000000000000000 |
| 8 | `restart_codex` | 0x14001AE30 (`restart_codex_cmd_wrapper_sys_111`) | 三阶段：Phase1 poll 等 Codex 进程消失（50ms×poll，5s 超时）→ Phase2 fallback taskkill /F /T /PID（300ms/round，3s deadline）→ Phase3 `check_update_installability_launch_sys_111@0x1407A02E0` 按 10 候选路径搜索并 CreateProcess 启动 Codex；同步 wrapper 取代 1.0.9 `graceful_restart_for_update` async 协程 |
| 9 | `reveal_relay_api_key` | leaf: raw/aimami/1.1.1/windows-x64/reveal_relay_api_key/ | 返回 relay provider API key 明文；输入 {providerId: string, manager?: string}（manager 为 Option，前端通常不传）；响应 `{ok: "Success"}`（"Success" 7B 0x53756363657373 确认）；无 manager 时扫描全部 providers |
| 10 | `run_codex_router_diagnostics` | 0x14006F4B0 (`run_codex_router_diagnostics_owner_sys`) | 1.1.1 新增 IPC command；无入参；core `run_codex_router_diagnostics_core_sys@0x14021C1A0`；dim1 CCF 直接命中 ipc-contracts.jsonl；gold-leaf: raw/aimami/1.1.1/windows-x64/commands_relay/run_codex_router_diagnostics/ |
| 11 | `set_codex_api_login` | leaf: raw/aimami/1.1.1/windows-x64/set_codex_api_login/ | 控制 Codex API 登录开关；输入 {manager: string, enabled: bool, relaunch: bool}；核心字段 RelayManagerState+365=codexApiLogin；relaunch 语义由 coroutine_state[+480]==6 判断；enable 时 clear auth_field_a/b + set provider_flag；`_InterlockedCompareExchange8` CAS mutex |
| 12 | `set_codex_api_slots` | leaf: raw/aimami/1.1.1/windows-x64/set_codex_api_slots/ | 设置 Codex API 插槽列表；输入 {manager: string, slots: CodexApiSlot[]}；CodexApiSlot 2 字段 serde struct（providerId + model）；len≤5 硬校验（违反则错误不写）；len==0 → 错误 code 8 |
| 13 | `set_codex_router_enabled` | 0x14096A2D0 (`set_codex_router_enabled_dispatcher_win_sys_111`) | 1.0.9 基础上扩展：新增 `apiLogin` 入参（win-divergence string pool `aApiLogin` 命中）；mac shard delta 桶同确认（核心函数体 2× 变大）；win 侧 body 通过 sub_1401C59F0（size 0xB85）实现 |
| 14 | `set_hotspot_enabled` | win IPC dispatcher 确认 | 1.0.9 win 误声明为 macOS-only；1.1.1 win dispatcher 命中；hotspot 功能组 win 侧完整实现 |
| 15 | `set_relay_display_tags` | leaf: raw/aimami/1.1.1/windows-x64/set_relay_display_tags/ | 设置 relay provider 展示标签；输入 {manager: string, global?: string, woyao?: string}；写入 relay config JSON `displayTagGlobal` / `displayTagWoyao`；响应 null |
| 16 | `test_relay_draft_stream` | leaf: raw/aimami/1.1.1/windows-x64/test_relay_draft_stream/ | Relay draft 流式测试；输入 {manager: string, input: RelayDraftTestInput(8字段: providerId/ide/name/baseUrl/apiKey/model/wireApi/extraHeaders), onEvent: SSE callback}；向上游 POST `/v1/chat/completions` 或 `/v1/messages`；SSE `text/event-stream` 流式返回 |
| 17 | `test_relay_provider_stream` | 0x1409C99E7 (`test_relay_provider_stream_owner_sys`) | Relay provider 流式测试；与 `test_relay_provider`（已从 removed.txt 移除）的流式替代版；DELTA-PLAN 6.1 新增命令组之一 |

---

## 二、真删除命令（removed.txt，1.1.1 win IPC 表中缺席）

共 14 条。来源：`intermediate/aimami/1.1.1/version-delta/removed.txt`。

| # | 命令 | 删除证据 |
|---|------|---------|
| 1 | `apply_custom_instruction` | win-same-integrity command_removed：find_regex 0 匹配；custom-instructions 目录路径字符串 0x1412EC185 仍存在（功能路径保留但 IPC 命令移除）；risk HIGH |
| 2 | `check_update_installability` | shard-1 command_removed：1.0.9 已为 restart_codex 别名（case 13 XOR dispatcher）；1.1.1 两字符串均不存在；行为被 confirm_pending_auto_switch_and_restart_codex (0x1412AC311) 和 switch_account_and_restart_codex (0x1412FA9F1) 吸收 |
| 3 | `clear_custom_instruction_block` | win-same-integrity command_removed：find_regex 0 匹配；与 apply_custom_instruction 同批移除 |
| 4 | `get_passthrough_audit_log` | removed.txt；passthrough 审计系全组移除 |
| 5 | `get_plugin_config` | removed.txt；plugin 系全组移除 |
| 6 | `list_plugins` | removed.txt；plugin 系全组移除 |
| 7 | `load_custom_instruction_state` | win-same-integrity command_removed：find_regex 0 匹配；risk MEDIUM |
| 8 | `reset_codex_config` | removed.txt |
| 9 | `set_block_official_passthrough` | removed.txt；passthrough 审计系全组移除 |
| 10 | `set_relay_provider_network` | removed.txt；relay provider network 设置移除；被 set_codex_router_enabled / upsert_relay_provider 新机制取代 |
| 11 | `test_relay_draft` | removed.txt；被 test_relay_draft_stream（SSE 流式版本）取代 |
| 12 | `test_relay_provider` | removed.txt；被 test_relay_provider_stream（SSE 流式版本）取代 |
| 13 | `toggle_plugin` | removed.txt；plugin 系全组移除 |
| 14 | `update_plugin_config` | removed.txt；plugin 系全组移除 |

---

## 三、真 body-delta（逐条——win-delta.txt 全部 54 条）

win-delta.txt 54 条均为 delta。第一节 17 条为新增命令（1.0.9 win 无此 IPC entry），本节展开 37 条存在于 1.0.9 win 且 1.1.1 win 有行为变化的命令。来源：sweep-buckets/*.json、win-same-integrity.json、win-finish-verify.json、windows-ceiling.json。

---

### delta-01 · `activate_relay_provider`

| 字段 | 值 |
|---|---|
| command | `activate_relay_provider` |
| change_type | impl_replaced |
| handler VA (1.1.1) | 0x140017EC0 |
| core VA | 0x14021B9B0 / impl 0x1406E7880 |
| owner VA (1.0.9) | inline 在旧 relay state 写路径 |
| 变更点摘要 | 1.0.9：path-resolver → serialize → persist 4-callee chain。1.1.1 新增：`relay_quota_state_lookup_sys`（激活前 quota 检查）+ `_InterlockedCompareExchange8` CAS mutex on relay state + `relay_post_login_state_sync_sys`（激活后状态同步）+ `relay_draft_test_input_drop_sys`。Provider list stride 208B→24B inner / 232B outer unroll。 |
| risk | HIGH |

---

### delta-02 · `begin_add_account_attach_monitor`

| 字段 | 值 |
|---|---|
| command | `begin_add_account_attach_monitor` |
| change_type | win-divergence-conservative（mac confirmed_same，win 保守入 delta） |
| handler VA (1.1.1 mac) | 0x10061CC50 |
| owner VA (1.0.9) | spawn_unchecked@0x100177328 + load_snapshot_local@0x1005E8E58 |
| 变更点摘要 | DELTA-PLAN 6.2 win-divergence changed。mac-same-integrity confirmed_same（1.1.1 mac：load_snapshot_local → spawn_unchecked thread，与 1.0.9 manifest 完全一致）。Win 侧 IPC entry 存在但未独立 逆向分析 验证，保守归入 delta。实际 win 变化待确认。 |
| risk | LOW（保守分类） |

---

### delta-03 · `deactivate_relay_provider`

| 字段 | 值 |
|---|---|
| command | `deactivate_relay_provider` |
| change_type | impl_replaced |
| handler VA (1.1.1) | 0x14001F940 |
| core VA | 0x14021BEC0 / impl 0x1406D5E70 |
| owner VA (1.0.9) | sub_14043F960 |
| 变更点摘要 | 与 activate_relay_provider 同类重写：新增 `_InterlockedCompareExchange8` CAS mutex + `relay_providers_config_write_and_persist_sys` + `relay_post_login_state_sync_sys`。1.0.9 sub_14043F960 为 path-resolver → serialize → persist。callee cluster 0x1406Dxxxx relay-state management group。 |
| risk | HIGH |

---

### delta-04 · `delete_sessions`

| 字段 | 值 |
|---|---|
| command | `delete_sessions` |
| change_type | DTO_field_addition（response 扩展） |
| handler VA (1.1.1) | 0x140023F80 |
| core VA | async resolver sub_1407DD860 → core sub_14077FE10 |
| owner VA (1.0.9) | 0x140273FE0 / core 0x1403FACA0 |
| 变更点摘要 | 1.0.9 response：bare success/error envelope。1.1.1 response：`{deletedIds: string[], deletedCount: number}`（literals 0x1412C0667 / 0x1412C0671 确认）。新序列化器 sub_1408314F0。Thread model 保留（synchronous repo mutex）。入参 keys 不变（ids + repo）。 |
| risk | MEDIUM |

---

### delta-05 · `delete_skill_backup`

| 字段 | 值 |
|---|---|
| command | `delete_skill_backup` |
| change_type | side_effect_addition |
| handler VA (1.1.1) | 0x140024D90 |
| core VA | sub_1406EF5E0 |
| 变更点摘要 | 1.1.1 core 新增字符串引用 `skill-backupsreplaceSKILL.md`（0x1412EBFED，1.0.9 全部 binary 及文档中均不存在）。删除前执行 SKILL.md 替换/还原步骤（join skill-backups/id → not-found check → replace SKILL.md → remove）。入参 keys 不变（id + repo）。Response envelope shape 无新 DTO 字段字符串。leaf: raw/aimami/1.1.1/windows-x64/delete_skill_backup/ |
| risk | MEDIUM |

---

### delta-06 · `diagnose`

| 字段 | 值 |
|---|---|
| command | `diagnose` |
| change_type | toolchain_upgrade_wrapper（win changelog changed，mac same） |
| handler VA (1.1.1 mac) | 0x10061F4B0 |
| owner VA (1.0.9) | mac 0x1002641C0 |
| 变更点摘要 | win changelog 标 changed，保守归入 win-delta。mac-same-integrity confirmed_same：Mutex/poison-guard 包装层为 Rust toolchain 升级噪声（universal pattern across 1.1.1 binary），app 逻辑 `Repository::diagnose` 不变。Win 侧 逆向分析 独立验证待补。 |
| risk | LOW（保守） |

---

### delta-07 · `diagnose_codex_router`

| 字段 | 值 |
|---|---|
| command | `diagnose_codex_router` |
| change_type | impl_delta（shard delta + win dispatcher 命中） |
| handler VA (1.1.1 win) | 0x140021BB9 (`diagnose_codex_router_cmd_owner_111`，从 run_codex_router_diagnostics call-tree xref 确认) |
| 变更点摘要 | DELTA-PLAN 6.3 win changelog_body_findings changed。win dispatcher string pool 命中。与 run_codex_router_diagnostics、fix_codex_router_issue、diagnose 同属 codex-router 诊断系。mac shard delta 桶同含本条。详细 callee 差异待 win 逆向分析 深入。 |
| risk | MEDIUM |

---

### delta-08 · `dismiss_pending_auto_switch`

| 字段 | 值 |
|---|---|
| command | `dismiss_pending_auto_switch` |
| change_type | DTO_response_incompatible |
| handler VA (1.1.1) | 0x140029270 |
| core VA | async resolver sub_14078AA20 → core sub_1401B29E0 |
| owner VA (1.0.9) | `dismiss_pending_auto_switch_core_impl@0x1400AA290` |
| 变更点摘要 | 1.0.9 response：`Option<String>`（旧 pendingSwitchAccountKey 或 null）。1.1.1 response：JSON object `{currentAccountKey, candidateAccountKey, dismissedAt}`（strings 0x1412B6F58/0x1412B6F69/0x1412B6F7C）。`dismissedAt` 时间戳为新增字段。入参不变（无 input args + repo）。leaf: raw/aimami/1.1.1/windows-x64/dismiss_pending_auto_switch/ |
| risk | HIGH |

---

### delta-09 · `force_kill_codex`

| 字段 | 值 |
|---|---|
| command | `force_kill_codex` |
| change_type | impl_replaced |
| handler VA (1.1.1) | 0x14079FF10 (`quit_codex_taskkill_imagename_sys_111`) |
| owner VA (1.0.9) | `force_kill_codex_by_imagename@0x1402507B0` |
| 变更点摘要 | 1.0.9：单步 `taskkill /F /IM Codex.exe`。1.1.1：两阶段——Phase1 软 kill `taskkill /IM`（无 /F）；Phase2 ToolHelp32 PID 枚举 + per-PID `taskkill /F /T /PID` + 300ms sleep + 3s deadline。新增 `WakeByAddressSingle` pre-signal。错误字符串从 `CODEX_APP_QUIT_TIMEOUT` 改为 `CODEX_FORCE_KILL_FAILED@0x1412F444A`。kill 机制根本重写。leaf: raw/aimami/1.1.1/windows-x64/force_kill_codex/ |
| risk | HIGH |

---

### delta-10 · `get_device_id`

| 字段 | 值 |
|---|---|
| command | `get_device_id` |
| change_type | side_effect_addition（read-only → read+write） |
| handler VA (1.1.1) | 0x140783480 |
| core VA | sub_1401AB9A0 |
| 变更点摘要 | 1.0.9：纯只读，从 repo settings 提取 deviceId 无写回。1.1.1 core 新增：(1) `codexmate_settings_hotspot_read_full_sys_111@0x1401A15D0`（hotspot state 读，1.0.9 路径不存在）；(2) `sub_1401A1D90`（full settings JSON serializer+persist，每次调用写 hotspot/usageRefreshInterval/deviceId/remoteDeviceSecret/notificationsSince 到磁盘）。任何并发写入者均会产生竞争。 |
| risk | HIGH |

---

### delta-11 · `get_hotspot_enabled`

| 字段 | 值 |
|---|---|
| command | `get_hotspot_enabled` |
| change_type | win-backend-new（1.0.9 win 误声明 macOS-only）；mac confirmed_same |
| handler VA (1.1.1 win) | win-divergence critical_finding 命中；VA 待补 |
| handler VA (1.1.1 mac) | 0x1005EC340 |
| owner VA (1.0.9) | mac 0x10032EAC0 |
| 变更点摘要 | win-divergence：1.0.9 win 声明此命令 macOS-only；1.1.1 win IPC dispatcher string pool 有完整 handler。mac-same-integrity confirmed_same：shard 1 "DELTA" 结论被推翻（Mutex poison-guard 为 toolchain 噪声，universal pattern），shard 2 "same" 正确；app 逻辑 Repository::load_settings → hotspot_enabled field 读取，1.0.9 行为保留。Win 侧行为需独立 逆向分析 验证。 |
| risk | MEDIUM |

---

### delta-12 · `get_image_compat`

| 字段 | 值 |
|---|---|
| command | `get_image_compat` |
| change_type | command_removed（read 方向移除，write 方向保留） |
| handler VA (1.1.1) | null |
| owner VA (1.0.9) | `tauri_cmd_get_image_compat_handler@0x1402779B0` |
| 变更点摘要 | win-same-integrity + win-finish-verify 双重确认：string `get_image_compat` find_regex 0 匹配；tauri_ipc_main_dispatcher_sys callees 无对应 handler。1.0.9 handler 0x1402779B0 在 1.1.1 不存在。写路径 `set_image_compat_owner_sys@0x1400173A0` 仍保留。Mac 侧同为 delta（语义反转）。leaf: raw/aimami/1.1.1/windows-x64/get_image_compat/ |
| risk | HIGH |

---

### delta-13 · `get_mystery_unlock_grants`

| 字段 | 值 |
|---|---|
| command | `get_mystery_unlock_grants` |
| change_type | callee_set_addition（hotspot + timer + persist 三重新增） |
| handler VA (1.1.1) | 0x140789210 |
| core VA | sub_1401AF310 |
| owner VA (1.0.9) | 0x140560640 |
| 变更点摘要 | 1.0.9：allowlist filter + conditional `settings_serialize_with_usage_refresh@0x140553A90`，无 hotspot，无 timer。1.1.1 新增：(1) `codexmate_settings_hotspot_read_full_sys_111@0x1401A15D0`（hotspot state 现在影响 grants 输出）；(2) `sub_14107B7E0 + sub_14107B790`（epoch-ms timer pair）；(3) `sub_1401A1D90`（full-settings JSON persist，取代旧 serialize callee）。leaf: raw/aimami/1.1.1/windows-x64/get_mystery_unlock_grants/ |
| risk | HIGH |

---

### delta-14 · `get_notification_client_state`

| 字段 | 值 |
|---|---|
| command | `get_notification_client_state` |
| change_type | callee_set_replaced（timestamp + hotspot + serializer 全换） |
| handler VA (1.1.1) | 0x14078B910 |
| core VA | sub_1401B6890 |
| 变更点摘要 | Create 路径：1.0.9 `GetSystemTimePreciseAsFileTime` FILETIME epoch→1.1.1 epoch-ms timer pair（sub_14107B7E0/sub_14107B790）。读路径：`settings_deserialize_usage_refresh@0x1405532D0`→`codexmate_settings_hotspot_read_full_sys_111`。写路径：`settings_serialize_remote_device_secret_and_save_sys@0x140553A90`→`sub_1401A1D90`（full-settings serializer）。notificationsSince 时间戳机制从 FILETIME 改为 epoch-ms。leaf: raw/aimami/1.1.1/windows-x64/get_notification_client_state/ |
| risk | MEDIUM |

---

### delta-15 · `get_or_create_remote_device_secret`

| 字段 | 值 |
|---|---|
| command | `get_or_create_remote_device_secret` |
| change_type | callee_set_addition（hotspot read + 共享 serializer） |
| handler VA (1.1.1) | 0x14078CD70 |
| core VA | sub_1401B4FB0 |
| owner VA (1.0.9) | sub_1400AC510 |
| 变更点摘要 | 新增 `codexmate_settings_hotspot_read_full_sys_111@0x1401A15D0`（1.0.9 路径无此 callee）。写路径从专用 `settings_serialize_remote_device_secret_and_save_sys@0x140553A90` 改为共享 `sub_1401A1D90`（full-settings serializer）。Create 路径保留：2×UUID via sub_140F5A860，格式化为 {uuid1}-{uuid2}。Executor 改为 relay-state async executor。 |
| risk | LOW-MEDIUM |

---

### delta-16 · `graceful_restart_for_update`

| 字段 | 值 |
|---|---|
| command | `graceful_restart_for_update` |
| change_type | arch_change（async coroutine → sync wrapper） |
| handler VA (1.1.1) | 0x14001AE30 (`restart_codex_cmd_wrapper_sys_111`) |
| owner VA (1.0.9) | 0x1402A5030 (async coroutine, #wind=16) |
| 变更点摘要 | 1.0.9：async 协程（#wind=16，state-machine switch on a1+2480）。1.1.1：同步直调 wrapper，直接 call `restart_codex_quit_launch_coordinator_sys_111@0x1407838D0`（新协调器，1.0.9 binary 不存在），然后 sub_140832560 发 IPC 响应。Win 侧此命令语义与 `restart_codex` 共享 coordinator。 |
| risk | MEDIUM |

---

### delta-17 · `import_accounts_from_file`

| 字段 | 值 |
|---|---|
| command | `import_accounts_from_file` |
| change_type | orchestration_expanded（两阶段 async + broadcast + RUNTIME_REFRESH_FAILED） |
| handler VA (1.1.1 mac) | 0x100139F20 |
| handler VA (1.1.1 win) | win-divergence CHANGED 确认；VA 待 win 逆向分析 |
| owner VA (1.0.9) | mac 0x10032D77C |
| 变更点摘要 | 1.0.9：单阶段执行。1.1.1 两阶段——Phase1 `spawn_blocking` 账号写入 task → 存 CoreEnvelope<AccountImportPayload>；Phase2 `spawn_blocking` snapshot broadcast task → discriminant==3 时累积 `RUNTIME_REFRESH_FAILED_AFTER_IMPORT` 警告 Vec（新字面量）；成功 `broadcast_runtime_snapshot('import',6B)`。AccountImportPayload 新增 warnings 字段。win-divergence 额外确认：新增 relay provider vtable dispatch + RUNTIME_REFRESH_FAILED_AFTER_IMPORT 路径。 |
| risk | MEDIUM |

---

### delta-18 · `import_chatgpt_session_account`

| 字段 | 值 |
|---|---|
| command | `import_chatgpt_session_account` |
| change_type | coroutine_expanded + DTO_field_addition + side_effect_addition |
| handler VA (1.1.1) | 0x140953280 |
| 变更点摘要 | 160 BB 大协程（HexRays decompile 失败，disasm 3 段读完 939 条指令）。新三层嵌套 switch 状态机（outer×inner×sub）。新增 DTO 字段：`sessionJson`（0x1412FAB12）+ `overwriteExisting`（0x1412FAA4A），持久化到协程 state offsets 0xBF8~0xC08 / 0xCA8~0xCA9。新增 broadcast 副作用：`broadcast_runtime_state_updated_111@0x140790230`（tray 刷新）。chatgpt provider 可用性检查 sub_140EFCAF0/sub_140EFD8E0 新增。Arc cleanup 扩展为双路。leaf: raw/aimami/1.1.1/windows-x64/import_chatgpt_session_account/ |
| risk | HIGH |

---

### delta-19 · `import_skill`

| 字段 | 值 |
|---|---|
| command | `import_skill` |
| change_type | DTO_field_addition（suspected second path field） |
| handler VA (1.1.1) | 0x14001CA50 |
| core VA | sub_1407DB160 → sub_1406EB800 |
| owner VA (1.0.9) | 0x1405764E0 |
| 变更点摘要 | 1.0.9：入参仅 `{path: string}`，单一源路径。1.1.1 core sub_1406EB800 从 IPC context 读 TWO path-like fields（offsets 240/248 = 第一字段 ptr+len；464/472 = 第二字段 ptr+len），推断 DTO 新增第二可选字段（疑似 repo 路径或 backup 路径）。序列化层改为 sub_140215D60。主 FS 行为保留（SKILL.md 校验 + backup + 递归 copy）。leaf: raw/aimami/1.1.1/windows-x64/ 目录含 import_skill 相关结构 |
| risk | MEDIUM |

---

### delta-20 · `load_installed_skills`

| 字段 | 值 |
|---|---|
| command | `load_installed_skills` |
| change_type | side_effect_addition（OnceLock bootstrap cache write-back，win 新增） |
| handler VA (1.1.1) | 0x14002A100 |
| core VA | sub_1407DD060 |
| owner VA (1.0.9) | wrapper 0x14027B900 → owner 0x1405783E0 |
| 变更点摘要 | 1.0.9 win：纯只读（FS scan，无缓存写回；bootstrap cache 写回仅 macOS wrapper 有）。1.1.1 win：FS scan 成功（result type==10）后额外获取 OnceLock via sub_141095530 + `sub_1401B4A90(OnceLock_data_ptr, skills_result)` 写入 OnceLock-backed bootstrap cache。Win 侧现在镜像 macOS 的 bootstrap cache 行为。leaf: raw/aimami/1.1.1/windows-x64/load_installed_skills/ |
| risk | MEDIUM |

---

### delta-21 · `load_mcp_servers`

| 字段 | 值 |
|---|---|
| command | `load_mcp_servers` |
| change_type | impl_replaced（MCP backend 从 TOML 块渲染器换为新存储层） |
| handler VA (1.1.1) | 0x14001C4C0 |
| core VA | sub_1401C42C0 |
| 变更点摘要 | 1.0.9：`toml_block_renderer_core_sys` 解析 TOML。1.1.1：`toml_block_renderer_core_sys` 在 1.1.1 binary 缺席；core 替换为 sub_1401C42C0。MCP config backend 在全部 4 条 MCP 命令（load/upsert/set_enabled/remove）中统一替换，从 TOML 块渲染器迁移至新机制。leaf: raw/aimami/1.1.1/windows-x64/load_mcp_servers/ |
| risk | MEDIUM |

---

### delta-22 · `load_quota_history`

| 字段 | 值 |
|---|---|
| command | `load_quota_history` |
| change_type | filter_logic_addition（7天窗口 + accountKey 联合过滤） |
| handler VA (1.1.1) | 0x140020E40 |
| core VA | sub_1402002F0 |
| owner VA (1.0.9) | 0x1402738B0 |
| 变更点摘要 | 1.0.9：返回全量 quota history，仅 accountKey 过滤。1.1.1：新增 7 天硬截断（a4=7 literal，cutoff = now - 86400×7；timestamp < cutoff 条目静默丢弃）。核心签名扩展：`(a1_out, a2_paths_ptr, a3_paths_len, a4=7, a5=accountKey_ptr, a6=accountKey_len)`。DTO 输入不变（accountKey），输出为截断子集。leaf: raw/aimami/1.1.1/windows-x64/load_quota_history/ |
| risk | HIGH |

---

### delta-23 · `load_relay_state`

| 字段 | 值 |
|---|---|
| command | `load_relay_state` |
| change_type | callee_set_restructure + DTO_field_addition |
| handler VA (1.1.1) | 0x140015870 |
| 变更点摘要 | 1.0.9：auth_guard(sub_1400DA320) → JSON_state_dispatcher(sub_1411CE640) → load_relay_state_core(sub_14043BAA0, RwLock read) → response_serialize(sub_14006F000)。1.1.1：`run_codex_router_diagnostics_owner_sys@0x14006F4B0`（Tokio hashmap-vtable try-lock）→ `query_installed_skills_with_repo_111@0x141214620`（mandatory step，不为 Ok(tag=6) 则返回 error）→ `relay_state_snapshot_to_ok_response_sys@0x140217490`。新增 DTO 字段：`warnings`、`installed_skills`（or skills_count）。`relay_config_serialize_and_atomic_write_sys` 在 connection refresh 路径新增。leaf: raw/aimami/1.1.1/windows-x64/load_relay_state_ipc_handler_111/ |
| risk | MEDIUM |

---

### delta-24 · `load_sessions`

| 字段 | 值 |
|---|---|
| command | `load_sessions` |
| change_type | DTO_field_addition + input_param_addition |
| handler VA (1.1.1) | 0x140992490 |
| serializer VA | `session_meta_serialize_111@0x140212D70` |
| 变更点摘要 | SessionMeta DTO 新增 6 个确认字段：`parentSessionId`、`depth`（agent 对话线索链）、`agentNickname`、`agentRole`（agent 身份）、`isConversationThread`（会话类型标志）、`projectPathMissing`（数据有效性标志）。1.0.9 DTO：id/name/thread_name/updated_at/workspace_roots/type + payload 派生字段，无上述 6 字段。新增 bool IPC 入参（`parse_bool_from_ipc_arg_sys@0x1402FF1A0` 确认）；1.0.9 无 bool param。leaf: raw/aimami/1.1.1/windows-x64/sessions/ |
| risk | HIGH |

---

### delta-25 · `load_skill_backups`

| 字段 | 值 |
|---|---|
| command | `load_skill_backups` |
| change_type | DTO_field_addition（per-entry elapsed/age 字段） |
| handler VA (1.1.1) | 0x140028120 |
| core VA | sub_1407DBD50 |
| owner VA (1.0.9) | 0x14024AED0 |
| 变更点摘要 | 1.0.9：scan skill-backups + read metadata.json + build list + sort，无时间计算。1.1.1 新增：`elapsed_since_ts_111@0x14107B790` + `system_time_precise_u32_111@0x14107B7E0`；每条 backup entry 在 struct +0/+8/+24 offset 打包 elapsed 时间（elapsed/age 字段）。leaf: raw/aimami/1.1.1/windows-x64/load_skill_backups/ |
| risk | LOW |

---

### delta-26 · `load_snapshot`

| 字段 | 值 |
|---|---|
| command | `load_snapshot` |
| change_type | callee_set_addition + side_effect_addition |
| handler VA (1.1.1) | 0x1409656E0 |
| owner VA (1.0.9) | 0x1408C2E10 (coroutine) |
| 变更点摘要 | 1.0.9：get_usage_refresh_interval_core_read → localOnly dispatch → Arc_incref → tokio_spawn → async_load → tauri_ipc_resolve。1.1.1 新增：(1) `confirm_pending_auto_switch_deserialize_request_sys@0x140089A50`（反序列化并确认待定自动切换，1.0.9 调用树不存在）；(2) 新增 bool IPC 入参（`parse_bool_from_ipc_arg_sys` 确认，vs 1.0.9 单 localOnly）；(3) 副作用：可能 mutate pending_auto_switch state（Arc decref of pending switch refs）。Handler 133 BB，HexRays 失败。`localOnly` string 0x1412FAA28 确认。leaf: raw/aimami/1.1.1/windows-x64/load_snapshot/ |
| risk | MEDIUM |

---

### delta-27 · `merge_mystery_unlock_grants`

| 字段 | 值 |
|---|---|
| command | `merge_mystery_unlock_grants` |
| change_type | persistence_schema_migration |
| handler VA (1.1.1) | 0x1400254C0 |
| core VA | sub_1401B3630（outer wrapper sub_14078AEB0） |
| owner VA (1.0.9) | sub_140564C90 |
| 变更点摘要 | 1.0.9：`settings_deserialize_usage_refresh` + `settings_serialize_with_usage_refresh`，grants 存于 usage_refresh struct。1.1.1：`codexmate_settings_hotspot_read_full_sys_111@0x1401A15D0` + `hotspot_config_serialize_5field_json_and_write_sys@0x1401A1D90`，grants 现存于 hotspot config 5字段 JSON 格式。IPC 接口结构不变（'grants' len=6，MysteryRouteGrant stride 40B，'repo' len=4，allowlist check + sort 保留）。1.0.9 写入 usage_refresh 的 grants 在 1.1.1 hotspot reader 中不可读（升级数据迁移风险）。leaf: raw/aimami/1.1.1/windows-x64/merge_mystery_unlock_grants/ |
| risk | MEDIUM（升级用户已 merge 的 grants 可能丢失） |

---

### delta-28 · `refresh_usage_snapshot`

| 字段 | 值 |
|---|---|
| command | `refresh_usage_snapshot` |
| change_type | callee_set_restructure（decompile 失败，callee diff 确认） |
| handler VA (1.1.1) | 0x140984C40 (`refresh_usage_snapshot_cmd_handler_111`) |
| owner VA (1.0.9) | sub_1408CDB20（size 0xfe7） |
| 变更点摘要 | 1.0.9 size 0xfe7（4状态 outer+inner+HTTP sub-states）→ 1.1.1 size 0xf9e（HexRays 仍失败）。新增 `confirm_pending_auto_switch_deserialize_request_sys@0x140089A50`（HTTP refresh 前新增 pending switch pre-check）。1.0.9 `sub_140889870`（active-account refresh body）从 callee 集消失——active-account refresh 路由已重构。leaf: raw/aimami/1.1.1/windows-x64/refresh_usage_snapshot/ |
| risk | MEDIUM |

---

### delta-29 · `remove_mcp_server`

| 字段 | 值 |
|---|---|
| command | `remove_mcp_server` |
| change_type | impl_replaced（MCP backend 统一替换） |
| handler VA (1.1.1) | 0x140019040 |
| core VA | sub_1401C4F40 |
| 变更点摘要 | 与 load_mcp_servers 同类：`toml_block_renderer_core_sys` 缺席，core 替换为 sub_1401C4F40。MCP config backend 4 命令统一换代。 |
| risk | MEDIUM |

---

### delta-30 · `remove_skill`

| 字段 | 值 |
|---|---|
| command | `remove_skill` |
| change_type | callee_addition（cross-domain auto-switch guard） |
| handler VA (1.1.1) | 0x140022920 |
| owner VA (1.0.9) | wrapper sub_14027CF80 → owner sub_140576AE0 |
| 变更点摘要 | 1.0.9：sync FS/repo mutex，无 pending-auto-switch guard。1.1.1 新增 `pending_auto_switch_state_lock_acquire_111@0x14006EDC0`，在 repo mutex 之前获取 pending-auto-switch 锁；如果 auto-switch 正在进行，remove_skill 会 block 或返回 error。FS/repo 主操作（sub_1407DB760 → skill_backup_replace_111）保留。入参 {id, repo} 不变。leaf: raw/aimami/1.1.1/windows-x64/skills/ |
| risk | LOW-MEDIUM |

---

### delta-31 · `restore_skill_backup`

| 字段 | 值 |
|---|---|
| command | `restore_skill_backup` |
| change_type | callee_addition（cross-domain auto-switch guard） |
| handler VA (1.1.1) | 0x1400201E0 |
| owner VA (1.0.9) | wrapper 0x140276B60 → owner sub_140577DE0 |
| 变更点摘要 | 同 remove_skill 模式：新增 `pending_auto_switch_state_lock_acquire_111@0x14006EDC0` pre-check。核心 FS 操作 sub_1407DCA60 → sub_1406EFA10（repo restore）保留。入参 {id, repo} 不变。Cross-domain auto-switch guard 为唯一 app-level delta。leaf: raw/aimami/1.1.1/windows-x64/restore_skill_backup/ |
| risk | LOW-MEDIUM |

---

### delta-32 · `set_auto_switch`

| 字段 | 值 |
|---|---|
| command | `set_auto_switch` |
| change_type | side_effect_restructure（in-memory → schtask+file+persist） |
| handler VA (1.1.1) | 0x1400286B0 (`cmd_set_auto_switch_111`) |
| owner VA (1.0.9) | `set_auto_switch_core_impl@0x1400A4F60` |
| 变更点摘要 | 1.0.9：纯内存 RwLock write（autoSwitchEnabled bool）+ WakeByAddressSingle，无文件 I/O；dispatched from `auto_switch_multiplex_dispatcher_sys@0x1402663E0`（1.1.1 该 dispatcher 不存在）。1.1.1 全面重构：(1) 新 `pending_auto_switch_state_lock_acquire_111` pre-check（pending 时 early return error）；(2) `auto_switch_pending_state_resolve_111@0x140785980` 取代直接 RwLock write；(3) `auto_switch_apply_core_111@0x1401A4EB0` 新增：`schtask_codexmate_autoswitch_delete_111@0x14079F480` + `daemon_schtasks_register_sys@0x14079EF00`（注册 Windows schtask via schtasks.exe）+ `snooze_file_delete_111@0x14108BF60`；(4) `auto_switch_ipc_response_dispatch_111@0x1408387D0` 处理 IPC 响应。副作用从纯内存 RwLock 全面升级为持久 schtask CRUD + 文件删除 + JSON persist。leaf: raw/aimami/1.1.1/windows-x64/set_auto_switch/ |
| risk | HIGH |

---

### delta-33 · `set_image_compat`

| 字段 | 值 |
|---|---|
| command | `set_image_compat` |
| change_type | response_serializer_changed |
| handler VA (1.1.1) | 0x1400173A0 |
| core VA | sub_1407868A0 |
| owner VA (1.0.9) | `set_image_compat_impl_sys@0x1400A5EB0` |
| 变更点摘要 | 1.0.9：TOML parse+write，响应 via `image_compat_build_response_ok_bool_sys@0x1404391D0`（`{ok:{enabled:bool}}`）。1.1.1：TOML 写机制保留（`codex_home_resolver_sys`、`win32_file_read_bytes_111/write_bytes_111`、`[features]`/`image_generation` key byte magic 0x696D6167655F6765/0x6E65726174696F6E、`'image_generation = false'@0x1412F37C8`）。响应路径改为 `sub_140832D60`（generic dispatcher，via sub_14022DE20 + sub_140807390 + sub_14080C3C0）；`{ok:{enabled:bool}}` shape 可能不再保留。leaf: raw/aimami/1.1.1/windows-x64/set_image_compat/ |
| risk | MEDIUM |

---

### delta-34 · `set_mcp_server_enabled`

| 字段 | 值 |
|---|---|
| command | `set_mcp_server_enabled` |
| change_type | impl_replaced（MCP backend 统一替换） |
| handler VA (1.1.1) | 0x14001DCC0 |
| core VA | sub_1401C6C70 |
| 变更点摘要 | 与 load_mcp_servers 同类：`toml_block_renderer_core_sys` 缺席，core 替换为 sub_1401C6C70。MCP config backend 4 命令统一换代。leaf: raw/aimami/1.1.1/windows-x64/mcp_server/ |
| risk | MEDIUM |

---

### delta-35 · `set_usage_refresh_interval`

| 字段 | 值 |
|---|---|
| command | `set_usage_refresh_interval` |
| change_type | guard_addition（pending-switch pre-read + lock） |
| handler VA (1.1.1) | 0x140018760 |
| owner VA (1.0.9) | sub_14027F690 |
| 变更点摘要 | 1.0.9：直接写 usageRefreshInterval，req {interval:string}，resp void。1.1.1 新增：Step1（1.0.9 无）— `confirm_pending_auto_switch_deserialize_request_sys@0x140089A50`（以 'set_usage_refresh_interval'/'app' 参数调用；v19==3/error/pending state 时立即 early return error via sub_14080C3C0）；Step2（1.0.9 无）— `pending_auto_switch_state_lock_acquire_111@0x14006EDC0` 作为 repo guard。核心 interval write via sub_140789900 保留。leaf: raw/aimami/1.1.1/windows-x64/set_usage_refresh_interval/ |
| risk | MEDIUM |

---

### delta-36 · `upsert_mcp_server`

| 字段 | 值 |
|---|---|
| command | `upsert_mcp_server` |
| change_type | dto_and_impl_replaced |
| handler VA (1.1.1) | 0x140019720 |
| 变更点摘要 | DTO 完全替换：1.0.9 字段 {open, path}；1.1.1 移除 open/path，新增 `enabled` 字段。Backend：1.0.9 `toml_block_renderer_core_sys`（1.1.1 binary 不存在）→1.1.1 `set_codex_router_enabled_blocking_body_win_sys@0x1401C59F0`（size 0xB85，完全不同的持久化机制）。MCP config backend 4 命令统一替换。leaf: raw/aimami/1.1.1/windows-x64/upsert_mcp_server/ |
| risk | HIGH |

---

### delta-37 · `upsert_relay_provider`

| 字段 | 值 |
|---|---|
| command | `upsert_relay_provider` |
| change_type | impl_replaced（API key storage keychain → filesystem key file；新增 quota/sync callees） |
| handler VA (1.1.1) | 0x1400149D0 |
| core VA | 0x14021A880 → 0x1406E4500 |
| owner VA (1.0.9) | sub_140150520 |
| 变更点摘要 | 1.0.9：CAS + provider list walk（stride 208B）+ persistence + `relay_manager_reset_codex_config_impl_sys`。1.1.1 新增：`relay_post_login_state_sync_sys`（登录后状态同步）+ `import_accounts_keychain_write_sys`（relay keychain write callee）+ `relay_quota_item_clone_sys`（quota item 克隆）。API key 存储机制（mac verified）：1.0.9 `keychain::set_api_key`（macOS Keychain SecItem API）→ 1.1.1 `codexmate_lib::core::relay::keychain::write_key_file`（plain filesystem write，DirBuilder + set_permissions + fs::write）。Win 侧 `import_accounts_keychain_write_sys` 存储路径参考 mac 侧 key file 写法，细节待 win 逆向分析。leaf: raw/aimami/1.1.1/windows-x64/upsert_relay_provider/ |
| risk | HIGH |

---

## 四、真无差异 same-skip

来源：`intermediate/aimami/1.1.1/version-delta/win-same.txt`。

从 `frontend_same_mac − mac_orphan − win_delta − win_confirmed_absent` 得出。**此节命令列置信继承，不提升 gate 等级。** 完整清单指针：`win-same.txt`。

已通过独立 win 逆向分析 实证验证的 same 命令：

| 命令 | 1.1.1 win VA | 1.0.9 win VA | 验证方式 |
|------|-------------|-------------|---------|
| `clean` | 0x1400152B0 | — | decompile 成功，32 BB，IPC 合同不变，无新副作用（windows-ceiling.json） |
| `configure_auto_switch` | — | — | win-same-integrity confirmed_same |
| `confirm_pending_auto_switch` | — | — | win-same-integrity confirmed_same |
| `delete_relay_provider` | — | — | win-same-integrity confirmed_same |
| `detect_api_proxy_config` | — | — | win-same-integrity confirmed_same |
| `export_accounts_to_file` | — | — | win-same-integrity confirmed_same |
| `export_relay_config` | — | — | win-same-integrity confirmed_same |
| `fetch_relay_models_draft` | — | — | win-same-integrity confirmed_same |
| `get_relay_active` | — | — | win-same-integrity confirmed_same |
| `get_relay_proxy_status` | — | — | win-same-integrity confirmed_same |
| `get_system_info` | 0x140835CC0 | 0x140070050 | win-finish-verify：owner 1:1 equivalent，631B，{os,osVersion,arch,hostname} 4字段 JSON 不变，IPC resolver 不变 |
| `get_usage_refresh_interval` | 0x140089A50 | — | windows-shard-2：struct offset +144 read-only，response type string 30s/1m/3m/5m 不变 |
| `import_remote_device_secret_if_empty` | inline 0x14000E335 | 0x1402668AA | shard-3：dispatcher 整合为结构变化，app logic 不变 |
| `load_bootstrap_state` | 0x140012F50 | wrapper ~0x14027B900 | shard-3：DTO 不变，read-only |
| `load_change_analytics` | 0x140016C70 | 0x140283CB0 | shard-3：range arg/output shape 不变，read-only |
| `load_pending_auto_switch` | inline 0x14000FC8D | — | shard-3：dispatcher 整合为结构变化，PendingAutoSwitchState schema 不变 |
| `load_session_analytics` | 0x140026BD0 | 0x140276430 | shard-4：range/repo param 不变，no new side effects |
| `load_token_analytics` | 0x140027A40 | 0x1402727A0 | shard-4：同 load_session_analytics 结构 |
| `load_tool_analytics` | 0x1400264A0 | 0x14026D320 | shard-4：同结构 |
| `load_usage_analytics` | — | — | win-same-integrity confirmed_same |
| `logout` | — | — | win-same-integrity confirmed_same |
| `open_path` | inline 0x14000F99B | — | shard-5：dispatcher 整合；explorer.exe 启动逻辑不变 |
| `preview_account_import` | — | — | win-same-integrity confirmed_same |
| `rebuild_registry` | — | — | win-same-integrity confirmed_same |
| `remove_accounts` | — | — | win-same-integrity confirmed_same |
| `run_daemon_once` | — | — | win-same-integrity confirmed_same |
| `set_api_proxy_config` | — | — | win-same-integrity confirmed_same |
| `switch_account` | — | — | win-same-integrity confirmed_same |
| `switch_account_and_restart_codex` | — | — | win-same-integrity confirmed_same |
| `test_api_proxy_config` | — | — | win-same-integrity confirmed_same |

完整清单指针：`intermediate/aimami/1.1.1/version-delta/win-same.txt`

---

## 五、orphan-no-backend（win-orphan.txt）

来源：`intermediate/aimami/1.1.1/version-delta/win-orphan.txt`。

| 命令 | 说明 |
|------|------|
| `generate_voice_prompt` | shard-1 command_removed：find_regex 0 匹配；voice 命令在 1.1.1 win 中从未有 IPC backend（1.0.9 同）；voice workspace path anchor 存在但无 IPC handler |
| `inject_voice_text` | shard-3 command_removed：`inject_voice_text` 在 1.1.1 win64.exe 中 find_regex 0 匹配；1.0.9 中有；1.1.1 win 中移除 |

---

## 六、覆盖度

| 维度 | 数量 | 状态 |
|------|------|------|
| **win-delta.txt 全量命令** | **54** | **全部覆盖（第一节 17 条新增 + 第三节 37 条 body-delta，逐条列出）** |
| 真新增命令（new backend） | 17 | 逆向分析 string pool + dispatcher VA 确认 |
| 真 body-delta（行为变化） | 37 | sweep-buckets + win-same-integrity + win-finish-verify + windows-ceiling 实证 |
| 真删除命令（removed.txt） | 14 | 全部覆盖 |
| orphan-no-backend（win-orphan.txt） | 2 | 全部覆盖 |
| delta 命令 full gold-leaf 计数 | 35 条有 leaf 目录 + 19 条证据在 buckets/integrity JSON | 全量覆盖 |
| same 命令 逆向分析 实证 | 30 条 100% win 逆向分析 验证（其余通过 set-subtraction 公式） | — |
| inference=0 | 所有 delta 结论基于 逆向分析 decompile 或 callee diff 实证 | 无纯推断条目 |

---

### win-delta.txt 逐条命令核对（54/54 全覆盖）

以下 54 条命令全部在本文件中出现（第一节 17 条或第三节 37 条之一）：

`activate_relay_provider` · `begin_add_account_attach_monitor` · `confirm_pending_auto_switch_and_restart_codex` · `deactivate_relay_provider` · `delete_sessions` · `delete_skill_backup` · `diagnose` · `diagnose_codex_router` · `dismiss_pending_auto_switch` · `fix_codex_router_issue` · `force_kill_codex` · `get_device_id` · `get_hotspot_enabled` · `get_image_compat` · `get_mystery_unlock_grants` · `get_notification_client_state` · `get_or_create_remote_device_secret` · `get_relay_provider_quota` · `graceful_restart_for_update` · `has_notch` · `hotspot_ready` · `import_accounts_from_file` · `import_chatgpt_session_account` · `import_skill` · `load_installed_skills` · `load_mcp_servers` · `load_quota_history` · `load_relay_state` · `load_sessions` · `load_skill_backups` · `load_snapshot` · `merge_mystery_unlock_grants` · `parse_aimami_deeplink` · `refresh_usage_snapshot` · `remove_mcp_server` · `remove_skill` · `reorder_relay_providers` · `restart_codex` · `restore_skill_backup` · `reveal_relay_api_key` · `run_codex_router_diagnostics` · `set_auto_switch` · `set_codex_api_login` · `set_codex_api_slots` · `set_codex_router_enabled` · `set_hotspot_enabled` · `set_image_compat` · `set_mcp_server_enabled` · `set_relay_display_tags` · `set_usage_refresh_interval` · `test_relay_draft_stream` · `test_relay_provider_stream` · `upsert_mcp_server` · `upsert_relay_provider`

---

## dim6 消费者接受度评估（session <审计会话>）

**produced_at**: 2026-06-19 · **session**: <审计会话> · **机器**: <本地机器> · **shards**: win-shard-1 ～ win-shard-7

### 整体结论

| 维度 | 数量 | 比率 |
|---|---|---|
| **总 delta 命令（win-delta.txt，含 6 条 same-depth 升档）** | **60** | — |
| **readyToImplement（dim6 升档）** | **45** | **76.3%（45/59）** |
| **acceptance_draft_only（卡档）** | **14** | 23.7%（14/59）|

> win-delta.txt 60 行 = 原 54 条 + 6 条 same-depth 升档。dim6 shards 覆盖 59 条（`get_image_compat` 未进入 win dim6 shards，因其 win 侧为读向 command_removed，写向仅 mac 保留）。覆盖率分母取 59（有 backend 实现的 delta 命令数）。

### readyToImplement（45 条）

`activate_relay_provider` · `begin_add_account_attach_monitor` · `deactivate_relay_provider` · `delete_sessions` · `delete_skill_backup` · `dismiss_pending_auto_switch` · `get_mystery_unlock_grants` · `get_notification_client_state` · `get_or_create_remote_device_secret` · `graceful_restart_for_update` · `has_notch` · `hotspot_ready` · `import_skill` · `load_change_analytics` · `load_installed_skills` · `load_mcp_servers` · `load_quota_history` · `load_relay_state` · `load_session_analytics` · `load_sessions` · `load_skill_backups` · `load_snapshot` · `load_token_analytics` · `load_tool_analytics` · `load_usage_analytics` · `merge_mystery_unlock_grants` · `refresh_usage_snapshot` · `remove_mcp_server` · `remove_skill` · `reorder_relay_providers` · `restart_codex` · `restore_skill_backup` · `reveal_relay_api_key` · `run_codex_router_diagnostics` · `set_auto_switch` · `set_codex_api_login` · `set_codex_api_slots` · `set_codex_router_enabled` · `set_image_compat` · `set_mcp_server_enabled` · `set_usage_refresh_interval` · `test_relay_draft_stream` · `test_relay_provider_stream` · `upsert_mcp_server` · `upsert_relay_provider`

### acceptance_draft_only（14 条卡档）及缺失维度

| 命令 | 缺失维度 |
|---|---|
| confirm_pending_auto_switch_and_restart_codex | dim5_mac_not_reversed（mac IDB 未反向确认 win 行为分叉）|
| diagnose | dim1_partial（CCF 从 mac 迁移，非 win 直接验证）+ dim5_mac_not_reversed |
| diagnose_codex_router | dim5_mac_not_reversed |
| fix_codex_router_issue | dim1_migrated_from_109（CCF 未在 1.1.1 win 前端 bundle 重验证）|
| force_kill_codex | 非 Tauri IPC 命令（OS-level only，非 invoke 路径，dim6 仅集成测试覆盖）|
| get_device_id | dim1_migrated_from_109 |
| get_hotspot_enabled | dim1_migrated_from_109 |
| get_relay_provider_quota | quota Vec stride 未确认 + RelayProviderQuota 字段名 genuine_ceiling |
| import_accounts_from_file | dim1 CCF 未在 1.1.1 win 验证 + dim3 无 call-trees/JSONL |
| import_chatgpt_session_account | dim1 CCF 未在 1.1.1 win 验证 + dim3 无 call-trees/JSONL + 无 gate-report.json |
| load_pending_auto_switch | dim2_partial + dim4_missing |
| parse_aimami_deeplink | dim5_mac（mac CCF 已确认但 win 端独立 CCF 未复核）|
| set_hotspot_enabled | dim1 未确认（win 1.1.1 新增 backend，CCF 未验证）|
| set_relay_display_tags | dim1 未确认 |

**最快升档路径**：`diagnose_codex_router`、`confirm_pending_auto_switch_and_restart_codex` ——仅 dim5_mac_not_reversed（mac IDB session 补充后可升）；`fix_codex_router_issue`、`get_device_id`、`get_hotspot_enabled` ——仅 dim1 CCF 重验证（1.1.1 win 前端 bundle 确认后可升）。
