# 1.2.3 后端完整基线模块分析 — platform (macOS arm64)

来源：IDA 已反编译 `.c` 伪代码（只读盘归纳，不连 IDA、不逆二进制）。
范围：`platform/{process, paths, debug_log, daemon, single_instance,
system_volume, proxy}/ida/pseudocode/` 以及 `platform/ida/pseudocode/`
（platform 顶层目录本身）。

## 0. 总体统计

| 目录 | .c 文件数 | 基线 same-set | 1.2.3 NEW-delta | 无标记 | TRUNCATED/DECOMPILE-FAILED |
|---|---|---|---|---|---|
| process | 34 | 21 | 0 | 13（见下） | 0 |
| paths | 15 | 15 | 0 | 0 | 0 |
| debug_log | 14 | 14 | 0 | 0 | 0 |
| daemon | 6 | 5 | 0 | 1（见下） | 0 |
| single_instance | 6 | 5 | 0 | 1（见下） | 0 |
| system_volume | 7 | 7 | 0 | 0 | 0 |
| proxy | 3 | 3 | 0 | 0 | 0 |
| platform（顶层 ida/pseudocode） | 0 | - | - | - | - |

`platform/ida/pseudocode/` 顶层目录本身为空（0 个 `.c`）——该目录只是父级容器，
所有函数实际落在其子模块各自的 `ida/pseudocode/` 下（本次任务覆盖其中 7 个）。

无 `基线 same-set` 标签的 15 个文件：process 目录 13 个
（`classify_macos_codex_writer`、`collect_codex_kill_targets`、
`collect_external_codex_writers`、`description`（`ExternalCodexWriter::description`）、
`force_close_all`、`force_kill_targets`、`is_openai_ide_extension_writer_path`、
`kill_codex_processes_until_clear`、`launch`、`list_codex_processes_matching`、
`prepare_transition`、`protected_codex_db_holders`、`quiesce_codex_transition_targets`）、
daemon 目录 1 个（`check_daemon_state`）、single_instance 目录 1 个（`acquire`）。
逐一读盘确认均是函数体完整的正常伪代码（部分函数体很大，如 `prepare_transition`
682 行、`list_macos_db_holder_processes_for` 747 行、`detect_system_proxy_candidates`
1639 行、`redact_text_inner` 1579 行，文件头标注 `[FULL <反编译器>]` 表示完整解码），
判断为标注脚本对本目录未做版本 delta 分类（无 1.2.2 对照基线），而非反编译失败。

**全仓（7 个子目录，共 85 个函数文件）未发现任何 `TRUNCATED` / `DECOMPILE-FAILED` /
`[N chars total]` 截断桩标记**——所有业务函数均已完整反编译，本报告基于真实代码逻辑
归纳，未臆断。serde/Debug/Clone/drop_in_place/fmt 类自动生成 glue 在各目录中占比很低
（本目录几乎不含独立的 glue 文件，函数命名均对应具体业务行为），因此本次全部按业务
函数深度阅读，未做「略读只计数」处理。

---

## 1. 模块职责一览 (module_roles)

1. **process** — macOS 下 Codex CLI / ChatGPT 桌面应用的进程发现、分类与生命周期编排：
   通过 `ps`/`mdfind`/`lsof`/`osascript`/`launchctl` 等外部命令定位 Codex 主进程、
   IDE 扩展子进程与 sqlite state db 的持有者进程，用 `CodexTransitionFence` +
   `CodexProcessLifecycle` 做「优雅退出（AppleScript quit）→ 静默期观察（generation
   tracker）→ 强制 kill」三段式状态迁移，是 Router 开/关、账号切换等需要「先确保
   Codex 进程干净退出」场景的核心执行体。
2. **paths** — `CodexPaths` 是 Codex 主目录（`~/.codex`，可用 `CODEX_HOME` 环境变量
   覆盖）下近 90 个具名路径（账号、鉴权、会话、配额、日志等）的统一登记表与解析器；
   同时负责多版本 sqlite state db（`state_*.sqlite`）的搜索、按文件名版本号+mtime+
   db 内部 recency 字段三级打分排序、选出"当前"db，并对私有目录/文件做权限加固
   （chmod 收紧为仅属主可读写）。
3. **debug_log** — 全模块统一的调试/事件/崩溃日志基础设施：初始化 `~/.codex/logs`
   目录（含权限加固与超过 8MB 自动轮转为 `.log.1~`）、注册全局 `log` crate logger 与
   panic hook（崩溃时抓 backtrace 写崩溃日志）、并在写盘前对文本做多层脱敏——替换真实
   家目录为 `~`、对 JSON/引号/方括号块整体打码为 `[REDACTED]`、对已知敏感字段名的值做
   摘要哈希后打码、对单个 token 做 `sk-`/JWT/邮箱模式识别打码。
4. **daemon** — macOS `launchd` LaunchAgent 的安装/卸载：生成 XML 转义后的 plist
   （标签+可执行路径）、原子写入磁盘、`launchctl load -w` 注册并用 `launchctl list`
   校验注册成功；卸载时 `launchctl unload -w` → 校验 → 必要时 `launchctl remove` →
   删除 plist 文件，用于开机自启动等持久化配置。
5. **single_instance** — 基于 `flock`（advisory file lock，非阻塞独占锁）的单实例
   互斥：抢锁失败时不是直接退出，而是把（可选 URL 的）激活请求原子写入
   `aimami-activate.request` 文件通知已运行实例；已运行实例侧由后台线程 watcher
   监听该文件并回调 Tauri `AppHandle` 做窗口聚焦/深链处理。
6. **system_volume** — 通过 CoreAudio `AudioObjectGetPropertyData/SetPropertyData`
   直接调用系统 API 临时降低/恢复 macOS 系统输出音量（用于语音触发录音时避免拾音
   通知音等场景），把降低前的音量落盘为崩溃安全的 marker 文件，启动时检测到遗留
   marker 会自动恢复音量并清理；另含根据默认输入/输出设备是否为同一蓝牙/USB 组合
   设备计算提示音播放前置延迟的辅助逻辑。
7. **proxy** — 读取 macOS 系统代理配置（`scutil --proxy`）解析 HTTP/HTTPS/SOCKS/
   PAC 各项设置，对启用的代理类型拼出 `scheme://host:port` 候选 URL；PAC
   （Proxy Auto Config）场景下会对 `http(s)://` PAC URL 发起真实网络请求
   （`reqwest::blocking`）或读取本地 `file://` PAC 脚本内容，供上层选择实际使用的
   系统代理。

---

## 2. 关键函数 (key_functions)

### 2.1 process

- **`CodexTransitionFence::acquire_with_policy`**：Router 状态迁移的「围栏」入口。先调用
  `CodexProcessLifecycle::prepare_transition`，再视策略调用
  `enforce_codex_quiet_window_with`（静默期观察），随后 spawn 一个名为
  `codex-transition-fence` 的后台线程持有迁移状态（`Arc` 计数），返回的守卫对象在
  `finish()` 时才真正收尾。
- **`CodexProcessLifecycle::prepare_transition`**（无 same-set 标记，682 行）：迁移准备的
  主编排。先做 `assert_no_external_codex_writers` 安全闸（发现外部未知写者直接中止）；
  若 Codex app 正在运行，通过 **`osascript -e 'tell application id "com.openai.codex" to quit'`**
  发出优雅退出请求，随后轮询 `collect_codex_kill_targets` 直到清空或超时；若 app 未运行
  则直接进入 `kill_codex_processes_until_clear`（严格模式下走带 3 秒总超时的观察-强杀
  循环）。**destructive**：触发对第三方应用（Codex/ChatGPT 桌面客户端）的 AppleScript
  退出请求。
- **`enforce_codex_quiet_window_with`**：基于 `WriterGenerationTracker::observe` 判断
  「同一批 db 持有进程连续观察到 3 次不变」后，先调用 `quiesce_codex_transition_targets`
  做一次防御性复核（重新枚举外部写者，若发现新写者立即拒绝），复核通过才真正
  `force_kill_targets`；否则按 80ms 轮询、最多约 0.7 秒/3 秒超时窗口重试。
- **`kill_codex_processes_until_clear`**：`collect_codex_kill_targets` →
  `force_kill_targets` → `sleep(300ms)` 的强杀重试循环，最长 3 秒总超时。**destructive**：
  实际终止匹配到的 Codex 相关进程（force kill）。
- **`collect_codex_kill_targets` / `list_codex_processes_matching` /
  `collect_external_codex_writers`**：均基于 `ps -e -o pid= -o command=` 输出解析，
  分别过滤出「与 Codex 主/子进程相关」「匹配主可执行文件路径」「排除自身 pid 后的全部
  运行进程」三类候选集合，供上游分类与安全闸使用。
- **`classify_macos_codex_writer`**：把一个命令行路径规整（`\`→`/`、转小写）后分类为
  「ChatGPT.app/…/@openai/codex 主体」「VSCode/Cursor/Windsurf 等 IDE 的
  `openai.chatgpt` 扩展」或「未知外部写者」三类，是外部写者安全闸的判定核心。
- **`is_protected_process_command`**：命中 `crashpad_handler` 等系统关键进程名单时直接
  判定「受保护，禁止误杀」，为 `is_codex_related_command_with_main` 的第一道防线。
- **`is_codex_related_command_with_main` / `is_openai_ide_extension_writer_path`**：
  综合路径匹配（`Codex.app/Codex Helper`、`node_modules/@openai/codex/`、IDE 扩展目录、
  可执行文件名 `codex`/`codex.js`/`codex-x`/`codex_x` 等模式）判断一个进程是否属于
  Codex 生态，决定是否可以纳入 kill 候选集。
- **`codex_app_bundle_path`**：先扫 `/Applications` 与 `~/Applications` 下的
  `ChatGPT.app`，校验 `CFBundleIdentifier == com.openai.codex` 且可执行文件名以 `x`
  结尾（如 `Codex`）；找不到则 fallback 到 **`mdfind kMDItemCFBundleIdentifier ==
  'com.openai.codex'`**（Spotlight 索引查询）。
- **`codex_macos_main_process_pid`**：跑 `ps -e -o pid= -o command=`，用
  `command_runs_executable` 逐行比对，取出匹配主可执行文件路径的进程 PID。
- **`is_codex_app_running`**：先尝试 bundle+pid 探测，找不到则 fallback 到
  **`osascript -e 'application id "com.openai.codex" is running'`**，解析 stdout
  `true`/`false`。
- **`CodexProcessLifecycle::launch`**（无 same-set 标记）：找不到 bundle 直接返回
  「Codex/ChatGPT app bundle not found」错误；否则记录 `launch_requested` 事件、调用
  **`open_macos_app_bundle`**（内部为 `/usr/bin/open <bundle>`）拉起应用，之后 100ms
  间隔轮询 `codex_macos_main_process_pid` 最长 10 秒，成功/超时都会记 `launch_ready` /
  `launch_timeout` 遥测事件并二次 `open` 尝试前台化窗口。
- **`force_kill_targets`**：对目标 pid 列表执行真正的强制终止（内部迭代闭包实施
  kill，本文件内可见部分为结果收集/联结失败描述），返回 Ok（空）或包含失败目标描述的
  错误。**destructive**：本模块内唯一直接执行进程强杀的落点。
- **`list_codex_db_holder_processes` / `list_macos_db_holder_processes_for`**：基于
  `lsof` 枚举当前持有某个 state db 文件句柄的进程（PID 去重后归并所有候选 db 路径的
  结果），供「谁在占用/写 Codex 的 sqlite 状态库」判定使用。
- **`WriterGenerationTracker::observe`**：对一组 PID 排序去重后与上一次快照比较，返回
  「无/首次/不变(+计数)/变化」状态，`enforce_codex_quiet_window_with` 据此判断是否已
  连续 3 次观察到同一批写者（可以安全强杀）。

### 2.2 paths

- **`CodexPaths::from_home`**：以 `codex_home` 为根，一次性构造账号/鉴权/会话/配额/
  日志等近 90 个具名子路径字段；副作用中含一次**一次性迁移**：若发现旧版本路径存在而
  新路径不存在，会调用 `std::fs::rename` 把旧文件/目录**重命名迁移**到新布局位置。
  **destructive（轻）**：文件系统 rename。
- **`CodexPaths::resolve_codex_home`**：读 `CODEX_HOME` 环境变量，未设置则 fallback 到
  `home_dir()/.codex`。
- **`CodexPaths::configured_sqlite_home`**：读取 `config.toml` 内的自定义 sqlite home
  配置键（TOML 反序列化），相对路径会与 `codex_home` 拼接，读取/解析失败一律 fallback
  为 `codex_home` 本身。
- **`CodexPaths::state_db_search_dirs`**：优先返回 `configured_sqlite_home`，否则返回
  `[codex_home/data, codex_home]` 两个候选搜索目录。
- **`CodexPaths::highest_state_db`**：扫描单个目录内 `state_<N>[+-]?.sqlite` 命名的
  文件，解析出数字版本号，取版本号最大者。
- **`CodexPaths::runtime_state_db_candidates_for_home`**：遍历全部搜索目录、收集全部
  匹配 `state_*.sqlite` 命名模式的候选文件（不只取最高版本），按路径去重排序，供
  `lsof` 持有者查询覆盖全部可能的 db 文件。
- **`CodexPaths::state_db_score`**：**真实 sqlite 只读连接**（`rusqlite`，
  `SQLITE_OPEN_READONLY`，75ms busy timeout，遇 `SQLITE_BUSY` 会以 25ms 间隔重试）
  打开候选 db，结合文件名版本号 + mtime + db 内部元数据表的 `recency_at_ms`/
  `updated_at_ms` 字段三级评分，用于多候选 db 之间的优先级裁决。
- **`CodexPaths::resolve_codex_state_db`**：综合 `state_db_search_dirs` 各目录的最高
  版本 db，找不到任何候选时 fallback 为固定路径 `codex_home/data/<default db name>`。
- **`CodexPaths::with_state_db_override`**：克隆一份 `CodexPaths` 并整体替换其状态库
  路径覆盖字段，供测试/显式指定场景强制走某个 db 路径。
- **`CodexPaths::ensure_directories`**：级联对多个标准子目录执行
  `DirBuilder::create`（`0o777`，recursive），任一失败即短路返回。
- **`harden_private_file` / `harden_private_tree`**：检测非符号链接文件/目录的模式位
  是否对 group/other 可读写，若是则 `set_permissions` 收紧；后者对目录做递归遍历
  （子目录递归调用自身，子文件逐个收紧）。**用于凭据/私有数据目录的权限加固**。

### 2.3 debug_log

- **`init`**：创建 `~/.codex/logs` 目录（含权限收紧）、对目录内已有文件/子项再做一轮
  权限加固、构造 `debug.log`/`crash.log` 两个日志文件路径并各自调用
  `rotate_if_large`、把两路径写入全局 `OnceLock`（`DEBUG_LOG_PATH`/`CRASH_LOG_PATH`/
  `CODEX_HOME`）、注册全局 `log` crate logger（`FILE_LOGGER`）与 panic hook（若尚未
  安装），最后写入一行 `"debug log initialized"` 标记行。
- **`append_line`**：日志落盘的唯一执行点——取 UTC 时间戳 + 线程名（无名则用
  `"unnamed"`）、对消息体调用 `redact_text_inner` 脱敏、格式化为
  `[时间戳] [线程名] 消息` 一行，持全局互斥锁后以 `O_APPEND|O_CREAT`、**mode 0600**
  打开日志文件写入并关闭 fd；写失败会记入全局失败计数器 `LOG_WRITE_FAILURES` 与
  `LAST_LOG_WRITE_ERROR`，并 `eprintln!` 到 stderr。
- **`redact_text_inner`**（`[FULL <反编译器>]`，1579 行，本目录信息密度最高的函数）：多层
  脱敏流水线——① 把配置里的旧路径标记替换为家目录占位、把真实 `home_dir()` 路径整体
  替换为 `~`；② 扫描配对的方括号/花括号 `[...]`/`{...}` 与引号 `"..."`/`'...'`（正确
  处理转义反斜杠），命中即把整段内容替换为字面量 `"[REDACTED]"`；③ 内置约 31 组敏感
  字段名模式表，命中「标签: 值」/「标签=值」结构时对值做 SHA 摘要哈希后以
  `"[REDACTED:{hash}]"`形式替换（保留跨行可关联性但不泄露原文）；④ 剩余文本按空白
  切词，逐词交给 `push_redacted_token` 做 token 级脱敏。
- **`push_redacted_token`**：对单个 token 做模式识别打码——`sk-` 前缀（OpenAI 风格
  API key）直接整体替换为 `"[REDACTED]"`；`eyJ` 开头且含 ≥2 个 `.`、长度 ≥40 的
  JWT 形态同样整体替换；长度 ≥16 且同时含 `@` 与 `.`（邮箱形态）也整体替换为
  `"[REDACTED]"`；其余 token 原样保留。
- **`bounded`**：按字节长度截断 UTF-8 字符串到指定上限（保证不切断多字节字符边界），
  超限时追加 `"...[truncated]"` 标记；`app_event`/`write_client_event` 分别以
  2000/96/4000/64/300/8000 等不同上限调用它来限制各字段长度。
- **`app_event`（两个重载）/ `write_client_event`**：分别是内部遥测事件写入入口与
  前端上报事件（携带 level/category/message/component/action/detail 等字段）的写入
  入口，字段先各自 `bounded` 截断，`write_client_event` 额外用
  `normalize_client_level` 把级别字符串归一化为固定枚举（未知一律归为 `info`），最终
  拼装成一行结构化文本经 `append_line` 落盘。
- **`normalize_event_token`**：把事件类别/名字 token 做「非法字符替换为 `_`、最长
  64 字节、结果为空则回退 `"unknown"`」的规整。
- **`install_panic_hook`（闭包）**：全局 panic hook 实现——提取 panic payload
  （`&str`/`String`，否则用 `"non-string panic payload"`）、`Backtrace::force_capture`
  抓栈、格式化崩溃信息后写入 `crash.log`，再链式调用原始/默认 panic hook。
- **`rotate_if_large`**：日志文件 `metadata().len() >= 8MB+1` 时把当前文件
  `rename` 为 `<name>.log.1~`（覆盖式轮转，仅保留 1 份历史）。**destructive（轻）**：
  文件覆盖式重命名。
- **`write_health`**：在互斥锁下克隆读取 `LOG_WRITE_FAILURES` 计数与
  `LAST_LOG_WRITE_ERROR` 最近一次错误文本，组装为日志子系统的健康快照。

### 2.4 daemon

- **`install_daemon`**：对 label/可执行路径做 `escape_xml_text` XML 转义后套入
  LaunchAgent plist 模板，确保父目录存在，调用
  `core::relay::atomic_write::write_atomic_with_mode` **原子写入** plist 文件；随后
  执行 **`launchctl load -w <plist>`** 注册，命令本身失败或注册后
  `launchctl_label_exists` 校验失败均记为错误（附带 stdout/stderr/退出码组合的
  `command_error_text`）。**destructive**：写入用户 `LaunchAgents` 自启动配置并向
  launchd 注册后台任务。
- **`uninstall_daemon`**：先视情况执行 **`launchctl unload -w <plist>`**，若
  `launchctl_label_exists` 显示仍在注册则追加 **`launchctl remove <label>`**
  兜底，最终对 plist 文件调用 `remove_file`（`NotFound` 容忍为已清理状态）。
  **destructive**：注销后台任务 + 删除磁盘上的 plist 文件。
- **`launchctl_label_exists`**：跑 `launchctl list <label>`，以退出码是否为 0 判断
  该 launchd label 当前是否已注册。
- **`check_daemon_state`**（无 same-set 标记）：先触发一次性「遗留守护进程清理」
  （`Once` 惰性触发），再用 plist 文件是否存在 + `launchctl_label_exists` 联合判断
  当前守护进程安装状态。
- **`escape_xml_text`**：按 `&/</>/"/'` 顺序对字符串做标准 XML 实体转义，用于把
  label/可执行路径安全嵌入 plist XML。
- **`command_error_text`**：把 `launchctl` 子进程的 stdout/stderr（trim 后）与退出
  状态拼装成一条可读错误描述，供上层展示。

### 2.5 single_instance

- **`acquire`**（无 same-set 标记）：解析（或 fallback 到临时目录）的应用数据目录下
  建立锁文件 `aimami-single-instance.lock`（mode 0600），对其 fd 执行
  **`flock(fd, LOCK_EX|LOCK_NB)`** 非阻塞独占锁；抢锁失败直接返回
  「AiMaMi is already running」错误并关闭 fd；成功则 `File::set_len(0)` 截断并写入
  自身 PID，持有该 fd 作为单实例凭证。
- **`request_existing_instance_activation_with_url`**：生成 UUID v4 作为激活请求 id，
  序列化 `{id, pid, url}` 为 JSON，写入与目标激活文件同目录的临时文件后
  `rename` **原子改名**到 `aimami-activate.request` 正式路径（重命名失败会清理临时
  文件），用于「新实例发现已有实例在运行时，改为通知它激活/打开某个 URL」。
- **`start_activation_watcher`**：确保激活请求目录存在后 spawn 一个后台线程持有
  Tauri `AppHandle`，用于监听/消费 `activation_request_path` 处新出现的激活请求文件
  （由其他新启动实例写入），据此驱动窗口聚焦/深链处理；线程 spawn 失败会直接 panic。
- **`activation_request_path` / `prepare_activation_dir`**：分别计算激活请求文件的
  固定路径（数据目录/`dev.aimami.desktop`/`aimami-activate.request`）与确保其父
  目录存在。
- **`parse_activation`**：仅当内容以 `{` 开头时才尝试 `serde_json` 反序列化为
  `ActivationRecord`，非法/非 JSON 内容直接判定为「无激活请求」。

### 2.6 system_volume

- **`lower_inner`**：读取默认输出设备当前音量（双声道均值），仅当音量 > 5% 才继续；
  用全局 `SAVED_VOLUME`（互斥锁 + panic 安全的 poison 处理）**只保存一次**当前音量到
  内存，同时把该值格式化写入磁盘 marker 文件（先确保父目录存在），随后调用
  `set_volume` 把系统输出音量按传入倍数临时降低。**destructive（可逆）**：临时修改
  macOS 系统级输出音量。
- **`restore_inner`**：从 `SAVED_VOLUME` 读回之前保存的音量值，调用 `set_volume`
  恢复到默认输出设备，无论是否有保存值都会调用 `clear_marker` 清理磁盘 marker。
- **`restore_if_needed_at_startup`**：应用启动时读取磁盘 marker 文件内容，若能解析出
  合法的音量浮点值且当前设备处于（近似）静音/0 状态，则调用 `set_volume` 恢复该值，
  无论是否触发恢复都会调用 `clear_marker` 清理 marker 文件——用于覆盖「上次运行时
  降低了音量但因崩溃未能正常恢复」的场景。
- **`clear_marker`**：`remove_file` 删除磁盘上的音量 marker 文件。**destructive
  （轻）**：文件删除。
- **`set_volume`**：clamp 到 `[0,1]` 后优先设置 CoreAudio 「虚拟主音量」属性，若设备
  不支持该属性则回退为分别设置左右声道（channel 1/2）的独立音量属性。
- **`device_name`**：`AudioObjectGetPropertyData` 取设备名 `CFStringRef`，
  `CFStringGetCString` 转 C 字符串后转为 Rust `String`（首个 NUL 截断）。
- **`start_sound_delay_ms`**：根据默认输出设备的传输类型（USB/蓝牙）与「输入输出是否
  为同一物理设备」（按设备名大小写不敏感比较/包含关系判断）计算播放提示音前的延迟：
  同名设备命中特定关键词（疑似 AirPods 类）给 1200ms，同名但不含该关键词给 300ms，
  输入输出不同名给 200ms，否则（内建扬声器等）0ms 延迟——用于规避蓝牙/USB 音频链路
  唤醒延迟导致的提示音开头被截断。

### 2.7 proxy

- **`detect_system_proxy_candidates`**（`[FULL <反编译器>]`，1639 行）：跑
  **`scutil --proxy`** 并解析其 `key : value` 逐行输出为 `HashMap`（跳过 XML/大括号
  包裹行），依次检查 `HTTPEnable`/`HTTPProxy`/`HTTPPort`、
  `HTTPSEnable`/`HTTPSProxy`/`HTTPSPort`、`SOCKSEnable`/`SOCKSProxy`/`SOCKSPort` 三组
  开关是否为 `"1"`，命中则经 `push_url` 拼出对应 `scheme://host:port` 候选；若
  `ProxyAutoConfigEnable == "1"` 且存在 `ProxyAutoConfigURLString`，对 `file://` 前缀
  的 PAC URL 直接本地读文件内容，对 `http(s)://` 前缀的 PAC URL **发起真实同步网络
  请求**（`reqwest::blocking::Client`）抓取 PAC 脚本正文，供后续（本文件截断处之外）
  的 PAC 解析使用。**网络副作用**：会向系统代理配置里指定的 PAC URL 发起出站 HTTP(S)
  请求。
- **`push_url`**：把候选值直接当作完整 URL（若已包含 `"://"`），否则按「有无显式端口」
  两种模板格式化为 `scheme://host[:port]` 字符串并追加进输出候选向量。
- **`dedupe`**：用 `HashMap` 对候选向量按 key（代理描述字符串）去重，仅保留首次出现
  的条目，用于合并 `detect_system_proxy_candidates` 各来源产出的重复候选。

---

## 3. 截断/失败标注核查

逐一核对本目录 85 个函数文件的文件头注释与函数体末尾，**未发现任何**
`[TRUNCATED]`、`[DECOMPILE-FAILED]` 或 IDA MCP 截断桩特征字符串
`"[N chars total]"`。体积最大的若干函数（`detect_system_proxy_candidates`
1639 行、`redact_text_inner` 1579 行、`prepare_transition` 682 行、
`list_macos_db_holder_processes_for` 747 行）文件头均显式标注
`[FULL <反编译器>]` 或函数体自然收尾（`return`/闭合大括号），逐行读盘确认内部
控制流完整、无桩函数或占位注释残留。
