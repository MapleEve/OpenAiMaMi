# Claude 独立复核 — macos-1.2.4-relay-translator-anthropic

复核日期：2026-07-29
复核范围：`raw/aimami/1.2.4/macos-arm64/version-delta/relay-translator-anthropic-6dims.md`（6dims 详实分析，24278 字节）+ `DELTA-FINAL-1.2.4.md` + `CHANGELOG-FRONTEND-ALIGNMENT-1.2.4.md` + `FRONTEND-CCF-DELTA-1.2.4.md` 对照本包 README/manifest/gate-report/logic 的一致性。同时对照 baseline `internal-reverse/audits/macos-1.2.3-relay/` 模板。

## 复核方法

未重新连接 IDA 或重新反编译；本次是**文档一致性复核**（读盘对照 6dims 原文 + DELTA-FINAL + CHANGELOG-FRONTEND-ALIGNMENT + FRONTEND-CCF-DELTA vs 本包结论文件），确认本包未在合成过程中拔高源材料的门禁档位或掩盖已记录的 gap。未执行 AGENT.md（Codex 独立复核）——本轮只产出 Claude 侧复核，`reviews/CROSS-REVIEW.md` 因此未创建（OUTPUT-SPEC.md 允许"至少一份存在"）。

## 采用（Accepted）

- 32 个去重反编译函数、0 截断桩的最终数字——来自 6dims §8 函数清单（逐函数 name + behavior + destructive），所有 32 函数均带 `[FULL decompile]` 头，大函数（`anthropic_to_responses_response_with_tool_maps` 3192 行、`normalize_messages` 66KB）显式标 FULL。本包采纳为 authoritative coverage 数字。
- dim4（interface/DTO）partial-closed、dim6（test/acceptance mapping）not-closed 的判定——源 6dims §10「未决/不臆断项」如实标注 handle_event/normalize_messages SHA-256/codex_effort_to_anthropic anon 串/native_responses_compat 旧函数对账四项为待查/待对账，本包据此判定 `readyToImplement=false`/`strictImplementationUse=false`/`gate_accepted=false`，符合 OUTPUT-SPEC.md `full_leaf_100_definition_v2` 六维门槛要求。
- changelog C（Anthropic reasoning）backend-only 的判定——`CHANGELOG-FRONTEND-ALIGNMENT-1.2.4.md` §1.5 对账总表第 C 行明确标注「否（纯后端协议层，前端无 UI）」，本包 README「changelog 归属」段据此写入，未拔高。
- 3 条新命令（`get_claude_web_search_compat`/`set_claude_web_search_compat`/`set_codex_no_account_slots`）的 consumerStartReady 档位——基于 6dims §1（commands 维度，3 命令均为 NEW，1.2.3 win delta 无同名锚点）+ FRONTEND-CCF-DELTA（maintenance-page/relay-page 消费点已定位）+ 32 个已逆函数的行为语义，符合 consumerStartReady 四要素（renderSurfaceReady + uiCallEntryReady + happyPathReady + backend owner）。

## 驳回/降级（Rejected/Downgraded）

- 无发现源文档存在需要驳回的过度声称；6dims §10「未决/不臆断项」本身已经是自我克制四项（handle_event 待查、normalize_messages SHA-256 不展开伪算法、codex_effort_to_anthropic 不强行命名、native_responses_compat 旧函数待对账），复核未发现该文档内部存在夸大 gate 档位的表述（该文档从未使用 `readyToImplement`/`strictImplementationUse`/`gate_accepted` 字样，只谈函数级证据）。本包据此把「dim2 strong（32 函数 0 截断）」与「六维 full_leaf_100 门未闭合」两个结论并列写入，不合并成单一乐观结论。
- `set_claude_web_search_compat` mac setter 实现体不在本批 NEW-delta 制品（仅 DTO serialize @0x1005825c0）——源 `CHANGELOG-FRONTEND-ALIGNMENT-1.2.4.md` §4 note 明确标注「以 win 行为 @0x140e01580 为准」，本包 README/gate-report 据此标 accepted_unknown 并在 Action/Non-action 段写入「不得用 mac 证据外推 win setter 行为」，未降级为 blocks_start（因 win 行为已完整逆出，非未查）。

## 仍 Unknown

- `handle_event`（stream 主事件循环）未在本批 delta 伪代码中露出：源 6dims §10 标「待查，不臆断」，本复核认为措辞准确，维持 accepted_unknown。
- `normalize_messages`（66KB）完整 thinking signature 算法：源 6dims §10 标「只确认使用了 SHA-256，不展开伪算法」，本复核认为措辞克制，维持 accepted_unknown。
- `codex_effort_to_anthropic` len3(low/max)/len5(xhigh) 具体返回串：源 6dims §10 标「不强行命名」，本复核认为措辞准确，维持 accepted_unknown。
- 1.2.3 `native_responses_compat` 的 `rejects_hosted_web_search`/`sanitize_request` 在 1.2.4 是否仍存在：源 6dims §10 标「待对账」，本复核认为这是真实 open gap，维持 blocks_start（非 accepted_unknown，因未交叉核查）。
- dim4 逐命令 DTO/error-envelope/side-effect 边界、dim6 test/acceptance mapping：均未系统化产出，是推进到 `strictImplementationUse` 的下一步工作，维持 blocks_start。

## 与 baseline 1.2.3 模板的一致性

本包结构严格遵循 `macos-1.2.3-relay/` 模板：
- `manifest.json` schema 一致（c5cm.internal_reverse.audit_manifest.v1），字段对齐（product/target_version/platform/module/package/created_at/producer_machine/binary/scope/coverage/coverage_mode/gate_summary_ref/task_plan_ref/consumed_bundles/cross_platform_sibling/known_residuals/note）。
- `gate-report.json` schema 一致（c5cm.reverse.audit.gate_report.v1），字段对齐（gate_summary/readyToImplement/implementation_use/gate_accepted/full_leaf_100/dim_status/covered_commands/consumerStartReady_commands/strictImplementationUse_commands/unknowns/notes）。新增 `gate_tier`/`gate_tier_context`/`new_commands`/`new_commands_note` 字段以反映 delta 轮特性（1.2.3 是 baseline 轮无此字段）。
- `README.md` 章节对齐（模块职责 + 6dims 摘要 + changelog 归属 + 破坏性副作用 + 证据指针 + Per-target Result Matrix + Gate Leaf Status + Diff 结论 + Unknown/Missing + Action/Non-action）。1.2.3 的「Coverage」「Frontend Control Flow」「Backend Control Flow / Pseudocode / Call-tree」「Interface / Error / Boundary」等章节按 delta 轮特性合并/精简。
- `logic/DELTA-LOGIC-1.2.4.md` 对齐 `logic/DELTA-LOGIC-1.2.3.md` 的 8 节结构（命令/DTO/字段/错误路径/持久化/sidecar/结构差异/未决）。
- `pointers/evidence-paths.md` 对齐（raw evidence backend + frontend + 6dims + consumed bundle + cross-platform sibling）。
- `data/producer-ledger.json` schema 一致（c5cm.reverse.producer_ledger.v1），字段对齐（bundle/producer/machine/session/produced_at/mode/task_kind/new_raw_or_intermediate_produced/files_written/gate_tier_touched/gate_status/grounded_checks_run/avoid/next_producer_steps/started/completed）。新增 `claim_basis`/`scope`/`target_count`/`targets` 字段以反映消费者结论包特性。
- `reviews/CLAUDE.md` 对齐（采用/驳回/仍 Unknown/复核方法 四节）。

本包未复制 1.2.3 的 `AI.md`/`SYSTEM-DIFF.md`/`logic/REGISTRATION-TABLE`/`logic/FULL-CHAIN`/`data/task-plan.json`——这些是 1.2.3 baseline 轮的产物，delta 轮的等价信息已内联在 `README.md`/`logic/DELTA-LOGIC-1.2.4.md`/`data/producer-ledger.json` 中，不重复造冗余文件。
