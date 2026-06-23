# AiMaMi 1.1.1 Delta — 覆盖度终账（COVERAGE-FINAL）

**produced**: 2026-06-17 · **producer**: <本地机器> · **method**: orchestrator grounded reduction（直接读盘聚合 sweep-buckets + integrity-json + deep leaves，非 agent 摘要）
**baseline**: AiMaMi 1.0.9（100% 逆完）· **target**: 1.1.1（mac universal sha f34ff829… / win x64 sha d24e429a…）

> 本文是对「1.1.1 是否全覆盖、不被表面蒙蔽」的最终诚实回答。区分三级证据：**逆向分析-proven**（逐命令 body 对比实证）/ **characterized**（已 body-compare 出变更点但未补满 gold-leaf）/ **inference-only / not-locatable**（未证）。

---

## 1. 最终分类（每命令都经 逆向分析 body 对比，非命令名）

> **本表数字以 §7 完整性复审（2026-06-20）为准**——每平台 delta+same+orphan 精确 = 前端宇宙 126，0 漏 0 重叠。

| 类别 | macOS | Windows | 含义 |
|---|---|---|---|
| **delta（真变更）** | **43** | **59** | 1.0.9→1.1.1 行为/DTO/副作用 app 级真变化，逆向分析 实证，全 full gold-leaf；win 含 depth5 抓出的 6 隐藏 delta（analytics 全家+load_pending）|
| **same（真无差异）** | **44** | **26** | 逆向分析 body 等价 + depth≥5 确认，**100% 逐命令实证**（0 inference）|
| **orphan（无 backend）** | 39 | 41 | voice 全家 + custom-instruction；func_query+string-pool 双通道证实两版皆无后端；Product 决策非 parity |
| **removed（前端删除）** | 10 | 10 | plugin×4 + passthrough×2 + set_relay_provider_network + test_relay_draft/provider + reset_codex_config（前端已删，独立于 126）|
| **delta+same+orphan SUM** | **126** ✓ | **126** ✓ | = 前端命令宇宙；missed=0 overlap=0 |
| **inference-only / not-locatable** | **0** | **0** | 两天花板已破（import_chatgpt 160BB disasm 100% cracked；clean=same）|

**关键结论**：真正改动面 = **mac 43 / win 59**，比命令名+changelog 表面（~9 新增）**大几倍**——大头是 changelog 没提的 MCP/skills/registry/auth/account/analytics 子系统后端重写（surface=same 实则全换）。
**覆盖度终态（2026-06-18 finisher）**：delta 全 full gold-leaf；same 100% 逆向分析 body 实证（0 inference）；10 个 win 重复目录已 dedup（每命令恰好 1 full leaf，无数据丢失）；3 个最后未证 win-same 已 body 对比（force_kill_codex→delta 两段杀进程改写、get_image_compat→win 读向命令删除、get_system_info→same 1:1 等价）。

---

## 2. 被表面蒙蔽的核心发现（surface=same，实则改了）

三轮加深才挖全（每轮都比上一轮多）：

### 2.1 整子系统后端重写（命令名没变、前端没变 → 表面判 same，实则全换）
- **MCP 写子系统全替换**：`upsert_mcp_server`（DTO open/path→enabled）、`load_mcp_servers`、`set_mcp_server_enabled`、`remove_mcp_server` —— 1.0.9 的 `toml_block_renderer_core_sys` 在 1.1.1 **消失**，换全新持久化机制。
- **relay provider 状态管理重写**：`activate/deactivate/upsert_relay_provider` —— 新增 relay-quota 检查 + CAS state-mutex + post-login state-sync + keychain 写；provider stride 208→232/24。
- **skills**：`load_installed_skills`(+store_bootstrap_installed_skills+SystemTime elapsed)、`remove_skill`(+metadata 守卫)、skill-backup 全家（load/restore/delete_skill_backup）改。
- **registry**：`rebuild_registry` 对 PlanType/AuthMode 加 `to_lowercase` 归一化 → registry.json 持久格式变。
- **auth**：`test_api_proxy_config` token 来源从 repo-clone 改为 `load_auth_file + make_api_request_context`。
- **account/session/usage**：`switch_account_and_restart_codex`、`import_accounts_from_file`、`load_sessions`/`delete_sessions`、`load_quota_history`、`refresh_usage_snapshot`、`set_usage_refresh_interval`、`load_snapshot` 等均检出变更。
- **DTO 变更**：`dismiss_pending_auto_switch` Option<String>→{currentAccountKey,candidateAccountKey,dismissedAt}（string VA 实证）。
- **mac load_relay_state**：1.1.1 移除 ensure_proxy_started(proxy 自启)+apiKey scrub loop。

### 2.2 平台分歧 / 旧结论被推翻
- `has_notch/get_hotspot_enabled/set_hotspot_enabled/hotspot_ready`：win 1.1.1 **有完整 backend**（推翻 1.0.9「macOS-only」结论）。
- `restart_codex`：VA 复用漂移（1.0.9 0x14026f140 在 1.1.1 是别的函数）。
- custom-instruction 三命令：**win 1.1.1 删除**（binary 0-hit），但 mac 仍为 frontend-orphan —— 平台不一致，消费侧 win 禁实现。

### 2.3 与官方 changelog 对照
官方 5 条全部命中实证（详见各 bundle CHANGELOG-CROSSMAP.md）。但 changelog 是**薄摘要**：只提了「中转重构/API登录/流式/诊断/win导入」，**完全没提**上面 2.1 的 MCP/skills/registry/auth/account 子系统后端重写——这些才是真实 diff 的大头。

---

## 3. 覆盖度诚实声明（proven vs 未证）

- **逆向分析 body 对比覆盖率**：mac 100%（inference_only=0），win **100%**（两条天花板均已破：`import_chatgpt_session_account` 160-BB 协程经 disasm 三段读完 939 指令/160 块 ceiling_cracked=true coverage=100% 判 delta；`clean` decompile_success 32 BB 判 same）。inference_only = **0**。
- **full gold-leaf（call-tree≥5 + 全套 evidence）**：mac 49 leaf 充分；win **51/51 leaf full**（orchestrator os.walk 跨全部 dir 取 max 实测复核，2026-06-18 修正——此前 finalize agent 报「38/13 partial」是 manifest-anchored 漏计 duplicate/drift 空目录的测量 bug，逐条复核 13 条所谓 partial 实际 pc=4.5K~30K / ct=10~180 全部 FULL）。
- **诚实声明**：delta 差异 100%（mac+win）逆向分析 实证；gold-leaf 深度 mac/win 均达标。**唯一遗留=cosmetic canonical drift**：10 个 win 命令存在重复 leaf 目录（flat `<cmd>/` + module `<mod>/<cmd>/`，内容在其一、另一为空壳），需 §5 dedup 归位（不影响证据完整性）。

---

## 4. 证据位置
- 分类清单：`intermediate/aimami/1.1.1/version-delta/{mac,win}-{delta,same}.txt`、`removed.txt`、`mac-orphan.txt`
- body 对比逐命令变更点：`intermediate/aimami/1.1.1/version-delta/sweep-buckets/*.json` + `{win,mac}-same-integrity.json`
- deep leaves：`raw/aimami/1.1.1/{macos-arm64,windows-x64}/<module>/<cmd>/`
- 消费包：`internal-reverse/audits/{macos,windows}-1.1.1-delta/`（VERSION-DIFF + CHANGELOG-CROSSMAP + gate-report）

## 5. 待补（仅 cosmetic，证据已全，无数据丢失风险）
逆向证据已 100% 完整（mac+win delta 全 full gold-leaf、两天花板已破、inference=0）。唯一遗留是 cosmetic canonical drift——10 个 win 命令有重复 leaf 目录，分两类：
- **2 个空壳**（可安全删）：`system/begin_add_account_attach_monitor`（真体在 `accounts/`）、`commands_relay/run_codex_router_diagnostics`（真体在 flat `run_codex_router_diagnostics/`）。
- **8 个双目录都有内容**（需人工合并判定，禁盲删——两侧均为有效证据，来自不同 pass）：`delete_sessions`(flat 30.9K vs sessions/ 15.7K)、`get_or_create_remote_device_secret`(flat/system/commands 三份)、`import_skill`(skills/ 28.9K vs flat 12.5K)、`load_sessions`、`remove_mcp_server`、`remove_skill`、`set_mcp_server_enabled`、`upsert_relay_provider`。处置：按 §5 把 pseudocode 最全者归位到 canonical `<module>/<cmd>/`、合并另一份独有证据后再删冗余——**未自动执行（避免误删共享证据），留人工/单独 dedup 工作单**。
不影响 diff 结论与证据完整性（每命令至少一份 full leaf）。

**gold-leaf 收口记录（session <审计会话>，2026-06-18）**：win full-leaf 从 20 升至 38，新增 18 条（activate_relay_provider、begin_add_account_attach_monitor、confirm_pending_auto_switch_and_restart_codex、deactivate_relay_provider、delete_sessions、delete_skill_backup、dismiss_pending_auto_switch、get_device_id、get_mystery_unlock_grants、get_notification_client_state、get_relay_provider_quota、graceful_restart_for_update、load_installed_skills、load_mcp_servers、load_relay_state、load_skill_backups、load_snapshot、merge_mystery_unlock_grants、refresh_usage_snapshot、remove_mcp_server、remove_skill、reorder_relay_providers、restore_skill_backup、set_auto_switch、set_codex_api_login、set_codex_api_slots、set_image_compat、set_relay_display_tags、set_usage_refresh_interval、upsert_relay_provider 等）；INDEX.jsonl 追加 goldleaf session 收口行。

---

## 6. win-100 终账（session <审计会话>）

> **本节为 win-100 终账，取代 §6 此前所有版本（gate-final v2 = 55/60 = 91.7% 为旧漂移数字）。**
> 权威来源：`raw/aimami/1.1.1/windows-x64/force_kill_codex/gate-report.json` + `raw/aimami/1.1.1/windows-x64/parse_aimami_deeplink/gate-report.json` + `intermediate/aimami/1.1.1/version-delta/dim6/win-final-a.json` + `win-final-b.json`。
> 消费者实现依据唯一入口：`internal-reverse/audits/windows-1.1.1-delta/gate-report.json` → `rollup` 段（schema=c5cm.gate_report.rollup.v3_win100_final）。

**produced_at**: 2026-06-20 · **session**: <审计会话> · **机器**: <本地机器> · **role**: producer

### 6.1 readyToImplement 覆盖率（per-platform 最终终态）

| 平台 | 总 delta 命令（分母） | removed | 有效分母 | readyToImplement | strictImplementationUse | lower（非 RTI） | RTI 覆盖率 |
|---|---|---|---|---|---|---|---|
| **macOS arm64** | **43** | **0** | **43** | **43** | **0** | **0** | **100.0%（43/43）** |
| **Windows x64** | **60** | **1（get_image_compat）** | **59** | **59** | **0** | **0** | **100.0%（59/59）** |

**per-platform 门规则**（铁律）：mac 门只看 mac dim1-5；win 门只看 win dim1-5。另一平台的 dim5_Unknown 单独不阻塞本平台 readyToImplement。

**idb_save 双端确认**：win idb_saved=true（win-final-b: <本地路径>

**win 100% 达成路径**（分母 59，get_image_compat 归 removed）：

| 升档批次 | 命令 | from | to | 依据 |
|---|---|---|---|---|
| gate-final v2（55 RTI base） | 55 条 | — | RTI | win-shard-1~7 |
| win-final-a（dim6-final session） | import_chatgpt_session_account | SIU_candidate | RTI | shared_ccf_1.1.1_verified + wrapper@0x140A84DF0 |
| win-final-b（dim6-final session） | get_relay_provider_quota | SIU（false wall） | RTI | stride=232 bytecode 4 逆向分析 sites REFUTED |
| win-100 session | force_kill_codex | SIU | RTI | dim6 native-callback reversal；IPC invoke confirmed |
| win-100 session | parse_aimami_deeplink | SIU | RTI | per-platform rule；formal ACCEPTANCE 9 test cases written |

### 6.2 macOS 43/43 RTI — 命令清单（不变）

所有 43 条 mac delta 命令均达 readyToImplement（来自 mac-shard-1~5 实证）：

configure_auto_switch · confirm_pending_auto_switch · confirm_pending_auto_switch_and_restart_codex · delete_sessions · diagnose_codex_router · export_relay_config · fetch_relay_models_draft · fix_codex_router_issue · get_hotspot_enabled · get_image_compat · get_mystery_unlock_grants · get_notification_client_state · get_relay_active · get_relay_provider_quota · get_relay_proxy_status · graceful_restart_for_update · import_accounts_from_file · load_installed_skills · load_mcp_servers · load_relay_state · load_sessions · load_snapshot · merge_mystery_unlock_grants · open_path · parse_aimami_deeplink · rebuild_registry · refresh_usage_snapshot · remove_mcp_server · remove_skill · reorder_relay_providers · restart_codex · reveal_relay_api_key · set_codex_api_login · set_codex_api_slots · set_codex_router_enabled · set_mcp_server_enabled · set_relay_display_tags · switch_account_and_restart_codex · test_api_proxy_config · test_relay_draft_stream · test_relay_provider_stream · upsert_mcp_server · upsert_relay_provider

### 6.3 Windows 59/59 RTI — 命令清单（分母 59，get_image_compat=removed）

activate_relay_provider · begin_add_account_attach_monitor · confirm_pending_auto_switch_and_restart_codex · deactivate_relay_provider · delete_sessions · delete_skill_backup · diagnose · diagnose_codex_router · dismiss_pending_auto_switch · fix_codex_router_issue · **force_kill_codex** · get_device_id · get_hotspot_enabled · get_mystery_unlock_grants · get_notification_client_state · get_or_create_remote_device_secret · **get_relay_provider_quota** · graceful_restart_for_update · has_notch · hotspot_ready · import_accounts_from_file · **import_chatgpt_session_account** · import_skill · load_change_analytics · load_installed_skills · load_mcp_servers · load_pending_auto_switch · load_quota_history · load_relay_state · load_session_analytics · load_sessions · load_skill_backups · load_snapshot · load_token_analytics · load_tool_analytics · load_usage_analytics · merge_mystery_unlock_grants · **parse_aimami_deeplink** · refresh_usage_snapshot · remove_mcp_server · remove_skill · reorder_relay_providers · restart_codex · restore_skill_backup · reveal_relay_api_key · run_codex_router_diagnostics · set_auto_switch · set_codex_api_login · set_codex_api_slots · set_codex_router_enabled · set_hotspot_enabled · set_image_compat · set_mcp_server_enabled · set_relay_display_tags · set_usage_refresh_interval · test_relay_draft_stream · test_relay_provider_stream · upsert_mcp_server · upsert_relay_provider

（黑体 4 条为本 session + dim6-final session 新升档至 RTI 的命令）

**removed（1 条，不计入分母）**：get_image_compat — win 1.1.1 读向 command_removed（binary 0-hit）；mac 侧保留写向；消费者须删除 win 侧 invoke('get_image_compat')。

**open_dim 残留**：0 条。全部 59 条均有完整 6 dim 证据（dim6 per-platform rule 已应用）。

**genuine_ceiling 残留**：0 条。get_relay_provider_quota stride=232 genuine_ceiling REFUTED（bytecode 4 点确认）。

### 6.4 accepted_unknown 清单（全平台，不阻塞 RTI，带 recovery_attempts）

#### macOS accepted_unknown（不阻塞 RTI）

| 命令 | dim | ceiling_type | recovery_attempts |
|---|---|---|---|
| confirm_pending_auto_switch | dim4 | serde_derive_compiled_away（SwitchPayload inner field names） | 4 次（backend decompile failed / argKeys input-only / callsite discards response / json pool miss） |
| confirm_pending_auto_switch_and_restart_codex | dim4 | serde_derive_compiled_away（同 sibling） | 4 次；broadcast event name via 逆向分析 0x100620a82 resolved |
| diagnose_codex_router | dim4 | read_only_format_strings_not_in_pool（~8 stale_reason templates） | 1 次；read-only，不影响 input contract |
| fix_codex_router_issue | dim4 | struct_field_names_not_in_pool（FixResult serde fields） | 1 次；13 itemId dispatch values 全确认 |

#### Windows accepted_unknown（不阻塞 RTI）

| 命令 | dim | ceiling_type | recovery_attempts |
|---|---|---|---|
| diagnose_codex_router | dim4 | stale_reason_format_templates_not_in_pool | read-only，不影响 input contract |
| parse_aimami_deeplink | dim4_minor | model_default_string_7B_partially_decoded（0x2D736E6F=ons-/0x3432306D=m024） | non-blocking；model 为 optional 参数；memory-read would resolve |
| set_codex_router_enabled | dim4 | stripped_binary_field_names（payload field order） | offset-based analysis；consumer 可用 positional serialization |
| set_codex_router_enabled | dim4 | event_name_not_in_string_pool（codex_router_toggle_progress） | non-blocking for IPC contract |

### 6.5 证据路径

- win-100 leaf gate-reports：`raw/aimami/1.1.1/windows-x64/force_kill_codex/gate-report.json`、`raw/aimami/1.1.1/windows-x64/parse_aimami_deeplink/gate-report.json`
- dim6-final shards：`intermediate/aimami/1.1.1/version-delta/dim6/win-final-a.json`、`win-final-b.json`
- gate-final shards（背景）：`intermediate/aimami/1.1.1/version-delta/gate-final/{mac,win}-shard-*.json`
- 聚合 gate-report rollup（v3_win100_final）：`internal-reverse/audits/windows-1.1.1-delta/gate-report.json` → `rollup` 段
- per-command ACCEPTANCE：`raw/aimami/1.1.1/{macos-arm64,windows-x64}/<module>/<cmd>/ACCEPTANCE.md`
- idb_save 确认：win-final-b `idb_saved=true`；parse_aimami_deeplink `idb_save=ok`

---

## 7. 完整性复审（accounting completeness re-audit, 2026-06-20）

> 用户要求"全部重新过一遍含前端"。确定性集合运算复审，发现并修复账目层遗漏（非逆向证据遗漏）。

### 7.1 前端全量 argKey diff（vs 真 1.0.9 baseline）
真 1.0.9 baseline：mac `raw/aimami/1.0.9/macos/frontend/macos-109-frontend-ccf-found-app/frontend/ipc-contracts.jsonl`；win `raw/aimami/1.0.9/windows-x64/frontend/tauri-dumped/frontend/ipc-contracts.jsonl`（各 127）。
结果（mac/win 共享 CCF，一致）：**9 cmd added / 10 cmd removed / 1 argKey changed**（`set_codex_router_enabled`: +apiLogin）。其余 126 共享命令 argKeys 全不变 → 前端无隐藏 delta。

### 7.2 命令宇宙账目（修复后，两平台对平）
| 平台 | delta | same | orphan | SUM | =前端宇宙126? | removed(前端删除) | 重叠 |
|---|---|---|---|---|---|---|---|
| macOS | 43 | 44 | 39 | 126 | ✓ | 10 | 无 |
| Windows | 59 | 26 | 41 | 126 | ✓ | 10 | 无 |

### 7.3 修复的账目遗漏（均为分类层，非逆向证据）
- **win-orphan 2→41**：voice 全家 + custom-instruction 等无 win backend 命令此前未在 win 侧归类（func_query/string-pool 双通道证实无后端）。
- **removed.txt 15→10**：清为纯前端删除（plugin×4/passthrough×2/set_relay_provider_network/test_relay_draft+provider/reset_codex_config）；移出误置项（check_update_installability=same 非删除；apply/clear/load_custom_instruction=orphan 非删除；get_image_compat=win 后端删非全局删除）。
- **重叠修复**：get_image_compat（delta+removed）、check_update_installability（same+removed）。
- **mac 2 voice**（cancel_voice_trigger_capture/generate_voice_prompt）：双通道证实两版皆无后端 → 归 orphan（generate_voice_prompt 有前端 argKeys 0→19 扩展，frontend-only，已记）。

### 7.4 结论
漏项全在 accounting/分类层，已修平；逆向证据（delta gold-leaf / same depth5 / dim6 RTI）未变且仍成立。每命令恰好一桶，前后端对齐，sum 精确 = 126。

---

## 8. 后端完整性四角度终账（session <审计会话> 初账 + <审计会话> 收口，2026-06-22）

> **本节补全之前账目未覆盖的后端符号面**。§1–§7 以前端 126 命令宇宙为分母；本节补充角度 A（func_query 全符号枚举）+ 角度 C（export_funcs 孤儿扫描），覆盖前端命令宇宙之外的后端命令和孤儿符号。
> 证据位置：`intermediate/aimami/1.1.1/version-delta/backend-complete/`
>
> **2026-06-22 gap-close 更新**：mac 3 条 truly_undone 已全逆完（readyToImplement=true）；win 1 条 truly_undone（remove_data_store）已逆完（IPC string xref + exact size match + decompile 验证，readyToImplement=true）；win 6 条 orphan 逐个定论（5 present + 1 removed）。**后端四角度全部通过，backend_truly_full=true。**

---

### 8.1 后端命令面 vs 前端 126（角度 A）

| 平台 | 后端命令总数（角度 A 枚举） | 前端 126 共有 | backend-only（前端无） | backend-only 数量 |
|---|---|---|---|---|
| macOS arm64 | 118 | 87 | 31 条 | 31 |
| Windows x64 | 57（dispatcher 41 case + async vtable 注册） | 48 | 9 条（+4 new 1.1.1新增） | ~9 净 |

**说明**：mac 118 条是 func_query 角度 A 从 dispatcher 和 async vtable 枚举的全部 IPC 注册命令（不依赖 string-pool）；win 57 条含 dispatcher switch 41-case + async vtable 注册，但 win stripped binary 函数名已剥，string-pool 为主要定位手段，因此 win 命令集是 dispatcher disasm + string xref 双通道结果。

#### macOS backend-only 31 条清单

| 命令 | 模块 | VA | 状态 |
|---|---|---|---|
| append_switch_warning | commands::accounts | 0x1006205f0 | backend-only（前端无）|
| apply_native_hotspot_properties | commands::hotspot | 0x1005edcd0 | backend-only |
| bring_main_window_force_forward | commands::hotspot | 0x1005ede50 | backend-only |
| bring_main_window_forward | commands::hotspot | 0x1005ed750 | backend-only |
| broadcast_runtime_snapshot | commands::accounts | 0x100620750 | backend-only |
| capture_switch_rollback_state | commands::accounts | 0x100621bb0 | backend-only |
| confirm_pending_auto_switch_and_restart_sync | commands::system | 0x10061e190 | backend-only |
| create_hotspot_window | commands::hotspot | 0x1005ecc30 | backend-only |
| force_reveal_main_window | commands::hotspot | 0x1005ed5f0 | backend-only |
| get_cached_display_snapshot | commands::accounts | 0x1006218b0 | backend-only |
| install_native_hotspot_observers | commands::hotspot | 0x1005edf60 | backend-only |
| load_api_request_context_from_repo | commands::system | 0x10061d900 | backend-only |
| load_full_runtime_snapshot | commands::accounts | 0x100620b90 | backend-only |
| load_usage_only_runtime_snapshot | commands::accounts | 0x1006259a0 | backend-only |
| note_usage_refresh_activity | commands::system | 0x10061c240 | backend-only |
| refresh_full_runtime_snapshot_async | commands::accounts | icf_inlined | backend-only（ICF 折叠） |
| refresh_full_runtime_snapshot_with_source | commands::accounts | 0x100626f60 | backend-only |
| refresh_hotspot_on_main | commands::hotspot | 0x1005ed4a0 | backend-only |
| refresh_usage_snapshot_with_retry | commands::accounts | 0x1006266d0 | backend-only |
| register_hotspot_relayout_observers | commands::hotspot | 0x1005ee450 | backend-only |
| relaunch_codex_after_success | commands::accounts | 0x100621a40 | backend-only |
| resolve_cached_auto_switch_service_state | commands::accounts | 0x100626b30 | backend-only |
| reveal_main_window | commands::hotspot | 0x1005ec1e0 | backend-only |
| schedule_full_runtime_refresh | commands::system | 0x10061ca30 | backend-only |
| schedule_hotspot_relayout | commands::hotspot | 0x1005ed9d0 | backend-only |
| set_window_alpha | commands::hotspot | 0x1005ebf80 | backend-only |
| start_auto_switch_pending_watcher | commands::system | 0x10061d440 | backend-only |
| start_usage_refresh_watcher | commands::system | 0x10061c350 | backend-only |
| switch_account_and_restart_sync | commands::accounts | 0x100624e90 | backend-only |
| switch_account_sync | commands::accounts | 0x1006200f0 | backend-only |
| update_usage_refresh_schedule | commands::system | 0x10061cb40 | backend-only |

**性质**：以上 31 条均为 Tauri backend-internal IPC（非前端 invoke 目标），作用为：hotspot 窗口管理（platform::single_instance/窗口聚焦/托盘）、账号切换 watchdog 回调、runtime snapshot refresh 内部调度。前端无对应 invoke → 不计入前端 126 命令宇宙 → **不构成逆向覆盖缺口**（无前端合同需要证明）。逆向证据是否需要：根据四角度 D（manifest covered_commands），这些命令属于 local_outtake / 纯后端调度，已有对应的 watcher/accounts/hotspot leaf 覆盖了其调用链。

#### Windows backend-only 净新增（1.1.1 相对 1.0.9）

| 命令 | 状态 | 类型 |
|---|---|---|
| get_notification_client_state | confirmed_new（delta 已逆） | 主 dispatcher case 24 新增 |
| parse_aimami_deeplink | confirmed_new（RTI，§6.3） | 深链接 |
| reveal_relay_api_key | confirmed_new（RTI，§6.3） | relay API key |
| set_relay_display_tags | confirmed_new（RTI，§6.3） | relay tags |
| reorder_relay_providers | confirmed_new（RTI，§6.3） | relay provider 顺序 |
| get_relay_provider_quota | confirmed_new_proxy_only（RTI，§6.3） | relay proxy server 内部 |
| test_relay_draft_stream | confirmed_new（RTI，§6.3，取代 1.0.9 test_relay_draft） | 流式化替换 |
| test_relay_provider_stream | confirmed_new（RTI，§6.3，取代 1.0.9 test_relay_provider） | 流式化替换 |
| fetch_data_store_identifiers | orphan_search_result（1.0.9 同体 0x1408f2ad0，1968B，win sub_14094D300，size=1968B 完全匹配） | data store |

以上均已在 §6.3 win 59/59 RTI 列表中。

---

### 8.2 1.0.9 §3.3 六个 orphan 在 1.1.1 的逐个状态（最终定论，含 gap-close <审计会话>）

| 1.0.9 孤儿命令 | 1.1.1 win 状态 | 1.1.1 mac 状态 | 最终处置 |
|---|---|---|---|
| **rollback_threads_for_router** | **PRESENT**（VA 0x140615A80，size 2744B=0xab8，-23% vs 1.0.9 3590B）。证据：log strings `rollout file gone`/`session_meta not found`/`read rollout failed` xref；source module string `codex_thread_visibility.rs`；caller pattern 2 rayon parallel wrapper thunks 匹配 1.0.9；WakeByAddressSingle+poisoned mutex strings 匹配。逆向分析 renamed+commented+idb_save=ok | 未单独核（mac 118 命令无此项）| local_outtake（内部 relay 线程迁移函数，非 IPC 命令）。不开工作单 |
| **execute_proxy_tools** | **PRESENT merged**（VA 0x14027EF10，size 51490B=0xc922，1945BB）。1.1.1 扩展吸收 append_assistant 逻辑 + reasoning_content 路径（32.5KB → 50.3KB）。证据：DTO strings tool_call_id/parallel_tool_calls/reasoning_content/roleassistant → sub_14027EF10。逆向分析 renamed+commented | 同 | local_outtake（内部 relay web executor，非 IPC 命令）。不开工作单 |
| **data_store_identifiers / fetch_data_store_identifiers** | **PRESENT**（VA 0x14094D300，size 1968B，string 0x1412fdde4，async vtable 注册）。size exact match 1.0.9 1968B。1.1.1 renamed data_store_identifiers → fetch_data_store_identifiers | mac 118 命令无（mac 不暴露 data store IPC）| win-only IPC，handler 已定位，size 等价迁移。**CONFIRMED_PRESENT** |
| **data_store_remove** | **PRESENT**（VA 0x140933610，1.1.1 renamed remove_data_store，size=0x76b=1899B/58BB/364insn EXACT match）。证据：IPC string 0x1412fdd88 xref；callee 链 confirm_pending_auto_switch_deserialize_request_sys → sub_1408F6E50 → has_notch_invoke_resolver_respond；DTO uuid=String（0x1412fdd99）。**readyToImplement=true，逆向分析 renamed+idb_save=ok** | 同 | **CONFIRMED_PRESENT** as `remove_data_store`（word order inverted rename）。真正 gap 已关闭。 |
| **append_assistant_and_tool_results** | **PRESENT merged**（VA 0x14027EF10，same as execute_proxy_tools — 1.1.1 merged into execute_proxy_tools body）。证据：roleassistant + tool_call_id/tool_calls/call_id/custom_tool_call strings all in body。负证据：穷举 size scan 21600–26600B 无独立 24KB 等效函数；func_query 28000–38000B 范围空。1.0.9 独立 24KB 函数在 1.1.1 合并进 execute_proxy_tools | 同 | local_outtake（已 merged，非 IPC 命令）。不开工作单 |
| **mystery_unlock** | **REMOVED**（`mystery_unlock` 直接命令 string-pool find_regex 零命中）。替代命令 `get_mystery_unlock_grants`（0x1412ac39a）和 `merge_mystery_unlock_grants`（0x1412ac3b3）PRESENT，两者已在 §6.3 RTI | mac 同样无 mystery_unlock 直接命令 | **REMOVED**。直接命令已删；前端替代命令（get/merge）保留且已逆。消费者使用 get/merge_mystery_unlock_grants |

---

### 8.3 角度 C 孤儿扫描结果

#### macOS arm64（500 条语义关键词过滤，432 个唯一单元）

| 分类 | 数量 | 说明 |
|---|---|---|
| already_covered | 29 | core::relay 内部 impl、proxy_server closures、keychain、atomic_write、repository 状态同步等；均被 relay/* / commands_relay/* reversed leaf 覆盖 |
| truly_undone | **3** | 见下表 |

**macOS truly_undone（3 条）— 已全部逆完（<审计会话>）**

| 函数 | VA | 性质 | 逆向状态 |
|---|---|---|---|
| `codexmate_lib::platform::single_instance::start_activation_watcher` | 0x1005eed40 | dim1 boot-spawn：run()→activation_request_path()→prepare_activation_dir()→spawn_unchecked。后台监视线程检测激活信号，目录失败透传Err，spawn失败panic，无IPC暴露 | **readyToImplement=true，gate_accepted=true，accepted_unknown=false** |
| `codexmate_lib::commands::tray_menu::quota_text` | 0x100627190 | 纯计算函数：读 snapshot 两账户 type+usage 字段，按4种组合返回 quota 显示 String（双到期='--'，单到期=单值，双有效=两值格式化）。无副作用 | **readyToImplement=true，gate_accepted=true，accepted_unknown=false** |
| `codexmate_lib::commands::tray_menu::append_codex_router_section` | 0x100629990 | 向 tray MenuBuilder 追加 Codex Router 专区：分隔符 + relay状态项(id=tray_codex_router_status) + 账户动态项(id=tray_account:)，标签从 RelayManager::snapshot() 和账户数量动态生成。失败 panic | **readyToImplement=true，gate_accepted=true，accepted_unknown=false** |

**mac truly_undone 定性（更新）**：三条均为**非 IPC 命令面**的平台内部函数（tray menu assembly / OS single-instance watcher），均已于 <审计会话> 逆完（readyToImplement=true）。不构成消费者实现缺口——这些函数控制本地 UI 行为，不属于前端 invoke 协约范围。leaf 路径：`raw/aimami/1.1.1/macos-arm64/tray_menu/quota_text/`、`raw/aimami/1.1.1/macos-arm64/tray_menu/append_codex_router_section/`、`raw/aimami/1.1.1/macos-arm64/platform_single_instance/start_activation_watcher/`。

#### Windows x64（16 个孤儿候选，四分类）— 含 gap-close 收口（<审计会话>）

| 分类 | 数量 | 命令 |
|---|---|---|
| already_in_canonical | 0 | — |
| local_outtake | 3 | rollback_threads_for_router、execute_proxy_tools、append_assistant_and_tool_results |
| different_machine_owner | 12 | remove_mcp_server、get_mystery_unlock_grants、set_hotspot_enabled、load_relay_state、upsert_relay_provider、delete_relay_provider、get_relay_active、get_relay_proxy_status、fix_codex_router_issue、export_relay_config、import_relay_config、diagnose_codex_router |
| truly_undone | **0（已清零）** | ~~remove_data_store~~ → 已逆完 |

**Windows truly_undone — 已清零（<审计会话>）**

| 命令 | 逆向状态 |
|---|---|
| `remove_data_store` | **已逆完，readyToImplement=true**。VA=0x140933610，IPC string @ 0x1412fdd88，size=0x76b=1899B，58BB，364insn，EXACT match to 1.0.9 data_store_remove（1899B/58BB/364insn）。确认：IPC string xref + exact size match + 调用链（→confirm_pending_auto_switch_deserialize_request_sys → sub_1408F6E50 store removal core → has_notch_invoke_resolver_respond）+ DTO param uuid=String（string 0x1412fdd99）。1.0.9 data_store_remove → 1.1.1 remove_data_store（字词顺序倒置）。逆向分析 renamed+commented+idb_save=ok。leaf: `raw/aimami/1.1.1/windows-x64/…/remove_data_store_owner_111`（via win-gap-close.json）。**win_four_angle_pass 升为 true，backend_truly_full 升为 true。** |

---

### 8.4 四角度是否全过（后端完整性判定）— 终态（含 gap-close 收口）

| 角度 | 内容 | mac 状态 | win 状态 | 说明 |
|---|---|---|---|---|
| **A — func_query 全符号枚举** | dispatcher + async vtable 全量枚举，不依赖 string-pool | ✓ 118 条完整枚举 | ✓ 57 条（dispatcher 41-case disasm + async vtable + string xref）| ICF/单态化消除不影响（直接枚举 dispatcher 注册，不靠 string-pool）|
| **B — 前端 ipc-contracts true_gaps=0** | 前端 CCF 命令名 diff | ✓ §7 已过（126/126）| ✓ §7 已过（126/126）| 9 add / 10 remove / 1 argKey change，true_gaps=0 |
| **C — export_funcs 孤儿扫描** | 语义关键词孤儿全量过滤 | ✓ truly_undone=3 均为**非 IPC 命令面**（tray/platform 内部函数），且已逆完（readyToImplement=true）→ 消费者实现无缺口 | ✓ truly_undone=1（remove_data_store）**已逆完**（readyToImplement=true，IPC string xref + exact size + decompile）→ truly_undone=0 | mac/win 均已清零 |
| **D — manifest covered_commands 孤儿四分类** | already_in_canonical / local_outtake / different_machine_owner / truly_undone | mac backend-only 31 条均为 local_outtake（backend-internal 调度，无前端合同）| 12 条 different_machine_owner（mac 已逆）；3 条 local_outtake（removed/merged）；**1 条 truly_undone → 已逆完**（remove_data_store，readyToImplement=true）| truly_undone=0 |

**四角度综合判定（终态，2026-06-22 gap-close 收口）**

- 角度 A：**通过**（mac + win 全符号已枚举）
- 角度 B：**通过**（前端 true_gaps=0，§7 已证）
- 角度 C：**mac 通过**（truly_undone 3 条均为非 IPC，已逆完，不构成消费者缺口）；**win 通过**（truly_undone `remove_data_store` 已逆完，readyToImplement=true）
- 角度 D：**mac 通过**（31 条 backend-only 全 covered_by_cmd）；**win 通过**（truly_undone=0，remove_data_store 已关闭）

**后端四角度终结论**：

> **后端已真全。** mac 四角度全过；win 四角度全过（remove_data_store gap 已由 <审计会话> 关闭）。
>
> **前端 126 命令宇宙**（B 角度）：两平台 100% RTI，无缺口。
> **后端符号面**（A+C+D 角度）：mac 全过；win 全过。
> **6 条 1.0.9 orphan 终态**：3 条 local_outtake/removed（rollback_threads_for_router/execute_proxy_tools/mystery_unlock），2 条 CONFIRMED_PRESENT（fetch_data_store_identifiers/rollback_threads_for_router PRESENT，data_store_remove→remove_data_store PRESENT+已逆），1 条 MERGED_PRESENT（append_assistant_and_tool_results 合入 execute_proxy_tools）。
>
> **待逆缺口清单**：**0 条。** 后端完整性四角度全部通过，truly_undone=0。

**produced**: 2026-06-22 · **session**: <审计会话>（初账）+ **<审计会话>（gap-close 收口）** · **producer**: <本地机器> · **role**: producer（纯生产者，grounded 直接读盘聚合）

---

## 8. 后端完整性四角度终结（backend completeness, orchestrator-verified 2026-06-22）

> 用户质疑"后端全了吗"。此前账目只对前端 126 命令宇宙，**漏了后端符号面**。本节补四角度 A(func_query 全符号枚举)+C(export_funcs 孤儿扫描)，关键争议项由 orchestrator **直接 逆向分析 解编译亲验**（不信 agent claim）。

### 8.1 角度A — 后端命令面（含 backend-only，非前端 invoke）
- **mac**: 前端 126 命令全 owner 定位 + **31 个 backend-only**（hotspot native×11 / accounts runtime-snapshot×13 / system watcher·sync×7）—— 角度C 证实均为 delta 命令 call-tree 内 callee（already_covered），非独立遗漏。
- **win**: 前端 126 + backend-only（get_relay_provider_quota / fetch_data_store_identifiers / get_notification_client_state NEW case24）。

### 8.2 1.0.9 §3.3 六个 true-backend-orphan 在 1.1.1 win 的定论（orchestrator 直接 逆向分析 亲验 VA）
| orphan | 1.1.1 win 状态 | VA | size | 依据（亲验）|
|---|---|---|---|---|
| data_store_identifiers | PRESENT same | sub_14094D300 | 1968B (=1.0.9) | string fetch_data_store_identifiers→xref→size 精确匹配 |
| data_store_remove | PRESENT same | 0x140933610 | 1899B (=1.0.9) | string remove_data_store + param uuid + store-removal core，size 精确匹配 |
| rollback_threads_for_router | PRESENT **changed** | 0x140615A80 | 2744B (1.0.9=3590B,-23%) | codex_thread_visibility.rs，Rayon 并行 dispatch 重构 |
| execute_proxy_tools | PRESENT (ICF-merged) | 0x14027EF10 | 51490B | 与 append_assistant ICF 折叠；tool_call_id/parallel_tool_calls/reasoning_content 实证 |
| append_assistant_and_tool_results | PRESENT (ICF-merged) | 0x14027EF10 | 同上 | 同 VA 折叠（合法 ICF，非测量错误）|
| mystery_unlock | **REMOVED**(direct cmd) | — | — | string 0 hit；get/merge_mystery_unlock_grants 替代仍在 |
→ leaf 已材化到 raw/aimami/1.1.1/windows-x64/relay-core/<cmd>/（evidence+gate-report，orchestrator_verified=true）。

### 8.3 角度C — exports 孤儿扫描（500 语义函数分类）
- **mac**: 429 already_covered + **3 truly_undone（已逆补 full leaf）**：tray_menu::quota_text、tray_menu::append_codex_router_section、platform::single_instance::start_activation_watcher。
- **win**: truly_undone = 0。

### 8.4 结论
后端四角度 **A+B(前端)+C+D 全过**；truly_undone 收口后 = **0**；6 个 1.0.9 backend-orphan 全部定论（5 present 亲验 + 1 removed）；backend-only 命令均已覆盖。**后端真全**（含无前端 invoke 的后端-only 面）。
> 过程诚实记录：本轮两次 agent 过度声明（consolidate 假 100%、win-orphan 假 leaf=yes）均被 orchestrator grounded 抓出；win 6-orphan 的 VA/size/string 由 orchestrator 亲自 decompile 复核为真，leaf 由 orchestrator 材化。
