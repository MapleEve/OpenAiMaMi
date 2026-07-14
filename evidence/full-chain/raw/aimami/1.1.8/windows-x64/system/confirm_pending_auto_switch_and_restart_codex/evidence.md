# evidence.md — confirm_pending_auto_switch_and_restart_codex (AiMaMi 1.1.8, windows-x64)

- session: <审计会话>
- machine: <本地机器>（反编译器 后端: win，<内网>:13337）
- module: `AiMaMi 1.1.8 win64.exe`
- source_binary_sha256: `f25d8129528b25ac7f69524fa07c78f961da189a7a8f2c758c288ec96bc68f10`
- 分析工具就绪门
- owner-map 来源: `intermediate/aimami/1.1.8/windows-x64/version-delta/owner-map-118.jsonl` row 12，method=`find_regex_string_pool_hit+xrefs_to_owner=main_dispatcher(inline_match_arm,no_dedicated_wrapper)`
- 本轮独立定位的命令专属 owner: `0x140a56ac0`（原 `sub_140A56AC0`，本轮已 rename 为 `confirm_pending_auto_switch_and_restart_codex_owner_sys`，size `0xbd3`）
- gate 定位: A/B-level owner，not gate promotion（本轮只做证据留档，不做 `readyToImplement`/`strictImplementationUse` 判定，dim6 C5 侧留给 STAGE3）

## Confirmed

1. owner-map 记录的 `owner_va=0x1403cf5b0` 是一个**共享主 dispatcher**（`sub_1403CF5B0`，size `0x4ad3`=19155 字节），本轮 `decompile()` 直接观察到该函数体内同时出现本命令的字符串引用与其它命令（如 `clean`，字符串 `aClean` @0x14133b34d）的字符串引用——这是所有命令共用的一个大型内联 match-arm 分派函数，并非本命令专属逻辑所在地。`xrefs_to("confirm_pending_auto_switch_and_restart_codex" @0x14133b472)` 确认该字符串仅在 `sub_1403CF5B0` 内被引用一次（代码位置 `0x1403d175f`），与 owner-map 的判定完全吻合。
2. `find_regex("confirm_pending_auto_switch_and_restart_codex")` 命中 **2** 处字符串（`0x14133b472` 与 `0x141361469`，Rust/LLVM 常见的字符串常量去重边界现象——同一字面量在不同编译单元/单态化实例中各保留一份副本）。第二处 `xrefs_to(0x141361469)` 确认其唯一 code 调用点在 `sub_140A56AC0` 内（代码位置 `0x140a56b81`），`func_query` 确认该函数 `size=0xbd3`。
3. `decompile(0x140a56ac0)` 直接观察到一个完整的异步协程状态机：`switch (*(a1+3440))` 分支 0/1/2/3，与 1.0.9 windows 基线 `raw/aimami/1.0.9/windows/auto-switch/confirm_pending_auto_switch_and_restart_codex/ida/pseudocode.c` 记录的 `confirm_pending_auto_switch_and_restart_coroutine`（`a1[3440]` 同一偏移的 resume-state 字段，size 同为 `0xBD3`）在**字节级 size 完全一致**——判定为跨版本对应的同一份协程实现（地址漂移，函数体大概率未变），本轮据此将其 rename 为 `confirm_pending_auto_switch_and_restart_codex_owner_sys`。
4. 协程 case-0（初始状态）分支经 `decompile()` 确认调用 `sub_140421360(&v75, (__int64)&v63)`（代码位置 `0x140a56bd6`），这是本 session 更早的配对命令 `confirm_pending_auto_switch` 叶子（`raw/aimami/1.1.8/windows-x64/system/confirm_pending_auto_switch/`）已独立完整反编译并归档的**同一个**共享 tracing-instrument 薄包装函数（转发至 `sub_140870B80` async-block 构造器，6x `Arc<T>::clone` via `InterlockedIncrement64`）——两次独立的地址级交叉核实完全吻合（同一 `to_va=0x140421360`/`0x140870b80`/`0x14108f780` 调用链），本命令的"确认"阶段与配对命令共享同一条底层实现。
5. 协程随后发起一个独立的 restart 任务：`sub_140103590`（字节缓冲 clone，与配对命令叶子记录的"clone helper #2"同一函数地址）+ 2x `InterlockedIncrement64`（Arc 克隆，代码位置 `0x140a56ee7`/`0x140a56efc` 附近）+ `sub_1401A3720`（本轮**新**独立完整 `decompile()`：内部 `InterlockedExchangeAdd64` 自旋等待 + 构造 0x98 字节 future/vtable 载荷 + `sub_140001360` 分配 640 字节 + `sub_140EE3CC0` 实际派生任务——通用 Tokio spawn 基础设施，非命令专属）。
6. 协程通过 `sub_140064790(&v75, a1+3400, a2)`（代码位置 `0x140a56fd4`）轮询上述 restart 任务，三路判别 `Pending(4)`/`Ok(3)`/`Err(其它)`；Err 分支调用 `sub_140036730`（Display::fmt trait-object 格式化，与配对命令叶子的 `sub_1407B6C80` 内部调用同一 helper 函数地址），两路收敛后统一走 `sub_140001360`（alloc）/`sub_140001370`（dealloc）配对模式，最终汇入 `sub_1407A7610`（与配对命令叶子完全同一个 IPC resolver 终态函数：`_InterlockedCompareExchange8` "resolver consumed" 一次性消费守卫 + vtable 回调 JSON 序列化 + `WakeByAddressSingle` 唤醒，`terminated_reason=response_serialize`）。
7. **持久化面复核**：`imports_query` 分页搜索（offset 0/100/200/300）定位 `TerminateProcess`（`0x1412af1d8`，KERNEL32）与 `WaitForSingleObject`（`0x1412af700`，kernel32）两个导入函数；`xrefs_to` 确认 `TerminateProcess` 在**整个 win 1.1.8 二进制里只有唯一一处调用点** `sub_141070590`（size `0x99`）；`decompile(0x141070590)` 确认其形状为"**先立即 `TerminateProcess`，仅当返回 `ERROR_ACCESS_DENIED`(5) 时才退化为一次超时=0 的非阻塞 `WaitForSingleObject` + `GetExitCodeProcess` 校验**"——与 1.0.9 基线"先等待再强杀"的形状不同，是一项独立于本命令可达性问题之外、本身已确认的二进制事实。

## Inferred

1. 协程 restart 阶段捕获的 2 个 `Arc<T>` 资源（`InterlockedIncrement64` 作用的偏移，代码位置 `0x140a56ee7`/`0x140a56efc` 附近）语义上推断为"Codex 进程句柄 + 一个配置/状态引用"这类更窄的捕获集（相较配对命令 `confirm_pending_auto_switch` 的 6 个 Arc 捕获），但本轮未做逐偏移类型恢复交叉核实，故列为推断。
2. 1.1.8 win 侧把"确认"逻辑收敛为与配对命令共享同一条调用链（`sub_140421360→sub_140870B80`），而非 1.0.9 基线里两命令各自独立实现（`confirm_pending_auto_switch` 走 `sub_140563ED0` promote / 本命令走独立的 `sub_1402DCBC0`）——推断这是一次面向代码复用的重构（两个命令的"确认"部分合并成一份共享实现，各自在其上叠加不同的后续动作：无操作 vs 重启），但未对 `sub_140421360` 内部做逐字节单态化实例核实，故列为推断。
3. `off_141963508+96==2` 这个运行时配置标志分支，语义上推断为一个"运行时/执行器变体选择"开关（例如 tokio 单线程 vs 多线程 runtime，或 local-set vs 全局 executor），因其直接影响 `sub_1401A3720` 传入的目标对象选择（`off_141321088` vs `off_141321070`），但本轮未对该标志的具体语义做类型恢复，故列为推断。
4. `sub_141070590`（唯一的 `TerminateProcess` 调用点）"先杀后验"的控制流形状，推断可能对应一种更激进的强制退出策略（例如用于处理"Codex 进程已挂起、无法响应正常退出信号"的兜底场景），但未确认其是否确实是本命令 restart 阶段的执行体，故仅作为独立观察列出，不并入本命令的 Confirmed 副作用集合。
5. 协程 case-0 分支里"复用 `confirm_pending_auto_switch` 的确认子逻辑"这一设计，结合 mac 侧已确认的"候选凭据新鲜度校验"delta（新增 `load_auth_file`/`ensure_fresh_token`/`clear_auto_switch_snooze` 等 callee），推断 win 侧如果存在等价的新鲜度校验，很可能同样内联在 `sub_140870B80`（或其更深的 callee）内部而非本命令的协程主体里——但本轮未对 `sub_140870B80` 做逐 callee 展开核实（配对命令叶子的 Unknown #1 已记录 6 个相关字面量模式在 win 侧 0 命中），故仅列为推断，不断言"相同"或"不同"。

## Unknown

1. **restart 任务的具体执行体未定位**：`sub_1401A3720` 派生的 future 由运行时配置标志在两个候选目标对象 `off_141321088`/`off_141321070` 间选择，`get_bytes` 读出的原始字节两者完全一致（`{ptr=0x141321000, tag=0x6b(107)}`），本轮未能将其解析为清晰的函数指针 vtable 对，故无法静态确定 restart 任务实际执行体的地址（`recovery_attempts`：`get_bytes` 双地址比对、与本 session 已知 vtable 布局模式比对，均未能解析；未尝试 `declare_type`/`read_struct` 类型系统级恢复，留待后续批次）。
2. **1.0.9 记录的具体符号（`signal_codex_quit_wake`/`check_update_installability_core_sys`）在 1.1.8 win 侧是否仍存在，未确认或证伪**：本轮 decompile 到的协程主体内未直接观察到与这两个符号名对应的字面量或明显匹配的调用形状；不排除这些逻辑被完全内联进上一条 Unknown 提到的未解析 restart 目标函数内部。
3. **mac 侧已确认的 restart 超时/helper 重命名 delta（8s→5s，`stop_codex_app_gracefully`→`stop_codex_for_file_edit`）在 win 侧无法确认或证伪**：本轮定位到全二进制唯一的 `TerminateProcess` 调用点 `sub_141070590`，但向上追溯其调用者 2 跳（`sub_140ABBD60`(0xe9)→`sub_140A9BCC0`(0x7a)→`sub_1401C93B0`/`sub_140781590`）未能与本命令已确认的调用图（`0x1403cf5b0`/`0x140a56ac0`/`0x140421360`/`0x140870b80`/`0x14108f780`/`0x1401a3720`/`0x140064790`/`0x1407a7610`/`0x140036730`/`0x140001360`）产生重叠，故无法断言 `sub_141070590` 就是本命令的 restart 执行体。3 次独立 recovery attempt（导入表分页搜索、2 跳向上调用者追溯、字节级 vtable 解析尝试）均已记录于 call-tree jsonl 的 `cross_platform_delta_probe.recovery_attempts` 字段，满足红线13的反作弊举证要求，记为 `accepted_unknown` 而非武断结论。
4. **持久化落盘的具体触发点未闭合**：本轮已解析的调用图节点里未观察到 `fs::write`/`rusqlite` 直接引用，不声明 `persistence_commit`；但由于 restart 任务执行体本身未定位（Unknown #1），不能排除持久化逻辑存在于该未解析区域内部。
5. **response 成功态 payload 的字段级结构未展开**：协程最终汇入 `sub_1407A7610` 前组装的 6 元组结果（`v9,v10,v11,v12,v13,v14`）本轮仅确认了外层判别值（`discriminant==3`=Ok 快速通道 / 其它=Err），未对 payload 内部字段做类型级恢复（是否携带账号 key、restart 状态标记等），需要后续批次结合前端 TS 类型定义或对协程 payload 缓冲做逐偏移类型恢复。

## 相对 1.0.9 基线的变更点

- **1.0.9 windows 基线**（`raw/aimami/1.0.9/windows/auto-switch/confirm_pending_auto_switch_and_restart_codex/AI.md` + `ida/pseudocode.c`）：`call_tree_depth=4`，一棵结构简单的树——`auto_switch_multiplex_dispatcher_sys`（共享 dispatcher，与 1.1.8 的 `sub_1403CF5B0` 角色对应）→ `confirm_pending_auto_switch_and_restart_coroutine`（协程，与 1.1.8 的 `confirm_pending_auto_switch_and_restart_codex_owner_sys` 角色对应，size 同为 `0xBD3`）→ 两条并列子链：(a) `sub_1402DCBC0` 独立确认逻辑；(b) `restart_codex_async_wrapper_sys` 内联同步三连调用 `signal_codex_quit_wake` + `quit_codex_wait_fallback_kill_sys`(8s WaitForSingleObject 超时后 TerminateProcess) + `check_update_installability_core_sys`。5 个终态叶子，无锁包装/反序列化/两段式 spawn+poll 机制。
- **1.1.8 windows 侧确认的结构性变化（本轮独立复核并补充调用图证据）**：
  1. "确认"阶段从 1.0.9 的独立 `sub_1402DCBC0` 调用，改为**复用配对命令 `confirm_pending_auto_switch` 的共享子调用链**（`sub_140421360→sub_140870B80→sub_14108F780→sub_140001360`）——两个命令在 1.1.8 里共享同一份"确认"实现，这在 1.0.9 基线里是不存在的（1.0.9 两命令各自独立实现，见配对命令 1.0.9 基线记录的 `sub_140563ED0` promote 逻辑）。
  2. "restart"阶段从 1.0.9 的**一次性同步内联三连调用**（signal + wait + check_update），改写为**独立的两段式异步任务**（`sub_1401A3720` 发起 spawn + `sub_140064790` 轮询 poll），这是比 1.0.9 更复杂的控制流形态，与 `win-shard-1.json` 记录的 verdict=delta 判断一致，本轮为其提供了具体的调用图级别证据（而非仅是聚合 depth 数字）。
  3. mac 侧已确认的"restart 超时缩短 + helper 重命名"delta（8s→5s）在 win 侧**无法用同一方法确认或证伪**——本轮定位到的唯一 `TerminateProcess` 调用点（`sub_141070590`）本身控制流形状就与 1.0.9 记录的"先等后杀"模式不同（"先杀后验"），但未能建立其与本命令 restart-spawn 链路的静态可达性证据，故不断言这就是本命令场景下的等价变更。
  4. 前端接口形状（零参、`argKeys=[]`）三版本（1.0.9/1.1.1/1.1.8）一致，无变化（`cmd-same.win.txt` 命中该命令）。
