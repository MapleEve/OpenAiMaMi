# 1.2.3 后端完整基线模块分析 — relay-codex

来源：`core/relay/{codex_diagnostic, codex_thread_visibility, codex_writer, codex_project_state,
codex_runtime, invariants, managed_blocks, fetch_models, legacy_virtual_auth}` 的 IDA 反编译 `.c` 伪代码
（macOS arm64，1.2.3）。产出方式：只读盘上已反编译的 `.c` 文件做职责归纳，未连 IDA、未做新逆向动作。

符号统计：`__ZN13codexmate_lib4core5relay...`，说明这批代码全部挂在 Rust crate `codexmate_lib::core::relay::*`
命名空间下。文件头标记以 `| 基线 same-set` 为主（未变更基线集合），仅 1 处标记缺失（未标注 delta，但反编译完整，
非截断/失败）。**全目录未发现 `[TRUNCATED]` / `[DECOMPILE-FAILED]` 标记**，83+62+19+16+4+7+4+8 = 203 个函数
全部完整反编译。

`managed_blocks` 目录在磁盘上不存在（`ls` 确认 core/relay 下无此子目录）；对应概念实际内联在
`codex_writer` 模块中（`render_bottom_block` / `render_router_top_block` / `strip_all_managed_blocks`，
细节见下）。

---

## 1. codex_diagnostic（83 个函数，最大文件 157KB）

**职责**：Codex CLI 配置/数据库的"健康检查 + 自动修复"引擎（类似 `doctor` 命令）。围绕用户主目录下的
`~/.codex/config.toml`、`~/.codex/auth.json`、Codex 的 sqlite 状态库和 JSONL rollout 文件，检测并修复
AiMaMi relay 接管/退出过程中可能留下的残留、冲突或损坏，支持 dry-run（仅 check）和 fix-all 两种模式。

`run_diagnostics_with_mode`（4596 行，主入口）按固定顺序依次调用全部 16 个 `check_*` 检查项：
`catalog_integrity`、`catalog_path_validity`、`config_global_validity`、`config_profile_conflict`、
`config_stale`、`config_third_party`、`config_toml_syntax`、`db_orphan_providers`、
`legacy_migrated_threads`、`project_state_integrity`、`rollout_orphan_providers`、`router_http_contract`、
`router_unlock_auth_residue`、`takeover_backup_orphan`、`thread_missing_rollouts`、
`thread_model_catalog_consistency`、`thread_poisoned_instructions`、`thread_provider_consistency`
（问题分类 tag 与 `state_db_relocation` 一并以字符串常量出现在目标目录中，用作诊断报告的 issue kind）。
该函数体内还内嵌一个"写探针文件 + 立即删除"的目录可写性自检（写 5 字节到探测路径，成功则删除，
失败则记为一条 violation），不是对用户数据的破坏性操作。

`fix_all`（2475 行）先跑一遍 `run_diagnostics_with_mode` 收集问题列表，再用 `fix_issue` 作为
按 issue-kind 分发的统一入口，调用具体的 `fix_config_stale_text` / `fix_config_profile_conflict_text` /
`fix_config_third_party_text` / `fix_config_toml_syntax_text` / `fix_auth_integrity` /
`fix_requires_quiet_window` / `fix_router_unlock_auth_residue` / `fix_takeover_backup_orphan` 等修复函数。

### 关键业务函数

- **run_diagnostics_with_mode**：诊断主循环，顺序执行全部 16 项检查并聚合 violation 列表；内含目录可写性
  探针（写临时文件 + 成功后 `remove_file` 自身，非用户数据）。
- **fix_all**：一键修复入口，先诊断后按 issue kind 分发修复函数；实际改写用户 `config.toml` / `auth.json`。
- **backup_config_before_fix**：修复前备份。把当前 config 复制到 `<codex_home>/config-backups/<uuid>.toml`
  （原子写），随后列出该备份目录，若条目数 ≥ 21 则按修改时间排序、`remove_file` 删除最旧的备份，只保留
  最近 20 份。destructive: `remove_file`（仅限自身管理的备份目录，非用户源文件）。
- **fix_residual_cache**：拼出 `<dir>/residual_cache` 路径，`metadata` 确认存在后 `remove_file` 删除单个
  残留缓存文件。destructive: `remove_file`。
  - **fix_residual_manifest**：类似地对残留 manifest 文件执行 `std::sys::fs::rename`（迁移/改名而非删除）。
  destructive: `rename`。
- **fix_state_db_relocation**：把状态数据库文件 `copy` 到新位置，成功后视为已迁移；copy 失败时改为直接
  `remove_file` 源文件做清理。destructive: `remove_file`（仅在拷贝失败的清理分支触发）。
- **fix_db_orphan_providers**：修复 DB 中的孤儿 provider 记录前，同样执行"超过 21 份备份则删除最旧
  备份"的轮转清理。destructive: `remove_file`（备份轮转）。
- **config_needs_syntax_fix / check_config_toml_syntax**：读取 config 全文，解析 TOML 语法，判断是否
  存在需要自动修复的语法错误（返回码里排除某个"无需处理"的特定错误码）。
- **is_plausible_jwt**：按 `.` 切成 3 段并对前两段做 base64 解码，判定字符串是否形似合法 JWT——用于识别
  `auth.json` 里疑似伪造/占位的 token。
- **is_known_placeholder_token**：小写化后匹配一组已知占位符/示例 token 关键词（如 `sk-test`、
  `placeholder` 等家族），识别用户配置里遗留的示例密钥，避免把示例值当真实凭据处理。
- **is_cc_switch_fingerprint**：检测字符串是否包含竞品/同类工具 "cc-switch" 留下的指纹片段
  （`cc-switch` / `cc_switch` / `codex-switch` / `[model_providers.cc` / `circuit_breaker` /
  `provider_router` 等），用于识别其他 provider-切换工具残留的孤儿配置块。
- **path_is_under_dir**：规范化两个路径后做前缀包含判断，是所有"越权路径"防护判断的底层实现
  （与本仓 `canonicalize + starts_with` 红线同构）。
- **is_top_level_model_key / is_model_provider_assignment / is_profile_assignment**：对 TOML 顶层一行
  文本做 `model =` / `model_provider =` / `profile =` 赋值行的词法判定（含 UTF-8 空白字符判断），供
  写回/清理逻辑定位需要处理的顶层字段。
- **fix_requires_quiet_window**：并非执行"静默窗口"等待本身，而是一张按 issue-kind 返回风险分级
  （0/无需等待、1/建议、2/必须）的策略表，供上层调度决定该修复是否要等 Codex CLI 完全退出后再写。

---

## 2. codex_thread_visibility（62 个函数）

**职责**：Codex 本地 sqlite 状态库中 `threads` 表与磁盘 JSONL rollout 文件之间的"可见性收敛"引擎——
把历史遗留/大小写不一致的 provider 名统一到规范值、把失效的 relay 模型引用做回退、清理孤儿 router 线程，
并保证 DB 记录与 rollout 文件互相一致。所有写操作前后都有 `restore_*` / `retry_*_serial` 兜底路径，
体现"先备份/可回滚"的防御设计。

### 关键 SQL（从伪代码内联字符串常量直接读到，非猜测）

```sql
UPDATE threads SET model_provider = ?1
WHERE model_provider = ?2 OR model_provider = ?3
   OR (model_provider LIKE 'openai' AND model_provider <> ?1)      -- 规范化历史/大小写不一致的 provider 名
UPDATE threads SET model = ?2 WHERE id = ?1                        -- 单条线程模型回退
PRAGMA wal_checkpoint(FULL);
UPDATE threads SET cwd = ?1 WHERE id = ?2 AND COALESCE(cwd, '') = ''  -- 仅回填空 cwd，不覆盖已有值
PRAGMA wal_checkpoint(TRUNCATE);                                    -- 写后立即截断 WAL 文件
PRAGMA table_info(threads)                                          -- 探测表结构以兼容不同 Codex CLI 版本
SELECT ... FROM threads WHERE COALESCE(archived, 0) = 0             -- 所有收敛/巡检只作用于未归档的活跃线程
```

### 关键业务函数

- **cleanup_orphan_router_threads_strict**：以读写模式打开 sqlite（`SQLITE_OPEN_READWRITE`），执行
  `UPDATE threads SET model_provider=...`（见上）把历史/大小写不一致的 provider 归一化，随后
  `PRAGMA wal_checkpoint(TRUNCATE)` 落盘并收缩 WAL 文件，再用 `SELECT COUNT(*)` / `SELECT source` 校验
  受影响行数并取出对应 rollout 路径供后续"缺失 rollout 修复"使用。destructive: DB `UPDATE`（改写用户
  Codex 会话记录的 provider 字段，属于用户数据变更，非文件删除）。
- **checkpoint_after_committed_write**：在一次写事务提交后执行 `PRAGMA wal_checkpoint(TRUNCATE)`，
  保证 WAL 不无限增长。
- **converge_threads_to_provider / converge_router_thread_models_to_catalog**：把线程记录的 provider/模型
  字段收敛到当前 relay 目录（catalog）声明的规范值，是上面 UPDATE 语句的调用方。
- **is_router_or_openai_provider / is_legacy_or_miscased_provider**：SIMD 常量比较实现的 provider 名
  分类器，识别规范的 relay provider 标识（12 字节常量对应 `aimami_relay`，19 字节常量对应更长的
  `aimami-relay-*` 变体）以及任意大小写变体的 `openai`，用于判断一条记录是否需要归一化。
- **open_codex_db_readonly / open_codex_db_for_convergence**：分别以只读（`SQLITE_OPEN_READONLY|URI`）
  和读写模式打开 Codex 状态库，并设置 5 秒 `busy_timeout`，避免与 Codex CLI 本身的写操作发生锁冲突。
- **patch_convergence_rollouts_parallel / _serial、patch_instructions_rollouts_parallel / _serial**：
  对匹配到的 rollout JSONL 文件做批量重写（parallel 版本用 rayon 并发，serial 版本逐个处理，作为并发
  失败时的兜底路径），把过期的 provider/model/instructions 字段替换成规范值。
- **restore_relay_model_threads / restore_convergence_rollout_patch(es) /
  restore_model_fallback_rollout_patches**：patch 失败或需要撤销时的回滚路径，把 rollout 内容还原到
  patch 前状态。
- **fallback_relay_model_threads / patch_model_fallback_rollout**：当某个 AiMaMi relay 模型别名不再可用
  时，把引用该别名的线程模型字段回退成一个可用的默认值。
- **collect_active_rollout_paths / repair_missing_rollouts_for_convergence**：找出 DB 记录了但磁盘上
  rollout 文件缺失的线程，尝试补齐/修复缺失的 rollout 引用。

---

## 3. codex_writer（19 个函数）——含 managed_blocks 概念

**职责**：`~/.codex/config.toml` 的读—改—写引擎。负责识别哪些 provider/model 字段是 AiMaMi relay
自己写入并托管的（"managed"），哪些是用户手写的顶层字段，并在改写配置时安全地替换/清理被托管区块，
不触碰用户自己的其余内容。**这里就是任务里问到的 "managed_blocks" 概念的真实落点**——它不是独立目录，
而是 codex_writer 里一组以固定注释标记包裹的 TOML 区块处理函数。

### 托管区块标记（从字符串常量直接读到）

```
# >>> aimami-relay managed start (DO NOT EDIT MANUALLY)
...
# <<< aimami-relay managed end

# >>> aimami-relay codex-router top start (DO NOT EDIT MANUALLY)
...
# <<< aimami-relay codex-router top end
```

### 关键业务函数

- **strip_all_managed_blocks**（1434 行，本模块最大函数）：扫描整份 config 文本，找到全部
  `# >>> aimami-relay ... start` / `# <<< aimami-relay ... end` 配对区块并整体移除，为重新渲染腾出
  干净的顶层内容——是"退出 relay 模式时把自己写过的所有痕迹擦干净"的核心实现。
- **render_router_top_block / render_bottom_block**：分别渲染文件顶部的 "codex-router top" 区块
  （通常放路由端点/模型目录相关配置）和文件底部的 "managed" 区块（provider 定义等），并用上面的
  DO-NOT-EDIT 注释包裹。
- **is_aimami_owned_provider_name / is_aimami_relay_model_slug**：SIMD 字节比较实现，判定一个
  provider 名 / 模型 slug 是否属于 AiMaMi relay 自己声明的命名空间（`aimami_relay` 及其变体前缀），
  用来区分"我托管的条目"与"用户自己配置的第三方 provider"。
- **strip_invalid_router_top_level_model / top_level_relay_model_requires_cleanup**：检测用户在顶层
  （托管区块之外）手写的 `model = "..."` 是否仍指向已失效的 relay 模型别名，若是则判定需要清理，避免
  relay 关闭后配置文件里残留一个指向不存在 provider 的顶层模型引用。
- **escape_toml_ / extract_toml_string_value / read_top_level_string_value /
  read_top_level_model_line / split_toml_section_header**：TOML 文本层面的转义、取值、分段解析工具函数，
  供上面的渲染/清理函数复用。
- **router_http_contract_issues / router_entry_presence / router_provider_base_url /
  router_provider_local_port**：读取/校验托管 provider 条目里的 `base_url`、本地端口等字段是否满足
  relay 对下游 HTTP 协议的约定（与 invariants 模块的 `verify_router_on_http_contract` 呼应）。
- **user_top_level_profile**：读取用户在顶层定义的 profile 名，用于跟托管 profile 做冲突检测。

---

## 4. codex_project_state（16 个函数）

**职责**：维护 Codex CLI 自己的"项目状态"索引（sqlite 中记录各项目工作目录 cwd 与线程的关联），检测索引
是否稳定/一致，并在需要时从 rollout 文件里回填缺失的 cwd、合并重复目录、修复索引。

### 关键 SQL

```sql
UPDATE threads SET cwd = ?1 WHERE id = ?2 AND COALESCE(cwd, '') = ''   -- 只回填空值，不覆盖已有 cwd
```
（前缀伴随 `PRAGMA wal_checkpoint(FULL);`）——本模块内未见 `remove_file` / `rename` / `truncate` 等文件级
破坏性调用，唯一的写操作是这条限定 `cwd` 为空时才生效的 UPDATE，属于低风险回填。

### 关键业务函数

- **repair_if_needed**：`inspect()` 得到当前项目索引状态 → `stability_issue()` 判断是否存在问题；无问题
  直接返回；有问题则调用 `repair()`，修复后重新 `inspect + stability_issue` 二次确认是否已解决，未解决
  则报告仍需修复。是本模块对外的主入口（inspect → repair → re-verify 的自校验闭环）。
- **repair**（56795 字节，本模块最大函数）：实际执行修复动作的实现（写回归一化后的 cwd/项目目录关联）。
- **stability_issue**：把内部收集到的多条问题原因用 `" | "` 连接成一条可读诊断信息；无具体原因时退化为
  固定文案 `"Codex project index requires repair"`。
- **collect_cwd_backfill_candidates / backfill_missing_cwd_from_rollouts（3 个重载）**：从活跃线程的
  rollout JSONL 文件里提取 cwd 字段，作为 DB 里对应线程 `cwd` 为空时的回填候选来源。
- **is_codex_generated_projectless_dir**：识别路径中是否包含形如 `Documents/Code-<日期片段>-<随机后缀>`
  的 Codex 自动生成"无项目"占位目录（大小写不敏感的路径段匹配 + 类日期分隔符校验），从而在项目列表里
  排除这类自动生成目录，不当作真实用户项目处理。
- **normalize_codex_path**：路径规范化（大小写/分隔符统一），供索引比较使用。
- **merge_unique / string_array_from_map**：去重合并候选目录列表、Map→字符串数组转换的通用工具函数。
- **sqlite_table_columns**：探测 sqlite 表实际列集合，兼容不同 Codex CLI 版本的 schema 差异。
- **active_db_path**：定位当前生效的 Codex 状态库文件路径。

---

## 5. codex_runtime（4 个函数）

**职责**：relay 运行时对 Codex `threads` 表 schema 形状的缓存层（`RuntimeCache`），避免每次都执行
`PRAGMA table_info(threads)` 探测可选列（`recency_at`、`recency_at_ms`、`history_mode`、`thread_source`、
`preview` 等），从而兼容不同版本 Codex CLI 的表结构差异。

### 关键业务函数

- **new / resolve_inner**：构造/惰性求解 `RuntimeCache`，首次访问时执行 `PRAGMA table_info(threads)`
  探测当前 schema 都有哪些可选列存在。
- **latest_schema_matches**：比较缓存记录的 schema 形状与当前实际 schema 是否一致（Codex CLI 升级后
  表结构可能变化，需要判断缓存是否已经过期）。
- **maybe_persist_cache**：schema 不一致或缓存为空时，重新探测并持久化最新 schema 形状到缓存。

---

## 6. invariants（7 个函数）

**职责**：relay「原生直通（NativeOff）」与「路由接管（RouterOn）」两种运行模式下配置文件应满足的不变式
契约检查器，产出结构化 `Violation` 列表（`serde` 可序列化），供 codex_diagnostic 等上层复用。

### 不变式规则原文（从字符串常量直接读到）

```
NativeOff must not keep AiMaMi top-level model_catalog_json
NativeOff must not keep top-level model_provider = "aimami_relay_...
NativeOff must not keep a legacy virtual auth marker
NativeOff must not keep an orphaned virtual unlock auth backup
NativeOff must not keep takeover backup
NativeOff must not keep virtual unlock auth active
NativeOff must not keep virtual unlock auth marker
RouterOn must not keep a legacy virtual auth marker
RouterOn requires top-level model_catalog_json
RouterOn requires either virtual unlock auth or usable real OAuth login
```
路由 HTTP 契约端点/头：`/codex/router/v1`，`xy-authorization` / `proxy-authorization` /
`proxy-authenticate`。

**人话结论**：relay 关闭（NativeOff）时，配置和认证文件必须彻底"清干净"——不能留任何 AiMaMi 顶层模型
声明、遗留的虚拟登录标记、孤儿备份、接管备份；relay 打开（RouterOn）时，必须具备模型目录声明，且必须
有虚拟解锁认证或用户自己真实可用的 OAuth 登录二选一，否则视为状态不一致（这套契约就是判断"relay 有没有
干净退出/正确接管"的唯一权威标准）。

### 关键业务函数

- **verify_invariants_with_depth**（1187 行，本模块最大函数）：按上述全部规则对当前配置面
  （`RouterConfigSurface`）做逐条校验，支持递归深度参数（用于嵌套/多 profile 场景），产出 Violation 列表。
- **verify_router_on_http_contract**：单独校验 RouterOn 模式下的 HTTP 路由契约（路径 + 认证头集合）
  是否满足预期，呼应 codex_writer 的 `router_http_contract_issues`。
- **verify_thread_provider**：校验单条线程记录的 `model_provider` 是否与当前模式匹配（呼应
  codex_thread_visibility 的 provider 收敛逻辑）。
- **parse**（`RouterConfigSurface::parse`）：从 config 文本解析出供上述校验函数使用的结构化配置视图。
- **serialize（×3）**：`Violation` 类型的 `serde::Serialize` 实现（自动生成，按要求仅计数未逐行读）。

---

## 7. fetch_models（4 个函数）

**职责**：向第三方/自定义 provider 拉取可用模型列表（`/v1/models` 类接口）时的请求构造与响应解析辅助层。

### 关键业务函数

- **parse_extra_headers**：把用户在 provider 配置里填写的 `extraHeaders` JSON 字符串解析成
  `http::HeaderMap`；非 JSON 对象时报错 `"extraHeaders must be a JSON object"`；空字符串时返回空表；
  对每个键值做 `HeaderName`/`HeaderValue` 合法性校验，非法则报出具体的 header 名/值。
- **parse_model_ids**：解析上游响应 JSON，取 `data` 数组字段得到模型 id 列表；缺少 `data` 字段时报错
  `"upstream did not return a standard model list"`；数组为空时报错 `"upstream model list is empty"`。
- **sanitize_api_key**：对用户粘贴的 API Key 做首尾空白/换行（含 `\r\n`）裁剪，避免尾随换行破坏
  `Authorization` 请求头。
- **is_transient_error**：把错误信息小写化后匹配一组关键词（含 `"connection"` 等），判定是否为可重试的
  瞬时网络错误，用于上层决定是否自动重试模型列表拉取。

---

## 8. legacy_virtual_auth（8 个函数）

**职责**：清理/回退"旧版虚拟认证"机制遗留状态的模块——早期 AiMaMi relay 可能会往 Codex CLI 的
`auth.json` 里注入一个虚拟/伪造的 OAuth 凭据以绕过登录，本模块负责在升级/关闭 relay 时安全撤销这套机制，
把 `auth.json` 还原成用户自己的真实凭据。**这是本次分析里唯一直接触碰用户认证文件的模块，风险等级最高。**

### 关键业务函数

- **cleanup**（本模块核心，处理 `virtual-auth-marker.json` 及一个 26 字节命名的备份文件）：
  1. `read_marker` 读取遗留的虚拟认证标记文件；
  2. 读取当前 `auth.json`，与标记里记录的 token 值做字节级比较（`tokens` / `OPENAI_API_KEY` 字段），
     判断当前 `auth.json` 是否仍是 relay 自己注入的虚拟凭据；
  3. 若仍是虚拟凭据：调用 `read_user_owned_backup` 取回之前备份的用户真实 `auth.json`，通过
     `atomic_write::write_atomic_with_mode` 原子覆盖回当前 `auth.json`；**若没有可用备份或恢复写入失败，
     会直接 `std::sys::fs::remove_file` 删除当前的（虚拟）`auth.json`**，以便 Codex CLI 下次运行时
     重新走真实登录；
  4. 无论上一步走哪条分支，最终都会 `remove_file_if_exists` 删除标记文件和备份文件本身完成清理。
  destructive: **`remove_file`（可删除用户 `auth.json`）、原子覆盖写 `auth.json`**——这是全部 9 个模块里
  唯一会删除/覆盖用户凭据文件的函数，且行为受第 2 步的字节比较门控（只有确认当前文件仍是虚拟凭据才会动手）。
- **read_user_owned_backup**：读取备份的 `auth.json` 内容并解析；解析后额外调用
  `codexmate_lib::core::auth::is_aimami_managed_virtual_auth` 做二次确认——**如果这份"备份"本身又被
  判定为托管/可切换的虚拟认证（而非用户自己的真实 OAuth/API Key 认证），会拒绝把它当作可恢复的备份使用**，
  报错 `"legacy auth backup is not user-owned auth; backup was preserved"` 并保留该备份文件不做处理。
  这是防止"用虚假备份覆盖虚假凭据"的安全兜底。
- **restorable_backup_auth**：对外暴露"当前是否存在一份可安全恢复的用户备份"的查询接口，内部复用
  `read_marker` + `read_user_owned_backup` 的同一套校验逻辑。
- **marker_exists**：仅用 `metadata` 判断 `virtual-auth-marker.json` 是否存在，不做内容解析。
- **read_marker**：读取并 JSON 反序列化标记文件内容，供 `cleanup` / `restorable_backup_auth` 复用。
- **remove_file_if_exists**：`remove_file` 的容错封装——`NotFound` 视为成功（幂等删除），其他 IO 错误
  才真正报错。destructive: `remove_file`。
- **cleanup 的两个匿名闭包**（`_$u7b$$u7b$closure$u7d$$u7d$`）：`atomic_write` 失败时的错误信息格式化
  收尾逻辑，非独立业务函数。

---

## 9. 完整性说明

- **无 managed_blocks 独立目录**：任务给定的 9 个目录中，`managed_blocks` 在磁盘上不存在
  （`core/relay/` 下实际存在的兄弟目录含 `codex_config_reconciler`、`router_reconciler`、
  `router_transition`、`atomic_write` 等，均不在本次任务范围内）；其功能已在 §3 codex_writer 中定位并说明。
- **无截断/失败反编译**：全部 203 个已枚举函数文件头均无 `[TRUNCATED]` / `[DECOMPILE-FAILED]` 标记，
  抽样读取的业务函数体也未发现 IDA `[N chars total]` 截断桩或空函数体。
- **glue 代码计数（略读未逐行读）**：`serialize_*`（serde 派生）、`checked_fix_result_*`、
  `_$LT$..$GT$::drop`/`drop_in_place` 系列析构器、`cleanup` 的两个闭包等，共约 10 余个函数属于自动生成/
  样板代码，仅计数，未做逐行行为分析。
