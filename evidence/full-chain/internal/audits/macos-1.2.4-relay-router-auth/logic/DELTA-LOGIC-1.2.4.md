# DELTA-LOGIC-1.2.4 — macOS relay-router-auth 相对 1.2.3 的行为差异

来源：`raw/aimami/1.2.4/macos-arm64/version-delta/relay-router-auth-6dims.md`（6dims 详实分析，20133B）+ `DELTA-FINAL-1.2.4.md`（跨平台整合终稿，27345B）。只读消费，不连 IDA、不逆二进制、不臆断。

## 1. 前端 delta

1.2.4 IPC 命令数 134（1.2.3=131），新增 3 条（-0 删除）：
- `set_codex_no_account_slots`（relay-page L3356/L3522 接入，`_r` onSave → `h.mutateAsync({slots, relaunch})`）
- `get_claude_web_search_compat`（maintenance-page L436 useQuery）
- `set_claude_web_search_compat`（maintenance-page L439 useMutation）

`router_exit_guard_state` 后端有命令注册，但前端 page 级 delta 未发现直接消费者（ipc-contracts.jsonl/frontend-contract-report.md/frontend-control-flow.jsonl 三处 0 命中），属 app 退出流（疑在根组件/window 关闭钩子），出 page 级 delta 范围。这是 1.2.4 唯一「后端有命令但前端 page 级未定位消费者」的条目，记 accepted_unknown，不视为悬空。

## 2. 后端 delta（6dims 详实，非只命令）

### changelog ↔ relay-router-auth 相关模块映射

| changelog | relay-router-auth 相关模块/函数 | 关键行为 |
|---|---|---|
| **A 优化无账号登录模式，修复中转模型不显示及关闭路由后状态残留** | `router_unlock_auth`（12 函数全 NEW）+ `router_reconciler`（3 函数）+ `manager::set_codex_no_account_slots` + `router_exit_guard_state` | **双轨鉴权**：在 1.2.3 实 OAuth 单轨之上叠加「AiMaMi 托管 key + 无账号槽位路由」双轨；`commit_auth_for_router` 双分支入口（A managed key 成功单次写 / B managed key 失败走完整恢复链双次写+覆盖 OAuth 备份）；`verify_managed_auth_commit_boundary` 提交闸（URL 必须 http+127.0.0.1+`/`、router http 契约无 issues、catalog slugs 与活动 slot slugs HashSet 严格相等）；`router_exit_guard_state` 迁移中返回 2 阻退出 |
| **B 新增 Claude WebSearch 声明过滤兼容开关** | `manager::set_claude_web_search_compat` + `proxy_server::claude_web_search_compat_enabled` | 读/写 RelayState 的 `claude_web_search_compat_enabled` 标志（proxy_server +350 偏移，mutex 保护，poison 时返回 1）；`set` 写前用 `strip_hosted_web_search_tools` 语义决定剥离策略 |

### dim1 — commands（1.2.4 新增 IPC，共 4 个；1.2.3 baseline 全无）

| 命令 | 平台 | 状态 | 行为摘要 |
|---|---|---|---|
| `set_codex_no_account_slots` | mac `RelayManager::set_codex_no_account_slots` @0x10079a8a0；win `cmd_set_codex_no_account_slots` @0x140e2de30 | **1.2.4 NEW** | 入参 `(self, args, slots_vec: Vec<CodexNoAccountSlot>, launch_warning_flag: i32)`。取 transition lock → snapshot → `validate_no_account_slots` → 逐槽用 catalog 补全 display_name/缺失字段 → `normalize_no_account_slot_preference` → 二次 validate → 若非托管模式或槽位有变则 `persist` → `RouterOnPlan::from_state`+`ensure_ready`+`no_account_slot_routing_changed` → `router_transition::run` → 失败走 `restore_router_enabled_stably` + 可选 `launch_codex_app_warning`；成功返回 `snapshot_sanitized`。 |
| `router_exit_guard_state` | mac @0x1002cae90（顶层 fn，tauri state 查询）；win 同名（薄） | **1.2.4 NEW** | 从 tauri StateManager 取 RelayManager；`router_transition_in_progress()` 为真则返回 2（阻退出）；否则 snapshot → `sanitize_for_export` → 返回 sanitized diagnostic 的安全字节（`v34[164]`）；无 RelayManager 返回 0。纯只读。 |
| `get_claude_web_search_compat` | mac @0x10041d7a0；win @0x140156ef0 | **1.2.4 NEW** | 读 RelayState 的 `claude_web_search_compat_enabled` 标志（proxy_server +350 偏移，mutex 保护）。 |
| `set_claude_web_search_compat` | mac 完整 setter@0x10079bbc0（157 行，非截断）；win @0x140e01580 | **1.2.4 NEW** | 写 `claude_web_search_compat_enabled` 标志（同源 `proxy_server` +350 偏移读出），取 transition lock + persist。**本轮(第3轮)更正**：原陈述"mac setter 实现体不在本批"为陈旧误判，mac 侧完整实现见 `set_claude_web_search_compat_0x10079bbc0.c`，双互斥锁+panic-poison 检查+RelayState 比对+条件 persist+sanitize_for_export 返回，与 win 侧逻辑等价。 |

### dim2 — dto（数据结构 / 传输对象）

| DTO | 字段布局（来自真码偏移） | 来源函数 |
|---|---|---|
| `RouterUnlockAuthMarker` | 5 个序列化字段，key 长度 6 / 5 / 10 / 9 / 20，位于结构体偏移 +0 / +24 / +48 / +72 / +80（`write_json::h582de803` `serialize_entry` 五次）。`commit_auth_for_router` 写盘前填入：uuid（`auth_mode` 字段，9 字符 key）、timestamp（`current_timestamp` + `SystemTime::now` → `duration_since`）、`metadata_exists` 布尔（`v29 ^ 1`，文件存在取反）、OPENAI_API_KEY 对。 | `commit_auth_for_router`、`write_json::h582de803`、`write_json::h7be466d2` |
| managed_api_key JSON schema（读入） | 三键校验（`managed_api_key_from_value`）：(a) 9 字符 key，值 trim 后大小写不敏感等于 `"apikey"`；(b) 14 字符 key，值为字符串且长度 ≥ 0x17（23）字节，前 23 字节通过两组 xmmword XOR 掩码常量（`xmmword_10166EEF0`/`xmmword_10166EEE0`）等值校验——AiMaMi 下发 key 的固定前缀/结构；(c) 6 字符 key，若存在则必须不是非空对象/Map（variant 5 = `serde_json::Value::Object` 且 Map `len>0` 即判废）。 | `managed_api_key_from_value` |
| marker 落盘 BTreeMap（env 注入） | `commit_auth_for_router` 分支 B 二次写盘前构造 BTreeMap：插入 `"auth_mode"`(9) → `serde_json::to_value(&off_101973CF8)`（全局 static，**非** uuid）；`"OPENAI_API_KEY"`(14) → `serde_json::to_value(&v80)`，v80 经 `alloc::fmt::format::format_inner` 得到 uuid 格式化字符串（**非** managed key）。**value 归属与旧版文档相反且语义可疑，off_101973CF8 明文未读出，存疑待二次确认**。 | `commit_auth_for_router` @0x10056bb09–0x10056bd22 |
| `CodexNoAccountSlot` | 单条 72 字节（`72 * count` 分配）。字段：+8 slug ptr / +16 slug len / +32 base_url ptr / +40 base_url len / +48 display_name Option（0x8000…=None）。匹配键为 (slug_len, slug_bytes, base_url_len, base_url_bytes) 对。 | `set_codex_no_account_slots`、`normalize_no_account_slot_preference`、`validate_no_account_slots` |
| `RelayState`（snapshot_sanitized 返回） | 0x140（320）字节 relay state + 0x30（48）字节 trailer：trailer 含 `[+0..]+0x140` relay state、`+0x140`=0、`+0x148`=8、`+0x150`=0、`+0x158`=0x8000…（sentinel）。 | `router_exit_guard_state`、`set_codex_no_account_slots` 成功路径 |

### dim3 — fields（关键字段/标志位）

| 字段 | 位置 | 含义 |
|---|---|---|
| `live_auth_state` 返回码 | `commit_auth_for_router` 调用点 | `==2` → 77 字符错误串；`==4` → 72 字符错误串；`==1` 且 marker 匹配 → 提交成功（variant 11）。 |
| `should_use_no_account_mode` 返回 | `from_state` +72 | 1=托管/无账号模式（走 `normalize_no_account_slot_preference`）；0=实 OAuth 模式（槽位置空 `{ptr=0,cap=8,len=0}`）。 |
| force 标志 `a2/a3` | `should_use_no_account_mode`(a2)、`commit_auth_for_router`(a3)、`set_codex_no_account_slots`(a4=launch_warning) | `commit_auth_for_router` a3=0 为 dry-run 只读路径；a3≠0 才 ensure_directories + 写盘。`set_codex_no_account_slots` a4 控制是否在迁移失败/路由变更后弹 Codex 重启警告。 |
| RelayState +317 字节 | `from_state` `*(a2+317)` 作为 `should_use_no_account_mode` 的 force 入参 | snapshot 内的「强制无账号」标志位（前端可配）。 |
| proxy_server +350 字节 | `claude_web_search_compat_enabled` | claude web search 兼容开标志（mutex 保护，poison 时返回 1）。 |
| RouterOnPlan +72 | `from_state` | `use_no_account` bool，贯穿 ensure_ready / transition。 |

### dim4 — error_paths（错误变体，全部真码实测）

| 错误串/变体 | 长度 | 触发点 |
|---|---|---|
| `"Codex router transition lock is poisoned"` | 40 | `set_codex_no_account_slots`：transition Mutex 中毒（panic_count 残留）直接返回。 |
| 31 字符 mutation gate label | 31 | `CodexMutationGate::lock` 标签，lock 失败返回 variant 11 错误体。 |
| live_auth_state==2 错误串 | 77 | `commit_auth_for_router` 写盘分支，`live_auth_state` 返回 2。 |
| live_auth_state==4 错误串 | 72 | 同上，返回 4。 |
| 84 字节静态 marker blob | 84 | `commit_auth_for_router` dry-run 且无可用实 OAuth 时返回的默认 marker。 |
| 88 字符错误串 | 88 | `commit_auth_for_router`：二次校验 `live_auth_state!=1 || !marker_matches` 失败。 |
| `"managed auth refused: no-account catalog does not match the active relay slots; "` | 78 | `verify_managed_auth_commit_boundary`：catalog slug HashSet ≠ 活动 slot slug HashSet。 |
| URL 解析错误 | — | `verify_managed_auth_commit_boundary`：`url::ParseOptions::parse` 失败（非 http / 非 127.0.0.1 / 非 `/` 路径均在此或紧后被判）。 |
| host/path 不匹配 | — | 同函数：scheme len≠4 或 ≠"http"；host_str len≠9 或 ≠"127.0.0.1"；path 非空且首字节≠47（`/`）。 |
| router http contract issues | — | `router_http_contract_issues` 返回多条 → `join_generic_copy(""; ")")` → 错误。 |
| io 读 marker/catalog 失败 | — | `std::fs::read_to_string` 在 `verify_managed_auth_commit_boundary` 读 router 契约文件 / `codex_router_catalog.json` 失败 → io::Error display 包 CoreError。 |
| `router_transition::run` 失败 | — | `set_codex_no_account_slots`：v96==0x8000…1 → 走 `restore_router_enabled_stably`，错误格式串含 CoreError display。 |
| 78 字符 router 未就绪串 | 78 | `set_codex_no_account_slots`：v91==1 && v92 路径下 slot 未变更但 router 状态不一致。 |
| `install_managed_api_key_auth::{closure}` ×3 | — | 三个错误格式闭包（io::Error / String / io::Error），被 `commit_auth_for_router` 在原子写/校验失败时复用。 |

### dim5 — persistence（文件 / DB / Keychain / config.toml）

| 落盘物 | 路径来源 | 写法 | 调用者 |
|---|---|---|---|
| `router-unlock-auth-marker.json` | `paths[73]/paths[74]`（codex config dir）+ `"router-unlock-auth-marker.jsoncodexmate_lib::core::relay::router_unlock_authaimami_router_unlock_auth"` 拼接（30 字符段，IDA 把相邻字符串拼读了，真实文件名为 `router-unlock-auth-marker.json`） | `write_json::h582de803` → `atomic_write::write_atomic_with_mode`（原子写） | `commit_auth_for_router` |
| managed key 源文件 | `paths[4]/paths[5]` | `std::fs::read_to_string` 只读 | `managed_api_key`、`managed_api_key_marker_matches`、`commit_auth_for_router` |
| 用户实 OAuth 备份 | marker 指向的 backup 路径 | `copy_atomic_private`（原子私有拷贝，覆盖备份）+ `validate_user_owned_auth_backup` 只读校验 | `commit_auth_for_router` |
| `codex_router_catalog.json` | `paths[73]/paths[74]` + `"codex_router_catalog.json"` | 只读：`read_top_level_string_value("model_catalog_json",18)` + `read_catalog_model_slugs` | `verify_managed_auth_commit_boundary` |
| router http 契约文件 | `paths[7]/paths[8]` | 只读 `read_to_string` → `router_http_contract_issues` 校验 | `verify_managed_auth_commit_boundary` |
| RelayManager 状态库 | `RelayManager::persist::h834ff2e1` | 原子 persist（slot 数组写入 RelayState +16/+17/+18） | `set_codex_no_account_slots`（非托管模式或槽位变更时） |
| codex config（router 切换产物） | `router_transition::run` 内部 | 由 transition 写 codex 配置 | `set_codex_no_account_slots` |

> 无 Keychain 写入；无 config.toml 直写。所有写盘均走 `atomic_write::*` 或 `persist`，未观测到裸 `fs::write`。

### dim6 — sidecar（进程 / Codex 重启）

| 行为 | 触发条件 | 函数 |
|---|---|---|
| `launch_codex_app_warning` | `set_codex_no_account_slots` 的 `a4`(launch_warning) 为真 **且**（router_transition 失败 `OR` 路由实际变更后 v91==1,v92 匹配） | 提示用户 Codex app 需重启以应用新路由 |
| `router_exit_guard_state` 阻退出 | `router_transition_in_progress()` 为真 → 返回 2 | app 退出前查询；迁移中拒绝退出 |
| `router_transition::run` | `set_codex_no_account_slots` 槽位变更后 | 可能触发 codex 侧重连/重启（transition 内部） |
| `restore_router_enabled_stably` | `router_transition::run` 失败 | 把 router_enabled 回滚到稳定态，再决定是否警告 |

## 3. 逐函数表（name + behavior + destructive）

| 函数 (mac @addr) | behavior | destructive |
|---|---|---|
| `router_unlock_auth::commit_auth_for_router` @0x10056b3f0 | 双模式入口。a3=0：load_auth_file → `auth_is_usable_real_oauth` → 可用则返回 variant 11（无操作成功），不可用返回 84 字节默认 marker。a3≠0：ensure_directories → 拼 marker 路径 → `live_auth_state` 分派（2/4 错误）→ 读 managed key 后**按 managed key 成功/失败分两支**（非单一线性链）：**分支 A（managed key 成功）**：`managed_api_key_marker_matches` 已装则直接 variant 11（用现成 marker）；否则构 marker（uuid+timestamp+exists flag）→ **单次** `write_json::h582de803` 落盘 → return；**不读备份、不 copy、不二次校验**。**分支 B（managed key 失败/不可用）**：才走完整恢复链：读用户备份 → `validate_user_owned_auth_backup` → `copy_atomic_private` 覆盖备份 → uuid+构 marker → **首次** `write_json::h582de803`（marker）→ 构 BTreeMap(auth_mode/OPENAI_API_KEY) → **二次** `write_json::h7be466d2`（env 注入对）→ 二次校验 `live_auth_state==1 && marker_matches` 失败则 88 字节错误串。 | **是**：两支均原子写 `router-unlock-auth-marker.json`（A 单次、B 双次）；分支 B 额外原子覆盖用户 OAuth 备份。 |
| `router_unlock_auth::managed_api_key` @0x10056a610 | 读 managed key 源文件 → from_str JSON → `managed_api_key_from_value` 提取 → 返回 key 字节或 sentinel。 | 否（只读）。 |
| `router_unlock_auth::managed_api_key_from_value` @0x10056cc00 | 三键校验（见 dim2），返回 14 字符 key 的值指针或 0。 | 否（纯校验）。 |
| `router_unlock_auth::managed_api_key_marker_matches` @0x10056d800 | 读 managed key + 读 on-disk marker → memcmp。返回 bool。 | 否（只读）。 |
| `router_unlock_auth::should_use_no_account_mode` @0x10056cd80 | force(a2) 为真 → 1；否则 load_auth_file → `auth_is_usable_real_oauth` 为真 → 0；否则 `has_restorable_real_oauth` 取反。 | 否（只读）。 |
| `router_unlock_auth::has_restorable_real_oauth` @0x10056c8a0 | 读 marker → 若标记用户备份存在则 `backup_contains_usable_real_oauth`；否则 `legacy_virtual_auth::restorable_backup_auth` + `auth_is_usable_real_oauth`。 | 否（只读）。 |
| `router_unlock_auth::has_usable_real_oauth_login` @0x10056cf10 | load_auth_file → `auth_is_usable_real_oauth`。 | 否（只读）。 |
| `router_unlock_auth::install_managed_api_key_auth::{closure}` ×3 @0x10056d080/d190/d230 | 三套错误格式闭包（io::Error / String / io::Error），被 commit 链失败路径复用。 | 否（格式化）。 |
| `router_unlock_auth::write_json` @0x1005693c0（h582de803） | 序列化 `RouterUnlockAuthMarker` 5 字段 → `atomic_write::write_atomic_with_mode`。 | **是**：原子写 marker 文件。 |
| `router_unlock_auth::write_json` @0x100569770（h7be466d2） | 序列化含 `auth_mode`/`OPENAI_API_KEY` 的 BTreeMap → 原子写。 | **是**：原子写。 |
| `router_reconciler::RouterOnPlan::from_state` @0x1008c2ab0 | 从 RelayState 构 plan：`valid_codex_active_ids` + `should_use_no_account_mode(state+317)` + 托管模式下 `normalize_no_account_slot_preference(...,1)`。 | 否（纯计算）。 |
| `router_reconciler::verify_managed_auth_commit_boundary` @0x1008c7170 | 提交闸：URL 必须 http+127.0.0.1+`/`；读 router http 契约文件校验 `router_http_contract_issues`；读 `codex_router_catalog.json` 的 `model_catalog_json`；`read_catalog_model_slugs` vs `no_account_slot_slugs` HashSet 必须相等。全过返回 variant 11。 | 否（只读守卫，失败仅返回错误不落盘）。 |
| `router_reconciler::verify_managed_auth_commit_boundary::{closure}` @0x1008c7d20 | 契约 issues 路径的错误格式闭包。 | 否。 |
| `manager::RelayManager::set_codex_no_account_slots` @0x10079a8a0 | 见 dim1。 | **是**：persist relay state + router_transition + 可选 launch_warning。 |
| `manager::RelayManager::set_codex_no_account_slots::{closure}` @0x10079bb50 | 错误格式闭包（String display）。 | 否。 |
| `router_exit_guard_state` @0x1002cae90 | 退出守卫，迁移中返回 2。 | 否（只读 tauri state）。 |
| `proxy_server::ProxyContext::client_for` @0x10082f6e0 | RwLock Arc 克隆：a3 选 secondary(a2) 否则 primary(a1) 客户端。 | 否（锁 + clone）。 |
| `proxy_server::claude_web_search_compat_enabled` @0x10083a880 | mutex 读 +350 字节标志。 | 否（只读）。 |
| `proxy_server::is_anthropic_thinking_signature_rejection` @0x100848920 | （文件名指示：检测 anthropic thinking-signature 拒绝；本次未深读，仅登记存在。） | 否（推断）。 |

## 4. 跨平台一致性（mac vs win）

- mac 是行为真值源（带符号、伪代码完整可读）。win 是 strip 产物，靠命令名串/格式化闭包签名锚定，主体逻辑在 mac 读全。
- mac 与 win 都落地了新命令 `set_codex_no_account_slots`（mac @0x10079a8a0 / win `cmd_` @0x140e2de30）+ reconciler 守卫（mac `verify_managed_auth_commit_boundary` @0x1008c7170 / win `router_reconciler35verif` @0x1408f69b0 薄闭包）+ router_unlock_auth 闭包（mac `install_managed_api_key_auth` ×3 / win `router_unlock_auth28inst` @0x140410960 薄闭包）。
- win delta 提供的锚点函数多为闭包/格式化层，主体逻辑在 mac 侧可完整读出，未观测到 mac/win 行为分叉。
- `router_exit_guard_state` win 侧无独立锚点（mac-only observed，非确认 win 不存在）。
- `set_claude_web_search_compat`：win delta 锚定了完整 setter@0x140e01580，mac delta 亦有完整 setter@0x10079bbc0（157 行，非截断）。~~原陈述 mac delta 仅含 DTO serialize@0x1005825c0，setter 不在本批~~ — **本轮(第3轮整合复查)更正**：为陈旧误判，mac/win 双侧 setter 逻辑等价（双互斥锁+panic-poison 检查+RelayState 比对+条件 persist）。

## 5. 不确定性 / 红线

- 静态字符串常量（84B marker blob、88B/77B/72B/78B/40B/31B 错误模板、transition 错误模板）未在伪代码内联展开，长度与调用点已实测，**具体文案字节未读出**，不臆造内容。
- `RouterUnlockAuthMarker` 5 个字段 key 的具体英文名（6/5/10/9/20 字符）由 serialize_entry 长度推断，未直读字符串池；BTreeMap 的 `"auth_mode"`(9)/`"OPENAI_API_KEY"`(14) 已在 `commit_auth_for_router` 直读确认。
- managed_api_key 的 14 字符 key 名与 23 字节前缀校验常量（`xmmword_10166EEF0`/`xmmword_10166EEE0`）未读出具体值——这是 AiMaMi managed key 的敏感识别位，按脱敏红线不还原明文，仅记录校验机制。
- `is_anthropic_thinking_signature_rejection` 本次仅登记文件存在，未深读 body；`proxy_server/client_for` 是 RwLock clone gym 而非鉴权本体。
- 未标注 `[TRUNCATED]`/`[DECOMPILE-FAILED]`；所读 .c 均为完整伪代码。
