# Claude 独立复核 — windows-1.2.3-daemon-autoswitch

复核日期：2026-07-25
复核范围：本包（README/AI/SYSTEM-DIFF/gate-report/manifest/logic/pointers）内部一致性自复核，因本包是单 agent 单 pass 产出，无独立第二方 Codex/Agent 复核（`reviews/AGENT.md` 未产出，`reviews/CROSS-REVIEW.md` 因此未创建，符合 OUTPUT-SPEC.md"至少一份存在"的最低要求）。

## 采用（Accepted）

- 13 命令 canonical target_universe 直接继承 `../windows-1.0.9-daemon-autoswitch/`，未擅自扩大或缩小范围 —— 符合 RULE9"先消费当前 canonical universe，再决定是否需要新增证据"的要求。
- `configure_auto_switch` 的 `HEXRAYS_DECOMPILE_FAILED` 判定 —— 采纳，基于文件内**明确**的 `[HEXRAYS_DECOMPILE_FAILED: switch analysis failed: bad target 0x140CC6F38 for case 6]` 注释行 + `[TRUNCATED]` 标记，本复核独立读取该文件前 40 行原始反汇编确认双重 jump-table 结构存在，判定为红线20 "超大函数截断桩/decompile 失败" 场景，不当作完整伪代码处理，标 `blocks_start` 而非 `accepted_unknown`（未尝试破法，符合红线13）。
- `confirm_pending_auto_switch_and_restart_codex` 证据缺失判定 —— 采纳，`grep -rl` 全树搜索该确切命令名零命中的结论已独立复核重跑一次确认（同样零命中）；`switch_account_and_restart_codex` 候选文件的"身份未确认"判定同样采纳，理由是该文件本身也是 `HEXRAYS_DECOMPILE_FAILED`，且 Rust 命令名字符串不同，本复核未做字节签名或 xref 交叉核实。
- 全部 3 档 gate（consumerStartReady/strictImplementationUse/readyToImplement）标 0/13 —— 采纳，理由是 dim3（call-tree）/dim4（interface/DTO）/dim6（acceptance mapping）本 pass 均未产出，即便部分命令 dim1+dim2 证据不弱，也不满足 RULE7 定义的 consumerStartReady 9 项子维度（尤其 acceptanceDraftReady/boundaryPathReady 未触碰）。本复核认为这是正确的保守判定，与姊妹包 `windows-1.2.3-maintenance` 的先例一致（该包对 `rebuild_registry` 即便 dim2 很强也未给 consumerStartReady）。

## 驳回/降级（Rejected/Downgraded）

- 无。本 pass 的所有判定在本复核重跑关键 grep/find 命令后均可重现，未发现需要降级或驳回的过度声明。

## 仍 Unknown

- `configure_auto_switch`/`confirm_pending_auto_switch_and_restart_codex` 的真实解决需要 live IDA 连接，本 pass（及本复核）均无该访问权限——如实标 `blocks_start`，留给下一轮生产者 pass（`data/task-plan.json` `next_producer_steps`）。
- "win 1.2.1" header 注释 vs 1.2.3 raw 路径的溯源矛盾——本复核同样无法解决，留 Unknown。
- `restart_codex`/`export_debug_bundle`/`upload_debug_report` 3 命令的归属（本包 vs `windows-1.2.3-maintenance` vs 新包）——本复核认为这是一个需要人工/产品决策的问题，不应由单 agent pass 单方面决定"塞进"任一现有包，故本包选择"记录但不认领"的处理方式，本复核认为这是正确的、避免 PREWRITE_PRODUCER_COLLISION_GATE 风险的做法。

## 复核方法

文档内部一致性复核 + 关键 grep/find 命令独立重跑验证（`grep -rl "confirm_pending_auto_switch_and_restart_codex"` 全树搜索、`grep -c` ipc-contracts.jsonl 命令名核对、`configure_auto_switch`/`switch_account_and_restart_codex` 文件头部 HEXRAYS_DECOMPILE_FAILED 标记复读）。未连接 Windows IDA 实例复核。
