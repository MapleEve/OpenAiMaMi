# COVERAGE-AUDIT.md — windows-1.1.1-delta【v2 终账】

**session**: <审计会话>
**session_sweep**: <审计会话>（闭环重分类终账）
**machine**: <本地机器>
**produced_at**: 2026-06-17
**scope**: delta leaf 深度审计 + same 集完整性核查 + orphan 分类确认 + sweep 闭环终账
**规则**: 禁把"抽查通过"写成"全量通过"；明确区分 proven vs inference；inference_only 若非零必须列出

---

## FINAL 计数总表（v2 终账）

| 分类 | 命令数 | 说明 |
|---|---|---|
| 真新增命令（带 backend，已逆） | 10 | set_codex_api_login 等，见 VERSION-DIFF ① |
| 真删除命令（removed） | 14 | 原 10 + custom_instructions 3（command_removed）+ check_update_installability |
| body-delta（含 integrity-recovered）| 36 | 5条有据已逆 + confirm_pending(PARTIAL) + 10条 integrity-recovered + 13条 sweep plan deep（未补逆）+ 7条 sweep plan deep（=integrity-recovered，已计） |
| same-skip（逆向分析 proven 或 INHERITED） | 59 | 原 70 - 10 FALSE_NEGATIVE - check_update_installability = 59；逆向分析 实证 20 条，其余 39 条 INHERITED inference |
| orphan-no-backend | 43 | voice 全家 + relay/agent 专有 + 线程迁移 + signal_codex_quit_wake |
| **inference_only（未 逆向分析 核查的 same）** | **39** | win-same.txt 59 条减去 20 逆向分析 实证 = 39 条；下方详列 |

**proven 覆盖率（已 逆向分析 证明 / 总命令）**:
- win-delta(含 integrity-recovered): 29 条；confirmed_same: 20 条；已 逆向分析 逐条证明命令 ≈ 49 条（其中 7 条 integrity-recovered 已有充分 逆向分析 证据但作为 delta 入账）
- **proven 覆盖率 ≈ 49 / (29+14+59+43) = 49 / 145 ≈ 34%**；其余 66% 为 INHERITED 或 inference_only

---

## 1. delta leaf 深度审计结果（win-delta 真新增命令）

### 1.1 DEEP_OK（dim1-5 全闭合，gate ≥ consumerStartReady）

| 命令 | gate | DEEP_OK 判定 | 说明 |
|---|---|---|---|
| set_codex_api_login | consumerStartReady | YES | dim1-5 PASS；dim6 pending consumer |
| set_codex_api_slots | consumerStartReady | YES | dim1-5 PASS |
| get_relay_provider_quota | strictImplementationUse_candidate | YES | 11 provider URL 路由全逆；4 callees 补全（truncation resolved） |
| reorder_relay_providers | strictImplementationUse_candidate | YES | SIMD vec reorder stride=232B 确认；CAS mutex 确认 |
| reveal_relay_api_key | strictImplementationUse | YES | gate 最高档；dim1-5 全闭合 |
| set_relay_display_tags | consumerStartReady | YES | dim1-5 PASS |
| parse_aimami_deeplink | strictImplementationUse_candidate | YES | dim1-5 PASS |
| test_relay_draft_stream | consumerStartReady | YES | SSE 流式全逆；8字段 DTO 确认 |
| test_relay_provider_stream | consumerStartReady | YES | dim1-3 PASS；canonical_drift 已记录 |
| diagnose_codex_router | strictImplementationUse（depth-fill 升档） | YES | repair: evidence_only → depth: strictImplementationUse；call_tree_depth=3 |
| fix_codex_router_issue | strictImplementationUse_candidate（depth-fill 升档） | YES | repair: dispatcher_confirmed_only → depth: strictImplementationUse_candidate；argKeys=[manager,itemId] |

**win DEEP_OK 数**: 11/11（含 2 个 depth-fill 升档）

### 1.2 PARTIAL（confirm_pending_auto_switch_and_restart_codex）

| 命令 | gate | 状态 | blockers |
|---|---|---|---|
| confirm_pending_auto_switch_and_restart_codex | below_consumerStartReady | PARTIAL | dim1 CCF 缺失；dim4 partial（输入参数未从前端完整确认）|

> bonus_finding：此命令 win binary 字符串@0x1412AC311 发现，不在 win-same.txt 或 win-delta.txt 原始分类中，为漏网 net-new IPC。当前 gate 维持 below_consumerStartReady，消费者不得使用。

### 1.3 depth-fill 新增 win leaf（same-skip 类别补深）

| 命令 | gate（depth后） | 说明 |
|---|---|---|
| has_notch | strictImplementationUse_candidate | 固定返回 bool true；mac/win 平台分叉确认；owner@0x140023000(863B) |
| begin_add_account_attach_monitor | strictImplementationUse | dim2/3/4/5 全闭合；account stride=360B；win 独有：schtasks.exe + CloseHandle + WakeByAddressSingle |
| diagnose（system） | strictImplementationUse_candidate | call_tree_depth=4；gate_accepted=false |

### 1.4 integrity-recovered delta（10 条，从 same 升级，sweep 终账移入 delta 或 removed）

| 命令 | 最终分类 | 变更类型 | 风险 |
|---|---|---|---|
| activate_relay_provider | **win-delta**（integrity-recovered） | impl_replaced | HIGH |
| deactivate_relay_provider | **win-delta**（integrity-recovered） | impl_replaced | HIGH |
| upsert_relay_provider | **win-delta**（integrity-recovered） | impl_replaced | HIGH |
| upsert_mcp_server | **win-delta**（integrity-recovered） | dto_and_impl_replaced | HIGH |
| load_mcp_servers | **win-delta**（integrity-recovered） | impl_replaced | MEDIUM |
| set_mcp_server_enabled | **win-delta**（integrity-recovered） | impl_replaced | MEDIUM |
| remove_mcp_server | **win-delta**（integrity-recovered） | impl_replaced | MEDIUM |
| apply_custom_instruction | **removed**（command_removed） | command_removed；win 1.1.1 binary 0 hit | HIGH |
| clear_custom_instruction_block | **removed**（command_removed） | command_removed；win 1.1.1 binary 0 hit | HIGH |
| load_custom_instruction_state | **removed**（command_removed） | command_removed；win 1.1.1 binary 0 hit（**mac 侧为 orphan，非 removed**） | MEDIUM |

> win custom-instructions gate 降档：apply/clear/load_custom_instruction_state 在 win 1.1.1 标 command_removed，消费者 win 禁实现这三条 IPC handler。不沿用 macOS 侧 accepted_substitute 逻辑。

> inject_voice_text 在 win-same.txt 中（line 34），为 INHERITED 分类，未做 逆向分析 验证（win side inference_only）。

---

## 2. same 集完整性核查（win-same-integrity.json）

**抽查规模**: 33 / 70 原始（47.1% 覆盖）
**核查方法**: 逆向分析 HexRays Win MCP decompile + 1.0.9 evidence 逐命令比对
**sweep 更正后 win-same.txt**: 59 条（70 - 10 FALSE_NEGATIVE - check_update_installability = 59）

| 判定 | 数量 | 说明 |
|---|---|---|
| confirmed_same（proven） | 20 | 逆向分析 实证，行为合约未变（纯 callee 地址噪声） |
| FALSE_NEGATIVE（integrity-recovered） | 10 | 实际发生 impl 变更，已移出 same（7条→delta，3条→removed） |
| not_locatable | 1 | import_chatgpt_session_account：decompile failed（160 BB 大协程）；无法比较 |
| inference_only（未核查） | **39** | 未做 逆向分析 验证，仅凭 win-divergence 前端信号判断；见 §2.2 完整列表 |

**诚实声明**: 本轮只抽查了 33 条，剩余 39 条 inference_only 置信度为 INHERITED，不得声明"全量通过"。

### 2.1 bonus_finding

- `confirm_pending_auto_switch_and_restart_codex`：win 1.1.1 binary@0x1412AC311 发现，不在 win-same 或 win-delta 原始分类；VA@0x140027300；属于漏网 net-new IPC，已补入 gate-report（below_consumerStartReady）。

### 2.2 inference_only 命令列表（39 条，未 逆向分析 核查）

以下命令在 win-same.txt 中，仅凭 win-divergence 前端信号分类为 same，无 逆向分析 逐条验证。置信度 INHERITED。

check_update_installability（已移 removed，仍留此作历史记录）, clean, configure_auto_switch, confirm_pending_auto_switch, delete_relay_provider, delete_sessions, delete_skill_backup, detect_api_proxy_config, dismiss_pending_auto_switch, export_accounts_to_file, export_relay_config, fetch_relay_models_draft, focus_main_window, force_kill_codex, generate_voice_prompt, get_device_id, get_image_compat, get_mystery_unlock_grants, get_notification_client_state, get_or_create_remote_device_secret, get_system_info, get_usage_refresh_interval, graceful_restart_for_update, import_chatgpt_session_account（not_locatable）, import_relay_config, import_remote_device_secret_if_empty, import_skill, inject_voice_text, load_bootstrap_state, load_change_analytics, load_installed_skills, load_pending_auto_switch, load_quota_history, load_relay_state（UNVERIFIED on win；mac FALSE_NEGATIVE 已确认；win 侧未单独核查）, load_session_analytics, load_sessions, load_skill_backups, load_snapshot, load_token_analytics, load_tool_analytics, load_usage_analytics, logout, merge_mystery_unlock_grants, open_path, preview_account_import, rebuild_registry, refresh_usage_snapshot, remove_accounts, remove_skill, restore_skill_backup, run_daemon_once, set_api_proxy_config, set_auto_switch, set_image_compat, set_usage_refresh_interval, switch_account, switch_account_and_restart_codex, test_api_proxy_config, upsert_relay_provider（已移 delta）

> 去重后 inference_only 约 **39 条**（已确认移出 same 的命令不在此计）。

> **特别注意 load_relay_state（win 侧）**: mac 侧 逆向分析 已证 FALSE_NEGATIVE（行为大幅变更：proxy auto-start + apiKey scrub 移除）；win 侧 load_relay_state 仍在 win-same.txt 中为 UNVERIFIED/INHERITED；sweep-recover-plan win_deep 列表含此命令，建议优先安排 win 侧 逆向分析 核查。

---

## 3. mac same 集完整性核查（mac-same-integrity.json）

**抽查规模**: 14 / 57 原始（24.6% 覆盖）
**核查方法**: 逆向分析 HexRays Mac MCP decompile（AiMaMi 1.1.1 universal）

| 判定 | 数量 | 说明 |
|---|---|---|
| confirmed_same（proven） | 13 | 逆向分析 实证；noise_pattern_confirmed：Rust Mutex poison-guard 为 toolchain 升级噪声 |
| FALSE_NEGATIVE | 1 | load_relay_state（→mac-delta，integrity-recovered） |
| placement errors（same→orphan） | 2 | inject_voice_text、load_custom_instruction_state：mac-same.txt 来源误差，已移入 mac-orphan |

**mac inference_only（未核查）**: 41 条（mac-same.txt 54 条中 13 条已 逆向分析 实证，41 条 inference）

---

## 4. orphan 分类确认（win 侧，终账）

> win 1.1.1 orphan（无 backend）= 43 条

- **voice 全家（≥22 条）**：win binary 0 hit；macOS 桌面专用语音功能；不逆 win backend
- **apply_custom_instruction / clear_custom_instruction_block**：integrity-recovered → **command_removed in win 1.1.1**；不属于 orphan，而是删除命令；消费者 win 禁实现
- **load_custom_instruction_state**：integrity-recovered → **command_removed in win 1.1.1**；win binary 0 hit
- **relay 专有**：relay_proxy_server / append_assistant_and_tool_results（win 无 IPC 端点）
- **线程迁移**：migrate_threads_for_router / has_router_thread_migration / rollback_threads_for_router（win 内部逻辑，无 IPC）
- **signal_codex_quit_wake**：5 pattern 全 0 hit

### 4.1 gate 降档（终账确认）

win 侧 custom-instructions 三条（apply/clear/load）为 command_removed，消费者不得在 win 平台实现这三条命令的 IPC handler。voice orphan gate 更新：readyToImplement→consumerStartReady 不适用于 win（win 无 voice backend）。

---

## 5. 剩余缺口诚实计数（终账）

| 类别 | 数量 | 说明 |
|---|---|---|
| win-same inference_only（未 逆向分析 核查） | **39 条** | 仅凭 win-divergence 前端 same 信号，无 逆向分析 证据；见 §2.2 完整列表 |
| win-same not_locatable | **1 条** | import_chatgpt_session_account（decompile failed，160 BB） |
| mac-same inference_only（未 逆向分析 核查） | **41 条** | mac-same.txt 54 条中 13 条 逆向分析 实证，41 条 INHERITED |
| confirm_pending_auto_switch_and_restart_codex | **1 条** | below_consumerStartReady；dim1 CCF + dim4 partial 未补齐 |
| load_relay_state（win 侧）| **1 条** | UNVERIFIED on win；mac FALSE_NEGATIVE 已确认；sweep-recover-plan win_deep 待补 |
| **inference_only 合计（win same）** | **39 条** | 非零；§2.2 已逐条列出；不得声称"全量通过" |

---

## SAME-DEPTH-CONFIRM（session: <审计会话> + patch <审计会话>，2026-06-19）

same 集（win-same.txt 中划入此 session 的命令）已逆到 depth≥5 确认。本段记录终数、escalated 命令和 partial 卡点。

patch session（<审计会话>）补齐 win-shard-1（8 条命令：clean、configure_auto_switch、confirm_pending_auto_switch、delete_relay_provider、detect_api_proxy_config、export_accounts_to_file、export_relay_config、fetch_relay_models_draft）。

### win 平台终数（含 patch）

| 分类 | 数量 |
|---|---|
| confirmed_same_depth5 | **24** |
| escalate_delta（已移入 win-delta.txt） | **6** |
| partial_depth | **2** |

### confirmed（24 条）

win-shard-1（patch）：clean、configure_auto_switch、confirm_pending_auto_switch、delete_relay_provider、export_relay_config、fetch_relay_models_draft。
win-shard-2：focus_main_window、get_relay_active、get_relay_proxy_status、get_system_info、get_usage_refresh_interval、import_relay_config、import_remote_device_secret_if_empty、load_bootstrap_state。
win-shard-3：logout、open_path。
win-shard-4：preview_account_import、rebuild_registry、remove_accounts、run_daemon_once、set_api_proxy_config、switch_account、switch_account_and_restart_codex、test_api_proxy_config。

### escalated（6 条）——已从 win-same.txt 移至 win-delta.txt

| 命令 | 最早变更层 | 核心 delta |
|---|---|---|
| load_change_analytics | Layer 1 | 新增 auto-switch mutex guard + skills repo 校验前置 |
| load_pending_auto_switch | Layer 1 + Layer 3 | Layer-1 guard；**Layer-3 存储后端 SQLite→文件系统（最强）** |
| load_session_analytics | Layer 1 | 新增 auto-switch mutex guard + skills repo 校验前置 |
| load_token_analytics | Layer 1 | 新增 auto-switch mutex guard + skills repo 校验前置 |
| load_tool_analytics | Layer 1 | 新增 auto-switch mutex guard + skills repo 校验前置 |
| load_usage_analytics | Layer 1 + Layer 3 | Layer-1 guard；Layer-3 新增 relay 目录创建 + MCP snapshot 读写 + CreateFileW 写副作用（最强） |

详见：`intermediate/aimami/1.1.1/version-delta/same-depth/ESCALATED.md`

### partial（2 条）——win-shard-1 patch

| 命令 | 卡点原因 |
|---|---|
| detect_api_proxy_config | 无 1.0.9 windows baseline；1.1.1 depth≥5 确认；IPC DTO: namespace=app；副作用：HTTP proxy 检测；结构模式一致，无新副作用，不升级 escalate |
| export_accounts_to_file | 1.0.9 baseline 在 audits/ 格式而非 call-trees/ JSONL；IPC DTO 确认一致（targetPath+accountKeys）；副作用：序列化账号到文件；1.1.1 depth≥5 确认；结构相同，不升级 escalate |

### 残留缺口说明

win-same.txt inference_only（未 逆向分析 核查）命令约 39 条，不在本 session 范围，见 §5 残留缺口表。win-shard-1 已由 patch session <审计会话> 补齐，本 same-depth-confirm 覆盖范围现已全量覆盖 win-same.txt 中 32 条（shard 1-4 各 8 条），inference_only 残留 39 条不含上述命令。
