# AiMaMi 1.2.3 Windows bootstrap

同步时间：2026-07-25
范围：`raw/aimami/1.2.3/windows-x64/` 下文件名/owner-map 名含 "bootstrap" 的 5 个既有 raw
`.c`（无新 IDA decompile，本次为纯 reduce/归并 pass）+ RULE9 对比 `windows-1.0.9-bootstrap`（同平台
前版本）+ 对全部 `windows-1.2.3-*` 姊妹包做碰撞核查（collision gate）。

最终结论：**本包只新增 1 个真正未归属的 bootstrap 叶（`manager_bootstrap` /
`core::relay::manager::bootstrap`，consumerStartReady，非 strict/ready）；5 个候选文件里另外 4 个
经碰撞核查确认已被姊妹 canonical 包（`windows-1.2.3-daemon-autoswitch` × 5 命令 / 
`windows-1.2.3-accounts` × 2 / `windows-1.2.3-tray` × 1）领先归并，本包只做交叉指针不重复领取；
1.0.9 windows-bootstrap 的 5 个核心叶（app_run_entry/boot_spawn_threads/bootstrap_cache/
managed_state_registry/load_snapshot 系统外壳补充叶）在 1.2.3 windows raw 中**目前零证据**，如实标
`gap_needs_new_raw`，不强行拼凑、不假定与 1.0.9 无差异、不 all-or-nothing 拒绝整包。**

## 证据索引

见 `pointers/evidence-paths.md`。全部 raw 证据保持原地不动，本包只记录分类/归并结论。

## Coverage

- 输入：5 个候选文件（filename/owner-map 名含 "bootstrap"）+ RULE9 基线 5 叶的 VA/名称跨全树核查。
- 新归并：1 个（`manager_bootstrap`，646 行全量已存在 pseudocode，本轮全读）。
- 交叉引用不重复：4 个（已确认归属 `windows-1.2.3-daemon-autoswitch` × 5 命令的 1 个直接文件 +
  `windows-1.2.3-accounts` × 2 + `windows-1.2.3-tray` × 1）。
- 缺口：5 个 RULE9 基线叶，全树 grep 零命中，`gap_needs_new_raw`。

## Per-target Result Matrix

| leaf | gate | dim1 | dim2 | dim3 | dim4 | dim5 | dim6 |
|---|---|---|---|---|---|---|---|
| manager_bootstrap | consumerStartReady | accepted_unknown（N/A 待独立复核） | Closed（既有全量 decompile + INDEX 叙述） | Partial（1 跳：ensure_proxy_started + sub_14085A1E0，未深入其内部） | Unknown | windows-x64 only | Unknown |
| load_bootstrap_state | 交叉引用不重复 | 见 windows-1.2.3-daemon-autoswitch | 见该包 | 见该包 | 见该包 | windows-x64 only | 见该包 |
| dismiss/load/confirm(_and_restart)_pending_auto_switch ×4 | 交叉引用不重复 | 见 windows-1.2.3-daemon-autoswitch | 见该包 | 见该包 | 见该包 | windows-x64 only | 见该包 |
| load_snapshot（commands/accounts） | 交叉引用不重复 | 见 windows-1.2.3-accounts | 见该包 | 见该包 | 见该包 | windows-x64 only | 见该包 |
| store_bootstrap_snapshot_best_effort | 交叉引用不重复 | 见 windows-1.2.3-accounts | 见该包 | 见该包 | 见该包 | windows-x64 only | 见该包 |
| create_bootstrap_tray_menu | 交叉引用不重复 | 见 windows-1.2.3-tray | 见该包 | 见该包 | 见该包 | windows-x64 only | 见该包 |
| app_run_entry | gap_needs_new_raw | Unknown | Unknown | Unknown | Unknown | windows-x64（无证据） | Unknown |
| boot_spawn_threads | gap_needs_new_raw | Unknown | Unknown | Unknown | Unknown | windows-x64（无证据） | Unknown |
| bootstrap_cache（standalone，1.0.9 形态） | gap_needs_new_raw | Unknown | Unknown | Unknown | Unknown | windows-x64（无证据） | Unknown |
| managed_state_registry | gap_needs_new_raw | Unknown | Unknown | Unknown | Unknown | windows-x64（无证据） | Unknown |
| load_snapshot（system-shell-init 补充叶，1.0.9 形态） | gap_needs_new_raw | Unknown | Unknown | Unknown | Unknown | windows-x64（无证据） | Unknown |

## Frontend Control Flow

本平台自己前端（`raw/aimami/1.2.3/windows-x64/frontend/frontend-control-flow.jsonl`，248 行）核对：
`load_bootstrap_state`=2 命中 / `load_pending_auto_switch`=3 / `dismiss_pending_auto_switch`=2 /
`confirm_pending_auto_switch`=1 / `confirm_pending_auto_switch_and_restart_codex`=2 /
`load_snapshot`=2；`store_bootstrap_snapshot_best_effort`/`create_bootstrap_tray_menu`=0（二者均为
内部辅助函数，非直接 invoke() 目标，零命中符合预期）。这 6 个命令级证据均归属姊妹包，本包不重复。
`manager_bootstrap` 本轮未跑独立 dim1 核对。

## Backend Control Flow / Pseudocode / Call-tree

见 `logic/FULL-CHAIN-1.2.3.md`。`manager_bootstrap` 全文读完，call-tree 追到 `ensure_proxy_started`
+ `sub_14085A1E0` 共 1 跳，未深入二者内部。

## Interface / Error / Boundary

未跑（Unknown，dim4 未闭合）。

## Gate Leaf Status

`manager_bootstrap` = `consumerStartReady`；`strictImplementationUse`/`readyToImplement` 均
`false`（详见 `gate-report.json`）。

## Diff 结论（vs windows-1.0.9-bootstrap，RULE9）

- 1.0.9 windows-bootstrap 的 5 叶（`app_run_entry`/`boot_spawn_threads`/`bootstrap_cache`/
  `managed_state_registry`/`load_snapshot` 系统外壳补充叶）在 1.2.3 windows raw 树中**全树 grep 零
  命中**（`app_run_entry`/`managed_state`/`cli_dispatch`/`boot_spawn` 等名称模式），非漏搜——已核对
  `codexmate_lib`/`commands`/`mod` 三个候选目录的完整文件清单，均不含匹配项。RULE9 判定：
  `diff_required`（无证据支持 `migrated_no_behavior_diff` 或 `unchanged_reused`），5 叶保持
  `Unknown`/`gap_needs_new_raw`，不外推、不套用 1.0.9 结论。
- `manager_bootstrap`（`core::relay::manager::bootstrap`）在 1.0.9 windows-bootstrap 5 叶清单中
  **没有直接对应项**——可能是 1.2.3 架构新增的独立函数，也可能对应 1.0.9 `managed_state_registry`
  或 `boot_spawn_threads` 概念叶在新版本中的实现细节（未逐叶核对确认，如实标 Unknown 而非猜测）。
- Windows 侧本轮新发现的 `manager_bootstrap` 证据可能对 macOS 侧 `macos-1.2.3-bootstrap` 的未决问题
  （`RelayManager::new` 内部未打开）提供线索——已在 `manifest.json`/`logic/FULL-CHAIN-1.2.3.md` 中
  交叉记录，不代表已验证跨平台等价（dim5 独立闭合原则）。

## Unknown / Missing

见 `gate-report.json` 的 `unknowns` 数组（5 条，均已分类 `blocks_start` / `accepted_unknown` /
`product_decision`，无未分类 Unknown）。

## Action / Non-action

- **Action**：本包已把 `manager_bootstrap` 正式归并进 canonical 结构（consumerStartReady），供后续
  dim1 独立复核 + dim3 深化 + dim4/dim6 补齐；已如实记录 5 个 RULE9 基线叶的证据缺口作为下一 producer
  的入口任务。
- **Non-action**：不重复 `windows-1.2.3-daemon-autoswitch`（5 命令）/ `windows-1.2.3-accounts`
  （2 个）/ `windows-1.2.3-tray`（1 个）已有归属的函数；不外推 macOS 结论到 Windows，也不反向外推；
  不因 raw 薄就整包判 all-or-nothing 拒绝；不擅自裁决 macOS `bootstrap` 包与 Windows
  `daemon-autoswitch` 包之间的模块边界不一致（留待专项协调 session，需 `EXPLICIT_REASSIGN_OWNER`）。
