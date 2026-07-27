# Claude 独立复核 — windows-1.2.3-system

## 覆盖范围

本轮亲自执行：`ls` SMB 挂载核验 → Skill 加载 rust-reverse-pipeline → 逐字读 `AGENTS.md`（243 行全文）+ `OUTPUT-SPEC.md`（274 行全文）→ `server_health` IDA 活性门 → 9 个 system 域地址逐一 `decompile` 现场核验 → `WIN-APP-FUNCTION-INVENTORY.jsonl`（1133 行）grep 统计 → `INDEX.jsonl` 落盘记录核对 → 前端 26 命令名逐一 grep 核对 → `paths`/`debug_log` 各 1 文件抽验归属注释格式。

## 采用的结论

- 9 个 system 域文件 + 45 个 platform 支撑文件（共 54）确认在盘、模块级归属完整、非截断——这是本轮**独立现场验证**的事实，非转述既有文档。
- `consumerStartReady=0/26` 是本轮基于 AGENTS.md「artifact/platform 没拿到的状态保持 Unknown，禁止用 macOS 证据外推 Windows」的保守判定——模块级归属不足以支撑任何单条命令的 start gate（happyPathReady 要求"该命令的具体 backend owner"，而非"该命令所属模块的某个文件存在"）。

## 驳回的候选结论

- 曾考虑过是否可以基于"6 个文件对应 26 个命令中某个子集，按函数复杂度/参数特征启发式猜测映射"来提升部分命令至 `consumerStartReady`——**驳回**：这类启发式映射没有交叉验证手段（无法确认猜测正确），属于 AGENTS.md 明确禁止的"人工推测"（`不把 synthetic CCF/call-chain、old-tool-only、neighbor-only、diagnostic-only、range-repaired candidate 当 accepted proof`），故未采用，如实记为 `blocks_start`。

## 未解决 / 留给下一轮

- 命令级归属映射方法本身未设计——需要更系统的方法（例如反查 macOS 侧已知的每命令函数大小/复杂度特征，与 Windows 侧 6 个候选做启发式匹配后**用独立证据交叉验证**，而非单凭启发式直接下结论）。
- `daemon`/`single_instance` 在 Windows 上的真实存在形式未探索。
- `IDA Python` 工具在本轮 IDA MCP 实例上不可用，无法复现 2026-07-24 gapfill session 使用的批量驱动脚本；本轮改用标准 `decompile` 逐个核验，结果一致但效率更低，未做超出已知 9+2 地址范围的新探索。

## CROSS-REVIEW 说明

本轮未产出独立的第二方（Codex/Agent）复核，故本包暂不含 `reviews/AGENT.md` 与 `reviews/CROSS-REVIEW.md`。按 OUTPUT-SPEC.md 验收条件「`reviews/AGENT.md` 与 `reviews/CLAUDE.md` 至少一份存在」，本包满足最低验收，但严格意义上的交叉复核尚未完成——留作后续步骤。
