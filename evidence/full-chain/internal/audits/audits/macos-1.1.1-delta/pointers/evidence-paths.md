# evidence-paths.md — Raw Leaf 证据路径指针

**session**: <审计会话>
**base**: <来源位置>/raw/aimami/1.1.1/macos-arm64/

> canonical drift 说明：`test_relay_draft_stream` 的 leaf 目录在 `codexmate_lib__commands__relay/`（双下划线），不在 `commands_relay/`；如实记录，非错误。

---

## 真新增命令（9 条）

| 命令 | leaf 路径 | 主要文件 |
|------|----------|---------|
| set_codex_api_login | commands_relay/set_codex_api_login/ | evidence.md |
| set_codex_api_slots | commands_relay/set_codex_api_slots/ | evidence.md |
| get_relay_provider_quota | relay/get_relay_provider_quota/ | evidence.md |
| reorder_relay_providers | commands_relay/reorder_relay_providers/ | evidence.md |
| reveal_relay_api_key | commands_relay/reveal_relay_api_key/ | evidence.md |
| set_relay_display_tags | commands_relay/set_relay_display_tags/ | evidence.md |
| parse_aimami_deeplink | deeplink/parse_aimami_deeplink/ | evidence.md |
| test_relay_draft_stream | **codexmate_lib__commands__relay**/test_relay_draft_stream/ | evidence.md ← canonical drift |
| test_relay_provider_stream | commands_relay/test_relay_provider_stream/ | evidence.md |

---

## body-delta 命令（18 条）

| 命令 | leaf 路径 | gate-report |
|------|----------|-------------|
| configure_auto_switch | system/configure_auto_switch/ | gate-report.json ✓ |
| confirm_pending_auto_switch | system/confirm_pending_auto_switch/ | evidence.md |
| confirm_pending_auto_switch_and_restart_codex | system/confirm_pending_auto_switch_and_restart_codex/ | evidence.md |
| diagnose_codex_router | relay/diagnose_codex_router/ | evidence.md |
| fetch_relay_models_draft | relay/fetch_relay_models_draft/ | evidence.md |
| fix_codex_router_issue | relay/fix_codex_router_issue/ | evidence.md |
| get_hotspot_enabled | hotspot/get_hotspot_enabled/ | evidence.md |
| get_image_compat | system/get_image_compat/ | evidence.md |
| get_mystery_unlock_grants | system/get_mystery_unlock_grants/ | evidence.md |
| get_notification_client_state | system/get_notification_client_state/ | evidence.md |
| get_relay_active | relay/get_relay_active/ | evidence.md |
| get_relay_proxy_status | commands_relay/get_relay_proxy_status/ | evidence.md |
| load_sessions | commands_sessions/load_sessions/ | evidence.md |
| load_snapshot | accounts/load_snapshot/ | evidence.md |
| merge_mystery_unlock_grants | system/merge_mystery_unlock_grants/ | evidence.md |
| open_path | system/open_path/ | evidence.md |
| refresh_usage_snapshot | accounts/refresh_usage_snapshot/ | gate-report.json ✓ |
| remove_mcp_server | commands_relay/remove_mcp_server/ | evidence.md |
| restart_codex | system/restart_codex/ | evidence.md |
| set_codex_router_enabled | commands_relay/set_codex_router_enabled/ | evidence.md |
| set_mcp_server_enabled | mcp/set_mcp_server_enabled/ | evidence.md |
| upsert_mcp_server | mcp/upsert_mcp_server/ | evidence.md |

---

## 孤儿命令（有 gate-report 的 voice）

| 命令 | leaf 路径 | gate-report |
|------|----------|-------------|
| cancel_voice_trigger_capture | voice/cancel_voice_trigger_capture/ | gate-report.json ✓ readyToImplement |
| capture_voice_trigger_key | voice/capture_voice_trigger_key/ | gate-report.json ✓ readyToImplement |
| generate_voice_prompt | voice/generate_voice_prompt/ | evidence.md |

---

## custom_instructions

| 命令 | leaf 路径 | 说明 |
|------|----------|------|
| apply_custom_instruction | custom_instructions/apply_custom_instruction/ | backend absent，accepted_substitute |
| clear_custom_instruction_block | custom_instructions/clear_custom_instruction_block/ | backend absent，accepted_substitute |

---

## 前端差异文件

| 文件 | 路径 |
|------|------|
| FRONTEND-DELTA.md | intermediate/aimami/1.1.1/frontend-delta/FRONTEND-DELTA.md |
| cmd-added | intermediate/aimami/1.1.1/frontend-delta/cmd-added-macos-arm64.txt |
| cmd-removed | intermediate/aimami/1.1.1/frontend-delta/cmd-removed-macos-arm64.txt |
| ipc-contracts.jsonl | raw/aimami/1.1.1/macos-arm64/frontend/dumped/ |

---

## delta 分类清单

| 文件 | 路径 |
|------|------|
| mac-delta.txt (34) | intermediate/aimami/1.1.1/version-delta/mac-delta.txt |
| mac-same.txt (56) | intermediate/aimami/1.1.1/version-delta/mac-same.txt |
| mac-orphan.txt (34) | intermediate/aimami/1.1.1/version-delta/mac-orphan.txt |
| removed.txt (10) | intermediate/aimami/1.1.1/version-delta/removed.txt |
| mac-shard-*.json | intermediate/aimami/1.1.1/macos-arm64/version-delta/buckets/ |

---

## binary SOT

```
<来源位置>/raw/binary/AiMaMi 1.1.1 universal.app/Contents/MacOS/AiMaMi
SHA256: f34ff82910539964e24e86b35e95ea85b42af7d7dccf8e979914a2c21bd8cfeb
IDB:    <来源位置>/raw/binary/AiMaMi 1.1.1 universal.app/Contents/MacOS/AiMaMi.i64
```
