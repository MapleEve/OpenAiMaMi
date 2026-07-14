# evidence.md — confirm_pending_auto_switch (AiMaMi 1.1.8, windows-x64)

- session: <审计会话>
- machine: <本地机器> (反编译器 后端: win)
- module: `AiMaMi 1.1.8 win64.exe`
- source_binary_sha256: `f25d8129528b25ac7f69524fa07c78f961da189a7a8f2c758c288ec96bc68f10`
- owner_va: `0x1403ebe20`（原 `sub_1403EBE20`，本轮已 rename 为 `confirm_pending_auto_switch_owner_sys`，size `0x49f`）
- owner-map 来源: `intermediate/aimami/1.1.8/windows-x64/version-delta/owner-map-118.jsonl` row 11，method=`find_regex_string_pool_hit+xrefs_to_owner=dedicated_per_command_wrapper_fn`
- gate 定位: A/B-level owner，not gate promotion（本轮只做证据留档，不做 `readyToImplement`/`strictImplementationUse` 判定，dim6 C5 侧留给 STAGE3）

## Confirmed

1. `confirm_pending_auto_switch` 是 Tauri IPC 命令，字符串常量 `aConfirmPending`（"confirm_pending_auto_switch"，长度 27）在 owner 内被组装进一个 tracing span 结构（配合字段名 `"app"` @0x14133b79d 与 `"repo"` @0x14133b7c2），经 `decompile(0x1403ebe20)` 直接观察到（伪代码 `v33=(__int64)aConfirmPending` 两处赋值）。
2. owner 是"每命令专属包装函数"（`dedicated_per_command_wrapper_fn`），真实调用链经 `decompile()` 逐跳验证到 **depth5**：owner → `sub_140421360`（tracing-instrument 薄包装，转发 `*(a2+32)`）→ `sub_140870B80`（async-block/future 构造器，对 `a2+136/312/320/328/336/344` 六个偏移做 `InterlockedIncrement64`，即 6 个被捕获资源的 `Arc<T>::clone`，任一引用计数 `<=0` 时 `BUG()` abort）→ `sub_14108F780`（`Vec<u8>`/`String` 的 `Clone::clone`：`sub_140001360(len,1)` 分配 + `sub_1412762D0` memcpy，失败走 `sub_1412AD46B` `handle_alloc_error`）→ `sub_140001360`（Rust 全局分配器 thunk，`terminated_reason=external_call`，与本 session 同批 `begin_chatgpt_oauth_login` 叶子中确认的同一分配器模式一致）。
3. owner 存在第二条独立收敛路径，经 `decompile()` 确认落到同一个 IPC resolver 终态函数 `sub_1407A7610`：
   - **成功快速路径**：`sub_140421360` 返回值 discriminant `v24==3` 时，owner 直接调用 `sub_1407A7610(...)`（`0x1403ec1fa` 前一行）。
   - **错误路径**：`sub_1402868C0`（Err 构造，含 `"poisoned lock: another task failed inside"` @0x141322060 与 `"a Display implementation returned an error unexpectedly"` @0x14132c4c0 兜底 panic 串，以及一个 `"mutation"` @0x1413352dd 标记的事务结果分支）→ `sub_1407B6C80`（对 Err 值做 `Display::fmt` 格式化，复用同一 `"a Display implementation returned an error unexpectedly"` 兜底串 @0x141358000）→ 同一 `sub_1407A7610`。
   - `sub_1407A7610` 内部：`_InterlockedCompareExchange8` 实现"resolver consumed"一次性消费守卫（panic 串 `"resolver consumed"` @0x141358298），随后通过一个 vtable 解出的响应回调函数指针 `*(a2+56)` 完成 JSON 序列化 + webview IPC 响应派发，最后 `WakeByAddressSingle` 唤醒阻塞等待方（与 1.0.9/1.1.1 `THREAD-MODEL.md` 记录的 parking 原语一致，Confirmed unchanged）。故本条路径的 `terminated_reason=response_serialize`，独立于分配器路径，双路径互相印证 owner 真实业务逻辑闭合。
4. 前端接口：`raw/aimami/1.1.8/windows-x64/frontend/ipc-contracts.jsonl` 第 103 行确认 `confirm_pending_auto_switch` 为零参命令（`argKeys=[]`），前端 wrapper 名 `confirmPendingAutoSwitch`，与 mac 1.1.1/1.1.8 两端已确认的零参形状一致。
5. `sub_1412762D0` 在本命令的调用图里出现 7 次（owner 自身 x2、`140421360`、`140870b80`、`1402868c0`、`1407b6c80`、`1407a7610` 各至少 1 次），经交叉核实与本 session 同批 `begin_chatgpt_oauth_login` 叶子中判定的"Rust 泛型 memcpy helper"完全一致，非命令专属逻辑。
6. **与本 session 更早的 `intermediate/aimami/1.1.8/windows-x64/version-delta/buckets/win-shard-1.json` 桶产物交叉核实一致**：该产物独立记录同一 `owner_118=0x1403ebe20`，并给出 `sub_1402868C0`（"repo-mutation-with-lock wrapper", 15 callees）→`sub_140344B00`（24 callees, 通用读取/反序列化+错误格式化 helper）→`sub_1400603E0`（8 路 error-Display 分派）这条链路——本轮独立 `decompile(0x1402868c0)` 直接观察到其内部确有 `sub_140344B00(&v23, a3 + 8)`（0x140286a4c）与 `sub_1400603E0(&v30, &v26)` 两处调用，与该桶产物记录的地址**逐字节一致**，两次独立采样互相印证。该桶产物同时记录**call_tree_depth=6**（经其"lock-wrapper"分支采样），比本轮沿"future 构造"分支采到的 depth5 更深——两条分支分别来自 owner 的不同调用路径（`v24!=3` 复杂分支 vs `sub_140421360` 直接分支），互不矛盾，一并收录进 call-tree jsonl 的 `cross_session_reconciliation` 字段。
7. **持久化面确认（本轮独立复核）**：`find_regex("AutoSwitchSnoozeRecord")` 命中 2 处字符串（`"struct AutoSwitchSnoozeRecord"` @0x141335f40、`"struct AutoSwitchSnoozeRecord with 3 elements"` @0x14133cb77）；`find_regex("auto-switch-snooze.json")` 命中 1 处——该字符串位于一个与 `.codex` 路径表（`sqlite/state_5.sqlite/accounts/.../auto-switch-pending.json/auto-switch-snooze.json/...`）拼接在一起的大字符串块 @0x14132c05c 内，与 `intermediate/aimami/1.0.9/windows-x64/_threadmodel/THREAD-MODEL.md` 记录的既有路径表字符串一致，佐证 `win-shard-1.json` "该文件/类型自 1.0.9 起已存在，非本版本新增"的结论。**xrefs_to(0x140344b00)** 确认其唯一 code 调用点正是 `sub_1402868C0`（本轮独立 decompile 到的同一函数），与桶产物记录完全吻合。

## Inferred

1. `sub_140870B80` 捕获的 6 个 `Arc<T>` 资源（偏移 136/312/320/328/336/344）语义上最贴近 `.manage()` 注册的共享状态（`Repository`/`RelayManager`/`PluginRegistry`，参见 `intermediate/aimami/1.1.8/macos-arm64/_threadmodel/THREAD-MODEL.md` 确认的 3 类 `.manage()` state），但本轮未对每个偏移单独做类型恢复交叉核实，故列为推断。
2. `sub_14127A550` 构造的 discriminant=3 结果标签，语义上对应 owner 顶层 `v24 != 3` 判别里的"已解析成功值"快速路径；给定其内部使用两个函数指针槽位（`sub_1405906F0` x2）调用同一个 trampoline `sub_14108F360`，推断这是一个 boxed 闭包/trait-object 的通用 Result 组合子模式（`map`/`and_then` 类），而非命令专属分支逻辑。
3. `sub_1402868C0` 内的 `"mutation"` 标记分支（经 `sub_14035C480(&v23, v50, aMutation, 8)`）推断对应仓储层一次写操作（数据库/配置文件 mutation）的结果探测，但本轮未定位到具体持久化落盘调用（无 `fs::write`/`rusqlite` 直接引用出现在采样到的 callee 里），故未声明 `persistence_commit`。
4. owner 顶层 `sub_140419310((volatile void *)(v14 + 16))` 返回 0 时才会尝试快速通道（调用 `sub_14127A550`），推断这是一个"结果是否已就绪"的判别（类似 `Option::is_some()`/一次性 flag 探测），语义上与 `sub_140870B80` 捕获的某个 Arc 资源的内部状态相关联，但未做字节级结构体交叉验证，故仅列为推断。
5. 结合 owner 双终态收敛路径（fast-path 与 error-path 都汇入 `sub_1407A7610`）以及 1.0.9/1.1.1 阶段 mac 侧 `Repository::confirm_pending_auto_switch` 是一个独立具名 repository 方法的既有记录，推断 win 侧对应的仓储调用在 `sub_140870B80`/`sub_140421360` 这条链路内部某处被完全内联（而非保留独立符号），这与 win stripped 符号表 + 高内联优化级别的通用模式一致，但未能定位到内联点的精确地址，故列为推断而非确认。

## Unknown

1. mac 侧 1.1.8 已确认的"候选账号凭据新鲜度校验"delta（新增 `load_auth_file`/`Repository::api_proxy_config`/`oauth_refresh::ensure_fresh_token`/`Repository::clear_auto_switch_snooze` callee + 错误串 `"Candidate account credentials have expired since the suggestion was made"`）在本轮 win 侧**无法确认或证伪**：对 6 个相关字面量模式（含该错误串全文、`clear_auto_switch_snooze`、`ensure_fresh_token`、正则 `credentials.*expired`、`auto_switch_snooze`、`load_auth_file`）逐一 `find_regex` 均为 0 命中（`recovery_attempts` 见 call-tree jsonl `cross_platform_delta_probe` 字段），且本轮 depth5+sibling 采样到的 owner 直接/间接 callee 均未出现可比拟的专属字符串或调用点。与 `REVERSE-STATUS.md` 中较早的 mac-shard-1 子条目（同一发现的 3/6 模式先前也是 0 命中）交叉一致，记为 Unknown，不断言"相同"或"不同"。
2. `sub_140406280`（owner 尾部 `return sub_140406280(v13);`）本轮未展开 decompile，仅按调用形状（单指针参数、tail 位置、返回值即 owner 自身返回值）推测为本地 520 字节参数缓冲区的 Drop glue，未独立验证。
3. `sub_140419310((volatile void *)(v14 + 16))` 的确切语义（trylock/guard 检查？）本轮未展开，仅按调用位置（用于决定是否走 `sub_14127A550` 快速通道）判断其为一个布尔态判别调用，具体是锁竞争检测还是缓存命中检测未闭合。
4. 持久化落盘的确切触发点未完全闭合：已确认 `AutoSwitchSnoozeRecord`/`auto-switch-snooze.json` 是本命令附近的既有持久化面（Confirmed #7），且 `xrefs_to` 显示其路径表字符串仅被 `sub_1402868C0` 所在函数簇引用；但本轮未在 `sub_1402868C0`→`sub_140344B00`→`sub_1400603E0` 这条链路里定位到具体的 `fs::write`/文件句柄创建调用，故不能断言"本命令这次调用一定会写 `auto-switch-snooze.json`"（可能是读取/校验而非写入），未声明 `persistence_commit`，留待后续批次细化。
5. `sub_14108F360`（closure trampoline，被 `sub_14127A550` 调用两次）与其两个函数指针目标 `sub_1405906F0`/`sub_14105AC30` 本轮未展开 decompile，按其在 begin_chatgpt_oauth_login 叶子中同类别函数（tokio/futures 组合子）的判定模式类推为通用运行时基础设施，未独立验证。

## 相对 1.0.9 基线的变更点

- **1.0.9 windows 基线**（据 `win-shard-1.json` 引用的 `raw/aimami/1.0.9/windows/auto-switch/confirm_pending_auto_switch/AI.md`）：`argKeys=[]`；副作用 = 提升 `pendingSwitchAccountKey`→`activeAccountKey`、写 `switchedAccountKey`、清空 `pendingSwitchAccountKey`；call_tree_depth=5，终端叶子为 `sub_140563ED0`（promote）/`WakeByAddressSingle`/`tokio_task_spawn`/`tauri_ipc_resolve_sys`——一棵简单的 5 叶子树，未记录任何 SQL/反序列化/锁包装机制。
- **1.1.8 windows 侧确认存在 delta（call-chain 复杂度显著增加）**：owner 到 `sub_1402868C0`（15 callee 的仓储-加锁-变更包装器）再到 `sub_140344B00`（24 callee 的通用状态读取/反序列化+错误格式化 helper）再到 `sub_1400603E0`（8 路 error-Display 分派），这条锁包装/反序列化/错误分派机制在 1.0.9 windows 基线的 5 叶子树描述里完全没有出现——本轮 `decompile(0x1402868c0)` 独立复核确认该链路真实存在（见 Confirmed #6）。
- **持久化面**：`AutoSwitchSnoozeRecord` 结构体与 `auto-switch-snooze.json` 路径在 1.1.8 win 二进制中确认存在（Confirmed #7），但同一字符串在 1.0.9 THREAD-MODEL.md 路径表中已有记录，即该文件/类型本身**并非** 1.1.8 新增——是既有持久化面的复用，新增的是访问它的锁包装/校验链路复杂度。
- mac 侧本 session 较早的 `mac-shard-1` 子条目已确认 `confirm_pending_auto_switch`（macOS）相对 1.0.9 存在 delta：新增候选凭据新鲜度校验 gate（见 Unknown #1 引用的 4 个新增 callee + 1 条新增错误串）。win 侧因符号表被 strip，无法用同一方法逐字节比对该 gate 是否为同一变更的 Windows 对应实现，但 call-chain 复杂度增加这一独立证据本身足以支持"delta"判定（与 `win-shard-1.json` 的 verdict 一致，本轮为其提供了第二次独立交叉验证，而非首次断言）。
- 前端接口形状（零参、wrapper 名）三版本（1.0.9/1.1.1/1.1.8）均一致，无变化。
