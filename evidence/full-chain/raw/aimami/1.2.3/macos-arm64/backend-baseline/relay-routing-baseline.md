# 1.2.3 后端完整基线模块分析 — relay-routing (macOS arm64)

来源：IDA 已反编译 `.c` 伪代码（只读盘归纳，不连 IDA、不逆二进制）。
范围：`core/relay/{manager, proxy_server, router_transition, router_reconciler,
router_unlock_auth, config_takeover, transition_journal, health_check}/ida/pseudocode/`
以及 `core/relay/ida/pseudocode/`（relay 顶层目录本身）。

## 0. 总体统计

| 目录 | .c 文件数 | 基线 same-set | 1.2.3 NEW-delta | 无标记 | TRUNCATED/DECOMPILE-FAILED |
|---|---|---|---|---|---|
| manager | 57 | 53 | 0 | 4（见下） | 0 |
| proxy_server | 38 | 35 | 0 | 3（见下） | 0 |
| router_transition | 9 | 7 | **2** | 0 | 0 |
| router_reconciler | 10 | 10 | 0 | 0 | 0 |
| router_unlock_auth | 24 | 24 | 0 | 0 | 0 |
| config_takeover | 27 | 27 | 0 | 0 | 0 |
| transition_journal | 11 | 11 | 0 | 0 | 0 |
| health_check | 13 | 13 | 0 | 0 | 0 |
| relay（顶层 ida/pseudocode） | 0 | - | - | - | - |

`core/relay/ida/pseudocode/` 顶层目录本身为空（0 个 `.c`）——该目录只是父级容器，
所有函数实际落在其 33 个子模块各自的 `ida/pseudocode/` 下（本次任务覆盖其中 8 个）。

manager 目录里 4 个文件（`reconcile_current_mode_locked_from_with__0x10027eb30.c`、
`router_transition_in_progress_0x10027af50.c`、`stop_proxy_if_running_0x100277050.c`、
`verify_target_state_at_with_depth_0x10027d420.c`）与 proxy_server 目录里 3 个文件
（`apply_kimi_coding_prompt_cache_key_0x100263c40.c`、`summarize_upstream_error_0x10025eb20.c`、
`upstream_error_tag_0x100259820.c`）头部缺少「基线 same-set」标签后缀，但均未出现
`TRUNCATED`/`DECOMPILE-FAILED`/`[N chars total]` 截断桩标记，判断为标注脚本对超长符号名的
格式截断，非反编译失败，函数体均完整可读。

**全仓（8 个目录，共 189 个函数文件）未发现任何 `TRUNCATED` / `DECOMPILE-FAILED` /
`[N chars total]` 截断桩标记**——所有业务函数均已完整反编译。

**唯一的版本差异发现**：`router_transition::run_with_writer_policy` 在 1.2.3 新增了 2 个
超大函数体（54111B / 67313B，`[FULL — <反编译器> 全解 ... 超大体分页取回]`，非截断）的
新单态化实例（`h1219123683360807` @ 0x100901ac0、`h95f8fadb6cf11dd8` @ 0x1009049a0），
文件头标注 `1.2.3 NEW-delta ... vs 1.2.2 新增(IDA函数枚举diff, 名↔地址一致)`。两者均是同一
泛型函数对不同 `WriterPolicy` 类型参数的单态化展开：0x100901ac0 版本额外接入
`codex_diagnostic::fix_all` / `fix_issue`（诊断自愈路径下的 writer-policy 落盘），
0x1009049a0 版本走纯 reconcile 路径（不含 fix_all）。其余 7 个 `run` / `run_with_writer_policy`
重载均为「基线 same-set」（1.2.2 已有）。

---

## 1. 模块职责一览 (module_roles)

1. **manager** — `RelayManager` 是 relay/router 子系统的中枢状态机与门面：管理 provider 的
   增删改查（CRUD）、内存态持久化（`RelayState` 落盘 + keychain）、Codex 路由启停编排
   （联动 transition_journal / invariants / router_transition）、本地代理进程句柄生命周期
   （启动/停止/端口探测）、诊断自愈调度、API Key 解密展示，是本目录调用量最大的模块。
2. **proxy_server** — 本地 HTTP 代理服务本体（基于 axum + reqwest + tokio），负责把 Codex
   CLI 发出的 OpenAI Responses / Anthropic / OpenAI Chat 请求转发到实际上游 provider，
   含协议方言转换（走 translator）、图片兼容改写、kimi/aimami 专有 prompt-cache 与压缩块
   （compaction）展开、失败熔断（breaker）与故障转移（failover）。
3. **router_transition** — Codex Router 开关（on/off/no-account-mode）状态迁移的统一入口
   `run` / `run_with_writer_policy`：加进程级迁移互斥（`CodexTransitionFence`）、写
   transition_journal、跑 reconciler、校验目标态、超时/违规回滚，是 manager 里所有
   `set_codex_router_*` 系列方法背后真正执行状态切换的引擎。
4. **router_reconciler** — Router 打开/关闭时的“收敛”逻辑：`reconcile_router_on` 负责
   代理启动→鉴权准备→模型/线程 catalog 收敛→防止外部并发写 Codex 配置的整套编排；
   `reconcile_native_off` 负责关闭时把 Codex 原生配置和项目态复原、清理虚拟鉴权残留。
5. **router_unlock_auth** — “解锁鉴权”子系统：在没有真实 OAuth 账号也要打开 Router 时，
   生成一个自签的假 `auth.json`（未签名 JWT，`sub` 用固定占位邮箱），关闭/恢复时清理该
   虚拟鉴权文件并把真实备份鉴权（若判定为用户自有、可用的真实 OAuth）恢复回去。
6. **config_takeover** — 对 `~/.codex/config.toml` 做“接管/归还”式协作编辑：用
   `# >>> aimami-relay managed start (DO NOT EDIT MANUALLY)` 标记的托管区块写入/剥离
   AiMaMi 自有的顶层键与 model 段，接管前把用户原有冲突内容备份到
   `router-takeover-backup.json`，关闭 Router 时按备份逐行归还，并对损坏的备份文件做
   隔离（quarantine）与清理。
7. **transition_journal** — 迁移过程的持久化流水账（journal）：记录每一次迁移事件/阶段、
   判断“是否有迁移在途”“最近是否失败”，供崩溃后恢复判断用；`clear` 会删除该 journal 文件。
8. **health_check** — 对某个 provider 做一次性连通性/协议自检：构造最小 OpenAI/Anthropic
   测试请求、解析流式或非流式响应、识别错误体、给出可读的检测结论，供“测试此 provider”
   类交互使用。

---

## 2. 关键函数 (key_functions)

### 2.1 manager

| 函数 | 行为 | destructive |
|---|---|---|
| `RelayManager::new` | 构造 RelayManager：起一个 2 worker 线程、名为 `aimami-relay-rt` 的独立 tokio 多线程运行时；若 runtime 起不来则记录 `"relay tokio runtime init failed; proxy disabled"` 但不 panic，退化为无代理模式；随后 `storage::load`→`hydrate_secrets`→必要时 `storage::save` 完成状态恢复。 | — |
| `RelayManager::bootstrap` | 应用启动时的一次性收敛：若 Codex App 正在运行则只做只读的 `verify_target_state_at_with_depth` + `codex_config_stale_reason` 校验（不动配置，避免和运行中的 Codex 抢写）；否则获取 `CodexMutationGate` 锁后调用 `reconcile_current_mode_locked_from_with_writer_policy`，把 Router 状态收敛到磁盘声明的目标态。 | — |
| `RelayManager::upsert` | Provider 增改：校验 provider id/上游 URL/模型列表合法性，必要时经 keychain 读写 API Key，加 `CodexMutationGate` 锁防止并发写 Codex 配置，写完后触发 `sync_codex_config` 并 `persist`。锁不可重入，锁被中止/污染时返回 `codex_router_provider_operation_locked_error`。 | — |
| `RelayManager::delete` | 删除 provider：先做 `assert_provider_removed_from_codex_files` 断言 Codex 侧配置文件已不再引用该 provider，再从内存表 `retain` 掉，并调用 `keychain::delete_api_key` 清除对应密钥。 | keychain 密钥删除（非文件系统 remove_file，但等效于凭据擦除） |
| `RelayManager::set_codex_router_enabled` | Router 开/关总闸：拿 `CodexMutationGate` 锁→算 `codex_config_stale_reason`→按需 `reconcile_current_mode_locked_from_with_writer_policy`→调用 `router_transition::run`→记录 `record_router_event`/`record_router_timing`（`"result=error stage=preflight"` 等埋点）；关闭路径若外部已在 `stopping_codex`，会走 `rollback_router_enabled_stably`。锁污染时字符串 `"Codex router transition lock is poisoned"` 被写入日志。 | 间接触发下游代理停止/配置改写 |
| `RelayManager::ensure_proxy_started` / `ensure_proxy_started::{closure}` | 用 axum 起本地 HTTP 代理（`Router::new().route(...).with_state(...)`），端口取 `proxy_port_candidates` 逐个 `TcpListener::bind_addr` 试探；起好后转入 tokio 任务常驻运行。 | 打开本机监听端口（非破坏性，但占用系统资源） |
| `RelayManager::stop_proxy_if_running` / `shutdown_proxy_handle::{closure}` | 通过 tokio `oneshot` 通道给正在运行的代理任务发送关闭信号并释放 semaphore，等待其真正退出后再 `storage::save`。 | 终止本进程内代理任务（非外部进程 kill） |
| `RelayManager::run_diagnostics` / `fix_diagnostic_issue` | 诊断/自愈入口：`run_diagnostics_with_mode` 得到问题列表，`fix_diagnostic_issue` 按需 `CodexProcessLifecycle::launch` 拉起 Codex App、经 `router_transition::run_with_writer_policy` 落地修复，修复期间通过 `transition_journal::in_flight` 防止并发迁移。 | 可能拉起 Codex.app 进程（`launch`），非终止类 |
| `restore_api_key` / `reveal_api_key` / `resolve_draft_api_key` | 分别对应“恢复误删的 key 到 keychain”“解密展示给用户看”“把草稿态 key 解析出明文”，全部经由 `keychain::get_api_key`/`write_key_file`/`delete_api_key`，本机 keychain 读写，不出网、不落明文日志。 | keychain 写入/删除（本机凭据存取） |

### 2.2 proxy_server

| 函数 | 行为 | destructive |
|---|---|---|
| `forward_with_failover::{closure}` | 转发总调度：按 `pick_candidates_for` 选出候选 provider 列表，依次 `try_pass_through`/`try_translate` 转发，失败记 `breaker::record_failure` 触发熔断计数，成功记 `record_success`，必要时把上游错误经 `inject_hint_into_error` 加人类可读提示后再抛回。 | — |
| `try_pass_through::{closure}` | 原样透传：`build_upstream_headers` 拼请求头、`reqwest::Client::request(...).send()` 直发上游，把响应体和 headers 原样流式回填。 | 出网请求（转发用户 API Key/Prompt 到上游 provider，非破坏性但涉及数据外发） |
| `try_translate::{closure}` | 协议翻译转发：Anthropic⇄OpenAI Chat 双向转换（走 `translator::anthropic_to_openai_chat_request/response` 等），支持流式（`AnthropicToOpenAiStream`/`OpenAiToAnthropicStream`）。 | 同上，出网 |
| `try_codex_responses_via_translation::{closure}` | 针对 Codex 专属 Responses API 的转换转发：把 Anthropic/Chat 响应转成 Responses 格式（`chat_to_responses_response`），支持工具调用名映射（tool_name_map）。 | 出网 |
| `codex_local_compact_compat_response` | 本地生成一个“压缩兼容”响应（不出网）：取 `compact_text_from_value`/`tail_chars` 截断正文，走 `translator::responses_to_sse_payload` 组装 SSE，用于旧客户端不支持某种压缩格式时的本地降级应答。 | — |
| `expand_aimami_compactions_for_upstream` | 把 AiMaMi 自有的“压缩块”标记从请求体里解出（base64 decode）并展开还原成真实上游可理解的内容，发往上游前的必经步骤。 | — |
| `apply_kimi_coding_prompt_cache_key` | 从请求 URL/host 里识别 kimi（Moonshot）系 provider，往请求体注入其专有 `prompt_cache_key` 字段，属于厂商适配层。 | — |
| `ProxyContext::client_for` / `note_network_failure` | 按 provider 维度懒建 reqwest client（读写锁缓存），网络失败时计入该 provider 的失败态供熔断器参考。 | — |

### 2.3 router_transition

| 函数 | 行为 | destructive |
|---|---|---|
| `run` (4 个重载 same-set) / `run_with_writer_policy` (2 个 same-set + **2 个 1.2.3 NEW-delta**) | 统一的“状态迁移执行器”：`CodexTransitionFence::acquire_with_policy` 拿进程级迁移锁→`record_event` 写事件→跑 `router_reconciler::reconcile_router_on`（或 `reconcile_native_off_after_stop`/`reconcile_current_mode_after_stop`，取决于目标态）→`verify_target_state_at_with_depth` 校验→成功则 `commit_reconciled_target` 落盘、`transition_journal::clear`；失败则 `format_violations` 拼错误详情、`write_journal` 记录失败供下次读取。1.2.3 新增的两个 `run_with_writer_policy` 单态化里，`0x100901ac0` 版本额外接入 `codex_diagnostic::fix_all`/`fix_issue`（诊断自愈触发的迁移路径）。 | 触发下游配置改写/代理启停（经 reconciler） |
| `write_journal` | 把本次迁移的最终结果写入 `transition_journal::write`，失败仅记日志不影响主流程返回值。 | 文件写入（journal，非删除） |
| `format_violations` | 把 `verify_invariants_with_depth` 产出的不变量违规列表拼成人类可读字符串，用于日志与错误提示。 | — |
| `record_event` | 往 `platform::debug_log::app_event` 打点一次迁移阶段事件（带 `TransitionTarget` Debug 格式）。 | — |

### 2.4 router_reconciler

| 函数 | 行为 | destructive |
|---|---|---|
| `reconcile_router_on` | Router 打开时的编排核心：阶段串行推进 `starting_proxy → proxy_started → preparing_auth → auth_ready → model_restore`（字符串常量印证于伪代码），先 `assert_no_external_codex_writers`/`reject_external_codex_writers` 防止别的 Codex 进程正在写配置，再 `config_takeover::takeover` 接管 `config.toml`、`ensure_proxy_started` 起本地代理、`router_unlock_auth::prepare_auth_for_router` 备好可用鉴权、`codex_thread_visibility` 系列把已有线程模型收敛到当前 catalog；若代理未拿到可用 root URL 会记录 `"relay proxy started without an available root URL"` 并判定为失败态（`RouterOn...exceeded`）。 | 触发 config_takeover 写配置、代理启动 |
| `reconcile_native_off` | Router 关闭时的收敛：`config_takeover::backup_exists`→`restore` 把托管区块从 `config.toml` 里剥离归还、`router_unlock_auth::cleanup_for_native_off` 清理虚拟鉴权、`codex_project_state::repair_if_needed` 修复项目态、`codex_thread_visibility::reconcile_threads` 收敛线程可见性。 | 触发 config_takeover 写回/删除虚拟鉴权 |
| `valid_codex_active_ids` | 用 HashMap 去重当前声明为 active 的 Codex provider id 集合，供上层判断哪些 provider 仍受 Router 管理。 | — |
| `record_timing` / `record_model_catalog_summary` / `record_thread_summary` | 三者都是往 `debug_log::app_event` 打耗时/规模埋点，纯观测性质，无副作用。 | — |

### 2.5 router_unlock_auth

| 函数 | 行为 | destructive |
|---|---|---|
| `install_virtual_unlock_auth` | 生成并原子写入一份自造的虚拟 `auth.json`：`make_unsigned_jwt` 拼一个未签名 JWT（payload 含固定占位邮箱 `niuniu@woyao.pro` 作为 `sub`），`build_unlock_auth_json` 组装完整鉴权 JSON，`atomic_write::write_atomic_with_mode` 落盘，同时写 `router-unlock-auth-marker.json` 标记文件表明“这是我们装的假鉴权”。 | 写入伪造鉴权文件（本机、供 Codex CLI 在无真实账号时也能跑通鉴权检查） |
| `restore_real_auth_for_router` | 关闭/恢复真实鉴权时：`legacy_virtual_auth::cleanup`/`marker_exists` 先处理旧版遗留虚拟鉴权，`verify_real_auth_restore_ready` 判断备份是否是用户自有且可用的真实 OAuth，确认后走 `cleanup` 把虚拟鉴权收尾。 | 间接触发 `cleanup` 的 remove_file |
| `cleanup` | 判定虚拟鉴权已“孤立”（`"orphaned"`）后，删除标记文件 `router-unlock-auth-marker.json`（经 `remove_file_if_exists`）。 | **`fs::remove_file`**（删除本模块自建的标记/虚拟鉴权文件，非用户数据） |
| `remove_file_if_exists` | 通用文件删除辅助：`std::sys::fs::remove_file`，`NotFound` 错误被吞掉当成功处理，其余 IO 错误上抛。 | **`fs::remove_file`** |
| `validate_user_owned_auth_backup` / `backup_contains_usable_real_oauth` / `auth_is_usable_real_oauth` | 三层校验链：先判断备份文件里的鉴权是不是用户自己的真实可切换 OAuth（`is_switchable_oauth_auth`）且非 AiMaMi 托管的虚拟鉴权（`is_aimami_managed_virtual_auth`），再判断 token 是否仍在有效期内（`oauth_refresh::token_remaining_seconds`）。 | — |
| `readiness` / `has_residue` | 汇总“当前是否可以安全解锁/是否还有残留虚拟鉴权”供上层 UI 或 reconciler 判定用。 | — |

### 2.6 config_takeover

| 函数 | 行为 | destructive |
|---|---|---|
| `takeover` | 接管 `~/.codex/config.toml`：`split_foreign_surface` 把用户已有的顶层键/model 段分成“AiMaMi 自有”和“外来（用户手写）”两部分，外来部分连同时间戳写入 `router-takeover-backup.json` 备份，随后写回一份带 `# >>> aimami-relay managed start (DO NOT EDIT MANUALLY)` 标记块的合并配置（`atomic_write::write_atomic_with_mode`）。 | 覆盖写用户 `config.toml`（有备份兜底） |
| `restore` | 归还流程：读 `router-takeover-backup.json`（新格式）或 `read_legacy_backup_lines`（旧格式兼容），把当年备份的外来行按 `is_aimami_owned_top_level_line` 判定逐行插回原顶层键位置，再 `remove_backup_file` 删除已消费的备份文件。 | **`fs::remove_file`**（删除已恢复完毕的备份文件） |
| `quarantine_damaged_backups` / `quarantine_damaged_backup::{closure}` | 备份文件反序列化失败（JSON 损坏）时，先把损坏文件迁移隔离（写入 quarantine 副本）再从原路径 `remove_file`，避免下次启动反复解析同一份坏文件报错。 | **`fs::remove_file`**（删除已隔离的损坏备份，隔离副本仍保留） |
| `merge_runtime_quarantine` | 把运行期新发现的“外来 model 段冲突”合并进已有隔离表（HashMap 去重），不做文件 IO。 | — |
| `is_aimami_owned_top_level_line` / `is_foreign_model_section` / `section_overlaps` | 一组纯判定函数：用 `codex_writer::is_aimami_owned_provider_name`/`is_aimami_relay_model_slug` 等规则区分“这行/这个 TOML 段是不是我们自己写的”，是接管/归还准确性的核心判据。 | — |

### 2.7 transition_journal

| 函数 | 行为 | destructive |
|---|---|---|
| `write` | 覆盖式写入迁移 journal（先 `append_event` 追加一条事件到内存态列表，再整体经 `atomic_write::write_atomic_with_mode` 落盘）。 | 文件写入（非删除） |
| `append_event` | 事件列表超出上限时用 `Vec::drain` 丢弃最早的若干条，保持 journal 文件不无限增长。 | 丢弃旧事件（内存态，落盘由 `write` 完成） |
| `clear` | 迁移成功收尾时删除整个 journal 文件（先 `metadata` 判断存在再 `remove_file`）。 | **`fs::remove_file`**（删除迁移日志文件，迁移成功后的正常清理） |
| `read` / `in_flight` / `recent_failure` | 分别读取 journal 判断“文件是否存在/能否解析”“是否有迁移仍在活跃阶段（`is_active_phase`）”“最近一次是否失败”，供 `bootstrap`/`run_diagnostics` 等启动期恢复判断使用。 | — |

### 2.8 health_check

| 函数 | 行为 | destructive |
|---|---|---|
| `test_provider_staged::{closure}` | 单个 provider 的连通性自检主流程：按 `classify_openai_chat_endpoint` 判断该 provider 走 OpenAI 风格还是 Anthropic 风格、`build_test_request` 拼最小化探测请求体、经 `ASYNC_CLIENT`/`ASYNC_DIRECT_CLIENT`（懒初始化的 reqwest client）真实发出网络请求、`interpret_openai_response`/`detect_body_error` 解析结果、流式场景下用 `extract_stream_text_delta`/`is_stream_terminal_event` 判断 SSE 是否正常收尾。 | 出网请求（仅探测用，不落用户数据） |
| `build_anthropic_headers` / `build_openai_headers` / `apply_extra_headers` | 按厂商风格拼装 HTTP 头（含用户自定义 extra headers 的合法性校验与注入）。 | — |
| `resolve_responses_urls` | 根据 provider 的 base URL 计算 Responses/Chat Completions 的实际探测端点。 | — |
| `error_message_from_json` / `detect_body_error` | 从探测响应体里抽取人类可读的错误信息，供 UI 直接展示“这个 provider 测试失败，原因是……”。 | — |

---

## 3. 破坏性副作用小结（跨模块汇总）

本次覆盖的 8 个目录、189 个函数文件中，**唯一一类破坏性副作用是 `std::sys::fs::remove_file`
/ `fs::remove_file`**，未发现 `kill`/`Command::new`/`osascript`/`process::exit`/`truncate`
等更强的破坏性调用（`CodexProcessLifecycle::launch` 属于“拉起”而非“终止”，`launch_codex_app_warning`
只是日志提示，非进程操作）。remove_file 全部集中在“本模块自建的中间态文件”上，删除目标均为：

- `router_unlock_auth::cleanup` / `remove_file_if_exists` — 已孤立的虚拟鉴权标记文件
  `router-unlock-auth-marker.json`；
- `config_takeover::restore` / `remove_backup_file` — 归还流程消费完毕的
  `router-takeover-backup.json`；
- `config_takeover::quarantine_damaged_backup(s)` — JSON 解析失败的损坏备份文件（隔离副本保留）；
- `transition_journal::clear` — 迁移成功收尾后的 journal 文件本体。

四类删除对象均为 AiMaMi/Router 自身产生的中间态文件，且均有前置存在性判断
（`metadata`/`NotFound` 静默）或备份/隔离兜底，未见对用户原始数据（真实 `auth.json`、
用户 `config.toml` 本体）的无条件删除——`config_takeover::takeover`/`restore` 对
`config.toml` 是覆盖写而非删除，且写前必有 `router-takeover-backup.json` 备份。

## 4. 反编译完整性结论

8 个目录、189 个 `.c` 文件逐一 grep 排查，**0 处** `TRUNCATED` / `DECOMPILE-FAILED` /
`[N chars total]` 截断桩标记；`router_transition` 下两个超大函数体（54111B/67313B）均标注
`[FULL — <反编译器> 全解 ... 超大体分页取回]`，为完整反编译后分页取回，非截断。manager/proxy_server
共 7 个文件头部缺失「基线 same-set」标签后缀，判断为标注脚本对超长 mangled 符号名的显示截断，
不影响函数体完整性，未见任何异常。
