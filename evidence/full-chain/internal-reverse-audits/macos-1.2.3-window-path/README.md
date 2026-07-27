# AiMaMi 1.2.3 macOS window-path — internal-reverse 结论包

同步时间：2026-07-24
范围：`codexmate_lib::commands::hotspot::focus_main_window` + `codexmate_lib::commands::system::open_path`（2 条上游 IPC 命令，2 个反编译文件）
任务性质：**蒸馏**（读取已落盘的 raw 证据 + 1.0.9 既有结论包，做归并/交叉核实，本会话未发起任何新 IDA MCP 调用）
最终结论：**两条命令均已达 `strictImplementationUse`（dim1-5 全闭合），六维 `full_leaf_100` 门未闭合（缺 dim6 test/acceptance mapping）**。与 1.0.9 baseline 逐字节比对，控制流/逻辑**完全一致**（仅 VA 因重新链接漂移，符号哈希后缀不同）；本包按 RULE 9 `migrated_no_behavior_diff` 迁移承接 1.0.9 的 dim1-5 结论，同时对 1.2.3 前端命令面独立复核（未假设不变）。本包内部专用，供 Polaris 自有产品线参照实现，不对外发布（红线 23）。

## 证据索引

- 1.0.9 baseline（迁移源）：`internal-reverse/audits/macos-1.0.9-window-path/`
- 1.2.3 raw evidence：`raw/aimami/1.2.3/macos-arm64/commands/hotspot/ida/pseudocode/focus_main_window_0x1006fd300.c`、`raw/aimami/1.2.3/macos-arm64/commands/system/ida/pseudocode/open_path_0x1007cda80.c`
- 1.2.3 前端命令面：`raw/aimami/1.2.3/macos-arm64/frontend/ipc-contracts.jsonl`（131 行，line 101/103 命中本包两条命令）
- raw evidence 完整指针：见 `pointers/evidence-paths.md`

## Coverage

- **2/2 命令**：`focus_main_window`（无参）、`open_path`（`path: String`），两份 `.c` 均读全并逐行比对 1.0.9 baseline，**行为逐字节一致**（discriminant=28 的 160-byte WryUserEvent post；`Command::new("open",4)` + `arg(path)` + `spawn`，含 3-fd 清理错误路径）。
- **前端**：无独立页面组件，属顶层共享 invoke 服务对象方法；1.2.3 命令名与 1.0.9 完全一致，独立复核确认未变。
- **cluster 边界确认**：同目录下 `reveal_main_window`/`force_reveal_main_window`/`bring_main_window_forward`/`bring_main_window_force_forward`/`create_hotspot_window`/`set_window_alpha` 均非 IPC 命令（ipc-contracts.jsonl 零命中），属独立的 `system-hotspot`/hotspot cluster，非本包孤儿。

## Per-target Result Matrix

见 `gate-report.json`（`dim_status` 字段逐维度状态）与 `data/task-plan.json`（三档队列）。摘要：
- dim1 前端控制流：closed（1.2.3 独立复核，非假设沿用）
- dim2 后端 owner+pseudocode：closed（两份文件全读，与 1.0.9 逐字节比对一致）
- dim3 call-tree 到实现叶子：closed（两条链均短且终结于真实 OS/framework 叶子——Wry 事件投递 / fork-exec）
- dim4 interface/DTO/error/side-effect 边界：closed（承接 1.0.9，body 未变故边界未变）
- dim5 同平台 gate：**macOS closed**；Windows 侧本 cluster 在 1.2.3 证据材料不完整（见下方 Windows 小节），不影响本包（macOS）自身 gate
- dim6 test/acceptance mapping：**not-closed**（1.0.9 baseline 本身也从未产出，非本轮回归，是持续存在的 gap）

## Frontend Control Flow

顶层共享 invoke 服务对象方法（非路由页面组件）：`focusMainWindow:()=>invoke("focus_main_window")`、`openPath:e=>invoke("open_path",{path:e})`。见 `pointers/evidence-paths.md` 指向的 `frontend/ipc-contracts.jsonl`。

## Backend Control Flow / Pseudocode / Call-tree

见 `logic/WINDOW-PATH-DISTILLED-123.md`（逐 leaf dim1-5 全维度记录 + call-tree）。

- `focus_main_window`：`WryHandle::clone → 原子引用计数++×2(溢出守卫) → __rust_alloc(160,8) → memcpy payload(discriminant=28,focused=true) → tauri_runtime_wry::send_user_message → [Wry 事件循环终结]`
- `open_path`：`Command::new("open",4) → Command::arg(path) → Command::spawn → [fork/exec /usr/bin/open <path> 终结]`（失败分支：`close_NOCANCEL`×3 → drop → Err）

## Interface / Error / Boundary

**已闭合**（dim4）。详见 `logic/WINDOW-PATH-DISTILLED-123.md` 各 leaf 的 dim4 小节；`open_path` 的路径校验/规范化缺失观察（无内建 allowlist，依赖调用方上下文）自 1.0.9 沿用，本轮确认函数体未变故该观察仍适用。

## Gate Leaf Status

`strictImplementationUse` 2/2 条命令；`readyToImplement` 0/2（缺 dim6）。详见 `gate-report.json`。

## Diff 结论（vs 1.0.9）

**零行为差异。** 直接逐行比对 1.2.3 两份反编译文件与 1.0.9 baseline 文档化的行为，控制流/逻辑完全一致，仅 VA（`0x10032e820→0x1006fd300`、`0x1002644c0→0x1007cda80`）与符号哈希后缀因重新链接漂移。1.2.3 raw 提取阶段对 `focus_main_window` 标注的 "1.2.3 NEW-delta ... vs 1.2.2 新增" 仅表示 1.2.2 raw 语料当时未提取出该文件（1.2.2 阶段的语料覆盖缺口），非行为新增声明；`open_path` 提取阶段本身就标注 `"基线 same-set"`。详见 `manifest.json` `migration` 字段与 `SYSTEM-DIFF.md`。

## Windows 侧（信息性，非本包 gate 依据）

本 cluster 在 1.2.3 尚无独立 `windows-1.2.3-window-path` 结论包。`focus_main_window` 有 string-xref 确认的 owner 但内部体多为未解析派发代码，明显弱于 1.0.9 Windows 已闭合证据（`internal-reverse/audits/windows-1.0.9-system/logic/WIN-WINDOW-PATH-CLUSTER-109.md`）；`open_path` **在 1.2.3 Windows 侧尚无隔离出的 owner**（6 个未解析 `sub_XXXXXXXX` 候选，且字面命名为 `open_path` 的 Windows 文件已被证实是无关的 `commands::relay` ICF 折叠共享 dispatcher，非本 cluster）。这些是 Windows 侧的真实 gap，**不外推**、**不影响本包（macOS）自身的 dim5 gate**（macOS 只证明 macOS）。详见 `SYSTEM-DIFF.md`。

## Unknown / Missing

1. dim6 test/acceptance mapping（两条命令，任何版本均未产出）——`blocks_start`，是推进到 `readyToImplement` 的唯一剩余工作。
2. Windows 1.2.3 `open_path` owner 未隔离——`blocks_start`，真实开放 gap，非 accepted_unknown。
3. Windows 1.2.3 `focus_main_window` 内部体深度弱于 1.0.9——`accepted_unknown`（owner/存在性已确认，内部深度属工具/精力限制类）。

## Action / Non-action

- **可以做**：两条命令均已达 `strictImplementationUse`，Polaris 可基于本包 + 1.0.9 baseline 的行为语义开始实现窗口聚焦与路径打开逻辑，不得宣称 `readyToImplement`/与 upstream 100% 等价（dim6 未闭）。
- **不要做**：不得把本包"逐字节零差异"结论外推到 dim6（该维度独立于后端逻辑是否变化）；不得把 Windows commands/relay 下字面命名为 `open_path` 的文件当作本 cluster 的 Windows 证据（已证实是无关的 ICF 折叠 dispatcher）；不得对外发布本包任何内容（红线 23，内部专用）。
