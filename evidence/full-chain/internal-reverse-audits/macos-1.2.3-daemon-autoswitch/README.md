# AiMaMi 1.2.3 macOS daemon-autoswitch — internal-reverse 结论包

同步时间：2026-07-25
范围：13 条 canonical 命令（daemon 6 + auto-switch 7），继承自 `../macos-1.0.9-daemon-autoswitch/` 并与同版本 Windows 姊妹包 `../windows-1.2.3-daemon-autoswitch/` 交叉核对
最终结论：**partial 结论包**（本会话为 reduce-only pass，未跑新 IDA decompile）。13 条命令中 **9 条**在 macOS 1.2.3 raw 证据里有精确同名、完整未截断的反编译文件；**1 条**（`schedule_full_runtime_refresh`）全树零命中；**3 条**（`run_daemon_once`/`confirm_pending_auto_switch`/`confirm_pending_auto_switch_and_restart_codex`）无精确同名文件，各有一个语义邻近但身份未确认的候选文件。前端侧对 **5 条**命令（`configure_auto_switch`/`set_auto_switch`/`load_pending_auto_switch`/`dismiss_pending_auto_switch`/`confirm_pending_auto_switch_and_restart_codex`）有真实组件级触发链证据（非仅 wrapper 命中）。**全部 13 条命令 gate 档位保持 `blocks_start`**（`consumerStartReady`/`strictImplementationUse`/`readyToImplement` 均为 0/13），与同日产出的 Windows 姊妹包姿态对齐（详见"Gate 姿态说明"）。本包内部专用，供 Polaris 自有产品线参照实现，不对外发布（红线 23）。

## 证据索引

- raw evidence 指针：见 `pointers/evidence-paths.md`
- 1.0.9 macOS 历史基线（同 13 命令 canonical universe，dim1-dim6 全闭合，readyToImplement=true）：`../macos-1.0.9-daemon-autoswitch/`
- 同版本 Windows 姊妹包（同日产出）：`../windows-1.2.3-daemon-autoswitch/`
- changelog 交叉引用："账号切换稳定性"条目见 `../macos-1.2.3-relay/README.md` Diff 结论段

## Coverage

**daemon（6 条 canonical 命令）**：
- `load_bootstrap_state`/`note_usage_refresh_activity`/`start_usage_refresh_watcher`/`update_usage_refresh_schedule` — 4 条精确同名文件，完整非截断（基线 same-set，与 1.0.9 相比大概率无行为差异，但本次未做逐函数 diff 验证，不写 migrated_no_behavior_diff）
- `run_daemon_once` — 无精确同名文件；候选 `run_daemon_once_blocking`（620 行，**1.2.3 NEW-delta**）+ 独立 CLI 入口 `run_daemon_once_cli`/`run_daemon_once_inner`（LaunchAgent 实际执行体）
- `schedule_full_runtime_refresh` — **全树零命中**，无 raw 证据

另有底层 `platform::daemon::{install_daemon,uninstall_daemon,check_daemon_state,launchctl_label_exists,command_error_text,escape_xml_text}` 6 个 launchd 辅助函数（非 canonical 命令本身，是 daemon 生命周期的实现细节）：写入 `~/Library/LaunchAgents/dev.aionsale.auto-switch.plist`（label `dev.aionsale.auto-switch`），`launchctl unload`+`load` + `xattr -c` 去隔离；`check_daemon_state` 用 `fs::metadata` + `launchctl_label_exists` 双检查得三态（已装载/已安装未装载/未安装）。全部 6 个完整非截断、基线 same-set/no-tag。

**auto-switch（7 条 canonical 命令）**：
- `configure_auto_switch`/`set_auto_switch`/`load_pending_auto_switch`/`dismiss_pending_auto_switch`/`start_auto_switch_pending_watcher` — 5 条精确同名文件，完整非截断，基线 same-set
- `confirm_pending_auto_switch` — 无精确同名文件；候选 `confirm_pending_auto_switch_async`（104 行，no-tag）
- `confirm_pending_auto_switch_and_restart_codex` — 无精确同名文件；候选 `perform_switch_payload_with_restart`（1360 行，commands::accounts 命名空间，**1.2.3 NEW-delta**，`[FULL — IDA decompiler 全解 53045B, 超大体分页取回]`，即真实完整反编译，非截断桩）

底层 `core::repository` 支撑函数（23 个）+ `core::models` DTO 序列化/反序列化/PartialEq impl（12 个）全部完整非截断。**8 个函数带有真实的、文件头标注的 "1.2.3 NEW-delta" 溯源标记**（`perform_switch_payload_with_restart`、`run_daemon_once_blocking`(0x1007c8fe0)、`clear_pending_auto_switch_request`、`clear_pending_auto_switch_request_if_cur`、`confirm_pending_auto_switch`(其中一个地址)、`reconcile_auto_switch_request`、`restore_auto_switch_service`、`update_auto_switch_config`）——这是本次核对得到的**真实、有依据的行为变化证据**，与 changelog"账号切换稳定性"条目一致，明确排除了本域"1.0.9→1.2.3 无行为差异"的迁移假设。

**全域完整性核查**：本包 scope 内共 55（auto_switch 语义匹配）+ 4（daemon 命令精确匹配）= 59 个 raw `.c` 文件全部经 python 括号配平 + `TRUNCATED`/`chars total` 标记扫描，**0 处标记、0 处配平失败**——即已产出的证据本身是真实完整的反编译，不是截断桩冒充完整（红线 20 核查通过）。

## Per-target Result Matrix

见 `gate-report.json`（`dim_status` 字段逐维度状态）与 `data/task-plan.json`（三档队列，本次全空）。摘要：
- dim1 前端控制流：mixed — 5/13 有真实组件级触发链证据（强于 Windows 姊妹包的 wrapper-only 水平），3/13 仅 wrapper 注册无触发链，5/13 前端零命中（与 1.0.9 的"原生线程无 IPC 面"模式一致，本次未独立复核 backend caller）
- dim2 后端 owner+pseudocode：9/13 精确同名完整证据，1/13 全树零命中，3/13 候选身份未确认
- dim3 call-tree 到实现叶子：**not-closed**（本次未产出）
- dim4 interface/DTO/error/side-effect 边界：**not-closed**（1.0.9 有历史参照，不可直接迁移，尤其 8 个 NEW-delta 函数）
- dim5 同平台 gate：closed-for-existence-both-platforms / open-for-parity（mac 证据覆盖度实测强于 win 姊妹包，如实记录不作对称假设）
- dim6 test/acceptance mapping：**not-closed**（1.0.9 有历史参照，不可直接迁移）

## Frontend Control Flow

见 `pointers/evidence-paths.md` 指向的 3 份已产出前端页面文档：
- `accounts-frontend.md`：`set_auto_switch`（关闭切换按钮，乐观更新 + 双缓存快照回滚）+ `configure_auto_switch`（阈值弹窗保存按钮，前端 1-100 整数前置校验，`enabled` 字段传 undefined-vs-false 语义区分）
- `shared-index-app-frontend.md`：App 根组件"待确认自动切号"横幅（`a7`/`s7`，L43429-43561）——挂载即 `load_pending_auto_switch` 拉取，同时订阅 `auto-switch-pending` 推送事件；确认按钮字面量调用 `confirm_pending_auto_switch_and_restart_codex`；跳过按钮调用 `dismiss_pending_auto_switch`；操作失败均 toast + 重新拉取兜底
- `analytics-maintenance-autoswitch-frontend.md` §3：`auto-switch-DujJXz0W.js` 阈值校验/提交辅助模块细节

**开放问题（诚实记录，非结论）**：前端 facade 同时注册了 `confirm_pending_auto_switch`（不带 restart）和 `confirm_pending_auto_switch_and_restart_codex`，但本次读到的横幅组件只调用后者。前者是否为 1.2.3 死代码，还是被本次未提取的其它界面调用，**未解决**。

## Backend Control Flow / Pseudocode / Call-tree

见上方 Coverage 段逐命令明细；无独立 `logic/FULL-CHAIN-1.2.3.md`（本次为 reduce-only pass，未产出新叙事文档，避免与"未做 dim3 系统性调用树"矛盾）。核心持久化模型：`Repository`（mutex 保护，poisoned-lock 错误路径统一）+ `core::models::{PendingAutoSwitchPayload, AutoSwitchStatusPayload, AutoSwitchRuntimeState}`（序列化/反序列化/PartialEq 均有独立文件）+ `core::repository::{AutoSwitchConfig, AutoSwitchSnoozeRecord, RegistryFile, RegistryItem}`（同样有独立 serde 文件）。

## Interface / Error / Boundary

**未闭合**（dim4）。`../macos-1.0.9-daemon-autoswitch/interfaces/{autoswitch-commands.md,daemon-commands.md}` 存在历史参照（含具体字节大小如 `AutoSwitchConfig_0x78`、`PendingAutoSwitchPayload` discriminant），**仅作 1.2.3 未来 dim4 工作的结构模板，不作为 1.2.3 证据本身**，尤其 8 个已确认 NEW-delta 的函数在 1.0.9 时点根本不存在。

## Gate Leaf Status

`consumerStartReady`/`strictImplementationUse`/`readyToImplement` 全 0/13，全部 `blocks_start`。详见 `gate-report.json`。

## Gate 姿态说明（为何不给 consumerStartReady）

本包 5 条命令的 dim1 证据（真实组件级触发链）明显强于同日产出的 Windows 姊妹包（仅 wrapper-call-site 级）。但本包**刻意选择与 Windows 姊妹包一致的保守 gate 姿态**：RULE7 定义 `consumerStartReady` 需要 9 个动工维度齐全（renderSurfaceReady/uiCallEntryReady/dtoBoundaryReady/happyPathReady/boundaryPathReady/sideEffectReady/frontendConsumptionReady/acceptanceDraftReady/platformScopeDeclared），而本次 `dtoBoundaryReady`/`boundaryPathReady`/`sideEffectReady`/`acceptanceDraftReady` 对全部 13 条命令均未触碰。仓库内另有更宽松的先例（`../macos-1.2.3-relay/` 在 dim1(wrapper)+dim2(强) 基础上即给了 23/23 `consumerStartReady`），但本包判断"同模块跨平台一致性"比"套用另一模块的宽松口径"更重要，选择跟随 `../windows-1.2.3-daemon-autoswitch/reviews/CLAUDE.md` 的严格判定逻辑。

## Diff 结论

相对 1.0.9（该版本本域已 readyToImplement 全闭合）：**不是** `migrated_no_behavior_diff`。8 个函数带真实 "1.2.3 NEW-delta" 溯源标记，与 1.2.3 changelog "账号切换稳定性" 条目一致——本域确有真实行为变更。RULE9 状态记为 `diff_reversed`（变化目标的新证据已在既有 raw 采集批次中产出；本 reduce pass 本身未跑新 IDA 工作）。相对 1.2.2（`perform_switch_payload_with_restart`/`run_daemon_once_blocking`(0x1007c8fe0) 头部注释）：两函数明确标注为 1.2.3 新增。

## Unknown / Missing

1. `run_daemon_once` 精确后端归属——候选 `run_daemon_once_blocking` 身份未确认（无字节签名/xref 交叉核实）。
2. `confirm_pending_auto_switch`（不带 restart）——候选 `confirm_pending_auto_switch_async` 身份未确认；且该命令是否为 1.2.3 前端死代码本身也未解决。
3. `confirm_pending_auto_switch_and_restart_codex` 精确后端归属——候选 `perform_switch_payload_with_restart` 身份未确认；Windows 姊妹包独立找到的候选是**另一个不同名字**（`switch_account_and_restart_codex`，且在 Win 侧本身反编译失败），两平台未收敛。
4. `schedule_full_runtime_refresh`——全树零命中，未做 live IDA 核实真实缺失 vs 仅未被本轮采集覆盖。
5. 5 条命令（4 个 usage-refresh watcher + `start_auto_switch_pending_watcher`）前端零命中，与 1.0.9 的"原生线程 bootstrap-spawn 替代 dim1"模式一致，但本次仅做了弱 grep 级跨文件调用者搜索（结果同样为零，但不等价于 IDA xrefs_to 核实）。
6. dim3/dim4/dim6 全部 13 条命令均未产出，1.0.9 历史参照不可直接迁移（尤其 8 个 NEW-delta 函数）。

## Action / Non-action

- **可以做**：以本包 9 条精确匹配命令的真实反编译证据 + 5 条命令的真实前端组件触发链证据作为**诊断参考**，理解 1.2.3 daemon-autoswitch 域的大致行为；不得将本包当作 `consumerStartReady` 依据开始实现。
- **不要做**：不得假设 3 个名字不匹配的候选文件与其对应 canonical 命令是同一函数（未核实）；不得假设 `schedule_full_runtime_refresh` 在 1.2.3 已被移除（只是本轮未采集到）；不得把 1.0.9 的 dim4/dim6 材料当作 1.2.3 证据直接使用；不得对外发布本包任何内容（红线 23，内部专用）。
