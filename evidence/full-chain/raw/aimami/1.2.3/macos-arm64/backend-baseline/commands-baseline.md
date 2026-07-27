# AiMaMi 1.2.3 macOS-arm64 后端基线 — commands 层模块职责分析

> 任务编号 1.2.3 后端完整基线模块分析（commands）。
> 方法：只读已由 IDA 反编译好的 `.c` 伪代码（文件头注释含 mangled 符号名 + 地址 + `基线 same-set` / `NEW-delta` 标记），不连 IDA、不做二次反编译，只做代码阅读与文档整理。
> 授权范围：本仓/本机所有者对 AiMaMi（自家/已授权产品）下达的重建授权任务，产出仅用于内部架构基线文档。
> 目标文件全部位于 `raw/aimami/1.2.3/macos-arm64/commands/`，符号前缀均为 `codexmate_lib::commands::*`（Tauri 命令层，即前端 `invoke()` 直达或其内部 async 闭包/辅助函数）。

## 0. 目录清单与偏差说明

任务给出的 12 个目录中，实际磁盘只存在 10 个含内容的目录 + 1 个空目录；另 2 个目录在本版本文件系统中不存在（见下表，如实记录不臆断）：

| 任务给定路径 | 实际状态 | .c 文件数 |
|---|---|---|
| `commands/accounts/ida/pseudocode` | 存在 | 46 |
| `commands/system/ida/pseudocode` | 存在 | 34 |
| `commands/relay/ida/pseudocode` | 存在 | 17 |
| `commands/hotspot/ida/pseudocode` | 存在 | 16 |
| `commands/tray_menu/ida/pseudocode` | 存在 | 10 |
| `commands/autostart/ida/pseudocode` | 存在 | 5 |
| `commands/account_oauth/ida/pseudocode` | 存在 | 5 |
| `commands/mcp/ida/pseudocode` | 存在 | 4 |
| `commands/sessions/ida/pseudocode` | 存在 | 3 |
| `commands/deeplink/ida/pseudocode` | 存在 | 5 |
| `commands/skills/ida/pseudocode` | **不存在**（`commands/` 下无 `skills` 子目录；`skills` 相关代码实际落在 `core/skills`，属于 core 层而非 commands 层，超出本任务 commands 范围） | — |
| `commands/maintenance/ida/pseudocode` | **不存在**（`commands/` 下无 `maintenance` 子目录；整个 1.2.3 macOS-arm64 文件树内未找到任何 `maintenance` 相关反编译产物） | — |
| `commands/ida/pseudocode`（commands 根级） | 目录存在但**为空**（0 个 `.c` 文件，尚未反编译或该层无独立可反编译函数，例如 `mod.rs`/dispatcher 粘合代码被内联进各子模块） | 0 |

有效分析文件总数：**145 个 `.c`**，覆盖 10 个真实存在的 commands 子模块。

**截断/反编译失败检查**：对全部 145 个文件头做 `TRUNCATED` / `DECOMPILE-FAILED` / `chars total` 关键字扫描，**0 命中**——本批文件全部为完整反编译产物，无需标注截断函数。

**1.2.3 相对 1.2.2 的 NEW-delta 标记**：全批共 9 个函数带 `1.2.3 NEW-delta` 头注释（IDA 函数枚举 diff，名↔地址一致）：
- `accounts::perform_switch_payload_with_restart`
- `accounts::refresh_local_runtime_snapshot_after_mutation_async::{closure}::{closure}` (0x100701570)
- `system::run_daemon_once_blocking` 及其内部 closure（2 个）
- `hotspot::bring_main_window_force_forward`
- `hotspot::focus_main_window`
- `hotspot::force_reveal_main_window`
- `hotspot::reveal_main_window`
- `hotspot::install_native_hotspot_observers`

其余函数头注释均为 `基线 same-set`（与 1.2.2 版本对齐，非本版本新增）。

**自动生成 glue 计数（略读，不逐条展开）**：serde `Serialize` derive 实现 6 个（accounts 1、relay 3、autostart 1、deeplink 1），均为 `serde_core::ser::Serialize for XxxPayload::serialize` 样板代码，直接把结构体字段按顺序写入序列化器，无业务判断逻辑。accounts 目录另有 5 个同名 `merge_post_commit_refresh_result`（地址不同、字节码几乎相同，为同一泛型函数对不同具体类型的单态化实例，按 1 个业务函数计，不逐个展开）。

---

## 1. accounts（46 文件）— 账号切换 / 快照 / 登出核心域

**module_roles**：账号域是本应用最重的状态机模块，负责"哪个 ChatGPT/Codex 账号当前生效"这件事的完整生命周期——切换前捕获可回滚的文件快照、切换、启动新账号对应的 Codex 进程、切换后校验、失败时原子回滚，并把运行时快照广播给托盘菜单和前端 UI。

**key_functions**：

| 函数 | 行为 | destructive |
|---|---|---|
| `perform_switch_payload_with_restart` (NEW-delta, 53KB FULL) | 账号切换总编排：获取 `FileLock`/`CodexTransitionFence`，调用 `Repository::switch_account` 落盘新激活账号，`CodexProcessLifecycle::launch` 拉起绑定新账号的 Codex 进程，`verify_account_switch`/`verify_account_switch_after_launch` 校验启动结果，失败则转入 `finish_switch_failure` 做回滚；全程用 uuid 生成 trace id 并写 `AccountSwitchTrace::event` | 进程重启（间接） |
| `switch_account_and_restart_sync` (53KB FULL) | 与上者共享同一套 FileLock/Fence/Repository 调用链的同步入口版本（`preflight_account_switch` 而非 `perform_switch_payload_with_restart` 走的路径），本质是切账号+重启 Codex 进程的另一实现分支 | 进程重启（间接） |
| `finish_switch_failure` (50KB FULL) | 切换失败回滚：读取此前 `capture_switch_rollback_state` 捕获的文件快照，用 `FileRestoreState::restore` 把 `auth.json` 等托管文件写回原状态或直接 `std::sys::fs::remove_file` 删除切换过程新建的文件，随后重新 `CodexProcessLifecycle::launch` 拉起旧账号进程 | **remove_file**（回滚删除）、进程重启 |
| `FileRestoreState::restore` | 单文件回滚原语：若捕获时文件"不存在"则调用 `std::sys::fs::remove_file` 删除切换期间产生的文件；若捕获时文件"存在"则用 `atomic_write::write_atomic_with_mode` 把原内容写回 | **remove_file** |
| `remove_accounts` closure | Tauri 命令 `remove_accounts` 的异步闭包体：加锁 State 后调用 `Repository::remove_accounts` 从账号仓库物理移除所选账号记录 | **remove accounts（仓库层删除）** |
| `logout` closure | 登出：加 `CodexMutationGate` 互斥锁后调用 `Repository::logout` 清除当前账号的登录态/托管凭据 | **logout（凭据清除）** |
| `switch_account_and_restart_sync::{closure}` / `verify_account_switch` / `verify_account_switch_after_launch` | 切换后校验：确认新进程确实以目标账号启动成功，失败则返回 `switch_error_code` 定义的错误码供上层决定是否回滚 | — |
| `broadcast_runtime_snapshot_with_account` | 把最新账号运行时快照通过 `tauri::Emitter::emit` 广播给前端，同时触发 `system::note_usage_refresh_activity` 与 `tray_menu::refresh_tray_menu_with_snapshot` | — |
| `load_full_runtime_snapshot_with_policy` / `load_usage_only_runtime_snapshot` / `get_cached_display_snapshot` | 三种粒度的运行时快照读取（含策略、仅用量、仅缓存展示），供前端账号面板拉取展示数据 | — |
| `account_key_from_auth_bytes` | 解析原始 `auth.json` 字节（`serde_json` 反序列化）并通过 `make_auth_snapshot` 派生稳定的账号标识 key，用于账号去重/匹配 | — |
| `refresh_single_account_usage` / `refresh_usage_snapshot_with_retry` | 带重试的单账号用量刷新（调用远端 API 拉取 quota） | — |

---

## 2. system（34 文件）— 系统级配置 / 守护轮询 / 进程与设备信息

**module_roles**：system 模块是"应用级基础设施"的大杂烩：Codex 进程强杀与重启、后台守护轮询（自动切换账号 + 用量刷新调度）、API 代理配置、系统信息采集（含 `sw_vers` 取 macOS 版本）、图片兼容开关、设备 ID / 远程设备密钥、以及待定自动切换（pending auto switch）的确认/驳回。

**key_functions**：

| 函数 | 行为 | destructive |
|---|---|---|
| `force_kill_codex` | 加 `CodexMutationGate` 锁（提示信息含 "force closing the ChatGPT desktop app"），调用 `platform::process::CodexProcessLifecycle::force_close_all` **强制终止**所有 ChatGPT/Codex 桌面进程 | **强制杀进程** |
| `restart_codex` closure | 重启 Codex 进程（与 force_kill 共享底层 `CodexProcessLifecycle`，走温和重启路径而非强杀） | 进程重启 |
| `run_daemon_once_blocking` (NEW-delta, 27KB) | 后台守护单次轮询主体：`Repository::load_local_state_synced` 读本地状态 → `sync_auto_switch_request`/`reconcile_auto_switch_request` 处理自动切号请求 → `enrich_accounts_via_api_with_subscription_policy` 拉远端订阅信息 → `build_daemon_payload` → `persist_progressive_state` 落盘。是自动换号 + 用量轮询的核心定时任务体 | — |
| `open_path` | 用 `std::process::Command::new("open")` 拼参数、`spawn` 执行 macOS `open <path>`（在 Finder/浏览器中打开路径），失败时清理已 dup 的文件描述符 | 进程 spawn（打开外部程序） |
| `get_system_info` | 采集系统信息，内部通过 `Command::new("sw_vers","-productVersion")` 取 macOS 版本号 | — |
| `get_or_create_remote_device_secret` / `import_remote_device_secret_if_empty` | 生成或导入"远程设备密钥"（跨设备身份凭据），首次为空时创建 | — |
| `get_device_id` | 读取/生成本机设备 ID | — |
| `set_api_proxy_config` / `detect_api_proxy_config` / `test_api_proxy_config` | 系统代理配置的设置、探测与连通性测试三部曲，供"网络受限环境下走代理访问 API"场景使用 | — |
| `configure_auto_switch` / `set_auto_switch` / `dismiss_pending_auto_switch` / `confirm_pending_auto_switch_async` | 自动切换账号功能的开关配置与"待确认切换"提示的确认/驳回 | — |
| `set_usage_refresh_interval` / `start_usage_refresh_watcher` / `update_usage_refresh_schedule` / `note_usage_refresh_activity` | 用量刷新间隔配置与后台观察者调度 | — |
| `compose_image_compat_flag` / `get_image_compat` / `set_image_compat` | "图片兼容模式"开关（推测用于旧版 macOS 图片渲染兼容），逻辑中出现 `Vec::remove::assert_failed`（越界断言，非真实文件删除，误报排除） | — |
| `rebuild_registry` / `clean` | 重建/清理系统状态注册表（内部登记表，非文件系统清理） | — |
| `get_mystery_unlock_grants` / `merge_mystery_unlock_grants` | 隐藏解锁授权项（彩蛋/灰度权益）的读取与合并 | — |
| `get_notification_client_state` | 系统通知客户端状态查询 | — |

---

## 3. relay（17 文件）— Codex Router（本地中转代理）管理域

**人话背景**：relay 这里的 "router" 指应用内置的本地转发代理（Codex Router），它拦截 Codex CLI 发往上游模型服务商的请求并按用户配置的 provider 列表转发/切换，不是网络路由器。本目录是这个代理的增删改查、诊断、配置导入导出、以及 no-account 模式（无账号也可用某些 provider）的控制面。

**key_functions**：

| 函数 | 行为 | destructive |
|---|---|---|
| `delete_relay_provider` | 调 `RelayManager::delete` 从配置中**删除**一个中转 provider 条目，成功后触发 `tray_menu::refresh_tray_menu` | **删除 provider 配置** |
| `quit_keeping_router` | 用户选择"退出但保留路由继续运行"：检查 `router_transition_in_progress` 无冲突后，写调试事件 `keep_router_exit`，置位 `EXIT_APPROVED` 标志并调用 `tauri::AppHandle::exit(0)` **终止应用主进程**（router 常驻逻辑在别处继续存活） | **应用进程退出** |
| `activate_relay_provider` / `deactivate_relay_provider` | 启用/停用某个 provider（不删除配置，只切换启用位） | — |
| `upsert_relay_provider` | 新增或更新 provider 配置（`RelayManager::upsert`），成功后刷新托盘菜单 | — |
| `reorder_relay_providers` | 调整 provider 展示/生效优先级顺序 | — |
| `set_relay_provider_network` | 设置某 provider 的网络策略（如是否走代理） | — |
| `import_relay_config` / `export_relay_config` | 配置整体导入（`RelayManager::import_config`）/ 导出到文件（`RelayManager::snapshot` + `io::export_to_file`，导出前会 `sanitize_for_export` 脱敏） | 导出会写文件（用户主动触发） |
| `diagnose_codex_router` (25KB) | 路由诊断：读取 `CodexPaths::resolve_codex_home` 下的 Codex 配置文件、解析 `RouterConfigSurface`、结合 `RelayManager::codex_config_stale_reason`/`snapshot` 判断配置是否过期或损坏，返回诊断结果供 UI 展示 | — |
| `set_codex_router_no_account_mode` closure | 切换"无账号模式"开关并通过 `tauri::Emitter::emit` 广播状态变化 | — |
| `get_codex_router_auth_readiness` | 查询当前路由的鉴权就绪状态（是否已具备可用账号/凭据） | — |
| `load_relay_state` | 加载路由整体运行时状态供 UI 渲染 | — |
| `test_relay_draft_stream` | 测试草稿态 provider 配置的流式请求是否可用（连通性自检） | — |

---

## 4. hotspot（16 文件）— 悬浮"热点"小窗（刘海/状态指示companion 窗口）

**人话背景**：hotspot 不是网络热点，而是一个独立于主窗口、常驻在屏幕顶部（贴合 MacBook 刘海/notch 区域）的原生 NSWindow 悬浮小窗，用来展示当前账号/用量状态的极简指示器，本目录管理它的创建、显隐、跟随刘海布局与前置层级。

**key_functions**：

| 函数 | 行为 | destructive |
|---|---|---|
| `create_hotspot_window` | 创建原生 hotspot 悬浮窗，加载内嵌 `index.html` 作为其网页内容 | — |
| `install_native_hotspot_observers` (NEW-delta) | 注册 `NSNotificationName` 系统通知观察者（屏幕参数变化等），驱动热点窗随系统事件重新布局 | — |
| `apply_native_hotspot_properties` | 直接操作 `NSWindow`/`NSView`/`NSColor` 设置窗口层级、圆角、背景色等原生属性 | — |
| `has_notch` | 检测当前 Mac 是否有刘海（notch），决定热点窗的坐标偏移策略 | — |
| `bring_main_window_forward` / `bring_main_window_force_forward` (NEW-delta) / `force_reveal_main_window` (NEW-delta) / `reveal_main_window` (NEW-delta) / `focus_main_window` (NEW-delta) | 一组把主窗口前置/显现/聚焦的变体，1.2.3 新增了"强制"版本（对已隐藏或失焦的窗口更强力地拉回前台） | — |
| `get_hotspot_enabled` / `set_hotspot_enabled` | 热点窗启停开关的读写 | — |
| `schedule_hotspot_relayout` / `refresh_hotspot_on_main` / `register_hotspot_relayout_observers` | 热点窗重新布局的调度与观察者注册（响应分辨率/刘海区域变化） | — |
| `set_window_alpha` | 设置窗口透明度（用于热点窗淡入淡出动画） | — |
| `hotspot_ready` | 热点窗初始化完成后的就绪回调 | — |

---

## 5. tray_menu（10 文件）— 菜单栏托盘菜单

**module_roles**：菜单栏图标的托盘菜单构建、事件分发与刷新。分两套构建路径：应用刚启动、账号状态未知时的"引导态菜单"（bootstrap），以及已有运行时快照后的"完整态菜单"（from_snapshot），二者都会挂载 `append_codex_router_section` 这段路由状态子菜单。

**key_functions**：

| 函数 | 行为 | destructive |
|---|---|---|
| `handle_tray_menu_event` | 托盘菜单点击事件分发器：按菜单项 id 路由到不同命令，其中会调用根命名空间的 `request_user_quit`（触发退出确认流程，最终导向应用退出） | 间接触发应用退出 |
| `create_bootstrap_tray_menu` (21KB) | 应用启动早期、账号状态尚未加载完成时的引导态菜单构建，用 `tauri::menu::MenuBuilder` 拼装 item/separator，并挂载路由子菜单 | — |
| `create_tray_menu_from_snapshot` (31KB) | 基于最新运行时快照构建完整托盘菜单（含账号列表、用量文案、路由状态） | — |
| `create_tray_menu` | 菜单构建的统一入口，按当前是否已有快照分派到 bootstrap 或 from_snapshot 两条路径之一 | — |
| `append_codex_router_section` | 往菜单里追加"Codex Router 状态"子菜单区块（provider 列表、启用状态等），两条构建路径共用 | — |
| `refresh_tray_menu` / `refresh_tray_menu_with_snapshot` | 菜单内容刷新（不重建整个菜单对象，更新展示文案） | — |
| `quota_text` | 把用量数字格式化为菜单项展示文案（如 "剩余 xx / 每日 xx"） | — |

---

## 6. autostart（5 文件）— 开机自启动

**module_roles**：管理"登录时自动启动"开关，底层委托给 Tauri 官方 `tauri-plugin-autostart`（在 macOS 上对应注册/注销 Login Item），并把开关状态持久化进应用设置。

**key_functions**：

| 函数 | 行为 | destructive |
|---|---|---|
| `set_autostart_enabled` | 调 `tauri_plugin_autostart::AutoLaunchManager::enable`/`disable` 注册或注销系统登录项，并调用 `Repository::save_settings` 落盘开关状态 | **注册/注销系统登录项** |
| `apply_default_autostart_on_router_enable` | 当用户首次启用 Codex Router 时，若尚未配置过自启动，自动调用 `AutoLaunchManager::enable` 打开默认自启动（一次性引导行为） | 注册系统登录项 |
| `get_autostart_state` / `read_enabled` | 读取当前自启动开关状态（供 UI 展示） | — |
| `AutostartState::serialize` | serde 自动生成的序列化 glue，无业务逻辑 | — |

---

## 7. account_oauth（5 文件）— ChatGPT OAuth 登录（PKCE 本地回环）

**module_roles**：实现标准的 OAuth Authorization Code + PKCE 本地回环登录流程——生成 PKCE challenge、拼登录 URL 并调起系统浏览器、本地临时起一个 `axum` HTTP 服务监听 OAuth 回调、通过 `tokio::oneshot` 把回调结果传回等待中的 Tauri 命令、成功后把账号凭据落盘。

**key_functions**：

| 函数 | 行为 | destructive |
|---|---|---|
| `begin_chatgpt_oauth_login` closure (59KB FULL) | 登录发起主体：`generate_pkce` 生成挑战码 → `build_authorize_url` 拼 ChatGPT 授权 URL → `open_in_browser` 调起系统默认浏览器 → 用 `axum::Router` + `tokio TcpListener::bind_addr` 起本地临时 HTTP 服务接收回调 → `tokio::time::timeout` 限时等待 `oneshot` 回调结果 → 结果通过 `advance_operation`/`finish_operation` 状态机推进 | 起临时本地 HTTP 监听（生命周期内） |
| `run_oauth_login` closure | OAuth 码换取成功后，调用 `core::account_io::persist_account_auth` 把新账号的 auth 凭据**写入托管文件** | 写凭据文件 |
| `cancel_chatgpt_oauth_login` | 用户取消登录：通过 `tokio::oneshot::Sender::send` 向仍在等待回调的任务发送取消信号，中止本地回环监听 | — |
| `advance_operation` / `finish_operation` | 全局 `OnceLock` 守护的单例登录操作状态机，推进/收尾当前唯一一个进行中的 OAuth 操作槽位 | — |

---

## 8. mcp（4 文件）— MCP Server 配置管理

**module_roles**：管理用户为 Codex CLI 配置的 MCP（Model Context Protocol）服务器列表——加载、增/改（upsert）、启停、删除，四个命令统一通过 `CodexMutationGate` 互斥锁串行化对 Codex 配置文件的写入，避免并发写坏配置。

**key_functions**：

| 函数 | 行为 | destructive |
|---|---|---|
| `remove_mcp_server` (15.5KB) | 加 `CodexMutationGate` 锁（提示信息含 "removing an MCP server"）后**删除**一个 MCP server 配置条目 | **删除 MCP server 配置** |
| `upsert_mcp_server` (21.6KB) | 加同一互斥锁后新增或更新一个 MCP server 配置（`core::mcp::upsert_mcp_server` 落盘） | 写配置文件 |
| `set_mcp_server_enabled` | 切换某 MCP server 的启用/禁用位 | 写配置文件 |
| `load_mcp_servers` | 读取当前配置的 MCP server 列表，读取前会 `CodexPaths::ensure_directories` 确保目录存在，并更新 `bootstrap_cache` | — |

---

## 9. sessions（3 文件）— Codex 会话管理

**module_roles**：对 Codex CLI 落盘的历史会话（session）做删除、导出为 Markdown、以及工作树（worktree）迁移三件事，其中删除与迁移都会加互斥锁保护并检查 Codex 主进程是否在跑，避免与正在使用的会话文件产生竞态。

**key_functions**：

| 函数 | 行为 | destructive |
|---|---|---|
| `delete_sessions` | 加互斥锁保护后**删除**所选的历史会话记录（涉及磁盘上的会话文件/目录） | **删除会话数据** |
| `migrate_session_worktree` closure | 先用 `platform::process::is_codex_app_running` 检查 Codex 是否在运行（运行中则拒绝/延后，避免文件冲突），再加 `CodexMutationGate` 锁调用 `core::sessions::migrate_session_worktree` 迁移会话工作树到新路径 | 移动/重写会话文件 |
| `export_session_markdown` closure | 把指定会话导出为 Markdown 文本（`core::sessions::export_session_markdown`），供用户存档/分享 | 写导出文件（用户主动触发） |

---

## 10. deeplink（5 文件）— 应用内部 Deeplink 解析

**module_roles**：解析 `aimami://` 自定义协议的 deeplink URL（如登录回跳、邀请链接等场景可能用到），把 query 参数解析进结构体，供上层命令消费。

**key_functions**：

| 函数 | 行为 | destructive |
|---|---|---|
| `parse_aimami_deeplink` | deeplink 顶层解析入口：切 scheme/host/path，构建 query 参数哈希表（`HashMap::remove_entry` 用于从零散 map 中取值消费，非文件/进程删除，误报排除） | — |
| `parse_inner` closure ×2 | 内部逐段解析闭包（percent-decode / 分隔符切分等） | — |
| `take_required` | 从已解析的 query map 中取出必填字段，缺失则返回错误（`hashbrown::RawTable::remove_entry` 同上，属内存表操作） | — |
| `ImportDeeplinkPayload::serialize` | serde 自动生成序列化 glue | — |

---

## 11. 空/缺失目录与 commands 根级说明

- `commands/skills/`、`commands/maintenance/`：本版本 `commands/` 目录下**不存在**这两个子模块目录（非"文件为空"，是路径本身不存在）。`skills` 相关反编译产物实际归属 `core/skills`（core 层，非 commands 层），超出本任务 12 个给定路径中 commands 层的范围，未纳入本文档；`maintenance` 在整个 1.2.3 macOS-arm64 反编译产物树内未检索到任何同名目录或文件。
- `commands/ida/pseudocode`（commands 根级）：目录存在但当前为空（0 个 `.c`），说明 `commands/mod.rs` 一级的模块声明/re-export 代码尚未被反编译或已被内联，不构成独立可分析函数。

---

## 12. 全局观察：destructive 操作汇总

按"remove_file/kill/DELETE/truncate/exit/进程终止/osascript 等破坏性副作用"口径，本批 145 个文件中命中的真实破坏性函数（已逐一读码确认，排除 `Vec::remove`/`HashMap::remove_entry` 等内存操作误报）：

| 函数 | 模块 | 破坏性动作 |
|---|---|---|
| `FileRestoreState::restore` | accounts | `std::sys::fs::remove_file` 删除回滚文件 |
| `finish_switch_failure` | accounts | 间接调用上者 + 重启 Codex 进程 |
| `remove_accounts` | accounts | 仓库层物理移除账号记录 |
| `logout` | accounts | 清除账号登录态/托管凭据 |
| `force_kill_codex` | system | `CodexProcessLifecycle::force_close_all` 强制终止 ChatGPT/Codex 进程 |
| `restart_codex` | system | 进程重启 |
| `open_path` | system | `Command::new("open")` spawn 外部进程 |
| `delete_relay_provider` | relay | 删除中转 provider 配置 |
| `quit_keeping_router` | relay | `tauri::AppHandle::exit(0)` 终止应用主进程 |
| `set_autostart_enabled` / `apply_default_autostart_on_router_enable` | autostart | 注册/注销系统登录项 |
| `remove_mcp_server` | mcp | 删除 MCP server 配置 |
| `delete_sessions` | sessions | 删除会话数据 |
| `migrate_session_worktree` | sessions | 移动/重写会话工作树文件 |
| `handle_tray_menu_event` | tray_menu | 间接路由到 `request_user_quit`（应用退出流程入口） |

以上均为产品既有功能对应的正常业务副作用（账号切换回滚、登出、强杀卡死进程、删除配置/会话、退出应用），非异常行为；仅作为架构基线中"哪些 commands 函数会产生不可逆副作用"的清单记录。
