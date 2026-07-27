# AiMaMi 1.2.3 macOS-arm64 — sessions-analytics

同步时间：2026-07-24
范围：`commands::sessions`（3 wrapper 文件）+ `core::sessions`（29 函数，含 `load_sessions` owner）+ `core::session_analytics`（8 函数）+ `core::analytics`（24 文件/16 去重函数）。前端对应 `SessionsPage`（会话/线程管理）与 `AnalyticsPanel`（activity/sessions/token/tools/changes/quota 六 tab 数据面板，本包只认领 sessions/token/tools/changes/usage 五个 analytics 命令 + `load_sessions`/`delete_sessions`/`export_session_markdown`/`migrate_session_worktree`，quota tab 的 `load_quota_history` 归 `core::quota_history`/`core::relay`，不在本包范围）。

最终结论：**consumerStartReady（9/9 命令），非 strictImplementationUse，非 readyToImplement。** 本包是对已有逆向产出（raw `.c`）的蒸馏归并，非本轮新反编译；四角度自核发现的真实缺口（详见下）均如实标注，不套用 relay 模板的 blanket 100%。

## 证据索引

- `raw/aimami/1.2.3/macos-arm64/commands/sessions/ida/pseudocode/*.c` — 3 个命令 wrapper（`delete_sessions`/`export_session_markdown`/`migrate_session_worktree`）
- `raw/aimami/1.2.3/macos-arm64/core/sessions/ida/pseudocode/*.c` — 29 个函数，含 `load_sessions`（5205 行，核心业务逻辑，sqlite3 + fs 混合读写）、`build_rollout_index`、`patch_rollout_cwd`、备份/恢复、导出 markdown 渲染等
- `raw/aimami/1.2.3/macos-arm64/core/session_analytics/ida/pseudocode/*.c` — 8 个函数：`compute_change_analytics`/`compute_session_analytics`/`compute_token_analytics`/`compute_tool_analytics`/`parse_all_sessions`/`range_to_cutoff`/`timestamp_to_date`/`visit_dir`
- `raw/aimami/1.2.3/macos-arm64/core/analytics/ida/pseudocode/*.c` — `compute_usage_analytics`（1553 行）+ 5 个 DTO serialize/deserialize 函数 + 8 个与 `core/session_analytics` 同 VA 的重复归档文件（见 manifest.json dedup_note）
- `raw/aimami/1.2.3/macos-arm64/frontend/pages/mcp-sessions-settings-skills-frontend.md` §2 — SessionsPage 完整逆向（组件树/状态模型/交互→命令表）
- `raw/aimami/1.2.3/macos-arm64/frontend/pages/analytics-maintenance-autoswitch-frontend.md` §1 — AnalyticsPanel 完整逆向
- `raw/aimami/1.2.3/macos-arm64/frontend/ipc-contracts.jsonl` — 前端命令权威清单

## Coverage

| 维度 | 状态 |
|---|---|
| dim1 前端控制流 | mostly-closed（2 个页面文档齐全；`Bs()` bento 卡命令绑定未确认） |
| dim2 后端 owner+伪代码 | **partial** — 核心业务逻辑层强（56 个去重函数、真实叶子调用），但 command-wrapper 层仅 3/9 命令有专名文件；`load_sessions`+5 个 `load_*_analytics` 命令缺专名 wrapper（macOS 侧证据缺口，Windows 侧已证实 `commands::analytics` 是真实源码模块，见 SYSTEM-DIFF） |
| dim3 call-tree 到叶子 | partial — 抵达 sqlite3/fs/walkdir 真实叶子，但无逐命令系统化 call-tree 归约文档 |
| dim4 接口/DTO/错误边界 | not-closed（本轮未做） |
| dim5 平台门 | macOS closed-for-existence；Windows 证据已定位（36 个 .c）但未分析到闭合 |
| dim6 测试/验收映射 | not-closed（本轮未做） |

## Per-target Result Matrix

| 命令 | 前端(dim1) | 后端 wrapper(dim2-cmd) | 后端 core(dim2-core) | call-tree(dim3) | DTO(dim4) | Windows(dim5) | 验收(dim6) | Gate |
|---|---|---|---|---|---|---|---|---|
| `load_sessions` | ✓ | 缺（core 直接充当，无独立 wrapper 符号） | ✓ 5205 行，sqlite+fs | ✓ 抵达叶子 | Unknown | 证据存在未闭合 | Unknown | consumerStartReady |
| `delete_sessions` | ✓ | ✓ 183 行专名 wrapper | ✓ | ✓ | Unknown | 证据存在未闭合 | Unknown | consumerStartReady |
| `export_session_markdown` | ✓ | ✓ 20 行 thin closure wrapper | ✓ 156 行 render+serialize | ✓ | Unknown | Unknown（Windows 未见专名文件，疑似 sub_* 未命名） | Unknown | consumerStartReady |
| `migrate_session_worktree` | ✓ | ✓ 156 行专名 wrapper（core 另有 3 个同名不同 VA 重载） | ✓ | ✓ | Unknown | 证据存在未闭合 | Unknown | consumerStartReady |
| `load_session_analytics` | ✓ | 缺（macOS 无 commands::analytics 目录） | ✓ 399 行 | ✓ | Unknown | ✓ 专名 wrapper 存在（win commands/analytics/） | Unknown | consumerStartReady |
| `load_token_analytics` | ✓ | 缺 | ✓ 502 行 | ✓ | Unknown | ✓ 专名 wrapper 存在 | Unknown | consumerStartReady |
| `load_tool_analytics` | ✓ | 缺 | ✓ 537 行 | ✓ | Unknown | ✓ 专名 wrapper 存在 | Unknown | consumerStartReady |
| `load_change_analytics` | ✓ | 缺 | ✓ 381 行 | ✓ | Unknown | ✓ 专名 wrapper 存在 | Unknown | consumerStartReady |
| `load_usage_analytics` | ✓（`At` tab 独立 query，`staleTime:Infinity`） | 缺 | ✓ 1553 行（core/analytics） | ✓ | Unknown | ✓ 专名 wrapper 存在 | Unknown | consumerStartReady |

## Frontend Control Flow

见 `raw/aimami/1.2.3/macos-arm64/frontend/pages/mcp-sessions-settings-skills-frontend.md` §2（SessionsPage：`Js`根组件/`Ws`分组行/`Gs`根线程行/`xs`子线程行；mutation `U`删除/`K`导出/`Q`迁移；交互→命令表完整）与 `analytics-maintenance-autoswitch-frontend.md` §1（AnalyticsPanel：`Lt`主组件 6 tab 切换 + 5 个 `useQuery`(`p/d/x/j/h`) + `At`子组件独立 query；tab 切换乐观 UI + 惰性拉取 + 5 分钟 staleTime 缓存）。唯一未闭合点：`Bs()` bento 统计卡（总会话数/总大小/活跃天数/日均）命令绑定未在源文档中写明。

## Backend Control Flow / Pseudocode / Call-tree

见 Coverage 表 + Per-target 矩阵。核心业务逻辑（sqlite 会话读写、fs 备份/恢复、markdown 渲染、analytics 聚合计算）均为真实非失败反编译，抵达 `sqlite3`/`std::fs`/`walkdir` 实现叶子（关键词扫描确认，见 pointers）。系统化逐命令 call-tree-to-leaf 归约文档本轮未产出（与 macos-1.2.3-relay 包的 dim3 状态相同caveat）。

## Interface / Error / Boundary

not-closed，本轮未做 DTO/错误封装/副作用边界抽取。

## Gate Leaf Status

见 gate-report.json；9/9 命令 `consumerStartReady`，0 命令 `strictImplementationUse`/`readyToImplement`。

## Diff 结论

无前序 sessions-analytics canonical 包，无版本迁移基线，本包为首次蒸馏，非 diff。

## Unknown / Missing

1. dim4（DTO/错误/副作用边界）— 全部命令未做
2. dim6（测试/验收映射）— 全部命令未做
3. macOS `load_sessions` + 5 个 `load_*_analytics` 命令的专名 command-wrapper 符号未定位（Windows 侧已证实 `commands::analytics` 是真实源码模块 `src/commands/analytics.rs`，macOS 侧大概率是证据采集缺口而非折叠匿名分发，见 manifest.json known_residuals）
4. `Bs()` bento 卡命令绑定未确认
5. Windows dim5 门未闭合（证据已定位 36 个 .c，未做逐命令分析）
6. angle A 无法用真实 IDA MCP 跑（本次会话无 IDA 工具），以文件系统 find/grep 替代，非等价（见 gate-report.json four_angle_self_check）
7. `core/repository/store_bootstrap_usage_analytics_0x100a70800.c`（angle-C 孤儿）— 相邻持久化模块，无既有 audit 包，本轮不认领也不进一步逆

## Action / Non-action

- **Action**：见 data/task-plan.json `next_producer_steps`（Windows dim2 name 反查 macOS commands::analytics、dim4/dim6 补齐、`Bs()` 命令绑定确认）
- **Non-action**：不对 `core/repository::store_bootstrap_usage_analytics`、`core::relay::codex_thread_visibility` 系列孤儿函数做进一步逆向（分属其他模块 owner，已在 gate-report.json four_angle_self_check 记录）
