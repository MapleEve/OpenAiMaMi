# evidence-paths.md — 原始 leaf 路径索引

**base**: <来源位置>/
**产出日期**: 2026-06-17

## canonical drift 说明

部分 win 1.1.1 leaf 不在 raw/aimami/1.1.1/windows-x64/ 根目录，而在其子目录。这是历史 session 中 producer 决策的结果（命令按模块归类放置），称为 "canonical drift"。路径如实记录，消费者不应假设根目录结构。

---

## 新增命令 leaf 路径

| 命令 | leaf 路径（相对 base） | canonical drift | 有 gate-report |
|---|---|---|---|
| set_codex_api_login | raw/aimami/1.1.1/windows-x64/set_codex_api_login/ | 否（根目录） | 是 |
| set_codex_api_slots | raw/aimami/1.1.1/windows-x64/set_codex_api_slots/ | 否 | 是 |
| get_relay_provider_quota | raw/aimami/1.1.1/windows-x64/get_relay_provider_quota/ | 否 | 是 |
| reorder_relay_providers | raw/aimami/1.1.1/windows-x64/reorder_relay_providers/ | 否 | 是 |
| reveal_relay_api_key | raw/aimami/1.1.1/windows-x64/reveal_relay_api_key/ | 否 | 是 |
| set_relay_display_tags | raw/aimami/1.1.1/windows-x64/set_relay_display_tags/ | 否 | 是 |
| parse_aimami_deeplink | raw/aimami/1.1.1/windows-x64/parse_aimami_deeplink/ | 否 | 是 |
| test_relay_draft_stream | raw/aimami/1.1.1/windows-x64/test_relay_draft_stream/ | 否 | 是 |
| **test_relay_provider_stream** | **raw/aimami/1.1.1/windows-x64/commands_relay/test_relay_provider_stream/** | **是（commands_relay/ 子目录）** | 是 |
| **fix_codex_router_issue** | **raw/aimami/1.1.1/windows-x64/relay/fix_codex_router_issue/** | **是（relay/ 子目录）** | 否（仅 manifest.json） |

---

## body-delta 命令 leaf 路径

| 命令 | leaf 路径 | canonical drift |
|---|---|---|
| confirm_pending_auto_switch_and_restart_codex | raw/aimami/1.1.1/windows-x64/confirm_pending_auto_switch_and_restart_codex/ | 否 |
| import_accounts_from_file | raw/aimami/1.1.1/windows-x64/accounts/import_accounts_from_file/ | 是（accounts/ 子目录） |
| begin_add_account_attach_monitor | raw/aimami/1.1.1/windows-x64/accounts/begin_add_account_attach_monitor/ | 是（accounts/ 子目录，dedup 后从 system/ 移入） |
| restart_codex | raw/aimami/1.1.1/windows-x64/restart_codex/ | 否（无独立 gate-report；VA 漂移在 win-divergence 文件记录） |

---

## 平台分叉证据路径

| 命令 | leaf 路径 | 旧标注 | 推翻结论 |
|---|---|---|---|
| has_notch | raw/aimami/1.1.1/windows-x64/system/has_notch/ | macOS-only（错误） | win 1.1.1 handler@0x140023000 |
| get_hotspot_enabled | raw/aimami/1.1.1/windows-x64/system/get_hotspot_enabled/ | macOS-only（错误） | win 1.1.1 handler@0x140021570 |
| set_hotspot_enabled | raw/aimami/1.1.1/windows-x64/system/set_hotspot_enabled/ | macOS-only（错误） | win 1.1.1 handler@0x140022070 |
| hotspot_ready | raw/aimami/1.1.1/windows-x64/system/hotspot_ready/ | macOS-only（错误） | win 1.1.1 handler@0x140016720 |

---

## 诊断命令 leaf 路径

| 命令 | leaf 路径 | canonical drift | 备注 |
|---|---|---|---|
| diagnose | raw/aimami/1.1.1/windows-x64/system/diagnose/ | 是（system/ 子目录） | 有 evidence.md；无独立 gate-report |
| diagnose_codex_router | raw/aimami/1.1.1/windows-x64/relay/diagnose_codex_router/ | 是（relay/ 子目录） | 有 evidence.md；无独立 gate-report |
| run_codex_router_diagnostics | raw/aimami/1.1.1/windows-x64/commands_relay/run_codex_router_diagnostics/ | 是（commands_relay/ 子目录） | 见 commands_relay/ 目录 |
| set_codex_router_enabled | raw/aimami/1.1.1/windows-x64/commands_relay/set_codex_router_enabled/ | 是（commands_relay/ 子目录） | body-delta：新增 apiLogin 参数 |

---

## 版本差异分析文件路径

| 文件 | 路径 | 说明 |
|---|---|---|
| win-delta.txt | intermediate/aimami/1.1.1/version-delta/win-delta.txt | win 真变更命令列表（22条） |
| win-same.txt | intermediate/aimami/1.1.1/version-delta/win-same.txt | win 无差异命令列表 |
| mac-orphan.txt | intermediate/aimami/1.1.1/version-delta/mac-orphan.txt | 无 backend 孤儿（voice 等） |
| removed.txt | intermediate/aimami/1.1.1/version-delta/removed.txt | 删除命令列表 |
| FRONTEND-DELTA.md | intermediate/aimami/1.1.1/frontend-delta/FRONTEND-DELTA.md | 前端合约差异（双平台一致） |
| win-divergence-111.json | intermediate/aimami/1.1.1/windows-x64/version-delta/win-divergence-111.json | win 分歧实证（含 hotspot/notch 推翻、restart_codex VA 漂移、confirm_pending 协程重构） |
