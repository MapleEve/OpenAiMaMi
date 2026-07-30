# AiMaMi 1.2.4 macOS repository-platform — internal-reverse 消费者结论包

同步时间：2026-07-29
范围：`core::repository`（5 函数）+ `core::api_client`（1）+ `core::models`（1）+ `core::sessions`（1）+ `platform::process`（1）+ `platform::single_instance::imp`（1）+ `commands::system`（1）+ `commands::relay`（1）= 12 个 mac `.c` 文件 + 4 个 win 模块相关 `.c` 文件
baseline：1.2.3（消费 `macos-1.2.3-relay` bundle，该 bundle 处于 `consumerStartReady` 23/23、`readyToImplement=false`）
最终结论：**delta 轮不单独升 ready**，`gate_accepted=false`、`full_leaf_100=false`、`implementation_use=false`。3 条新命令（`get_claude_web_search_compat` / `set_claude_web_search_compat` / `set_codex_no_account_slots`）处于 `consumerStartReady`。本包内部专用（红线23），不对外发布。

## 模块职责（人话结论）

1.2.4 在「账号切换安全闸」和「启动快照恢复」两件事上各加了一对函数：切换前先 `preflight_account_switch` 比对 registry 目标与 live 身份，切换后用 `verify_account_switch` 复核 auth.json 与活动账号一致性，失败抛 `SWITCH_AUTH_VERIFY_FAILED` / `SWITCH_REGISTRY_VERIFY_FAILED`。启动快照从「每次全量写」改成「逐字段深比较，无变化直接 Ok 跳过」（`store_bootstrap_snapshot_progressive`），减少无谓磁盘写。同时新增一条「claude web search 兼容开关」IPC（get/set），和一个「codex 无账号槽位」IPC（`set_codex_no_account_slots`，payload 带 `relaunch` 字段，但 setter 函数体仅做反序列化+状态写入，本身不执行 Codex 重启，重启执行体不在本批 delta 制品内）。平台层补了单实例锁（mac 用 `flock`，win 用 `WakeByAddress`）和 bundled CLI 路径解析。`enrich_active_account_usage_via_api` 是本批最大的函数，负责遍历账号、按策略刷 token、抓 usage、把结果写进 quota_store，并对 reqwest 的 connect/timeout 错误做连通性分类。

## 6dims 摘要

| 维度 | 状态 | 摘要 |
|---|---|---|
| dim1 前端控制流 | not-closed | 1.2.4 frontend ipc-contracts.jsonl 已提取，但无 per-page CCF（组件树+状态模型+invoke 映射）pass |
| dim2 后端 owner+pseudocode | partial | 12 mac `.c` + 4 win 模块相关 `.c`，0 截断桩；但 2/3 新命令 mac 侧 setter 实现体不在本批 delta（mac 仅 DTO serialize） |
| dim3 call-tree 到叶子 | partial | 6dims 提供 14 函数 behavior+destructive 表，但无独立 per-command call-tree-to-leaf 规约文档 |
| dim4 interface/DTO/boundary | partial | 6dims 抽出 DTO 字段线索（key 长度/偏移）+ 错误路径，但非闭合 per-command DTO extraction pass |
| dim5 同平台 gate | closed-for-existence, open-for-parity | mac+win 都有 `get_claude_web_search_compat` 和 `enrich_active_account_usage_via_api`；2 命令 win-only setter（mac DTO serialize only），标 mac-implementation-absent-not-extrapolated |
| dim6 test/acceptance mapping | not-closed | 未产出 |

## changelog 归属

本批 delta 的 3 条新命令和 4 个核心行为函数（`preflight_account_switch` / `verify_account_switch` / `store_bootstrap_snapshot_progressive` / `enrich_active_account_usage_via_api`）均属 1.2.4 新增，无对应 1.2.3 changelog 条目（1.2.3 changelog 三项为 relay 域行为变更，见 `macos-1.2.3-relay/logic/DELTA-LOGIC-1.2.3.md`）。1.2.4 的 repository-platform 域变更属「账号切换安全闸 + 启动快照渐进式恢复 + claude web search 兼容开关 + codex 无账号槽位」四件事，是 1.2.3 baseline 之上的纯增量。

## 破坏性副作用

| 函数 | 副作用 | 风险 |
|---|---|---|
| `commands::relay::set_claude_web_search_compat` (win 0x140e01580) | 突变 RelayState + 触发落盘 | 有：状态突变 |
| `core::repository::enrich_active_account_usage_via_api` (mac 0x10075d8a0 / win 0x1405056f0) | quota_store 写 + token 状态突变 | 有：持久化写 |
| `core::repository::store_bootstrap_snapshot_progressive` (mac 0x10074fc60) | 条件性写 bootstrap 缓存（有 diff 才写） | 有：条件性写 |
| `platform::single_instance::imp::acquire` (mac 0x1006221b0) | 创建/截断锁文件 + 写 PID | 有：锁文件操作 |
| `commands::relay::set_codex_no_account_slots` (win 0x140e2de30) | 仅反序列化+状态写入，无 kill/spawn/exit | 仅状态写入，不含 Codex 重启执行体 |
| `core::repository::preflight_account_switch` / `verify_account_switch` | 只读预检/复核 | 无 |
| `commands::system::get_claude_web_search_compat` | 只读 | 无 |
| `core::api_client::try_connect_local_proxy` | TCP 探测 200ms | 无（网络探测） |
| `platform::process::codex_bundled_cli_path` | 路径解析 | 无 |

## 证据指针

- 6dims 详实分析：`raw/aimami/1.2.4/macos-arm64/version-delta/repository-platform-system-6dims.md`（15088 字节）
- raw `.c` 伪代码路径：见 `pointers/evidence-paths.md`
- 1.2.3 baseline bundle：`internal-reverse/audits/macos-1.2.3-relay/`（manifest.json / gate-report.json / README.md / logic/ / pointers/ / data/ / reviews/）
- 1.2.4 binary sha256：`24bf0857f7afa0c2352cb5ca1552136c406ed9894609dc2de6152437faf9c288`（来源 `raw/aimami/1.2.4/macos-arm64/MANIFEST.md`）

## Gate Leaf Status

`consumerStartReady` 3/3 新命令；`strictImplementationUse` 0/3；`readyToImplement` 0/3。详见 `gate-report.json`。

## Unknown / Missing

1. mac 侧 `set_claude_web_search_compat` / `set_codex_no_account_slots` 的 setter 实现体不在本批 delta（mac 仅 DTO serialize），消费侧需以 win 行为为准并补 mac 等价路径。
2. `set_codex_no_account_slots` 的 `relaunch` 字段仅做反序列化+状态写入，Codex 重启执行体不在本批 delta 制品内。
3. 6dims 源文档头部声称「mac 13 个」`.c` 文件，盘上实测 12 个（与 6dims 函数表 12 个 mac 函数一致），「13」可能是计数偏差。
4. dim4 interface/DTO 闭合抽取未做（DTO 字段线索来自 6dims 的 key 长度/偏移，非独立 per-command DTO extraction pass）。
5. dim6 test/acceptance mapping 未产出。
6. frontend CCF 未做（1.2.4 frontend ipc-contracts.jsonl 已提取但无 per-page 组件树/状态模型逆向）。
7. `windows-1.2.4-repository-platform-system` 跨平台 sibling bundle 尚未产出（win raw `.c` 已在盘但无独立 win 侧 bundle）。

## Action / Non-action

- **可以做**：consumerStartReady 档已满足，Polaris 可基于 6dims 分析的行为语义 + DTO 字段线索 + 错误路径 + 持久化 + sidecar 表开始实现 3 条新命令，但不得宣称与 upstream 100% 等价。
- **不要做**：不得把本包的 dim2 覆盖数字（12 mac + 4 win）当作 `full_leaf_100` 或 `implementation_use=true` 依据；不得对外发布本包任何内容（红线23，内部专用）；不得用 win-only setter 行为外推 mac 侧 setter 实现（mac setter body absent，需独立补逆或以 win 为准补 mac 等价路径）。
