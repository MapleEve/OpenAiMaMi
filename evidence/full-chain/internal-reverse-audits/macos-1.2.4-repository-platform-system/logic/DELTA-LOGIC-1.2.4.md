# DELTA-LOGIC-1.2.4 — macOS repository-platform 相对 1.2.3 的行为差异

来源：`raw/aimami/1.2.4/macos-arm64/version-delta/repository-platform-system-6dims.md`（6dims 详实分析，15088 字节，生产者：mini 本机，IDA 已加载 1.2.4）。

## 1. 新命令（dim1 — IPC 命令名 / 前端可调用）

| 命令名 | 平台 | 锚点 | 状态 | 职责 |
|---|---|---|---|---|
| `get_claude_web_search_compat` | mac+win | mac `0x10041d7a0` / win `0x140156ef0` | NEW | 读 RelayManager 快照里 claude web search 兼容标志，包成 `CoreEnvelope::ok` 返回；mac 实现 `commands::system::get_claude_web_search_compat` |
| `set_claude_web_search_compat` | win 锚定（mac delta 未含实现体，仅 DTO） | win `0x140e01580` | NEW | 写 enabled 标志，带状态机轮询（case 0/1/2/3）+ Arc 引用计数 clone，返回 `CoreEnvelope`；win 串 `aSetClaudeWebSe`(28)/`aManager_1`(7)/`aEnabled_8`(7) |
| `set_codex_no_account_slots` | win 锚定（mac delta 仅 DTO serialize） | win `0x140e2de30` | NEW | 设置 codex 无账号槽位数 + `relaunch` 布尔；win 串 `aSetCodexNoAcco`(26)/`aManager_1`(7)/`aSlots`(5)/`aRelaunch`(8) |

补充：mac `commands::relay::serialize @0x1007b6530` 是 `CodexNoAccountSlotsPayload` 的 serde 序列化实现，证明该 DTO 在 mac 同名存在，只是 set 命令实现体不在本批 delta 制品里。

## 2. DTO（dim2 — 数据传输对象）

| DTO | 序列化锚点 | 字段线索（key 长度 / 偏移） | 说明 |
|---|---|---|---|
| `ClaudeWebSearchCompatPayload` | mac `core::models::serialize @0x1005825c0` | 单 map entry，key 长 7（`enabled`），值是 bool | claude web search 兼容开关载体；序列化末尾 `}` 收尾，结构极简 |
| `CodexNoAccountSlotsPayload` | mac `commands::relay::serialize @0x1007b6530` | entry1 key 长 5（`slots`）、entry2 key 长 16 @struct+344、entry3 key 长 8 @struct+320（`relaunch`）；末尾 `extend_from_slice("}false")` 表明含一个 bool 直写 | 对应 win `set_codex_no_account_slots` 的 `slots` + `relaunch` 入参；16 字符 key 推测为槽位相关具名场，不臆断具体拼写 |
| `RegistryFile` | mac `core::repository::serialize @0x100755280` | map entry key 长依次 13 / 9 / 16 / 5，再写两个 struct field（offset 48、84）和嵌套 struct（offset 72/80） | registry 文件本体序列化，账号切换预检/复核都读它 |
| `CoreEnvelope<T>` | 多处返回值 | — | 所有命令统一回包信封，`ok`/`err` 变体 |

## 3. 结构体字段（dim3 — 内存布局线索）

- **RelayState 快照**：`get_claude_web_search_compat` 读 `RelayManager::snapshot` 后 `sanitize_for_export`，判断条件是 `*(v2 + 16)` 的 None 检查（`__OFSUB__(0, ...)`），说明 RelayState 在 +16 处有一个 Option 标志位驱动 getter 分支。
- **AccountSummary**：`store_bootstrap_snapshot_progressive` 用 `PartialEq::eq` 深比 AccountSummary（mac `0x10074ff23`），是 bootstrap 是否回写的判定项之一。
- **BootstrapStatePayload**：深比涉及 `AutoSwitchStatusPayload`(+528)、`ApiProxyConfigPayload`(+592)、`ApiConnectivityPayload`(+624)、以及一组 slice(+680/+688)。上述 +528/+592/+624/+680/+688 偏移均属 `store_bootstrap_snapshot_progressive`(0x10074fc60) 的深比字段；该函数体内**不含** 352/816/824 这些账号数组布局偏移。
- **活跃账号数组 / AccountApiContext**：`352 * idx` 账号步长、数组容量 @+824、数据指针 @+816 的布局实际属于 `enrich_active_account_usage_via_api`(0x10075d8a0) 的活跃账号数组（账号条目内 +337 是连通性标志字节）；该函数另按 36 字节步长推进二级指针、每条 288 字节遍历 API 上下文做 token 刷新。
- **AuthSnapshot / AuthFile**：`preflight_account_switch` 与 `verify_account_switch` 都会构造 `AuthSnapshot`/`AuthFile` 做身份 memcmp。
- **connectivity 字段**：账号条目 +337 是一个 u8 标志（是否需要连通性探测），+338 是探测结果位；+160/+168/+176 写 token 剩余秒数与状态码。

## 4. 错误路径（dim4 — 错误变体 / 异常分支）

| 错误串 / 分支 | 出处 | 触发条件 |
|---|---|---|
| `SWITCH_AUTH_VERIFY_FAILED: auth.json identity does not match the requested account` | mac `verify_account_switch @0x10073a420` | auth.json 身份与请求账号不符 |
| `SWITCH_REGISTRY_VERIFY_FAILED: active account does not match the requested account` | 同上 | registry 活动账号与请求账号不符 |
| `[AiMaMi][accounts] repairing non-switchable active snapshot during registry recovery` | 同上（日志串） | registry 恢复期修复不可切换的活动快照 |
| `[AiMaMi][accounts] resolved duplicate account snapshots using credential generation and registry continuity` | 同上（日志串） | 用凭据生成 + registry 连续性消解重复账号快照 |
| `refreshed account snapshot has no API request context`（53 字符） | mac `enrich_active_account_usage_via_api @0x10075d8a0` / win `0x1405056f0` | 刷新后的账号快照缺少 API 请求上下文 |
| `PROGRESSIVE_STATE_SAVE_FAILED`（29 字符） | win `0x1405056f0`（渐进式保存失败路径） | bootstrap 渐进式保存抛错时构造该 CoreError |
| `AiMaMi is already running`（25 字符） | mac `single_instance::imp::acquire @0x1006221b0` | `flock(LOCK_EX|LOCK_NB)` 失败 = 已有实例 |
| `poisoned lock...`（41 字符，win `aPoisonedLockAn`） | win `0x1405056f0` | win 侧 Mutex 中毒 |
| reqwest `is_connect` / `is_timeout` 分类 | mac/win enrich | 连通性错误归为 class 2，其余 class 1，写入账号 +337/+1064 连通性位 |
| `alloc::raw_vec::handle_error` | 多处 | 分配失败兜底（不影响业务语义） |
| CoreError `Display` unwrap 回退 | mac `get_claude_web_search_compat` | 把 CoreError 转 String 失败时 `core::result::unwrap_failed` |

## 5. 持久化（dim5 — 文件 / DB / Keychain / config）

| 持久化对象 | 路径 / 句柄 | 操作 | 函数 |
|---|---|---|---|
| bootstrap 缓存 | `bootstrap_cache`（`load` / `update`） | 先 `load` 深比，**仅在有 diff 时** `ensure_directories` + `update` 回写；无 diff 直接 Ok 跳过 | `store_bootstrap_snapshot_progressive` |
| quota 存储 | `quota_store::upsert_item` | 写账号用量条目（含时间戳） | `enrich_active_account_usage_via_api` |
| token 状态同步 | `sync_token_status_to_quota_store` | 把 token 刷新结果批量同步到 quota_store | `enrich_active_account_usage_via_api` |
| registry 文件 | `load_registry` / `load_account_switch_target` | 只读，供预检/复核 | `preflight_account_switch` / `verify_account_switch` |
| auth.json 身份 | live identity 读取 | 只读 memcmp | `verify_account_switch` |
| 单实例锁文件 | `<data_dir>/dev.aimami.desktop/aimami-single-instance.lock`（data_dir 缺失回退 `temp_dir`） | 建目录 + `OpenOptions` 创建 + `flock(6)`（LOCK_EX\|LOCK_NB）+ `set_len(0)` 截断 + 写 `std::process::id()` | `single_instance::imp::acquire` |
| bundled CLI 路径 | `<bundle>/Contents/Resources/codex` | `is_file` 探测，返回 Option<PathBuf>，不写 | `codex_bundled_cli_path` |

> Keychain：本批函数无 Keychain 写入；token 刷新走 `refresh_token_with_policy` + `fetch_usage_with_one_auth_retry`，结果落内存结构 + quota_store，未观察到底层 keychain 调用。
> config.toml：本批未直接读写 config.toml；claude web search 兼容态存于 RelayState（经 `sanitize_for_export` 导出），落盘细节不在本批 delta 函数体内。

## 6. sidecar（dim6 — 进程 / Codex 重启）

| 行为 | 触发点 | 说明 |
|---|---|---|
| bundled CLI 路径解析 | `codex_bundled_cli_path @0x10027bee0` | 解析 app bundle 内 codex CLI，供后续 spawn；函数内有 AppleScript 串 `if application id "com.openai.codex" is running then tell application id "com.openai.codex" to quit`（IDA 串池交错 artifact，但印证存在 osascript 退 Codex 路径） |
| Codex 重启（仅 payload 字段，非本函数执行） | `set_codex_no_account_slots` 的 `relaunch` 字段 | win setter(0x140e2de30) 仅把 `relaunch: bool` 反序列化进 payload（`v110[16] = aRelaunch`），函数体 725 行全为 serde 状态机，无 kill/spawn/exit；true 时是否重启由下游消费该字段决定，执行体不在本批 delta 制品内 |
| 本机代理连通探测 | `try_connect_local_proxy @0x1008adb70` | `TcpStream::connect_timeout` 200ms 超时，成功关 fd，失败丢 error；返回 bool，供 sidecar 路由决策 |
| 单实例守门 | `single_instance::imp::acquire` | 阻止第二个 AiMaMi 实例启动（mac flock / win WakeByAddress+InterlockedCompareExchange8） |

> 本批函数未直接 `kill`/`spawn` 进程；重启的实际执行体（osascript quit + 重启 Codex）不在本批 delta 制品内，仅通过 `relaunch` 字段和 bundled cli path 暴露接口。

## 7. 逐函数 behavior + destructive

| 函数 | 行为 | destructive |
|---|---|---|
| `commands::system::get_claude_web_search_compat` (mac 0x10041d7a0 / win 0x140156ef0) | 读 RelayManager 快照 → sanitize_for_export → 返回 claude web search 兼容态；无快照时走 CoreError 转 String 分支 | 无（只读） |
| `commands::relay::set_claude_web_search_compat` (win 0x140e01580) | 状态机轮询 setter，Arc clone + serde 反序列化 enabled，写回 RelayState，返回 CoreEnvelope | 有：突变 RelayState + 触发落盘 |
| `commands::relay::set_codex_no_account_slots` (win 0x140e2de30) | 反序列化 slots + relaunch 等 payload 字段（725 行 serde 状态机，唯一 relaunch 操作是 `v110[16] = aRelaunch` 写入结构），函数体无 kill/spawn/exit | 仅反序列化+状态写入，不含 Codex 重启执行体 |
| `core::repository::enrich_active_account_usage_via_api` (mac 0x10075d8a0 / win 0x1405056f0) | 遍历 AccountApiContext → refresh_token_with_policy → fetch_usage_with_one_auth_retry → log_token_refresh_outcome；对 reqwest connect/timeout 做连通性分类；写 quota_store::upsert_item；apply_usage_result / sync_token_status_to_quota_store / finish_refresh_report；空上下文抛 `refreshed account snapshot has no API request context` | 有：quota_store 写 + token 状态突变 |
| `core::repository::preflight_account_switch` (mac 0x10073b080) | load_account_switch_target → 比对 live_account_identity 与目标身份 memcmp，返回 bool（是否可安全切换） | 无（只读预检） |
| `core::repository::verify_account_switch` (mac 0x10073a420) | load_registry → 比对 auth.json 身份与活动账号身份；不符抛 SWITCH_AUTH/REGISTRY_VERIFY_FAILED | 无（只读复核） |
| `core::repository::store_bootstrap_snapshot_progressive` (mac 0x10074fc60) | load bootstrap 缓存 → 逐字段深比（AccountSummary/AutoSwitchStatusPayload/ApiProxyConfigPayload/ApiConnectivityPayload 等）→ 无 diff 直接 Ok；有 diff 则 ensure_directories + update | 有：条件性写 bootstrap 缓存 |
| `core::repository::{Serialize for RegistryFile}` (mac 0x100755280) | serde 序列化 RegistryFile（13/9/16/5 字符 key + 嵌套 struct） | 无（纯序列化） |
| `core::models::{Serialize for ClaudeWebSearchCompatPayload}` (mac 0x1005825c0) | 序列化单字段 enabled | 无 |
| `commands::relay::{Serialize for CodexNoAccountSlotsPayload}` (mac 0x1007b6530) | 序列化 slots/16字符场/relaunch | 无 |
| `core::api_client::try_connect_local_proxy` (mac 0x1008adb70) | TCP connect 200ms 超时探测本机代理，返回 bool | 无（网络探测） |
| `core::sessions::export_session_markdown::{closure}` (mac 0x1009210f0) | from_utf8 转换辅助 | 无 |
| `platform::process::codex_bundled_cli_path` (mac 0x10027bee0) | 解析 bundle 内 codex CLI 路径，is_file 校验 | 无（路径解析） |
| `platform::single_instance::imp::acquire` (mac 0x1006221b0) | 建锁文件目录 + flock + 截断 + 写 PID；占位失败返回 `AiMaMi is already running` | 有：创建/截断锁文件 + 写 PID |

## 8. 跨平台一致性备注

- `get_claude_web_search_compat`：mac + win 都有，签名一致（manager + 命令名 28 字符），行为对齐。
- `enrich_active_account_usage_via_api`：mac/win 逻辑同构（同样 352 字节账号步长、同样 288 字节上下文、同样 `refreshed account snapshot has no API request context` 串），win 多 `PROGRESSIVE_STATE_SAVE_FAILED` 与 `aPoisonedLockAn` 路径，且同步原语换成 `InterlockedCompareExchange8` / `WakeByAddressSingle`（mac 无显式锁，靠 Rust Mutex）。
- `set_claude_web_search_compat` / `set_codex_no_account_slots`：win delta 锚定了完整 setter 实现，mac delta 仅含对应 DTO 的 serialize，说明 mac 侧 setter 实现体不在本批 NEW-delta（可能 1.2.3 已有或归入其它模块制品），消费侧实现时需以 win 行为为准并补 mac 等价路径。
