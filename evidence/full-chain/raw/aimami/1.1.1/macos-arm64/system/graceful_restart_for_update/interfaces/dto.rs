// IPC Interface — graceful_restart_for_update
// Module: codexmate_lib::commands::system
// VA: 0x10061b740 (AiMaMi 1.1.1 macOS arm64)
// Session: <审计会话>
//
// IPC 命令名: "graceful_restart_for_update"
// 字符串地址: 0x101147ff5
// 注册点: run::closure::closure @ 0x100319bf0

/// 入参: 无显式 JSON payload。所有路径由 std::env::current_exe() 自推断。
/// AppHandle 由 Tauri runtime 注入（非前端传入）。
pub struct GracefulRestartForUpdateInput;
// { /* no fields */ }

/// 出参: Tauri InvokeResolver 通过 result_slot 返回 Ok(()) 或 Err(String)
pub type GracefulRestartForUpdateOutput = Result<(), String>;

/// 错误变体:
/// 1. current_exe() 失败 → io::Error.to_string()
/// 2. Path::parent() x3 链路任一返回 None → "cannot resolve app bundle path"
/// 3. Command::spawn() 失败 → io::Error.to_string()
///
/// Ok 路径: 0x8000000000000000 sentinel 写入 result_slot
///           此时当前进程已调用 AppHandle::exit(0) 即将终止，
///           前端 **永远不会收到** Ok 响应。
///
/// 副作用 (spawn 成功时):
///   1. posix_spawnp: `sh -c 'sleep 1 && open "<bundle_root>"'`
///      - 子进程 detached，1 秒后重新打开 .app bundle
///   2. close(stderr_fd), close(stdout_fd), close(stdin_fd) — 关闭继承的 fd
///   3. AppHandle::exit(0):
///      a. cleanup_before_exit: ResourceTable::clear, drop Window/Webview handles
///      b. std::process::exit(0): libc exit syscall, 当前进程终止
///
/// 安全备注:
///   - 无运行时权限校验 (auth guard absent in command body)
///   - 任何能调用此 IPC 的前端代码均可触发强制应用重启
///   - bundle 路径由 current_exe + parent×3 推断，不接受前端输入（无路径注入风险）
