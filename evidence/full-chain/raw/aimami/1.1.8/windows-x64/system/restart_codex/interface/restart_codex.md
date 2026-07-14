# interface — restart_codex (AiMaMi 1.1.8, windows-x64)

## 命令标识

- IPC 命令名: `restart_codex`（Tauri `#[command]`）。这是独立的顶层命令，不同于同 session 已完成的
  另一个组合命令 `confirm_pending_auto_switch_and_restart_codex`（两者共享"重启 Codex"这个动作语义，
  但在二进制里各自有独立的实现路径，不共享同一个 owner）。
- owner-map 记录的 owner_va: `0x14084a390`（`intermediate/aimami/1.1.8/windows-x64/version-delta/owner-map-118.jsonl`
  第 90 行，method=`app_paths_registry_string_xref+cross_version_Q8_pattern_match`）。
- 本轮确认：owner-map 记录的地址就是**真正的命令专属实现**（不像同 session 的
  `confirm_pending_auto_switch_and_restart_codex` 叶子那样，owner-map 指向共享 dispatcher 需要二次定位）——
  `0x14084a390` 是一个 7958 字节（332 basic blocks，cc=169）的独立大函数，本轮完整 decompile（0 截断），
  4 个调用点均为独立的 IPC-dispatch landing pad，与前端 2 个 wrapper 一致。
- 重命名（本轮 IDB 写回）: `sub_14084A390` → `restart_codex_owner_sys`。

## argKeys（Confirmed）

- `argKeys=[]`（零参命令），来源 `raw/aimami/1.1.8/windows-x64/frontend/ipc-contracts.jsonl` 第 82/120 行。
- 前端有 **2 个 wrapper** 都指向同一个命令名 `restart_codex`：
  - `restartCodex:()=>te("restart_codex")`（`assets/index-CX-I_QAq.js:86`）
  - `restartCodexApp:()=>St("restart_codex")`（`assets/index-CX-I_QAq.js:86`）
  两者 argKeys 均为 `[]`，与后端 4 个独立调用点数量吻合（同一命令名，多处前端触发点）。

## 行为（Confirmed，本轮完整 decompile 覆盖，0 截断）

`restart_codex_owner_sys` 是一个自包含的大函数，直接实现"定位 Codex.exe 路径 + 重启"整个流程，
不像 1.0.9 基线那样拆成"薄 wrapper + 独立 locator/quit 函数"的结构。5 阶段定位 + 1 阶段重启：

1. **阶段1（10 个路径候选）**：`%LOCALAPPDATA%`/`%PROGRAMFILES%`/`%PROGRAMFILES(X86)%` 分别拼接
   `Programs\Codex\Codex.exe`、`Codex\Codex.exe`、`Programs\OpenAI Codex\Codex.exe`、
   `Programs\OpenAI\Codex\Codex.exe`、`OpenAI Codex\Codex.exe`、`OpenAI\Codex\Codex.exe` 等 10 种组合，
   逐一 `fs::metadata`-style 探测是否存在。
2. **阶段2（注册表 App Paths）**：`reg query HKCU\SOFTWARE\Microsoft\Windows\CurrentVersion\App Paths\Codex.exe /ve`，
   HKLM 同路径重复一次（经共享 helper `restart_codex_spawn_capture_sys`@`0x141074BC0` spawn+捕获输出）。
3. **阶段3（注册表 Uninstall 扫描，经 PowerShell 脚本）**：`powershell -NoProfile -Command <script>`，脚本模板
   遍历 `HKCU\...\Uninstall`（以及 HKLM 同路径）子键，匹配 DisplayName ~ "Codex" 后读取 InstallLocation。
4. **阶段4/5（`where` 兜底）**：`where Codex.exe`，若仍未命中则 `where Codex`（不带 `.exe`）。
5. 若全部 5 个阶段均未命中：返回错误，discriminant tag=`7`，错误串 `"Codex.exe not found"`（19 字节）。
6. **定位成功后（重启阶段，本命令相对 1.0.9 基线的核心新增行为）**：
   - 先尝试 `restart_codex_launch_or_check_sys`@`0x141074B40`（同一底层 spawn 原语，参数标志位不同）；
   - 若返回值判定为"已在追踪/运行中"（disc==2 特殊分支），直接走 fallback 重启；否则进入最长 5 秒的轮询
     （`restart_codex_is_process_running_sys`@`0x140110240` 检测进程名 `"Codex"` 是否出现），命中则
     discriminant tag=`10`（成功，重启已确认），超时则同样落入 fallback 重启逻辑；
   - **fallback 重启（1.0.9 完全没有的新机制）**：构造带引号路径 + 空参数（字面量 `''`），
     spawn 第二个 PowerShell 调用 `powershell -NoProfile -WindowStyle Hidden -Command <relaunch-script>`
     （经同一个 `restart_codex_spawn_capture_sys` helper），实际拉起 Codex.exe 新进程；若该次 spawn
     返回值判定为"空输出"（视为成功信号），discriminant tag=`9` 并直接返回；否则再次进入
     `restart_codex_is_process_running_sys` 轮询确认，命中后同样归并到 disc=`10`。

## 副作用（Confirmed / Inferred / Unknown 混合，见标注）

1. **Confirmed**：最多 3 次外部进程 spawn 用于定位（`reg query` x2、`where` x2、Uninstall 扫描用的
   `powershell` x2），全部经 `restart_codex_spawn_capture_sys`@`0x141074BC0`（同步 spawn + `WaitForSingleObject`
   INFINITE 等待 + `GetExitCodeProcess` 读退出码 + 捕获 stdout）。
2. **Confirmed（本命令相对 1.0.9 基线的核心 delta）**：定位成功后，额外 spawn 一个
   `powershell -NoProfile -WindowStyle Hidden -Command <relaunch-script>` 隐藏窗口进程来**实际重新拉起 Codex.exe**——
   这是 1.0.9 基线完全没有的行为（1.0.9 的 `restart_codex` 只退出旧进程 + 定位路径，从不自己重启）。
3. **Confirmed**：通过 `CreateToolhelp32Snapshot`+`Process32FirstW`/`Process32NextW` 枚举系统进程列表，
   大小写不敏感匹配进程名 `"Codex"`，用于确认重启后进程已出现（最长轮询 5 秒一个деadline）。
4. **Unknown（未闭合）**：discriminant tag `9` 与 `10` 的确切语义差异（例如"已发起重启但未确认运行"
   vs "已确认运行"）——两个 tag 均在 decompile 结果中观察到明确的赋值语句，但未对下游消费者
   （前端/IPC resolver）如何区分处理这两个 tag 做进一步 `type_query`/consumer 级别核实。
5. **Unknown（未闭合）**：1.0.9 基线的"退出旧进程"阶段用 `signal_codex_quit_wake` + `quit_codex_wait_fallback_kill_sys`
   （8 秒等待后 `taskkill.exe` 兜底强杀），本轮完整 decompile 的 `restart_codex_owner_sys` 主体中**未观察到**
   与这两个符号名对应的明显调用形状或字面量——不排除退出逻辑被内联进本轮未继续深挖的其它分支，或确实被
   替换为"仅探测→重启"策略（不主动退出旧进程，只是等它自然结束/或干脆假设未运行）。未断言"已移除"，
   记为 Unknown。
6. **持久化面**：本轮解析路径中未观察到 `fs::write`/`rusqlite` 写入调用，不声明 `persistence_commit`。

## 与 1.0.9 基线的接口/行为差异（核心变更点）

- **1.0.9 windows 基线**（`internal-reverse/aimami/1.0.9/windows-x64/restart_codex_cmd_wrapper/DISTILLED.md`，
  owner_va=`0x14026f140`，size=547B）：**薄 wrapper** 结构——`restart_codex_cmd_wrapper_sys` → 异步 wrapper
  → `signal_codex_quit_wake`+`quit_codex_wait_fallback_kill_sys`（退出旧进程，8 秒等待+`taskkill`兜底）→
  `check_update_installability_core_sys`（6 阶段纯定位，从不重启）。**该版本只退出+定位，不重启。**
- **1.1.8 windows 侧**：`restart_codex_owner_sys`（`0x14084a390`，7958B，非薄 wrapper，退出/定位/重启逻辑
  合并进同一个大函数体）保留了同款 App-Paths/Uninstall 注册表定位字符串（字节级一致，定位逻辑血缘延续），
  但**新增了一整段"定位成功后主动重启"的逻辑**（隐藏窗口 PowerShell spawn + 进程存在性轮询确认）——
  这是比"改个超时数字"更深的**行为级新增**（新副作用：额外一次外部进程创建），而非单纯的 VA 漂移。
  与本 session 更早独立完成的 mac 侧同名命令发现（mac-shard-1 sub-entry）及 win 侧
  `confirm_pending_auto_switch_and_restart_codex`/`fix_codex_router_issue`/`set_codex_router_enabled`
  等多处独立确认的"重启机制被改写"这一跨命令一致的模式相印证（均在 REVERSE-STATUS.md 中记录为
  独立交叉确认的同一类 delta，但本命令的具体新增内容——"主动 spawn 隐藏 PowerShell 重新拉起"——
  是本命令独有的实现细节，其它命令各自的重启触发方式/超时数值不同）。

## 与 IDB 内其它命令共享的底层调用链

- `restart_codex_spawn_capture_sys`@`0x141074BC0`、`restart_codex_launch_or_check_sys`@`0x141074B40`、
  `restart_codex_is_process_running_sys`@`0x140110240`、`restart_codex_cmd_spawn_raw_sys`@`0x141069E60`
  均为**共享基础设施**，被本二进制内其它多个命令（含 `force_kill_codex`、`check_update_installability`
  等）复用，不是 `restart_codex` 专属逻辑；本轮对它们的重命名/描述仅服务于本叶子的可读性，
  不代表将其归属判定为专属于本命令（详见 gate-report.json `inline_writeback` 字段的共享基础设施注记）。
