# AiMaMi 1.2.4 delta 终稿（跨平台整合，baseline 1.2.3）

> 授权：本仓/本机所有者自家已授权产品 AiMaMi，baseline=1.2.3，所有者在对话渠道下达重建授权。
> 方法：只读盘上已由 IDA 反编译定稿的 `.c` 伪代码 + beautified 前端 JS + ipc-contracts.jsonl，做 delta 整合；不连 IDA、不逆二进制、不臆断。
> 来源制品（6 份，共 105974 字节）：
> - 后端 4 × 6dims：`relay-translator-anthropic`(21523B) / `relay-catalog-thread-diag`(19177B) / `relay-router-auth`(18879B) / `repository-platform-system`(14341B)
> - 前端 2 × delta：`relay-accounts-voice-delta`(15864B) / `other-pages-shared-delta`(16190B)
> 红线：标 `[TRUNCATED]`/`[DECOMPILE-FAILED]` 的不臆断；mac 为行为真值源，win 仅做跨平台签名/命名对齐。

---

## 0. 一句话结论（人话）

1.2.4 是 AiMaMi relay 子系统的一次「双轨鉴权 + 模型路由」大改：在 1.2.3 的实 OAuth 单轨之上，叠加了一条「AiMaMi 托管 API Key + 无账号槽位（no-account slot）路由」的全新双轨制，让没有实 OAuth 的用户也能走 codex router；同时把 Anthropic relay 翻译层按模型名（fable-5/mythos-5/sonnet-5/opus 系）+ codex effort 等级动态决策 thinking budget，重写了 stream 翻译的收尾路径；前端则新增两个配置面（relay 页的无账号槽位管理、maintenance 页的 Claude web search 兼容开关），账号切换加了「预检 + 复核」双闸，启动快照改成渐进式深比少写。

---

## 1. 主题归纳（4 条主线）

### 主题 A — Anthropic reasoning 重构（relay 翻译层三段化）
- **新模块 `anthropic_reasoning`**：`normalize_model_name`（SIMD 小写化 + `.`/`_`→`-`）作为所有模型匹配的前置归一化刀；`uses_adaptive_thinking`/`adaptive_thinking_is_default`/`thinking_cannot_be_disabled` 按模型名（fable-5/mythos-5/mythos-preview/sonnet-5/opus-5/opus-4-8/4-7/4-6/sonnet-4-6 共 9 类）决定是否开/强制 thinking；`codex_effort_to_anthropic`/`effort_to_thinking_budget`/`reasoning_explicitly_disabled` 把 codex effort 等级映射成 anthropic effort 串与 thinking budget bool。
- **新模块 `anthropic_history`**：`normalize_messages`（66KB，内嵌 SHA-256 轮常量 0x6A09E667/0x5BE0CD19/0x9B05688C/0xA54FF53A，指向 thinking signature 计算/校验，完整算法不臆断）；`rectify_invalid_thinking_signature` **删除末轮非法 thinking 块**（非保留：用 `retain_mut` 过滤掉 signature 校验失败的 thinking/redacted_thinking 块，而非仅擦 signature 字段保留块）；`trailing_turn_supports_thinking` 判末轮能否挂 thinking。
- **`translator`/`translator::stream` 整体重写**：1.2.3 的 `close_text_block`/`close_thinking_block`/`close_tool_blocks`/`flush` 一锅端，重写为 `close_anthropic_block` 分发器 + `close_all_blocks` 迭代器 + `finish_response`(成功)/`fail_with_type`(失败) 双收尾径；顶层翻译入口 `anthropic_to_responses_response_with_tool_maps`（收 tool_map + tool_name_map 双图，构造 `AnthropicDirectToResponsesStream` 并驱动整条 Anthropic→Responses 翻译）纳入本批函数清单；`StreamStruct` 从 1.2.3 单 `with_tool_name_map` 扩成 `with_tool_maps` 双图（tool_map + tool_name_map）。新增 redacted_thinking / reasoning_summary_* / custom_tool_call / tool_search_call 等 Responses 事件类型。

### 主题 B — 无账号模式 + 托管 key（managed key）+ 槽位路由
- **`router_unlock_auth`（12 函数全 NEW）**：`commit_auth_for_router` 是**双分支入口**（非线性单写）：a3=0 为 dry-run 只读分支（load_auth_file → `auth_is_usable_real_oauth`，可用则无操作返回成功，不可用返回 84B 默认 marker）；a3≠0 为写盘分支（ensure_directories → 拼 marker 路径 → `live_auth_state` 分派 2/4 错误 → 读 managed key → 已装则跳过，否则构造 marker(uuid+timestamp+exists flag) `write_json` 原子写 → 再读 marker → `validate_user_owned_auth_backup` → `copy_atomic_private` 覆盖 OAuth 备份 → 二次校验 `live_auth_state==1 && marker_matches`）。双分支叠加在 legacy 实 OAuth 之上形成双轨；`should_use_no_account_mode` 判定走托管还是实 OAuth；`managed_api_key_from_value` 三键校验（含 AiMaMi 下发 key 的 23 字节前缀 XOR 掩码校验，敏感位不还原明文）。
- **`codex_catalog` + `codex_thread_visibility` + `codex_diagnostic` + `codex_config_reconciler`**：一条「无账号模型槽路由 + 线程 provider 收养（orphan adoption）+ 诊断修复」流水线。硬编码 gpt-5.x 族 native slug、`default_no_account_slots` 上限 5、native system prompt（MiniMax-M3 / MiMo-Xiaomi）；落点 `codex_router_catalog.json`(atomic) / `config.toml`(config_takeover 重写) / SQLite threads 表(UPDATE，带 archived=0 守卫 + ROLLBACK) / journal/recovery 文件（no-account-model-restore / thread-provider-adoptions / rollout_orphan_providers）。
- **提交闸 `verify_managed_auth_commit_boundary`**：写 marker/切 router 前强制校验 router URL 是 loopback http（scheme=http、host=127.0.0.1、path=`/`）、router http 契约无 issues、`codex_router_catalog.json` 的 model_catalog_json slugs 与活动 slot slugs HashSet 严格相等。
- **退出守卫 `router_exit_guard_state`**：router 迁移进行中返回 2 阻止 app 退出。

### 主题 C — Claude web search 兼容开关
- **`native_responses_compat::strip_hosted_web_search_tools`**：在内存 serde_json::Value 上 `Vec::retain` 删 hosted web_search 类工具（web_search/web_search_/allowed_tools），全空则 BTreeMap::remove(tools)，tool_choice 若 web_search 类型连带删，返回剥离计数。只改内存不落盘。
- **`get/set_claude_web_search_compat`**（1.2.4 NEW IPC）：读/写 RelayState 的 `claude_web_search_compat_enabled` 标志（proxy_server +350 偏移，mutex 保护）；`set` 写前用 `strip_hosted_web_search_tools` 语义决定剥离策略。
- **前端**：maintenance 页新增 ClaudeWebSearchCompat toggle 卡片，镜像既有 imageCompat（query+mutation+确认框+卡片），默认值语义相反（加载中默认 **开**，`?? !0`），且多一层 `disabled: isPending` 防重入。

### 主题 D — 账号切换预检 + 启动快照渐进式恢复
- **`preflight_account_switch` + `verify_account_switch`**（repository）：切换前比对 registry 目标与 live 身份，切换后复核 auth.json 与活动账号一致性，失败抛 `SWITCH_AUTH_VERIFY_FAILED` / `SWITCH_REGISTRY_VERIFY_FAILED`。
- **`store_bootstrap_snapshot_progressive`**：启动快照从「每次全量写」改成「逐字段深比（AccountSummary/AutoSwitchStatusPayload/ApiProxyConfigPayload/ApiConnectivityPayload 等），无 diff 直接 Ok 跳过」，减少无谓磁盘写。
- **`enrich_active_account_usage_via_api`**（本批最大函数）：遍历账号 → refresh_token_with_policy → fetch_usage → 写 quota_store，对 reqwest connect/timeout 做连通性分类（class 1/2）。
- **平台层**：单实例锁（mac `flock(LOCK_EX|LOCK_NB)` / win `WakeByAddress`+`InterlockedCompareExchange8`）+ bundled CLI 路径解析。

---

## 1.5 changelog ↔ 前端投影对账

> 本节引用 [`CHANGELOG-FRONTEND-ALIGNMENT-1.2.4.md`](./CHANGELOG-FRONTEND-ALIGNMENT-1.2.4.md)（同目录，15481B），把 6 条 changelog 逐条对账到前端 beautified JS 真实行号 + 后端 6dims 证据指针。

### 对账总表（6 条）

| # | changelog 文本（摘要） | 前端是否改 | 前端证据主锚点 | 后端证据主锚点 | 对账结论 |
|---|---|---|---|---|---|
| A | 优化无账号登录模式，修复中转模型不显示及关闭路由后状态残留 | **是** | relay-page-pfdbI0wX.js L3058-L3842（Os/Ls 组件+noAccountSlots i18n 树 16 key+_r onSave+subtitle/enabledHint NoAccount 分支）；index-UqyngLFp.js L25998-L26156（mock+wrapper） | relay-router-auth-6dims L28-L29/L41-L42/L103-L118；relay-catalog-thread-diag L55-L58；DELTA-FINAL L72/L81/L127/L142/L148-L149 | covered（双平台全对齐） |
| B | 新增 Claude WebSearch 声明过滤兼容开关 | **是** | maintenance-page-Cfv_qYNg.js L434-L446（useQuery+useMutation+invalidate+toast）；index-UqyngLFp.js L11018-L11024/L11903-L11906/L41120-L41124/L41813-L41817（mock+wrapper+i18n） | relay-translator-anthropic L18-L27；repository-platform-system L24-L26/L36；DELTA-FINAL L33-L34/L73-L74/L140-L141 | covered（镜像 imageCompat 同构） |
| C | 优化 Anthropic relay 翻译层，支持 adaptive thinking 动态决策与 thinking signature 校验 | **否（纯后端协议层）** | 无直接 UI 改动 | relay-translator-anthropic L10-L12/L64-L89；DELTA-FINAL L21-L23 | backend-only（relay 翻译层纯函数库，无 IPC 直出） |
| D | 账号切换增加预检与复核双闸 | **是（progressive 回滚协同）** | accounts-page-BJLmybXg.js L1786-L1862（switchAccountAndRestartCodex onMutate/onError previousProgressive 回滚）；index-UqyngLFp.js L12258-L12568（progressive queryKey+localStorage） | repository-platform-system L14-L17/L57-L60；DELTA-FINAL L37 | covered（前端回滚链↔后端 preflight/verify 双闸） |
| E | 启动快照改为渐进式深比少写 | **是** | accounts-page L1856-L1862；index L10932-L10938/L12258-L12568（snapshotProgressive mock+persistProgressiveCache 分支） | repository-platform-system L16/L46-L47/L76；DELTA-FINAL L38 | covered（前端 progressive 缓存镜像后端逐字段深比） |
| F | 新增单实例锁与 bundled CLI 路径解析 | **否（纯后端平台层）** | 无直接 UI 改动 | repository-platform-system L16/L64/L81-L82/L93-L96；DELTA-FINAL L40 | backend-only（平台启动守门，前端无组件消费） |

### 纯后端协议层标注（前端无 UI）

以下 changelog 条目的改动**完全在后端协议层/平台层**，前端无直接 UI 组件消费：

- **changelog C（Anthropic reasoning）**：`anthropic_reasoning` / `anthropic_history` / `translator::stream` 是 proxy/relay 请求路径上的纯函数库，无 IPC 直出；前端不感知翻译内部逻辑（`normalize_model_name` SIMD 小写化、`uses_adaptive_thinking` 9 模型名判定、`rectify_invalid_thinking_signature` 删末轮非法 thinking 块等均在中转代理内部）。
- **changelog F（单实例锁 + bundled CLI）**：`single_instance`（mac `flock` / win `WakeByAddress`）是平台启动守门，`codex_bundled_cli_path` 是 sidecar spawn 前路径解析；前端无组件消费。

> 注意：changelog A 中的 `router_exit_guard_state`（@mac 0x1002cae90）虽有后端命令注册，但前端 page 级 delta 未发现直接消费者（疑在 app 根组件/window 关闭钩子，出 page 级 delta 范围）。这是 1.2.4 唯一「后端有命令但前端 page 级未定位消费者」的条目，已在 §6 不确定性标注，不视为悬空。

### 跨版本字段重命名（前端 payload ↔ 后端 DTO）

| 1.2.3 字段 | 1.2.4 字段 | 语义 |
|---|---|---|
| `usedVirtualAuth` | `usedNoAccountMode` | 启动结果：是否走了无账号模式 |
| `willUseVirtualAuth` | `willUseNoAccountMode` | 预检：是否将走无账号模式 |
| `virtualAuthActive` | `legacyVirtualAuthActive` | 旧 virtual auth 保留为 legacy 标志 |
| `virtualEmail`（`"niuniu@woyao.pro"`） | （删除） | 虚构身份邮箱字段移除 |
| `codexNoAccountSlots` | **NEW** | 后端持久化的无账号槽位列表 |
| `claudeWebSearchCompat` | **NEW** | Claude web search 兼容开关 state 字段 |
| mock `schemaVersion` | 9 → 12 | relay state schema 版本升级 |

> 详见对账文档 §4「跨版本字段重命名总表」。

---

## 2. 双平台差异（mac 有符号 vs win strip 锚定）

mac 是行为真值源（带符号、伪代码完整可读）；win 是 strip 产物，靠命令名串/格式化闭包签名锚定，主体逻辑在 mac 读全。

| 模块 | mac 锚定情况 | win 锚定情况 | win 没锚定的部分 |
|---|---|---|---|
| translator/stream/anthropic_reasoning/anthropic_history/native_responses_compat | 全部库函数完整伪代码 | 仅命令层 3 个锚点：`get_claude_web_search_compat`@0x140156ef0、`set_claude_web_search_compat`@0x140e01580、`set_codex_no_account_slots`@0x140e2de30；`uses_adaptive_thinking`@0x1408a2a20 明文串锚定一致 | 翻译/stream/reasoning/history 全部纯函数库主体在 win 无锚点（库内函数被 strip） |
| codex_catalog/thread_visibility/diagnostic/writer/config_reconciler | 45 函数全部 [FULL decompile] | 仅命令壳 `set_codex_no_account_slots`@0x140e2de30 | 45 个库函数（路由构建/收养/诊断/迁移）在 win 无独立锚点 |
| router_unlock_auth/router_reconciler | 12+3 函数完整 | `cmd_set_codex_no_account_slots`@0x140e2de30；`router_unlock_auth28inst`@0x140410960、`router_reconciler35verif`@0x1408f69b0 均为薄错误格式闭包 | `commit_auth_for_router`/`verify_managed_auth_commit_boundary`/`router_exit_guard_state` 主体在 win 无锚点 |
| repository/platform/system | 全部 mac 完整 | `enrich_active_account_usage_via_api`@0x1405056f0、`get_claude_web_search_compat`@0x140156ef0、`set_claude_web_search_compat`@0x140e01580、`set_codex_no_account_slots`@0x140e2de30 | `preflight/verify_account_switch`、`store_bootstrap_snapshot_progressive`、`single_instance` 在 win 无独立锚点 |

**win 侧观测到的行为分叉（仅 repository 模块）**：
- win 多 `PROGRESSIVE_STATE_SAVE_FAILED`(29B) 与 `aPoisonedLockAn`(poisoned lock 41B) 错误路径，mac 无显式锁（靠 Rust Mutex）。
- win 同步原语换 `InterlockedCompareExchange8`/`WakeByAddressSingle`，mac 用 `flock`。
- `set_claude_web_search_compat`/`set_codex_no_account_slots`：win delta 锚定了完整 setter 实现；**mac delta 同样含完整 setter 实现体**——`RelayManager::set_claude_web_search_compat`@0x10079bbc0（core/relay/manager/ida/pseudocode/，157 行完整 body：Mutex lock/unlock + `RelayManager::persist` 调用 + `RelayState` Clone + `GLOBAL_PANIC_COUNT` poison 检查）与 `RelayManager::set_codex_no_account_slots`@0x10079a8a0（724 行完整 body）均在 116 mac NEW-delta 函数内，.c 已落盘。注：`0x1005825c0` 是**另一独立函数** `ClaudeWebSearchCompatPayload` 的 serde Serialize impl（DTO serialize），与本 setter 非同一函数，早期版本误将二者合并为"mac 仅含 DTO serialize"，现据盘上 .c 核实更正。mac/win setter 行为对齐，无需补 mac 等价路径。

**win 侧补全进度**：win dirtree 已补完——955 个函数按 mac 模块树归入 71 个目录（对齐命名），strip 缺失的符号经 dirtree + 命令名串 + 格式化闭包签名三重锚定已基本定位；前端 control-flow（CCF）delta 亦已做完——beautified JS 的 invoke 命令链/路由/状态机抽齐为 `frontend-control-flow.jsonl`（对应 2 份前端 delta 制品）。本终稿双平台差异结论建立在此 dirtree + CCF 双补全之上，非仅凭 mac 单侧读出。

**结论**：除 repository 同步原语与若干 win-only 错误路径外，未观测到 mac/win 业务行为分叉；win delta 多为闭包/格式化层锚点，主体逻辑 mac 可完整读出。

---

## 3. 6dims 总表（去重 + 跨模块影响）

### dim1 — commands（1.2.4 新增 IPC，共 4 个；1.2.3 baseline 全无）

| 命令 | 跨模块出现处（去重） | mac 锚点 | win 锚点 | 前端接入 |
|---|---|---|---|---|
| `set_codex_no_account_slots` | translator/catalog/router-auth/repo 4 处均提及；真正实现体在 `RelayManager::set_codex_no_account_slots` | @0x10079a8a0 | @0x140e2de30 | relay-page（唯一） |
| `get_claude_web_search_compat` | translator/repo + 前端 other-pages | @0x10041d7a0 | @0x140156ef0 | maintenance-page |
| `set_claude_web_search_compat` | translator/repo + 前端 other-pages | setter@0x10079bbc0（完整 body）；另 DTO serialize@0x1005825c0（`ClaudeWebSearchCompatPayload` serde Serialize，独立函数） | @0x140e01580 | maintenance-page |
| `router_exit_guard_state` | router-auth 专有 | @0x1002cae90 | 同名（薄） | 未在 2 份前端 delta 中发现消费者（属 app 退出流） |

### dim2 — dto（新增/变更，去重）

| DTO | 模块 | 关键字段 |
|---|---|---|
| `CodexNoAccountSlot` | models / catalog / router-auth | 72B：slug + base_url + display_name(Option)；3 份 serialize 单态；匹配键 (slug_len, slug_bytes, base_url_len, base_url_bytes) |
| `RouterUnlockAuthMarker` | router_unlock_auth | 5 字段（key 长 6/5/10/9/20）；含 auth_mode(uuid)/timestamp/metadata_exists/OPENAI_API_KEY 对 |
| `ClaudeWebSearchCompatPayload` | models | 单字段 `enabled`(bool) |
| `CodexNoAccountSlotsPayload` | commands::relay | slots(5) + 16 字符场 + relaunch(8) |
| `NativeThreadModelCatalog` | codex_catalog | 含 supports_reasoning |
| `PreparedRouterCatalog` / `RouterCatalogModelIndex::disposition` | catalog / thread_visibility | disposition 处置枚举 |
| `NoAccountModelRestoreEntry` | thread_visibility | journal 单条，impl Serialize |
| Responses 顶层/error 子对象 | translator::stream | finish_response: id/object/created_at/status/output/usage（status=completed/incomplete）；fail_with_type: 外层 **status="failed"**（非 incomplete），error 子对象 **`{type,message}`（错误键为 `type` 非 `code`）**，事件 `response.failed` |
| stream 事件类型 | translator::stream | response.created/output_item.added/content_part.added/output_text.delta|done/reasoning_summary_*/custom_tool_call_input.*/function_call_arguments.done/completed/failed 等 |

### dim3 — fields（跨模块关键字段）

- `normalize_model_name`（0x100572da0）：所有模型匹配前置归一化刀。
- `uses_adaptive_thinking`（mac 0x1005731d0 / win 0x1408a2a20）：9 模型名任一命中→true。
- RelayState +317 字节：`should_use_no_account_mode` 的 force 入参（前端可配的「强制无账号」位）。
- proxy_server +350：`claude_web_search_compat_enabled`（mutex 保护，poison 返 1）。
- StreamStruct @253=finished / @254=usage_tracked（仅 usage_tracked=1 才挂 usage）。

### dim4 — error_paths（去重，全部真码实测）

- relay 翻译层：`fail_with_type`/`finish_response` 幂等收尾；`contains_http_status_code` 越界走 `panic_bounds_check`（**本批唯一显式 panic 点，库内不变量违例非业务路径**）。
- catalog：5 条降级 `[AiMaMi][catalog]`（merged/using-bundled/bundled-cmd-unavailable/catalog-unavailable/no-usable-official）；`invalid no-account model restore journal contents`；`prepared Codex catalog mode does not match the config target`；`rollout changed while router migration was streaming`。
- router-auth：`Codex router transition lock is poisoned`(40B)；`managed auth refused: no-account catalog does not match the active relay slots`(78B)；live_auth_state==2(77B)/==4(72B) 错误串；URL 解析失败（非 http/非 127.0.0.1/非 `/`）。
- repository：`SWITCH_AUTH_VERIFY_FAILED` / `SWITCH_REGISTRY_VERIFY_FAILED`；`refreshed account snapshot has no API request context`(53B)；`AiMaMi is already running`(25B)；win-only `PROGRESSIVE_STATE_SAVE_FAILED`(29B)/`poisoned lock`(41B)。

### dim5 — persistence（落盘物去重）

| 落盘物 | 写法 | 触发模块 |
|---|---|---|
| `router-unlock-auth-marker.json` | atomic_write | router_unlock_auth |
| 用户实 OAuth 备份 | copy_atomic_private（原子覆盖） | router_unlock_auth |
| `codex_router_catalog.json` | atomic_write / 只读校验 | catalog / router-auth |
| `config.toml` | config_takeover 重写 + codex_config::update_text | config_reconciler |
| SQLite threads 表 | UPDATE ×4 变体（事务，archived=0 守卫，ROLLBACK）；UPDATE threads SET model=?2 WHERE id=?1 | diagnostic / thread_visibility |
| journal: no-account-model-restore | load/patch/remove_file | thread_visibility |
| recovery: thread-provider-adoptions | to_vec_pretty + atomic_write | diagnostic |
| recovery: rollout_orphan_providers | 诊断缓存 | diagnostic |
| bootstrap 缓存 | load 深比 → 有 diff 才 update | repository |
| quota_store | upsert_item + sync_token_status | repository |
| 单实例锁文件 | OpenOptions + flock/set_len(0) + 写 PID | single_instance |
| RelayManager 状态 | persist（原子） | router-auth / set_claude_web_search_compat |

> 无 Keychain 写入（4 批均未观测）；无裸 `fs::write`（全走 atomic_write/persist/事务）。relay 翻译层 6 模块零直接持久化（责任上移 manager/command 层）。

### dim6 — sidecar（进程/Codex 重启，去重）

- `set_codex_no_account_slots` 后端命令**本身无 Codex 重启执行体**：只做 persist relay state + `router_transition::run` + 可选 `launch_codex_app_warning`（仅弹警告提示用户重启，不亲自 kill/spawn Codex 进程）；「重启 Codex sidecar」实际由前端消费 `relaunch` 出参驱动（`_r` 在 routerEnabled && noAccountMode 时强制 relaunch=true）。闭环对应 `reconcile_inner` 重写 config.toml + catalog。
- `router_exit_guard_state`：迁移中返回 2 阻 app 退出。
- `launch_codex_app_warning`：迁移失败或路由变更后弹 Codex 重启警告。
- `restore_router_enabled_stably`：transition 失败回滚 router_enabled。
- 诊断 orphan 收养走同进程 DB 事务（prepare/apply/rollback/mark_recovery），不杀进程。
- relay 翻译层零 sidecar（纯同步内存计算，唯一外部交互是 Utc::now() + uuid v4）。

---

## 4. 前端↔后端命令对账（3 新命令接入点 vs 后端 handler）

| 新命令 | 前端接入点（文件:行） | 后端 handler | 对齐状态 |
|---|---|---|---|
| `get_claude_web_search_compat` | maintenance-page L436（useQuery `["claudeWebSearchCompat"]` → `y.getClaudeWebSearchCompat()`）；主 bundle registry index-UqyngLFp.js L11903 | mac `commands::system::get_claude_web_search_compat`@0x10041d7a0 / win @0x140156ef0 | ✅ 双平台对齐，签名一致 |
| `set_claude_web_search_compat` | maintenance-page L439（useMutation → `y.setClaudeWebSearchCompat(enabled)`）；主 bundle L11904 | mac `RelayManager::set_claude_web_search_compat`@0x10079bbc0（完整 body：Mutex lock/unlock + persist + RelayState Clone + poison check）/ win `commands::relay::set_claude_web_search_compat`@0x140e01580（状态机 case 0/1/2/3 + Arc clone） | ✅ 双平台对齐（mac setter 完整 body 已在 116 NEW-delta 内；0x1005825c0 为独立 DTO serialize 函数，非 setter 本体） |
| `set_codex_no_account_slots` | relay-page L3356（父组件解构 `setCodexNoAccountSlots: h`）/ L3522（`_r` onSave → `h.mutateAsync({slots, relaunch})`）；主 bundle L26156/L26030 | mac `RelayManager::set_codex_no_account_slots`@0x10079a8a0 / win `cmd_set_codex_no_account_slots`@0x140e2de30 | ✅ 双平台对齐，relaunch 默认 true（`t??!0`，**前端消费**；后端命令无 Codex 重启执行体，只返 transition/warning 结果） |

**契约要点（前端 ↔ 后端对账）**：
- `get_claude_web_search_compat` 返回须 `{ enabled: boolean }`（前端取 `.data.enabled`）。
- `set_claude_web_search_compat` 入参 `{ enabled }`；前端 UI 默认 `?? !0`(true) 兜底，但后端须以持久化真实状态为准（mock 层 `bm` 初始 falsy）。
- `set_codex_no_account_slots` 入参 `{ slots, relaunch }`，`relaunch` 默认 true；`_r` 在 `routerEnabled && noAccountMode` 时强制 relaunch=true（前端据此**自行重启 codex**，后端命令本身无重启执行体，只返 launch_warning/transition 结果）；返回 `g.data.warnings / codexLaunchError` 驱动 4 种 toast。
- `router_exit_guard_state`：后端有命令，但 2 份前端 delta 未发现消费者（属 app 退出流，可能在 app 根组件/window 关闭钩子，出本次 page 级 delta 范围）。
- 前端硬编码 `st = 5` 槽位上限与后端 `default_no_account_slots` 硬上限 5 一致；前端 min=1 保底（`noAccountSlots.minimum` toast）。

---

## 5. ⚠ 破坏性副作用全编目

> 按「落盘 / DB / 进程 / 不可逆」分类，全部来自真码 destructive 标注，去重。

### 5.1 文件落盘（atomic / persist）
- `commit_auth_for_router`：原子写 `router-unlock-auth-marker.json` + 原子覆盖用户实 OAuth 备份（`copy_atomic_private`）。⚠ 覆盖备份是不可逆点。
- `write_prepared_catalog`：原子写 `codex_router_catalog.json`。
- `reconcile_inner`：重写 `config.toml`（config_takeover）+ 写/删 `codex_router_catalog.json`（必要时 remove_catalog）。
- `patch_no_account_model_restore_rollout`：写 journal 文件。
- `patch_session_meta_line` / `replace_session_meta_lines_with_strategy`：改 rollout 文件（带 overlap/length 校验）。
- `write_orphan_thread_adoption_recovery_file`：原子写 `thread-provider-adoptions`。
- `mark_orphan_thread_adoption_recovery`：写 recovery 记录（failure/completedAtMs）。
- `store_bootstrap_snapshot_progressive`：条件性写 bootstrap 缓存（有 diff 才写）。
- `single_instance::acquire`：创建/截断锁文件 + 写 PID。

### 5.2 DB（SQLite threads，事务 + ROLLBACK + archived=0 守卫）
- `restore_no_account_model_threads`：UPDATE threads SET model=?2 WHERE id=?1（恢复）+ 删 journal 文件。
- `fix_orphan_thread_providers_with_catalog`：备份 DB（databaseBackups）→ 4 个 UPDATE 变体收养 → 失败 ROLLBACK → 写 thread-provider-adoptions recovery。⚠ 带 archived=0 守卫但仍是批量改 model/model_provider。
- `rollback_orphan_thread_adoption` / `with_orphan_adoption_rollback`：改 DB 回滚。
- `apply_thread_metadata_rollout_adoption` / `restore_thread_metadata_rollout_adoptions`：改 rollout/DB。

### 5.3 进程 / Codex 重启（sidecar）
- `set_codex_no_account_slots` 后端命令**无 Codex 重启执行体**：不 kill/spawn Codex，只 persist + `router_transition::run` + 可选 `launch_codex_app_warning`（警告）；实际重启由前端按 `relaunch` 出参触发（`_r` 在 routerEnabled && noAccountMode 时强制 relaunch=true）。⚠ 前端「保存即重启」是**前端侧**默认行为，非后端命令直接执行。
- `router_exit_guard_state`：迁移中返回 2 → 阻止 app 退出。
- `launch_codex_app_warning`：弹 Codex 重启警告。
- `restore_router_enabled_stably`：transition 失败回滚 router_enabled 到稳定态。
- `enrich_active_account_usage_via_api`：token 状态突变 + quota_store 写。

### 5.4 内存突变（非落盘但改变运行态）
- `strip_hosted_web_search_tools`：删内存 serde_json::Value 的 tools/tool_choice 键（只改内存不落盘，但影响后续 relay 请求）。
- `set_claude_web_search_compat`：突变 RelayState + 触发落盘。
- relay 翻译层各 `push_*_block`/`close_*`：写 messages Vec / content 数组 / event sink（请求生命周期内，请求结束即弃）。

### 5.5 显式 panic（非业务路径，库内不变量违例）
- `contains_http_status_code`@0x10057e300：越界走 `panic_bounds_check`（本批唯一显式 panic，属库内不变量违例，非用户输入路径）。

---

## 6. 不确定性 / 红线（整合）

- 静态错误串常量（84B marker blob、88B/77B/72B/78B/40B/31B 错误模板、transition 错误模板）长度与调用点已实测，**具体文案字节未读出**，不臆造。
- managed_api_key 的 14 字符 key 名与 23 字节前缀 XOR 掩码常量未读出明文（AiMaMi managed key 敏感识别位，按脱敏红线不还原）。
- `anthropic_history::normalize_messages` 的完整 SHA-256 signature 算法未逐 round 还原（不臆断）。
- `is_anthropic_thinking_signature_rejection`、`proxy_server/client_for` 仅登记存在/锁 gym，非鉴权本体。
- `router_exit_guard_state` 前端消费者未在 2 份 page 级 delta 中定位（疑在 app 根组件退出钩子，出范围）。
- 所读 .c 均为完整伪代码，无 `[TRUNCATED]`/`[DECOMPILE-FAILED]` 桩；前端 diff 已剥离 chunk-hash 噪声，只保留真实业务变更。
