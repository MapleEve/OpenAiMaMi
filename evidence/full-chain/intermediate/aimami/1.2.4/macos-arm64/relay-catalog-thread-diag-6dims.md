# 1.2.4 后端 delta 6dims — relay-catalog-thread-diag

- baseline: 1.2.3 → target: 1.2.4
- 模块范围: `core::relay::codex_catalog`（17 函数）、`core::relay::codex_thread_visibility`（15 函数）、`core::relay::codex_diagnostic`（11 函数）、`core::relay::codex_writer`（1 函数）、`core::relay::codex_config_reconciler`（1 函数）
- 证据来源: IDA 反编译伪代码（macOS arm64 + windows x64 delta），未连 IDA、未重逆二进制，只读既有 `.c`
- 反编译状态: 全部锚定函数 `[FULL decompile]`/`1.2.4 NEW-delta`，**未出现** `[TRUNCATED]` 或 `[DECOMPILE-FAILED]` 标记；下文凡涉及具体常量/串均为伪代码中实读字节
- 源文件路径锚点（实读）:
  - `src/core/relay/codex_catalog.rs`
  - `src/core/relay/codex_thread_visibility.rs`
  - `src/core/relay/codex_diagnostic.rs`
  - `src/core/relay/codex_config_reconciler.rs`

> 一句话结论：1.2.4 在 relay 层新增了一条「无账号模型槽（no-account slot）路由 + 线程 provider 收养（orphan adoption）+ 诊断修复」流水线，落点是 `codex_router_catalog.json`（路由目录）、`config.toml`（config_takeover 重写）、`threads` 表（SQLite UPDATE）和一组 journal/recovery 文件；同时引入硬编码的 `gpt-5.x` 系列 native 模型 slug 与 `bundled`/`matching-account-cache` 目录源枚举。

---

## Dim 1 — commands（命令层）

本批 mac delta 全部是 `core::relay::*` 库函数（被上层 command/usecase 调用），不是 Tauri command 本体；命令壳在 win delta 里锚定到同一函数体：

- **`set_codex_no_account_slots`**（win `@0x140e2de30`，函数体名 `set_codex_no_account_slots`，串锚 `aSetCodexNoAcco…`/`aManager_1`/`aSlots`/`aRelaunch`）。这是一个 Rust async 状态机命令（switch on poll 状态 0/1/2/3），DTO 入参形如 `{ Manager, slots, relaunch }`：
  - 校验并写入用户配置的 no-account 模型槽集合（`slots`）。
  - 末态把 `relaunch` 布尔写回出参 → **触发 Codex sidecar 重启**（见 Dim 6）。
  - 末尾 `sub_1407A09A0` 为 Tauri invoke resolver，确认这是注册到 invoke_handler 的命令。
- 其余 mac/win delta 均为该命令与 reconciler 调用的库层，不再单独成命令。

> 其余命令（如 `cmd_set_claude_web_search_compat`）在 win delta 目录内但不属本模块范围，已剔除。

---

## Dim 2 — dto（数据结构）

伪代码中可确认的结构体（Rust mangled symbol 反解）：

- **`NativeThreadModelCatalog`**（`codex_catalog::NativeThreadModelCatalog`）— 1.2.4 新增的「原生线程模型目录」，承载无需账号即可路由的模型集合；有 `supports_reasoning` 方法。
- **`PreparedRouterCatalog`**（`codex_catalog::PreparedRouterCatalog`，见 reconciler 中 `drop_in_place<...PreparedRouterCatalog>`）— `prepare_router_catalog` 产出、`write_prepared_catalog` 序列化落盘的中介结构，字段含 mode（catalog 源枚举，见下）。
- **`RouterCatalogModelIndex::disposition`**（thread_visibility）— 路由目录索引上的处置枚举。
- **`NoAccountModelRestoreEntry`**（thread_visibility，有 `impl serde_core::ser::Serialize`，symbol `…codex_thread_visibility…NoAccountModelRestoreEntry…serialize`）— 无账号模型恢复 journal 的单条记录，序列化写入 journal 文件。
- **`DiagnosticRolloutProviderCache`**（diagnostic，有 `read` 方法）— 诊断侧 rollout provider 缓存。
- **`TakeoverInspection`**（`config_takeover::TakeoverInspection`，reconciler 调 `inspect`/`takeover`）— config.toml 接管前后差异检查结构。
- **catalog 源枚举（串锚）**: `"bundled+matching-account-cache"`、`"bundled"`、`"matching-account-cache"` 三态（win delta 实读串），决定 `load_official_catalog_snapshot`/`prepare_router_catalog` 的合并策略。

---

## Dim 3 — fields（关键字段/键）

来源：伪代码内 serde_json `Index`/`index_into` 的 4 字节键表与 SQL 列名。

**catalog/router 侧**:
- `model`、`model_messages`、`tool_mode`、`visibility`、`slug`（`find_official_reasoning_model` 用 `trim_matches` + `index_into("slug"…)` 检索）
- 内联 system prompt（win delta 实读串，属 native 模型身份注入）:
  - `"You are Codex, a coding agent based on MiniMax-M3. You and the user share the same workspace and collaborate to achieve the user's goals."`
  - `"You are MiMo, an AI assistant developed by Xiaomi. Today's date: {date} {week}. Your knowledge cutoff date is December 2024."`

**无账号槽硬编码 slug（byteswap 常量本地解码，确定片段）**:
- 长 7: `gpt-5.5`、`gpt-5.4`
- 长 11/12/13: `gpt-5.6-` 前缀族（后缀字节片段 `sol` / `luna` / `.6-terra`，由 `canonical_no_account_slot_slug`/`is_no_account_slot_slug` 的重叠 QWORD 比较还原；长名后缀仅给字节片段，不臆造完整商标名）
- `default_no_account_slots` 内对每个 provider 的 `RelayProvider::exposed_models` 去重收集，**硬上限 5 个槽**（`if v80 >= 5 break`）。

**thread_visibility / diagnostic 侧（SQLite 列 + JSON 键）**:
- `threads` 表列: `id`、`model`、`model_provider`、`reasoning_effort`、`rollout_path`、`archived`
- journal/recovery JSON 键: `payload`、`model_reasoning_effort`、`rollout`、`version`、`createdAtMs`、`completedAtMs`、`failure`、`fallbackModel`、`permanentAdoption`、`thread-provider-adoptions`
- provider 配置 TOML 键: `requires_openai_auth`（`codex_writer::router_provider_requires_openai_auth` 解析 toml_edit 后索引该键）、provider 名常量 `"openai"`

---

## Dim 4 — error_paths（错误变体，按模块）

伪代码中实读的错误/日志串（去掉相邻拼接噪声后）：

**codex_catalog**（日志域标签 `[AiMaMi][catalog]`，5 条降级路径，按优先级）:
1. `"merged account model cache with the matching ChatGPT bundled catalog"` — 正常合并
2. `"using the current ChatGPT bundled official model catalog"` — 仅用 bundled
3. `"bundled model command unavailable; using version-matched account model cache"` — bundled 命令拿不到，退回账号缓存
4. `"current ChatGPT bundled catalog unavailable; account model cache is not verified current"` — bundled 缺、账号缓存未校验
5. `"no usable official model source; relay-only catalog will be generated"` — 全部失败，只生成 relay-only 目录
- `read_bundled_cli_version` 入参 CLI 参数 `"--bundled"` / `"--version"`；命令不可用即触发上面路径 3。

**codex_thread_visibility**:
- `"invalid no-account model restore journal contents"`（`load_no_account_model_restore_journal` 解析失败）
- `"session_meta missing"` / `"session_meta payload not found"` / `"session_meta anchors are missing"`
- `"session_meta line length changed before replacement"` / `"session_meta replacements overlap"`
- `"session_meta changed while preparing router migration"`
- `"rollout changed while router migration was streaming; retry required"`
- `"rollout path has no parent"`
- 兜底补丁指令: `"::[AiMaMi][patch-instructions] no donor thread found, using fallback instructionsFollow the user's instructions carefully. Respond helpfully and use tools when appropriate."`

**codex_diagnostic**:
- `"rollout has no database owner"`
- `"ROLLBACK"`（`rusqlite::Connection::execute_batch` 事务回滚命令串）

**codex_config_reconciler**:
- `"prepared Codex catalog mode does not match the config target"`（`reconcile_inner`：prepared 目录 mode 与配置目标不一致直接报错，串长 60，错误码类 9）

---

## Dim 5 — persistence（文件 / DB / config.toml）

### 文件（本机文件系统，relay state 目录下）
- `models_cache.json` — 账号模型缓存输入（`load_official_catalog_snapshot` 读取，`std::fs::read_to_string`）
- `codex_router_catalog.json` — prepared 路由目录输出（`write_prepared_catalog` 写入，`inspect_official_catalog_freshness` 读取做新旧比对）
- `no-account-model-restore`（journal 目录/文件，路径串 `no-account-model-restore` + relay 命名空间串 `relay_no_account_model_restore`）:
  - `load_no_account_model_restore_journal` 读
  - `patch_no_account_model_restore_rollout` 改
  - `remove_no_account_model_restore_journal` → `std::sys::fs::remove_file` 删
- `thread-provider-adoptions`（recovery 文件，键 `version`）— `write_orphan_thread_adoption_recovery_file` 经 `serde_json::ser::to_vec_pretty` + `atomic_write::write_atomic_with_mode` 原子写
- `rollout_orphan_providers`（诊断缓存键/文件，`check_rollout_orphan_providers_with_cache` 读写）
- `config-backups` / `databaseBackups` — reconciler/diagnostic 改 config 与 DB 前的备份目录（`fix_orphan_thread_providers_with_catalog` 内 `qmemcpy(...,"databaseBackups",15)` 后做 DB 备份）

### DB（SQLite，`threads` 表，rusqlite）
thread_visibility 读:
- `SELECT model, model_provider, COALESCE(rollout_path, '') FROM threads WHERE id = ?1 AND COALESCE(archived, 0) = 0`
- `SELECT DISTINCT rollout_path FROM threads WHERE rollout_path IS NOT NULL AND rollout_path <> '' AND COALESCE(archived, 0) = 0`

diagnostic 写（orphan provider 修复，4 个 UPDATE 变体，按保留字段粒度递增）:
- `UPDATE threads SET model_provider = ?1 WHERE id = ?2 AND COALESCE(archived, 0) = 0 AND model_provider = ?3`
- `UPDATE threads SET model_provider = ?1, reasoning_effort = ?2 WHERE id = ?3 AND COALESCE(archived, 0) = 0 AND model_provider = ?4 AND reasoning_effort IS ?5`
- `UPDATE threads SET model_provider = ?1, model = ?2 WHERE id = ?3 AND COALESCE(archived, 0) = 0 AND model_provider = ?4 AND model IS ?5`
- `UPDATE threads SET model_provider = ?1, model = ?2, reasoning_effort = ?3 WHERE id = ?4 AND COALESCE(archived, 0) = 0 AND model_provider = ?5 AND model IS ?6 AND reasoning_effort IS ?7`
- 全部带 `WHERE … AND COALESCE(archived,0)=0` 守卫，仅改未归档线程；事务失败 `execute_batch("ROLLBACK")`。

thread_visibility 写（无账号模型恢复）:
- `UPDATE threads SET model = ?2 WHERE id = ?1`

### config.toml（config_takeover）
- `reconcile_inner` → `config_takeover::inspect` → `config_takeover::takeover` → `codex_config::update_text`（23 长度 key 写入）重写用户 config.toml；前置 `CodexPaths::ensure_directories`。
- 失败/不需要时 `codex_catalog::remove_catalog` 删目录文件。

### Keychain
- 本批 delta 伪代码内 **未** 出现 Keychain/security-framework 调用；凭据写入不在此模块范围。

---

## Dim 6 — sidecar（进程 / Codex 重启）

- `set_codex_no_account_slots` 命令出参 `relaunch=true`（串锚 `aRelaunch`）→ 上层据此重启 Codex sidecar，使新 no-account 槽配置生效。这是本批唯一显式 sidecar 重启信号。
- `reconcile_inner` 重写 config.toml + `codex_router_catalog.json` 后，config_takeover 的产物会被下一次 Codex 启动消费；命令层的 `relaunch` 即对应这个「改配置 → 重启生效」闭环。
- 诊断侧 orphan 收养走 `prepare_thread_metadata_rollout` → `apply_thread_metadata_rollout_adoption`，失败 `rollback_orphan_thread_adoption` + `with_orphan_adoption_rollback` + `mark_orphan_thread_adoption_recovery` 落 recovery 文件；属同进程 DB 事务级回滚，不直接杀进程。

---

## 逐函数清单（name + behavior + destructive）

### codex_catalog（17）
| 函数 | behavior | destructive |
|---|---|---|
| `canonical_no_account_slot_slug` @0x100223380 | 把任意大小写/变体 slug 归一化到固定 canonical 串（switch on 长度 7/11/12/13，byteswap 比较） | 无 |
| `is_no_account_slot_slug` @0x100220f00 | 判断 slug 是否属于硬编码 no-account 槽集合（gpt-5.x 族） | 无 |
| `no_account_slot_slugs` @0x10021fdc0 | 枚举全部合法 no-account slug 列表 | 无 |
| `default_no_account_slots` @0x1002211e0 | 遍历 providers 的 `exposed_models`，按 slug 去重 HashMap 收集，**上限 5** | 无（纯计算） |
| `normalize_no_account_slot_preference` @0x100226630 | 规整用户 no-account 偏好（去重/排序/截断） | 无 |
| `validate_no_account_slots` @0x100222220 | 校验用户提交 slots 合法性，非法返 CoreError | 无 |
| `no_account_slot_routing_changed` @0x1002254f0 | 比较新旧 slot 集合，判定路由是否变化（驱动 relaunch） | 无 |
| `NativeThreadModelCatalog::supports_reasoning` @0x100220fd0 | 判定 native 模型是否支持 reasoning | 无 |
| `find_official_reasoning_model` @0x100222ee0 | 在 official catalog 中按 `model_tail_lower` 找 reasoning 模型（SIMD ASCII lower + trim_matches） | 无 |
| `resolve_native_default_model_from_models` @0x1002279e0 | 从模型集合解析 native 默认模型 | 无 |
| `parse_model_client_version_text` @0x1002255b0 | 解析模型 client 版本文本 | 无 |
| `read_bundled_cli_version` @0x100221a60 | 执行 bundled CLI `--bundled --version` 取版本 | 子进程调用（外部命令，非破坏） |
| `read_bundled_models` @0x10021ac70 | 读 bundled 模型清单 | 无 |
| `load_official_catalog_snapshot` @0x100223520 `[FULL]` | 读 `models_cache.json` + 合并 bundled 目录，按 5 条降级路径产出 snapshot | 只读文件 |
| `inspect_official_catalog_freshness` @0x100225bc0 | 读 `codex_router_catalog.json` 比对 snapshot 新鲜度 | 无 |
| `prepare_router_catalog` @0x10021ffc0 | 编排目录构建（snapshot+default slots→PreparedRouterCatalog） | 无（内存） |
| `write_prepared_catalog` @0x100220d20 | 将 PreparedRouterCatalog 写 `codex_router_catalog.json` | **写文件**（catalog 落盘） |

### codex_thread_visibility（15）
| 函数 | behavior | destructive |
|---|---|---|
| `load_no_account_model_restore_journal` @0x1008ef0b0 | 读 journal，非法 → `"invalid no-account model restore journal contents"` | 读 |
| `remove_no_account_model_restore_journal` @0x1008f1140 | `remove_file` 删 journal | **删文件** |
| `patch_no_account_model_restore_rollout` @0x1008f0460 | 改 journal rollout 字段 | **写文件** |
| `restore_no_account_model_threads` @0x1008e6080 + closure @0x1008e76a0 | 读 journal → SELECT threads → `UPDATE threads SET model=?2 WHERE id=?1` 恢复；完 after `remove_no_account_model_restore_journal` | **改 DB + 删 journal** |
| `session_meta_thread_metadata` @0x1008e0590 | 解析 session_meta 取 thread metadata | 无 |
| `patch_session_meta_line` @0x1008d2ae0 | 单行 patch session_meta | **改 rollout 文件** |
| `replace_session_meta_lines_with_strategy` @0x1008f9090 | 按策略批量替换 session_meta 行（含 overlap/length 校验） | **改 rollout 文件** |
| `prepare_thread_metadata_rollout` @0x1008e2e50 | 准备 rollout 迁移（被 diagnostic 调） | 无 |
| `apply_thread_metadata_rollout_adoption` @0x1008ef8e0 | 应用 rollout 收养（被 diagnostic 调） | **改 rollout/DB** |
| `restore_thread_metadata_rollout_adoptions` @0x1008fa660 | 还原 rollout 收养状态 | **改 rollout/DB** |
| `inspect_thread_provider_convergence_with_reader` @0x1008fb160 | 检查线程 provider 收敛一致性 | 无 |
| `is_routable_official_passthrough_model` @0x1008f0380 | 判定是否可路由 official passthrough 模型 | 无 |
| `RouterCatalogModelIndex::disposition` @0x1008d2630 | 目录索引处置枚举 | 无 |
| `NoAccountModelRestoreEntry::serialize` @0x1008d1c40 | serde 序列化 journal 条目 | 无 |

### codex_diagnostic（11）
| 函数 | behavior | destructive |
|---|---|---|
| `check_rollout_orphan_providers_with_cache` @0x1002621a0 | 用缓存检查 rollout orphan provider（键 `rollout_orphan_providers`） | 无 |
| `check_thread_provider_consistency_with_cache` @0x100263840 | 检查线程 provider 一致性（键 `thread_provider_consistency`） | 无 |
| `DiagnosticRolloutProviderCache::read` @0x10024c700 | 读诊断缓存 | 读 |
| `orphan_provider_fix_ids` @0x1002306b0 | 计算 orphan 修复 id 集 | 无 |
| `prepare_orphan_thread_adoption::{closure}` @0x10024d710 | 准备收养计划 | 无 |
| `fix_orphan_thread_providers` @0x100246ec0 | 入口：调 `fix_orphan_thread_providers_with_catalog` | 编排 |
| `fix_orphan_thread_providers_with_catalog` @0x1002592a0 `[FULL]` | 备份 DB（`databaseBackups`）→ 4 个 UPDATE 变体收养 → 失败 `ROLLBACK` | **改 DB（事务）+ 写 recovery 文件 + 备份** |
| `rollback_orphan_thread_adoption` @0x100251160 | 回滚收养 | **改 DB** |
| `with_orphan_adoption_rollback` @0x10024c630 | 收养 + 自动回滚包装器 | **改 DB** |
| `mark_orphan_thread_adoption_recovery` @0x1002583d0 | 标记 recovery（`failure`/`completedAtMs`） | **写 recovery** |
| `write_orphan_thread_adoption_recovery_file` @0x1002635c0 | `to_vec_pretty`+`atomic_write` 写 `thread-provider-adoptions` | **原子写文件** |

### codex_writer（1）
| 函数 | behavior | destructive |
|---|---|---|
| `router_provider_requires_openai_auth` @0x1005686a0 | 解析 provider TOML，索引 `requires_openai_auth` 布尔 | 无（读 toml_edit） |

### codex_config_reconciler（1）
| 函数 | behavior | destructive |
|---|---|---|
| `reconcile_inner` @0x100a19310 | mode 校验（不一致→"prepared Codex catalog mode does not match the config target"）→ `write_prepared_catalog`/`prepare_router_catalog` → `config_takeover::inspect/takeover` → `codex_config::update_text` 重写 config.toml → 必要时 `remove_catalog` | **重写 config.toml + 写/删 catalog 文件** |

---

## Win parity（windows-x64 delta，14 锚点确认跨平台一致）

win delta 对同名函数做了 `[FULL decompile]` 锚定，行为与 mac 对齐，差异仅在 ABI/状态机形态：
- catalog: `read_bundled_models`/`prepare_router_catalog`/`write_prepared_catalog`/`read_bundled_cli_version`/`load_official_catalog_snapshot` —— 新增 catalog 源枚举 `bundled`/`matching-account-cache`/`bundled+matching-account-cache` 与 native system prompt（MiniMax-M3 / MiMo-Xiaomi），与 mac 共用同一套 `[AiMaMi][catalog]` 降级日志。
- diagnostic: `mark_orphan_thread_adoption_recovery`/`check_thread_provider_consistency_with_cache` —— 同名同行为。
- thread_visibility: 5 个 `codex_thread_visibility::*` 锚点（`prepare_thread_metadata_rollout`/`apply_thread_metadata_rollout_adoption`/`restore_*` 等），SQL 与 journal 路径与 mac 一致。
- config_reconciler: `reconcile_inner` 同名锚点，config_takeover 路径一致。
- 命令壳: `set_codex_no_account_slots`（win 独有锚点，对应 mac 库层 `set_codex_no_account_slots` 实现）。

---

## 不确定性 / 红线

- **无 `[TRUNCATED]` / `[DECOMPILE-FAILED]`**：本批 45 个锚定函数全部完整反编译，无桩。
- 长度 11/12/13 的 no-account slug 后缀仅给出字节片段（`sol`/`luna`/`.6-terra`），不臆造完整商标串；如需完整名请以 IDA `anon_*` 数据符号直读为准。
- `NoAccountModelRestoreEntry` 的精确字段集由 journal 语义 + restore SQL 反推（model/model_provider/rollout_path 等），serialize impl 用 serde derive，逐字段名未在伪代码中以明文 4 字节键全量出现。
- Keychain：本批伪代码内未观测到，不在此模块声明。
