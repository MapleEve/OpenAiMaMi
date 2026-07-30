# 1.2.4 后端 delta 6dims — relay-router-auth (baseline 1.2.3)

> 目标：AiMaMi（本仓/本机所有者自家产品，所有者在对话渠道下达重建授权）。
> 范围：`codexmate_lib::core::relay::router_unlock_auth`（12 函数）+ `router_reconciler`（3 函数）+ `RelayManager::set_codex_no_account_slots`（新命令）+ 邻接的 `router_exit_guard_state` / `proxy_server` 兼容层。
> 来源：mac 1.2.4 `core/relay/{router_unlock_auth,router_reconciler,manager,proxy_server}/ida/pseudocode/*.c` + `router_exit_guard_state/ida/pseudocode/*.c`；win 1.2.4 `version-delta/ida/pseudocode/` 同名锚点。
> 红线：全部基于真码，`[TRUNCATED]`/`[DECOMPILE-FAILED]` 不臆断；mac 为行为真值源，win 仅做跨平台签名/命名对齐。
> 注：`core/relay/ida/pseudocode/`（顶层）在本盘不存在；relay 顶层无独立 .c，伪代码全部分布在上述子目录。

## 【人话结论】

1.2.4 在 relay 子系统里新增了一整套「托管 API Key / 无账号模式（no-account mode）」鉴权链。`router_unlock_auth` 整个模块 12 个函数全是 NEW-delta，1.2.3 baseline 没有对应物——也就是说 1.2.3 的 router 鉴权是另一套（legacy 实 OAuth 优先），1.2.4 在其上叠加了「AiMaMi 托管 key + 用户实 OAuth 可恢复时回退」的双轨制。新命令 `set_codex_no_account_slots` 让前端可直接写「无账号槽位」并触发 router 迁移；`verify_managed_auth_commit_boundary` 是一道提交闸，在托管鉴权落盘前强制校验 router URL 是 loopback http 且 catalog 与活动槽位严格一致；`router_exit_guard_state` 在 router 迁移进行中阻止 app 退出。

## 【架构解释】关键术语（项目内含义）

- **托管鉴权（managed_api_key_auth）**：router 不再用用户自己的 Codex OAuth，而是注入 AiMaMi 下发的 managed key（带前缀校验），让无账号用户也能走 router。落盘为 `router-unlock-auth-marker.json`。
- **无账号模式（no_account_mode）**：当用户没有可用实 OAuth 且无可恢复备份时，router 切到托管模式；`CodexNoAccountSlot` 是一条「模型 slug + base_url + key 标记 + 展示名」的路由槽。
- **commit boundary（提交闸）**：`verify_managed_auth_commit_boundary` 在「写 marker / 切 router」之前做只读校验，任一项不符就拒绝提交（返回错误，不落盘）。这是防止在错配状态下把托管 key 写死的关键守卫。
- **exit guard（退出守卫）**：`router_exit_guard_state` 是 tauri state 查询函数，迁移进行中返回 2（阻止退出），迁移空闲返回 snapshot 的安全标志。

---

## 6dims 详实 diff

### dim1 — commands（命令）

| 命令 | 平台 | 状态 | 行为摘要 |
|---|---|---|---|
| `set_codex_no_account_slots` | mac `RelayManager::set_codex_no_account_slots::h6cd96d51...` @0x10079a8a0；win `cmd_set_codex_no_account_slots` @0x140e2de30 | **1.2.4 NEW** | 入参 `(self, args, slots_vec: Vec<CodexNoAccountSlot>, launch_warning_flag: i32)`。取 transition lock → snapshot → `validate_no_account_slots` → 逐槽用 catalog 补全 display_name/缺失字段 → `normalize_no_account_slot_preference` → 二次 validate → 若非托管模式或槽位有变则 `persist` → `RouterOnPlan::from_state`+`ensure_ready`+`no_account_slot_routing_changed` → `router_transition::run` → 失败走 `restore_router_enabled_stably` + 可选 `launch_codex_app_warning`；成功返回 `snapshot_sanitized`。 |
| `router_exit_guard_state` | mac @0x1002cae90（顶层 fn，tauri state 查询）；win 同名 | **1.2.4 NEW** | 从 tauri StateManager 取 RelayManager；`router_transition_in_progress()` 为真则返回 2（阻退出）；否则 snapshot → `sanitize_for_export` → 返回 sanitized diagnostic 的安全字节（`v34[164]`）；无 RelayManager 返回 0。纯只读。 |
| 邻接 `set_claude_web_search_compat` | mac @0x10079bbc0 | **1.2.4 NEW**（非本模块核心，同批落地） | 写 `claude_web_search_compat_enabled` 标志（同源 `proxy_server` +350 偏移读出），同样取 transition lock + persist。本 6dims 仅作邻接记录，不展开。 |

> 1.2.3 baseline：无 `set_codex_no_account_slots`、无 `router_exit_guard_state`、无 `router_unlock_auth` 子模块全部 12 函数。

### dim2 — dto（数据结构 / 传输对象）

| DTO | 字段布局（来自真码偏移） | 来源函数 |
|---|---|---|
| `RouterUnlockAuthMarker` | 5 个序列化字段，key 长度 6 / 5 / 10 / 9 / 20，位于结构体偏移 +0 / +24 / +48 / +72 / +80（`write_json::h582de803...` `serialize_entry` 五次）。`commit_auth_for_router` 写盘前填入：uuid（`auth_mode` 字段，9 字符 key）、timestamp（`current_timestamp` + `SystemTime::now` → `duration_since`）、`metadata_exists` 布尔（`v29 ^ 1`，文件存在取反）、OPENAI_API_KEY 对。 | `commit_auth_for_router`、`write_json::h582de803...`、`write_json::h7be466d2...` |
| managed_api_key JSON schema（读入） | 三键校验（`managed_api_key_from_value`）：(a) 9 字符 key（`unk_10166F9AD,len=9`），值 trim 后大小写不敏感等于 `"apikey"`（逐字节比 a/p/i/k/e/y）；(b) 14 字符 key（`unk_10166F9BC,len=14`），值为字符串且长度 ≥ 0x17（23）字节，前 23 字节通过两组 xmmword XOR 掩码常量（`xmmword_10166EEF0` / `xmmword_10166EEE0`）等值校验——即 AiMaMi 下发 key 的固定前缀/结构；(c) 6 字符 key（`unk_10166F9CA,len=6`），若存在则必须不是**非空对象/Map**（variant 5 = `serde_json::Value::Object` 且 Map `len>0` 即判废）。注意 variant 5 是 Object 不是 String（String 是 variant 3，前两键 a/b 用的就是 `==3` 字符串校验）；即第三键允许缺省、允许非对象类型，唯独拒绝「非空 JSON 对象」。 | `managed_api_key_from_value` |
| marker 落盘 BTreeMap（env 注入） | `commit_auth_for_router` 在分支 B 二次写盘前构造 BTreeMap：插入 `"auth_mode"`(9) → `serde_json::to_value(&off_101973CF8)`（一个全局 static 的序列化值，**非** uuid）；`"OPENAI_API_KEY"`(14) → `serde_json::to_value(&v80)`，v80 经 `alloc::fmt::format::format_inner(&unk_1017C8531, uuid_display)` 得到，即 **uuid 格式化字符串**（**非** managed key）。key 名 9/14 已在 `commit_auth_for_router` 直读确认；**value 归属与旧版文档相反且语义可疑（OPENAI_API_KEY 挂 uuid、auth_mode 挂全局 static），`off_101973CF8` 明文未读出，存疑待二次确认**。 | `commit_auth_for_router` @0x10056bb09–0x10056bd22 |
| `CodexNoAccountSlot` | 单条 72 字节（`72 * count` 分配）。字段（`set_codex_no_account_slots` 匹配循环偏移）：+8 slug ptr / +16 slug len / +32 base_url ptr / +40 base_url len / +48 display_name Option（0x8000…=None）。匹配键为 (slug_len, slug_bytes, base_url_len, base_url_bytes) 对。 | `set_codex_no_account_slots`、`normalize_no_account_slot_preference`、`validate_no_account_slots` |
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
| 31 字符 mutation gate label | 31 | `CodexMutationGate::lock` 标签（`unk_10167939B,len=31`），lock 失败返回 variant 11 错误体。 |
| live_auth_state==2 错误串 | 77 | `commit_auth_for_router` 写盘分支，`live_auth_state` 返回 2。 |
| live_auth_state==4 错误串 | 72 | 同上，返回 4。 |
| 84 字节静态 marker blob | 84 | `commit_auth_for_router` dry-run 且无可用实 OAuth 时返回的默认 marker（`unk_10166F865`）。 |
| 88 字符错误串 | 88 | `commit_auth_for_router`：二次校验 `live_auth_state!=1 || !marker_matches` 失败（`unk_10166F9E7`）。 |
| `"managed auth refused: no-account catalog does not match the active relay slots; "` | 78 | `verify_managed_auth_commit_boundary`：catalog slug HashSet ≠ 活动 slot slug HashSet。 |
| URL 解析错误 | — | `verify_managed_auth_commit_boundary`：`url::ParseOptions::parse` 失败（非 http / 非 127.0.0.1 / 非 `/` 路径均在此或紧后被判）。 |
| host/path 不匹配 | — | 同函数：scheme len≠4 或 ≠"http"；host_str len≠9 或 ≠"127.0.0.1"（`0x2E302E302E373231`+0x31 LE）；path 非空且首字节≠47（`/`）。 |
| router http contract issues | — | `router_http_contract_issues` 返回多条 → `join_generic_copy(""; ")` → 错误。 |
| io 读 marker/catalog 失败 | — | `std::fs::read_to_string` 在 `verify_managed_auth_commit_boundary` 读 router 契约文件 / `codex_router_catalog.json` 失败 → io::Error display 包 CoreError。 |
| `router_transition::run` 失败 | — | `set_codex_no_account_slots`：v96==0x8000…1 → 走 `restore_router_enabled_stably`，错误格式串 `unk_1017CCFDF`（含 CoreError display）与 `unk_1017CD058`。 |
| 78 字符 router 未就绪串 | 78 | `set_codex_no_account_slots`：`v91==1 && v92` 路径下 slot 未变更但 router 状态不一致（`unk_1016793D7`）。 |
| `install_managed_api_key_auth::{closure}` ×3 | — | h33c05…（io::Error）、h44321…（String）、hca2393…（io::Error）三个错误格式闭包，被 `commit_auth_for_router` 在原子写/校验失败时复用。 |

### dim5 — persistence（文件 / DB / Keychain / config.toml）

| 落盘物 | 路径来源 | 写法 | 调用者 |
|---|---|---|---|
| `router-unlock-auth-marker.json` | `paths[73]/paths[74]`（codex config dir）+ `"router-unlock-auth-marker.jsoncodexmate_lib::core::relay::router_unlock_authaimami_router_unlock_auth"` 拼接（30 字符段，IDA 把相邻字符串拼读了，真实文件名为 `router-unlock-auth-marker.json`） | `write_json::h582de803...` → `atomic_write::write_atomic_with_mode`（原子写） | `commit_auth_for_router` |
| managed key 源文件 | `paths[4]/paths[5]` | `std::fs::read_to_string` 只读 | `managed_api_key`、`managed_api_key_marker_matches`、`commit_auth_for_router` |
| 用户实 OAuth 备份 | marker 指向的 backup 路径 | `copy_atomic_private`（原子私有拷贝，覆盖备份）+ `validate_user_owned_auth_backup` 只读校验 | `commit_auth_for_router` |
| `codex_router_catalog.json` | `paths[73]/paths[74]` + `"codex_router_catalog.json"` | 只读：`read_top_level_string_value("model_catalog_json",18)` + `read_catalog_model_slugs` | `verify_managed_auth_commit_boundary` |
| router http 契约文件 | `paths[7]/paths[8]` | 只读 `read_to_string` → `router_http_contract_issues` 校验 | `verify_managed_auth_commit_boundary` |
| RelayManager 状态库 | `RelayManager::persist::h834ff2e1...` | 原子 persist（slot 数组写入 RelayState +16/+17/+18） | `set_codex_no_account_slots`（非托管模式或槽位变更时） |
| codex config（router 切换产物） | `router_transition::run` 内部 | 由 transition 写 codex 配置 | `set_codex_no_account_slots` |

> 无 Keychain 写入；无 config.toml 直写。所有写盘均走 `atomic_write::*` 或 `persist`，未观测到裸 `fs::write`。

### dim6 — sidecar（进程 / Codex 重启）

| 行为 | 触发条件 | 函数 |
|---|---|---|
| `launch_codex_app_warning` | `set_codex_no_account_slots` 的 `a4`(launch_warning) 为真 **且**（router_transition 失败 `OR` 路由实际变更后 v91==1,v92 匹配） | 提示用户 Codex app 需重启以应用新路由 |
| `router_exit_guard_state` 阻退出 | `router_transition_in_progress()` 为真 → 返回 2 | app 退出前查询；迁移中拒绝退出 |
| `router_transition::run` | `set_codex_no_account_slots` 槽位变更后 | 可能触发 codex 侧重连/重启（transition 内部） |
| `restore_router_enabled_stably` | `router_transition::run` 失败 | 把 router_enabled 回滚到稳定态，再决定是否警告 |

---

## 逐函数表（name + behavior + destructive）

| 函数 (mac @addr) | behavior | destructive |
|---|---|---|
| `router_unlock_auth::commit_auth_for_router` @0x10056b3f0 | 双模式入口。a3=0：load_auth_file → `auth_is_usable_real_oauth` → 可用则返回 variant 11（无操作成功），不可用返回 84 字节默认 marker。a3≠0：ensure_directories → 拼 marker 路径 → `live_auth_state` 分派（2/4 错误）→ 读 managed key 后**按 managed key 成功/失败分两支**（行 223 `!__OFSUB__(-v66,1)` 判定，非单一线性链）：**分支 A（managed key 成功）**：`managed_api_key_marker_matches` 已装则直接 variant 11（用现成 marker）；否则构 marker（uuid+timestamp+exists flag）→ **单次** `write_json::h582de803` 落盘 → return；**不读备份、不 copy、不二次校验**。**分支 B（managed key 失败/不可用）**：才走完整恢复链：读用户备份 → `validate_user_owned_auth_backup` → `copy_atomic_private` 覆盖备份 → uuid+构 marker → **首次** `write_json::h582de803`（marker）→ 构 BTreeMap(auth_mode/OPENAI_API_KEY) → **二次** `write_json::h7be466d2`（env 注入对）→ 二次校验 `live_auth_state==1 && marker_matches` 失败则 88 字节错误串。 | **是**：两支均原子写 `router-unlock-auth-marker.json`（A 单次、B 双次）；分支 B 额外原子覆盖用户 OAuth 备份。 |
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

---

## 跨平台一致性（mac vs win）

- mac 是行为真值源。win `version-delta` 中：
  - `cmd_set_codex_no_account_slots` @0x140e2de30 — 新命令在 win 同步存在，同 `set_codex_no_account_slots` 命名，签名一致（command wrapper）。
  - `router_unlock_auth28inst` @0x140410960 — win 侧是薄错误格式闭包（`sub_141509590` format + dealloc），对应 mac 的 `install_managed_api_key_auth::{closure}` 一类。
  - `router_reconciler35verif` @0x1408f69b0 — win 侧同样是薄闭包（format + 条件 dealloc）。
- 结论：mac 与 win 都落地了新命令与 reconciler 守卫；win delta 提供的锚点函数多为闭包/格式化层，主体逻辑在 mac 侧可完整读出，未观测到 mac/win 行为分叉。

## 不确定性 / 红线

- 静态字符串常量（`unk_10166F865` 84B、`unk_10166F9E7` 88B、`unk_1016793D7` 78B、live_auth_state 2/4 的 77/72B 串、`unk_1017CCFDF`/`unk_1017CD058`/`unk_1017CD00B`/`unk_1017CD058` transition 错误模板）未在伪代码内联展开，长度与调用点已实测，**具体文案字节未读出**，不臆造内容。
- `RouterUnlockAuthMarker` 5 个字段 key 的具体英文名（6/5/10/9/20 字符）由 serialize_entry 长度推断，未直读字符串池；BTreeMap 的 `"auth_mode"`(9)/`"OPENAI_API_KEY"`(14) 已在 `commit_auth_for_router` 直读确认。
- managed_api_key 的 14 字符 key 名与 23 字节前缀校验常量（`xmmword_10166EEF0`/`xmmword_10166EEE0`）未读出具体值——这是 AiMaMi managed key 的敏感识别位，按脱敏红线不还原明文，仅记录校验机制。
- `is_anthropic_thinking_signature_rejection` 本次仅登记文件存在，未深读 body；`proxy_server/client_for` 是 RwLock gym 而非鉴权本体。
- 未标注 `[TRUNCATED]`/`[DECOMPILE-FAILED]`；所读 .c 均为完整伪代码。
