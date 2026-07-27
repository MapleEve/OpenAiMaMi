# AiMaMi 1.2.3 Windows system-usage (用量快照域)

同步时间: 2026-07-25
范围: windows-x64, "usage snapshot domain" as user-framed (refresh_usage_snapshot cluster) — 6 constituent command names found in raw disk, of which this bundle newly owns 2 and pointer-references 4 already canonically owned by sibling 1.2.3 bundles.
最终结论: **blocks_start**（部分 raw 证据存在，非零非薄，但高度碎片化跨模块归属；本包新领取的 2 个命令均未达 consumerStartReady）。这不是"逆向失败"，是如实记录当前证据状态（tier=blocks_start）。

## 证据索引

- gate-report.json: 逐维度证据状态（dim1-6）
- manifest.json: target 归属矩阵（本包领取 2 / pointer 引用 4）
- logic/WIN-USAGE-SETTINGS-DISTILLED-123.md: get/set_usage_refresh_interval 伪代码蒸馏
- pointers/evidence-paths.md: 外部 raw 证据路径指针
- data/task-plan.json: consumer_gate.v1 schema
- data/producer-ledger.json: 生产账本
- reviews/CLAUDE.md: 独立复核

## Coverage

**Raw 证据统计（如实统计，非零非薄）**：
- `raw/aimami/1.2.3/windows-x64` 下含 "usage" 命名的 .c 文件共 **6 个**（`get_usage_refresh_interval_0x14018cbb0.c` / `set_usage_refresh_interval_0x14018c2d0.c` / `refresh_usage_snapshot_0x140cb44a0.c` / `refresh_single_account_usage_0x140cb15d0.c` / `compute_usage_analytics_0x14086c970.c` / `load_usage_analytics_0x140cde3c0.c`）
- 全文 grep 三个核心命令名（含 xref/前端文件命中）共 **9 个文件**
- `frontend/ipc-contracts.jsonl`（131 win 命令）中含 "usage" 关键词的行 **21 行**

**归属分布（RULE8 单一 canonical 原则核查结果）**：

| 命令 | Raw VA | 归属 | 该归属包内状态 | 本包是否重复 |
|---|---|---|---|---|
| `get_usage_refresh_interval` | 0x14018cbb0 | **本包新领取** | `gap_needs_reducer` | — |
| `set_usage_refresh_interval` | 0x14018c2d0 | **本包新领取** | `gap_needs_reducer` | — |
| `refresh_usage_snapshot` | 0x140cb44a0 | `windows-1.2.3-accounts`（今日已归并） | `consumerStartBlocked`（Hex-Rays decompile failed） | 否，只 pointer |
| `refresh_single_account_usage` | 0x140cb15d0 | `windows-1.2.3-accounts`（今日已归并） | `consumerStartBlocked`（同上失败类别） | 否，只 pointer |
| `compute_usage_analytics` | 0x14086c970 | `windows-1.2.3-sessions-analytics`（今日已归并） | `consumerStartReady`（dim2-wrapper only） | 否，只 pointer |
| `load_usage_analytics` | 0x140cde3c0 | `windows-1.2.3-sessions-analytics`（今日已归并） | `consumerStartReady`（dim2-wrapper only） | 否，只 pointer |

`windows-1.2.3-sessions-analytics/manifest.json` 的 `explicit_exclusions` 字段原文明确写出后 4 个命令中 2 个（`get_usage_refresh_interval`/`set_usage_refresh_interval`）"are NOT counted as covered_commands here...(different owning module)"——与本包边界精确吻合，交叉印证无缝隙无重叠、无遗漏、无重复。

## Per-target Result Matrix（本包领取的 2 个命令）

| Target | gate | dim1 | dim2 | dim3 | dim4 | dim5 | dim6 | is_upstream |
|---|---|---|---|---|---|---|---|---|
| get_usage_refresh_interval | gap_needs_reducer | missing | partial(wrapper) | missing | missing | partial(platform diff noted) | missing | false |
| set_usage_refresh_interval | gap_needs_reducer | missing | partial(wrapper) | missing | missing | partial(platform diff noted) | missing | false |

## Frontend Control Flow

`frontend/ipc-contracts.jsonl`（win, 131 命令）本轮 grep 确认两命令名存在于命令表，但**未做页面级 UI 触发点/guard/invoke-wrapper reduce**。`cross-1.2.3-home-usage-frontend/AI.md` 的 next_producer_steps 独立记录 macOS 侧同一缺口（"③定位 mac get_usage_refresh_interval/set_usage_refresh_interval 前端触发点"）为未完成项，两平台均未闭合 dim1。

## Backend Commands / Control-flow / Pseudocode / Call-tree / Leaf

- `get_usage_refresh_interval`（0x14018cbb0）：非截断完整反编译，文件头确认 ground-truth tauri command handler 映射（string xref）。调用路径含 `aRepo`（settings-key "Repo" 域）常量，语义与 1.0.9 基线（读取 UsageRefresh settings blob）一致。Callee（`sub_140003640`/`sub_1416850A0`/`sub_140001650`/`sub_1416C2D4B`/`sub_140001660`/`sub_1402C7520`/`sub_140014270` 等）本轮未追踪。
- `set_usage_refresh_interval`（0x14018c2d0）：同上，非截断完整反编译。调用路径含 `aApp`/`aRepo`/`aInterval` 三段 settings-key 常量，与 1.0.9 基线（写入 interval token）语义一致。Callee 同样未追踪。

## Interface / Error / Boundary

未产出（dim4 missing）。1.0.9 基线记录：`get_usage_refresh_interval` resp:interval value，err:Mutex poison；`set_usage_refresh_interval` req:{interval}，side-effect: settings write，err:8=InvalidVariant。1.2.3 是否行为一致**未校准**（RULE9 diff_required）。

## Gate Leaf Status

两命令均 `gap_needs_reducer` → 整包 `blocks_start`。

## Diff 结论（RULE9）

1.0.9 windows 基线（`windows-1.0.9-system-usage`）该 2 命令已达 `strictImplementationUse`（dim1-5 全闭合）。1.2.3 VA 已变化（符合新 build 地址漂移预期：1.0.9 `0x1402663e0`/`0x14027f690` → 1.2.3 `0x14018cbb0`/`0x14018c2d0`），但**本轮未跑同平台行为 diff 校准**，不满足 `migrated_no_behavior_diff`/`unchanged_reused` 的证据要求，归类 `diff_required`。不迁移 1.0.9 gate 上限，保持 `Unknown`。

`refresh_usage_snapshot` 在 1.0.9 是本 cluster 一部分（strictImplementationUse），1.2.3 该命令的 canonical 归属已迁移到 `windows-1.2.3-accounts`（RULE8 单一 canonical 原则），且状态**倒退**为 `consumerStartBlocked`（Hex-Rays decompile 在 1.2.3 build 上失败，与 1.0.9 能 ceiling-crack 成功不同）——这是版本间 build 差异导致的真实倒退，非本包判断失误，如实记录，不外推、不臆断原因（jump-table async switch dispatch 模式变化的具体原因未深查）。

## Unknown / Missing

- `get_usage_refresh_interval`/`set_usage_refresh_interval` 前端触发点（两平台均未定位）
- `get_usage_refresh_interval`/`set_usage_refresh_interval` 深层 call-tree leaf（callee 链未追踪）
- 1.0.9→1.2.3 行为 diff 校准（未执行）
- Windows `core/repository/` 层是否存在 usage 相关深层实现（mac 有 3 个对应文件，win 零命中，未做定向搜索确认是否真的不存在或只是未按 "usage" 命名）
- `refresh_usage_snapshot`/`refresh_single_account_usage` 的红线13 破墙尝试（在 `windows-1.2.3-accounts` 范围内，未在本包内重复处理）

## Action / Non-action

消费者**不得**基于本包对 `get_usage_refresh_interval`/`set_usage_refresh_interval` 开始实现（未达 consumerStartReady）。`refresh_usage_snapshot`/`refresh_single_account_usage`/`compute_usage_analytics`/`load_usage_analytics` 请直接参照 `windows-1.2.3-accounts`/`windows-1.2.3-sessions-analytics` 的既有结论，不要在本包内重复查找。
