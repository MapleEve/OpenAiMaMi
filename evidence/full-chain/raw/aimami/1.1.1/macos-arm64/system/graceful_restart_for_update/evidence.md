# evidence.md — graceful_restart_for_update (AiMaMi 1.1.1 macOS arm64)

## Gate 档

| 字段 | 值 |
|---|---|
| session | wf-aimami111-delta-20260617-sweep |
| machine | <本地机器> |
| role | producer |
| delta_class | integrity_recovered |
| date | 2026-06-17 |
| IDB saved | ✅ `<来源位置>/raw/binary/AiMaMi-1.1.1-idb` |

## Delta 判定

### 相对 1.0.9 的变化

**结论：net-new command — 1.0.9 macOS system 模块无此函数**

1.0.9 macOS arm64 `system/` 目录仅含：
- `get_hotspot_enabled/`
- `hotspot_ready/`
- `set_hotspot_enabled/`

`graceful_restart_for_update` 在 1.0.9 中不存在（IDB 查询 `Not found`，1.0.9 证据目录无对应条目）。

### 新增内容（app 级 delta）

1. **新 IPC 命令**：`graceful_restart_for_update`（IPC 命令名字符串 @ `0x101147ff5`）
2. **新副作用：shell spawn**：`sh -c 'sleep 1 && open "<bundle_path>"'` — 衍生子进程重启应用
3. **新副作用：进程自终止**：spawn 成功后立即调用 `AppHandle::exit(0)` → `std::process::exit(0)`
4. **新路径解析逻辑**：`current_exe + parent×3` 定位 `.app` bundle 根
5. **新错误字符串**：`"cannot resolve app bundle path"`（静态分配 @ `0x10061b91c` 区域）

### 过滤掉的编译噪声（不计入 delta）

- `Mutex poison-guard` / `GLOBAL_PANIC_COUNT` / `is_zero_slow_path` — cleanup_before_exit 内部 Rust panic 防护机制
- `__rust_alloc` / `__rust_dealloc` 大小 — 内存分配尺寸随布局变化
- 寄存器/栈偏移 (`rbp-0x...`)
- anon hash 名（`anon_4ba9cf101fabd2ad...`）

## 三角验证

### 角度 1：函数符号枚举
- `func_query name_regex="graceful_restart"` → 命中 `__ZN13codexmate_lib8commands6system27graceful_restart_for_update17h0ac567eb0211cbe9E` @ `0x10061b740`，size=0x543
- 1.0.9 同查询 → Not found（via 1.0.9 证据目录结构核实）

### 角度 2：IPC 命令字符串
- 字符串 `"graceful_restart_for_update"` @ `0x101147ff5` 存在于 1.1.1 binary
- xref @ `0x10061b740` caller = `run::closure::closure` @ `0x100319bf0`（IPC 分发点）

### 角度 3：调用链 + 副作用
- `Command::spawn` + `close$NOCANCEL` + `AppHandle::exit(0)` = 完整的「spawn-then-die」模式
- shell 模板 `sleep 1 && open "..."` 明确意图：等待当前进程释放文件锁后重新打开应用

## DTO / Interface / Error

```rust
// IPC 无入参（从 AppHandle 自推断路径）
// 出参（通过 InvokeResolver::respond / return_result）:
enum Result {
    Ok(()),                                  // sentinel 0x8000000000000000
    Err(String),                             // io::Error 或 "cannot resolve app bundle path"
}

// 副作用：
// 1. fork+exec: `sh -c 'sleep 1 && open "<.app>"'`
// 2. close(stdout/stdin/stderr)
// 3. std::process::exit(0)
```

## 持久化 / HTTP / Sidecar 副作用

| 类型 | 内容 |
|---|---|
| 持久化 | 无（不读写文件） |
| HTTP | 无 |
| Sidecar | 无 |
| 进程副作用 | **有** — `posix_spawn`（子 shell）+ `exit(0)`（当前进程终止） |

## IDB 注释写入

已 `append_comments` 写入以下地址：
- `0x10061b740` (func scope): delta + 完整行为摘要
- `0x10061b9e7` (line): Command::new("sh")
- `0x10061b9ff` (line): arg("-c")
- `0x10061ba2c` (line): format_inner shell template
- `0x10061ba75` (line): Command::spawn
- `0x10061bbd8` (line): AppHandle::exit(0)

idb_save: OK @ 2026-06-17

---

## Confirmed

以下证据直接来自 逆向分析 反编译 + 符号表，无需推断：

1. **函数 VA 和大小**：`func_query name_regex="graceful_restart"` 命中 `0x10061b740`，size=0x543 (1347 bytes)，has_type=true
2. **IPC 字符串**：`"graceful_restart_for_update"` 静态字符串存在于 binary，xref 指向 `run::closure::closure` @ `0x100319bf0`（IPC 注册点）
3. **shell 模板字面量**：`0x1010B7F1D` 处存有 `sleep 1 && open "..."` 模板，在 `format_inner` 调用中作为 format 参数使用
4. **posix_spawnp 调用链**：`Command::spawn` → unix impl `0x100f2f620` → `_posix_spawnp` @ `0x100fbd166`（macOS 系统调用符号，直接可见）
5. **AppHandle::exit(0) 调用**：spawn 成功分支末尾直接 CALL `0x100348a50`，参数 `0x0`，已用 `append_comments` 标注
6. **3× close$NOCANCEL**：spawn OK 后立即对 3 个 fd（v47/v48/HIDWORD(v46)）分别调用 `close$NOCANCEL`，关闭继承自父进程的 stdio
7. **基本块数量**：`basic_blocks` 返回 56 个块，CFG 完整，无 indirect jump 未解析分支
8. **1.0.9 缺失确认**：`func_query` 在 1.0.9 IDB 中返回 `Not found`；1.0.9 raw/system/ 目录无 `graceful_restart*` 条目

---

## Inferred

以下结论由反编译结果 + 行为模式推断，置信度 ≥ 90%：

1. **"sh-c" 字面量含义**：`Command::new` 传入 `"sh-c"` len=2，依据 Rust stdlib `Command::new` 语义，len 参数取 argv[0] 前 N 字节，即实际 argv[0]="sh"；"-c" 为第一个 arg，模式与标准 shell 调用一致
2. **spawn 后进程不等待子进程**：代码直接 close fd + exit，无任何 waitpid/waitid 调用，推断子进程 detached（孤儿进程由 launchd 接管）
3. **bundle_root 路径计算逻辑**：`current_exe` 返回 `.../AiMaMi.app/Contents/MacOS/AiMaMi`，3× `Path::parent()` 去除最后 3 层得到 `.app` 目录，推断基于标准 macOS .app bundle 结构
4. **Ok(()) sentinel 含义**：成功分支写入 `0x8000000000000000` 到 result_slot[0]，与其他 system 命令成功返回模式一致（Tauri `InvokeResolver` Ok 编码），但因进程立即 exit，前端实际上永远等不到此响应
5. **无 auth guard 设计意图**：命令体内无 token/session 校验，推断设计上依赖 Tauri CSP 或 allowlist 限制前端调用权限（在 Tauri 配置层而非命令层做防护）
6. **`sleep 1` 时间设计**：1 秒延迟推断用于等待当前进程完成 exit 并释放文件句柄（如 SQLite WAL），再由 `open` 重新启动，是 self-update 场景常见模式

---

## Unknown

以下信息无法从当前 逆向分析 静态分析确认，需动态追踪或代码审查：

1. **Tauri allowlist 配置**：`tauri.conf.json` 中 `graceful_restart_for_update` 是否在 `allowlist` 内受限，或开放给所有 webview；静态分析无法读取运行时配置
2. **前端调用入口**：哪个 React 组件 / hook 触发 `invoke("graceful_restart_for_update")`；需查前端代码或 CCF 映射
3. **自动更新触发条件**：此命令是否由更新检查流程自动触发（如 check_update → download → graceful_restart），还是纯手动用户触发；需追踪 `check_update_installability` 调用链
4. **子进程 open 失败处理**：`sleep 1 && open "..."` 中若 `open` 失败（bundle 路径变化、权限问题），当前进程已 exit，无任何错误恢复机制；此行为是否为已知设计取舍
5. **Windows 对应实现**：1.1.1 win64 binary 中是否存在同名命令，实现是否有差异（win 无 `open`，可能用 `start` 或 `explorer`）；待 win IDB 验证
