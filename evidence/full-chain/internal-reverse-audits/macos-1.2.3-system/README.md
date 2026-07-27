# AiMaMi 1.2.3 macOS — system 模块结论包

同步时间：2026-07-24
范围：`codexmate_lib::commands::system::*`（`commands/system/ida/pseudocode/`，34 个 `.c` 文件）为主目标，`platform::{process,paths,debug_log,daemon,single_instance,system_volume,proxy}::*`（85~95 个 `.c` 文件，见下方「口径差异」）为支撑证据（这些 platform 原语被 system/relay/accounts 等多个 commands 模块共用，非 system 独占）。**排除** `commands/hotspot`（独立模块，已有 1.0.9 期 `macos-1.0.9-system-hotspot` 先例）；`shell-init` 在 1.2.3 macOS-arm64 raw 树内未找到同名目录/文件，本包按「不适用于本版本」处理，非确认删除。

本包是**蒸馏**产出——本轮未连 IDA、未做新反编译，主要整合两份既有基线文档（均声称对目标文件做过逐条直读）：`raw/aimami/1.2.3/macos-arm64/backend-baseline/commands-baseline.md` §2「system」与 `.../backend-baseline/platform-baseline.md`（全篇），并叠加本轮独立做的：(a) `commands/system` 34 文件中 2 个的直接 Read 抽验（`clean_0x1007cd710.c`、`compose_image_compat_flag_0x1007ca180.c`）；(b) 全量 `find|wc -l` 文件计数复核；(c) `frontend/ipc-contracts.jsonl` 全量 131 条命令的逐条 cross-check（角度B）；(d) 对 `platform-baseline.md` 表格数字与当前磁盘文件数的一致性核对，发现并如实记录一处口径差异（见下）。

最终结论：**consumerStartReady = 26/26**（`commands/system` 拥有的前端可调用命令，含 3 条与 `macos-1.2.3-relay` 包共享物理归属的 `*_api_proxy_config` 命令）；`strictImplementationUse`/`readyToImplement` 均为 0（dim3 无独立 call-tree 产物、dim4 未做 DTO 抽取、dim5 Windows 严重不足、dim6 未做）。

## 口径差异（如实记录，未强行统一）

`platform-baseline.md`（本次任务给定的既有基线文档）表格自称覆盖 85 个函数文件（`process`34/`paths`15/`debug_log`14/`daemon`6/`single_instance`6/`system_volume`7/`proxy`3）。本轮独立 `find *.c | wc -l` 复核得到 **95** 个文件（`process`34/`paths`**21**/`debug_log`**17**/`daemon`6/`single_instance`**7**/`system_volume`7/`proxy`3），`paths`+6、`debug_log`+3、`single_instance`+1，合计 +10。逐一 `ls` 核对这 10 个文件名，全部是 serde/trait 自动生成 glue（`CodexPaths::clone` 的 5 处单态化实例地址、`StateDbReadState::fmt`、`FileLogger` 的 `Log::enabled`/`Log::flush`/`Log::log` 三个 trait 方法、`ActivationRecord` 的 `Deserialize` glue），与 `commands-baseline.md` 明确记录的"自动生成 glue 略读不逐条展开"计数惯例形状一致，但两份文档的口径是否完全一致**未逐字核实**（`platform-baseline.md` 全文没有像 `commands-baseline.md` 那样显式声明"本表已排除 N 个 glue 文件"）。本包**如实记录该差异，不擅自合并成单一数字**：manifest.json 中 `platform_backing` 字段同时保留两个来源的计数。

## 证据索引

- `commands/system` 后端：`raw/aimami/1.2.3/macos-arm64/commands/system/ida/pseudocode/*.c`（34 文件）
- `platform` 支撑证据：`raw/aimami/1.2.3/macos-arm64/platform/{process,paths,debug_log,daemon,single_instance,system_volume,proxy}/ida/pseudocode/*.c`
- 既有基线文档（本包主要蒸馏来源）：`raw/aimami/1.2.3/macos-arm64/backend-baseline/commands-baseline.md` §2、`.../backend-baseline/platform-baseline.md`（全篇）
- 前端：`raw/aimami/1.2.3/macos-arm64/frontend/ipc-contracts.jsonl`（131 条全量命令表，本包据此做角度B cross-check）
- Windows：`raw/aimami/1.2.3/windows-x64/commands/system/ida/pseudocode/`（6 文件，全部 `sub_XXXX` 未解析命名）+ `raw/aimami/1.2.3/windows-x64/system_volume_windows/ida/pseudocode/`（3 文件，同样未解析）
- 详见 `pointers/evidence-paths.md`

## Coverage

| 维度 | macOS | Windows |
|---|---|---|
| `commands/system` 函数 | 34/34 有反编译产出，0 截断（据 `commands-baseline.md` 对全批 145 文件的截断扫描，system 子集包含在内；本包直接抽验的 2 个文件确认无截断） | `commands/system` 目录存在但仅 6 个文件，全部 `sub_XXXX` 未解析命名，0 个语义确认 |
| platform 支撑函数 | 95 个文件（见上「口径差异」），`platform-baseline.md` 逐条读盘未发现截断桩 | `system_volume_windows` 3 个文件，全部 `sub_XXXX` 未解析 |
| 前端命令 | 26/26 system 域命令在 `ipc-contracts.jsonl` 中找到 1:1 或 1:N 对应（角度B true_gaps=0） | 未独立核实（假定共享同一 Tauri 前端 bundle，未验证） |

## Per-target 命令清单（26 条，consumerStartReady）

**system 独占（23 条）**：`get_usage_refresh_interval`、`get_notification_client_state`、`load_pending_auto_switch`、`diagnose`、`set_auto_switch`、`open_path`、`dismiss_pending_auto_switch`、`configure_auto_switch`、`merge_mystery_unlock_grants`、`get_mystery_unlock_grants`、`set_image_compat`、`get_system_info`、`set_usage_refresh_interval`、`force_kill_codex`、`clean`、`get_device_id`、`load_bootstrap_state`、`restart_codex`、`get_image_compat`、`rebuild_registry`、+ `run_daemon_once`（owner=`run_daemon_once_blocking_0x1007c8fe0.c`，620 行完整版，内部调用同名 33 行版 `0x1007ca0b0.c`）、+ `confirm_pending_auto_switch`/`confirm_pending_auto_switch_and_restart_codex`（两个前端命令共享同一个 raw 文件 `confirm_pending_auto_switch_async_0x1000eac80.c`，是否真为同一函数的两个调用位点或该文件只覆盖其中一个——**未逐一验证，记为 Unknown**，见下方 Unknown 小节）。

**与 `macos-1.2.3-relay` 包共享物理归属（3 条）**：`detect_api_proxy_config`、`set_api_proxy_config`、`test_api_proxy_config`——语义上是 relay/中转网络代理配置，物理落盘在 `commands/system/` 目录（`macos-1.2.3-relay/logic/REGISTRATION-TABLE-1.2.3.md` 已记录此归属，本包与之互相指针引用，不重复声明为各自独有）。

内部辅助函数（无独立 invoke 命令，被上述命令内部调用，共 8 个）：`note_usage_refresh_activity`、`update_usage_refresh_schedule`、`get_or_create_remote_device_secret`、`start_usage_refresh_watcher`、`load_api_request_context_from_repo`、`start_auto_switch_pending_watcher`、`import_remote_device_secret_if_empty`、`compose_image_compat_flag`。

## Frontend Control Flow

未产出独立的 system 页面前端逆向文档（不同于 relay 的 `relay-frontend.md`/skills 的专节）——`commands-baseline.md`/`platform-baseline.md` 均为纯后端逆向，本包本轮也未对前端 `.js` 逐组件展开分析，只做了 `ipc-contracts.jsonl` 命令名级 cross-check（角度B）。这是本包相对 relay/skills 两个既有包的一处**明确降级**：dim1（前端控制流）状态为 `weak`，非 `strong`/`mostly-closed`。

## Backend Control Flow / Pseudocode / Call-tree

见 `logic/FULL-CHAIN-1.2.3.md`（system 命令职责摘要，蒸馏自 `commands-baseline.md` §2）与 `logic/REGISTRATION-TABLE-1.2.3.md`（命令↔文件↔platform支撑映射）。call-tree 深度：`commands-baseline.md`/`platform-baseline.md` 均已读到真实叶子（进程 kill/spawn、`launchctl`/`osascript`/`scutil`/`flock`/CoreAudio 系统调用），但**未产出逐命令系统化的 call-tree-to-leaf 文档**（与 relay/skills 包的 dim3 gap 同类）。

## Interface / Error / Boundary

**未闭合**（dim4）。本包未做 DTO/字段级抽取；`commands-baseline.md`/`platform-baseline.md` 均为职责级叙述，未系统整理入参/出参/错误封装。

## Gate Leaf Status

见 `gate-report.json`：`consumerStartReady` 26/26；`strictImplementationUse`/`readyToImplement` 均 0/26。

## Diff 结论

`commands-baseline.md` 记录 1.2.3 相对 1.2.2 的 NEW-delta 标记中，system 域命中 **`run_daemon_once_blocking` 及其内部 2 个 closure**（其余 33 个 system 文件头注释均为「基线 same-set」）。`platform-baseline.md` 覆盖的 7 个 platform 子目录中，**process 目录 34 个文件全部无 same-set/NEW-delta 标记**（该目录未做版本 delta 分类，`platform-baseline.md` 判断为"标注脚本未处理"而非反编译失败，逐一读盘确认函数体完整）；`daemon`/`single_instance` 各 1 个文件同样无标记（`check_daemon_state`/`acquire`）。本包未独立重新验证这些 same-set 标记的字节级准确性，直接复用两份基线文档的分类结论。

## Unknown / Missing

1. **platform 支撑证据的口径差异**（+10 文件，见上「口径差异」）——已定位为疑似 glue 文件但未逐条内容核实，记 `accepted_unknown`（形状高度符合已知的 glue 排除惯例，但未逐字节确认）。
2. **`confirm_pending_auto_switch` vs `confirm_pending_auto_switch_and_restart_codex`** 是否真的共享同一个 owner 文件、还是其中一个存在未被 `commands-baseline.md`/本轮 `find` 命中的独立实现——**未验证，`blocks_start`**。
3. **前端控制流**（dim1）：本包未产出组件级逆向文档，只做命令名级 cross-check——`blocks_start`（明确的真实缺口，非 accepted_unknown）。
4. **`core::bootstrap_cache`**（9 个 `.c` 文件，被 `load_bootstrap_state` 命令使用）——检索了 `commands-baseline.md`/`platform-baseline.md`/`models-repository-baseline.md`/`run-app-misc-baseline.md` 全部既有基线文档，**均未覆盖此目录**（仅在 `commands-baseline.md` 里被 `load_mcp_servers` 提了一句"更新 bootstrap_cache"，非独立分析）。本包未对其做新的逆向，如实标为 **`truly_undone`**（angle D 孤儿分类：不属于 already_in_canonical/local_outtake/different_machine_owner 任一类，是真正未做的缺口）。
5. **角度C 语义关键词孤儿扫描**（`system`/`registry`/`bootstrap`/`daemon` 等关键词跨全树扫描）——本轮**完全未执行**（无 IDA 连接），`blocks_start`，非 accepted_unknown。
6. **Windows dim5**：`commands/system` 仅 6 文件、`system_volume_windows` 仅 3 文件，全部 `sub_XXXX` 未解析命名——26 条命令中 0 条有确认的 Windows 对应体，`dim5` 完全未闭合，不得用 macOS 证据外推。
7. **dim6 test/acceptance mapping**：未产出。

## Action / Non-action

- **可以做**：`consumerStartReady` 26/26 已满足，Polaris 可基于本包 + `commands-baseline.md`/`platform-baseline.md` 原文的函数级职责描述开始实现，但不得宣称与 upstream 100% 等价，且必须自行补前端控制流（dim1 本包未做）。
- **不要做**：不得把 34/95 文件数或"0 截断"当作 `full_leaf_100` 或 `implementation_use=true` 依据；不得把 `platform-baseline.md` 的 85 文件表格数字当作当前磁盘的权威计数（当前磁盘是 95，见口径差异）；不得对 `core::bootstrap_cache` 的行为做任何推断（真正未逆）；不得用 macOS 证据外推 Windows；不对外发布本包任何内容（红线 23，内部专用，供 Polaris 自有产品线参照实现）。
