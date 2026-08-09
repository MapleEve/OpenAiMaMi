# FULL-CHAIN-1.2.3 — macOS voice（前端 → invoke → 后端 → core → 持久化/进程/文本注入叶子）

来源：`raw/aimami/1.2.3/macos-arm64/backend-baseline/voice-baseline.md` §1-12（模块职责分析）+ 附录跨模块调用关系图，`raw/aimami/1.2.3/macos-arm64/frontend/pages/voice-frontend.md`（VoicePage 逆向）。本文档是模块级链路叙事，**不是逐命令 call-tree-to-leaf 规约**（dim3 未系统化产出，见 gate-report.json）。

## 1. 前端触发层

`VoicePage`（`voice-page-CV7DqakD.js`，导出别名 `hi`，4194 行 beautify）：五个 tab（overview/model/processing/vocabulary/history）+ 权限管理弹窗 + 主触发键编辑器。四个核心状态 hook：
- `ht()`（运行时状态，`useQuery` staleTime:Infinity + 事件推送 `voice-runtime-updated` + focus/visibilitychange 手动 refetch，8 个 mutation 全部 `onSuccess` 直接写缓存不走 invalidateQueries）
- `si()`（ASR/LLM 凭据配置，手写 async 函数 + 请求序列号竞态守卫）
- `ii()`（处理模式草稿，纯本地持久化，非 Tauri invoke）
- 子组件独立状态（历史详情纠错弹窗、快捷键抓取卡片等）

关键交互时序：
- **热键抓取**：`set_voice_trigger_listener_suppressed(true)` 暂停监听 → `capture_voice_trigger_key` 等待按键 → 前端本地安全校验（过滤危险组合）→ `set_voice_trigger_bindings`/`set_voice_mode_shortcut` 落库 → `finally` 恢复监听；卸载时未清理会强制 `cancel_voice_trigger_capture`。
- **处理模式换绑**：人工补偿事务（先 set 新绑定 silent → 成功后 remove 旧绑定 silent → 失败则手动撤销新绑定+toast），因后端无原子换绑命令。
- **权限管理**：麦克风/语音识别走 `request_voice_permissions` 系统弹框；辅助功能走 `request_accessibility_permission` + `open_macos_privacy_pane`（后者是页面内直接字面量 `invoke()` 调用，不经 `R` facade）。

## 2. 后端命令层（`commands::voice` + `commands::voice_runtime`）

32 个 `.c` 文件（23 + 9）覆盖 39 条上游命令中的多数；命令层是薄 wrapper：反序列化入参 → 调 `core::voice::*` 或 `platform::*` 对应函数 → 序列化响应/错误。部分命令（如 `set_voice_global_shortcut`/`set_voice_overlay_style`/`set_voice_processing_mode_id`/`start_voice_capture`/`stop_voice_capture`/`show_voice_search_overlay`/`cancel_voice_trigger_capture`/`capture_voice_trigger_key`/`voice_processing_done`/`set_voice_trigger_listener_suppressed`）未在 `commands/voice*` 目录下找到独立同词干 wrapper 文件，而是直接以 `core::voice::runtime`（或 `runtime::overlay`、`platform::voice_trigger_macos`）内的核心函数名出现——推断这些命令的 `#[tauri::command]` wrapper 体量极小、被 IDA/命名工具直接归类到了 core 层文件而非单独产出 `commands/` 副本，或 wrapper 本身与 core 函数同名同址。详见 `logic/REGISTRATION-TABLE-1.2.3.md` 逐命令对照。

## 3. Core 层（`core::voice::*`，9 个具名子模块 + trait 抽象层）

- **`runtime`（60 函数）**：语音录制生命周期总控状态机——权限同步、standby 常驻子进程管理（`ensure_standby_sidecar`/`terminate_voice_sidecar` SIGKILL 兜底/`cleanup_stale_sidecars` 批量 kill -9）、开始/停止录音（`start_capture`/`start_capture_legacy`/`stop_capture`）、子进程事件分发（`apply_sidecar_event`）、热键绑定持久化与监听器重启、应用启动恢复（`restore_runtime`）、应用退出清理（`shutdown_runtime`）。
- **`runtime::overlay`（10 函数）**：独立置顶悬浮窗（录音 HUD / 语音搜索结果卡片）的创建/显示/隐藏 + 原生 NSWindow 属性设置（objc2）。
- **`runtime::tray`（1 函数）**：菜单栏图标录音状态实时映射（像素级手绘红点徽标）。
- **`runtime::watchdog`（3 函数）**：启动中/处理中/停止中三个关键异步转换的超时兜底看门狗线程。
- **`workspace`（21 函数）**：提示词模板/词表（含按应用范围隔离）/历史记录/处理模式的本机 JSON 持久化层，全局写锁下"读→改→排序→原子写"，`read_workspace_file` 读到已有内容先做时间戳备份。
- **`llm`（11 函数）**：转写结果 LLM 后处理（润色/格式化），provider 分发（当前已知 `call_claude`），API Key 存 macOS 钥匙串。
- **`aliyun_asr` + `aliyun_asr::connect`（9+2 函数）**：阿里云 DashScope 实时语音识别 WebSocket 客户端（选端点/建连/会话配置帧/事件流读取/文本拼接）。
- **`asr`（8 函数）**：ASR provider 配置抽象层（与 `llm` 同构），已知支持 `aliyunFunAsr`/`appleSpeech`，预留 OpenAI 兼容转写通道字段。
- **`core/voice` 直挂 glue（25 文件）**：4 个 serde derive Deserialize/Default 实现（针对 aliyun_asr/asr/llm/runtime/workspace 的配置结构体）+ **4 个 `core::voice::pipeline::{MacosPermissionsChecker,MacosTextInjector}` 实现 `core::voice::traits::{PermissionsChecker,TextInjector}` trait 的方法体**（`check_permission`/`request_permission`/`capture_context` 等）——后者暗示存在一层跨平台 trait 抽象，Windows 侧大概率有对应实现（未核实，见 Unknown）。

## 4. Platform 层（macOS 专属）

- **`platform::voice_trigger_macos`（15 函数）**：基于 `CGEventTap` 的全局热键捕获引擎，正常监听 + 一次性热键录制两种模式，含针对 macOS 会自动禁用 event tap 的看门狗自愈（`tap_watchdog_cb`）。
- **`platform::text_injection`（10 函数）**：核心策略"写剪贴板+模拟 ⌘V 粘贴"而非直接 Accessibility 属性写入；`capture_focused_element_snapshot` 用 Accessibility API 采集上下文判定是否可注入，含超时保护（`AXUIElementSetMessagingTimeout`）防止对无响应 App 卡死。
- **`platform::voice_macos`（1 函数）**：`resolve_voice_sidecar_path` 解析语音识别子进程二进制路径（供 `start_capture_legacy` 使用）。
- **`platform::voice_permissions`（4 函数）**：TCC（macOS 隐私权限数据库）查询与异步权限请求，供 `sync_permissions_internal` 使用。

## 5. 持久化/进程/文本注入叶子（部分已知，未系统化）

- `workspace::write_workspace_file` → 复用 `core::relay::atomic_write::write_atomic_with_mode` 原子写基础设施，写模板/词表/历史/处理模式 JSON。
- `runtime::terminate_voice_sidecar`/`cleanup_stale_sidecars` → 子进程强杀（SIGKILL / kill -9），是本模块最主要的破坏性副作用来源。
- `llm`/`asr` 的 `keyring_entry`/`save_config`/`load_saved_config` → macOS 钥匙串读写（非明文文件，与 relay 模块的明文 key 文件策略不同，见 SYSTEM-DIFF.md）。
- `aliyun_asr::connect` → 建立到阿里云 DashScope 的 TLS WebSocket 长连接（`tokio_tungstenite`+`rustls`）。
- `platform::text_injection::inject_text` → 剪贴板临时覆盖 + 合成 ⌘V 按键事件投递系统事件队列。

**注**：以上叶子归纳来自模块名+函数签名语义（`voice-baseline.md` 逐函数职责表），未逐函数做 fs/http/registry/process/sidecar/response/error termination 的系统化标注（dim3 partial，非 dim3 closed）。
