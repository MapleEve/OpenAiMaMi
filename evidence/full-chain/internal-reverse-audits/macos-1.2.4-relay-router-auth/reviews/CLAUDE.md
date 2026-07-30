# Claude 独立复核 — macos-1.2.4-relay-router-auth

复核日期：2026-07-29
复核范围：`raw/aimami/1.2.4/macos-arm64/version-delta/relay-router-auth-6dims.md`（6dims 详实分析，20133B）+ `DELTA-FINAL-1.2.4.md`（跨平台整合终稿，27345B）+ `CHANGELOG-FRONTEND-ALIGNMENT-1.2.4.md`（6 条 changelog 对账，15481B）对照本包 README/manifest/gate-report/logic/pointers/producer-ledger 的一致性。同时对照 baseline `internal-reverse/audits/macos-1.2.3-relay/` 的 gate 档位继承是否正确。

## 复核方法

未重新连接 IDA 或重新反编译；本次是**文档一致性复核 + 文件系统 grounded 校验**（读盘对照 6dims doc/DELTA-FINAL/CHANGELOG-FRONTEND-ALIGNMENT 原文 vs 本包结论文件，并用 find/wc/grep/python3-json 对 raw evidence 路径做 grounded 校验）。未执行 AGENT.md（Codex 独立复核）——本轮只产出 Claude 侧复核，`reviews/CROSS-REVIEW.md` 因此未创建（OUTPUT-SPEC.md 允许"至少一份存在"）。

## 采用（Accepted）

- **router_unlock_auth 12 函数全 NEW-delta** 的判定——来自 6dims doc L32 "1.2.3 baseline：无 `set_codex_no_account_slots`、无 `router_exit_guard_state`、无 `router_unlock_auth` 子模块全部 12 函数"，本包采纳为 authoritative delta 判定。grounded 校验：`find /raw/aimami/1.2.4/macos-arm64/core/relay/router_unlock_auth/ida/pseudocode/ -name '*.c' | wc -l` = 12，与 6dims doc 逐函数表（L101-L122）16 行一致（12 router_unlock_auth + 3 router_reconciler + 1 router_exit_guard_state，其中 router_unlock_auth 含 3 个 install_managed_api_key_auth closure 算 3 行）。
- **3 新命令 + 1 backend-only 命令** 的判定——来自 python3 json parse of ipc-contracts.jsonl（1.2.4=134 unique vs 1.2.3=131 unique，+3 new，-0 removed）+ frontend-contract-report.md（134 命令，含 set_codex_no_account_slots/set_claude_web_search_compat/get_claude_web_search_compat 的 wrapper/argKeys/files）。router_exit_guard_state 在 ipc-contracts.jsonl/frontend-contract-report.md/frontend-control-flow.jsonl 三处 0 命中，确认前端 page 级无消费者。本包采纳为 authoritative command delta。
- **gate 档位继承 baseline 不升 ready** 的判定——来自 OUTPUT-SPEC.md 迁移要求"有行为 diff 只允许为 changed targets 增补证据，不得把既有 implementation_use=false/gate_accepted=false/full_leaf_100=false 改成 true"+ CONSUMER-GATE-SCHEMA.md"旧 implementation_use=false / gate_accepted=false / full_leaf_100=false 保持 false"。1.2.3 baseline gate-report.json 明确 readyToImplement=0/strictImplementationUse=0/full_leaf_100=false（dim4/dim6 未闭合）。本包 gate_accepted=false/implementation_use=false/full_leaf_100=false 符合迁移要求。
- **dim4 partial-closed** 的判定——6dims doc 已实测抽取 RouterUnlockAuthMarker/CodexNoAccountSlot/RelayState 三个 DTO 字段布局 + 12 类错误变体全编目（dim2/dim4 详实表），显著优于 1.2.3 baseline 的 not-closed。但 5 字段英文名未直读、value 归属存疑，故 partial-closed 而非 closed，不构成 readyToImplement 升档依据。本包采纳为 authoritative dim4 判定。

## 驳回/降级（Rejected/Downgraded）

- 无发现源文档存在需要驳回的过度声称；6dims doc 本身措辞克制（L134-L139 明确标注"静态字符串常量未在伪代码内联展开，长度与调用点已实测，具体文案字节未读出，不臆造内容"、"managed_api_key 的 14 字符 key 名与 23 字节前缀 XOR 掩码常量未读出明文——AiMaMi managed key 敏感识别位，按脱敏红线不还原"）。本包据此把"6dims 已实测抽取 DTO/字段/错误变体"与"5 字段英文名未直读、value 归属存疑、dim6 未闭合"两个结论并列写入，不合并成单一乐观结论。
- DELTA-FINAL-1.2.4.md L98 "set_claude_web_search_compat/set_codex_no_account_slots：win delta 锚定了完整 setter 实现，mac delta 仅含 DTO serialize（mac setter 实现体不在本批 NEW-delta 制品，可能 1.2.3 已有或归入其它模块）。消费侧实现时需以 win 行为为准并补 mac 等价路径"——本包据此在 gate-report.json unknowns 标 `blocks_start`（非 accepted_unknown），在 README Unknown #4 明确标注，未做假墙化处理。

## 仍 Unknown

- **router_exit_guard_state 前端 page 级消费者**：6dims doc L29/L131 + DELTA-FINAL L66/L148/L188/L197 + CHANGELOG-FRONTEND-ALIGNMENT L71/L95 均如实标注"前端 page 级 delta 未发现直接消费者（属 app 退出流，疑在根组件/window 关闭钩子，出 page 级 delta 范围）"。本复核 grounded 校验：ipc-contracts.jsonl (1.2.4) 0 命中、frontend-contract-report.md 0 命中、frontend-control-flow.jsonl 0 命中——已交叉核查 3 处前端制品均为 0 命中。维持 `accepted_unknown`（已交叉核查，非未查），不视为悬空，不阻塞 consumerStartReady（属 app 退出流，非 page 级消费）。
- **RouterUnlockAuthMarker 5 字段具体英文名**：6dims doc L136 "5 个字段 key 的具体英文名（6/5/10/9/20 字符）由 serialize_entry 长度推断，未直读字符串池；BTreeMap 的 auth_mode(9)/OPENAI_API_KEY(14) 已在 commit_auth_for_router 直读确认"。本复核认为措辞准确，维持 `accepted_unknown`（不影响开始实现，DTO 形状已实测，但不得宣称 strict parity）。
- **managed_api_key 14 字符 key 名与 23 字节前缀 XOR 掩码常量**：6dims doc L137 "AiMaMi managed key 敏感识别位，按脱敏红线不还原明文，仅记录校验机制"。本复核认为脱敏处理正确，维持 `accepted_unknown`。
- **set_claude_web_search_compat mac setter 实现体**：DELTA-FINAL L98 明确标注 mac delta 仅含 DTO serialize，setter 不在本批。本复核认为应标 `blocks_start`（非 accepted_unknown），因为消费侧实现需要 setter 行为，而 mac 侧证据缺失。维持。
- **dim6 test/acceptance mapping**：6dims doc + DELTA-FINAL 均未提供 test 映射，本消费者包不臆造。维持 `blocks_start`。
- **is_anthropic_thinking_signature_rejection body**：6dims doc L138 "本次仅登记文件存在，未深读 body"。维持 `accepted_unknown`。

## 与 baseline 1.2.3 的一致性校验

- baseline `macos-1.2.3-relay/gate-report.json` 明确 readyToImplement=0/strictImplementationUse=0/consumerStartReady=23/full_leaf_100=false（dim4 not-closed/dim6 not-closed）。本包 gate-report.json 的 gate_summary 继承此天花板（readyToImplement=0/strictImplementationUse=0），只对 1.2.4 新增的 3 个 consumerStartReady 命令做 gate 判定，不触碰 1.2.3 既有的 23 条命令 gate 档位。符合 OUTPUT-SPEC.md"既有 readyToImplement=[] 不自动升级"。
- baseline `macos-1.2.3-relay/manifest.json` 的 consumed_bundles 指向 BASELINE-FINAL-1.2.3.md + COVERAGE-FINAL-1.2.3.md。本包 manifest.json 的 consumed_bundles 指向 `internal-reverse/audits/macos-1.2.3-relay/`（baseline bundle 本身），符合"旧版本目录只能作为证据来源指针"的迁移要求。
- baseline `macos-1.2.3-relay/` 的 cross_platform_sibling 指向 `windows-1.2.3-relay/`。本包 cross_platform_sibling 指向 `windows-1.2.4-relay-router-auth/`（尚未创建，为预期 sibling 路径）。

## 文件骨架白名单校验

本包文件骨架符合 AGENTS.md RULE 8(b) 白名单（只允许）：README.md · manifest.json · gate-report.json · logic/*.md · reviews/{CLAUDE,AGENT,CROSS-REVIEW}.md · pointers/evidence-paths.md · data/*.json。本包实际产出：README.md + manifest.json + gate-report.json + logic/DELTA-LOGIC-1.2.4.md + pointers/evidence-paths.md + data/producer-ledger.json + reviews/CLAUDE.md（7 个文件）。未产出 AI.md/SYSTEM-DIFF.md（1.2.3 baseline 有，但本 delta 轮消费者结论包按任务要求只产出 7 个文件，AI.md/SYSTEM-DIFF.md 的结构化交接/系统差异内容由 README.md + logic/DELTA-LOGIC-1.2.4.md 承载，不违反"至少一份复核存在"的最低要求）。无 .DS_Store 污染。
