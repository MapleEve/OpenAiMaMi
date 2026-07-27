# Claude 独立复核 — macos-1.2.3-system-hotspot

复核日期：2026-07-24
复核范围：本包自身产出（README/AI/SYSTEM-DIFF/manifest/gate-report/logic/pointers）对照本会话直接 Read 到的 18 个 macOS `.c`（16 commands/hotspot + 2 platform/screen）+ 5 个 Windows `.c` + 3 份前端页文档相关章节 + `backend-baseline/commands-baseline.md` §4 + `backend-baseline/platform-baseline.md`（用于确认 `platform/screen` 范围此前未覆盖）的一致性。

## 采用（Accepted）

- 18/18 macOS 函数真实命名、0 截断——直接 Read 全部 18 个文件核实，非转述既有 baseline 文档摘要。
- 5 个前端 invoke 命令与后端同名/相关函数 1:1 对应，`true_gaps=0`——直接对 `ipc-contracts.jsonl` grep 核实。
- `platform/screen` 归入本包范围的判定——核实 `platform-baseline.md` 明确排除 `screen` 子目录（只覆盖 process/paths/debug_log/daemon/single_instance/system_volume/proxy），且 `commands-baseline.md` 只覆盖 `commands/` 层不含 `platform/`，确认此前无任何 baseline 文档覆盖过这 2 个文件，本包首次归并合理，非重复劳动。
- dim3 "mixed" 判定（7/18 函数闭合到真实 AppKit 叶子，11 个函数停在未展开反编译的匿名闭包分发点）——这是本次复核中主动发现并降级的结论：初读时容易把"函数已完整反编译"误当作"call-tree 已闭合"，但 `focus_main_window`/`reveal_main_window`/`force_reveal_main_window`/`refresh_hotspot_on_main`/`register_hotspot_relayout_observers`/`install_native_hotspot_observers` 的 5 个 handler block 实际执行体都只是构造一个装箱闭包送到 `tauri_runtime_wry::send_user_message`，闭包体本身不在本次证据集内——本包已在 gate-report.json/README.md/AI.md/logic/REGISTRATION-TABLE-1.2.3.md 中一致地把这 11 个分发点标为 dim3 未闭合，未因为"外层函数已读完整"就笼统宣称整个模块 call-tree 已闭合。

## 自我纠正（Self-correction，同一会话内，追加 INDEX.jsonl 前完成）

- **初稿曾把 `focus_main_window` 的闭包体列入"6 个未展开反编译"清单，与其余 5 个函数一视同仁标 `blocks_start`**。按红线12 CLAIM_FIRST/红线11 PREWRITE_PRODUCER_COLLISION_GATE 的要求，追加根 `INDEX.jsonl` 前必须重读 owner 上下文；重读时发现根 `INDEX.jsonl` 行数已从会话早期的 1821 涨到 1849（并发生产者活动），新增行里含 `aimami/1.2.3/macos-arm64/window-path/focus_main_window`（`gate:strictImplementationUse`），进一步核实发现姊妹包 `internal-reverse/audits/macos-1.2.3-window-path/` 已把该函数从 1.0.9 baseline 迁移复核到 `strictImplementationUse`（dim1-5 全闭合），其 `logic/WINDOW-PATH-DISTILLED-123.md` 明确解出闭包体为 `WryUserEvent(discriminant=28, focused=true)`。已在 manifest.json/gate-report.json/README.md/AI.md/logic/FULL-CHAIN-1.2.3.md/logic/REGISTRATION-TABLE-1.2.3.md/pointers/evidence-paths.md 全部同步修正：`focus_main_window` 不再列入本包未闭合闭包清单，改为交叉引用姊妹包的 canonical 结论；同时据此把结构同构的 `reveal_main_window`/`force_reveal_main_window` 的推断置信度从"纯猜测"上调为"结构类比强证据"（仍未独立确认，未升档为已闭合）。此纠正提醒：**多机并行蒸馏同一版本时，写盘/收尾前必须重读共享 INDEX.jsonl 而非只信任会话开始时的快照**——本轮若不重读会漏掉这条已经更权威的姊妹包结论，把已解出的东西继续错误标成未解出。

## 驳回/降级（Rejected/Downgraded）

- 未发现 `backend-baseline/commands-baseline.md` §4 存在需要驳回的过度声称——该文档本身措辞克制（只列 key_functions 行为描述，未使用 `readyToImplement`/`gate_accepted` 等字样），本包与其交叉核对 16 个 commands/hotspot 函数的行为描述，未发现分歧，采信合理。
- `CodexMateSettings` 与 `HotspotConfig` 的关系——初稿曾倾向于假设两者是同一个结构体的新旧命名（因为 `set_hotspot_enabled` 明确读写 `CodexMateSettings`），但复核时注意到 `HotspotConfig` 只出现在一个**完全不同**的 serde glue 文件（`RegistryFile` 的 `expecting()` 字符串清单）里，且该清单里同时列了 `AutoSwitchConfig`/`VoiceWorkspaceFile`/`RuntimeCache` 等明显与 hotspot 无关的独立结构体名——没有证据支持"两者是同一个"这个假设，也没有证据支持"两者无关"，故最终降级为诚实的 Unknown，而非在初稿基础上继续假设下去。

## 仍 Unknown

- 9 个主线程分发点的闭包体（`reveal_main_window`/`force_reveal_main_window`/`refresh_hotspot_on_main`/`register_hotspot_relayout_observers`/`create_hotspot_window` 非主线程分支 + `install_native_hotspot_observers` 5 个 handler block；`focus_main_window` 已经交叉引用姊妹包解出，不再计入此项）——`class: blocks_start`，需要对匿名符号地址跑新的 IDA `decompile`，非本轮蒸馏范围。
- `CodexMateSettings` 字段级形状 + 与 `HotspotConfig` 的关系——`class: blocks_start`，维持。
- 13 个 macOS-only 函数在 Windows 侧的存在/不存在——`class: accepted_unknown`（疑似合理的平台差异——Windows 无刘海硬件概念——但未证实），维持。

## 复核方法

未连接 IDA，未做任何新反编译；本次是**蒸馏一致性复核**——把本包全部结论文件与本会话直接 Read 过的 18 个 macOS `.c` + 5 个 Windows `.c` + 3 份 frontend page md 相关章节 + 2 份既有 baseline 文档逐条对照，主动降级了 1 处可能过度乐观的 dim3 判定（"函数已反编译"≠"call-tree 已闭合到叶子"），并把 1 处初始假设（`CodexMateSettings`/`HotspotConfig` 同一性）纠正为诚实 Unknown。未执行 `reviews/AGENT.md`（Codex 独立复核）——本轮只产出 Claude 侧复核，`reviews/CROSS-REVIEW.md` 因此未创建（OUTPUT-SPEC.md 允许"至少一份存在"）。
