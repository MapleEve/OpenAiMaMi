# AiMaMi 1.2.3 Windows daemon-autoswitch — internal-reverse 结论包（partial reduce）

同步时间：2026-07-25
范围：`daemon` 模块 6 命令 + `auto-switch` 模块 7 命令（13 命令 canonical universe，继承自 `../windows-1.0.9-daemon-autoswitch/`，本包未扩大范围）。Windows x64，binary SHA `aeccccd78e470ad6cfdb52d72af624b34ce17a4a0b04e7596b32583eaf972396`（与 `../windows-1.2.3-relay/`、`../windows-1.2.3-maintenance/` 姊妹包同一二进制）。
**本次任务性质**：纯读盘归并（reduce）——只读已落盘的 `.c` 反编译证据 + 已有前端 CCF 文档，不连 IDA MCP、不做新反编译、不产实现代码。

最终结论：**partial 结论包，非 full_leaf_100，全部三档 gate 均为 0**（`consumerStartReady`/`strictImplementationUse`/`readyToImplement` 均为空）。原因：dim3（call-tree-to-leaf）/dim4（interface/DTO）/dim6（test/acceptance）本 pass 均未产出（纯归并任务范围之外）。本包价值在于**如实盘点 13 命令 canonical universe 在 1.2.3 windows-x64 raw 树中的证据覆盖现状**，并诚实标注每条命令的 gap 类别。本包内部专用，不对外发布（红线23）。

## 证据索引

- raw evidence 指针：见 `pointers/evidence-paths.md`
- RULE9 基线参照（非迁移，未做 diff-confirmed-empty 判定）：`../windows-1.0.9-daemon-autoswitch/`（9/13 readyToImplement + 4/13 ABSENT-from-Windows-binary，2026-06-02 产出）
- 前端页面逆向文档（macOS dump，跨平台 JS bundle，含本包 3 条相邻 maintenance 命令的完整 CCF）：`raw/aimami/1.2.3/macos-arm64/frontend/pages/analytics-maintenance-autoswitch-frontend.md`
- 姊妹包（同二进制不同模块）：`../windows-1.2.3-relay/`；（不同 3 命令域）`../windows-1.2.3-maintenance/`

## Coverage

**任务先验估计 "daemon ~7、maintenance ~3" 本 pass 已核实并修正**：纯文件名关键词搜索会漏掉 `load_bootstrap_state`（文件名不含 daemon/auto_switch 子串）和 `switch_account_and_restart_codex`（身份未confirmed候选）。本 pass 实测：

- **canonical 13 命令 universe 内**：9 个 `.c` 文件为**可用完整伪代码**（`run_daemon_once`/`load_bootstrap_state`/`set_auto_switch`/`confirm_pending_auto_switch`/`dismiss_pending_auto_switch`/`load_pending_auto_switch` 6 条命令 + 1 条支撑性 repository leaf `auto_switch_config`，均已全文读取，无截断标记）；2 个文件为 **`HEXRAYS_DECOMPILE_FAILED` 原始反汇编 fallback**（`configure_auto_switch` 本命令 + 身份未确认候选 `switch_account_and_restart_codex`）；1 条命令（`confirm_pending_auto_switch_and_restart_codex`）**canonical 命令名下零 raw 证据**；5 条命令（4 个 daemon watcher + `start_auto_switch_pending_watcher`）**零 raw 证据**，与 1.0.9 ABSENT/native-thread 模式一致但本 pass 未独立复核后端。
- **canonical universe 外的相邻发现**（同一 `codexmate_lib` 杂项目录下物理共存）：`restart_codex`/`export_debug_bundle`/`upload_debug_report` 3 个 `.c` 文件为可用完整伪代码，但属 MaintenancePage 域，不属本包 canonical scope，也不在既有 `../windows-1.2.3-maintenance/`（scope=`rebuild_registry`/`clean`/`load_snapshot`）覆盖范围内——记录为**孤儿缺口**，不在本包内认领。

## Per-target Result Matrix

见 `gate-report.json`（`dim_status` + `blocked_commands` + `unknowns`）与 `data/task-plan.json`。

| 命令 | dim1 (win ipc-contracts) | dim2 (raw 伪代码) | dim3-6 | 本包状态 |
|---|---|---|---|---|
| `run_daemon_once` | Accepted (tauriInvokeWrapper hit) | Accepted (509 行完整) | 未产出 | blocks_start |
| `load_bootstrap_state` | Accepted | Accepted (已确认存在，命令处理函数完整) | 未产出 | blocks_start |
| `set_auto_switch` | Accepted | Accepted (636 行完整) | 未产出 | blocks_start |
| `configure_auto_switch` | Accepted | **FAILED**（HEXRAYS_DECOMPILE_FAILED，仅原始反汇编） | 未产出 | consumerStartBlocked |
| `confirm_pending_auto_switch` | Accepted | Accepted (411 行完整) | 未产出 | blocks_start |
| `confirm_pending_auto_switch_and_restart_codex` | Accepted | **缺失**（canonical 命令名下零证据；候选 `switch_account_and_restart_codex` 身份未确认且同样 FAILED） | 未产出 | consumerStartBlocked |
| `dismiss_pending_auto_switch` | Accepted | Accepted (143 行完整，已全文读取) | 未产出 | blocks_start |
| `load_pending_auto_switch` | Accepted | Accepted (149 行完整，已全文读取) | 未产出 | blocks_start |
| `note_usage_refresh_activity` | Absent (0 hits) | 零证据 | N/A | product_decision（与 1.0.9 ABSENT 一致，未独立复核） |
| `schedule_full_runtime_refresh` | Absent | 零证据 | N/A | product_decision（同上） |
| `start_usage_refresh_watcher` | Absent | 零证据 | N/A | product_decision（同上） |
| `update_usage_refresh_schedule` | Absent | 零证据 | N/A | product_decision（同上） |
| `start_auto_switch_pending_watcher` | Absent（预期，native-thread 无 IPC 字符串） | 零证据 | N/A | product_decision（与 1.0.9 native_bootstrap 一致，未独立复核） |

## Backend Control Flow / Pseudocode / Call-tree

见 `logic/DELTA-LOGIC-1.2.3.md`。call-tree-to-leaf 本 pass 未产出（dim3 not-closed）。

## Interface / Error / Boundary

未闭合（dim4）。读 `dismiss_pending_auto_switch`/`load_pending_auto_switch` 时观察到的调度字符串常量（`aDismissPending`/`aLoadPendingAut`/`aRepo`）仅作为附带观察记录在 `logic/DELTA-LOGIC-1.2.3.md`，未形成正式 interface map。

## Gate Leaf Status

`consumerStartReady`/`strictImplementationUse`/`readyToImplement` 全部 0/13。8 条命令 `blocks_start`（有 dim1+dim2 但 dim3/4/6 缺失）；2 条命令 `consumerStartBlocked`（dim2 硬缺口：解码失败或证据缺失）；5 条命令 `product_decision`（与 1.0.9 缺失模式一致但未独立复核）。

## Diff 结论

见 `SYSTEM-DIFF.md` 与 `logic/DELTA-LOGIC-1.2.3.md`。要点：本 pass **未能对任何目标做 RULE9 `migrated_no_behavior_diff` 判定**（1.2.3 raw 证据不足以支撑逐命令 diff-confirmed-empty；1.0.9 baseline 仅作历史参照，非迁移依据）。发现两个具体版本间信号：① `configure_auto_switch` 从 1.0.9 的 `readyToImplement`（干净伪代码）退化为 1.2.3 的 `HEXRAYS_DECOMPILE_FAILED`（真实退化，非漏找——该函数本身有 jump-table 反编译失败，与版本迭代引入的新分支/case 有关，未深究）；② `confirm_pending_auto_switch_and_restart_codex` 命令名前端仍在调用，但 canonical 命令名下无 raw 证据，且发现一个疑似身份相关但未confirmed的新命令 `switch_account_and_restart_codex`（1.0.9 无此名）——可能反映 1.2.3 引入了更通用的账号切换重启命令，取代或补充了原 auto-switch 专属的合并命令，但本 pass 无法确认。

## Unknown / Missing

见 `gate-report.json` `unknowns`。核心缺口：
1. `configure_auto_switch` 解码失败（needs live-IDA breakthrough，本 pass 未连 IDA）。
2. `confirm_pending_auto_switch_and_restart_codex` canonical 证据缺失 + `switch_account_and_restart_codex` 身份未确认。
3. dim3/dim4/dim6 全 13 目标均未产出。
4. `.c` header 注释 "win 1.2.1" 与文件所在 1.2.3 raw 路径的溯源矛盾未解决。
5. `restart_codex`/`export_debug_bundle`/`upload_debug_report` 3 命令是孤儿证据——不属本包也不属 `../windows-1.2.3-maintenance/`，需要产品/生产者决策归属。

## Action / Non-action

- **可以做**：以本包盘点结果作为下一轮生产者工作的路线图（见 `data/task-plan.json` `next_producer_steps`）；6 条有完整伪代码的命令可作为**背景理解**参考，但不得据此宣称任何 gate 档位。
- **不要做**：不得把 dim1+dim2 Accepted 直接升级为 `consumerStartReady`（dim3/4/6 未闭合）；不得把 `switch_account_and_restart_codex` 当作 `confirm_pending_auto_switch_and_restart_codex` 的确认证据；不得把 1.0.9 baseline 当作 1.2.3 迁移依据（未做 diff-confirmed-empty）；不得认领 `restart_codex`/`export_debug_bundle`/`upload_debug_report` 为本包或 `windows-1.2.3-maintenance` 的证据；不对外发布本包任何内容（红线23）。
