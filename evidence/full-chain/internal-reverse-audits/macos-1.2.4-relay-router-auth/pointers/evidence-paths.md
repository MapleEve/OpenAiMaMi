# Evidence Pointers — macos-1.2.4-relay-router-auth

所有路径均为 SMB 绝对路径（本会话按 skill 红线 16 硬编码，不使用 env-var）。本文件只给指针，不复制 raw 内容。

## raw evidence（backend，mac 伪代码 .c）

### router_unlock_auth（12 函数，全 NEW-delta）
- `/raw/aimami/1.2.4/macos-arm64/core/relay/router_unlock_auth/ida/pseudocode/commit_auth_for_router_0x10056b3f0.c`
- `/raw/aimami/1.2.4/macos-arm64/core/relay/router_unlock_auth/ida/pseudocode/has_restorable_real_oauth_0x10056c8a0.c`
- `/raw/aimami/1.2.4/macos-arm64/core/relay/router_unlock_auth/ida/pseudocode/has_usable_real_oauth_login_0x10056cf10.c`
- `/raw/aimami/1.2.4/macos-arm64/core/relay/router_unlock_auth/ida/pseudocode/install_managed_api_key_auth_0x10056d080.c`
- `/raw/aimami/1.2.4/macos-arm64/core/relay/router_unlock_auth/ida/pseudocode/install_managed_api_key_auth_0x10056d190.c`
- `/raw/aimami/1.2.4/macos-arm64/core/relay/router_unlock_auth/ida/pseudocode/install_managed_api_key_auth_0x10056d230.c`
- `/raw/aimami/1.2.4/macos-arm64/core/relay/router_unlock_auth/ida/pseudocode/managed_api_key_0x10056a610.c`
- `/raw/aimami/1.2.4/macos-arm64/core/relay/router_unlock_auth/ida/pseudocode/managed_api_key_from_value_0x10056cc00.c`
- `/raw/aimami/1.2.4/macos-arm64/core/relay/router_unlock_auth/ida/pseudocode/managed_api_key_marker_matches_0x10056d800.c`
- `/raw/aimami/1.2.4/macos-arm64/core/relay/router_unlock_auth/ida/pseudocode/should_use_no_account_mode_0x10056cd80.c`
- `/raw/aimami/1.2.4/macos-arm64/core/relay/router_unlock_auth/ida/pseudocode/write_json_0x1005693c0.c`
- `/raw/aimami/1.2.4/macos-arm64/core/relay/router_unlock_auth/ida/pseudocode/write_json_0x100569770.c`

### router_reconciler（3 函数）
- `/raw/aimami/1.2.4/macos-arm64/core/relay/router_reconciler/ida/pseudocode/from_state_0x1008c2ab0.c`
- `/raw/aimami/1.2.4/macos-arm64/core/relay/router_reconciler/ida/pseudocode/verify_managed_auth_commit_boundary_0x1008c7170.c`
- `/raw/aimami/1.2.4/macos-arm64/core/relay/router_reconciler/ida/pseudocode/verify_managed_auth_commit_boundary_0x1008c7d20.c`

### manager（2 新命令 + 邻接）
- `/raw/aimami/1.2.4/macos-arm64/core/relay/manager/ida/pseudocode/set_codex_no_account_slots_0x10079a8a0.c`
- `/raw/aimami/1.2.4/macos-arm64/core/relay/manager/ida/pseudocode/set_codex_no_account_slots_0x10079bb50.c`（closure）
- `/raw/aimami/1.2.4/macos-arm64/core/relay/manager/ida/pseudocode/set_claude_web_search_compat_0x10079bbc0.c`

### router_exit_guard_state（顶层 fn，tauri state 查询，NEW）
- `/raw/aimami/1.2.4/macos-arm64/router_exit_guard_state/ida/pseudocode/router_exit_guard_state_0x1002cae90.c`

### proxy_server 兼容层（3 函数）
- `/raw/aimami/1.2.4/macos-arm64/core/relay/proxy_server/ida/pseudocode/client_for_0x10082f6e0.c`
- `/raw/aimami/1.2.4/macos-arm64/core/relay/proxy_server/ida/pseudocode/claude_web_search_compat_enabled_0x10083a880.c`
- `/raw/aimami/1.2.4/macos-arm64/core/relay/proxy_server/ida/pseudocode/is_anthropic_thinking_signature_rejectio_0x100848920.c`

## raw evidence（backend，win delta 伪代码 .c，跨平台对齐锚点）

- `/raw/aimami/1.2.4/windows-x64/version-delta/ida/pseudocode/cmd_set_codex_no_account_slots_0x140e2de30.c`
- `/raw/aimami/1.2.4/windows-x64/version-delta/ida/pseudocode/cmd_get_claude_web_search_compat_0x140156ef0.c`
- `/raw/aimami/1.2.4/windows-x64/version-delta/ida/pseudocode/cmd_set_claude_web_search_compat_0x140e01580.c`
- `/raw/aimami/1.2.4/windows-x64/version-delta/ida/pseudocode/codexmate_lib4core5relay18router_unlock_auth28inst_0x140410960.c`（薄错误格式闭包）
- `/raw/aimami/1.2.4/windows-x64/version-delta/ida/pseudocode/codexmate_lib4core5relay17router_reconciler35verif_0x1408f69b0.c`（薄错误格式闭包）

> win delta 共 20 个 .c 文件，本包只消费与 relay-router-auth 直接相关的 5 个锚点；其余 15 个属 catalog/thread_visibility/diagnostic/config_reconciler/repository 模块，由各自 6dims doc 承载。

## raw evidence（frontend）

- `/raw/aimami/1.2.4/macos-arm64/frontend/beautified/relay-page-pfdbI0wX.js` — 无账号槽位管理 UI（L3058-L3842 Os/Ls 组件 + noAccountSlots i18n 树 16 key + _r onSave）
- `/raw/aimami/1.2.4/macos-arm64/frontend/beautified/maintenance-page-Cfv_qYNg.js` — ClaudeWebSearchCompat toggle 卡片（L434-L446 useQuery+useMutation+invalidate+toast）
- `/raw/aimami/1.2.4/macos-arm64/frontend/ipc-contracts.jsonl` — 全量 IPC 命令映射（1.2.4=134 unique vs 1.2.3=131 unique，+3 new，-0 removed）
- `/raw/aimami/1.2.4/macos-arm64/frontend/frontend-contract-report.md` — 前端契约报告（134 命令，含 set_codex_no_account_slots/set_claude_web_search_compat/get_claude_web_search_compat 的 wrapper/argKeys/files）
- `/raw/aimami/1.2.4/macos-arm64/frontend/frontend-control-flow.jsonl` — 前端控制流（router_exit_guard_state 0 命中，确认前端 page 级无消费者）

## raw evidence（version-delta 6dims 详实分析 + 终稿 + 对账）

- `/raw/aimami/1.2.4/macos-arm64/version-delta/relay-router-auth-6dims.md` — 本包主源（6dims 详实分析，20133B）
- `/raw/aimami/1.2.4/macos-arm64/version-delta/DELTA-FINAL-1.2.4.md` — 跨平台整合终稿（27345B）
- `/raw/aimami/1.2.4/macos-arm64/version-delta/CHANGELOG-FRONTEND-ALIGNMENT-1.2.4.md` — 6 条 changelog 逐条对账（15481B）

## raw evidence（binary + 版本基线）

- `/raw/aimami/1.2.4/macos-arm64/MANIFEST.md` — reverse evidence manifest（binary_sha256=24bf0857...）
- `/raw/aimami/1.2.4/macos-arm64/VERSION-BASELINE.md` — 版本基线（app_version=1.2.4, bundle_identifier=dev.aimami.desktop）
- `/raw/aimami/1.2.4/macos-arm64/frontend-assets.sha256` — 前端资源哈希（relay-page sha256=ceef9114..., index sha256=7fe174bf...）

## consumed bundles（baseline 1.2.3）

- `internal-reverse/audits/macos-1.2.3-relay/` — baseline 1.2.3 relay 结论包（consumerStartReady 23/23，strictImplementationUse=0，readyToImplement=0，full_leaf_100=false）。本 delta 轮继承 baseline 的 gate 天花板，不单独升 ready。
