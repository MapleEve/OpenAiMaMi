# REGISTRATION-TABLE-1.2.3 — macOS system 命令注册表

26 条前端命令（角度B cross-check 直接得出，见 manifest.json `frontend_cross_check_basis`）。Ground truth: `frontend/ipc-contracts.jsonl`（131 条全量命令表）+ `commands/system/ida/pseudocode/` 文件名。

## system 独占命令（23 条，1:1 映射）

| 命令名 | Mac 反编译文件 | 地址 |
|---|---|---|
| `get_usage_refresh_interval` | `get_usage_refresh_interval_0x1007cae80.c` | 0x1007cae80 |
| `get_notification_client_state` | `get_notification_client_state_0x1007cc410.c` | 0x1007cc410 |
| `load_pending_auto_switch` | `load_pending_auto_switch_0x1007c8db0.c` | 0x1007c8db0 |
| `diagnose` | `diagnose_0x1006fcd30.c` | 0x1006fcd30 |
| `set_auto_switch` | `set_auto_switch_0x1006fc0b0.c` | 0x1006fc0b0 |
| `open_path` | `open_path_0x1007cda80.c` | 0x1007cda80 |
| `dismiss_pending_auto_switch` | `dismiss_pending_auto_switch_0x1007cb840.c` | 0x1007cb840 |
| `configure_auto_switch` | `configure_auto_switch_0x1006fc4c0.c` | 0x1006fc4c0 |
| `merge_mystery_unlock_grants` | `merge_mystery_unlock_grants_0x1007cbba0.c` | 0x1007cbba0 |
| `get_mystery_unlock_grants` | `get_mystery_unlock_grants_0x1007cab00.c` | 0x1007cab00 |
| `set_image_compat` | `set_image_compat_0x1007c8330.c` | 0x1007c8330 |
| `get_system_info` | `get_system_info_0x1007c7220.c` | 0x1007c7220 |
| `set_usage_refresh_interval` | `set_usage_refresh_interval_0x1007cb0a0.c` | 0x1007cb0a0 |
| `force_kill_codex` | `force_kill_codex_0x1007c7860.c` | 0x1007c7860 |
| `clean` | `clean_0x1007cd710.c` | 0x1007cd710 |
| `get_device_id` | `get_device_id_0x1007c6ea0.c` | 0x1007c6ea0 |
| `load_bootstrap_state` | `load_bootstrap_state_0x1007c8780.c` | 0x1007c8780 |
| `restart_codex` | `restart_codex_0x1006fbd10.c` | 0x1006fbd10 |
| `get_image_compat` | `get_image_compat_0x1007c7bf0.c` | 0x1007c7bf0 |
| `rebuild_registry` | `rebuild_registry_0x1007c7fb0.c` | 0x1007c7fb0 |

## system 命令（1 条，1:2 文件映射）

| 命令名 | Mac 反编译文件 | 地址 | 备注 |
|---|---|---|---|
| `run_daemon_once` | `run_daemon_once_blocking_0x1007c8fe0.c`（620 行，主体） + `run_daemon_once_blocking_0x1007ca0b0.c`（33 行，内部辅助，被前者调用） | 0x1007c8fe0 / 0x1007ca0b0 | 1.2.3 NEW-delta |

## system 命令（2 条，1 文件→2 命令，映射未验证）

| 命令名 | Mac 反编译文件 | 地址 | 备注 |
|---|---|---|---|
| `confirm_pending_auto_switch` | `confirm_pending_auto_switch_async_0x1000eac80.c`（provisional，未验证） | 0x1000eac80 | 见 README Unknown #2 |
| `confirm_pending_auto_switch_and_restart_codex` | 同上（provisional，未验证） | 0x1000eac80 | 见 README Unknown #2 |

## 与 macos-1.2.3-relay 包共享物理归属（3 条）

| 命令名 | Mac 反编译文件 | 地址 | 归属说明 |
|---|---|---|---|
| `detect_api_proxy_config` | `detect_api_proxy_config_0x1006fcbb0.c` | 0x1006fcbb0 | 语义 relay 域，物理落盘 commands/system；已在 `macos-1.2.3-relay/logic/REGISTRATION-TABLE-1.2.3.md` 记录 |
| `set_api_proxy_config` | `set_api_proxy_config_0x1007c89e0.c` | 0x1007c89e0 | 同上 |
| `test_api_proxy_config` | `test_api_proxy_config_0x1006fc8e0.c` | 0x1006fc8e0 | 同上 |

## 内部辅助函数（无直接 invoke 命令，共 8 个）

| 函数 | 地址 | 被谁调用（推断，未逐一验证调用图） |
|---|---|---|
| `note_usage_refresh_activity` | 0x1007cbfc0 | 用量刷新调度族 |
| `update_usage_refresh_schedule` | 0x1007cc7b0 | 同上 |
| `get_or_create_remote_device_secret` | 0x1007cca20 | 设备密钥族 |
| `start_usage_refresh_watcher` | 0x1007cc0d0 | 用量刷新调度族 |
| `load_api_request_context_from_repo` | 0x1007ccda0 | API 请求上下文加载 |
| `start_auto_switch_pending_watcher` | 0x1007cc8e0 | 自动切换待定观察者 |
| `import_remote_device_secret_if_empty` | 0x1007cd350 | 设备密钥族 |
| `compose_image_compat_flag` | 0x1007ca180 | `get_image_compat`/`set_image_compat` 内部辅助（本包直接 Read 抽验过此文件） |

## 34 文件总计核对

23（独占1:1）+ 2（run_daemon_once_blocking 两个文件）+ 1（confirm_pending_auto_switch_async）+ 8（内部辅助）= 34 ✓（与 commands-baseline.md §0 的目录清单计数一致）

## platform 支撑目录文件统计

| 目录 | 文件数（本会话 find） | 文件数（platform-baseline.md 表格） |
|---|---|---|
| process | 34 | 34 |
| paths | 21 | 15 |
| debug_log | 17 | 14 |
| daemon | 6 | 6 |
| single_instance | 7 | 6 |
| system_volume | 7 | 7 |
| proxy | 3 | 3 |
| **合计** | **95** | **85** |

差异见 README.md「口径差异」小节，未强行统一。
