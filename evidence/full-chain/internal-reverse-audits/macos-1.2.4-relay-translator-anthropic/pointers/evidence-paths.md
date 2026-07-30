# Evidence Pointers — macos-1.2.4-relay-translator-anthropic

所有路径均为 SMB 绝对路径（本会话硬编码 ``，不用 env-var，按 skill 红线 16）。本文件只给指针，不复制 raw 内容。

## raw evidence（backend `.c` 伪代码，6 模块 32 函数）

### core/relay/translator（9 函数）
- `/raw/aimami/1.2.4/macos-arm64/core/relay/translator/ida/pseudocode/anthropic_to_responses_response_with_too_0x100829870.c` — 非流式一次性翻译入口（[FULL decompile 3192 行]）
- `/raw/aimami/1.2.4/macos-arm64/core/relay/translator/ida/pseudocode/collect_loaded_custom_tool_names_0x10080d800.c`
- `/raw/aimami/1.2.4/macos-arm64/core/relay/translator/ida/pseudocode/collect_tool_search_output_tools_0x10080dae0.c`
- `/raw/aimami/1.2.4/macos-arm64/core/relay/translator/ida/pseudocode/is_anthropic_relay_private_item_0x10080c0a0.c`
- `/raw/aimami/1.2.4/macos-arm64/core/relay/translator/ida/pseudocode/leading_think_prefix_decision_0x10080a950.c`
- `/raw/aimami/1.2.4/macos-arm64/core/relay/translator/ida/pseudocode/push_anthropic_message_block_0x100805ec0.c`
- `/raw/aimami/1.2.4/macos-arm64/core/relay/translator/ida/pseudocode/push_anthropic_thinking_block_0x10080a9b0.c`
- `/raw/aimami/1.2.4/macos-arm64/core/relay/translator/ida/pseudocode/strip_leading_think_open_tag_0x100809440.c`
- `/raw/aimami/1.2.4/macos-arm64/core/relay/translator/ida/pseudocode/unwrap_custom_tool_input_0x1007f6380.c`

### core/relay/translator/stream（6 函数，整体重写）
- `/raw/aimami/1.2.4/macos-arm64/core/relay/translator/stream/ida/pseudocode/with_tool_maps_0x100acf9f0.c` — stream 构造（uuid+timestamp+双 tool map）
- `/raw/aimami/1.2.4/macos-arm64/core/relay/translator/stream/ida/pseudocode/close_all_blocks_0x100ad0f40.c` — 批量迭代收尾
- `/raw/aimami/1.2.4/macos-arm64/core/relay/translator/stream/ida/pseudocode/close_anthropic_block_0x100ad10d0.c` — 单入口分发器（[FULL decompile]）
- `/raw/aimami/1.2.4/macos-arm64/core/relay/translator/stream/ida/pseudocode/close_anthropic_tool_block_0x100ad52a0.c` — tool 块收尾（[FULL decompile]）
- `/raw/aimami/1.2.4/macos-arm64/core/relay/translator/stream/ida/pseudocode/finish_response_0x100acfdc0.c` — 成功收尾径
- `/raw/aimami/1.2.4/macos-arm64/core/relay/translator/stream/ida/pseudocode/fail_with_type_0x100aced60.c` — 失败收尾径

### core/relay/anthropic_reasoning（NEW 模块，7 函数全部 NEW-delta）
- `/raw/aimami/1.2.4/macos-arm64/core/relay/anthropic_reasoning/ida/pseudocode/normalize_model_name_0x100572da0.c`
- `/raw/aimami/1.2.4/macos-arm64/core/relay/anthropic_reasoning/ida/pseudocode/uses_adaptive_thinking_0x1005731d0.c`
- `/raw/aimami/1.2.4/macos-arm64/core/relay/anthropic_reasoning/ida/pseudocode/adaptive_thinking_is_default_0x1005739f0.c`
- `/raw/aimami/1.2.4/macos-arm64/core/relay/anthropic_reasoning/ida/pseudocode/thinking_cannot_be_disabled_0x100573940.c`
- `/raw/aimami/1.2.4/macos-arm64/core/relay/anthropic_reasoning/ida/pseudocode/codex_effort_to_anthropic_0x100573340.c`
- `/raw/aimami/1.2.4/macos-arm64/core/relay/anthropic_reasoning/ida/pseudocode/effort_to_thinking_budget_0x100573640.c`
- `/raw/aimami/1.2.4/macos-arm64/core/relay/anthropic_reasoning/ida/pseudocode/reasoning_explicitly_disabled_0x100573ad0.c`

### core/relay/anthropic_history（NEW 模块，5 函数）
- `/raw/aimami/1.2.4/macos-arm64/core/relay/anthropic_history/ida/pseudocode/normalize_messages_0x1004ac900.c` — 66KB，内嵌 SHA-256 轮常量（[FULL decompile]）
- `/raw/aimami/1.2.4/macos-arm64/core/relay/anthropic_history/ida/pseudocode/push_tool_result_block_0x1004af550.c`
- `/raw/aimami/1.2.4/macos-arm64/core/relay/anthropic_history/ida/pseudocode/rectify_invalid_thinking_signature_0x1004afd70.c`
- `/raw/aimami/1.2.4/macos-arm64/core/relay/anthropic_history/ida/pseudocode/rectify_invalid_thinking_signature_0x1009af720.c` — retain_mut 闭包
- `/raw/aimami/1.2.4/macos-arm64/core/relay/anthropic_history/ida/pseudocode/trailing_turn_supports_thinking_0x1004afa50.c`

### core/relay/native_responses_compat（1 函数，NEW 函数）
- `/raw/aimami/1.2.4/macos-arm64/core/relay/native_responses_compat/ida/pseudocode/strip_hosted_web_search_tools_0x1003f5f60.c`

### core/relay/models（4 函数）
- `/raw/aimami/1.2.4/macos-arm64/core/relay/models/ida/pseudocode/contains_http_status_code_0x10057e240.c`
- `/raw/aimami/1.2.4/macos-arm64/core/relay/models/ida/pseudocode/serialize_0x10057cbe0.c` — CodexNoAccountSlot serialize 单态 1
- `/raw/aimami/1.2.4/macos-arm64/core/relay/models/ida/pseudocode/serialize_0x10057cd30.c` — CodexNoAccountSlot serialize 单态 2
- `/raw/aimami/1.2.4/macos-arm64/core/relay/models/ida/pseudocode/serialize_0x10057cea0.c` — CodexNoAccountSlot serialize 单态 3

## raw evidence（6dims 详实分析 + 跨平台整合）

- `/raw/aimami/1.2.4/macos-arm64/version-delta/relay-translator-anthropic-6dims.md` — 本包主证据源（24278 字节，6 维度逐函数分析）
- `/raw/aimami/1.2.4/macos-arm64/version-delta/DELTA-FINAL-1.2.4.md` — 跨平台整合终稿（27345 字节，主题 A/B/C/D 归纳）
- `/raw/aimami/1.2.4/macos-arm64/version-delta/CHANGELOG-FRONTEND-ALIGNMENT-1.2.4.md` — changelog↔前端对账（15481 字节，确认 changelog C 为 backend-only）
- `/raw/aimami/1.2.4/macos-arm64/version-delta/FRONTEND-CCF-DELTA-1.2.4.md` — 前端 CCF delta（17308 字节，maintenance/relay 页新命令接入点）

## raw evidence（frontend，2 个消费页面）

- `/raw/aimami/1.2.4/macos-arm64/frontend/beautified/maintenance-page-Cfv_qYNg.js` — ClaudeWebSearchCompat toggle（消费 get/set_claude_web_search_compat）
- `/raw/aimami/1.2.4/macos-arm64/frontend/beautified/relay-page-pfdbI0wX.js` — NoAccountSlots Os/Ls 组件（消费 set_codex_no_account_slots）
- `/raw/aimami/1.2.4/macos-arm64/frontend/beautified/index-UqyngLFp.js` — 共享 bundle（wrapper + mock + i18n）
- `/raw/aimami/1.2.4/macos-arm64/frontend/ipc-contracts.jsonl` — 全量 IPC 命令映射
- `/raw/aimami/1.2.4/macos-arm64/frontend/frontend-contract-report.md` — 前端契约摘要
- `/raw/aimami/1.2.4/macos-arm64/frontend/frontend-control-flow.jsonl` — 前端控制流

## raw evidence（binary + 版本基线）

- `/raw/aimami/1.2.4/macos-arm64/VERSION-BASELINE.md` — binary sha256 `24bf0857f7afa0c2352cb5ca1552136c406ed9894609dc2de6152437faf9c288`（AiMaMi.arm64.thin，IDA decompile source）
- `/raw/aimami/1.2.4/macos-arm64/MANIFEST.md` — reverse evidence manifest（tauri-dumper 0.1.5 / python3 3.13.5 / node v24.4.1 / rustfilt 0.2.1 / rizin 0.8.2）
- `/raw/aimami/1.2.4/macos-arm64/frontend-assets.sha256` — 前端资产哈希（含 relay-page-pfdbI0wX.js `ceef9114...`）
- `/raw/aimami/1.2.4/macos-arm64/frontend-tool-status.txt` — 工具状态（tauri-dumper exit=0, frontend-extract exit=0, frontend-ast exit=3）

## consumed bundle（baseline 1.2.3 relay）

- `internal-reverse/audits/macos-1.2.3-relay/` — baseline 1.2.3 relay 模块结论包（manifest.json/gate-report.json/README.md/logic/DELTA-LOGIC-1.2.3.md/logic/REGISTRATION-TABLE-1.2.3.md/logic/FULL-CHAIN-1.2.3.md/pointers/evidence-paths.md/data/producer-ledger.json/data/task-plan.json/reviews/CLAUDE.md/AI.md/SYSTEM-DIFF.md）

## cross-platform sibling（尚未产出）

- `internal-reverse/audits/windows-1.2.4-relay-translator-anthropic/` — **尚未产出**。win delta 证据内联在 6dims §7（win `0x1408a2a20` uses_adaptive_thinking 逻辑等价、3 命令名跨平台一致）；独立 win bundle 待后续组装。

## INDEX.jsonl 命中

- 本包为消费者结论包，不新增 raw evidence，不 append INDEX.jsonl。所有 raw evidence 已由 producing session（relay-translator-anthropic-6dims.md 的产出会话）落盘并索引。
