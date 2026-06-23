# SYSTEM-DIFF.md — AiMaMi 1.0.9 → 1.1.1 系统级行为变更对照

**session**: wf-aimami111-delta-20260617-repair
**binary_sha256**: f34ff82910539964e24e86b35e95ea85b42af7d7dccf8e979914a2c21bd8cfeb

---

## IPC 命令面变化

| 指标 | 1.0.9 | 1.1.1 | 变化 |
|------|-------|-------|------|
| 总命令数 | 127 | 126 | -1 |
| 新增 | — | 9 | +9（relay 管理扩展） |
| 删除 | — | 10 | -10（plugin+passthrough+relay 替换） |
| body-delta | — | 18 | 含 1 条 DTO 破坏性变更（configure_auto_switch） |

---

## 代理层变化

| 项目 | 1.0.9 | 1.1.1 | 说明 |
|------|-------|-------|------|
| hostStr 格式 | `127.0.0.1:<PORT>` | `http://127.0.0.1:<PORT>/codex/v1` | 完整 URL，含 /codex/v1 路径 |
| portStr 格式 | `<PORT>` | `http://127.0.0.1:<PORT>` | 完整 URL |
| API 登录模式 | 无 | 有（virtual-auth-marker.json） | 新增 B 模式 |
| API slots | 无 | 有（≤5 providers） | 支持多 provider slot |
| provider display tags | 无 | 有（global+woyao） | 新增展示标签字段 |
| provider quota | 无 | 有（/v1/usage） | 新增用量查询 |
| streaming test | 非流式 | SSE 流式 | test_relay_draft/provider → stream 版本 |
| provider 排序 | 无 IPC | 有（reorder） | 支持 orderedIds 重排 |

---

## 进程管理变化

| 函数 | 变化 |
|------|------|
| stop_codex_app_gracefully（1.0.9） | **移除**，替代为 stop_codex_for_file_edit（0x10055c090）|
| stop_codex_for_file_edit（1.1.1） | 新增：request_codex_app_quit + poll 50ms + kill_codex_processes_until_clear |
| launch_codex_app（1.1.1） | 新增：`open -b com.openai.codex`（主）+ `open -b com.openai.Codex`（备）；3s poll/80ms |
| BlockingTask dispatch | 不变（spawn_blocking 模式延续） |

---

## Tauri 事件名变化

| 命令 | 1.0.9 事件 | 1.1.1 事件 |
|------|-----------|-----------|
| refresh_usage_snapshot | `load_snapshot` (11B) | `runtime-state-updated` (21B) |
| set_codex_router_enabled | 无 progress event | `codex-router-toggle-progress` (28B) |

---

## DTO 破坏性变更（configure_auto_switch）

```
1.0.9 argKeys: [threshold5hPercent, thresholdWeeklyPercent, hasSchedule, scheduleMin]
1.1.1 argKeys: [threshold5hPercent, thresholdWeeklyPercent]
变更：hasSchedule:bool 移除，scheduleMin:u32 移除
```

---

## 模块归属变化

| 命令 | 1.0.9 模块 | 1.1.1 模块 |
|------|-----------|-----------|
| get_hotspot_enabled | commands::system | commands::hotspot |
| focus_main_window | system/window-path | commands::hotspot |
| diagnose_codex_router | 新增（无 1.0.9） | commands::relay |
| set_codex_api_login | 新增 | commands::relay |
| parse_aimami_deeplink | 新增 | commands::deeplink |
| test_relay_draft_stream | 新增 | codexmate_lib::commands::relay (ICF folded) |

---

## 原子写 / 持久化不变项

以下机制在 1.1.1 与 1.0.9 完全相同：
- `write_atomic`（0x10041e960）：mkdir+uuid tmp+write+fsync+rename+sync_parent 5步
- `RelayState` serde 序列化格式（TOML/JSON，与 1.0.9 relay 命令一致）
- `McpServerSummary` stride=224B
- `RelayProvider` stride=232B
- TOML 两标记不变量："# >>> aimami-relay managed start" + "# >>> aimami-relay codex-router top start"
