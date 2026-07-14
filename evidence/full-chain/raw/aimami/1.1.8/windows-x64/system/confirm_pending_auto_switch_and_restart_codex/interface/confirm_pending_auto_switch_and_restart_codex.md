# interface — confirm_pending_auto_switch_and_restart_codex (AiMaMi 1.1.8, windows-x64)

## 命令标识

- IPC 命令名: `confirm_pending_auto_switch_and_restart_codex`（Tauri `#[command]`）
- owner-map 记录的 owner_va: `0x1403cf5b0`（共享主 dispatcher `sub_1403CF5B0`，内联 match-arm，本轮未 rename——同一函数体同时处理其它命令，如 `clean`）
- 真正的命令专属实现（本轮定位并 rename）: `0x140a56ac0` → `confirm_pending_auto_switch_and_restart_codex_owner_sys`，size `0xbd3`
- 配对命令: `confirm_pending_auto_switch`（同 module，owner_va=`0x1403ebe20`，本 session 更早独立完成的叶子；两命令在 win 侧共享同一个 `sub_140421360` 确认子调用，见"与配对命令的关系"）

## argKeys（Confirmed）

- `argKeys=[]`（零参命令），来源 `raw/aimami/1.1.8/windows-x64/frontend/ipc-contracts.jsonl` 第 104 行。
- 与 1.0.9/1.1.1 win 基线一致（`raw/aimami/1.0.9/windows/auto-switch/confirm_pending_auto_switch_and_restart_codex/AI.md` 记录 `argKeys=[app(str — Tauri AppHandle)]`——**注意**：1.0.9 文档记录的是内部 Rust 函数签名参数（`app: AppHandle`），而非前端 IPC 层的 argKeys；前端 IPC 层三版本均为零参，未变化）。

## 副作用（Confirmed / Inferred / Unknown 混合，见标注）

1. **Confirmed（本轮独立定位并 decompile）**：命令专属逻辑是一个协程状态机 `confirm_pending_auto_switch_and_restart_codex_owner_sys`（resume-state 字段 `a1+3440`，值 0/1/2/3），结构与 1.0.9 windows 基线的 `confirm_pending_auto_switch_and_restart_coroutine`（size 完全一致 `0xBD3`，state 字段偏移完全一致）同构，判断为跨版本对应的同一份协程代码（地址漂移，逻辑大概率未变）。
2. **Confirmed**：协程 case-0（初始状态）复用/嵌套调用 `sub_140421360`（本 session 更早的 `confirm_pending_auto_switch` 叶子已独立确认的共享 tracing-instrument 薄包装，转发至 `sub_140870B80` async-block 构造器，6x `Arc<T>::clone`）——即本命令的"确认待切换账号"这部分，与配对命令 `confirm_pending_auto_switch` 共享同一条底层调用链，而非各自独立实现。这与 `win-shard-1.json` 桶产物的判定一致："inherits the confirm_pending_auto_switch core delta"。
3. **Confirmed（restart 任务发起）**：随后协程发起一个第二阶段异步任务（"restart"任务），经 `sub_140103590`（字节缓冲 clone，与配对命令叶子里的"clone helper #2"同一函数）+ 2 个 `Arc<T>::clone`（`InterlockedIncrement64`，比配对命令的 6 个更窄，Inferred 语义更贴近"仅需 Codex 进程句柄 + 一个配置引用"）+ 通用 Tokio spawn helper `sub_1401A3720`（本轮独立 decompile，内部调用 `sub_140EE3CC0` 实际派生任务）。
4. **Unknown（restart 任务的具体目标函数）**：`sub_1401A3720` 派生的具体 future 由运行时配置标志（`off_141963508+96==2`）在两个候选目标对象 `off_141321088`/`off_141321070` 间选择，两者 `get_bytes` 读出的原始字节目前完全一致（`{ptr=0x141321000, tag=0x6b}`），本轮未能解析为清晰的函数指针 vtable 对，无法静态确定 restart 任务实际执行体的地址。
5. **Confirmed（restart 任务轮询与收尾）**：协程通过 `sub_140064790` 轮询该 restart 任务（Ok(3)/Err(其它)/Pending(4) 三路判别），Err 分支复用 `sub_140036730`（Display::fmt trait-object 格式化，与配对命令叶子的 `sub_1407B6C80` 内部调用同一 helper）；两路收敛后走 Rust 全局分配器 `sub_140001360`（alloc）+ `sub_140001370`（dealloc）配对模式，最终统一汇入 `sub_1407A7610`（与配对命令叶子完全同一个 IPC resolver 终态函数，`terminated_reason=response_serialize`）。
6. **Unknown / 未闭合（1.0.9 基线的具体副作用字段）**：本轮未能确认协程内部是否仍执行 1.0.9 文档记录的 `signal_codex_quit_wake`（发送退出信号唤醒 Codex 进程）与 `check_update_installability_core_sys`（OTA 可安装性检查）——decompile 到的协程主体里未直接观察到与这两个符号名对应的字面量或明显匹配的调用形状；不排除这些逻辑被内联进 `sub_1401A3720` 派生的、本轮未能解析的 restart 目标函数内部。

## 与 1.0.9 基线的接口/行为差异（核心变更点）

- **1.0.9 windows 基线**（`raw/aimami/1.0.9/windows/auto-switch/confirm_pending_auto_switch_and_restart_codex/AI.md`）：`call_tree_depth=4`，调用链 `auto_switch_multiplex_dispatcher_sys → confirm_pending_auto_switch_and_restart_coroutine → sub_1402DCBC0(confirm) + restart_codex_async_wrapper_sys(signal_codex_quit_wake + quit_codex_wait_fallback_kill_sys[TerminateProcess, 8s WaitForSingleObject 超时] + check_update_installability_core_sys)`，5 个终态叶子（`signal_codex_quit_wake`/`quit_codex_wait_fallback_kill_sys`/`check_update_installability_core_sys`/`sub_140879EE0`/`tauri_ipc_resolve_sys`）。
- **1.1.8 windows 侧确认存在结构性变化**：协程内部的"确认"阶段被重写为**复用配对命令 `confirm_pending_auto_switch` 的共享子调用链**（`sub_140421360→sub_140870B80→sub_14108F780`），而不是 1.0.9 记录的独立 `sub_1402DCBC0` 直接调用；"restart"阶段被重写为一次独立的 **spawn+poll 两段式异步任务**（`sub_1401A3720` 发起 + `sub_140064790` 轮询），而非 1.0.9 记录的一次性同步风格 `restart_codex_async_wrapper_sys` 内联三连调用（`signal_codex_quit_wake`/`quit_codex_wait_fallback_kill_sys`/`check_update_installability_core_sys`）。这是比"数值调参"更深的**控制流重构**（delta 判定，见 `win-shard-1.json` verdict=delta，本轮为其提供第二次独立交叉验证并补充了具体的调用图证据）。
- **restart 具体机制的 Windows 侧验证（本轮尝试闭合 mac 侧已确认的 delta，未完全闭合）**：mac 1.1.8 已确认 restart 超时从 8s 缩短为 5s、helper 由 `stop_codex_app_gracefully` 重命名为 `stop_codex_for_file_edit`。本轮在 win 1.1.8 二进制中定位到全二进制唯一的一处 `TerminateProcess` 调用点 `sub_141070590`——但其控制流形状是"**先立即 TerminateProcess，仅在 `ERROR_ACCESS_DENIED` 时才退化为一次非阻塞（超时=0）`WaitForSingleObject` 校验**"，与 1.0.9 基线"先等待 N 秒、超时后才强杀"的形状**不一致**（如果这确实是本命令的 restart 执行体，则这是比"改个超时数字"更大幅度的控制流重写）。但本轮未能建立从 restart-spawn 的 vtable 目标（`off_141321088`/`off_141321070`）到 `sub_141070590` 的静态可达性证据（向上追溯 2 跳未命中已确认的调用图），故**不断言**这就是本命令的 restart 执行体，记为 `accepted_unknown`，供后续批次继续验证（recovery_attempts 见 call-tree jsonl `cross_platform_delta_probe` 字段）。
- **持久化面**：本轮未独立定位到与本命令直接相关的持久化写入调用（`fs::write`/`rusqlite` 均未在已解析的调用图节点中观察到），不声明 `persistence_commit`。

## 与配对命令 `confirm_pending_auto_switch` 的关系

- 两命令在 win 1.1.8 二进制里**共享同一条确认子调用链**（`sub_140421360→sub_140870B80→sub_14108F780→sub_140001360`），本命令在此基础上追加了 restart 阶段。这与 1.0.9 基线里两命令各自独立实现（`confirm_pending_auto_switch` 走 `sub_140563ED0` promote 逻辑，`confirm_pending_auto_switch_and_restart_codex` 走独立的 `sub_1402DCBC0`）形成对比——1.1.8 版本看起来把"确认"逻辑收敛成了一份共享实现，两个命令各自在其上叠加不同的后续动作（无操作 vs 重启）。**Inferred**，未对 `sub_140421360` 内部是否真的是同一个 monomorphized 实例做逐字节类型级别核实。
