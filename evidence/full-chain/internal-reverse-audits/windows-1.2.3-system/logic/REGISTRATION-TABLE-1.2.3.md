# Registration Table — AiMaMi 1.2.3 windows-x64 `system` 模块

命令/endpoint 注册表（名字、入参、出参、注册位置）。**本表与 `macos-1.2.3-system` 的同名表不同**：macOS 表可以逐命令给出具体 owner 文件；Windows 表目前只能给出候选 owner 文件池（模块级），命令级映射留空，如实标注 `Unknown`。

## 26 个前端命令（同 macOS 侧命令集，来源：ipc-contracts.jsonl 命令名级 cross-check）

| 命令名 | 入参（前端侧，未做 DTO 抽取） | Windows owner 文件 | 归属精度 |
|---|---|---|---|
| get_usage_refresh_interval | () | Unknown（属于 commands/system.rs 6 候选之一，未定） | 模块级 |
| get_notification_client_state | () | Unknown | 模块级 |
| load_pending_auto_switch | () | Unknown | 模块级 |
| diagnose | Unknown | Unknown | 模块级 |
| set_auto_switch | Unknown | Unknown | 模块级 |
| open_path | Unknown | Unknown | 模块级 |
| dismiss_pending_auto_switch | () | Unknown | 模块级 |
| configure_auto_switch | Unknown | Unknown | 模块级 |
| merge_mystery_unlock_grants | {grants} | Unknown | 模块级 |
| get_mystery_unlock_grants | () | Unknown | 模块级 |
| set_image_compat | Unknown | Unknown | 模块级 |
| get_system_info | () | Unknown | 模块级 |
| set_usage_refresh_interval | Unknown | Unknown | 模块级 |
| force_kill_codex | Unknown | Unknown | 模块级 |
| clean | Unknown | Unknown | 模块级 |
| get_device_id | () | Unknown | 模块级 |
| load_bootstrap_state | () | Unknown | 模块级 |
| restart_codex | Unknown | Unknown | 模块级 |
| get_image_compat | Unknown | Unknown | 模块级 |
| rebuild_registry | Unknown | Unknown | 模块级 |
| run_daemon_once | Unknown | Unknown（Windows 侧 `daemon` 模块本身 0 文件，见 SYSTEM-DIFF；此命令是否落在 `commands/system.rs` 6 候选内还是需要独立 daemon 归属尚未确定） | Unknown |
| confirm_pending_auto_switch | () | Unknown | 模块级 |
| confirm_pending_auto_switch_and_restart_codex | () | Unknown | 模块级 |
| detect_api_proxy_config | Unknown（macOS 侧与 relay 共享物理归属） | Unknown（Windows `commands/system.rs` 6 候选 vs Windows 侧 `proxy` 5 候选，两者均可能） | 模块级（存在跨模块候选） |
| set_api_proxy_config | Unknown | Unknown | 模块级 |
| test_api_proxy_config | Unknown | Unknown | 模块级 |

## commands/system.rs 候选池（6 个原始地址，未分配到具体命令）

`0x140021540` · `0x140322890` · `0x1403d28a0` · `0x14089b320` · `0x140cf8380` · `0x141471f80`

## platform/system_volume_windows.rs 候选池（3 个原始地址）

`0x1401b88c0` · `0x1401b8c50` · `0x1401b91a0`（语义上极可能对应音量相关命令，但本表未见 26 命令列表中有直接的"get/set volume"命令名，需先确认哪个前端命令消费这三个函数——可能是内部支撑函数而非独立 invoke 命令，见 README Unknown 第 1 项）

## 支撑 platform 候选池（未逐地址列出，见 pointers/evidence-paths.md）

`process`（34）、`paths`（3）、`debug_log`（3）、`proxy`（5）——均为跨命令共用的支撑原语，非某单一命令独占。
