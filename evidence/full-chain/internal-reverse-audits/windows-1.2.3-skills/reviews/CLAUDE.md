# Claude 独立复核 — windows-1.2.3-skills

复核日期：2026-07-25
复核范围：本包自身产出（README/AI/SYSTEM-DIFF/manifest/gate-report/logic/pointers）对照本会话直接产出的证据（13 个 raw `.c` 文件中的 7 个新增、dirtree 活体查询结果、`callees()`/`server_health`/`idb_save` 返回值）逐条核对。

## 四角度完整性核验（SKILL.md 红线15 FOUR_ANGLE_COMPLETENESS）

- **角度A（func_query/dirtree 符号枚举）**：LIVE 执行，非复用旧记录。`/codexmate_lib/core/skills` BFS 枚举出 7 个（不是 raw 目录原有的 6 个），当场发现 gap（`backup_skill_directory` @ `0x1409060c0` 有 dirtree 归属但无 raw 证据）。`/codexmate_lib/commands/skills` 枚举出 0 个（移动前），随后本轮通过名称/注释扫描在 dirtree 根路径发现全部 6 个 command handler 游离未归目录，移动后复核该目录确实变为 6 个（未在本次复核重新查询确认，见"待办"）。
- **角度B（前端 ipc-contracts.jsonl diff）**：LIVE 对 `raw/aimami/1.2.3/windows-x64/frontend/ipc-contracts.jsonl` grep，6/6 命令全部命中，`true_gaps=0`。
- **角度C（语义关键词孤儿扫描）**：LIVE `idautils.Functions()` 全量遍历 + 名称/注释子串 `skill` 扫描（非 string-pool 代理，也非文本 grep 代理——比 macos-1.2.3-skills 批1 使用的方法更强一级）。14 命中，13 已分类，1 未核实（`serialize_10`）。**诚实标注**：未核实项未被计入"零孤儿"结论，`gate-report.json`/`manifest.json` 均将其列为 `accepted_unknown`，未静默清零。
- **角度D（manifest covered_commands diff + 孤儿四分类）**：6/6 前端命令均已在本包 `manifest.json.coverage.frontend_commands_list` 中列出并与 win owner 一一对应；核心层 7 个函数无对应前端命令（符合预期，它们是被 command handler 调用的内部辅助/或调用关系待确认，非独立前端入口）。`serialize_10` 因未核实，暂不归类到四类中的任何一类（既非 `already_in_canonical` 也非 `truly_undone`），如实标"待核实"，不强行分类。

## 采用（Accepted）

- 13 个 win 函数（7 core + 6 commands）的 owner-identity 判定——直接来自本会话 `server_health`/dirtree 查询/`decompile()`/`callees()` 的 LIVE 返回值，非转述旧摘要。
- 5 个完整命令 handler 的"完整但未追踪 call-tree"判定——直接检查每个 `decompile()` 返回的 `code` 字段末尾是否含截断标记（`chars total]`），5 个均无该标记（对比 2 个截断函数确有该标记），据此二分类，非猜测。
- `backup_skill_directory -> sub_1408A4BA0` 调用边——直接来自 `callees()` 工具返回值中该地址对的命中，非从 mac 侧调用点位置推测外推。
- dirtree 移动 6/6 `rc=DTE_OK=0` 与 `idb_save ok=true`——直接来自工具调用返回值，未假设成功。

## 自我纠正（Self-correction，同一会话内）

- **dirtree BFS 首次实现报错**：递归函数内部访问外层 `dt` 变量触发 `NameError: name 'dt' is not defined`（IDA `IDA Python` 的 `exec()` 用了独立 globals/locals，函数体内看不到调用侧的模块级变量）。已改写为扁平队列（非递归）版本，验证通过后才采信其枚举结果——**未把首次失败的空结果或报错误判为"目录为空"**，而是修复脚本后重新核验。
- **`server_health`/`IDA Python` 一度连接失败**（`{"error":"no session (<host> down?)"}`，出现 3 次调用中 2 次失败）——严格按红线17 IDA_LIVE_GATE 执行：重试 1 次，仍失败后 STOP，**未**把连接失败当"无 gap"处理，`serialize_10` 因此如实标记为未核实而非默认"已覆盖"或"非孤儿"。

## 驳回/降级（Rejected/Downgraded）

- 主动拒绝把"5 个完整命令 handler 的 owner 已确认 + pseudocode 在盘"升级为"call-tree 已理解"——`gate-report.json.consumerStartReady_basis` 明确写"WEAKER than macos-1.2.3-skills"，未虚报为同等强度证据。
- 主动拒绝把 2 个截断函数（1023/48033、1023/66937 字符）的可见部分（仅函数签名+变量声明）当作"已完整反编译"——`manifest.json.known_residuals`/`gate-report.json.unknowns` 均逐条标注截断字节数与占比（约2%、约1.5%），未模糊处理为"部分完成"这类含糊表述。
- 主动拒绝把 win 13 函数 vs mac 21 函数的数量差异包装成"win 覆盖率=62%"这类误导性百分比——如实说明这更可能是编译期 inlining 架构差异（command handler 内联吞并了 mac 侧多个小函数），并明确标注这是未经反汇编级验证的假设，不是确认结论。

## 本轮内后续解决（同一会话，IDA 连接恢复后）

- `serialize_10`（`0x140aa9980`）——IDA 连接恢复后重新核实其注释：`= mac codexmate_lib::core::models::...SkillRemovePayload::serialize`，是 `SkillRemovePayload` DTO 的序列化 glue 函数，物理位于 `core::models` 非 `core::skills`/`commands::skills`，属角度D "already_in_canonical"（正确地不在本模块目标域内），非真孤儿。已同步更新 `gate-report.json.unknowns`（`class` 从 `accepted_unknown` 改为 `resolved_not_orphan`）。**未**因为一开始标了 `accepted_unknown` 就懒得回头核实——IDA 连接后半段恢复正常，随手补验，体现"待核实≠放弃核实"。
- `commands/skills` dirtree 目录移动后状态——本轮内二次 LIVE 查询确认目录内确有 6 个函数（`delete_skill_backup`/`restore_skill_backup`/`remove_skill`/`import_skill`/`load_skill_backups`/`load_installed_skills`），补齐了上一版复核笔记里留的"待办"（不只信任 `rc=0` 返回值，事后目录列表复核也做了）。

## 仍 Unknown

- 5 个完整命令 handler 的 call-tree/控制流——`class: blocks_start`，维持，明确写入 next_producer_steps。
- 2 个截断函数的完整内容——`class: blocks_start`，维持，明确写入 next_producer_steps（basic_blocks 分块读）。
- 4 个未解析身份 helper（除 1 条新确认调用边外）——`class: accepted_unknown`，维持，未借本轮机会强行"破墙"（无破法尝试记录，不敢标 `genuine_ceiling`，如实留 `accepted_unknown`）。

## 复核方法

本次复核在 IDA 连接恢复后补做了 2 项 LIVE 二次核验（`/codexmate_lib/commands/skills` 目录列表、`serialize_10` 注释），其余文档措辞逐条核对本会话早前调用的原始返回值。未执行独立 Codex 复核（`reviews/AGENT.md` 未产出，`reviews/CROSS-REVIEW.md` 因此未创建，同 macos-1.2.3-skills 批1 先例，OUTPUT-SPEC.md 允许"至少一份存在"）。剩余待办见 `data/task-plan.json.next_producer_steps`（call-tree 追踪、2 个截断函数分块补逆、4 个未解析 helper 身份、~14 个 mac-only helper 的 win 证据缺口）。
