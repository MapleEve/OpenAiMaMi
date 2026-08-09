# AiMaMi 1.2.4 Windows 深度层补齐：layer3 + relay 精修传播 + mac↔win owner-map

session: `cc-aimami124-win-deep-layer3relay-owner-20260807`
binary: `<二进制路径>\AiMaMi 1.2.4 win64.exe` / `AiMaMi 1.2.4 win64.exe.i64`（sha256 `5b6aa827d6bde7c3a045c10d14b395fab87230fea434cb3d8f8631f79c6dc6b7`，sha12 `5b6aa827d6bd`）
scope：仅限本轮 confirmed delta 清单内的模块/函数，不扩大到清单外已从 1.2.3 迁移归因的函数。
方法：`references/ida-dirtree-module-recovery.md §3` layer3（tauri 命令名精确 xref）+ relay 精修传播（fanin/调用图邻近 + decompile-verified）+ mac↔win owner-map（用已落盘的 mac 1.2.4 决胜证据反查 win 侧字符串/结构签名）。

## 0. 红线 17 IDA 活体门

本轮起手 + 收尾共 3 次 `mcp__ida-pro-mcp-win__server_health`，全程确认：
`idb_path=<二进制路径>\AiMaMi 1.2.4 win64.exe.i64` / `module=AiMaMi 1.2.4 win64.exe` / `<反编译器>_ready=true` / `auto_analysis_ready=true`，`uptime_sec` 从 4675.8 单调升到 5558.2（无实例切换）。

## 0.5 既有工作诚实披露（本轮教训红线）

开工前核查确认，本 IDB 在本 session 开始前**已存在**以下既有工作，本轮予以如实复用/在其基础上增量，不重复劳动、不冒称现场重算：

1. **955 函数 / 71-73 目录 win-native 三层（layer1-2）基础归属**：2026-07-29 完成（`audits/COVERAGE-FINAL-1.2.4.md` 已记录），本轮直接复用其 dirtree 结构（`/codexmate_lib/platform/process` 已有 29 个函数、`/codexmate_lib/core/relay/codex_catalog`、`codex_diagnostic`、`codex_config_reconciler`、`codex_thread_visibility` 等目录均已存在）。
2. **20 个 delta 热点锚点 `.c`**（`raw/aimami/1.2.4/windows-x64/version-delta/ida/pseudocode/`，2026-07-29 落盘）：本轮直接读盘复用（未重新反编译），确认其中 3 个（`get_claude_web_search_compat`@0x140156ef0、`set_claude_web_search_compat`@0x140e01580、`set_codex_no_account_slots`@0x140e2de30）已完整反编译，仅缺规范 dirtree 归位——本轮补齐归位，未重复反编译。
3. **`DELTA-FINAL-1.2.4.md`（mac 侧权威整合终稿，经过 local-review + adversarial-review 多轮，最新 2026-08-06）**：其 §2「双平台差异」表已明确记录 win 侧对 `translator`/`anthropic_history`/`native_responses_compat`/`router_unlock_auth`（主体）/`codex_catalog`/`codex_thread_visibility`（库函数主体）/`repository` 相关内部函数**没有独立锚点**（strip 后无区分性信号）。本轮**没有直接采信**该结论了事，而是独立重新执行了本轮被指派的三种方法（见下）逐一验证，结果与该结论**一致**（真实独立复现，非盲从）——具体尝试与失败原因见 §3。

## 1. Layer3（tauri 命令名精确匹配）结果

| 命令 | win 地址 | 处置 | 置信度 |
|---|---|---|---|
| `commands::system::get_claude_web_search_compat`（NEW） | `0x140156ef0` | 已有完整反编译（2026-07-29），本轮补齐 dirtree 归位 `/codexmate_lib/commands/system/get_claude_web_search_compat` + inline 注释（sha/session 证据行） | **HIGH**（命令串精确 xref，唯一 handler） |
| `commands::relay::set_claude_web_search_compat`（NEW，manager 层 mac 对应 `RelayManager::set_claude_web_search_compat`@mac 0x10079bbc0） | `0x140e01580` | 同上，归位 `/codexmate_lib/commands/relay/set_claude_web_search_compat` | **HIGH** |
| `commands::relay`（manager 层）`set_codex_no_account_slots`（NEW，mac 对应 `RelayManager::set_codex_no_account_slots`@mac 0x10079a8a0） | `0x140e2de30` | 同上，归位 `/codexmate_lib/commands/relay/set_codex_no_account_slots` | **HIGH** |
| `commands::relay::get_codex_router_auth_readiness`（mac 符号 diff 声称 REMOVED） | 命令名串仍在 `0x14173f338`，唯一 xref 自 `sub_140180C00`（0x65c7 字节，疑似 tauri `generate_handler!` 主分发表，覆盖约 130 条命令） | **发现但未解决**：命令名串仍存在于 win 1.2.4 二进制，与 mac 符号表"-1 removed"声称存在潜在矛盾；因宿主函数体积过大（超出本轮预算），未完整反编译确认是否仍驱动到真实业务实现体，还是仅静态表残留。已加 inline 注释披露该发现，标 `accepted_unknown`，不升级为"确认仍存在"或"确认已移除" | **UNRESOLVED / 待下一轮深挖** |
| `core::mcp::remove_mcp_server`（mac 符号 diff 声称 REMOVED） | 命令名串仍在 `0x14173ecf1`，唯一 xref 自 `sub_140162EE0`（0x5ed 字节，已完整反编译） | **发现但未解决**：该函数是一个以 `"remove_mcp_server"` + `"repo"`/`"mutationGate"`/`"name"` 为 key 的能力/权限门检查闭包，末尾调用通用 invoke resolver `sub_1407A09A0`（同一 resolver 也被确认存活的 `get_claude_web_search_compat` 调用，故其出现不能单独证明有真实业务实现体）。已加 inline 注释披露，标 `accepted_unknown` | **UNRESOLVED / 待下一轮深挖** |

## 2. Relay 精修传播 + mac↔win owner-map 结果

| 目标（mac 侧确认新增/移除） | 尝试方法 | 结果 |
|---|---|---|
| `core::relay::anthropic_history::rectify_invalid_thinking_signature`（+1，mac 0x1004afd70） | mac README 已明确记录：win 侧**无独立锚点**（DELTA-FINAL §2）。本轮未发现可反驳该结论的新字符串/结构信号（"thinking signature"类内容为纯逻辑判断，无独立错误串） | **accepted_unknown**（沿用并独立验证 mac 侧结论，未新增证据） |
| `core::relay::proxy_server::claude_web_search_compat_enabled` / `is_anthropic_thinking_signature_rejection`（+2） | 同上；`proxy_server` 模块在 win 侧已有 ~135 个函数级归属（base layer），但均为 sub_XXXX 无区分信号；mac 侧对 `is_anthropic_thinking_signature_rejection` 自身也只标"仅登记存在"未深读 body（`relay-router-auth` bundle Unknown #6），故 win 侧不应/不能超越 mac 源本身的深度 | **accepted_unknown** |
| `core::relay::manager` 内部 getter（配合 `claude_web_search_compat_enabled` 消费侧） | 同上 | **accepted_unknown** |
| `core::relay::router_unlock_auth`：`commit_auth_for_router`/`has_restorable_real_oauth`/`has_usable_real_oauth_login`/`managed_api_key_marker_matches`/`should_use_no_account_mode`（+5）/ `ensure_auth_for_router`（-1） | 检查了模块已知的 2 个 win 薄壳（`router_unlock_auth28inst`@0x140410960、`router_reconciler35verif`@0x1408f69b0）——均为通用错误格式化闭包（读盘复用既有 2026-07-29 `.c`），非目标函数本体 | **accepted_unknown**（薄壳已排除，非目标；主体逻辑无独立锚点，与 DELTA-FINAL 结论一致） |
| `core::relay::codex_catalog`：`default_no_account_slots`/`normalize_no_account_slot_preference`/`validate_no_account_slots`（+3）/ `build_catalog_bytes`/`write_catalog`（-2） | 检查了模块内一个未归类候选（`write_pre`@0x140a339f0，读盘复用既有 `.c`）——确认是通用 JSON 序列化错误格式化闭包，非 `write_catalog` 本体 | **accepted_unknown** |
| `core::relay::codex_thread_visibility::restore_no_account_model_threads`（+1） | 检查了模块内 2 个未归类候选（`0x1404ae140`、`0x14054d260`，读盘复用既有 `.c`）——均为通用集合构建/迭代闭包，非目标 SQL UPDATE+文件删除逻辑 | **accepted_unknown** |
| `core::relay::translator`(+`stream`)：`anthropic_to_responses_response_with_tool_maps`/`stream::with_tool_maps`（+2）/ `with_tool_map`(单数)/`with_tool_name_map`（-2） | mac README 明确：库函数主体 win 侧无独立锚点；本轮未发现新信号 | **accepted_unknown** |
| `core::relay::native_responses_compat::sanitize_request`（-1） | 同上 | **accepted_unknown** |
| `platform::single_instance::acquire`（-1，mac 符号表声称移除；但 mac `repository-platform-system` bundle 显示 `imp::acquire`@mac 0x1006221b0 仍完整存在，疑为符号重导出层改名而非功能移除） | find_regex 命中日志串 `[AiMaMi] another instance is already running; exiting: `@0x1417ad658，唯一 xref 宿主 `0x14019d860`（~16.5KB，位于 `/codexmate_lib` 根桶，非独立 single_instance/ 子目录——该子目录当前不存在，0 函数）。函数体积远超单一 acquire() 应有规模，判断为大型 bootstrap 函数内联了 acquire 失败日志路径，而非 acquire() 本体独立编译单元 | **accepted_unknown**（已加 inline 披露注释，含 recovery_attempts） |
| `platform::process::codex_bundled_cli_path`（+1） | find_regex 命中 `codex.exe`/`Codex.exe`/`HKCU\...\App Paths\Codex.exe` 等 10 个注册表风格串（`0x141811cc0`-`0x1418120e1`），唯一 xref 宿主 `0x140a19ac0`。反编译确认：纯路径拼接+存在性探测（6 个候选，逐一 `sub_1414E1680` 探测命中即返回），无副作用，地址恰好落在已归属的 `platform/process` 函数范围内（`0x140A18C90`~`0x140A1A7C0` 之间），行为语义与 mac 侧"路径解析｜无风险"完全吻合 | **MEDIUM-HIGH**（decompile-verified + 模块归属地址局部性 + 行为语义吻合；但函数确切标识是"定位外部已安装 Codex.exe"还是"codex_bundled_cli_path"本体存在语义歧义，未获 100% 确证，未 rename 成精确命令名，仅归位 + comment 披露）。已归位 `/codexmate_lib/platform/process/sub_140A19AC0` + inline 注释 |
| `commands::deeplink`（仅 struct 级、低优先级） | 未投入本轮预算（清单本身标注"低优先级"） | 未处理，维持 Unknown |
| `external/http`（HeaderValue Debug::fmt，归属不明） | 未投入本轮预算（清单标注"低优先级"） | 未处理，维持 Unknown |

## 3. IDB 写回清单（inline write-back，本轮唯一落盘变更）

| 地址 | 操作 | 备注 |
|---|---|---|
| `0x140156ef0` | dirtree rename → `/codexmate_lib/commands/system/get_claude_web_search_compat` + append_comments | rc=0 |
| `0x140e01580` | dirtree rename → `/codexmate_lib/commands/relay/set_claude_web_search_compat` + append_comments | rc=0 |
| `0x140e2de30` | dirtree rename → `/codexmate_lib/commands/relay/set_codex_no_account_slots` + append_comments | rc=0 |
| `0x140a19ac0` | dirtree rename → `/codexmate_lib/platform/process/sub_140A19AC0` + append_comments（未改函数名，语义未 100% 确证） | rc=0 |
| `0x140162ee0` | append_comments（remove_mcp_server 发现披露，未 rename） | — |
| `0x140180c00` | append_comments（get_codex_router_auth_readiness 发现披露，未 rename） | — |
| `0x14019d860` | append_comments（single_instance 调查结论披露，未 rename） | — |
| `<工具调用>()` ×2 | 全部变更已落盘 `<二进制路径>\AiMaMi 1.2.4 win64.exe.i64` | `{"ok":true}` |

Grounded 复验：逐地址重读 `ida_dirtree.get_abspath` + `idaapi.get_func_cmt` 确认 dirtree 路径与注释文本（含 session tag）均已持久化（首次因 func_cmt 长度上限截断了 2 处尾部 session-tag，已补发短 tag 注释二次确认存在）。

## 4. 未解决事项（留给下一步 opus 整合复查 / Task #18-#19）

1. `get_codex_router_auth_readiness` / `remove_mcp_server` 命令名串在 win 1.2.4 仍存在且有薄壳/主分发表 xref，与 mac 符号表"-1 removed"声称存在未解释的分歧，需要下一步：要么完整反编译 `sub_140180C00`（0x65c7 字节，主分发表）确认 `get_codex_router_auth_readiness` 是否仍路由到真实业务体，要么在 mac 侧交叉核实该符号消失是否为"改名/inline"而非"真删除"。
2. `platform::single_instance::acquire`、8 个 relay 内部函数（anthropic_history/proxy_server/router_unlock_auth 主体/codex_catalog 主体/codex_thread_visibility 主体/translator+stream/native_responses_compat）在 win 侧独立验证仍无法突破 strip 后的信号缺失天花板；这与 DELTA-FINAL-1.2.4.md 的既有结论一致（独立复现，非盲从）。若要继续深挖，唯一可行路径是 mac↔win **逐函数级**结构比对（如按 offset/字节码模式匹配已知 mac body 的常量/立即数），预算超出本轮范围。
3. `platform::process::codex_bundled_cli_path` 的 win 候选（`0x140a19ac0`）语义仍有"内部 bundled CLI path" vs "外部已安装 Codex.exe 定位"的歧义，未 100% 确证，暂不建议作为 gate 意义上的 confirmed 归因。

**状态：LEAF_WRITTEN**（IDB inline 写回 + 本文档均已落盘；无 BLOCKED 项——本轮无工具/权限/平台障碍，只是部分目标 evidence ceiling 已达）。
