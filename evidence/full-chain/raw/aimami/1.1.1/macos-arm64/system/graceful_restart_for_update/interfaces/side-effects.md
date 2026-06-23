# Side Effects — graceful_restart_for_update (AiMaMi 1.1.1 macOS arm64)

## spawn 成功路径副作用（按执行顺序）

| 序 | 类型 | 描述 | VA |
|---|---|---|---|
| 1 | process_spawn | `posix_spawnp("sh", ["-c", "sleep 1 && open \"<bundle_root>\""])` | 0x100fbd166 (syscall) |
| 2 | fd_close | `close(stderr_fd)` if fd != -1 | 0x100fbce72 |
| 3 | fd_close | `close(stdout_fd)` if fd != -1 | 0x100fbce72 |
| 4 | fd_close | `close(stdin_fd)` if fd != -1 | 0x100fbce72 |
| 5 | drop | `drop_in_place<Command>` — frees Command heap allocations | 0x100632450 |
| 6 | tauri_exit | `AppHandle::exit(0)` — cleanup_before_exit + std::process::exit(0) | 0x100348a50 |

## spawn 失败路径副作用

| 序 | 类型 | 描述 |
|---|---|---|
| 1 | drop | `drop_in_place<Command>` |
| 2 | heap_free | bundle_path_str (if allocated) |
| 3 | heap_free | exe_path (if allocated) |
| — | return | Err(io::Error.to_string()) written to result_slot |

## 无副作用项目

| 类型 | 状态 |
|---|---|
| 文件系统读写 | 无 |
| HTTP / 网络 | 无 |
| Sidecar Codex | 无 |
| DB / SQLite | 无 |
| 注册表 / plist | 无 |
| 持久化配置 | 无 |

## shell 命令模板

```
sleep 1 && open "<bundle_root>"
```

- 模板地址: `0x1010B7F1D`
- `sleep 1`: 等待当前进程释放文件句柄 / Tauri 资源
- `open "<bundle_root>"`: macOS `open` 命令重新启动 .app bundle
- bundle_root 由 `current_exe() + parent×3` 推断（不可外部注入）

## 进程生命周期影响

spawn 成功后，当前进程进入终止序列：
1. `cleanup_before_exit`: 清除所有 Window / Webview 资源句柄
2. `ResourceTable::clear`: drop Arc refs
3. `std::process::exit(0)`: libc exit，进程立即终止
4. 子 shell 进程在 ~1s 后执行 `open` 重启 app
