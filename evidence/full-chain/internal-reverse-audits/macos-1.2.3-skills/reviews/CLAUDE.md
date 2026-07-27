# Claude 独立复核 — macos-1.2.3-skills

复核日期：2026-07-24
复核范围：本包自身产出（README/AI/SYSTEM-DIFF/manifest/gate-report/logic/pointers）对照直接读到的 27 个原始 `.c` 文件（21 macOS core/skills + 6 Windows skills + 3 core/models 相关 DTO 桩，后者内含一份被最初误判为"桩"的 field-name 解码器）+ `frontend/pages/mcp-sessions-settings-skills-frontend.md` L187-270 的一致性。

## 采用（Accepted）

- 21/21 macOS 函数真实命名、0 截断——直接 Read 全部 21 个文件核实，非转述 INDEX.jsonl 摘要。
- 6 个前端 invoke 命令与后端 `core::skills::<同名>` 函数 1:1 对应，`true_gaps=0`——直接对 `ipc-contracts.jsonl` grep 核实，非转述。
- `commands::skills::*` 在 macOS 无独立符号的判定——采纳 INDEX.jsonl 生产会话的原始说明（"inlined into async dispatch, only literal text inside drop_in_place shim"），未独立重新验证该说法本身，但该说法与本包直接读到的 21 个函数全部落在 `core::skills` 命名空间、且前端 6 命令全部映射到该命名空间同名函数的事实一致，采信合理。
- dim5（Windows 平台门）未闭合的判定——直接核实 windows-x64/skills 目录只有 6 个文件、仅 2 个有确认命名，据此标 `dim5_platform_gate: NOT closed`，未做 macOS 外推。

## 自我纠正（Self-correction，同一会话内，发布前完成）

- **初稿曾错误声称 `InstalledSkillSummary` 字段级形状未闭合**：初稿只读了同目录两个 `InstalledSkillSummary` 相关文件里的一个（`0x100376b30`，确认是 `Visitor::expecting()` 桩），未读另一个（`0x100378900`），凭文件名相似度假设它也是 `expecting()` 桩。发布前复核时实际 Read 了 `0x100378900`，发现它其实是 `FieldVisitor::visit_str` 字段名字节解码器（与 `SkillBackupMetadata` 那个模式完全一致），解出 8 个字段（`id`/`name`/`title`/`summary`/`relativePath`/`directoryPath`/`skillFilePath`/`updatedAt`）。已在 manifest.json/gate-report.json/README.md/AI.md/SYSTEM-DIFF.md/pointers/evidence-paths.md 全部同步修正，`InstalledSkillSummary` 现标为已闭合。此错误提醒：**同名文件不能只凭文件名模式假设内容一致，必须逐个 Read**——本包最终对全部 3 个 core/models 相关文件都做了直接 Read 核实，未再假设。
- `SkillListPayload` 仍保持未闭合判定——3 个 core/models 相关文件里唯二一个 `SkillListPayload` 相关文件确认是 `expecting()` 桩，没有第二个同类文件可能藏着 field visitor，这次判定基于实际文件清单穷尽（`grep -ril skill` 命中的 core/models 下只有这 3 个文件，全部读过），不是假设。

## 驳回/降级（Rejected/Downgraded）

- 未发现需要驳回的过度声称。本包在写作过程中主动把 dim3（call-tree）从"看起来完整"降级为"strong-narrative, not standalone-artifact"，因为虽然每个函数的调用链都读到了真实 fs 系统调用叶子，但没有产出独立的 `call-trees/*.jsonl` 机器可读产物——与 relay 姊妹包保持同一从严标准，不因为叙述详尽就自动升档。
- 角度C（语义孤儿扫描）主动标注为"grep 代理，非 live `export_funcs()`"，未把这次的 grep 结果包装成与 relay 包角度C同等强度的证据——relay 包角度C标的是"完全未执行"，本包至少跑了 grep 但明确降级为弱证据类别，未夸大。

## 仍 Unknown

- `SkillListPayload` 字段级形状与实际调用点——`class: blocks_start`，维持。
- 4 个 Windows 未解析函数（`sub_1408A4BA0`/`sub_140AD6680`/`sub_140B0FD50`/`sub_1414860D0`）身份——`class: accepted_unknown`（调用点位置提示但非确认），维持。
- ~19 个 macOS 函数在 Windows 侧完全无证据——`class: blocks_start`，维持。

## 复核方法

未连接 IDA，未做任何新反编译；本次是**蒸馏一致性复核**——把本包全部结论文件与本会话直接 Read 过的 27 个 raw `.c` 文件 + 1 个 frontend page md 逐条对照，纠正了 1 处因文件名模式假设导致的字段闭合误判（见上）。未执行 `reviews/AGENT.md`（Codex 独立复核）——本轮只产出 Claude 侧复核，`reviews/CROSS-REVIEW.md` 因此未创建（OUTPUT-SPEC.md 允许"至少一份存在"）。
