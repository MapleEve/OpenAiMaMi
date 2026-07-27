# AiMaMi 1.2.3 macOS-arm64 后端基线 — run-app-misc 模块职责分析

> 任务编号 1.2.3 后端完整基线模块分析（run-app-misc）。
> 方法：只读已由 IDA 反编译好的 `.c` 伪代码（文件头注释含 mangled 符号名 + 地址 + `基线 same-set` / `NEW-delta` 标记），不连 IDA、不做二次反编译，只做代码阅读与文档整理。
> 授权范围：本仓/本机所有者对 AiMaMi（自家/已授权产品）下达的重建授权任务，产出仅用于内部架构基线文档。
> 覆盖目录：`run/`、`toplevel/`、`install_macos_quit_guard/`、`core/debug_bundle/`、`core/analytics/`、`core/mcp/`、`core/skills/`、`core/`（根级）共 8 个任务给定路径，全部位于 `raw/aimami/1.2.3/macos-arm64/`。

## 0. 目录清单与偏差说明

| 任务给定路径 | 实际状态 | .c 文件数 |
|---|---|---|
| `run/ida/pseudocode` | 存在 | 89 |
| `toplevel/ida/pseudocode` | 存在但**为空** | 0 |
| `install_macos_quit_guard/ida/pseudocode` | 存在 | 2 |
| `core/debug_bundle/ida/pseudocode` | 存在 | 24 |
| `core/analytics/ida/pseudocode` | 存在 | 8 |
| `core/mcp/ida/pseudocode` | 存在 | 14 |
| `core/skills/ida/pseudocode` | 存在 | 18 |
| `core/ida/pseudocode`（core 根级） | 存在但**为空** | 0 |

`toplevel/ida/pseudocode` 与 `core/ida/pseudocode`（根级）两个目录已确认存在于文件系统但内部 0 个 `.c` 文件——这两层本身没有独立可反编译的顶层函数（例如 `mod.rs` 粘合代码被内联进各子模块，或该层尚未反编译），如实记录、不臆断内容。

有效分析文件总数：**155 个 `.c`**，覆盖 6 个真实存在且含内容的子模块。

**截断/反编译失败检查**：对全部 155 个文件头做 `TRUNCATED` / `DECOMPILE-FAILED` 关键字扫描，命中 **1 处**：

- `run/ida/pseudocode/inner_0x100571850.c` — 符号 `codexmate_lib::run::inner::{{closure}}`，文件仅 3 行，内容为 `{"addr":"0x100571850","code":null,"error":"Decompilation failed"}`，IDA 对该闭包反编译失败，无法得知其内部实现，不作臆断。

**1.2.3 相对 1.2.2 的 NEW-delta 标记**：全批共 2 个函数带 `1.2.3 NEW-delta` 头注释（IDA 函数枚举 diff，名↔地址一致）：
- `install_macos_quit_guard::application_should_terminate`（macOS 退出拦截回调，1.2.3 新增）
- `core::mcp::set_optional_string`（MCP 服务器可选字段写入/删除辅助函数，1.2.3 新增）

其余函数头注释均为 `基线 same-set`（与 1.2.2 版本对齐，非本版本新增）。

**自动生成 glue 计数（略读，不逐条展开）**：
- `run/`：89 个文件中，除 1 个带真实符号名的顶层入口（`run::h629ec01...`）与 2 个标注 `[FULL IDA decompiler]` 的大型闭包外，其余 **86 个**全部是 `codexmate_lib::run::{{closure}}::{{closure}}::hXXXXXXXX` 形态、且全部为「基线 same-set」的嵌套闭包——这是 Rust 编译器为 `tauri::generate_handler!` 宏生成的 async/命令分发状态机在编译期展开出的延续（continuation）片段，属于宏生成粘合代码而非独立业务逻辑，本次按「1 个业务实体（IPC 分发表）」统计，不逐个展开。
- `core/analytics/`：5 个 `serde_core::ser::Serialize for XxxPayload::serialize` 样板实现（`SessionStats`、`TodaySummary`、`DailyActivity`、`CachedRolloutEntry`、`UsageAnalyticsPayload`），直接按字段顺序写入序列化器，无业务判断逻辑。
- `core/debug_bundle/`：2 个 `export_debug_bundle::{{closure}}` 小闭包为 UTF-8 校验/ZipError 格式化胶水；1 个 `DebugBundlePayload::serialize` 为样板序列化。

---

## 1. run（89 文件）— Tauri 应用主入口 + IPC 命令分发表

**module_roles**：`run` 是整个 AiMaMi 后端的进程入口与「唯一实例 + IPC 分发」中枢——负责单实例互斥判定、深链接（deeplink）转发、Tauri `App` 构建（插件注册、状态管理、8MiB 大栈线程规避 Context 构建时的栈溢出）、以及宏生成的 ~150 条 Tauri 命令名到具体命令实现函数的匹配分发表；不包含具体业务命令的实现（那些实现落在 `commands/`、`core/` 等其它目录，本任务范围之外）。

**key_functions**：

| 函数 | 行为 | destructive |
|---|---|---|
| `run::h629ec01040356f4c`（顶层入口，700 行，唯一带真实符号名的非闭包函数） | 应用主入口：`CodexPaths::resolve_codex_home`/`ensure_directories` 确保配置目录存在，`harden_private_file`/`harden_private_tree` 收紧敏感文件权限；调用 `single_instance::acquire` 抢占单实例锁——**若抢占成功**（本进程是主实例）：构建 `RelayManager`，注册 `tauri_plugin_updater`/`autostart`/`deep_link`/`global_shortcut`/`dialog`/`process` 等插件与自定义 relay 插件，`manage` 注入 `VoiceRuntimeInner` 等应用状态，在独立 8MiB 栈线程中构建 Tauri `Context`（避免生成的 Context 体积过大导致主线程栈溢出），最终 `App::run` 进入事件循环；**若抢占失败**（已有实例在跑）：解析命令行参数，若首个参数以 `aimami:/` 深链接前缀开头则取出该 URL，调用 `single_instance::request_existing_instance_activation_with_url` 把 URL 转发给已运行的主实例并退出，失败时记录日志 `"[AiMaMi] failed to activate the running instance"` | 无（正常启动/转发流程） |
| `run::{{closure}}` × 2（`[FULL IDA decompiler]` 标记，`0x1000cf8f0` 2535 行、`0x100990c40` 4819 行） | `tauri::ipc::command::CommandArg::from_command` 驱动的 IPC 命令匹配闭包——即 `generate_handler!` 宏展开后的实际分发体，按命令名字符串（反编译产物中可见约 150 个拼接在一起的命令名，如 `remove_mcp_server`/`upsert_mcp_server`/`reveal_relay_api_key`/`restart_codex`/`graceful_restart_for_update`/`get_system_info`/`load_usage_analytics` 等）匹配并解出 `State<Mutex<T>>` 类型的命令参数（含中毒锁 `"poisoned lock: another task failed inside"` 的错误路径处理），再跳转到各命令的真实实现（不在本目录内） | 无（分发胶水，不含具体业务副作用） |
| 86 个 `run::{{closure}}::{{closure}}::hXXXXXXXX`（全部「基线 same-set」） | 上述两个 `[FULL IDA decompiler]` 分发闭包在编译期为每个 async 命令 / `.await` 点展开出的延续状态机片段，本质是同一条分发逻辑的不同延续位置，非独立业务函数 | — |
| `inner::{{closure}}`（`0x100571850`，**[DECOMPILE-FAILED]**） | 反编译失败，仅知其为 `run::inner` 内部闭包，具体行为未知，不作臆断 | 未知 |

---

## 2. toplevel（0 文件）

目录存在但为空，本版本反编译产物中无内容，不展开。

---

## 3. install_macos_quit_guard（2 文件）— macOS 退出拦截守卫

**module_roles**：该模块在运行时通过 Objective-C runtime 动态注入 `applicationShouldTerminate:` 方法到 `NSApplication` 代理类，拦截用户 Cmd+Q / Dock 退出等系统级退出请求，改由 Rust 侧根据 relay（中转代理）路由是否处于切换中来决定「立即允许退出」还是「先弹确认流程」，避免在路由切换/导出等敏感操作进行中被系统强行杀死进程导致状态损坏。

**key_functions**：

| 函数 | 行为 | destructive |
|---|---|---|
| `install_macos_quit_guard` | 仅在主线程（`pthread_main_np`）执行一次（`OnceLock<QUIT_GUARD_APP>` 去重）：取 `NSApplication.sharedApplication.delegate`，用 `objc_msgSend`/`class_addMethod` 把 `application_should_terminate` 注册为该 delegate 类的 `applicationShouldTerminate:` 方法实现，失败/异常路径均有 `log` 记录且不 panic 应用主流程 | 无（运行时方法注入，非文件/进程破坏性操作） |
| `application_should_terminate`（**1.2.3 NEW-delta**，vs 1.2.2 新增） | `applicationShouldTerminate:` 的实际回调体：若 `QUIT_GUARD_APP` 未安装或 `EXIT_APPROVED` 已置位则直接放行退出（返回 1/YES）；否则从 Tauri `StateManager` 取 `RelayManager`，若路由**正处于切换中**（`router_transition_in_progress`）则不打快照直接判定「需要拦截」；否则对 `RelayManager::snapshot` + `sanitize_for_export`（脱敏）取一个「退出守卫状态」标志位，写入调试事件日志（`RouterExitGuardState` debug 格式）；若判定需要拦截，调用 `request_user_quit` 转入 Rust 侧自定义退出确认流程并返回 0/NO（阻止系统立即终止应用）；否则返回 1/YES 放行 | 无（决策/转发逻辑，实际终止或阻止由系统与后续 `request_user_quit` 流程执行） |

---

## 4. core/debug_bundle（24 文件）— 支持诊断包导出（脱敏 zip）

**module_roles**：为用户/客服生成一份**严格脱敏**的诊断压缩包（`AiMaMi-debug-bundle.zip`），聚合 Codex 配置形状、账号鉴权布尔标志（不含明文密钥）、模型目录一致性核验、线程/会话 SQLite 目录健康检查、崩溃日志尾部、relay 路由不变量校验与诊断报告，供故障排查使用；核心设计是「按 key 名 + 结构递归双重脱敏」与「写盘前校验 zip 完整性、原子写入、写后核对」。

**key_functions**：

| 函数 | 行为 | destructive |
|---|---|---|
| `export_debug_bundle`（4101 行，主编排入口） | 汇总 `RelayManager::snapshot`/`sanitize_for_export`、`transition_journal::read`/`recent_failure`/`is_active_phase`、`invariants::verify_invariants_with_depth`、`codex_diagnostic::run_diagnostics_with_mode`、`list_codex_db_holder_processes`（列出占用 Codex 状态数据库的进程，辅助诊断文件锁冲突）等只读诊断数据，写入 `write_health` 健康日志，创建输出目录（`DirBuilder::_create`，仅创建不覆盖），再调用 `add_codex_files`/`add_json`/`add_text` 把 `manifest.json`、`summary.md`、`fixture/router-fixture.json`、`router/invariants.json`、`router/diagnostic-report.json`、崩溃日志尾部等写入内存中的 zip | 无（全程只读采集 + 内存 zip 组装，落盘由 `publish_debug_bundle` 负责） |
| `add_codex_files` | 依次调用 `config_shape`/`auth_shape`/`catalog_shape`/`thread_shape`/`thread_catalog_health`/`global_state_shape`/`process_shape`/`schema_shape` 八个「形状快照」函数，逐个经 `add_json` 脱敏后写入 zip 下的 `codex/*.json` 子树 | 无 |
| `redact_json_value_with_key` | 递归 JSON 脱敏引擎：对 `extraHeaders`/`headers` 形态的对象只保留 header **名称**摘要（`extra_headers_summary`/`header_names_summary`），不导出 header 值；对形如 `lastError` 的字段调用 `summarize_last_error_value` 压缩为结构化摘要；对 key 名按长度递减匹配 `authorization`/`apikey`/`token`/`secret`/`cookie`/`jwt`/`bearer` 等敏感子串，命中则整体替换为字面量 `"[REDACTED]"`；对象/数组递归重建；字符串值额外交给 `platform::debug_log::redact_text_inner` 做正文级二次脱敏（防止密钥出现在非可疑字段名的值里） | 无（脱敏是保护性操作） |
| `add_text` / `add_json` | 把已脱敏的文本/JSON 写入内存 zip（`zip::write::ZipWriter::start_file` + `write_all`） | 无 |
| `read_tail_text` | 打开日志文件；若体积 > 1MB 则 `seek` 到 `size-1MB` 只读取尾部（避免整份大日志入包），并丢弃截断处的半行，转 UTF-8（lossy）返回 | 无（只读） |
| `active_transition` | 按状态结构体中判别式字段匹配已知的「进行中」路由切换状态变体（按字节长度 8/11/14 比对），用于 `export_debug_bundle`/`skipped_transition_scan` 判断当前是否处于切换窗口 | 无 |
| `publish_debug_bundle`（394 行，真正落盘步骤） | **写盘前**：把内存 zip 字节包成 `ZipArchive` 逐条目 `by_index` 读取校验（`std::io::copy` 到临时缓冲区），任何条目读取/解压失败都收集进 `BTreeMap` 并汇总成 `"zip entries failed to verify: ..."` 错误直接返回、**不落盘**；**校验通过后**调用 `core::relay::atomic_write::write_atomic_with_mode` 原子写入目标路径（写临时文件再替换，避免半写文件）；**写盘后**再用 `std::sys::fs::metadata` 核对写入文件的实际字节数与预期长度是否一致，不一致返回错误 | 写入/覆盖用户指定的导出文件路径（原子写，非任意路径删除） |

> 术语说明：本节所称「原子写入（atomic write）」是指该项目自有的 `write_atomic_with_mode` helper——先写临时文件、成功后再替换目标文件，避免进程崩溃或写入中断导致目标文件出现半份内容；这是一种保护性写盘手段，不属于「破坏性删除」类操作。

---

## 5. core/analytics（8 文件）— 本机用量统计引擎

**module_roles**：扫描本机 `~/.codex` 会话/rollout 日志文件，增量统计使用量（会话数、每日活跃度、token 用量），供前端「今日用量摘要」「用量趋势图」展示；用互斥锁防并发扫描，用增量索引缓存避免重复解析未变更文件。

**key_functions**：

| 函数 | 行为 | destructive |
|---|---|---|
| `compute_usage_analytics`（1553 行，`[FULL IDA decompiler]`） | 持 `ANALYTICS_SCAN_LOCK` 互斥锁扫描会话目录，对每个文件按 `visit_dir` 递归遍历结果结合增量索引缓存（`CachedRolloutEntry`）跳过未修改文件；若缓存索引损坏/不合法则记录日志 `"[AiMaMi][usage-analytics] ignored invalid incremental index"` 并回退全量重扫；按 `timestamp_to_date_string` 把记录归入对应自然日桶，最终经 `atomic_write::write_atomic_with_mode` 把聚合结果原子写回本地缓存文件 | 覆盖写本地用量缓存文件（原子写，非任意删除） |
| `visit_dir`（896 行） | 递归遍历目录：对每个 `DirEntry` 取 `file_type`/`metadata`/`modified` 时间，匹配到目标日志文件后用 `OpenOptions::_open` 打开读取，供 `compute_usage_analytics` 增量比对 mtime 决定是否需要重新解析 | 无（只读遍历） |
| `timestamp_to_date_string` | 把 Unix 时间戳按本地时区转换为 `%Y-%m-%d` 格式的日期字符串，用于按天分桶统计 | 无 |
| 5 个 `serialize`（`SessionStats`/`TodaySummary`/`DailyActivity`/`CachedRolloutEntry`/`UsageAnalyticsPayload`） | `serde` 派生的样板 `Serialize` 实现，按字段顺序写出，无业务逻辑（计数即可） | — |

---

## 6. core/mcp（14 文件）— MCP 服务器配置管理（config.toml 编辑器）

**module_roles**：管理 `~/.codex/config.toml` 中 `[mcp_servers.*]` 段落的增删改查，是应用内「MCP 服务器管理」UI 的后端支撑；写入侧统一使用 `toml_edit`（保留原文件注释/格式/顺序的结构化 TOML AST 编辑库）读改写，并用「aimami-relay managed start/end（DO NOT EDIT MANUALLY）」标记块把本应用管理的段落与用户手写内容分隔开；所有写操作走 `core::relay::atomic_write::write_atomic_with_mode` 原子落盘。

**key_functions**：

| 函数 | 行为 | destructive |
|---|---|---|
| `load_mcp_servers`（1417 行） | 用轻量文本解析（`parse_mcp_section_header` + `strip_toml_comment` + `unquote_toml`，非 `toml_edit`）逐行解析 `config.toml`，抽取已配置的 MCP 服务器列表供前端展示 | 无（只读） |
| `upsert_mcp_server`（1504 行，`[FULL IDA decompiler]`） | `codex_config::read_text` 读原文 → `parse_mcp_document` 解析为 `toml_edit::Document` → `editable_mcp_server_table` 确保 `mcp_servers` 顶层表与目标服务器子表存在（若已存在同名非表类型键则报错 `"mcp_servers must be a TOML table"`）→ `replace_string_table`/`set_optional_string`/`quote_toml` 写入 name/command/args/env/url 等字段 → `insert_mcp_block`/`prepare_existing_mcp_block` 维护「DO NOT EDIT MANUALLY」标记块 → `atomic_write::write_atomic_with_mode` 整文件原子覆写 | 覆盖写 `config.toml`（原子写，新增/更新服务器条目） |
| `remove_mcp_server`（622 行） | 读原文 → 解析 → `toml_edit::Table::remove` 从内存 AST 中移除目标 `[mcp_servers.NAME]` 表 → 原子写回整份文件 | **删除**用户已配置的 MCP 服务器条目（config.toml 段落级删除） |
| `set_mcp_server_enabled` | 读原文 → 确保服务器子表存在 → 通过 `prepare_existing_mcp_block` 调整该服务器块的启用/禁用标记（管理块级别的开关，非物理删除）→ 原子写回 | 无（启用/禁用切换，非删除） |
| `set_optional_string`（**1.2.3 NEW-delta**） | 若给定值非空（`trim` 后仍有内容），用 `toml_edit::Value::from` 写入该字段；若为空，则 `toml_edit::table::Table::remove` 直接移除该键——用于可选字段（如 env/headers）「留空即删除」的语义 | 移除单个可选 TOML 键（值为空时） |
| `editable_mcp_server_table` | 确保 `mcp_servers` 顶层表存在（不存在则新建空表并插入到管理块标记下），再确保目标服务器名对应的子表存在，返回该子表的可变引用供上层写字段；顶层键存在但不是表类型时返回明确错误而非 panic | 无（结构确保，缺失时创建空表） |
| `quote_toml` / `unquote_toml` / `strip_toml_comment` / `parse_mcp_section_header` | TOML 文本层辅助：转义/反转义字符串字面量中的 `\` 与 `"`、剥离行内注释、解析 `[section.header]` 行 | — |

---

## 7. core/skills（18 文件）— Skill 导入 / 备份 / 恢复 / 删除管理

**module_roles**：管理本机已安装 skill 目录的完整生命周期——校验来源、暂存、发布（原子替换）、删除前自动备份、按备份 ID 恢复、永久清除备份；所有可变操作统一经 `lock_skill_mutations` 互斥锁串行化，路径侧对符号链接与路径穿越做了显式防御（`canonicalize`/`symlink_metadata` + 明确拒绝错误，而非静默放行），与仓库 CLAUDE.md 中「外部输入拼路径必须 canonicalize 后 starts_with 约束」的安全红线一致。

**key_functions**：

| 函数 | 行为 | destructive |
|---|---|---|
| `import_skill`（648 行，主入口） | `std::sys::fs::canonicalize` + `symlink_metadata` 校验来源路径不是符号链接（对应错误 `"Skill source must not be a symbolic link"`），校验目录含 `SKILL.md`（`"Directory must contain SKILL.md"`）；`lock_skill_mutations` 加锁后 `stage_skill_directory` 暂存到临时位置，若同名 skill 已存在则先 `backup_skill_directory` 备份旧版本，再 `publish_staged_skill` 原子替换为新内容，`load_skill_summary` 校验发布后的结果合法（否则报 `"Invalid skill after import"`） | 间接：`publish_staged_skill` 内部会 `remove_dir_all` 旧目录后 `rename` 新目录进去（发布前已由 `backup_skill_directory` 备份） |
| `remove_skill`（337 行） | 加锁 → `load_installed_skills` 定位目标 skill → **先** `backup_skill_directory`（标记原因 `"remove"`，写入 `metadata.json`）**备份整个 skill 目录** → 若目录已不存在则跳过删除视为成功，否则 `std::sys::fs::remove_dir_all` **递归删除** skill 目录 → 重新加载安装列表返回给调用方 → 解锁（含 panic 安全路径，确保锁在 panic 时也能正确释放/标记中毒） | **remove_dir_all**（删除前已自动备份，可通过 `restore_skill_backup` 撤销） |
| `delete_skill_backup`（219 行） | 加锁 → `resolve_backup_path` 按 backup id 拼出 `skill-backups/<id>` 路径 → `is_regular_directory` 校验目标是普通目录而非符号链接（`"Skill backup target must not traverse a symbolic link"`）→ `std::sys::fs::remove_dir_all` **永久删除**该份备份（不再对备份本身做二次备份）→ `load_skill_backups` 重新加载备份列表返回 | **remove_dir_all**（永久删除，无回退） |
| `restore_skill_backup`（540 行） | 加锁 → `resolve_backup_path` + `is_regular_directory` 校验 → **先** `backup_skill_directory` 备份当前 skill 状态（防止恢复操作本身不可逆）→ `stage_skill_directory` 把备份内容暂存 → `resolve_skill_target` 定位目标位置 → `publish_staged_skill` 原子替换 → `load_skill_summary` 返回恢复后的摘要 | 间接：`publish_staged_skill` 内部 `remove_dir_all`+`rename`（恢复前已自动备份当前状态） |
| `publish_staged_skill`（286 行，被 import/restore 共用的落地步骤） | `std::sys::fs::metadata` 检查目标位置是否已存在；已存在则 `remove_dir_all` 移除旧目录，再 `std::sys::fs::rename` 把暂存目录整体移动（原子性依赖同一文件系统）到目标位置；随后 `load_skill_summary` 校验，校验失败报 `"Published skill failed validation"` | **remove_dir_all**（调用方均已在此之前完成备份） |
| `backup_skill_directory`（515 行） | `copy_dir_all` 把源目录完整复制一份到临时位置，写入 `metadata.json`（记录备份原因，如 `"remove"`），再 `std::sys::fs::rename` 原子移入 `skill-backups/` 目录，产出一份可恢复快照 | 无（纯新增备份，不影响原目录） |
| `copy_dir_all`（200 行） | 递归复制目录树（文件与子目录），供 `backup_skill_directory`/`import_skill` 复用 | 无 |
| `lock_skill_mutations` | 获取全局 skill 互斥锁的 `MutexGuard`；若锁已中毒（`"Skill mutation lock is poisoned"`，即上次持锁者 panic）仍返回可继续使用的 guard 而非让调用方直接 panic，保证后续操作不会因为一次异常而永久锁死 | 无 |
| `resolve_backup_path` / `resolve_skill_target` / `is_regular_directory` | 路径拼接与合法性校验：确保 backup id / 目标名不会构造出「跳出预期根目录」或「指向符号链接」的路径（`"Skill backup contains an invalid relative path"`），是本模块路径安全的核心防线 | 无 |
| `load_installed_skills` / `load_skill_backups` / `load_skill_summary` / `scan_skills_recursive` | 只读枚举/汇总当前已安装 skill 列表、备份列表、单个 skill 的元信息摘要 | 无 |
| `stage_skill_directory` | 把候选 skill 内容复制到一个临时暂存目录，供后续 `publish_staged_skill` 原子替换使用（发布前的中间态，避免直接对生产目录做非原子的多步修改） | 无 |

---

## 附：本批「destructive」操作汇总

| 目录 | 函数 | 破坏性动作 | 是否有保护机制 |
|---|---|---|---|
| core/skills | `remove_skill` | `remove_dir_all` 删除 skill 目录 | 是（删除前自动 `backup_skill_directory`） |
| core/skills | `delete_skill_backup` | `remove_dir_all` 永久删除备份 | 否（备份本身无二次备份，设计如此） |
| core/skills | `publish_staged_skill` | `remove_dir_all` 旧目录 + `rename` 替换 | 是（调用方均先备份） |
| core/mcp | `remove_mcp_server` | 从 `config.toml` 删除 `[mcp_servers.NAME]` 段落 | 否（无自动备份，但原文件仍可从版本控制/用户记忆恢复；风险较低） |
| core/mcp | `set_optional_string` | 值为空时移除单个 TOML 键 | 否（单字段级，风险低） |
| core/debug_bundle | `publish_debug_bundle` | 原子覆写用户指定的导出文件路径 | 是（写前校验 + 原子写 + 写后核对） |
| core/analytics | `compute_usage_analytics` | 原子覆写本地用量缓存文件 | 是（原子写） |

以上均为已读代码得出的事实描述，未发现 `kill` 系统调用、`osascript`、`exit`/`process::exit`（除 `run` 模块中 Tauri Context 构建失败时的 `std::process::exit(101)` panic 退出路径）或任何网络回传用户数据的行为。
