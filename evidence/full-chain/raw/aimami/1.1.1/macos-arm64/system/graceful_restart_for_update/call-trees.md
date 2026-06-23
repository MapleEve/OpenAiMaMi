# graceful_restart_for_update — Call Tree (AiMaMi 1.1.1 macOS arm64)

## 调用链深度分析

```
[IPC dispatcher] run::closure::closure @ 0x100319bf0
  └─ graceful_restart_for_update @ 0x10061b740          [owner, depth=0]
       │
       ├─ std::env::current_exe @ 0x100f28a80            [depth=1] stdlib leaf
       │
       ├─ std::path::Path::parent @ 0x100f33d60          [depth=1] ×3 calls, stdlib leaf
       │
       ├─ alloc::string::String::from_utf8_lossy         [depth=1]
       │    @ 0x100f65430                                stdlib leaf
       │
       ├─ alloc::fmt::format::format_inner               [depth=1]
       │    @ 0x100f63980
       │    └─ template @ 0x1010B7F1D: `sleep 1 && open "{}"` [terminated: data leaf]
       │
       ├─ std::sys::process::unix::common::Command::new  [depth=1]
       │    @ 0x100f31ac0                                arg="sh", len=2
       │
       ├─ std::sys::process::unix::common::Command::arg  [depth=1]
       │    @ 0x100f31920                                ×2 calls: "-c", shell_arg
       │
       ├─ std::process::Command::spawn                   [depth=1]
       │    @ 0x100f360d0
       │    └─ [posix_spawn / fork+exec; inherits fds]  [terminated: OS syscall]
       │
       ├─ close$NOCANCEL @ 0x100fbce72                   [depth=1] ×3 (stdout/stdin/stderr)
       │    └─ [terminated: macOS syscall]
       │
       ├─ tauri::app::AppHandle::exit @ 0x100348a50      [depth=1]
       │    ├─ tao::platform_impl::event_loop::Proxy::send_event  [depth=2]
       │    │    @ 0x10044f250                           (attempt graceful event-loop exit)
       │    ├─ tauri::app::AppHandle::cleanup_before_exit [depth=2]
       │    │    @ 0x100348150
       │    │    ├─ Mutex::lock (plugin store) @ 0x100f2e7a0    [depth=3]
       │    │    ├─ std::panicking::panic_count::GLOBAL_PANIC_COUNT [depth=3] noise, filter
       │    │    ├─ std::panicking::panic_count::is_zero_slow_path [depth=3] noise, filter
       │    │    ├─ tauri::resources::ResourceTable::clear [depth=3]  ×multiple windows/webviews
       │    │    ├─ tauri::manager::AppManager::windows   [depth=3]
       │    │    ├─ tauri::manager::AppManager::webviews  [depth=3]
       │    │    ├─ core::ptr::drop_in_place<Window>      [depth=3]
       │    │    ├─ core::ptr::drop_in_place<Webview>     [depth=3]
       │    │    └─ Mutex::unlock @ 0x100f2e7c0           [depth=3]
       │    └─ std::process::exit @ 0x100f35fc0          [depth=2] OS-level process termination
       │
       ├─ core::ptr::drop_in_place<Command> @ 0x100632450 [depth=1] error paths
       └─ core::ptr::drop_in_place<AppHandle> @ 0x1006326c0 [depth=1] LABEL_20 cleanup
```

## Callee 分类表

| Callee | VA | 分类 | delta相关性 |
|---|---|---|---|
| `std::env::current_exe` | 0x100f28a80 | stdlib | 新路径逻辑 |
| `std::path::Path::parent` | 0x100f33d60 | stdlib | 新路径逻辑 |
| `String::from_utf8_lossy` | 0x100f65430 | stdlib | 新 |
| `format_inner` | 0x100f63980 | stdlib | 新 shell 模板 |
| `Command::new` | 0x100f31ac0 | stdlib | 新副作用：shell spawn |
| `Command::arg` | 0x100f31920 | stdlib | 新副作用 |
| `Command::spawn` | 0x100f360d0 | stdlib | **关键副作用**：fork+exec |
| `close$NOCANCEL` | 0x100fbce72 | syscall | fd 关闭 |
| `AppHandle::exit` | 0x100348a50 | tauri | **关键副作用**：进程退出 |
| `cleanup_before_exit` | 0x100348150 | tauri | ResourceTable 清理 |
| `std::process::exit` | 0x100f35fc0 | stdlib | OS 退出 |
| `panic_count::GLOBAL_PANIC_COUNT` | — | noise | 过滤 |
| `is_zero_slow_path` | 0x100fb7400 | noise | 过滤 |
| `__rust_alloc/__rust_dealloc` | 0x1000014b0/c0 | noise | 过滤 |
| `unwrap_failed` | 0x100fbc780 | noise | 过滤 |

## 终止原因（terminated_reason）

所有叶节点均终止于：
- stdlib leaf（current_exe, parent, from_utf8_lossy）
- OS syscall（posix_spawn via Command::spawn, close$NOCANCEL, std::process::exit）
- Tauri framework internal（ResourceTable::clear, drop_in_place）

深度达到5层（cleanup_before_exit → Mutex::lock/unlock/ResourceTable::clear）
