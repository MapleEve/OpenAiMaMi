# Windows 1.2.6 8 个 BLOCKED 目标 — 跨平台 mac↔win 同源映射 dim4 闭合

> session: `cc-win126-8blocked-crossmap-dim4-closure-20260816`
> 性质：消费者面向收口终稿。用 mac 1.2.6 有符号二进制（demangled `codexmate_lib::` 全限定名 + serde `Serialize` impl 的 `serialize_entry` 键字面量）把 win 1.2.6 strip 侧的 8 个 BLOCKED 目标的 DTO 类型/字段/错误信封/副作用/具体 handler 闭合。此前标「诚实 BLOCKED／动态派发不可恢复／Rust 私有 DTO 无法恢复」均被证明是假上限。
> 授权：仓主本人对话确认 AiMaMi 为自家/已获书面授权产品并下达复刻/逆向工作。本文档只做消费者视角合同提炼，不提升任何实现门。
> 平台边界：只覆盖 `windows-x64`；mac 侧证据仅作为跨平台同源映射的**符号来源**，win 侧行为以 win live decompile 为准（红线 8：平台证据由对应平台生产，mac 不外推 win 行为）。

## 0. 方法（红线24 三层恢复 + mac 符号 + serde 字段）

1. mac 有符号 IDB 用 `func_query` 枚举 demangled 符号定位同源 handler 与 DTO 类型名。
2. serde `Serialize` impl（`<Type as serde_core::ser::Serialize>::serialize`）反编译读 `serialize_entry(key_literal, len, offset)` 还原字段名与结构偏移。
3. win strip 侧用红线24（命令名串唯一 xref → handler；panic-Location 两跳 → 源码文件；调用图传播）已恢复 owner_ea，live decompile 核行为与 mac 同构。
4. dim4 = 输入 DTO 字段 / 返回 DTO 类型 / 错误信封 / 副作用 四件套闭合。

## 1. 总账（8 目标 dim4 闭合结果）

| target | 输入 DTO | 返回 DTO | 错误信封 | 副作用 | 具体 handler（mac 符号） | dim4 |
|---|---|---|---|---|---|---|
| get_claude_web_search_compat | 无参 | `CoreEnvelope<bool>` | `CoreError`(Display) | 无（只读） | `commands::system::get_claude_web_search_compat` | CLOSED |
| set_claude_web_search_compat | `{enabled: bool}` | `CoreEnvelope<ClaudeWebSearchCompatPayload>` | `CoreError`("Codex router transition lock is poisoned") | 持久化 RelayState | `RelayManager::set_claude_web_search_compat` | CLOSED |
| get_codex_router_auth_readiness | 无参 | `CoreEnvelope<i32>`（复合位域） | 无（恒 ok） | 无（只读） | `router_unlock_auth::readiness` + `RelayManager::snapshot` | CLOSED |
| set_codex_no_account_slots | `{slots: Vec<CodexNoAccountSlot>, relaunch: bool}` | `CoreEnvelope<CodexNoAccountSlotsPayload>` | `CoreError`("...lock is poisoned") | 持久化 + 可能 router transition（不直接重启 Codex） | `RelayManager::set_codex_no_account_slots` | CLOSED |
| remove_mcp_server | `{name: String}` | `CoreEnvelope`（ok/err） | `CoreError`("no entry found for key") | ⚠ 原子写 codex_config.rs | `core::mcp::remove_mcp_server` | CLOSED |
| run_bundled_cli | 内部函数（非 IPC） | `Result<Output>` | io::Error | spawn 子进程 + 500ms 超时 kill | `codex_catalog::run_bundled_cli` | CLOSED（已 MIGRATED_REFERENCE_CLOSED） |
| set_anthropic_thinking_carrier | 内部函数（非 IPC） | 原地 JSON 变异 | 无 | 无（纯内存 SSE 事件构造） | `translator::set_anthropic_thinking_carrier` | CLOSED |
| clean | 无（诊断 helper） | — | — | 无（非用户面） | repo-clean helper | 归位诊断性（非 IPC） |

## 2. 逐目标跨平台证据

### 2.1 get_claude_web_search_compat
- **mac handler**：`codexmate_lib::commands::system::get_claude_web_search_compat` @ `0x10049b940`（0x234B）。反编译：`RelayManager::snapshot` → `storage::sanitize_for_export` → 读 `RelayState` 偏移 **+318** 的 bool，`CoreEnvelope::ok(v7, v8[318])`。返回 **`CoreEnvelope<bool>`**。错误路径 `CoreError` Display → `*a1 = 0x8000000000000000`（Err 判别子）。
- **win handler**：`get_claude_web_search_compat` @ `0x14014ade0`（0x3b8B）。反编译：薄壳 `manager.request(name="get_claude_web_search_compat", target="manager")`（`sub_140B2A730` 动态派发）→ 响应经 `sub_140AFFC30`（`CoreEnvelope` finalize）走 Tauri invoke 回传。
- **动态派发闭合**：win 的 `manager.request` 目标即 mac 的 `RelayManager` actor；getter 语义 = 读 RelayState 快照的 `claudeWebSearchCompat` 标志（+318）。无副作用，纯读。
- **dim4**：输入无参；返回 `CoreEnvelope<bool>`；错误 `CoreError`；副作用无。

### 2.2 set_claude_web_search_compat
- **mac 具体 handler（动态派发目标）**：`codexmate_lib::core::relay::manager::RelayManager::set_claude_web_search_compat` @ `0x100a668c0`（0x419B）。反编译：`(dst, manager, int enabled)`；锁 transition mutex + state mutex；比较 enabled 位，若变更则 clone RelayState + `RelayManager::persist`（0x100a780e0）落盘；错误 "Codex router transition lock is poisoned"（40B 字面量）。
- **输入 DTO 字段（serde）**：`ClaudeWebSearchCompatPayload` 的 serde `serialize` @ `0x1005a3380`，唯一 `serialize_entry(key="enabled"@0x101679d55, 7, ...)`。字段 = **`enabled: bool`**（单字段）。
- **返回 DTO**：`CoreEnvelope<ClaudeWebSearchCompatPayload>`（来自 `ResultFutureTag` 符号 `tauri..ipc..command..private..ResultFutureTag..future<CoreEnvelope<ClaudeWebSearchCompatPayload>, String, set_claude_web_search_compat::{{closure}}>`）。
- **win handler**：`set_claude_web_search_compat` @ `0x140d47c70`（0xe97B）。反编译：async 状态机解析 `{target:"manager", enabled:<bool>}`（字面量 `enabled` @ `0x141886da0`），持久化落点 `sub_140504EE0`（-1/-2/-3 错误哨兵），响应经 `sub_140AFFC30`。
- **跨平台映射**：win `sub_140504EE0`（apply-handler 持久化落点）= mac `RelayManager::set_claude_web_search_compat`。`enabled` 字段双端字面量一致。
- **dim4**：输入 `{enabled}`；返回 `CoreEnvelope<ClaudeWebSearchCompatPayload>`；错误 `CoreError`（mutex poisoned）；副作用持久化 RelayState。

### 2.3 get_codex_router_auth_readiness
- **mac 具体 handler**：`tauri_cmd_router_unlock_auth_readiness_dispatch` @ `0x10062b180` → `router_unlock_auth::readiness` @ `0x1007365a0` + `RelayManager::snapshot`。返回 `CoreEnvelope::ok(v5 | v3 & 0xFFFF00FF)`（v3=readiness，`BYTE5(snapshot[39])`=relay 状态字节，偏移 +317）。
- **win handler**：`get_codex_router_auth_readiness_owner_sys` @ `0x140547c70`（0x71B）。反编译：`sub_140BF9190`（repository auth 检查）+ `sub_1409C2D20`（RelayManager 快照，26-caller helper）；`v5 = v4 & 0xFF00`；`sub_1404D0720(a1, v5 | v4 & 0xFFFF00FF)`。
- **跨平台映射（字节级一致）**：mac `router_unlock_auth::readiness` = win `sub_140BF9190`；mac `RelayManager::snapshot` = win `sub_1409C2D20`；复合位域 `v5 | v4 & 0xFFFF00FF` 与 +317 偏移双端一致。
- **dim4**：输入无参；返回 `CoreEnvelope<i32>` 复合位域（readiness 低 16 位 + relay 状态字节）；错误无（恒 ok）；副作用无。

### 2.4 set_codex_no_account_slots
- **mac 具体 handler**：`RelayManager::set_codex_no_account_slots` @ `0x100a654e0`（0x10edB）。反编译：`(dst, manager, slots_vec, relaunch_bool)`；`validate_no_account_slots`（0x100adbfc0）→ `normalize_no_account_slot_preference`（0x100ae17c0）→ `no_account_slot_routing_changed`（0x100adfd70）→ `persist`（0x100a780e0）→ 可能 `router_transition::run`（0x100a50b30）；**不直接重启 Codex**（`is_codex_app_running` + `launch_codex_app_warning` 仅告警）。
- **输入 DTO 字段（serde + win 命令串）**：
  - 输入 = `{slots: Vec<CodexNoAccountSlot>, relaunch: bool}`（win `set_codex_no_account_slots` @ 0x140d75ea0 解析 `slots`@0x141887197 / `relaunch`@0x14188719c）。
  - `CodexNoAccountSlot`（72B）serde `serialize` @ `0x10059b230`：`providerId`(String, offset 8)、`model`(String, offset 32)、`catalogSlug`(Option<String>, offset 48)。字段名字面量 `providerId`@0x1016798db(10)、`model`@0x101678ccb(5)、`catalogSlug`@0x1016798e5(11)。
- **返回 DTO 字段（serde）**：`CodexNoAccountSlotsPayload` serde `serialize` @ `0x1007cf110`：`state`(offset 0, 5)、`codexLaunchError`(offset 344, 16)、`warnings`(offset 320, 8)。返回 `CoreEnvelope<CodexNoAccountSlotsPayload>`。
- **win handler**：`set_codex_no_account_slots` @ `0x140d75ea0`（0x111aB）。apply-handler = `apply_handler_invoke_shared_glue`（`sub_1405052C0`，数据驱动 vtable 分发，已收录于该命令叶 pseudocode/0002）。slot 元素 72B stride 双端一致。
- **dim4**：输入 `{slots, relaunch}`；返回 `CoreEnvelope<CodexNoAccountSlotsPayload={state,codexLaunchError,warnings}>`；错误 `CoreError`（mutex poisoned）；副作用持久化 + 可能 router transition（不直接重启）。

### 2.5 remove_mcp_server
- **mac handler**：`codexmate_lib::core::mcp::remove_mcp_server` @ `0x1009f31d0`（0xceeB）。反编译：`(dst, path_ptr, path_len, name_ptr, name_len)`；`parse_mcp_document`（0x1009f6f80）→ HashMap 查 `name` → 移除条目 → `write_atomic_with_mode`（0x100a4ca40）**原子写 codex_config.rs**。错误 "no entry found for key"（字面量）。⚠ 持久化副作用。
- **输入 DTO**：`{name: String}`（win `remove_mcp_server` @ 0x140156d90 解析 `name`@0x141778191）。
- **win handler**：`remove_mcp_server` @ `0x140156d90`（0x5edB）。反编译：解析 `{repo, mutationGate, name}`，调用 `sub_1409F42E0`（= mac `core::mcp::remove_mcp_server`）。
- **dim4**：输入 `{name}`；返回 `CoreEnvelope`；错误 `CoreError`（"no entry found for key"）；副作用 ⚠ 原子写 codex_config.rs。

### 2.6 run_bundled_cli（内部函数，非 IPC 命令）
- **mac**：`codexmate_lib::core::relay::codex_catalog::run_bundled_cli` @ `0x100aceed0`（0x742B）。spawn bundled CLI 子进程（`Command::new`+`arg`+stdin/stdout/stderr+spawn），`500000000`（500ms）超时轮询 try_wait，超时 kill + wait_with_output 取输出。源文件 `src/core/relay/codex_catalog.rs`。
- **win**：`run_bundled_cli` @ `0x140555b60`（0x5eeB）。反编译：`500000000`（500ms）同常量；`Command` 构造 + `do{arg(...);a4+=2}while(a4!=v9)` 参数循环与 mac 逐行同构；spawn + try_wait + 超时 kill + wait + `CloseHandle` 清理（= mac `drop_in_place<Command/Child>` fd 释放）。日志串 `codexmate_lib::core::relay::codex_catalog` / `src\core\relay\codex_catalog.rs` 与 mac panic-Location 一致。
- **状态**：已 `MIGRATED_REFERENCE_CLOSED`（task#173/175，199 行完整非截断 CONFIRMED 反编译体落盘）。
- **dim4**：内部回退源函数，spawn 子进程 + 500ms 超时 kill，非 IPC 命令，无前端 DTO。

### 2.7 set_anthropic_thinking_carrier（内部函数，非 IPC 命令）
- **mac**：`codexmate_lib::core::relay::translator::set_anthropic_thinking_carrier` @ `0x100a1cdd0`（0x20fB）。读 content block `type` 字段：`type=="thinking"`（8B，`0x676E696B6E696874`）读 `signature` 字段；`type=="redacted_thinking"`（17B SIMD 比对）读 `data` 字段。序列化该字段 + base64 + 前缀 `aimami-anthropic-thinking-v1:` → 写入 `encrypted_content` 字段。纯内存 JSON 变异。
- **win**：`set_anthropic_thinking_carrier` @ `0x140a28fb0`（0x1f9B）。反编译：`type` 字段判 `"thinking"`(8B)/`"redacted_thinking"`(17B SIMD)、读 `data`/`signature`、`sub_140961DC0` 序列化 + `sub_1409A6990` base64、前缀 `off_141855FB0`（=`aimami-anthropic-thinking-v1:`）、`sub_1414D4900` 写 `encrypted_content`。与 mac 100% 同构。
- **dim4**：内部 translator 助手（SSE 事件构造），非 IPC 命令；无破坏性副作用（纯内存）；无前端 DTO。

### 2.8 clean（诊断性归位）
- **结论**：`clean` 是 repo-clean 诊断 helper，**非用户面 IPC 命令**。win 侧 owner `sub_140AF0C50` 已恢复（706 instr/106 cfg blocks 非截断），但无 UI/输入 DTO/公共响应错误信封可复刻（本就是内部 helper，无 upstream 命令行为）。归位 `BLOCKED_DIAGNOSTIC_ONLY`（implementation_leaf=false），非用户面，不构成 release-scope dim4 缺口。

## 3. 假上限破除记录（红线13 反作弊）

| 原 BLOCKED 理由 | 破法 | 结果 |
|---|---|---|
| 动态派发 handler 静态不可恢复（get/set_claude_web_search_compat） | mac demangled 符号 `RelayManager::set_claude_web_search_compat` 定位具体 handler + win `manager.request`/`sub_140504EE0` 落点核验 | 具体 handler 已闭合 |
| Rust 私有 DTO 无法恢复（DTO/error 未闭合） | mac serde `Serialize` impl 读 `serialize_entry` 键字面量还原字段名/偏移 | DTO 字段名+类型全部还原 |
| getter→config 字段绑定（+318）未闭合 | mac `get_claude_web_search_compat` 反编译直接读 `v8[318]` | 字段偏移 +318 闭合 |
| 消费者合同未 reduce（run_bundled_cli / set_anthropic_thinking_carrier） | 双端反编译体已存在且同构，reduce 到 spawn/500ms/SSE 合同 | 合同已 reduce |

## 4. 门禁（不变）

- 本文件闭合的是 **dim4 证据档**（DTO/error/side-effect/handler），不提升 `consumerStartReady`/`strictImplementationUse`/`readyToImplement`/`gate_accepted` 任一实现门。
- 8 目标中 7 个（除 clean）dim1-5 在 leaf 级闭合，dim6（实现侧验收映射 + 真机对照）留白，符合 GATE-SPEC §DIM1-6。
- `clean` 维持 `BLOCKED_DIAGNOSTIC_ONLY`（非用户面，无 DTO 可闭合，属正确归位非缺口）。
- bundle 级 `windows-1.2.6-version-delta` 的 N0 producer gaps（call_tree_depth_1 / interface_contract_missing / pseudocode_truncated / four_angle_inputs_missing）中，`interface_contract_missing` 与 `call_tree_depth_1`（动态派发部分）本轮已由本文件闭合；`pseudocode_truncated`（load_snapshot decompile_null）与 dim6 仍开放，故 bundle 级仍不宣称 readyToImplement。

## 5. 证据指针

- mac IDB：`/Volumes/Work/internal-history/C5CodexManager/raw/binary/AiMaMi 1.2.6.app/Contents/MacOS/AiMaMi.i64`（有符号，demangled）。
- win IDB：`E:\binary\AiMaMi 1.2.6 win64.exe.i64`（strip，live decompile 正常）。
- 反编译证据地址见第 2 节逐目标。
- 消费者合同终稿：`CONSUMER-CONTRACT-NONVOICE-49.md`（§2 BLOCKED 表已同步更新）。
- gate-report：`windows-1.2.6-version-delta/gate-report.json`（新增 `crossmap_8_blocked_dim4_closure_20260816` 字段）。

## 6. handler 静态钉死 + DTO 字段级闭合（round4/round5/deep-recovery，2026-08-16 追加）

> 本文档 §2 此前把 win 侧 setter 的落点记为 command wrapper（`sub_140504EE0`/`sub_1405052C0`）级。round4（`cc-win126-actor-channel-handler-20260816`）+ round5（`cc-win126-nonvoice-vtable-deep-20260816`）沿 actor-channel 消息信封 + vtable 逐表项反编译，把 handler 身份**静态钉死到具体函数地址**，破除「动态派发 handler 静态不可恢复」的最后一层假上限。

- **set_claude_web_search_compat**：vtable `off_14188A280`[0]=`0x1408084F0`=jmp `sub_140E47CD0` → `sub_140DCCD00` → `sub_140958E00` → **`sub_1409B6420`**（与 mac `0x100a668c0` 逐字段同构：lock Codex router transition lock + lock relay state + clone RelayState(318B) + 比较/写 +318 bool(v32@v31+0x13E) + **`sub_1409C0B10` persist**）。
- **set_codex_no_account_slots**：vtable `off_141889D80`[0]=`0x1408083F0`=jmp `sub_140E3E7D0` → case0 **`sub_140DC9E00`**（读 payload+validate）+ **`sub_140C774F0`**（字段写+persist+transition）。512B 请求信封 offset0=tag 0xCC / offset16=vtable / offset56=state / offset64+=payload{slots,relaunch}。
- **correction**：round3 曾把 `((*a2+16)+24)=vtable[3]` 误当 handler 目标；`vtable[3]` 实为 poll/await（response 等待），真正 handler 是 `vtable[0]` 链，静态可钉。
- **remove_mcp_server**：`McpServerSummary` 9 字段（win serializer `0x1404A70C0` = mac `0x1005a14a0`）：`name@0`/`transport@217`/`enabled@216`/`sourcePath@24`/`command@72`/`args@48`/`url@96`/`headers@120`/`environment@168`；entry `0x140156D90`→facade `0x1409F42E0`→impl `0x1409D0ED0`。
- **clean**：`CleanResult` 3 字段（`authBackupsRemoved`/`registryBackupsRemoved`/`staleEntriesRemoved`，u32），owner `0x140AF0C50`，`semantic_recovery`（非用户面 `implementation_leaf=false`）。
- **CoreEnvelope 错误信封**：`{schemaVersion, success, code, message, payload}`；`CoreError` 经 Display 平铺进 envelope `code`(integer)+`message`(string)+`success=false`（err_discriminator `0x8000000000000000`）。

> 本追加不改动本文档 §1-§5 任何既有结论，不提升任何实现门。逐字段原始证据见各 raw leaf `interface-report.json` + `crossmap-dim4-field-level.json`。
