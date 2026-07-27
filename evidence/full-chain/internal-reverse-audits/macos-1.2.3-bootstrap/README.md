# AiMaMi 1.2.3 macOS bootstrap

同步时间：2026-07-25
范围：`raw/aimami/1.2.3/macos-arm64/run/ida/pseudocode/` 下 89 个未归并的泛型
`run_0x<VA>.c`（wf-aimami123-delta-20260721 基线遗留，均为 `codexmate_lib::run::...` 符号）triage
+ RULE8 归并；不含新 IDA decompile，不含深层 call-tree/dim1/dim4/dim6 闭合。
最终结论：**4/89 判定为 bootstrap 叶（consumerStartReady，非 strict/ready）；2/89 判定为非
bootstrap 的多目标闭包（toplevel 退出守护 + 多命令路由器）；80/89 判定归属其他已知模块（15
relay 已有 canonical 包 / 38 voice / 16 system / 5 system-hotspot / 1 tray 已有 canonical 包 /
2 maintenance / 1 mcp-router 内含 / 1 sessions-analytics / 1 deeplink / 1 platform-update）；
3/89 触发 triage 未能判定，如实留 `run` 桶不强塞。89/89 全部有归属记录，无 all-or-nothing 空转。**

## 证据索引

见 `pointers/evidence-paths.md`。全部 raw 证据保持原地不动，本包只记录分类结论。

## Coverage

- 输入：89 个 raw 文件（全部读取，逐文件提取调用目标）。
- 深读：1 个（app_run_entry，701 行全文）+ 2 个多目标文件（toplevel 退出守护、多命令路由器）。
- grep+抽样核验：其余 86 个单目标文件，逐个提取调用目标模块归属，抽样交叉核对 3 个（关联
  `ipc-contracts.jsonl` 确认命令真实注册）。
- 100% 文件有归属记录（見 `logic/FULL-CHAIN-1.2.3.md` §3d 完整清单）。

## Per-target Result Matrix

| leaf | gate | dim1 | dim2 | dim3 | dim4 | dim5 | dim6 |
|---|---|---|---|---|---|---|---|
| app_run_entry | consumerStartReady | N/A（进程入口，无前端触发，等同 1.0.9 native-bootstrap-substitute） | Closed（本轮全文读完） | Partial（追到直接 callee，未深入 callee 内部） | Unknown | macOS only | Unknown |
| bootstrap_cache（load_bootstrap_state） | consumerStartReady | Unknown（命令名已核实注册，未跑前端 CCF） | Closed（既有基线 decompile） | Unknown | Unknown | macOS only | Unknown |
| auto_switch_pending_emitter（dismiss_pending_auto_switch） | consumerStartReady | Unknown | Closed | Unknown | Unknown | macOS only | Unknown |
| auto_switch_pending_emitter（load_pending_auto_switch） | consumerStartReady | Unknown | Closed | Unknown | Unknown | macOS only | Unknown |

## Frontend Control Flow

未跑（本轮 triage 范围不含 dim1 独立提取）。3 个命令叶已确认在 `ipc-contracts.jsonl`（131 命令）
中存在真实注册名，但触发点/guard/参数组装未追。

## Backend Control Flow / Pseudocode / Call-tree

见 `logic/FULL-CHAIN-1.2.3.md`。app_run_entry 全文读完；其余 3 个叶只读到单一 call target，未
深入其内部实现。

## Interface / Error / Boundary

未跑（Unknown，dim4 未闭合）。

## Gate Leaf Status

全部 4 个 bootstrap 叶 = `consumerStartReady`；`strictImplementationUse`/`readyToImplement` 均
`false`（详见 `gate-report.json`）。

## Diff 结论（vs 1.0.9 macOS bootstrap）

- app_run_entry：结构基本对应（CodexPaths 解析→debug_log→harden→single_instance→managed
  state→Builder→Context 独立线程构建→App::run），但托管状态注册（managed_state_registry）在
  1.2.3 build 中**内联进 app_run_entry 本体**，不再是独立函数——与 1.0.9 的四叶结构存在真实架构
  差异，非漏逆。
- boot_spawn_threads（1.0.9 的长驻 watcher 线程 spawn 独立叶）**本轮未在 89 个文件中找到对应
  独立函数**——诚实标 Unknown/blocks_start，未编造、未套用 1.0.9 结论。
- 1.2.3 新增 2 个明确的 bootstrap-domain 命令（`dismiss_pending_auto_switch` /
  `load_pending_auto_switch`），比 1.0.9 单一 `auto_switch_pending_emitter` 概念叶更细分为 2 个
  具名命令——版本演进的合理产物。

## Unknown / Missing

见 `gate-report.json` 的 `unknowns` 数组（5 条，均已分类 `blocks_start` / `accepted_unknown` /
`product_decision`，无未分类 Unknown）。

## Action / Non-action

- **Action**：本包已把 4 个 bootstrap 叶正式归并进 canonical 结构，供后续 dim1/dim3/dim4/dim6
  深化。
- **Non-action**：不重复 relay（15 个）/tray（1 个）已有 canonical 包覆盖的函数；不强行给
  3 个无法判定的文件贴 bootstrap 标签；不外推 Windows；不声称 app_run_entry 已达 strict/ready。
