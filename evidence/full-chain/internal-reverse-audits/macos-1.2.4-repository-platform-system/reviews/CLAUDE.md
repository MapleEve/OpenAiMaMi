# Claude 独立复核 — macos-1.2.4-repository-platform-system

复核日期：2026-07-29
复核范围：`raw/aimami/1.2.4/macos-arm64/version-delta/repository-platform-system-6dims.md`（6dims 详实分析，15088 字节）+ 盘上 12 mac `.c` 文件 + 4 win 模块相关 `.c` 文件，对照本包 README/manifest/gate-report/logic/pointers/producer-ledger 的一致性。

## 复核方法

未连接 IDA 或重新反编译；本次是**文档一致性复核 + 盘上文件存在性/截断桩/字节数 grounded 核对**（读盘对照 6dims 源文档 vs 本包结论文件），确认本包未在合成过程中拔高源材料的门禁档位或掩盖已记录的 gap。未执行 AGENT.md（Codex 独立复核）——本轮只产出 Claude 侧复核。

## 采用（Accepted）

- 3 条新命令（`get_claude_web_search_compat` / `set_claude_web_search_compat` / `set_codex_no_account_slots`）的判定——来自 6dims doc dim1 表格，mac+win 锚点地址与盘上 `.c` 文件名后缀地址一致（mac `0x10041d7a0` / win `0x140156ef0` / `0x140e01580` / `0x140e2de30`），本包采纳为 authoritative new_commands 列表。
- 12 mac `.c` 文件 + 4 win 模块相关 `.c` 文件的覆盖数字——来自 `find ... -name '*.c' | wc -l` 盘上实测，与 6dims 函数表 12 个 mac 函数一致，本包采纳为 authoritative coverage 数字。
- 0 截断桩的判定——`grep -l 'TRUNCATED|未完整|chars total'` 跨所有 16 个 `.c` 文件 0 命中（grep exit=1），与 6dims doc 头部声称「mac 函数多为 [FULL decompile] 或完整短函数，win 4 个均为 [FULL decompile]，无截断桩」一致。
- dim1（frontend CCF）not-closed、dim4（interface/DTO）partial-not-closed、dim6（test/acceptance）not-closed 的判定——6dims doc 从未声称做过这三项闭合，本包据此判定 `gate_accepted=false` / `implementation_use=false` / `full_leaf_100=false`，符合 OUTPUT-SPEC.md `full_leaf_100_definition_v2` 六维门槛要求。
- mac 侧 `set_claude_web_search_compat` / `set_codex_no_account_slots` setter 实现体不在本批 delta 的判定——6dims doc dim1 表格明确标注「win 锚定（mac delta 未含实现体，仅 DTO）」和「win 锚定（mac delta 仅 DTO serialize）」，盘上实测 mac `commands/relay/` 和 `commands/system/` 目录确实只有 serialize 和 get 实现，无 set 实现，本包据此标 `accepted_unknown` 而非 `blocks_start`（内容存在 win 侧，mac 侧缺失是 delta 批次范围限制，非未查）。

## 驳回/降级（Rejected/Downgraded）

- 6dims doc 头部声称「mac 13 个」`.c` 文件——盘上实测 12 个（`find` 跨 8 个模块目录），与 6dims 函数表 12 个 mac 函数一致。本包将「13」降级为 `accepted_unknown`（计数偏差，未发现第 13 个文件），未采纳为 authoritative 数字，manifest.json/coverage 字段使用 12。
- 6dims doc 头部声称「win 模块相关 4 个」——盘上实测 win `version-delta/ida/pseudocode/` 共 20 个 `.c` 文件，但与本模块（repository-platform-system）对齐的只有 4 个（`cmd_get_claude_web_search_compat` / `cmd_set_claude_web_search_compat` / `cmd_set_codex_no_account_slots` / `codexmate_lib4core10repository35enrich_active_acco`），其余 16 个属 relay 域（codex_catalog/codex_thread_visibility/codex_diagnostic/router_reconciler/router_unlock_auth/anthropic_reasoning 等），不在本包 scope。本包采纳 4 为 win 模块相关数字。

## 仍 Unknown

- mac 侧 setter 实现体（`set_claude_web_search_compat` / `set_codex_no_account_slots`）：源文档标「mac delta 未含实现体，仅 DTO」，本复核认为该分类合理（盘上实测确认 mac 侧只有 serialize），维持 `accepted_unknown`（delta 批次范围限制，非未查；win 侧有完整 setter 可参照）。
- `set_codex_no_account_slots` 的 `relaunch` 字段 Codex 重启执行体：源文档标「执行体不在本批 delta 制品内」，本复核认为措辞准确（win setter 函数体 725 行全为 serde 状态机，无 kill/spawn/exit），维持 `accepted_unknown`。
- dim4 interface/DTO 闭合抽取：源文档提供 DTO 字段线索（key 长度/偏移）但非闭合 per-command extraction pass，本复核认为标 `blocks_start` 准确，维持。
- dim6 test/acceptance mapping：源文档未产出，本复核认为标 `blocks_start` 准确，维持。
- frontend CCF：源文档未产出 per-page 组件树/状态模型逆向（1.2.4 frontend ipc-contracts.jsonl 已提取但无 CCF），本复核认为标 `not-closed` 准确，维持。
- `windows-1.2.4-repository-platform-system` 跨平台 sibling bundle：盘上无此目录（win raw `.c` 已在盘但无独立 win 侧 bundle），本复核认为标「尚未产出」准确，维持。

## 一致性核对

- manifest.json `binary.sha256_frontend_extraction` = `24bf0857f7afa0c2352cb5ca1552136c406ed9894609dc2de6152437faf9c288` ← 与 `raw/aimami/1.2.4/macos-arm64/MANIFEST.md` `binary_sha256` 字段一致 ✓
- manifest.json `coverage.backend_functions_decompiled_mac_on_disk` = 12 ← 与 `find ... -name '*.c' | wc -l` 盘上实测一致 ✓
- manifest.json `coverage.new_commands_this_delta` = 3 ← 与 6dims doc dim1 表格 3 条新命令一致 ✓
- gate-report.json `dim_status.dim2_backend_owner_pseudocode` = partial ← 与 6dims doc 12 mac + 4 win `.c` 文件、0 截断桩一致，但 2/3 命令 mac setter 缺失，partial 而非 strong 准确 ✓
- gate-report.json `covered_commands` / `new_commands` = 3 条 ← 与 6dims doc dim1 表格一致 ✓
- README.md 6dims 摘要表 ← 与 gate-report.json `dim_status` 一致 ✓
- logic/DELTA-LOGIC-1.2.4.md 8 个章节 ← 与 6dims doc 6 个 dim + 逐函数表 + 跨平台备注结构一致 ✓
- pointers/evidence-paths.md 12 mac + 4 win `.c` 路径 ← 与 `find` 盘上实测一致，字节数与 `wc -c` 一致 ✓
- producer-ledger.json `grounded_checks_run` 10 项 ← 均为本会话实际执行的命令 ✓
