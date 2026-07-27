# 1.2.3 后端完整基线模块分析 — account-auth

来源：`core/{auth,account_io,account_coordination,account_metadata,oauth_refresh,oauth_login,bootstrap_cache,sessions,session_analytics}/ida/pseudocode/`（全部已由 IDA 反编译为 `.c`，本次只读盘归纳，不连 IDA、不逆二进制）。

范围内共 120 个函数文件，全部为 `[FULL IDA decompiler]` 或标准完整反编译，**未发现任何 `[TRUNCATED]` / `[DECOMPILE-FAILED]` 标记**（已用 `grep -rl "TRUNCATED\|DECOMPILE-FAILED\|chars total"` 对全部 9 个目录复核，命中数为 0）。serde `Serialize`/`Deserialize` 自动生成 glue 共 6 个（auth×3、account_io×1、oauth_refresh×1、bootstrap_cache×1），已略读只计数，未逐行分析；其余 114 个函数（含 Rust 闭包）均为业务函数，已读伪代码并在下文归纳。

---

## 1. module_roles（子模块职责）

1. **auth**（26 函数）：AiMaMi 本地凭据模型层——定义/解析 `AuthFile`/`AuthTokens`/`AuthSnapshot`，做 JWT claims 解码、ChatGPT OAuth 凭据识别（真实账号 vs API Key vs AiMaMi 虚拟托管占位）、账号快照文件名去重与路径穿越防护。
2. **account_io**（18 函数）：账号快照文件的读写编排层——持久化单账号凭据（写前拷问 owner、写前 capture、失败回滚）、批量导入/导出账号（`.json` 打包）、注册表（`registry.json`）读改、账号 key 格式校验。
3. **account_coordination**（9 函数）：跨进程/跨线程互斥层——基于 OS 级 `flock`（`fs2::try_lock_exclusive`）的文件锁原语（`FileLock`/`LiveAuthLock`/`AccountDomainLock`/`AccountSnapshotLock`），20 秒超时、25ms 轮询。
4. **account_metadata**（7 函数）：ChatGPT 账号元数据/订阅信息的远程拉取与解析——HTTP 调用 OpenAI 账号/订阅接口，解析 plan、过期时间、封禁/停用标记，筛出可用账号。
5. **oauth_refresh**（11 函数）：OAuth access token 后台刷新策略引擎——身份未变更校验、与"活跃"（真实 Codex App 正在使用的）auth.json 的所有权/新鲜度比较、Codex 外部进程写入检测与避让、调用 `https://auth.openai.com/oauth/token` 刷新、原子写回。
6. **oauth_login**（7 函数）：交互式 OAuth 登录（PKCE）流程——生成 PKCE code_verifier/code_challenge、拼装授权 URL、拉起系统浏览器、起本地回调监听、code 换 token。
7. **bootstrap_cache**（6 函数）：应用启动态本地 JSON 缓存——读取/合并/写回一份 `BootstrapStatePayload`（时间戳 + 若干可选字段的增量更新），非原子写、非关键数据。
8. **sessions**（28 函数）：Codex 会话（rollout/thread）数据管理——SQLite `codex-state.db` 打开/迁移、会话列表加载、会话删除（DB 行 + rollout 文件）、会话导出为 Markdown、workspace 迁移（先备份、改 DB cwd 列、改 rollout 内嵌 cwd、失败可回滚）。
9. **session_analytics**（8 函数）：本地会话用量分析——递归遍历会话目录、解析全部会话、按日期分桶统计 token 用量、工具调用、代码改动（diff/patch）、会话数四类分析结果。

---

## 2. key_functions（关键业务函数）

### auth

- **account_snapshot_path**：为账号计算去重后的快照文件名；先按文件系统安全字符集做转义（把控制符/`/`/`|`等替换为 `_`），若目标路径已存在则加载已有文件比对字节内容，内容相同复用路径，不同则退回 `hashed_account_snapshot_path`。destructive: []
- **ensure_managed_account_snapshot_location**：对快照路径的父目录与"托管快照根目录"分别 `canonicalize` 后逐段比较（等价于路径穿越防护中的 `starts_with` 约束），确认快照路径确实落在预期根目录内，否则返回 `given path {} is outside the managed snapshot directory` 错误。destructive: []
- **hashed_account_snapshot_path**：对账号标识做摘要（`Digest::digest`）并十六进制编码，拼成兜底快照文件名，与上一个函数配合防止同名不同账号互相覆盖。destructive: []
- **is_aimami_managed_virtual_auth**：判定一份 `AuthFile` 是否为 AiMaMi 注入的"虚拟托管占位"凭据（非真实 ChatGPT 账号）——解码 id_token/access_token JWT claims，查 `chatgpt_user_id`/`chatgpt_account_user_id` 等字段并比对魔数后缀标记。destructive: []
- **is_switchable_oauth_auth** / **is_api_key_auth**：分别判定凭据是否为"可切换的真实 ChatGPT OAuth 会话"（JWT 至少 3 段）与"API Key 模式"（type 字段大小写不敏感匹配 `apikey`），用于分流账号导入/持久化逻辑。destructive: []
- **same_real_account_identity**：两份 AuthFile 若均非虚拟占位，分别生成 `AuthSnapshot` 并 `memcmp` 账号标识字节，判断是否指向同一真实账号。destructive: []
- **make_auth_snapshot** / **make_api_request_context**：从 `AuthFile` 解码 JWT claims，提取 `chatgpt_user_id`/`plan_type`/`subscription_active_until`/`email` 等字段，分别构建 UI 展示用快照与调用账号相关 API 的请求上下文；虚拟占位账号会直接返回 `auth.json contains AiMaMi managed virtual auth; not a real account` 错误。destructive: []
- **build_chatgpt_auth_from_oauth_tokens**：OAuth token 响应（access_token/refresh_token/id_token）校验非空后解码两份 JWT claims，识别虚拟占位标记，提取 `exp` 计算过期时间戳（chrono 转换），组装最终 `ChatGptAuth`/`last_refresh` 字段。destructive: []
- **load_auth_file**：`fs::read_to_string` 读 `auth.json` 后用 `serde_json` 按字段流式解析为 `AuthFile`，IO/解析失败返回 `CoreError`。destructive: []

### account_io

- **SnapshotWriteRecord::capture**：写快照文件前先 `fs::read` 现有内容（若存在），连同账号 key、快照路径、注册表路径打包成"写前状态"，供失败时回滚使用。destructive: []
- **failure_after_snapshot_writes**：批量账号写入失败后的回滚器——重新拿 `snapshot`/`oauth-refresh` 锁，逐条比对写入记录的"写前字节"与磁盘当前内容，仍一致则要么 `remove_file`（该文件是本次操作新建的）要么 `write_atomic_with_mode` 恢复成写前内容；日志记录失败条目数。destructive: ["remove_file(仅回滚本次新建的快照文件)"]
- **ensure_existing_snapshot_owned_by**：写入前的所有权校验——若目标快照文件已存在，加载并要求其是"可切换的真实 OAuth 凭据"（否则拒绝覆盖 API Key/虚拟凭据，报 `Existing account snapshot is not a switchable ChatGPT OAuth credential`），再比对账号标识字节，不一致报 `Existing account snapshot belongs to a different account`，阻止跨账号误覆盖。destructive: []
- **persist_account_auth**：保存单个账号的完整主流程——`ensure_directories` → 校验必须是真实 OAuth 凭据（拒绝 API Key/虚拟占位，报 `Only real ChatGPT OAuth credentials can be added as accounts`）→ 生成快照/锁路径 → 依次 `FileLock`/`AccountDomainLock` 加锁 → `ensure_existing_snapshot_owned_by` → 读注册表 → 读当前"生效活跃账号 key" → `SnapshotWriteRecord::capture` → `write_atomic_with_mode` 落盘 → `Repository::rebuild_registry_with_policy` 重建注册表 → 出错调用 `failure_after_snapshot_writes` 回滚。destructive: []
- **is_valid_account_key**：账号 key 格式与路径穿越防护——裁剪空白后拒绝控制字符、`/`、`\`，要求长度 ≤256，且按 `:` 拆分恰好两个非空段。destructive: []
- **export_accounts** / **import_accounts**：批量导出为单一 `.json` 包（`aimami-accounts-export`，无可导出账号时报 `No accounts to export`/`No exportable accounts...`）、批量导入解析（结果标记含 `ACCOUNT_MISSING_TOKEN`/`ACTIVE_ACCOUNT_PROTECTED`/`CONFLICT_SKIPPED`/`INVALID_ACCOUNT_KEY`/`UNSUPPORTED_AUTH_MODE` 等冲突/跳过原因）。destructive: []
- **preview_import** / **parse_import_file** / **validate_import_display_fields**：导入前预览（读注册表 + 当前活跃账号 key，标注每条待导入记录的新增/冲突状态）、导入文件解析（拒绝非常规文件、拒绝空账号列表）、展示字段校验（accessToken/refreshToken/idToken/apiKey/accountId/lastRefresh 等字段完整性检查）。destructive: []

### account_coordination

- **FileLock::acquire**：真实 OS 级文件锁实现——`mkdir`(0o777) 建父目录 →`OpenOptions` 建/开锁文件 → 循环 `fs2::FileExt::try_lock_exclusive`（advisory exclusive lock），冲突时每 25ms 重试，20 秒后放弃并报超时。destructive: []
- **LiveAuthLock::acquire** / **AccountDomainLock::acquire** / **AccountSnapshotLock::acquire**：分别锁定固定命名的 `account state.oauth-refresh.lock`、账号域锁、单账号快照锁，均基于 `FileLock::acquire` 封装不同锁文件路径。destructive: []
- **acquire_snapshot_locks**（4 个重载 + 1 闭包）：批量对一组账号快照并发加锁，用于导入/导出等批操作前的整体互斥。destructive: []
- **snapshot_lock_path**：拼接单账号快照对应的 `.lock` 文件路径。destructive: []

### account_metadata

- **fetch_json**：账号元数据的通用 HTTP GET 封装——复用 `api_client::http_client`，加鉴权头（`header_sensitive` ×4，含 Bearer token）、可选 `account_id` query 参数，`reqwest::blocking` 发起请求并做响应体大小限制（`account metadata response exceeded the size limit`）。destructive: []
- **fetch_subscription_metadata**：拉取账号订阅信息主流程——两次 `fetch_json`（基础账号信息 + 订阅信息），提取 `subscription_account_id`/`plan`（`plan_mapping::parse_chatgpt_plan_label`）/`timestamp_at`/`bool_at` 系列标记，经 `infer_active_subscription` 推断当前生效订阅，并用 `is_usable_account` 过滤不可用账号。destructive: []
- **is_usable_account**：多套历史 API 形态兼容的可用性判定——依次探测多条 JSON 指针路径的 `deactivated`/`is_deactivated`/`disabled`/`is_disabled` 布尔字段，任一为真则不可用；否则再匹配 `status`/`state` 字符串是否为 `deleted`/`disabled`/`suspended`/`deactivated`（大小写不敏感）。destructive: []
- **infer_active_subscription**：在多条订阅记录里按字段优先级推断"当前生效"的一条。destructive: []

### oauth_refresh

- **refresh_token_with_policy**：后台 token 刷新的核心策略函数（本批最复杂的业务函数之一）——① 取 `AccountSnapshotLock` 加载当前快照，用 `same_real_account_identity` 校验调用方预期身份与磁盘一致，不一致则放弃并记录 `[AiMaMi][oauth-refresh] active auth ownership changed before refresh`；② 与"活跃/真实"auth.json 比对新鲜度（`auth_is_newer`），若对方已更新则仅 `write_auth_if_changed` 同步而不发网络请求（`skipped auth.json sync because live auth changed`）；③ 用 `token_remaining_seconds` 判断是否临近过期，未到刷新窗口则跳过；④ 通过 `is_codex_app_running`/`collect_external_codex_writers`/`assert_no_external_codex_writers`/`reject_external_codex_writers` 检测真实 Codex App 是否正在运行/写 auth.json，运行中则推迟本次刷新（`active account token refresh deferred while Codex owns auth.json`/`skipped auth.json sync because Codex became active`）；⑤ 否则用固定 `client_id = app_EMoamEEZ73f0CkXaXp7hrann` 向 `https://auth.openai.com/oauth/token` 发 `refresh_token` grant，校验响应（`validate_token_endpoint_success`/`token_endpoint_error_code`，含"token endpoint returned an empty access_token"/"...returned credentials for a different account" 两类拒绝），成功后 `make_auth_snapshot` + `current_iso_timestamp` 打 `last_refresh`，`write_atomic_with_mode` 落盘（含二次让路检查）。destructive: []
- **auth_is_newer**：比较两份 AuthFile 的 `last_refresh`/时间戳，判断谁更"新"，用于决定是否需要以对方为准同步。destructive: []
- **write_auth_if_changed**：仅当内容确有变化时才 `write_atomic_with_mode` 落盘，避免无意义写盘触发文件监听/锁竞争。destructive: []
- **external_codex_writer_is_present**：探测系统中是否存在真实 Codex 客户端进程正在持有/写 auth.json，是则本轮让路。destructive: []
- **call_token_endpoint** / **validate_token_endpoint_success** / **token_endpoint_error_code**：token 端点 HTTP 调用闭包、成功响应校验（access_token 非空等）、失败错误码归类（`TokenEndpointErrorValue` 反序列化）。destructive: []
- **decode_jwt_payload**：URL-safe base64 解码 JWT payload 段（`-`→`+`、`_`→`/`、补 `=`），复用于 refresh 场景的本地校验。destructive: []

### oauth_login

- **run_login_flow**（含闭包）：交互式登录整体编排——串联 PKCE 生成、授权 URL 拼装、浏览器拉起、本地回调、code 换 token，成功后交给 account_io 持久化为新账号。destructive: []
- **generate_pkce**：生成两个 UUIDv4 拼接后取 SHA-256，做 base64url 编码得到 `code_challenge`，同时保留 `state`/`code_verifier`，标准 PKCE 授权码流程。destructive: []
- **build_authorize_url**：拼装 `https://auth.openai.com` 授权页 URL（client_id、redirect_uri、code_challenge、state、scope 等 query）。destructive: []
- **open_in_browser**：`std::process::Command::new("/usr/bin/open").arg(url).spawn()` 拉起系统默认浏览器打开授权页；进程创建失败会 close 已打开的管道 fd 并返回错误。destructive: ["spawn(/usr/bin/open，仅用于打开授权 URL，非破坏性但属进程创建副作用)"]
- **resolve_callback**：本地回调解析——从本地临时 HTTP 监听收到的重定向请求中取出 `code`/`state` 查询参数。destructive: []
- **exchange_code_for_tokens**（+ 闭包）：向 `https://auth.openai.com/oauth/token` 发 `authorization_code` grant（带 `code_verifier`），带 `User-Agent: AiMaMi/1.2.3`，解析响应，缺 `refresh_token` 时报 `OAuth token response missing refresh_token`，同样有响应体大小限制保护。destructive: []

### bootstrap_cache

- **load**：`fs::read_to_string` 读取本地启动缓存 JSON，`serde_json` 反序列化为 `BootstrapStatePayload`；文件不存在或解析失败时返回带若干 `Option::None` 哨兵字段的默认空载荷（不报错阻断启动）。destructive: []
- **update**（4 个重载）：读现有缓存 → 用 `SystemTime::now` 刷新时间戳 → 克隆并替换其中一个字段（账号列表/活跃账号 key 等，各重载替换不同字段）→ `serde_json::to_vec` 序列化 → `fs::write` 覆盖写回（非原子写，符合"低价值可重建缓存"的定位）。destructive: []

### sessions

- **delete_sessions**：批量删除会话主流程——把待删 id 集合装入哈希表，`open_codex_db` 打开状态库，对每条命中的会话执行 `rusqlite::Connection::execute` 两条 SQL（`threads` 表行删除相关语句），随后对每个不在保留集合里的 rollout 文件调用 `std::sys::fs::remove_file`；最后重读会话索引文件、过滤掉已删除 id 对应行、`fs::write` 覆盖写回索引。destructive: ["remove_file(用户主动删除的会话 rollout 文件)", "DB 行删除(threads 表)"]
- **backup_codex_db** / **backup_regular_file**：分别在改动 SQLite 状态库、rollout 文件前先按 `migration_backup_path`（`Documents/Codex/session-migration-backups/rollout/...`）拷贝一份原始文件作为迁移前备份。destructive: []
- **migrate_session_worktree**（+ 2 闭包）：工作区（workspace root）迁移主流程——`load_sessions` 取现有会话 → 先 `backup_codex_db` + `backup_regular_file` 各自备份 → `open_codex_db` → `update_session_cwd_in_connection` 改 `threads.cwd` 列 → `patch_rollout_cwd` 改每个 rollout 文件里内嵌的 `payload.cwd` → 任一步失败调用 `restore_regular_file_from_backup` 回滚。destructive: []（改动前必先备份，失败即回滚，无不可逆裸删除）
- **update_session_cwd_in_connection**（+ 2 闭包）：SQLite 层的乐观并发更新——先探测 `threads` 表是否存在 `cwd` 列（`sqlite_table_columns`），存在则执行 `UPDATE threads SET cwd = ?1 WHERE id = ?2 AND cwd = ?3`（携带旧值做 CAS 条件，避免覆盖并发写入），再 `SELECT cwd FROM threads WHERE id = ?1` 校验更新结果。destructive: []
- **patch_rollout_cwd**（+ 闭包）：逐行读 rollout JSONL，命中 `/payload/cwd` 指针的行替换为新路径后重新 join，`write_atomic_with_mode` 整体原子写回。destructive: []
- **restore_regular_file_from_backup**：读取备份文件字节，`write_atomic_with_mode` 覆盖写回原路径，用于迁移失败时的回滚。destructive: []
- **export_session_markdown** / **render_export_markdown** / **normalize_export_text** / **format_export_timestamp** / **ensure_markdown_extension**：把单个会话渲染为可读 Markdown（角色/内容/时间戳/工作目录信息），规范化导出文本换行与转义，确保导出文件名以 `.md` 结尾，`write_atomic_with_mode` 落盘到用户指定目录。destructive: []
- **is_codex_visible_session** / **load_sessions** / **build_rollout_index**：判定某条 DB 记录是否应在 UI 会话列表中可见（过滤内部/隐藏会话）、加载全部会话（`Command::new` 调用本地 `git -C <cwd> --porcelain` 探测工作目录 git 状态用于展示、读取 SQLite `threads` 表 + 关联 rollout 文件）、构建 rollout 文件路径到会话 id 的索引表。destructive: []
- **sanitize_backup_segment** / **migration_backup_path** / **truncate_chars**：备份路径分段做文件系统安全字符清洗、拼出带时间戳的备份目标路径、导出/展示文本按字符数截断（防止超长内容撑爆 UI/文件）。destructive: []

### session_analytics

- **visit_dir**：递归遍历会话根目录（`std::sys::fs::read_dir` + 对子目录自身递归调用），收集全部会话文件路径供后续解析。destructive: []
- **parse_all_sessions**：解析目录下全部会话 rollout 内容，识别 `*** Begin Patch`（代码改动块）、`web_search`/`custom_tool_call`/`tool_search_output`（工具调用类型）、`total_token_usage`（input/output/reasoning/total token 计数）等事件，供四类统计函数复用；含 `unknown`/`account-removal-quarantine` 兜底分类。destructive: []
- **range_to_cutoff**：按传入的时间范围枚举（日/周/月）返回 `now - 86400/604800/2592000` 的截止时间戳，用于筛选统计窗口。destructive: []
- **timestamp_to_date**：把 Unix 时间戳转为按日分桶用的日期字符串（越界时报 `Local time out of range for 'NaiveDateTime'`）。destructive: []
- **compute_session_analytics** / **compute_token_analytics** / **compute_tool_analytics** / **compute_change_analytics**：均先调用 `parse_all_sessions` 拿到全量会话事件，再用 `range_to_cutoff` 过滤时间窗、`timestamp_to_date` 按日分桶，分别产出会话数、token 用量、工具调用次数、代码改动（patch）次数四类按日统计结果，供本地用量分析面板展示。destructive: []

---

## 3. 反编译完整性标注

- 本批 9 个目录共 120 个 `.c` 文件，逐一 `grep -rl "TRUNCATED\|DECOMPILE-FAILED\|chars total"` 复核，**命中 0 个**——不存在需要标注"内部不臆断"的截断/失败函数。
- `refresh_token_with_policy`（56KB）文件头注释含 `[FULL — IDA decompiler 全解 56260B, 超大体分页取回]`，属正常大函数分页获取伪代码，非截断；已按调用链结构（锁 → 身份校验 → 让路检测 → HTTP 刷新 → 落盘）读取归纳，未发现桩函数或空函数体。
- `load_sessions`（178KB，本批最大单文件）、`export_accounts`/`import_accounts`（各 ~50KB）、`exchange_code_for_tokens`（58KB）、`parse_all_sessions`（42KB）均为正常展开的大函数（含大量内联 `serde_json`/`hashbrown`/SQLite 绑定代码），已读取声明、关键调用链与字符串常量确认业务语义，未见截断标记。

---

## 4. 补充观察（跨模块一致性）

- **路径穿越防护**：`ensure_managed_account_snapshot_location`（canonicalize + 逐段 component 比较）与 `is_valid_account_key`（拒绝 `/`、`\`）是本批两处独立实现的路径穿越防线，覆盖"快照文件落盘位置"与"账号 key 作为文件名片段"两个维度。
- **写前备份 + 失败回滚**：`SnapshotWriteRecord::capture`/`failure_after_snapshot_writes`（account_io）与 `backup_codex_db`/`backup_regular_file`/`restore_regular_file_from_backup`（sessions）是两套独立但模式一致的"改前拷问、失败可退"实现，均只在确认前后字节一致的前提下才执行 `remove_file`/覆盖写回，不存在无条件裸删除。
- **与真实 Codex App 的让路机制**：`oauth_refresh` 模块通过 `is_codex_app_running`/`external_codex_writer_is_present`/`collect_external_codex_writers`/`reject_external_codex_writers` 一组函数，在真实 Codex 客户端进程运行期间主动避让 auth.json 写入，是本批唯一涉及"感知并避让同机其它进程"的跨进程协调逻辑。
- **固定 OAuth client_id**：`oauth_refresh`/`oauth_login` 两模块共用同一个硬编码 `client_id = app_EMoamEEZ73f0CkXaXp7hrann` 与 `https://auth.openai.com/oauth/token` 端点，与官方 Codex CLI 使用的公开 OAuth client 一致（AiMaMi 复用该 client_id 完成登录与刷新，未见私有后端中转）。
