# FULL-CHAIN-1.2.3 — macOS system 模块职责摘要（蒸馏自 commands-baseline.md §2 + platform-baseline.md）

来源：`raw/aimami/1.2.3/macos-arm64/backend-baseline/commands-baseline.md` §2「system」、`.../backend-baseline/platform-baseline.md`（全篇）。本文档是对两份既有基线文档的重新整理呈现，非本轮新反编译；未做逐命令系统化 call-tree-to-leaf 规约（dim3 partial）。

## 1. `commands::system::*`（34 文件）— 职责总览

system 模块是"应用级基础设施"聚合：Codex 进程强杀与重启、后台守护轮询（自动切换账号 + 用量刷新调度）、API 代理配置（与 relay 共享物理目录）、系统信息采集、图片兼容开关、设备 ID / 远程设备密钥、待定自动切换的确认/驳回、系统状态注册表重建。

| 命令/函数 | 行为 | destructive |
|---|---|---|
| `force_kill_codex` | 加 `CodexMutationGate` 锁，调用 `platform::process::CodexProcessLifecycle::force_close_all` 强制终止所有 ChatGPT/Codex 桌面进程 | **强制杀进程** |
| `restart_codex` | 重启 Codex 进程，共享 `CodexProcessLifecycle` 底层，走温和重启路径 | 进程重启 |
| `run_daemon_once_blocking`（NEW-delta，620 行主体 + 33 行内部辅助 + 2 个 closure） | 后台守护单次轮询：`Repository::load_local_state_synced` → `sync_auto_switch_request`/`reconcile_auto_switch_request` → `enrich_accounts_via_api_with_subscription_policy` → `build_daemon_payload` → `persist_progressive_state`。自动换号 + 用量轮询核心定时任务体 | — |
| `open_path` | `std::process::Command::new("open")` spawn macOS `open <path>` | 进程 spawn |
| `get_system_info` | 采集系统信息，内部 `Command::new("sw_vers","-productVersion")` | — |
| `get_or_create_remote_device_secret` / `import_remote_device_secret_if_empty` | 生成/导入跨设备身份凭据 | — |
| `get_device_id` | 读取/生成本机设备 ID | — |
| `set_api_proxy_config` / `detect_api_proxy_config` / `test_api_proxy_config` | 代理配置设置/探测/连通性测试三部曲（**与 macos-1.2.3-relay 包共享物理归属，语义属 relay 域**） | — |
| `configure_auto_switch` / `set_auto_switch` / `dismiss_pending_auto_switch` / `confirm_pending_auto_switch_async` | 自动切换账号开关配置 + 待确认切换的确认/驳回 | — |
| `set_usage_refresh_interval` / `start_usage_refresh_watcher` / `update_usage_refresh_schedule` / `note_usage_refresh_activity` | 用量刷新间隔配置 + 后台观察者调度 | — |
| `compose_image_compat_flag` / `get_image_compat` / `set_image_compat` | 图片兼容模式开关（内部出现 `Vec::remove::assert_failed` 越界断言，非真实文件删除，误报排除） | — |
| `rebuild_registry` / `clean` | 重建/清理系统状态注册表（内部登记表，非文件系统清理） | — |
| `get_mystery_unlock_grants` / `merge_mystery_unlock_grants` | 隐藏解锁授权项读取与合并 | — |
| `get_notification_client_state` | 系统通知客户端状态查询 | — |
| `load_bootstrap_state` | 加载启动引导状态（依赖 `core::bootstrap_cache`，该目录本身**未被任何既有基线文档独立分析**，见 README.md Unknown #4） | — |

## 2. `platform::*` 支撑证据（7 子目录）— 职责总览

以下 7 个目录被 system（及 relay/accounts 等其他模块）共用，非 system 独占；本包作为「system 命令实际调用到的底层原语」引用，不重复声明为 system 专属逆向成果。

1. **process**（34 文件）— Codex CLI/ChatGPT 进程发现、分类、生命周期编排：`ps`/`mdfind`/`lsof`/`osascript`/`launchctl` 定位进程，`CodexTransitionFence` + `CodexProcessLifecycle` 做「优雅退出（AppleScript quit）→ 静默期观察 → 强制 kill」三段式迁移。`force_kill_codex`/`restart_codex` 底层均依赖此模块。
2. **paths**（21 文件，见 README 口径差异）— `CodexPaths` 是 `~/.codex` 下近 90 个具名路径的登记表与解析器，含多版本 sqlite state db 的搜索/评分排序，含权限加固（`harden_private_file`/`harden_private_tree`）。
3. **debug_log**（17 文件，见口径差异）— 统一调试/事件/崩溃日志基础设施：目录初始化 + 权限加固 + 8MB 自动轮转、全局 logger + panic hook、多层脱敏（家目录替换、方括号/引号块打码、31 组敏感字段名哈希打码、`sk-`/JWT/邮箱 token 级打码）。
4. **daemon**（6 文件）— `launchd` LaunchAgent 安装/卸载：XML 转义 plist 生成、原子写入、`launchctl load -w` 注册 + `launchctl list` 校验；卸载走 `unload -w` → 校验 → 必要时 `remove` → 删 plist。
5. **single_instance**（7 文件，见口径差异）— `flock` 非阻塞独占锁单实例互斥；抢锁失败则原子写激活请求文件通知已运行实例，由后台线程 watcher 监听。
6. **system_volume**（7 文件）— CoreAudio 临时降低/恢复系统输出音量（用于语音触发录音场景），崩溃安全的 marker 文件机制。
7. **proxy**（3 文件）— `scutil --proxy` 解析系统代理配置，PAC 场景下对 `http(s)://` PAC URL 发起真实网络请求或读本地 `file://` PAC 脚本。

## 3. Call-tree 叶子（部分已知，未系统化，dim3 partial）

- 进程管理叶子：`osascript`（AppleScript quit）→ `ps`/`lsof` 枚举 → `kill`（强制终止）→ `open`（spawn 外部程序）。
- 守护/持久化叶子：`launchctl load/unload/list/remove`（daemon）、`flock`（single_instance）、原子文件写（`atomic_write` 家族，跨模块共用）。
- 网络叶子：`scutil --proxy`（本地系统调用）+ `reqwest::blocking`（PAC URL 场景下的真实出站 HTTP 请求）。
- 音频叶子：CoreAudio `AudioObjectGetPropertyData`/`SetPropertyData`。

**注**：以上叶子归纳来自两份既有基线文档的函数级职责描述，本包未逐函数重新做 fs/http/registry/process/sidecar/response/error termination 的系统化标注（dim3 partial，非 dim3 closed，与 relay/skills 两个既有包的同类 gap 一致）。

## 4. 与既有基线文档的差异声明

本文档忠实转述 `commands-baseline.md` §2 与 `platform-baseline.md` 的内容，未做独立的字节级复核（除 README.md 提及的 2 个 commands/system 抽验文件）。如两份来源文档本身存在误判，本文档会原样继承，未做交叉验证纠偏（不同于 relay 包针对 `fetch_relay_models_draft` 截断桩所做的"grounded 复验揪出假声明"那种独立复核——本包受限于本轮预算，未对 system/platform 做同等深度的独立复核）。
