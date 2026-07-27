# 1.2.3 后端完整基线模块分析 — models / repository / plan_mapping / quota_store / api_client

来源：IDA 反编译好的 `.c` 伪代码（已完成 decompile，文件头含 mangled 符号名 + 地址 + `基线 same-set` / `NEW-delta` 标记）。本文档只做**只读整理**，不连 IDA、不逆二进制，基于既有 `.c` 文件内容归纳职责。目标产品为本仓/本机所有者的自家/已授权产品 AiMaMi（版本 1.2.3，macOS arm64）。

扫描目录：
- `core/models/ida/pseudocode/`（175 个函数文件）
- `core/repository/ida/pseudocode/`（99 个函数文件）
- `core/plan_mapping/ida/pseudocode/`（9 个函数文件）
- `core/quota_store/ida/pseudocode/`（7 个函数文件）
- `core/api_client/ida/pseudocode/`（6 个函数文件）

**截断/反编译失败标注**：对全部 296 个文件做了 `TRUNCATED` / `DECOMPILE-FAILED` / `chars total` 关键字扫描，**0 命中**。即本次分析覆盖的所有函数体均为完整伪代码，没有需要标注"内部不臆断"的桩函数。

**版本 delta 标注**：`plan_mapping`、`quota_store`、`api_client`、`models` 四个目录内的全部函数文件头注释均为 `基线 same-set`（相对 1.2.2 未变）。仅 `repository` 目录里有 30/99（约 30%）个函数标注 `1.2.3 NEW-delta`，说明 1.2.3 版本这次改动集中在账号仓储层（repository），新增了账号导入别名、计划状态应用、账号使用量富化（enrich）、订阅对账、备份清理、自动切换请求协调等能力；其余四个目录本版本没有函数级改动。

---

## 1. core::models — DTO / 序列化胶水层

**职责一句话**：`core::models` 是全仓 IPC 命令的数据传输对象（DTO，即前后端之间传递数据用的结构体/枚举，不含业务规则）定义中心，收拢了账号、API 代理、诊断、MCP、技能备份、订阅/计划、会话分析、以及一个完整的语音（Voice）子系统的序列化/反序列化样板代码。

175 个函数中：
- `serialize_*`：93 个（`serde_core::ser::Serialize` 手写实现，逐字段 `serialize_entry`）
- `deserialize_*`：16 个（`serde` 反序列化实现）
- `ok_*` / `ok_with_warnings_*`：57 + 7 = 64 个（`CoreEnvelope<T>::ok` / `ok_with_warnings` 构造器，把业务结果包成统一的 IPC 响应信封，附带 `code="ok"` 和可选 `warnings` 列表）
- 命名业务函数：2 个（`default_voice_history_status`、`CoreError::is_network_error`）

以上 173 个 serialize/deserialize/ok 函数全部是编译器/serde 派生的**样板代码**（按任务要求"只计数不逐条读"），从其符号名反解出的结构体/枚举清单（93 个类型，代表 core::models 定义的 DTO 全集）：

```
AccountExportPayload / AccountImportPayload / AccountImportPreviewEntry / AccountImportPreviewPayload /
AccountImportSkipped / AccountRefreshReport / AccountSummary / AccountTokenStatus / AccountTokenStatusCode /
ApiConfigPayload / ApiConnectivityPayload / ApiModePayload / ApiProxyConfigPayload / ApiProxyDetectPayload /
ApiProxyMode / ApiProxyTestPayload / AppPathState / AppStatusPayload / AuthMode / AutoSwitchConfigPayload /
AutoSwitchStatusPayload / ChangeAnalyticsPayload / ChangeDaySeries / CleanPayload / CodexSession /
CoreSnapshotPayload / CoreWarning / DaemonRunPayload / DiagnoseApiState / DiagnosePayload / DiagnosePlatform /
DiagnoseRegistryState / DiagnoseSessionState / ForceKillCodexPayload / ImageCompatPayload /
InstalledSkillSummary / LogoutPayload / McpServerListPayload / McpServerMutationPayload /
McpServerRemovePayload / McpServerSummary / OauthLoginPayload / PendingAutoSwitchPayload /
PerModeShortcutPayload / PlanStateSource / PlanType / RateLimitWindow / RebuildRegistryPayload /
RefreshChannelReport / RemovePayload / SessionAnalyticsPayload / SessionDaySeries / SessionDeleteFailure /
SessionDeletePayload / SessionExportPayload / SessionListPayload / SessionMigrateWorktreePayload /
SessionWorktreeMigrationInfo / SkillBackupListPayload / SkillBackupSummary / SkillDeleteBackupPayload /
SkillImportPayload / SkillListPayload / SkillRemovePayload / SkillRestorePayload / SubscriptionStateSource /
SubscriptionStatus / SwitchPayload / TokenAnalyticsPayload / TokenDaySeries / ToolAnalyticsPayload /
ToolRankItem / UsageSource / VoiceCaptureState / VoiceGeneratePayload / VoiceHistoryEntry /
VoiceLlmConfigPayload / VoiceOverlayStyle / VoicePermissionState / VoiceProcessingMode /
VoicePromptTemplate / VoiceRuntimePermissionsPayload / VoiceRuntimeStatusPayload / VoiceSpeechModel /
VoiceTemplateKind / VoiceTemplateMutationPayload / VoiceTriggerStyle / VoiceVocabularyAppPayload /
VoiceVocabularyEntry / VoiceVocabularyKind / VoiceVocabularyMutationPayload / VoiceWorkspacePayload
```

值得注意：Voice* 家族有 18 个类型，占 DTO 总数近五分之一，说明语音输入/听写（Voice dictation）是 1.2.3 里一个完整的独立子系统（含权限状态、运行时状态、词汇表、提示词模板、覆盖层样式、触发样式、LLM 配置等），但本次任务范围（models/repository/plan_mapping/quota_store/api_client）不含其专属实现目录，这里只看到它的 DTO 定义。

### 关键业务函数（2 个真实逻辑函数）

| 函数 | 行为 | 破坏性 |
|---|---|---|
| `default_voice_history_status` (`0x100349de0`) | `#[serde(default = ...)]` 默认值提供函数：返回硬编码字符串字面量 `"completed"`（9 字节，`0x6574656C706D6F63` + `0x64` 解码得出），用于语音历史记录条目在缺失 `status` 字段时的反序列化默认值。 | 无 |
| `CoreError::is_network_error` (`0x100349e40`) | 判断 `CoreError` 是否是判别值为 6（即包裹了一个 `reqwest::Error` 的变体）的网络类错误：调用 `reqwest::error::Error::is_connect()` 或 `is_timeout()`，两者任一为真即认定为"网络不可达"类错误，供上层决定是否降级/重试/展示网络提示。 | 无 |

---

## 2. core::repository — 账号仓储 / 注册表 / 订阅编排层

**职责一句话**：`core::repository::Repository` 是全仓最大的业务编排层（orchestration，指"协调多个步骤完成一个完整用例"的代码，不是简单的数据存取），把账号注册表（registry）、账号切换、账号导入/移除、配额缓存（quota_store）、订阅/计划状态、自动切换（auto-switch）、设置（settings）持久化、诊断/清理等能力串成一个个带文件锁保护、可回滚的原子事务。

99 个函数中 30 个标注 `1.2.3 NEW-delta`（本版本新增/改动），其余 69 个为 `基线 same-set`。8 个 `serialize_*` 为该模块内部小型 DTO 的 serde 样板（略读计数，不逐条列出）。

### 关键业务函数（8 个，含目录内全部读码验证过的核心用例）

| 函数 | 行为 | 破坏性 |
|---|---|---|
| `Repository::switch_account` (`0x100a56ab0`, 基线) | 账号切换的完整事务：加载注册表 → 定位目标账号的托管快照路径 → 依次获取快照锁（`FileLock::acquire` on `*.oauth-refresh.lock`）与账号域锁（`AccountDomainLock::acquire`）→ 用 `ExactFileState::capture` 对当前 auth 快照做"改前状态"抓拍（回滚点）→ `atomic_write::copy_atomic_private` 原子拷贝目标账号快照覆盖当前 live 快照 → 更新注册表 `last_used` 时间戳并 `persist_registry` → 失败时用 `ExactFileState::restore` 回滚覆盖前状态 → 成功后清理 auto-switch 临时状态、用配额缓存重建 `AccountSummary`，并在返回信封里附带 `CLIENT_RESTART_RECOMMENDED` 提示，告知调用方需要重启 Codex 客户端才能生效。 | 覆盖写当前 live 认证快照文件（有回滚保护，非不可逆删除） |
| `Repository::remove_accounts` (`0x100a58340`, 基线) | 批量移除账号：去重 key、拒绝移除"当前活跃账号"、对每个待移除账号获取文件锁与域锁 → 加载注册表 → `SnapshotQuarantine::stage` 把待删快照**移入隔离区**（非直接删除）→ 从 `quota_store` 剔除对应配额条目 → `persist_registry` 落盘新注册表 → 成功路径调用 `SnapshotQuarantine::commit_and_purge` **永久清空隔离目录**；失败路径调用 `SnapshotQuarantine::rollback` 把文件移回原位。 | **是**：成功路径最终 `remove_dir_all` 递归删除隔离区文件（见下） |
| `SnapshotQuarantine::commit_and_purge` (`0x100a77070`, 基线) | 二阶段删除的"确认"阶段：对隔离目录调用 `std::sys::fs::remove_dir_all` 递归删除全部文件，再对其父目录调用 `remove_dir` 清理空目录；`NotFound` 类错误被容忍（视为已清理）。 | **是**：`remove_dir_all`，不可逆 |
| `SnapshotQuarantine::rollback` (`0x100a77d80`, 基线) | 二阶段删除的"撤销"阶段：把隔离区里的每个文件通过 `std::sys::fs::rename` 移回其原始路径，再 `remove_dir` 清理空隔离目录；单个文件 rename 失败会收集为错误但不中断其余文件的回滚，最终把所有错误用 `" | "` 拼接返回。 | 否（是撤销/复原操作） |
| `remove_account_backup_files` (`0x100a7e720`, **1.2.3 新增**) | 本版本新增的备份清理工具函数：先 `metadata()` 探测目标路径，如果是普通文件或路径不存在（`NotFound`）则直接返回"0 个被删、0 警告"；如果是目录，则 `read_dir` 遍历目录项，对每一项调用 `std::sys::fs::remove_file` 真删除，统计成功删除数与失败数，失败项汇总进 warnings 列表返回。在 `clean()` 里被连续调用两次，分别清理两类账号备份/临时文件。 | **是**：对目录下每个条目 `remove_file` |
| `Repository::clean` (`0x100a74760`, 基线) | 仓储维护性 GC：拿 session 文件锁 → `load_registry_for_mutation` → `Vec::retain` 过滤掉需要移除的注册表条目（就地压缩数组，保留匹配项）→ 用去重后的当前账号集合重建一个 hash 表 → 更新时间戳并 `persist_registry` → 加载/剪裁 `quota_store` 中不再有对应账号的过期配额条目并 `save_quota_store`（失败仅记 `QUOTA_CACHE_CLEANUP_INCOMPLETE` 警告不中断）→ 两次调用 `remove_account_backup_files` 清空两类备份目录 → 返回"移除的注册表条目数 + 配额清理数 + 警告列表"的信封。 | **是**：间接触发 `remove_account_backup_files` 的真实文件删除 |
| `Repository::get_or_create_device_id` (`0x100a5dbe0`, 基线) | 惰性生成/复用设备 ID：`load_settings` 读取本地设置，若已存在 `device_id` 字段直接 clone 返回；否则用 `uuid::v4::new_v4()` 生成新的随机 UUID，`LowerHex` 格式化为小写十六进制字符串，写回 `save_settings` 持久化后返回。是一个**纯本地生成**、不依赖网络的匿名设备标识符，用于遥测/许可等场景的设备去重。 | 无（本地文件写入，非破坏性） |
| `Repository::get_mystery_unlock_grants` (`0x100a62dc0`, 基线) 与 `Repository::mystery_route_allowed` (`0x100a5d600`, 基线) | 一套内部"隐藏功能解锁授权"（mystery unlock grant）过期清理机制：`get_mystery_unlock_grants` 加载设置里的 grant 列表，用当前时间（毫秒）过滤掉已过期的授权项，若列表发生变化则 `save_settings` 回写精简后的列表，返回仍然有效的授权集合；`mystery_route_allowed` 是一个路由名白名单校验函数，把传入字符串与固定常量做 XOR 比较，命中的合法路由名解出为 `"mcp"`、`"skills"`、`"overview"`、`"accounts"`、`"sessions"`、`"settings"`、`"maintenance"`、`"subscription"` 等 App 内已知功能区名称（还有一个 18 字符的分支未完全解出常量值，字节长度上与 `voice_translation` 等 Voice 相关路由名吻合），只有这些名字才被认为是"合法的解锁目标路由"。整体看是一个受时间限制、按 App 功能区分发的隐藏特性开关系统，不涉及远程网络调用。 | 无 |

其余 91 个未逐条深读的函数按符号名可归入以下用例簇（本次仅按名称结构做分类，未展开伪代码，供后续任务定位）：
- **账号导入/别名/元数据**：`apply_imported_alias`、`apply_account_metadata`、`combine_account_removal_errors`、`recover_account_removal_quarantine`
- **自动切换（auto-switch）编排**：`confirm_pending_auto_switch`×2、`dismiss_pending_auto_switch`、`clear_pending_auto_switch_request`(`_if_cur`)、`sync_auto_switch_request`、`reconcile_auto_switch_request`、`update_auto_switch_config`、`restore_auto_switch_service`、`preflight_account_switch`、`select_rotation_candidate`、`load_account_switch_target`、`load_pending_auto_switch`
- **用量/订阅富化与对账**：`enrich_accounts_via_api_with_subscription`、`enrich_active_account_usage_via_api`、`enrich_single_account_usage`×2、`fetch_usage_with_one_auth_retry`、`apply_usage_result`、`reconcile_subscription_with_live_plan`、`refresh_subscription_metadata`、`apply_plan_state`、`subscription_clock_millis`、`sync_token_status_to_quota_store`
- **注册表重建/迁移**：`rebuild_registry_with_policy`、`carry_over_registry_state`、`live_snapshot_path_for_rebuild`、`registry_item_has_switchable_oauth_snaps`、`load_switchable_account_snapshot`
- **诊断/状态面板**：`diagnose`、`build_daemon_payload`、`make_status_payload_with_service_state`、`resolve_daemon_binary`
- **快照事务原语（ExactFileState）**：`acquire`、`capture`、`stage`×3、`restore`（配合前述 `commit_and_purge`/`rollback` 构成完整的"抓拍 → 暂存 → 提交或回滚"事务模式）

---

## 3. core::plan_mapping — ChatGPT 计划/套餐等级解析

**职责一句话**：把 ChatGPT/Codex 账号接口返回的各种松散 JSON（plan/price/product 字段）与自由文本标签，归一化解析成本 App 内部统一的计划等级枚举（free / plus / pro / pro lite / team / business / enterprise / edu 等）。全部 9 个函数均为 `基线 same-set`。

| 函数 | 行为 | 破坏性 |
|---|---|---|
| `parse_plan_from_account_entry` (`0x100321560`) | 对账号 JSON 依次尝试 10+ 个不同的 JSON Pointer 路径（如 `/plan/type` 等序列化路径常量）取出计划标签并调用 `parse_chatgpt_plan_label` 归一化；全部路径都解析不出已知标签时，退化为遍历账号下的多个 offer/price 条目（`id`/`nickname`/`product`/`name` 等键），对每个候选字符串做 `infer_pro_tier_from_raw` 猜测；仍然失败则用价格字段（`/price/.../amount` 等多层回退路径）的原始金额数值做启发式：金额字符串以 `"...00"` 结尾判定为 Pro（3 档），以 `"...01"` 结尾判定为 Plus（2 档）。 | 无 |
| `parse_chatgpt_plan_label` (`0x100320d30`) | 对输入标签字符串按长度分支 + 常量 XOR 比较，识别出 `free`/`plus`/`pro`/`pro lite`/`team`/`business`/`enterprise`(edu 变体)/`chatgpt pro`(lite) 等已知标签，未命中已知常量时下钻调用 `infer_pro_tier_from_raw` 做子串包含式的模糊推断，仍未知则返回哨兵值 8（unknown）。 | 无 |
| `infer_pro_tier_from_raw` (`0x100320610`) | 对字符串做 `trim` + 转小写后，用子串包含（`is_contained_in`）匹配 `"pro lite"`/`"chatgpt pro lite"`/`"pro"` 等片段，辅以 `normalize_tokens` 分词后逐 token 匹配 `"pro"`/`"20x"`/`"200"` 等关键词，推断出 free(2)/pro(3)/unknown(9) 三态之一。 | 无 |
| `parse_plan_from_usage_json` (`0x100321330`) | 对 usage 接口返回的 JSON，依次尝试 6 个不同字段路径（含普通 index 和 JSON Pointer 两种取值方式）提取标签并交给 `parse_chatgpt_plan_label` 解析，第一个成功命中已知标签的路径即返回，全部失败则返回 unknown(8)。 | 无 |
| `normalize_tokens` / `tokens_contain` / `tokens_contain_number` / `json_scalar_to_string` / `plan_type_json_to_label` | 支撑上述解析的工具函数：分词、token 集合包含判断（含数字模糊匹配变体）、把 JSON scalar（bool/number/string/null）转成字符串、从 JSON 对象里递归查找 `type`/`nickname`/`product`/`name` 等已知键取标签文本。 | 无 |

---

## 4. core::quota_store — 本地配额/用量缓存持久化

**职责一句话**：把每个账号的 API 用量配额（primary/secondary 用量窗口、重置时间等）以 JSON 文件形式缓存在本机磁盘，供离线展示和过期判定使用。全部 7 个函数均为 `基线 same-set`。

| 函数 | 行为 | 破坏性 |
|---|---|---|
| `load` (`0x10031fda0`) | `std::fs::read_to_string` 读取配额缓存文件 → `serde_json` 反序列化 → 对每个条目用 `SystemTime::now().duration_since()` 计算的当前时间戳做过期/新鲜度归一化处理（按 359 天/8640 分钟等阈值做数值钳制）；文件不存在或解析失败返回结构化错误。 | 无（只读） |
| `load_or_default` (`0x10031fb60`) | 包一层 `load`：成功用返回值，失败（含文件不存在）则返回一个空的默认 `QuotaStoreFile`，不向上传播错误。 | 无 |
| `save` (`0x1003200f0`) | 先 `Path::parent` + `DirBuilder::create_all`（权限 `0o777`）确保父目录存在，再 `encode_for_save` 序列化为 JSON，最后调用 `core::relay::atomic_write::write_atomic_with_mode` 做原子写（临时文件 + rename，避免半写状态）。 | 覆盖写配额缓存文件（原子操作，非破坏性） |
| `encode_for_save` / `serialize`(`QuotaStoreItem::serialize`) | 把内存里的 `QuotaStoreItem` 列表序列化成 JSON 对象，字段含用量数值、窗口分钟数、以及一个条件性序列化的 `tokenStatusUpdatedAt`-类时间戳字段（仅当该值存在时才写出）。 | 无 |
| `find_item` (`0x100320250`) | 按 key（字节串）线性扫描配额条目数组，找到长度和内容都匹配的第一条并返回其地址，否则返回 0。 | 无 |
| `upsert_item` (`0x10031f670`) | 按 key 查找已存在条目：若新旧值 `PartialEq` 相等则丢弃传入值、返回"未变化"；若存在但不同则释放旧 key 字符串后原地覆盖（`memcpy` 160 字节整条记录）；不存在则 `grow_one` 扩容后追加；写入后按条目数走 `insertion_sort`（<21 条）或 `driftsort`（≥21 条）保持有序，返回"已变化"布尔值供上层决定是否需要落盘。 | 无（内存态更新，落盘由调用方决定是否触发 `save`） |

---

## 5. core::api_client — 出站 HTTP 客户端 / 代理探测 / 用量拉取

**职责一句话**：负责所有出站网络请求——构建带（可选）代理配置的 `reqwest` 阻塞客户端并做进程级缓存复用、探测/校验代理可用性、以及向 ChatGPT 后端拉取用量快照。全部 6 个函数均为 `基线 same-set`。

| 函数 | 行为 | 破坏性 |
|---|---|---|
| `fetch_usage_snapshot` (`0x1007b7040`) | 拿到（缓存的）HTTP 客户端后，对 ChatGPT 后端的 `wham/usage` 路径发 GET 请求，附带 `account_id` query 参数、`Authorization`、`ChatGPT-Account-Id`、`Accept`、`User-Agent: AiMaMi/1.2.3` 等请求头；检查响应状态码非 2xx 时返回 HTTP 状态错误；限制 `content_length` 与实际读取字节数均不超过 512KB（`0x80000`/`0x80001`），超限返回"响应超出大小限制"错误；成功后用 `serde_json` 解析 body，调用 `plan_mapping::parse_plan_from_usage_json` 解出计划等级、取 `/rate_limit` 字段调用 `classify_windows_by_duration` 分桶用量窗口，两者都拿不到有效数据时返回"数据不可用"，否则组装成 `UsageSnapshot` 返回。 | 无（只读网络请求，本机不落盘） |
| `http_client` (`0x1007b6600`) | 维护一个进程级单例：`OnceLock` + 全局 `Mutex` 保护的缓存 `Arc<reqwest::blocking::Client>`，键为当前代理配置字符串；若代理配置未变则直接复用缓存客户端（`Arc` 引用计数 +1）；变化时 `sanitize_proxy_config` 校验新配置、`ClientBuilder::default()` 建新 client（手动模式下 `into_proxy` 解析代理 URL 并 `ClientBuilder::proxy`），`build()` 成功后原子替换全局缓存并递减旧客户端引用。 | 无 |
| `sanitize_proxy_config` (`0x1007b7860`) | 校验代理配置：非 Manual 模式直接返回"无代理"（Ok(None)）；Manual 模式下 trim URL，空字符串报错"Manual proxy mode requires a proxy URL"；`url::ParseOptions::parse` 解析失败则报错；解析成功后校验 scheme 必须是 `http`/`https`/`socks5`/`socks5h` 之一，否则报 "unsupported scheme: {scheme}"。 | 无 |
| `detect_api_proxy_config` (`0x1007b8410`) | 代理自动探测：汇总环境变量候选（`HTTP_PROXY`/`HTTPS_PROXY` 等常见变体）与 `platform::proxy::detect_system_proxy_candidates()` 返回的系统代理候选，按 host 去重（跳过 `127.0.0.1`/`::1`/`localhost` 自身），对每个候选 URL 依次尝试 `TcpStream::connect_timeout`（200ms 超时）做 TCP 可达性预筛，再调用 `test_api_connectivity` 做真实 HTTP 探测，第一个探测成功的候选即作为最终代理配置返回；全部失败则回退到内置默认（直连）配置。 | 无（会向候选代理地址发起真实出站 TCP/HTTP 连接） |
| `test_api_connectivity` (`0x1007b7c40`) | 对给定代理配置构建/复用客户端，向固定探测 URL 发 HEAD/GET 请求（可选附带 `Authorization` 头），把结果分类为 `invalid_config`（代理配置本身非法）/`client_build_failed`/`network_error`（reqwest 层错误）/HTTP 非 2xx 状态码错误/成功四类，供 `detect_api_proxy_config` 逐个候选调用判定可用性。 | 无（出站网络探测） |
| `classify_windows_by_duration` (`0x1007b96a0`) | 把接口返回的用量窗口列表（`(reset_flag, used_percent, duration_minutes, ...)` 元组）按 `duration_minutes` 分桶：`<361` 分钟为短窗口（约 6 小时），`361~8639` 分钟为中窗口，`>=8640` 分钟（约 6 天）为长窗口，每个桶内保留一条代表性记录，供 UI 展示"5 小时限额 / 每周限额"等分层用量条。 | 无 |

---

## 6. 跨模块交叉观察

- **User-Agent / 内部 API 路径**：`fetch_usage_snapshot` 里硬编码的 `User-Agent: AiMaMi/1.2.3` 与请求路径 `wham/usage` 确认了本次分析目标就是 AiMaMi 应用本体、版本号与任务给定的 `1.2.3` 一致。
- **两阶段删除模式复用**：`SnapshotQuarantine::{stage, commit_and_purge, rollback}` 与 `ExactFileState::{capture, restore}` 构成 repository 层里反复出现的通用事务原语——先做"暂存/抓拍"再决定"提交（真删除/真覆盖）"或"回滚"，`switch_account`、`remove_accounts`、`clean` 等多个高层用例都复用了同一套原语，而不是各自手搓文件操作。
- **destructive 操作集中在 repository**：五个子模块里，`models`/`plan_mapping`/`quota_store`/`api_client` 均为纯计算或原子写（无递归删除、无进程终止、无 `unwrap`/`panic!` 业务路径），唯一的真实"删除文件"操作落在 `repository::SnapshotQuarantine::commit_and_purge`（`remove_dir_all`）与 1.2.3 新增的 `repository::remove_account_backup_files`（逐条 `remove_file`），两者都只处理账号快照/备份文件，不涉及删除用户在 Codex 里的项目文件或全局系统路径。
- **本次未见的类别**：296 个文件里未发现任何 `kill`/`osascript`/进程终止/`exit` 调用，也未发现直接的 `DELETE` HTTP 语义（仅有账号快照文件删除）。
