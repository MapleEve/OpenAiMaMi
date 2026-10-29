# mac 1.2.7 truly_undone 非命令后端深逆 — AiMaMi (macos-arm64, arm64 thin slice)

## 人话结论

**四角度 D1 分类登记的 mac 1.2.7 `truly_undone` 25 簇/80 个新增非命令业务函数，本轮全部 live decompile 追到 semantic implementation leaf，无一假墙，全部是有完整错误面和副作用的真实 Rust 业务实现。** truly_undone 不是「逆不动」，只是前序轮次的五份 fullchain 与 decomp 集没有覆盖到这片新增面。25 簇按业务归并如下：

1. **`core::relay::atomic_write`（15 个）—— 全应用持久化原子写管线**：所有落盘写（导出、catalog、事务日志、registry、auth 快照、relay 状态、keychain revisions）统一走「建父目录 → 临时文件写入 → `sync_data` → `rename` 原子替换 → 父目录 fsync」五段管线；`write_atomic_private_report` 变体带 `0o600` 私有权限（auth 快照/journal 专用）；`staging::FileIdentity` 族在替换前校验「文件身份未变且是单一常规文件」防竞争；`removal::remove_file_report` 与 `staging::remove_owned` 是配套的**破坏性清理面**（删文件后同步父目录）。
2. **`core::relay::proxy_server`（8 个）—— Anthropic V1 代理适配侧新增**：`translate_responses_to_anthropic_body` 把 Codex responses 请求体转译成 Anthropic 格式（工具选择校验/剥离 web-search 工具/thinking carrier）；`require_anthropic_inline_tools_header` 强制 `anthropic-beta: inline-tools-2026-09-15`；`remove_rejected_optional_anthropic_beta` 在上游报错文本匹配「invalid beta/unsupported/not recognized」等七种拒绝措辞时移除 beta 头重试；`is_anthropic_effort_rejection` 识别四种 effort 拒绝措辞；`codex_client_session_id` 从 `x-codex-turn-metadata` 头 JSON 提取 `session_id`；`sanitize_body_for_native_responses_upstream` 在 `store=false` 时剔除不可用 reasoning 项。
3. **`core::relay::health_check`（7 个）—— ProbeStream 健康探测流解析族**：`dispatch` 同时识别 OpenAI(`/choices/0/finish_reason`)/Anthropic(`/delta/stop_reason`)/responses(`/response/status`) 三种协议的流终态，区分「refused（拒绝）/filtered（内容过滤）/conflicting terminal（终态冲突）」；`validate_embedding` 校验 embedding 响应的 `error` 键与 `data` 数组；`apply_if_current` 做代数检查后异步应用结果。14 条 probe 专用错误串全部现场提取。
4. **`core::relay::transition_journal`（7 个）—— 路由切换事务日志（1.2.7 全新文件）**：切换路由时先把 `phase="committing"` 的 `TransitionEvent{target,phase,occurredAtMs,reason,…}` 追加进 `router-transition-journal.json`（私有权限原子写），提交确认后 `clear_inner` 删除日志——这是智能路由切换的**崩溃可恢复事务日志**：重启后 `read_checked`（版本/尺寸/常规文件三重校验）能读出未完成的切换并续做或回滚；`warn_after_commit` 记录 `degraded` 降级态。
5. **`core::relay::storage`（7 个）—— relay 状态存储重组面**：`preflight_save`（父目录预检+原子写+失败清理；与 1.2.6 消费者合同记载的「磁盘空间检查+uuid 原子写」行为一致，**红线30 迁移面**）；`save_with_publication` 先 `validate_credentials`（凭据引用与状态 schema/存在位冲突检测）再发布；`verify_router_commit` 回读状态比对 commit receipt 的 enabled/no_account 位；`no_account_router_active` 供账号切换/登出判断。
6. **`core::repository`（8 个，含全量最大函数）—— registry 重建与同步**：`rebuild_registry_state`（11758B/1353 行）遍历受管账号快照，逐一加载 auth 文件、判 switchable-oauth、生成快照、`credential_generation` SHA-256 指纹去重（`prefer_duplicate_snapshot_candidate`：双向 auth_is_newer→路径等值链→字典序兜底）、carry-over 既有 registry 状态、应用导入别名，最后 `persist_registry` 落盘；支持严格模式（错误即返回）与宽松模式（记 log 继续，日志串「repairing non-switchable active snapshot during registry recovery」「resolved duplicate account snapshots using credential generation and registry continuity」）。`sync_auth_bundle_into_registry`/`flush_live_auth_into_matching_snapshot` 有「活体账号在同步/交接期间被改动」的竞态错误面。
7. **其余 14 簇（19 个）**：`upstream_url`（base URL 解析 + 端点路径穿越拒绝 + query 冲突检测）、`codex_writer`（`[model_providers.aimai1]` 四键 HTTP 合同校验 + 顶层 `aimami_relay_` 模型清理判断 + 受管块清除）、`managed_blocks`（TOML 三引号多行字符串词法状态机）、`account_io` 五函数（oauth 快照路径/活体 key 读取/registry 回退/已存凭据校验）、`FileLock`（fs2 非阻塞排他锁，WouldBlock/EACCES/EAGAIN 返回未获锁而非报错）、`codex_mutation`（账号观察期间的 Codex 变更互斥门，poisoned 有专门错误串）、`io::PreparedImport::publish`（导入经 keychain revisions 发布）、`validate_candidate`（候选 TOML 校验，`CODEX_CONFIG_REWRITE_INVALID: ` 前缀）、`is_codex_app_running`（bundle pid + osascript 两段式进程探测）、`credential_refresh_time`（RFC3339+JWT iat/exp 寿命对齐）、`credential_generation`（SHA-256 代次指纹）、`field_diff`（调试包双 JSON 字段级 diff）。

**voice 边界**：`platform::system_volume::restore` 的唯一调用方是 `core::voice::runtime::start_capture`，实证属 voice 排除域，本轮如实记录其 8 行实现（向 VOLUME_WORKER 通道 send）但不深入，不计入 active scope 工作量。`atomic_write::write_atomic_report` 虽被 `voice::workspace` 调用，但它是十余个业务域共用的基础设施，本身不是 voice 面。

**win 边界**：win 侧 25 簇的函数级新旧拆分依赖红线24 深恢复（需 win 侧深恢复（dirtree/rename/db_save），本轮未执行且红线28 要求 mac 先收口，故 win `four-angle-d-classification.json` 的 truly_undone 维持 26 不归零，仅补注记指向本 leaf 作语义参照。mac 结论未外推 win（红线8）。

## 架构解释

- **为什么这 80 个函数是「非命令」后端**：它们不挂在 tauri 命令 handler 下，而是被 `RelayManager`（bootstrap/persist/set_router_enabled/import_config/reconcile）、`router_transition`（commit_verified/run_with_environment）、`Repository`（rebuild/sync/switch/logout）、`account_observation`/`account_observer`、`codex_diagnostic`（fix/check project state/router contract）、sessions 导出、quota fetch、proxy 转发管线直接调用。它们是命令 handler 背后的底层机制：落盘纪律、切换事务、健康探测、协议适配、凭据同步。
- **为什么前序轮次漏掉它们**：1.2.7 delta 轮的五份 fullchain 按「命令差异」驱动（accounts/threads/router-diagnostics/catalog/translator），这 80 个函数是 1.2.7 新增的**机制层**而非命令面，角度C 全模块枚举（红线19）才把它们捞出来，四角度 D1 分类据此登记 truly_undone 并开出本工作单。
- **原子写管线是全域落盘纪律的单一入口**：1.2.7 把导出、catalog、journal、registry、relay 状态、keychain revisions 的写路径全部收敛到 `atomic_write` 的五段管线 + `Publication` 确认协议，这比逐命令各自写文件的模式显著降低了「写一半崩溃留下截断文件」的风险；`transition_journal` 则是在此之上的切换事务层（先写意图→执行→确认→清日志），让路由切换在崩溃后可续做。
- **registry 重建的去重纪律**：`credential_generation` 把 auth 的四个可选字段做成 SHA-256 指纹，`prefer_duplicate_snapshot_candidate` 用「新旧双向比较→注册表连续性→字典序」三级确定性规则裁决重复快照，避免同一账号多快照时的非确定性选择。
- **修完后风险变化**：消费侧（实现侧）此前对这 80 个函数只有「存在性」认知，实现任何涉及落盘/路由切换/健康探测/Anthropic 适配的行为都只能猜；本轮之后，原子写五段管线、事务日志生命周期、probe 终态三分支、beta 头拒绝重试矩阵、registry 去重规则全部有字段级依据，可严格对照实现。

## 技术证据

### 反截断自查（红线 13/20）

80 个函数经 `py_exec_file` 服务端批量 `ida_反编译器.decompile` **直写盘**（提取器内直写，无 MCP 通道截断面），0 失败、0 EA 错位、0 空体；25 个落盘 `.c` 文件逐一 tail 校验以 `}` 收尾，全文扫描无 `[N chars total]`/`[TRUNCATED]`/`truncates` 标记。最大的 `rebuild_registry_state`（11758B→1353 行伪代码）完整落盘。本包**不**声明任何 `accepted_unknown`/`genuine_ceiling=true`。

### 假墙排除（红线 13 taxonomy 逐条）

- `drop_in_place`≠async body：80 个函数无一是析构函数，全部为具体语义 fn（仅 2 个 `{{closure}}` 闭包，均为真实逻辑：save 错误格式化/make_auth_snapshot 包装）。
- `architecture_only`/`budget rule` 自限：目标清单来自角度C 穷尽枚举（非预算裁剪），80/80 全做无抽样。
- `async decompile failed`：mac 有符号，反编译器 对 80 个函数全部成功；`read_probe_body`/`read_upstream_body` 两个 async 闭包也完整逆出（含 `panic_const_async_fn_resumed` 恢复点）。
- 猜错 VA：80 个 EA 经 `get_func(ea).start_ea==ea` 验证 + actual_name 与枚举 expected_name 80/80 逐字相等。
- vtable 动态分发：无，全部直接函数；调用方/被调方经 xref 枚举核实。
- `HTTP-terminal` external-only：proxy 适配函数的内部逻辑（头注入/拒绝措辞匹配/转译调用链）全部读到，非只看到外部调用。
- 库内部 vs config-callsite：`load_attempt_credentials`→`storage::lazy_load_api_key`+`cache_loaded_api_key`、`join_upstream_url_with_query`→`parse_base_url`+`validate_endpoint_path` 等业务 callee 已识别归属，非库内部。

### 内容级证据锚点（现场反编译/字节级核实，非猜测）

- `transition_journal`：`router-transition-journal.json`、`unsupported transition record version`、`phase record exceeds the size limit`、`phase record is not a regular file`、`committing`、`degraded`；serde 反射串 `struct TransitionJournal with 6 elements`（含 startedAtMs/updatedAtMs）、`struct TransitionEvent with 6 elements`（target/phase/occurredAtMs/reason）；日志面 `[AiMaMi][router-transition] journal write failed`/`committed target journal cleanup failed`/`committed warning record retained`/`Codex re-entry changed`/`Codex re-entry interrupted`。
- `proxy_server`：`inline-tools-2026-09-15`（23B qmemcpy 实证）、`invalid effort level`/`invalid output_config.effort`/`unsupported effort level`/`effort level is not supported`、`read upstream body timed out`、`relay.key_unavailable`、`proxy.upstream_body`、`Invalid Anthropic search context; history was not modified`、`Claude search availability changed for signed history; restore its previous search setting or start a new conversation. History was not modified`、beta 拒绝七串（beta header/unsupported/not supported/not recognized/unrecognized/invalid beta/invalid anthropic-beta）、`x-codex-turn-metadata`+`session_id`。
- `health_check`：三协议终态指针 `/choices/0/finish_reason`（24B）/`/delta/stop_reason`（18B）/`/response/status`（16B，unk_1018266C0 核实）；14 条 probe 错误串（见 gate-report dim5）。
- `storage`：`relay state path has no parent directory`（40B）、`relay state schema cannot represent this router commit receipt`（62B）、`relay credential reference conflicts with state schema or presence flag`（71B）。
- `repository`：`Active account snapshot identity mismatch: `、`Active account snapshot is not a switchable OAuth credential: `（unk_101A2BB8C/101A2BB4B 核实）、`Live account changed while synchronizing credentials`（52B）、`Live account changed while handing off credentials`（50B）；RegistryItem 424B 布局（key@+200/+208 memcmp、path@+224/+232 clone）。
- `codex_writer`：`model_providers.aimai1]`（23B）、`base_url`/`requires_openai_auth`（20B）/`supports_websockets`（19B）/`wire_api`、`sync Codex relay config`（23B）；`top_level_relay_model_requires_cleanup` 的 `aimami_relay_` 前缀经 qword 常量 `0x725F696D616D6961`/`0x5F79616C65725F69` 字节级核实。
- `codex_project_state`：`.codex-global-state.json`（24B）、`projectless-thread-ids`（22B，unk_1018D69E1 核实）、`electron-saved-workspace-roots`（30B，unk_1018D6A83 核实）、`global-state root is not an object`（34B）、`Codex 项目索引正常，无需修复`（39B 栈常数程序化解码核实）、`Codex project index cannot be repaired safely: `（unk_101A3DECB 核实）。
- `validate_candidate`：`CODEX_CONFIG_REWRITE_INVALID: `（104B 错误消息前缀，unk_1018C3FBB 核实）。
- `is_codex_app_running`：`application id "com.openai.codex" is running`（44B osascript -e 参数实证）+ stdout trim 后四字节大小写不敏感 `true` 比较。
- `codex_mutation`：`Codex mutation gate is poisoned during auth observation`（55B）。
- `atomic_write`：`write_atomic_private_report` 的 `WORD2(__s1)=384`（0o600）；`atomic replace: missing parent`/`atomic write: missing parent`；`file identity changed or is not a single regular file`。
- `credential_refresh_time`：JWT `iat`/`exp` claim 读取 + 寿命 `>3600` 秒对齐判定。
- `credential_generation`：SHA-256（`sha2::sha256::compress256`）对 auth 四个 Option<String> 字段（+48/+72/+96/+120）逐一 presence-tag+LE 长度+内容哈希，hex 输出。

### 破坏性副作用标注（红线 20）

- `atomic_write::removal::remove_file_report`：`std::sys::fs::remove_file` + 父目录同步 —— **破坏性**，transition_journal 提交后清理日志的正常功能行为。
- `atomic_write::staging::remove_owned`：`remove_file`（暂存文件）—— **破坏性**，keychain revisions/TempFileCleanup 的正常清理行为。
- `transition_journal::clear_inner`：经 `remove_file_report` 删 `router-transition-journal.json` —— **破坏性**，提交确认后清日志的正常功能行为。
- `storage::preflight_save` 失败路径：`remove_file` 清理临时文件 —— 正常功能行为。
- 其余无 remove_dir_all/truncate/kill/exit/网络删除副作用。`is_codex_app_running` 只读探测（osascript 查询非 kill）。

### 红线 30 改名对应核对（storage/codex_project_state 重组簇）

- 方法：全 80 函数名 grep `mac-1.2.6-func-census.json` + `consumer-contract-1.2.{3,4}-to-1.2.6.json`。
- `preflight_save`：1.2.6 census 仅含其 `{{closure}}`，主函数为 1.2.7 新枚举面；但 1.2.6 消费者合同已记载其行为（「disk space check before RelayManager state persist」「atomic write relay state via uuid」「io error on temp file cleanup」），与本 leaf live decompile 结论一致 —— **迁移面确认，非重做、非行为漂移**。
- `codex_project_state`：1.2.6 census 已有 `stability_issue`/`merge_unique`/`active_db_path`/`ProjectStateInspection` 类型；1.2.7 新增 `inspect`/`repair_if_needed` 属同模块重组扩展（非改名复用）。win src-path-diff 称该文件已删但 win 模块串仍在 2 owners —— 平台分叉归 win 深恢复轮裁决。
- 其余 73 函数在 1.2.6 census 零命中，确为 1.2.7 新增。

### DTO/字段级与错误面

见 `interface-report.json`（80 函数逐一 role）与 `gate-report.json` dim2/dim5。关键 DTO：`TransitionJournal`{6 字段含 startedAtMs/updatedAtMs}、`TransitionEvent`{6 字段含 target/phase/occurredAtMs/reason}、`RegistryItem`（424B，key@+200/+208、path@+224/+232）、`AccountTokenStatus`（remaining/generated_at/plan/generation）、`ProjectStateInspection`（1.2.6 既有类型，inspect 返回）、registry commit receipt（enabled@+364/no_account@+382 位比对）。

### IDA 纪律（响应用户指令）

本轮零 `open_file`、零版本切换、零 IDB 写操作（dirtree/rename/db_save 本轮未执行）；仅 `server_health`（mac `AiMaMi` 1.2.7 .i64 uptime 29247s 双 ready；win `AiMaMi.1.2.7 win64.exe` uptime 28635s decompiler_ready）、`decompile`、`find_regex`、`get_string`、``/`py_exec_file` 只读枚举与读字节。mac 1.2.7 IDB dirtree 归目录已由前序 backend-delta 轮完成（dirtree_mac_canonical 91 模块 2171 函数 0 err 已 save）。win 实例本轮仅健康确认，未做任何调用。

### PREWRITE_PRODUCER_COLLISION_GATE_V1 执行记录

SMB 挂载 `<内部存储>` 写前 `ls` 核实（mounted）。写前重读 root `AGENTS.md`/`CLAUDE.md`、`raw/AGENTS.md`（8 条 canonical ruleset+collision gate）、`raw/aimami/{AGENTS,CLAUDE}.md`、`internal-reverse/REVERSE-STATUS.md`（前序五 session 均本机 CLOSURE、无 in-progress 残留）。`INDEX.jsonl` grep `non-command-backend` 仅 1.2.6 mac leaf 一条（基线非撞车）。owner matrix：target=本 leaf 路径，canonical scope=mac 1.2.7 angle-C truly_undone 80 函数，current producer=本 session（<本地机器>），allowed write mode=ALLOW（无既有 owner），takeover token=not_required。目标路径层级 `raw/aimami/1.2.7/` 与双平台层原缺 `AGENTS.md`+`CLAUDE.md` 双入口，按 gate 窄例外先补规则入口（6 个指针文件，沿用 1.2.6 模板）再写业务产物。

### GROUNDED 自查（红线14 适配，写盘后即做）

25 个伪代码文件 + manifest/gate-report/interface-report/call-tree/data-producer-ledger 全部落 SMB 路径并 readback 校验（JSON 全 parse、字节数>0、锚点串在场）；`evidence.md` 本文件随七件套同批 readback。
