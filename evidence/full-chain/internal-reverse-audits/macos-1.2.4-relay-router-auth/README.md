# AiMaMi 1.2.4 macOS relay-router-auth — internal-reverse 消费者结论包

同步时间：2026-07-29
范围：`core::relay::router_unlock_auth`（12 函数，全 NEW-delta）+ `core::relay::router_reconciler`（3 函数）+ `manager::set_codex_no_account_slots` + `set_claude_web_search_compat`（新命令）+ `router_exit_guard_state`（顶层 tauri state 查询，NEW）+ `proxy_server` 兼容层（3 函数）。baseline=1.2.3。
最终结论：**1.2.4 在 relay 子系统新增了一整套「托管 API Key / 无账号模式（no-account mode）」鉴权链**。`router_unlock_auth` 整个模块 12 个函数全是 NEW-delta，1.2.3 baseline 没有对应物。当前档位为 `consumerStartReady`（3 新命令），`strictImplementationUse`/`readyToImplement` 均为 0——delta 轮不单独升 ready，继承 baseline 1.2.3 的 gate 天花板（dim4 partial-closed、dim6 not-closed）。本包内部专用，供 Polaris 自有产品线参照实现，不对外发布（红线 23）。

## 模块职责（人话）

1.2.4 在 1.2.3 的实 OAuth 单轨鉴权之上，叠加了一条「AiMaMi 托管 API Key + 无账号槽位（no-account slot）路由」的全新双轨制，让没有实 OAuth 的用户也能走 codex router。核心组件：

- **托管鉴权（managed_api_key_auth）**：router 不再用用户自己的 Codex OAuth，而是注入 AiMaMi 下发的 managed key（带前缀校验），让无账号用户也能走 router。落盘为 `router-unlock-auth-marker.json`。
- **无账号模式（no_account_mode）**：当用户没有可用实 OAuth 且无可恢复备份时，router 切到托管模式；`CodexNoAccountSlot` 是一条「模型 slug + base_url + key 标记 + 展示名」的路由槽。
- **commit boundary（提交闸）**：`verify_managed_auth_commit_boundary` 在「写 marker / 切 router」之前做只读校验，任一项不符就拒绝提交（返回错误，不落盘）。这是防止在错配状态下把托管 key 写死的关键守卫。
- **exit guard（退出守卫）**：`router_exit_guard_state` 是 tauri state 查询函数，迁移进行中返回 2（阻止退出），迁移空闲返回 snapshot 的安全标志。

## 6dims 摘要

| 维度 | 状态 | 摘要 |
|---|---|---|
| dim1 前端控制流 | mostly-closed | relay-page L3058-L3842 无账号槽位管理 UI + maintenance-page L434-L446 ClaudeWebSearchCompat toggle 完整逆向；router_exit_guard_state 前端 page 级消费者未定位（属 app 退出流，accepted_unknown） |
| dim2 后端 owner+pseudocode | strong | router_unlock_auth 12 函数 + router_reconciler 3 函数 + manager 2 新命令 + router_exit_guard_state + proxy_server 3 兼容层，全完整伪代码 0 截断 0 decompile-failed |
| dim3 call-tree 到实现叶子 | partial | 逐函数 behavior+destructive 标注完整（16 行逐函数表），commit_auth_for_router 双分支已还原到实现叶子；未产出独立 per-command call-tree 规约文档 |
| dim4 interface/DTO/error/boundary | partial-closed | 6dims doc 已实测抽取 RouterUnlockAuthMarker/CodexNoAccountSlot/RelayState 三个 DTO 字段布局 + 12 类错误变体全编目；5 字段英文名未直读、value 归属存疑，故 partial-closed 而非 closed |
| dim5 同平台 gate | closed-for-existence, open-for-parity | mac 与 win 均落地新命令 + reconciler 守卫 + router_unlock_auth 闭包；win delta 锚点多为闭包/格式化层，主体逻辑 mac 可完整读出，未观测业务行为分叉；router_exit_guard_state win 侧无独立锚点 |
| dim6 test/acceptance mapping | not-closed | 无 C5 test/acceptance mapping 产出（与 1.2.3 baseline 同档位），1.2.4 delta 源未提供 test 映射，不臆造 |

## changelog 归属

本包对应 1.2.4 changelog 条目 A（优化无账号登录模式，修复中转模型不显示及关闭路由后状态残留）+ B（新增 Claude WebSearch 声明过滤兼容开关）。详见 `raw/aimami/1.2.4/macos-arm64/version-delta/CHANGELOG-FRONTEND-ALIGNMENT-1.2.4.md`（6 条 changelog 逐条对账到前端 beautified JS 真实行号 + 后端 6dims 证据指针）。

- **changelog A**：前端改（relay-page L3058-L3842 Os/Ls 组件 + noAccountSlots i18n 树 16 key + _r onSave + NoAccount 分支；index L25998-L26156 mock+wrapper）；后端证据 relay-router-auth-6dims L28-L29/L41-L42/L103-L118 + relay-catalog-thread-diag L55-L58。covered（双平台全对齐）。
- **changelog B**：前端改（maintenance-page L434-L446 useQuery+useMutation+invalidate+toast；index L11018-L11024/L11903-L11906/L41120-L41124/L41813-L41817 mock+wrapper+i18n）；后端证据 relay-translator-anthropic L18-L27 + repository-platform-system L24-L26/L36。covered（镜像 imageCompat 同构）。

## 破坏性副作用（全部来自真码 destructive 标注，去重）

### 文件落盘（atomic / persist）
- `commit_auth_for_router`：原子写 `router-unlock-auth-marker.json` + 原子覆盖用户实 OAuth 备份（`copy_atomic_private`）。**覆盖备份是不可逆点**。
- `RelayManager::persist`：原子 persist relay state（slot 数组写入 RelayState +16/+17/+18）。
- `router_transition::run`：由 transition 写 codex 配置（config.toml）。

### 进程 / Codex 重启（sidecar）
- `set_codex_no_account_slots` 后端命令**本身无 Codex 重启执行体**：不 kill/spawn Codex，只 persist + `router_transition::run` + 可选 `launch_codex_app_warning`（警告）；实际重启由前端按 `relaunch` 出参触发（`_r` 在 routerEnabled && noAccountMode 时强制 relaunch=true）。**前端「保存即重启」是前端侧默认行为，非后端命令直接执行**。
- `router_exit_guard_state`：迁移中返回 2 → 阻止 app 退出。
- `restore_router_enabled_stably`：transition 失败回滚 router_enabled 到稳定态。

### 内存突变（非落盘但改变运行态）
- `set_claude_web_search_compat`：突变 RelayState + 触发落盘。
- `strip_hosted_web_search_tools`（邻接，非本模块核心）：删内存 serde_json::Value 的 tools/tool_choice 键（只改内存不落盘，但影响后续 relay 请求）。

> 无 Keychain 写入；无 config.toml 直写（由 router_transition/config_takeover 间接写）；无裸 `fs::write`（全走 atomic_write/persist）。

## 证据指针

见 `pointers/evidence-paths.md`（指向 `raw/aimami/1.2.4/macos-arm64/` 的 .c 伪代码路径 + 前端 beautified JS + ipc-contracts.jsonl + 6dims doc + DELTA-FINAL 终稿 + CHANGELOG-FRONTEND-ALIGNMENT 对账文档）。

## Per-target Result Matrix

见 `gate-report.json`（`dim_status` 字段逐维度状态）与 `data/producer-ledger.json`（三档队列 + producer 认领记录）。摘要：
- dim1 前端控制流：mostly-closed
- dim2 后端 owner+pseudocode：strong
- dim3 call-tree 到实现叶子：partial
- dim4 interface/DTO/error/boundary：**partial-closed**（delta 轮显著优于 1.2.3 baseline 的 not-closed）
- dim5 同平台 gate：closed-for-existence / open-for-parity
- dim6 test/acceptance mapping：**not-closed**

## Gate Leaf Status

`consumerStartReady` 3 新命令（set_codex_no_account_slots / get_claude_web_search_compat / set_claude_web_search_compat）；`strictImplementationUse`/`readyToImplement` 为空。router_exit_guard_state 为 backend-only 命令（前端 page 级无消费者，属 app 退出流）。详见 `gate-report.json`。

## Diff 结论

相对 1.2.3：1.2.4 在 relay 子系统新增了一整套「托管 API Key / 无账号模式」鉴权链。`router_unlock_auth` 整个模块 12 个函数全是 NEW-delta，1.2.3 baseline 没有对应物——1.2.3 的 router 鉴权是另一套（legacy 实 OAuth 优先），1.2.4 在其上叠加了「AiMaMi 托管 key + 用户实 OAuth 可恢复时回退」的双轨制。新命令 `set_codex_no_account_slots` 让前端可直接写「无账号槽位」并触发 router 迁移；`verify_managed_auth_commit_boundary` 是一道提交闸，在托管鉴权落盘前强制校验 router URL 是 loopback http 且 catalog 与活动槽位严格一致；`router_exit_guard_state` 在 router 迁移进行中阻止 app 退出。详见 `logic/DELTA-LOGIC-1.2.4.md`。

## Unknown / Missing

1. `router_exit_guard_state` 前端 page 级消费者未定位——ipc-contracts.jsonl (1.2.4) 0 命中、frontend-contract-report.md 0 命中、frontend-control-flow.jsonl 0 命中，已交叉核查 3 处前端制品均为 0 命中。属 app 退出流（疑在根组件/window 关闭钩子），出 page 级 delta 范围。记 `accepted_unknown`（已交叉核查，非未查），不视为悬空。
2. `RouterUnlockAuthMarker` 5 个字段 key 的具体英文名（6/5/10/9/20 字符）由 serialize_entry 长度推断，未直读字符串池；BTreeMap 的 auth_mode(9)/OPENAI_API_KEY(14) 已直读确认，但 value 归属（OPENAI_API_KEY 挂 uuid、auth_mode 挂全局 static off_101973CF8）语义可疑，off_101973CF8 明文未读出，存疑待二次确认。记 `accepted_unknown`。
3. managed_api_key 的 14 字符 key 名与 23 字节前缀 XOR 掩码常量（xmmword_10166EEF0/xmmword_10166EEE0）未读出明文——AiMaMi managed key 敏感识别位，按脱敏红线不还原。记 `accepted_unknown`。
4. `set_claude_web_search_compat` mac setter 实现体不在本批 NEW-delta 制品（仅 DTO serialize@0x1005825c0），win delta 锚定了完整 setter@0x140e01580。消费侧实现时需以 win 行为为准并补 mac 等价路径。记 `blocks_start`。
5. dim6 test/acceptance mapping：1.2.4 delta 源未提供 test 映射，本消费者包不臆造。记 `blocks_start`。
6. `is_anthropic_thinking_signature_rejection` 本次仅登记文件存在，未深读 body；`proxy_server/client_for` 是 RwLock clone gym 而非鉴权本体。记 `accepted_unknown`。

## Action / Non-action

- **可以做**：consumerStartReady 档已满足（3 新命令），Polaris 可基于 12 个已逆 router_unlock_auth 函数 + 3 个 router_reconciler 函数 + 2 个 manager 新命令 + router_exit_guard_state + 3 个 proxy_server 兼容层函数的行为语义开始实现，但不得宣称与 upstream 100% 等价。
- **不要做**：不得把本包的 dim2 覆盖数字（26 mac + 20 win）当作 `full_leaf_100` 或 `implementation_use=true` 依据；不得对外发布本包任何内容（红线 23，内部专用）；不得用 mac 证据外推 Windows router_exit_guard_state 的行为（win 侧无独立锚点，mac-only observed，非确认 win 不存在）；不得把 dim4 partial-closed 当作 closed（5 字段英文名未直读、value 归属存疑）。
