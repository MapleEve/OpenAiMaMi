# evidence.md — graceful_restart_for_update win 1.2.7 最新 exe full-chain

- session: <审计会话> | machine: <本地机器> | IDA: <审计环境>（win 1.2.7 最新 exe，唯一操作目标；<审计环境>/1.2.6 全程未触碰；mac 实例仅只读核验）
- 全部结论为本轮 live 独立重证（红线 31：不采信 Oct 6 会话现场呈报与既有 IDB 注释；IDB 内 Oct 6 已有 rename 经本轮内容级复验后采信）

## 0. 裁决背景与禁实现撤销

既往结论链：2026-09-30 四角度 D1 分类将 `graceful_restart_for_update` 判 `local_outtake`（「双侧后端 census 零命中，判前端侧 feature-flag/helper 名称」），win/mac CONSUMER-CONTRACT §8/§9 据此列禁实现（「前端侧名称，无后端符号」）。该判定系**全名搜索对池化碎片存储的假阴性**（与 load_runtime_display_snapshot 同一盲区，Oct 6 池化命名轮已确立池化机制：≥16B 命令名拆 first16+last16 窗口常量驻 .rdata，全名连续字节在 dispatcher 比较路径不存在——但本命令的 glue 引用的是**独立全名串** 0x141a2bba4，与 dispatcher 池化窗并存，见 §1）。Oct 6 复核已现场呈报三重实证但无 SoT 登记；本轮独立重证后撤销禁实现。

## 1. 注册链（本轮 live 独立复验）

1. **池化双窗**：`graceful_restart`@0x141A22C00（first16，live 读 32B：`677261636566756c5f72657374617274` + 次池串 `e_installability`）与 `start_for_update`@0x141A22BF0（last16，紧邻 first16 之前，live 读 32B：`73746172745f666f725f757064617465` + `graceful_restart`——典型 rustc 池化布局，27B 名 = first16+last16 窗口）。
2. **双窗 xref（唯一）**：两窗各恰 1 处 data xref，均落 dispatcher `tauri_invoke_command_dispatcher`@0x1405fbca0（28374B）内 0x1405fcd97 / 0x1405fcd9f 两比较点——分派器碎片比较链命中。
3. **arm call**：dispatcher → call `graceful_restart_for_update`@0x140600cb6（code xref 实测）。
4. **.rdata 注册表项**：0x141ea82e8 含 glue RVA 0x005f27c0（live 读字节 `c0 27 5f 00`；同项含 0x1405F2887/0x1405F289B 内部入口，格式与 Oct 6 先例 0x141ea6c70 同构）。
5. **全名串唯一 xref**：`graceful_restart_for_update`（27B）@0x141a2bba4，全二进制 find_regex "graceful" 仅 2 命中（本串 + codex-process-lifecycle 日志串），唯一 xref 落 glue 0x1405f2839——**名字与 glue 一一绑定，无第二消费点**（即无 actor 侧二次名匹配；见 §2 架构判定）。

## 2. glue full-chain（glue 0x1405F27C0，586B，伪代码 ida/pseudocode/glue_graceful_restart_for_update.c）

结构（disasm 109 指令逐条核验）：

1. `memcpy` 520B（invoke env part1）+ 400B（part2/InvokeResolver）+ captures Vec 头（a1+0x398/+0x3A8）。
2. 构造请求 `{name="graceful_restart_for_update"(27), key="app"(3), env, captures}` → `sub_1406440D0(&out, req)`。
3. **架构判定（纠正 Oct 6「薄壳 manager-request 发往 app actor」表述）**：sub_1406440D0（206B，~100 命令 glue 共用）= **tauri state 提取原语**（`StateManager::try_get` 等价）——请求携带 (命令名, state key)，"app" 是 **AppHandle 的 state 注册键**而非 actor 名。mac 侧同构铁证：mac `clean` 命令 wrapper（0x1006349d0）以同一模式传 {name="clean"(5), key="repo"(4)} 并直接调 `tauri::state::StateManager::try_get`；mac 本命令 wrapper（0x100638510）调 `<AppHandle as CommandArg>::from_command`。sub_1406440D0 内部经 sub_1401881D0 克隆 env（Arc 引用计数 +136/+152/+176/+312..+344 字段）后取 env+176 的 152B state 句柄返回。
4. `cmp [out], -1`：≠-1（AppHandle 解析成功，常态）→ 拷 152B → `sub_140724350(req, handle)` → **sub_1406320F0(handle) = tauri AppHandle 重启机制**；==-1（app state 缺失）→ 走标准 responder `sub_140B39980` 错误应答（fall-through 路径，与 focus_main_window 0x1405f9600 对照同构——后者同骨架但实现段为窗口聚焦 sub_1404BA0C0 且正常返回）。
5. **发散证实**：`call sub_140724350` 后紧跟 `ud2`@0x1405f2a08——编译器证明该 callee 不返回（Rust `-> !`）。**win 侧该命令重启路径永不返回、前端 invoke 永无 IPC 响应**（进程退出先于应答）。
6. 尾部清理（仅 fall-through 路径可达）：captures Vec<96B> 逐项 drop（sub_1401AFF50×N + sub_140001660 dealloc）+ env drop（sub_1405251E0）。

## 3. semantic implementation leaf（重启具体流程）

`sub_140724350`（33B thunk，全二进制唯一 caller=本 glue；data ref 0x141ef0d0c/0x1422aabb8 为 vtable 槽）→ `sub_1406320F0`（922B，tauri-2.10.3 app.rs，win 侧 request_restart+restart 内联合一，发散）：

1. handle+144 → restart 状态结构 v4；**restart flag CAS**（v4+16：0→1；已为 1 → `sub_141969A30` = _mm_pause 自旋 + `WaitOnAddress(flag,&2,1,INFINITE)` 循环——重启已在途则阻塞等待进程退出）。
2. v4+17 terminating flag 已置位 → panic `called Result::unwrap() on an Err value`（app 已在退出中）。
3. 主/非主线程分叉（off_142240260 运行态全局）：主线程 → trace log（log level≥4）`restart triggered on the main thread`（module `tauri::app`）+ `WakeByAddressSingle(flag)`；非主线程 → expect panic 消息 `restart triggered from a separate thread`（app.rs:97 panic 位置串实证）+ crossbeam-channel-0.5.15 list.rs panic 面相邻（0x141c48da8，重启请求经 crossbeam/PostMessageW 投递主线程——sub_140635FB0，742B，PostMessageW + crossbeam 队列自旋锁）。
4. exit-requested 置位：`*(*(handle+136)+5312) = 1`（app 状态结构 +5312）。
5. 事件投递 `sub_140635FB0(out, handle, tag=29)`（tao 事件循环消息；失败 0xFF → `while(1) park` 无限等待）。
6. 收尾：`cleanup_before_exit`（sub_140632920）+ `Manager::env`（sub_14064C090，取原 argv/env）+ **`tauri::process::restart`（sub_141472630，727B，tauri-2.10.3 src\process.rs:101）**：
   - `current_exe()` 解析当前可执行路径 → 以**原 argv** 构造 `std::process::Command` → `spawn()`（经 std 库 sub_1416B4650 → `CreateProcessW`@import 0x14196d1b8）→ `CloseHandle` 子进程句柄 → `std::process::exit(0)`。
   - **先 spawn 新进程、后退旧进程**（无 launcher/退出码协议）；spawn 失败 → panic `failed to restart app: `（process.rs:101）。
   - ⚠ **无数据落盘**：本命令链全程仅内存状态位/事件投递/进程 spawn，无任何文件写。更新制品的就位由上游更新流程负责（本命令不感知更新内容，见 §5 边界）。

## 4. DTO 字段级

- **输入：零参数**。前端 CCF（frontend-control-flow.jsonl）：`graceful_restart_for_update`，argKeys=[]，trigger=g.useCallback（guard `if (x)`），assets/index-CCfI07iB.js L225——与 glue 零用户参数分析互证（glue 不解析 body）。
- **输出：无成功响应（win）**。重启路径发散（ud2），responder 永不触发——前端 invoke 挂起直至进程退出/页面销毁；命令 Rust 返回类型为 unit（无载荷）。fall-through 错误路径经 sub_140B39980（`InvokeResolver::respond`：`resolver consumed` 双重应答 panic 守卫 + vtable responder 调用 + WakeByAddressSingle）以 tauri 标准错误 envelope 应答（AppHandle state 缺失时）。
- **对照（mac，只读）**：mac wrapper 0x100638510 成功路径 = `request_restart`（返回）→ drop AppHandle → `InvokeResolver::respond`（tag 6 = unit/Ok）——**mac 有 IPC 响应（null），win 无**，平台分叉如实记录（见 §8）。

## 5. 错误面与副作用

- **错误面（win）**：①app state 缺失 → tauri 标准 error envelope（responder 应答）；②已在退出中 → panic `Result::unwrap() Err`；③重启请求投递失败 → expect panic `restart triggered from a separate thread` / park forever；④spawn 失败 → panic `failed to restart app: `（process.rs:101）。②③④均为库级 panic（进程崩溃路径），非可捕获 IPC 错误。
- **副作用：⚠ 进程管理类破坏性——App 进程退出 + 重新拉起（spawn current_exe + exit(0)）**。无文件写、无配置变更、无凭据接触。幂等性：restart flag CAS 保证重复调用挂起等待而非双重启。
- **边界（如实）**：命令名含 "for_update" 但**命令体零更新逻辑**——更新制品下载/就位（exe 替换）属上游更新流程（platform::update 模块 `check_update_installability`@mac 0x1003dd170 / win glue 0x1405f2320 及前端更新 UI），不在本命令链内；本命令仅负责"以当前 exe 路径重启"。**消费侧实现提示**：win 上新 exe 就位依赖更新流程先行完成（Windows 运行中 exe 文件锁定，更新器须以重命名/替换策略就位后本命令才重启到新版本——该就位策略属更新流程证据，本 leaf 不下结论）。

## 6. dim1-5 完成度

- dim1 PASS：注册链三重（双窗比较点+arm call+注册表项）live 复验；前端 CCF argKeys=[] 在案。
- dim2 PASS：glue+全链 8 函数 live decompile 0 截断 0 空桩（ida/pseudocode/ 8 份，全部 "}" 收尾）。
- dim3 PASS：dispatcher→glue→state 提取→重启机制→process::restart→CreateProcessW 全链闭合（call-tree.json）。
- dim4 PASS：DTO 字段级 = 零参输入 + unit 输出 + 错误面 4 类 + responder 应答语义（win 无响应/mac unit 分叉）。
- dim5 PASS：win 侧发散（ud2）/mac 侧非发散（request_restart 返回+应答）平台分叉如实记录，互不外推。
- dim6 BLANK：实现侧验收，留白。

## 7. 模块归属与 IDB 归位（红线24，已完成标注写）

- **归属证据（推断级，如实标注）**：函数体为纯 tauri AppHandle 调用，无 panic 面/无模块特有串，内容级不可归属。采用注册序邻接证据：mac 名字表（0x1018c0328）中紧随 `restart_codex`（mac 符号 `codexmate_lib::commands::system::restart_codex`）与 `run_daemon_once`（`commands::system::run_daemon_once`）之后、`check_update_installability`（`platform::update`）之前；与 restart_codex 同为进程重启族 → **commands/system**。mac wrapper 本体（run::{{closure}}::{{closure}}）为 lib.rs 内联闭包，不提供模块面。
- **IDB 写（授权四类内，全部原生 IDAPython）**：0x1405F27C0 重复注释更新（纠正 Oct 6 manager-request 表述 + full-chain + ⚠破坏性标记）+ dirtree move `/codexmate_lib/commands/` → `/codexmate_lib/commands/system/`（rc=0）；callee 定性注释 4 份（sub_140724350 重启 thunk / sub_1406320F0 tauri AppHandle 重启机制 / sub_141472630 tauri::process::restart / sub_1406440D0 追加 state 提取原语澄清，不覆盖原归属注释）；db_save ok=true。readback：5/5 注释 head/tail 对、abspath 对、旧路径失效、/vibe/ 零残留、真名保持。库函数（tauri 内部）按惯例留根不归树。

## 8. mac 侧对照（只读核验，推翻「mac 零符号」）

- **mac 已注册**：名字表串 0x1018c0328（`clean`+`get_claude_web_search_compat`+...+`restart_codex`+**`graceful_restart_for_update`**+`check_update_installability`+...，串内偏移 301=0x1018c0455）——该串唯一 xref 落 tauri invoke_handler 装配闭包；`0x1018c0455` 两 xref：dispatcher `codexmate_lib::run::{{closure}}`@0x1006119c0（38460B，比较点 0x100615586）+ wrapper `run::{{closure}}::{{closure}}`@0x100638510（546B）。
- **mac wrapper 全解**（0x100638510 decompile）：`<AppHandle as CommandArg>::from_command`（0x100712c60）→ 错误变体（tag 3）→ `InvokeResolver::return_result`（错误应答）；成功 → 拷 152B AppHandle → **`AppHandle::request_restart`@0x1006e9010**（172B：`*(app+5192)=1` 置 restart flag + `tao::platform_impl::platform::event_loop::Proxy::send_event(EventLoopMessage(31))`；send 成功**返回**；send 失败 → `cleanup_before_exit` + `Manager::env` + `tauri::process::restart`@0x101408100 直接重启）→ drop AppHandle → `InvokeResolver::respond`（tag 6=unit）。
- **mac relaunch 执行体**（`tauri::process::restart`@0x101408100 decompile）：current_exe → mac bundle 路径解析（parent==MacOS && 上级有 Info.plist → 读 `CFBundleExecutable` → `Command::new(parent/CFBundleExecutable)`) → `.args(原 argv)` → `Command::spawn` → 失败仅 log（tauri::process，error 级）→ `std::process::exit(0)`；非 bundle 回退 current_exe 直启。
- **平台分叉（dim5 终判）**：①IPC 响应——win 无（发散 ud2）/mac 有（respond unit）；②触发 API——win 调发散重启（request_restart+restart 内联合一）/mac 调非发散 request_restart（主循环异步完成退出重启）；③spawn 失败处理——win panic / mac log+exit(0)；④flag 偏移与事件 tag——win +5312/29、mac +5192/31（结构布局差）。两平台语义同向：均为「置 restart flag → 通知主循环 → 进程退出 → spawn 当前 exe 路径重启」。
- mac 侧仅只读核验（零 IDB 写）；mac 侧完整 leaf 非本轮 scope，mac 消费侧如需逐字段实现按本节地址自行补证。

## 9. 残留 Unknown（如实）

- win sub_140635FB0（事件投递，742B）为 crossbeam-channel/tao 内部队列机制，本轮只定性到「PostMessageW + crossbeam 队列 + tag 29」层级，未逐行展开（库内部，不阻塞合同级语义）。
- win `cleanup_before_exit`（sub_140632920）与 `Manager::env`（sub_14064C090）未单独下钻（tauri 库内部，语义由 mac 符号对照闭合）。
- off_142240260 运行态全局的具体字段语义（主线程判定位）未逐位解（库内部）。
- 更新制品就位（exe 替换）策略不在本命令链内，未逆（属 platform::update 流程证据）。
- 以上均为库内部/邻接流程细节，无 accepted_unknown 声明（命令面语义已闭合；假墙排除义务不适用于已闭合面）。
