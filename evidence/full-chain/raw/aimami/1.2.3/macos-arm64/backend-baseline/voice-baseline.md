# AiMaMi 1.2.3 macOS-arm64 后端基线 — voice 语音域模块职责分析

> 任务编号 1.2.3 后端完整基线模块分析（voice）。
> 方法：只读已由 IDA 反编译好的 `.c` 伪代码（文件头注释含 mangled 符号名 + 地址 + `基线 same-set` / `NEW-delta` 标记），不连 IDA、不做二次反编译，只做代码阅读与文档整理。
> 授权范围：本仓/本机所有者对 AiMaMi（自家/已授权产品）下达的重建授权任务，产出仅用于内部架构基线文档。
> 符号前缀覆盖 `codexmate_lib::core::voice::*`（核心业务）、`codexmate_lib::commands::voice*`（Tauri 命令层）、`codexmate_lib::platform::voice_trigger_macos` / `codexmate_lib::platform::text_injection`（macOS 平台专属实现）。

---

## 0. 目录清单与偏差说明

任务给出 11 个目录，实际磁盘情况如下（如实记录，不臆断）：

| 任务给定路径 | 实际状态 | `.c` 文件数 |
|---|---|---|
| `core/voice/ida/pseudocode` | **不存在**——`core/voice` 只是命名空间父目录，本身没有直接挂在其下的可反编译函数，所有函数都落在其子模块（runtime/workspace/llm/aliyun_asr/asr）里 | 0 |
| `core/voice/runtime/ida/pseudocode` | 存在 | 60 |
| `core/voice/workspace/ida/pseudocode` | 存在 | 21 |
| `core/voice/llm/ida/pseudocode` | 存在 | 11 |
| `core/voice/aliyun_asr/ida/pseudocode` | 存在 | 9 |
| `core/voice/asr/ida/pseudocode` | 存在 | 8 |
| `commands/voice/ida/pseudocode` | 存在 | 23 |
| `commands/voice_runtime/ida/pseudocode` | 存在 | 9 |
| `platform/voice_trigger_macos/ida/pseudocode` | 存在 | 15 |
| `platform/text_injection/ida/pseudocode` | 存在 | 10 |

另外，`core/voice/runtime/` 和 `core/voice/aliyun_asr/` 下各自还有任务未显式列出、但物理上挂在给定目录树内的子命名空间，为保证 voice 域完整性一并纳入本次分析：

| 补充目录（未在任务清单中，但在给定父目录树内） | `.c` 文件数 |
|---|---|
| `core/voice/runtime/overlay/ida/pseudocode`（语音悬浮窗口 UI 状态） | 10 |
| `core/voice/runtime/tray/ida/pseudocode`（菜单栏图标录音状态） | 1 |
| `core/voice/runtime/watchdog/ida/pseudocode`（状态转换看门狗定时器） | 3 |
| `core/voice/aliyun_asr/connect/ida/pseudocode`（`AliyunAsrSession::connect` 巨型异步闭包的拆分体） | 2 |

**有效分析文件总数：182 个 `.c`**，覆盖 14 个真实存在的 voice 域子模块（10 个任务给定 + 4 个补充）。

**截断/反编译失败检查**：对全部 182 个文件头做 `TRUNCATED` / `DECOMPILE-FAILED` 关键字扫描，**0 命中**——本批文件全部为完整反编译产物，无需标注截断函数。其中 2 个巨型函数（`aliyun_asr/connect` 下的 `hbb4b340bd79fba8f_0x100285c80.c` / `_0x10045f2b0.c`，各约 90937B / 92782B 反编译体）文件头明确标注 `[FULL — <反编译器> 全解 XXXXXB, 超大体分页取回]`，即：体积巨大但确认是**完整**反编译产物，只是取回时分页拉取，不属于截断。

**1.2.3 相对 1.2.2 的 NEW-delta 标记**：全批 182 个文件中共 4 个函数带 `1.2.3 NEW-delta` 头注释（IDA 函数枚举 diff，名↔地址一致）：

1. `core::voice::runtime::overlay::apply_native_overlay_properties` (0x1006f8be0)
2. `core::voice::runtime::overlay::apply_native_search_overlay_properties` (0x1006f9020)
3. `core::voice::aliyun_asr::AliyunAsrSession::connect::{closure}...hbb4b340bd79fba8fE_0` (0x100285c80, FULL 90937B)
4. `core::voice::aliyun_asr::AliyunAsrSession::connect::{closure}...hbb4b340bd79fba8fE_1` (0x10045f2b0, FULL 92782B)

其余 178 个函数头注释均为 `基线 same-set`（与 1.2.2 版本对齐，非本版本新增；两个体积巨大的 `connect` 闭包很可能只是编译器在 1.2.2→1.2.3 之间对同一段异步状态机换了不同的内联/单态化切分边界，不代表业务逻辑真的重写，具体见 §7）。

**自动生成 glue 计数（略读，不逐条展开）**：`serde_core::ser::Serialize` / `de::Deserialize` derive 实现共 4 个（`runtime::VoiceSidecarEvent::deserialize`、`runtime::PerModeShortcut::serialize`、`runtime::VoiceTriggerConfig::serialize`、`runtime::overlay::VoiceSearchResultPayload::serialize`），均为把结构体字段按顺序读写进序列化器的样板代码，无业务判断逻辑，不逐条展开。

---

## 1. `core::voice::runtime`（60 文件）— 语音录制生命周期总控状态机

**module_roles**：这是整个 voice 域最重的模块，是"一次语音输入"从按下热键到文字注入完成的全生命周期状态机总控：权限同步、standby 常驻子进程管理、开始/停止录音、ASR/LLM 处理事件分发、悬浮窗口/托盘联动、热键绑定持久化与热键监听器重启、应用启动时的运行时恢复、应用退出时的子进程清理。

**key_functions**：

| 函数 | 行为 | destructive |
|---|---|---|
| `start_capture`（两个重载，共 1375+56 行） | 开始录音总入口：`sync_permissions_internal` 校验麦克风/辅助功能权限 → `asr::load_saved_config` + `workspace::load_workspace` 取配置 → 优先 `try_start_via_standby` 走常驻子进程快速路径，失败则回退 `start_capture_legacy` 现拉子进程 → `watchdog::spawn_starting_watchdog` 挂启动超时看门狗 → `tray::update_tray_recording_state` / `overlay::hide_voice_overlay` 联动 UI → `emit_status` 广播状态 | — |
| `start_capture_legacy` | 现起子进程路径：`platform::voice_macos::resolve_voice_sidecar_path` 解析语音识别子进程二进制路径后 `Command::new(...).arg(locale).stdin/stdout/stderr(...).spawn()` 直接拉起一个新的语音识别子进程（无 standby 常驻进程时的兜底） | 拉起新进程 |
| `ensure_standby_sidecar` | 确保有一个"待命"的语音识别子进程常驻后台：解析子进程路径（内置 `swifttranscribe` 作为兜底二进制名，指向基于 Apple Speech 框架封装的原生转写子进程），以 `standby` 参数 spawn，并起监控线程把句柄存进 Tauri `ResourceTable`，供下次录音直接复用避免每次冷启动子进程的延迟 | 拉起新进程 |
| `terminate_voice_sidecar` | 优雅终止一个语音子进程：先向子进程 stdin 写关闭消息，轮询 `Child::try_wait` 最多等待 1.5 秒；超时仍未退出则调用 `Child::kill`（等价于 `SIGKILL`）强制杀死后 `Child::wait` 回收僵尸进程 | **进程强杀（超时兜底）** |
| `cleanup_stale_sidecars` | 启动期清理孤儿子进程：跑一次进程列表命令（`pgrep`/`ps` 风格调用）按命令行特征匹配残留的语音子进程 pid，对每个匹配 pid 执行 `kill -9 <pid>` | **kill -9（批量强杀孤儿进程）** |
| `try_start_via_standby` / `send_standby_command` / `send_standby_stop_command` / `send_play_sound_to_standby` | 通过已存在的 standby 子进程 stdin 管道发送控制指令（开始/停止/播放提示音），避免每次重新 spawn 进程 | — |
| `apply_sidecar_event` | 子进程事件分发中枢：收到子进程上报的状态事件后，联动 `overlay::show_voice_overlay`/`hide_voice_overlay`、`tray::update_tray_recording_state`、`platform::system_volume::VOLUME_WORKER`（处理录音期间系统音量闪避/ducking）、`platform::audio_feedback`（提示音）、`watchdog::spawn_processing_watchdog`（处理超时看门狗），并用 `friendly_asr_error` 把原始错误转成用户可读文案 | — |
| `finalize_sidecar_exit` / `finalize_capture_state` | 子进程退出后的收尾：用 `CAPTURE_STATE_GENERATION` 代际计数器丢弃过期回调（防止旧一轮录音的异步回调污染新一轮状态），隐藏悬浮窗、复位托盘图标 | — |
| `stop_capture` | 停止录音：向 standby 子进程发停止指令、隐藏悬浮窗、复位托盘、挂 `spawn_stopping_watchdog` 停止超时看门狗 | — |
| `shutdown_runtime` | 应用退出路径：`terminate_voice_sidecar` 终止当前活跃子进程、隐藏悬浮窗、复位托盘 | 进程终止（走 terminate 的强杀兜底） |
| `shutdown_standby_sidecar` | 单独终止 standby 常驻子进程（设置变更导致不再需要常驻时调用） | 进程终止 |
| `restart_trigger_listener_internal` / `stop_trigger_listener_internal` | 重启/停止 macOS 全局热键监听（调用 `platform::voice_trigger_macos::start_trigger_listener_multi`），热键绑定变更后必须重建监听器 | — |
| `handle_trigger_action` | 全局热键回调的业务处理入口：按当前状态决定是 `start_capture` 还是 `stop_capture`，或走 `handle_shortcut_toggle` 的切换逻辑 | — |
| `set_trigger_bindings` / `set_trigger_key` / `remove_mode_shortcut` | 持久化热键绑定（写 runtime 文件）并触发监听器重启 | — |
| `update_settings_internal` | 处理模式/常驻子进程等设置变更的统一入口：按需 `ensure_standby_sidecar` 或 `shutdown_standby_sidecar`，重启热键监听器，写 runtime 文件 | — |
| `restore_runtime` | 应用启动时恢复运行时：读 runtime 文件、恢复热键绑定与监听器、按需重建 standby 子进程、同步权限状态 | — |
| `classify_asr_error` / `friendly_asr_error` | 把 ASR/LLM 返回的原始英文错误文本做大小写归一后关键字匹配，分类为 `auth_failed`/`quota_exhausted`/`model_unavailable`/`timed_out`/`no_speech` 等内部错误码，再映射成写死在二进制里的中文用户提示文案 | — |
| `request_accessibility` / `sync_permissions_internal` | 触发 macOS 辅助功能权限请求、同步 TCC（macOS 隐私权限数据库，Transparency Consent and Control）授权状态到运行时状态供前端展示 | — |

---

## 2. `core::voice::runtime::overlay`（10 文件）— 语音悬浮窗口 UI 状态与原生窗口属性

**module_roles**：管理一个独立于主窗口、始终置顶的小型 Tauri WebView 悬浮窗（录音中 HUD / 语音搜索结果卡片），负责按需创建、显示/隐藏、以及给这个悬浮窗套上原生 macOS 窗口属性（浮动层级、透明背景、不抢焦点显示）。

**key_functions**：

| 函数 | 行为 | destructive |
|---|---|---|
| `apply_native_overlay_properties`（**1.2.3 NEW-delta**） | 用 objc2 直接操作悬浮窗对应的 `NSWindow`：`setLevel`（浮动窗口层级，置顶但不遮挡关键 UI）、`setCollectionBehavior`、`setHidesOnDeactivate(false)`、`setHasShadow`、`setOpaque(false)`、`setBackgroundColor(clearColor)`（做成透明背景的 HUD 窗口），并按当前鼠标所在屏幕计算窗口居中位置后 `setFrame_display` + `orderFrontRegardless`（显示但不激活/抢占前台应用焦点） | — |
| `apply_native_search_overlay_properties`（**1.2.3 NEW-delta**） | 与上者同构，针对"语音搜索结果"悬浮窗做同样的原生窗口属性设置 | — |
| `show_voice_overlay` | 首次调用时用 `WebviewWindowBuilder` 懒创建一个加载 `index.html` 的子 WebView 窗口（标题/尺寸/位置/`with_webview`），用 `OVERLAY_GENERATION` 代际计数器防止并发创建竞态，随后通过 `send_user_message` 发送给 Tauri 运行时事件循环去真正显示 | — |
| `hide_voice_overlay` | 隐藏悬浮窗（不销毁，复用） | — |
| `overlay_linger_ms` | 决定悬浮窗关闭前的停留时长：若当前处理模式/识别结果状态命中 `no_speech`（空识别）等特定分支则返回 0 或很短的延迟，否则按配置字段计算停留毫秒数 | — |
| `show_voice_search_overlay` / `hide_voice_search_overlay` | 语音搜索结果卡片悬浮窗的显示/隐藏，逻辑与 `show/hide_voice_overlay` 同构但目标是搜索结果窗口 | — |
| `VoiceSearchResultState::store` / `::snapshot` | 语音搜索结果的状态存取（供悬浮窗渲染时读取最新结果） | — |

---

## 3. `core::voice::runtime::tray`（1 文件）— 菜单栏图标录音状态

**module_roles**：把"当前是否在录音"这个状态实时映射到 macOS 菜单栏（状态栏）图标上。

**key_functions**：

| 函数 | 行为 | destructive |
|---|---|---|
| `update_tray_recording_state` | 找到 `mainstop`（主）托盘图标，解码内置 PNG 图标为 RGBA8 像素缓冲，录音中时在图标角落用像素级距离判定（`dx²+dy²≤r²`）手绘一个红色圆点徽标叠加到图标上，再 `TrayIcon::set_icon` + `set_icon_as_template(!录音中)` 更新菜单栏图标（录音时关闭 macOS "template image" 单色渲染模式，让红点保持彩色可见） | — |

---

## 4. `core::voice::runtime::watchdog`（3 文件）— 状态转换看门狗定时器

**module_roles**：为录音生命周期的三个关键异步转换（启动中/处理中/停止中）各挂一个后台线程做超时兜底，防止子进程卡死导致 UI 状态永久停在中间态。

**key_functions**：

| 函数 | 行为 | destructive |
|---|---|---|
| `spawn_starting_watchdog` | 起一个命名后台线程，绑定当前状态代际计数器，监视"开始录音"这一步是否在预期时间内完成，超时则强制把状态纠正回可恢复态 | — |
| `spawn_processing_watchdog` | 同构逻辑，监视"ASR/LLM 处理中"阶段是否超时未返回 | — |
| `spawn_stopping_watchdog` | 同构逻辑，监视"停止录音"阶段（含子进程退出等待）是否超时 | — |

---

## 5. `core::voice::workspace`（21 文件）— 语音工作区文件存储层

**module_roles**：语音功能的用户数据落盘层——提示词模板、自定义词表（含按应用范围隔离的词表）、历史记录、处理模式配置，全部以本机 JSON 文件形式持久化，所有写操作都在同一把全局写锁下做"读→改→排序→原子写"。

**key_functions**：

| 函数 | 行为 | destructive |
|---|---|---|
| `read_workspace_file` | 读语音工作区 JSON：目录不存在则先 `ensure_directories`；文件不存在或内容为空白则用 `default_workspace_file` 重建并落盘；成功解析已有 JSON 后，**先把原文件 `rename` 成带时间戳后缀的备份文件**，再把内置默认模板与已有词表按内容去重合并（用 hashmap 按 trim 后的文本做 key），排序后返回——是本模块对"写库前先备份"红线的落地实现 | 文件改名（原文件重命名为带时间戳的 `.bak` 风格备份，而非删除） |
| `write_workspace_file` | 通过 `core::relay::atomic_write::write_atomic_with_mode`（复用 relay 模块的原子写基础设施）把整个工作区结构体序列化写盘，写前 `ensure_directories` | — |
| `lock_voice_workspace_write` | 全局互斥写锁（`voice_workspace_write_lock::LOCK`），所有 upsert/remove 类操作都先拿这把锁再读写文件，避免并发写坏 JSON | — |
| `default_workspace_file` / `default_templates` | 生成首次使用时的默认工作区结构（内置默认提示词模板集合） | — |
| `generate_prompt` | 生成 LLM 后处理用的提示词：读工作区（词表/模板）→ 若 `LlmConfig::is_configured` 则 `call_llm`/`call_llm_streaming` 真正调用大模型做文本润色/格式化，否则走规则式兜底；结果連同历史一起落盘 | — |
| `upsert_template` / `remove_template` | 新增或修改 / 删除一条提示词模板，均走 `lock→read→改→sort→write` 标准流程 | remove_template：**移除模板记录**（用户数据，非进程/文件删除） |
| `upsert_vocabulary` / `remove_vocabulary` / `replace_vocabulary_kind` | 全局词表的增删改（发音纠错/专有名词替换词条） | remove_vocabulary：**移除词表记录** |
| `upsert_vocabulary_app_scope` / `remove_vocabulary_app_scope` | 按"当前前台应用"隔离作用域的词表增删（同一词条可以只在指定 App 里生效） | remove_vocabulary_app_scope：**移除应用范围词表记录** |
| `remove_history_entry` | 删除一条语音识别历史记录 | **移除历史记录** |
| `sort_workspace` | 对模板/词表按固定规则排序，保证落盘文件的确定性 diff | — |
| `char_eq_ci` / `sanitize_optional` | 大小写不敏感字符比较、可选字段清洗（trim/空值归一）等基础工具函数 | — |

---

## 6. `core::voice::llm`（11 文件）— LLM 后处理调用与凭据管理

**module_roles**：语音转写结果的"文字润色/格式化"后处理层，管理 LLM provider 的配置与 API Key（存 macOS 钥匙串），封装同步与流式两种调用方式。

**key_functions**：

| 函数 | 行为 | destructive |
|---|---|---|
| `call_llm` | 按 `normalize_provider` 归一化后的 provider 分发：目前已知会路由到 `call_claude`（Anthropic 兼容 REST 接口），用 `reqwest::blocking` 同步发起请求，`header_sensitive` 设置鉴权头、`json` 传请求体 | — |
| `call_llm_streaming` | 同一分发逻辑的流式版本，用 `Response::text` 而非 `Response::json` 处理返回（逐块读取而非等完整 JSON） | — |
| `call_claude` | 具体的 HTTP 调用实现：构造请求、发送、解析响应，并用 `strip_think_tags` 剥离形如 `<think>...</think>` 的推理型模型的思维链标签，只保留最终输出文本 | — |
| `keyring_entry` / `save_config` / `load_saved_config` | 用 `keyring` crate（`Entry::new`/`set_password`/`get_password`）把 provider 的 API Key 写入/读出 **macOS 钥匙串**（而非明文文件），符合"凭据只本机存取、不上传服务端"的红线 | — |
| `provider_defaults` / `normalize_provider` | 归一化 provider 标识字符串，给出对应的默认模型/端点配置 | — |
| `fallback_trimmed` | LLM 未配置或调用失败时的规则式兜底：对原始转写文本做简单裁剪/清理，保证即使没配置 LLM 也有可用输出 | — |
| `LlmConfig::is_configured` | 判断当前 LLM 配置（provider + key）是否完整可用，供 `start_capture`/`generate_prompt`/`test_voice_llm_config` 等上游做分支 | — |

---

## 7. `core::voice::aliyun_asr` + `core::voice::aliyun_asr::connect`（9 + 2 文件）— 阿里云实时语音识别 WebSocket 客户端

**module_roles**：对接阿里云 DashScope 实时语音识别（Omni-Realtime 风格）WebSocket 协议的完整客户端：选端点、建连、发会话配置帧、读事件流、拼装最终文本。

**key_functions**：

| 函数 | 行为 | destructive |
|---|---|---|
| `AliyunAsrSession::connect::{closure}` × 2（**1.2.3 NEW-delta**，各 90937B / 92782B 完整反编译体，编译器把整个异步 `connect()` 生成器拆成两段落地） | 建立到阿里云的 TLS WebSocket 连接（`tokio_tungstenite` + `rustls`），内部调用 `detect_protocol`/`endpoint_for_protocol` 选终端节点、`start_message` 构造并发送会话初始化帧、`task_id` 生成任务标识；出现在 NEW-delta 列表里大概率是 1.2.2→1.2.3 之间编译器对同一段生成器换了内联/单态化切分边界，而非确认的业务重写（详见 §0 说明），需结合后续版本 delta 交叉验证 | 网络连接（建立到阿里云的 WebSocket 长连接） |
| `detect_protocol` | 判定走中国大陆节点还是海外节点（字符串常量含 `dashscope.aliyuncs.com` / `dashscope-intl.aliyuncs.com`） | — |
| `endpoint_for_protocol` | 拼出完整 WebSocket URL：`wss://dashscope[-intl].aliyuncs.com/api-ws/v1/realtime` | — |
| `start_message` | 构造 `session.update` 类型的 JSON 配置帧：采样率、`input_audio_format`、`chunk_size`/`chunk_interval`、`language_hints`、`turn_detection`（`server_vad` 语音活动检测 + `silence_duration_ms`）、`disfluency_removal_enabled`（去口癖）等字段 | — |
| `reader_loop` | 持续从 WebSocket 读取消息帧，用 `serde_json::de::from_str`/`from_trait` 解析事件（含 `error` 错误事件类型），把分片文本片段累积后交给 `join_transcript` 拼接成完整识别结果 | — |
| `join_transcript` | 把多个转写片段拼接成最终文本 | — |
| `aliyun_language_hint` | 把内部语言标识映射成阿里云协议要求的 `language_hints` 值（含 `en`/`ja` 等语言码） | — |
| `task_id` | 生成/读取当次识别会话的任务标识（用于协议里的 `task_id` 字段） | — |

---

## 8. `core::voice::asr`（8 文件）— ASR 提供商配置抽象层

**module_roles**：与 `llm` 模块同构的一层抽象，管理"当前用哪个语音识别引擎"及其凭据，供 `runtime::start_capture` 在真正拉起子进程/建连前读取。

**key_functions**：

| 函数 | 行为 | destructive |
|---|---|---|
| `normalize_provider` | 归一化 ASR provider 标识，已知支持至少 `aliyunFunAsr`（阿里云实时语音识别）与 `appleSpeech`（macOS 原生 Apple Speech 框架，即前面 `swifttranscribe` 子进程对应的引擎） | — |
| `provider_defaults` | 给出各 provider 的默认模型标识，含 `fun-asr-realtime`（阿里云 FunASR 实时模型）与 `gpt-4o-transcribe`（OpenAI 兼容转写模型），说明该抽象层预留了第三方 OpenAI 兼容转写通道 | — |
| `keyring_entry` / `save_config` / `load_saved_config` | 与 `llm` 模块同构，ASR provider 的 API Key 同样存取 macOS 钥匙串 | — |
| `fallback_trimmed` | ASR 未配置时的规则式兜底文本处理 | — |
| `AsrConfig::is_configured` | 判断当前 ASR 配置是否完整可用 | — |

---

## 9. `commands::voice`（23 文件）— Tauri 命令：语音配置读写与测试

**module_roles**：把 `core::voice::{asr,llm,workspace}` 的能力以 Tauri `#[command]` 形式暴露给前端设置面板：配置的加载/保存/测试连接、模板与词表 CRUD、按应用范围的词表、生成提示词、以及基于 macOS `Info.plist` 的前台应用信息解析（服务于"按应用生效的词表"功能）。

**key_functions**：

| 函数 | 行为 | destructive |
|---|---|---|
| `load_voice_asr_config` / `save_voice_asr_config` / `test_voice_asr_config` | ASR 配置的加载/保存/测试连接（`AsrConfig::is_configured` + `normalize_provider`） | — |
| `load_voice_llm_config` / `save_voice_llm_config` / `test_voice_llm_config` | LLM 配置的加载/保存/测试连接（真正调用一次 `call_llm` 验证凭据可用） | — |
| `load_voice_processing_modes` / `save_voice_processing_modes` | 处理模式（不同场景下的提示词/后处理策略预设）的加载与保存 | — |
| `load_voice_workspace` | 加载整个语音工作区（模板+词表+历史）给前端展示 | — |
| `generate_voice_prompt`（两个重载） | 包一层 `workspace::generate_prompt`，暴露给前端"生成提示词"按钮 | — |
| `upsert_voice_template` / `remove_voice_template` | 模板增改/删除命令 | remove：移除模板记录 |
| `upsert_voice_vocabulary` / `remove_voice_vocabulary` / `replace_voice_vocabulary_kind` | 全局词表增改/删除/替换类别命令 | remove：移除词表记录 |
| `upsert_voice_vocabulary_app_scope` / `remove_voice_vocabulary_app_scope` | 按应用范围词表增改/删除命令 | remove：移除应用范围词表记录 |
| `remove_voice_history_entry` | 删除一条历史记录命令 | 移除历史记录 |
| `resolve_macos_app_info`（两个重载）/ `resolve_voice_vocabulary_app_info` | 解析某个 macOS App 的 bundle 信息（名称/标识符），供"选择要应用词表的目标 App"这一 UI 交互使用 | — |
| `read_plist_value` | 用子进程调用系统命令读取指定 App 的 `Info.plist` 字段值（`Command::new(...).output()`） | 拉起子进程（只读查询，非破坏性） |

---

## 10. `commands::voice_runtime`（9 文件）— Tauri 命令：运行时控制/权限/文本注入

**module_roles**：把 `core::voice::runtime` 的运行时控制能力和 `platform::text_injection` 的文本注入能力暴露给前端：查看运行时状态、设置/清除热键绑定、请求系统权限、打开系统偏好设置对应面板、阻塞式注入文本。

**key_functions**：

| 函数 | 行为 | destructive |
|---|---|---|
| `load_voice_runtime_status` | 包一层 `runtime::load_status`，给前端展示当前录音/权限/热键状态 | — |
| `update_voice_runtime_settings` | 包一层 `runtime::update_settings_internal` | — |
| `set_voice_trigger_key` / `set_voice_trigger_bindings` / `set_voice_mode_shortcut` / `remove_voice_mode_shortcut` | 热键与模式快捷键的设置/删除命令，均包一层 `core::voice::runtime` 对应函数 | remove：移除快捷键绑定 |
| `request_voice_permissions` | 触发麦克风/辅助功能等系统权限请求弹窗 | — |
| `open_macos_privacy_pane` | 用 `Command::spawn` 拉起 `open` 打开系统偏好设置里对应的隐私权限面板（麦克风/辅助功能），引导用户手动授权 | 拉起子进程（打开系统设置面板，非破坏性） |
| `inject_voice_text_blocking` | 包一层 `platform::text_injection::inject_text`，把识别/润色后的文本同步注入到当前聚焦的输入框 | — |

---

## 11. `platform::voice_trigger_macos`（15 文件）— macOS 全局热键捕获引擎

**module_roles**：基于 macOS `CGEventTap`（系统级键盘事件监听接口）实现的全局热键引擎，既服务于"按热键开始/停止录音"的正常监听，也服务于设置界面里"点击后按下你想要的组合键"这种一次性热键录制交互；内置针对 macOS 会不定期自动禁用事件监听的看门狗自愈机制。

**key_functions**：

| 函数 | 行为 | destructive |
|---|---|---|
| `start_trigger_listener_multi` | 为当前配置的一个或多个热键绑定建立全局 `CGEventTap` 监听，启动独立线程跑 CFRunLoop | — |
| `listen_callback` | 正常监听态的事件回调：用 `CGEventGetFlags`/`CGEventGetIntegerValueField` 读修饰键/键码，`CGEventSourceKeyState`/`CGEventSourceFlagsState`/`CGEventSourceStateCombinedSessionState` 读物理按键会话状态，匹配到已配置绑定后经 `dispatch_binding_event_locked` 派发；对"仅修饰键"组合（如双击 Option）用 `should_defer_modifier_trigger` + `prepare_pending_modifier_trigger_locked` 做延迟判定防误触，并 `spawn_hold_safety_timer` 起安全计时器防止按键长按不放导致状态卡死 | — |
| `dispatch_binding_event_locked` | 命中绑定后的实际派发点，最终驱动到 `runtime::handle_trigger_action` | — |
| `tap_watchdog_cb` | 周期性检查 `CGEventTapIsEnabled`；macOS 在事件处理耗时过长时会自动静默禁用某个 tap，本回调检测到被禁用后调用 `CGEventTapEnable` 重新启用，是针对该 macOS 已知行为的自愈机制 | — |
| `capture_trigger_key` | 热键录制模式入口：`set_active_capture` 标记录制会话进行中，等待用户按下组合键 | — |
| `capture_callback` | 录制模式下的事件回调：读到组合键后用 `trigger_kind`/`trigger_label`/`format_combo_label` 生成可读标签，随后 `disable_tap_then_stop_current_runloop` 结束这次临时监听 | — |
| `cancel_trigger_capture` | 取消一次进行中的热键录制（超时或用户取消），复位 `ACTIVE_CAPTURE` 全局状态 | — |
| `disable_tap_then_stop_current_runloop` | 禁用当前 tap 并停止其所在线程的 CFRunLoop，用于正常收尾与录制取消两种路径 | — |
| `set_active_capture` | 维护 `ACTIVE_CAPTURE` 全局状态，防止同时出现多个热键录制会话 | — |
| `trigger_kind` / `trigger_label` / `format_combo_label` | 热键绑定的分类（单键/修饰键组合/双击等）与人类可读标签生成 | — |

---

## 12. `platform::text_injection`（10 文件）— macOS 无障碍文本注入

**module_roles**：把语音识别/LLM 润色后的最终文本，注入到用户当前正在使用的任意 App 的聚焦输入框里；核心策略是"写剪贴板 + 模拟 Cmd+V 粘贴"而非直接操作辅助功能（Accessibility，即 macOS 面向读屏器/自动化工具开放的 UI 元素读写接口）属性，兼顾兼容性与速度，同时用 Accessibility API 采集上下文用于判定注入是否可行。

**key_functions**：

| 函数 | 行为 | destructive |
|---|---|---|
| `inject_text` | 核心注入实现：先 `AXIsProcessTrusted` 确认已获得辅助功能权限，取当前系统通用剪贴板（`NSPasteboard`）现有内容做备份，写入待注入文本，随后用 `CGEventSourceCreate` + `CGEventCreateKeyboardEvent` + `CGEventSetFlags` + `CGEventPost` 合成一次 ⌘V 按键事件投递给系统，模拟"粘贴"动作完成注入 | 覆盖系统剪贴板内容（注入流程内的临时副作用，随后会用采集到的原剪贴板内容做恢复） |
| `pasteboard_write_string` / `pasteboard_current_string` | 写入 / 读取系统剪贴板字符串，分别用于"写入待注入文本"和"注入前备份原内容以便注入后恢复" | 覆盖剪贴板内容（临时） |
| `capture_context` | 注入前的上下文采集：结合 `frontmost_application_info` 与剪贴板读写，判断当前前台 App 与光标上下文是否具备可注入条件 | — |
| `capture_focused_element_snapshot` | 用 Accessibility API（`AXUIElementCreateSystemWide`/`CreateApplication`、`AXUIElementCopyAttributeValue`）取当前系统级聚焦元素快照，必要时 `AXUIElementSetMessagingTimeout` 防止对无响应 App 的 AX 调用卡死整个注入流程 | — |
| `find_editable_child` | 在聚焦元素的 `AXChildren` 树里递归寻找真正可编辑的子元素（很多 App 的可聚焦容器本身不可编辑，编辑区是其子节点） | — |
| `ax_copy_string_attr` | 通用的 Accessibility 字符串属性读取封装（`AXUIElementCopyAttributeValue` + `CFString` 转换） | — |
| `frontmost_application_info` / `frontmost_application_pid` | 用 objc2/AppKit（`NSWorkspace` 风格接口，经 objc2 selector 缓存调用）读取当前最前台应用的信息与进程 PID | — |
| `snapshot_from_element` | 把一个 `AXUIElement` 转换为内部快照结构（角色、可编辑性、选区范围等），供 `capture_focused_element_snapshot` 使用 | — |

---

## 附：跨模块调用关系速览

```text
platform::voice_trigger_macos::listen_callback  (全局热键事件)
        └─> dispatch_binding_event_locked
                └─> core::voice::runtime::handle_trigger_action
                        ├─> start_capture ──> try_start_via_standby / start_capture_legacy
                        │        ├─> core::voice::asr::load_saved_config（选 ASR 引擎+凭据）
                        │        ├─> core::voice::workspace::load_workspace（词表/模板）
                        │        └─> core::voice::aliyun_asr::AliyunAsrSession::connect（若选阿里云引擎）
                        └─> stop_capture ──> send_standby_stop_command
                                └─> apply_sidecar_event（识别结果/错误回调）
                                        ├─> core::voice::llm::call_llm[_streaming]（可选 LLM 润色）
                                        ├─> runtime::overlay::show/hide_voice_overlay（UI 反馈）
                                        ├─> runtime::tray::update_tray_recording_state（菜单栏图标）
                                        └─> platform::text_injection::inject_text（最终文本注入）
```

commands::voice / commands::voice_runtime 是前端 `invoke()` 落地点，均为 core 层对应函数的一层薄封装，不承载额外业务逻辑（仅做参数适配与 Tauri State 获取）。
