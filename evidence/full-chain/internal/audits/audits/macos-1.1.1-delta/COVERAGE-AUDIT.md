# COVERAGE-AUDIT.md — macos-1.1.1-delta【v2 终账】

**session**: wf-aimami111-delta-20260617-depth（完整性核查；mac delta 主体由 repair session 完成）
**session_sweep**: wf-aimami111-delta-20260617-sweep（闭环重分类终账）
**machine**: <本地机器>
**produced_at**: 2026-06-17
**scope**: mac same 集完整性核查 + delta leaf gate 状态记录 + sweep 闭环终账
**规则**: 禁把"抽查通过"写成"全量通过"；明确区分 proven vs inference；inference_only 若非零必须列出

---

## FINAL 计数总表（v2 终账）

| 分类 | 命令数 | 说明 |
|---|---|---|
| 真新增命令（带 backend，已逆） | 9 | set_codex_api_login 等，见 VERSION-DIFF ① |
| 真删除命令（removed） | 10 | plugin 系列 4 + passthrough 2 + relay 替换 2 + reset_codex_config + set_relay_provider_network |
| body-delta（含 integrity-recovered）| 19 | 18 条已逆 + load_relay_state（integrity-recovered，pending leaf reverse）|
| same-skip（逆向分析 proven 或 INHERITED） | 54 | 原 56 条减去 3 条；逆向分析 实证 13 条，其余 41 条 INHERITED（inference） |
| orphan-no-backend | 36 | voice 32 条 + custom_instructions 3 条（含 placement error 移入的 2 条） |
| **inference_only（未 逆向分析 核查的 same）** | **41** | mac-same.txt 54 条减去 13 条 逆向分析 实证 = 41 条；下方详列 |

**proven 覆盖率（已 逆向分析 证明 / 全量命令）**:
- mac 总命令数（delta + same + orphan + removed）≈ 119 条（9新增 + 10删除 + 19 body-delta + 54 same + 36 orphan = 128，减去部分双计）
- 已 逆向分析 逐条证明（gate ≥ strictImplementationUse_candidate 的 delta leaf + 13 confirmed-same）= 约 32 条（20 delta leaf + 13 same）
- **proven 覆盖率 ≈ 32 / 128 = 25%**；其余 75% 为 INHERITED 或 inference_only

---

## 1. mac delta leaf 覆盖状态

> 完整 delta leaf 逆向由 wf-aimami111-delta-20260616/wf-aimami111-delta-20260617-repair 完成。本节汇总 gate 状态。

| 命令 | gate | DEEP_OK | 说明 |
|---|---|---|---|
| set_codex_api_login | strictImplementationUse | YES | dim1-5 全闭合 |
| configure_auto_switch | strictImplementationUse | YES | dim1-5 全闭合 |
| set_codex_api_slots | strictImplementationUse_candidate | YES | dim5 windows 未独立证明 |
| get_relay_provider_quota | strictImplementationUse_candidate | YES | dim5 windows 未独立证明 |
| reorder_relay_providers | strictImplementationUse_candidate | YES | — |
| reveal_relay_api_key | strictImplementationUse_candidate | YES | — |
| set_relay_display_tags | strictImplementationUse_candidate | YES | — |
| parse_aimami_deeplink | strictImplementationUse_candidate | YES | — |
| test_relay_draft_stream | strictImplementationUse_candidate | YES | canonical_drift: codexmate_lib__ dir |
| test_relay_provider_stream | strictImplementationUse_candidate | YES | — |
| refresh_usage_snapshot | strictImplementationUse_candidate | YES | — |
| get_relay_proxy_status | strictImplementationUse_candidate | YES | — |
| remove_mcp_server | strictImplementationUse_candidate | YES | — |
| set_codex_router_enabled | strictImplementationUse_candidate | YES | 新增 apiLogin 参数 |
| diagnose_codex_router | strictImplementationUse_candidate | YES | — |
| get_hotspot_enabled | strictImplementationUse_candidate | YES | shard 1/2 冲突由 mac-same-integrity 解决：shard2 正确 |
| set_mcp_server_enabled | strictImplementationUse_candidate | YES | — |
| upsert_mcp_server | strictImplementationUse_candidate | YES | — |
| load_sessions | strictImplementationUse_candidate | YES | delta_nil；VA drift only |
| load_snapshot | strictImplementationUse_candidate | YES | — |
| cancel_voice_trigger_capture | readyToImplement | n/a | accepted_substitute；no_backend |
| capture_voice_trigger_key | readyToImplement | n/a | accepted_substitute；no_backend |
| apply_custom_instruction | readyToImplement | n/a | accepted_substitute；no_backend（mac 侧保留；**win 侧已 command_removed**） |
| clear_custom_instruction_block | readyToImplement | n/a | accepted_substitute；no_backend（mac 侧保留；**win 侧已 command_removed**） |
| **load_relay_state（integrity-recovered）** | **pending_leaf_reverse** | **NO** | **FALSE_NEGATIVE 已确认；mac leaf 逆向待补；消费者不得实现 1.0.9 proxy-auto-start 副作用** |

**mac DEEP_OK 数**: 20（strictImplementationUse ×2 + strictImplementationUse_candidate ×18）
**mac accepted_substitute（voice/custom_instructions）**: 4 条（产品决策，readyToImplement 但 no_backend）
**mac pending_leaf**: 1 条（load_relay_state，待补逆向）

---

## 2. mac same 集完整性核查（mac-same-integrity.json）

**抽查规模**: 14 / 57 原始（24.6% 覆盖）
**核查方法**: 逆向分析 HexRays Mac MCP decompile（AiMaMi 1.1.1 universal 1.i64）

| 判定 | 数量 | 说明 |
|---|---|---|
| confirmed_same（proven） | 13 | 逆向分析 实证；Rust Mutex poison-guard 为全量 toolchain 噪声（不是行为变更） |
| FALSE_NEGATIVE | 1 | load_relay_state（→mac-delta，integrity-recovered） |
| placement errors（same→orphan） | 2 | inject_voice_text、load_custom_instruction_state（非 delta 错误；分类放错） |
| inference_only（未核查） | 41 | 57 原始 - 3 已移出 - 13 逆向分析 实证 = 41 条；下方列出 |

**诚实声明**: 本轮只抽查了 14 条，剩余 41 条 inference_only（仅凭 shard 噪声过滤，无 逆向分析 逐条验证）。mac-same.txt 全量通过的说法不成立。

### 2.1 mac FALSE_NEGATIVE：load_relay_state（integrity-recovered）

- **1.0.9 call chain**: ensure_proxy_started（TCP probe 127.0.0.1:port, 300ms×2, proxy spawn if down）→ snapshot → RelayState::clone → **apiKey scrub loop**（offset+88 per 208-byte RelayProvider entry，vectorized ≥4 entries）→ CoreEnvelope::ok
- **1.1.1 call chain**: RelayManager::list_state → CoreEnvelope::ok
- **行为 delta**: proxy auto-start 移除；apiKey 零填 移除（重大副作用变更）
- **处置**: 已从 mac-same.txt 移入 mac-delta.txt；gate-report same_skip 56→54；消费者不可假设 load_relay_state 仍触发 ensure_proxy_started；mac leaf 逆向 pending

### 2.2 placement errors（非 delta 分类错误）

| 命令 | 原分类 | 正确分类 | 原因 |
|---|---|---|---|
| inject_voice_text | mac-same.txt | mac-orphan | shard buckets 已标 orphan_no_backend；mac-same.txt 组装时漏减 |
| load_custom_instruction_state | mac-same.txt | mac-orphan | 同上；custom_instructions 整组在 1.1.1 mac 无 backend（**注意与 win 不同：win 是 command_removed，mac 是 orphan**） |

> 这两条是 same→orphan 归类错，不是 same→delta 错，不影响 delta 完整性，只影响 same/orphan 计数。已从 mac-same.txt 移入 mac-orphan.txt。

### 2.3 noise_pattern（全量适用）

Rust Mutex poison-guard boilerplate（OnceBox::initialize + GLOBAL_PANIC_COUNT + is_zero_slow_path + \*(a2+8) poison-flag）为 1.0.9→1.1.1 Rust toolchain 升级产物，普遍出现在所有 Mutex-wrapping 命令中，**不是行为变更**。13 条 confirmed_same 均验证此 pattern 为噪声。

### 2.4 shard_conflict_resolved

- `get_hotspot_enabled`：shard 1 误标 DELTA（过度触发 Mutex panic-count branch）；shard 2 标 same 正确；逆向分析 逐条验证后 shard 2 为准。

### 2.5 inference_only 命令列表（41 条，未 逆向分析 核查）

以下命令在 mac-same.txt 中，仅凭 shard 噪声过滤分类为 same，无 逆向分析 逐条验证。置信度为 INHERITED。

activate_relay_provider, begin_add_account_attach_monitor, check_update_installability, clean, deactivate_relay_provider, delete_relay_provider, delete_sessions, delete_skill_backup, detect_api_proxy_config, diagnose, dismiss_pending_auto_switch, export_accounts_to_file, export_relay_config, force_kill_codex, get_device_id, get_or_create_remote_device_secret, get_system_info, get_usage_refresh_interval, graceful_restart_for_update, has_notch, hotspot_ready, import_accounts_from_file, import_chatgpt_session_account, import_relay_config, import_remote_device_secret_if_empty, import_skill, load_bootstrap_state, load_change_analytics, load_installed_skills, load_mcp_servers, load_pending_auto_switch, load_quota_history, load_session_analytics, load_skill_backups, load_token_analytics, load_tool_analytics, load_usage_analytics, logout, preview_account_import, rebuild_registry, remove_accounts, remove_skill, restore_skill_backup, run_codex_router_diagnostics, run_daemon_once, set_api_proxy_config, set_auto_switch, set_hotspot_enabled, set_image_compat, set_usage_refresh_interval, switch_account, switch_account_and_restart_codex, test_api_proxy_config, upsert_relay_provider

**（统计核查：mac-same.txt 当前 54 条，减去 13 逆向分析 实证 = 41 条 inference_only）**

---

## 3. mac same-skip 计数更正（终账）

| 版本 | same 计数 | 变化 |
|---|---|---|
| repair session 原始 | 56 | — |
| depth session 发现 | 56 | 记录 FALSE_NEGATIVE 但未移文件 |
| **sweep 终账（本次）** | **54** | load_relay_state(-1 →delta)；inject_voice_text(-1 →orphan)；load_custom_instruction_state(-1 →orphan) |

---

## 4. orphan 状态（mac 侧，终账）

| 分类 | 命令数 | 来源 |
|---|---|---|
| voice 全家 | 32 条 | macOS 桌面语音功能；readyToImplement=true；accepted_substitute；no_backend；含 inject_voice_text（placement error 移入） |
| custom_instructions 孤儿 | 3 条 | load_custom_instruction_state（placement error 移入）+ preview_custom_instruction_apply + rollback_custom_instruction |
| apply_custom_instruction / clear_custom_instruction_block | 2 条 | macOS 侧 readyToImplement=true，accepted_substitute，no_backend（**win 侧这两条是 command_removed，不同**） |
| **mac orphan 合计** | **36 条** | 原 34 + placement error 移入 2 |

> **mac vs win 差异明确**：apply_custom_instruction / clear_custom_instruction_block / load_custom_instruction_state 在 win 1.1.1 为 command_removed（IPC 端点删除），在 mac 1.1.1 为 orphan_no_backend（无 IPC 端点但不是"曾有 → 被删"的语义）。消费者实现必须平台分叉处理。

---

## 5. 剩余缺口诚实计数（终账）

| 类别 | 数量 | 说明 |
|---|---|---|
| mac-same inference_only（未 逆向分析 核查） | **41 条** | mac-same.txt 54 条中 13 条已 逆向分析 实证，41 条仍为 INHERITED inference |
| load_relay_state mac delta 补逆 | **1 条** | FALSE_NEGATIVE 确认；需单独 mac delta 逆向 leaf；gate 当前 pending |
| mac delta 命令 dim5（windows 证明） | 全量 | dim5_windows 未对所有命令独立证明，gate ceiling = strictImplementationUse_candidate |
| dim6（consumer acceptance） | 全量 | 消费者侧未映射 |
| **inference_only 总结** | **41 条** | 非零；上方 §2.5 已逐条列出；不得声称"全量通过" |

---

## SAME-DEPTH-CONFIRM（session: wf-aimami111-same-depth-20260618，2026-06-19）

same 集（mac-same.txt 中划入此 session 的命令）已逆到 depth≥5 确认。本段记录终数和 partial 卡点。

### mac 平台终数

| 分类 | 数量 |
|---|---|
| confirmed_same_depth5 | **44** |
| escalate_delta | **0** |
| partial_depth | **0** |

**confirmed（44 条）**覆盖 mac-shard-1 至 mac-shard-6 全量：activate_relay_provider、begin_add_account_attach_monitor、check_update_installability、clean、deactivate_relay_provider、delete_relay_provider、delete_skill_backup、detect_api_proxy_config（shard-1）；diagnose、dismiss_pending_auto_switch、export_accounts_to_file、focus_main_window、force_kill_codex、get_device_id、get_or_create_remote_device_secret、get_system_info（shard-2）；get_usage_refresh_interval、has_notch、hotspot_ready、import_chatgpt_session_account、import_relay_config、import_remote_device_secret_if_empty、import_skill、load_bootstrap_state（shard-3）；load_change_analytics、load_pending_auto_switch、load_quota_history、load_session_analytics、load_skill_backups、load_token_analytics、load_tool_analytics、load_usage_analytics（shard-4）；logout、preview_account_import、remove_accounts、restore_skill_backup、run_codex_router_diagnostics、run_daemon_once、set_api_proxy_config、set_auto_switch（shard-5）；set_hotspot_enabled、set_image_compat、set_usage_refresh_interval、switch_account（shard-6）。

**escalate（0 条）**：mac 平台无同名命令在深度确认中升级为 delta。注：同名的 win 平台 analytics 命令有 delta（见 windows-1.1.1-delta/COVERAGE-AUDIT.md SAME-DEPTH-CONFIRM 段），mac 平台经 shard-4 独立验证确认无对应变化。

**partial（0 条）**：无卡点。mac 全 44 条均达到 depth≥3 终止（浅树命令）或 depth=5（深树命令）。

### 残留缺口说明

本 session 仅覆盖此次 same-depth-confirm 分片中的命令。mac-same.txt 中 inference_only（未 逆向分析 核查）命令约 41 条，不在本 session 范围，见 §5 残留缺口表。
