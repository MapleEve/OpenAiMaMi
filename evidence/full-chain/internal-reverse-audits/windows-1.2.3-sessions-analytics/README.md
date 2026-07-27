# AiMaMi 1.2.3 windows-x64 — sessions-analytics

同步时间：2026-07-25
范围：`sessions/`（17 文件）+ `analytics/`（4 文件）+ `commands/analytics/`（15 文件）+ `codexmate_lib/` 会话相关子集（3 文件）+ `commands/` 根会话相关子集（1 文件）= 40 个 raw .c 文件。前端对应与 macOS 姊妹包相同的 `SessionsPage`/`AnalyticsPanel`（跨平台共享单一 JS bundle）。本包是首个 `windows-1.2.3-sessions-analytics` audits/ 冻结包（此前不存在），沿用 `macos-1.2.3-sessions-analytics/` 的 RULE8 骨架与 target_universe 命令清单，但独立核实 Windows 证据、独立跑 gate。

最终结论：**consumerStartReady（9/9 命令），非 strictImplementationUse，非 readyToImplement。** 本轮有真实 live IDA MCP 会话（<host>，红线17 门先行核实通过），比 macOS 姊妹包（该轮无 IDA 工具）多做了若干针对性 `decompile`/`callees`/`xrefs_to` 实查。四角度自核发现的真实缺口如实标注，不套用 blanket 100%。

## 证据索引

见 `pointers/evidence-paths.md`（含本轮 live IDA MCP 调用记录）。

## Coverage

| 维度 | 状态 |
|---|---|
| dim1 前端控制流 | mostly-closed（命令名层本轮 live grep 核实 9/9；组件树/状态模型层复用 macOS 姊妹包文档，未为 Windows 独立重做） |
| dim2 后端 owner+伪代码（wrapper 层） | **closed 9/9** —— 本轮新发现 `codexmate_lib/` 3 文件 + `commands/` 根 1 文件，全部命令均有专名 wrapper，比 macOS 姊妹包自身的 3/9 更完整（各自独立闭合，不互相外推） |
| dim2 后端 owner+伪代码（core 层） | **partial，弱于 macOS** —— sessions 3 命令的 core 函数专名存在；5 个 analytics 命令 + `export_session_markdown` 的 core 层专名函数本轮未定位，live `callees()` 显示逻辑委托给未命名 sub |
| dim3 call-tree 到叶子 | partial —— sessions 3 命令的 wrapper→core 调用链本轮 `callees()`/`xrefs_to()` 证实存在至少一层未命名中间跳转，未追踪到底 |
| dim4 接口/DTO/错误边界 | not-closed（本轮未做） |
| dim5 平台门 | **本轮首次为 Windows 独立闭合到 consumerStartReady 深度**（此前该模块无 Windows audits 包） |
| dim6 测试/验收映射 | not-closed（本轮未做） |

## Per-target Result Matrix

| 命令 | 前端(dim1) | wrapper(dim2-cmd) | core(dim2-core) | call-tree(dim3) | DTO(dim4) | 验收(dim6) | Gate |
|---|---|---|---|---|---|---|---|
| `load_sessions` | ✓ | ✓ `codexmate_lib` 656行 ground-truth | ✓ `sessions/load_sessions_0` 4721行 | partial（未命名中间跳转未追完） | Unknown | Unknown | consumerStartReady |
| `delete_sessions` | ✓ | ✓ `commands/` 167行 ground-truth | ✓ `sessions/delete_sessions_0` 1126行 | partial | Unknown | Unknown | consumerStartReady |
| `export_session_markdown` | ✓ | ✓ `codexmate_lib` 953行 ground-truth | **缺**（本轮未定位） | Unknown | Unknown | Unknown | consumerStartReady |
| `migrate_session_worktree` | ✓ | ✓ `codexmate_lib` 807行 ground-truth | ✓ `sessions/migrate_session_worktree_0` 726行 | partial | Unknown | Unknown | consumerStartReady |
| `load_session_analytics` | ✓ | ✓ `commands/analytics/` 专名 ground-truth | **缺**（callees 全未命名） | Unknown | Unknown | Unknown | consumerStartReady |
| `load_token_analytics` | ✓ | ✓ 专名 | **缺** | Unknown | Unknown | Unknown | consumerStartReady |
| `load_tool_analytics` | ✓ | ✓ 专名 | **缺** | Unknown | Unknown | Unknown | consumerStartReady |
| `load_change_analytics` | ✓ | ✓ 专名（本轮 live callees 实查：32 callee 全未命名） | **缺** | Unknown | Unknown | Unknown | consumerStartReady |
| `load_usage_analytics` | ✓ | ✓ 专名 | `analytics/compute_usage_analytics` 存在但**未验证是否被此命令直接调用**（本轮未做该 callees 核实） | Unknown | Unknown | Unknown | consumerStartReady |

## Frontend Control Flow

跨平台共享单一 JS bundle；命令名层本轮 live grep 核实（见 pointers）。组件树/状态模型层复用 `macos-1.2.3-sessions-analytics/` 姊妹包的两份前端页面文档（`mcp-sessions-settings-skills-frontend.md` §2、`analytics-maintenance-autoswitch-frontend.md` §1），Windows 本轮未独立重做。`Bs()` bento 卡命令绑定沿用 macOS 姊妹包记录的 Unknown。

## Backend Control Flow / Pseudocode / Call-tree

见 Coverage 表 + Per-target 矩阵 + `logic/FULL-CHAIN-1.2.3.md`。核心发现：Windows 侧 command-wrapper 层比 macOS 更完整（9/9 vs 3/9），但 core（业务逻辑）层在 analytics 侧比 macOS 更弱（macOS 8 个专名 `core::session_analytics` 函数，Windows 目前只有 1 个专名 `compute_usage_analytics` + 26 个未命名 sub）。这是本轮通过 live `callees()`/`xrefs_to()` 实查得出的真实平台结构差异，不是遗漏包装。

## Interface / Error / Boundary

not-closed，本轮未做。

## Gate Leaf Status

见 gate-report.json；9/9 命令 `consumerStartReady`，0 命令 `strictImplementationUse`/`readyToImplement`。

## Diff 结论

无前序 Windows sessions-analytics canonical 包，本包为首次生产，非版本迁移 diff。与 macOS 姊妹包的横向对比见 `SYSTEM-DIFF.md`。

## Unknown / Missing

1. dim4（DTO/错误/副作用边界）— 全部命令未做
2. dim6（测试/验收映射）— 全部命令未做
3. 26 个未命名 `sub_*` 函数的业务命名恢复未完成（红线24 方法未跑完整）
4. `export_session_markdown` + 5 个 analytics 命令的 core 层函数身份未定位/未确认
5. sessions 3 命令的 wrapper→core 调用链中间跳转未追踪到底
6. Windows 专属前端组件树/状态模型文档未独立产出（复用 macOS 假设，仅命令名层验证）
7. `Bs()` bento 卡命令绑定未确认（继承 macOS 姊妹包缺口）
8. angle-A `func_query` 工具行为不明（未按名称子串过滤），已如实标 accepted_unknown（工具局限而非覆盖率缺口）

## Action / Non-action

- **Action**：见 `data/task-plan.json` `next_producer_steps`（26 个未命名 sub 命名恢复、wrapper→core 中间跳转追踪、`export_session_markdown`/5 个 analytics 命令 core 层定位、dim4/dim6 补齐）
- **Non-action**：不对 `codex_thread_visibility`/`version-delta/session_meta_rewrite` 系列孤儿函数做进一步逆向（已确认属 `windows-1.2.3-relay` 包范围，见 gate-report.json four_angle_self_check）；不将本包的 Windows 结构发现外推为 macOS 姊妹包的结论
