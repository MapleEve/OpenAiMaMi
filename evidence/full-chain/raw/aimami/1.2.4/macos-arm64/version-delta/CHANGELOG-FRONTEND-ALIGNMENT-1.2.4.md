# changelog ↔ 前端投影对账 — AiMaMi 1.2.4（baseline 1.2.3）

> 授权：本仓/本机所有者自家已授权产品 AiMaMi，baseline=1.2.3，所有者在对话渠道下达重建授权。
> 方法：只读盘上 beautified 前端 JS + ipc-contracts + delta 文档 + 已定稿 IDA `.c` 伪代码，做 changelog 逐条对账；不连 IDA、不逆二进制、不臆断。
> 证据源（均盘上已落产物）：
> - 前端：`frontend/beautified/relay-page-pfdbI0wX.js`（4331 行）、`frontend/beautified/index-UqyngLFp.js`（43813 行）、`frontend/beautified/maintenance-page-Cfv_qYNg.js`（826 行）、`frontend/beautified/accounts-page-BJLmybXg.js`
> - 1.2.3 baseline 前端：`frontend/beautified/relay-page-iqa4dxHn.js`、`frontend/beautified/index-B40jKs17.js`
> - 后端 6dims：`version-delta/relay-router-auth-6dims.md`、`relay-catalog-thread-diag-6dims.md`、`relay-translator-anthropic-6dims.md`、`repository-platform-system-6dims.md`
> - 整合终稿：`version-delta/DELTA-FINAL-1.2.4.md`
> - 前端 CCF：`version-delta/FRONTEND-CCF-DELTA-1.2.4.md`
> 红线：行号均为 beautified JS 真实行号（`cat -n` 格式），非 minified 列偏移；凡涉及敏感常量不还原明文。

---

## 0. 一句话结论（人话）

1.2.4 的 6 条 changelog 中，**4 条有可见前端 UI 改动**（changelog A/B/D/E），**2 条是纯后端协议层/平台层改动，前端无直接 UI**（changelog C/F）。全部 6 条与后端 6dims 文档及 DELTA-FINAL 终稿对齐，无悬空条目、无「前端改了但后端没动」或「后端改了但前端不消费」的遗漏（`router_exit_guard_state` 是唯一前端 page 级未定位消费者的命令，属 app 退出流，已在 DELTA-FINAL L148/197 标注为已知不确定性）。

---

## 1. 6 条 changelog 逐条对账表

| # | id | changelog 文本 | 前端是否改 | 前端证据行号（beautified JS） | 后端证据指针 | 对账结论 |
|---|---|---|---|---|---|---|
| A | `1.2.4-changelog-A-frontend-projection` | 优化无账号登录模式，修复中转模型不显示及关闭路由后状态残留 | **是** | relay-page-pfdbI0wX.js: L3058(st=5上限)/L3060(de槽key)/L3064-L3065(rn比较含catalogSlug)/L3068(Ps提取)/L3072-L3084(Os组件+codexNoAccountSlots读取+useEffect同步)/L3101-L3261(noAccountSlots i18n树16key)/L3356(setCodexNoAccountSlots解构h)/L3372(willUseNoAccountMode)/L3418(usedNoAccountMode)/L3520-L3542(_r onSave handler+4toast)/L3799(subtitleNoAccount)/L3810(enabledHintNoAccount)/L3842(条件渲染Os); index-UqyngLFp.js: L25998(codexNoAccountSlots mock字段)/L25999(claudeWebSearchCompat)/L26030(set_codex_no_account_slots mock)/L26041-L26049(readiness字段重命名)/L26156(setCodexNoAccountSlots wrapper) | relay-router-auth-6dims.md L4/L11/L16/L28-L29/L32/L41-L42/L103-L118; relay-catalog-thread-diag-6dims.md L13/L21-L25/L35/L55-L58/L100-L101/L160-L163; DELTA-FINAL L25-L29/L72/L81/L127/L142/L148-L149/L175-L176; BASELINE-FINAL-1.2.3.md L14/L26; REGISTRATION-TABLE-1.2.3.md L17-L18 | **covered** — 前端↔后端双平台全对齐：IPC `set_codex_no_account_slots` mac@0x10079a8a0/win@0x140e2de30 签名一致；前端 st=5 与后端 default_no_account_slots 硬上限 5 一致；catalogSlug 纳入槽位身份指纹（中转模型不显示修复）；字段重命名 virtualAuth→noAccountMode 贯穿前端 payload+mock+后端 router_unlock_auth 双轨鉴权 |
| B | `1.2.4-changelog-B-web-search-compat` | 新增 Claude WebSearch 声明过滤兼容开关 | **是** | maintenance-page-Cfv_qYNg.js: L434-L436(useQuery `["claudeWebSearchCompat"]`→getClaudeWebSearchCompat().data.enabled)/L437-L439(useMutation setClaudeWebSearchCompat)/L443-L446(invalidateQueries+toast); index-UqyngLFp.js: L11018-L11024(mock case get/set)/L11903-L11906(wrapper getClaudeWebSearchCompat/setClaudeWebSearchCompat)/L41120-L41124(zh i18n)/L41813-L41817(en i18n) | relay-translator-anthropic-6dims.md L18-L27(native_responses_compat::strip_hosted_web_search_tools+get/set IPC); repository-platform-system-6dims.md L24-L26/L36(ClaudeWebSearchCompatPayload+get@0x10041d7a0/set@0x140e01580); DELTA-FINAL L33-L34/L73-L74/L140-L141 | **covered** — 前端镜像既有 imageCompat 开关同构（useQuery+useMutation+invalidate+toast），默认值语义相反（加载中默认 `?? !0` 即 true），后端 strip_hosted_web_search_tools 只改内存不落盘；mac setter `RelayManager::set_claude_web_search_compat`@0x10079bbc0 完整 body 已在 116 NEW-delta 内（Mutex lock/unlock + persist + RelayState Clone + poison check）；@0x1005825c0 为独立 `ClaudeWebSearchCompatPayload` serde Serialize（DTO），win 完整实现@0x140e01580；双平台对齐 |
| C | `1.2.4-changelog-C-anthropic-reasoning` | 优化 Anthropic relay 翻译层，支持 adaptive thinking 动态决策与 thinking signature 校验 | **否（纯后端协议层，前端无 UI）** | 无直接 UI 改动；relay 翻译层是 proxy/relay 请求路径上的纯函数库，无 IPC 直出、无前端组件消费 | relay-translator-anthropic-6dims.md L10-L12(一句话结论)/L72-L89(anthropic_reasoning 7函数NEW: normalize_model_name/uses_adaptive_thinking 9模型名/adaptive_thinking_is_default/thinking_cannot_be_disabled/codex_effort_to_anthropic/effort_to_thinking_budget)/L64-L67(anthropic_history normalize_messages 66KB SHA-256 + rectify_invalid_thinking_signature retain_mut删非法块); DELTA-FINAL L21-L23(主题A: translator/stream整体重写 close_anthropic_block分发器+close_all_blocks+finish_response/fail_with_type) | **backend-only** — relay 翻译层三段化（推理决策+历史修正+流式直转）全在后端 proxy 内部，不动 IPC 名、不动持久化结构、不拉起/重启 Codex 进程；前端零投影 |
| D | `1.2.4-changelog-D-account-switch-preflight` | 账号切换增加预检与复核双闸，防止 auth.json 身份不一致 | **是（前端有 progressive 回滚协同）** | accounts-page-BJLmybXg.js: L1786-L1787(switchAccountAndRestartCodex mutation)/L1854-L1862(onMutate 返回 previousProgressive + onError 回滚 progressive); index-UqyngLFp.js: L10935(snapshotProgressive mock)/L12258-L12262(queryKey `["snapshot","progressive"]`+localStorage `runtime-snapshot-progressive`)/L12341-L12348(progressive 分支 setQueryData+persistProgressiveCache)/L12567-L12568(loadSnapshot persistProgressiveCache:true) | repository-platform-system-6dims.md L14-L17(preflight_account_switch 比对 registry 目标 vs live 身份 + verify_account_switch 复核 auth.json)/L57-L60(SWITCH_AUTH_VERIFY_FAILED/SWITCH_REGISTRY_VERIFY_FAILED 错误路径); DELTA-FINAL L37(主题D: preflight+verify双闸) | **covered** — 前端 switchAccountAndRestartCodex 的 onMutate/onError 回滚链（previousProgressive）与后端 preflight/verify 双闸协同；progressive 快照深比在后端 store_bootstrap_snapshot_progressive 做，前端通过 queryKey+localStorage 缓存镜像 |
| E | `1.2.4-changelog-E-bootstrap-progressive` | 启动快照改为渐进式深比少写，减少无谓磁盘写入 | **是** | accounts-page-BJLmybXg.js: L1856(previousProgressive)/L1862(progressive 回滚); index-UqyngLFp.js: L10932-L10938(load_bootstrap_state mock snapshotProgressive)/L12258-L12262(progressive queryKey/localStorage)/L12341-L12348/L12524-L12568(persistProgressiveCache 分支) | repository-platform-system-6dims.md L16(store_bootstrap_snapshot_progressive 逐字段深比 AccountSummary/AutoSwitchStatusPayload/ApiProxyConfigPayload/ApiConnectivityPayload 无 diff 直接 Ok 跳过)/L46-L47(深比偏移 +528/+592/+624/+680/+688)/L76(bootstrap_cache load深比→有diff才update); DELTA-FINAL L38(主题D: 渐进式恢复) | **covered** — 前端 progressive 缓存（queryKey + localStorage 双写）镜像后端逐字段深比语义；后端无 diff 直接 Ok 跳过减少磁盘写，前端 onMutate 返回 previousProgressive 供 onError 回滚 |
| F | `1.2.4-changelog-F-single-instance-platform` | 新增单实例锁与 bundled CLI 路径解析 | **否（纯后端平台层，前端无 UI）** | 无直接 UI 改动；单实例锁是平台启动守门，bundled CLI 路径是 sidecar spawn 前解析 | repository-platform-system-6dims.md L16(single_instance)/L64(AiMaMi is already running 25B)/L81(单实例锁文件 `<data_dir>/dev.aimami.desktop/aimami-single-instance.lock`)/L82(bundled CLI 路径 `<bundle>/Contents/Resources/codex`)/L93-L96(dim6 sidecar: mac flock(LOCK_EX|LOCK_NB) / win WakeByArea+InterlockedCompareExchange8); DELTA-FINAL L40(平台层: 单实例锁+bundled CLI) | **backend-only** — 单实例锁 mac flock / win WakeByAddress 是平台启动守门，前端无 UI 投影；bundled CLI 路径解析供后续 spawn，亦无前端消费 |

---

## 2. 主题归纳

6 条 changelog 聚合为 **4 条主线**（与 DELTA-FINAL-1.2.4.md §1 主题归纳一一对应）：

### 主线 1 — 无账号模式 + 托管 key + 槽位路由（changelog A）

这是 1.2.4 最大的前端可见改动。在前端投影为三条子线：

- **优化无账号登录模式**：relay 页新增一整张「无账号槽位」管理卡（组件 `Os` 候选项勾选+拖拽排序+保存/重启 + 组件 `Ls` 单条槽位 pill）+ 16 个 `relay.codexRouter.noAccountSlots.*` i18n key + subtitle/enabledHint 的 NoAccount 分支 + payload 字段重命名 `virtualAuth→noAccountMode`（`virtualEmail` 字段消失，`virtualAuthActive→legacyVirtualAuthActive`）。对应后端 `router_unlock_auth` 12 函数全 NEW（双分支 `commit_auth_for_router`）+ `set_codex_no_account_slots` 新命令。
- **修复中转模型不显示**：`catalogSlug` 纳入槽位身份指纹（`rn` 比较函数 L3064-L3065 + `JSON.stringify` 指纹 L3082）。同 providerId+model 但不同 catalog 的模型不再被误判为同一槽位。对应后端 `codex_catalog` 的 `canonical_no_account_slot_slug`/`is_no_account_slot_slug` + `verify_managed_auth_commit_boundary` 校验 slugs HashSet 严格相等。
- **关闭路由后状态残留**：后端 `router_exit_guard_state`（迁移中返回 2 阻退出，前端 page 级 delta 无直接消费者，属 app 退出流）+ 前端 `useEffect` 同步本地槽位 state 与后端 `codexNoAccountSlots` 指纹（L3083-L3084）+ `_r` 在 routerEnabled && noAccountMode 时强制 relaunch=true 驱动 Codex 重启（L3520-L3524）。

### 主线 2 — Claude web search 兼容开关（changelog B）

maintenance 页新增 `ClaudeWebSearchCompat` toggle 卡片，镜像既有 `imageCompat`（query+mutation+确认框+卡片），默认值语义相反（加载中默认开 `?? !0`），多一层 `disabled: isPending` 防重入。对应后端 `native_responses_compat::strip_hosted_web_search_tools`（内存 `Vec::retain` 删 hosted web_search 工具）+ `get/set_claude_web_search_compat` 新 IPC（读/写 RelayState `claude_web_search_compat_enabled` 标志）。

### 主线 3 — Anthropic relay 翻译层重构（changelog C，纯后端协议层）

新模块 `anthropic_reasoning`（7 函数：`normalize_model_name` SIMD 小写化 + `uses_adaptive_thinking` 9 模型名判定 + `effort_to_thinking_budget` codex effort→thinking budget）+ `anthropic_history`（`normalize_messages` 66KB 内嵌 SHA-256 + `rectify_invalid_thinking_signature` 删末轮非法 thinking 块）+ `translator`/`translator::stream` 整体重写（`close_anthropic_block` 分发器 + `finish_response`/`fail_with_type` 双收尾径）。**前端零投影**：这些是 proxy/relay 请求路径上的纯函数库，无 IPC 直出、无前端组件消费。

### 主线 4 — 账号切换预检 + 启动快照渐进式恢复（changelog D + E + F）

- **changelog D**：`preflight_account_switch` + `verify_account_switch` 双闸（切换前比对 registry 目标与 live 身份，切换后复核 auth.json 一致性，失败抛 `SWITCH_AUTH_VERIFY_FAILED`/`SWITCH_REGISTRY_VERIFY_FAILED`）。前端 `switchAccountAndRestartCodex` 的 onMutate/onError 回滚链（`previousProgressive`）协同。
- **changelog E**：`store_bootstrap_snapshot_progressive` 从「每次全量写」改成「逐字段深比，无 diff 直接 Ok 跳过」。前端 progressive 缓存（queryKey `["snapshot","progressive"]` + localStorage `runtime-snapshot-progressive`）镜像深比语义。
- **changelog F**（纯后端平台层）：单实例锁 mac `flock(LOCK_EX|LOCK_NB)` / win `WakeByAddress`+`InterlockedCompareExchange8` + bundled CLI 路径解析。**前端零投影**。

---

## 3. 纯后端协议层标注（前端无 UI）

以下 changelog 条目的改动**完全在后端协议层/平台层**，前端无直接 UI 组件消费：

| changelog | 后端模块 | 为何前端无 UI |
|---|---|---|
| C（Anthropic reasoning） | `anthropic_reasoning` / `anthropic_history` / `translator::stream` | relay 翻译层是 proxy 请求路径上的纯函数库，无 IPC 直出；前端不感知翻译内部逻辑 |
| F（单实例锁 + bundled CLI） | `single_instance` / `codex_bundled_cli_path` | 平台启动守门 + sidecar spawn 前路径解析；前端无组件消费 |

> 注意：changelog A 中的 `router_exit_guard_state`（@mac 0x1002cae90）虽有后端命令注册，但前端 page 级 delta 未发现直接消费者（疑在 app 根组件/window 关闭钩子，出 page 级 delta 范围）。这是 1.2.4 唯一「后端有命令但前端 page 级未定位消费者」的条目，已在 DELTA-FINAL L148/L197 标注为已知不确定性，不视为悬空。

---

## 4. 跨版本字段重命名总表（前端 payload ↔ 后端 DTO）

| 1.2.3 字段（前端 + mock） | 1.2.4 字段 | 语义 | 前端证据 | 后端证据 |
|---|---|---|---|---|
| `usedVirtualAuth` | `usedNoAccountMode` | 启动结果：是否走了无账号模式 | relay-page L3418; index mock L26016/L26027 | router_unlock_auth `should_use_no_account_mode` |
| `willUseVirtualAuth` | `willUseNoAccountMode` | 预检：是否将走无账号模式 | relay-page L3372; index mock L26045 | router_unlock_auth `should_use_no_account_mode` |
| `virtualAuthActive` | `legacyVirtualAuthActive` | 旧 virtual auth 保留为 legacy 标志 | index mock L26046 | router_unlock_auth `has_restorable_real_oauth` |
| `virtualEmail`（`"niuniu@woyao.pro"`） | （删除） | 虚构身份邮箱字段移除 | 1.2.3 relay-page L3145 useState / L3160 / L3258 / L3948 / L4001 全消失 | 后端不再下发 virtualEmail |
| `codexNoAccountSlots` | **NEW** | 后端持久化的无账号槽位列表 | relay-page L3082; index mock L25998; state spread L33019 | `CodexNoAccountSlot` 72B DTO |
| `claudeWebSearchCompat` | **NEW** | Claude web search 兼容开关 state 字段 | index mock L25999; state spread L33020 | `ClaudeWebSearchCompatPayload` 单字段 enabled |
| mock `schemaVersion` | 9 → 12 | relay state schema 版本升级 | index 1.2.3 L25962 vs 1.2.4 L25984 | RelayState +317 字节扩容 |

> 这是「虚拟鉴权 → 无账号模式 + 无账号槽位」改造在前端 payload 的直接投影。任何按旧字段名解析的下游（脚本、mock、文档）都会断；升级到 1.2.4 时必须全量替换。

---

## 5. 证据完整性声明

- 所有前端行号均为 beautified JS（`cat -n` 格式）真实行号，已逐一读盘验证（非 minified 列偏移、非 chunk-hash 推断）。
- 所有后端地址/函数名均引用自已定稿 6dims 文档 + DELTA-FINAL 终稿，未重逆二进制。
- `router_exit_guard_state` 前端消费者未在 page 级 delta 定位是已知不确定性，不臆断其消费者位置。
- `set_claude_web_search_compat` mac setter 实现体**已在**本批 NEW-delta 制品：`RelayManager::set_claude_web_search_compat`@0x10079bbc0（core/relay/manager/ida/pseudocode/，157 行完整 body：Mutex lock/unlock + `RelayManager::persist` + `RelayState` Clone + `GLOBAL_PANIC_COUNT` poison 检查）。@0x1005825c0 是独立 `ClaudeWebSearchCompatPayload` serde Serialize 函数（DTO），非 setter 本体；早期将二者误并为"mac 仅含 DTO serialize"，现据盘上 .c 核实更正。mac@0x10079bbc0 / win@0x140e01580 双平台对齐。
- 无 `[TRUNCATED]`/`[DECOMPILE-FAILED]` 桩参与对账。
