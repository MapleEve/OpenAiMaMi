# graceful_restart_for_update — AiMaMi 1.1.1 macOS arm64

## 基本信息

| 字段 | 值 |
|---|---|
| VA | `0x10061b740` |
| 函数大小 | 0x543 bytes |
| 模块 | `codexmate_lib::commands::system` |
| mangled | `__ZN13codexmate_lib8commands6system27graceful_restart_for_update17h0ac567eb0211cbe9E` |
| IPC 命令名 | `graceful_restart_for_update`（字符串 @ `0x101147ff5`） |
| 签名 | `fn(a1: *mut ResultSlot, a2: AppHandle) -> *mut ResultSlot` |
| delta_class | `integrity_recovered` |
| 基线对比 | 1.0.9 macOS system 模块无此命令（基线只有 get_hotspot_enabled / hotspot_ready / set_hotspot_enabled） |

---

## 伪代码（标注版）

```c
// IPC 入口：由 run::closure::closure 在收到 "graceful_restart_for_update" 调用时派发
size_t **graceful_restart_for_update(size_t **result_slot, AppHandle app_handle) {

    // Step 1: 获取当前可执行文件路径
    PathBuf exe_path = std::env::current_exe();   // @0x10061b75e
    if exe_path.is_err() {
        // 路径获取失败 → 格式化 io::Error 写入 result_slot，返回 Err
        format_display_err(&exe_path_err, &formatter);   // @0x10061b7c8
        // Err 路径释放，goto LABEL_20
        return result_slot;  // Err(io::Error)
    }

    // Step 2: 向上三层取 .app bundle 根目录
    // exe = .../AiMaMi.app/Contents/MacOS/AiMaMi
    // parent() x1 → .../AiMaMi.app/Contents/MacOS
    // parent() x2 → .../AiMaMi.app/Contents
    // parent() x3 → .../AiMaMi.app  ← bundle_root
    Option<&Path> p1 = Path::parent(exe_path);   // @0x10061b864
    Option<&Path> p2 = p1.and_then(Path::parent); // @0x10061b88c
    Option<&Path> bundle_root = p2.and_then(Path::parent); // @0x10061b88c

    if bundle_root.is_none() {
        // 路径解析失败 → 静态字符串错误 "cannot resolve app bundle path"
        alloc("cannot resolve app bundle path", 30);  // @0x10061b91c
        *result_slot = (30, ptr, 30);  // Err("cannot resolve app bundle path")
        // 释放 exe_path，返回
        return result_slot;
    }

    // Step 3: Path → String（lossy UTF-8）
    String bundle_path_str = String::from_utf8_lossy(bundle_root); // @0x10061b898

    // Step 4: 构造 shell 命令
    // 格式模板 @ 0x1010B7F1D: `sleep 1 && open "{}"`
    // 实例化: `sleep 1 && open "/Applications/AiMaMi.app"`
    Command cmd = Command::new("sh", 2);          // @0x10061b9e7  sh-c → "sh" len=2
    cmd.arg("-c", 2);                             // @0x10061b9ff
    String shell_arg = format!("sleep 1 && open \"{}\"", bundle_path_str); // @0x10061ba2c
    cmd.arg(shell_arg);                           // @0x10061ba49

    // Step 5: spawn 子进程（detached shell，1 秒后重启 .app）
    Result<Child, io::Error> child = Command::spawn(&cmd); // @0x10061ba75

    if child.is_err() {
        // spawn 失败 → 格式化 io::Error，写入 result_slot，drop Command
        // 释放 bundle_path_str, exe_path
        drop(Command);
        return result_slot;  // Err(io::Error)
    }

    // Step 6: spawn 成功 → 关闭继承的 fd，退出当前进程
    // child.v47 = stdout fd，v48 = stdin fd，HIDWORD(v46) = stderr fd
    if (stderr_fd != -1) close(stderr_fd);   // @0x10061bba8  close$NOCANCEL
    if (stdout_fd != -1) close(stdout_fd);   // @0x10061bbb6
    if (stdin_fd  != -1) close(stdin_fd);    // @0x10061bbc2
    drop(Command);                            // @0x10061bbce
    AppHandle::exit(app_handle, 0);           // @0x10061bbd8  → cleanup_before_exit + std::process::exit(0)

    // LABEL_20: 释放 AppHandle drop
    drop_in_place<AppHandle>(app_handle);    // @0x10061b947
    return result_slot;                       // Ok(()) → 0x8000000000000000 sentinel
}
```

---

## Shell 命令模板

模板地址：`0x1010B7F1D`

字节序列（hex）：`11 73 6c 65 65 70 20 31 20 26 26 20 6f 70 65 6e 20 22 {arg} 22`

解码：长度前缀=17，字面量=`sleep 1 && open "`，参数=bundle_path_str，结尾=`"`

实例化结果：`sleep 1 && open "/Applications/AiMaMi.app"`（或实际安装路径）

---

## 入参 / 出参

| 项目 | 类型 | 说明 |
|---|---|---|
| 入参 a1 | `*mut ResultSlot` | IPC 结果槽，写回 Ok/Err |
| 入参 a2 | `AppHandle` (tauri) | 用于调用 exit(0) |
| 返回 Ok | sentinel `0x8000000000000000` | 子进程已 spawn，当前进程退出 |
| 返回 Err | `(ptr, len, cap)` string | io::Error 或 "cannot resolve app bundle path" |

---

## 错误路径

| 分支 | 错误内容 |
|---|---|
| current_exe() 失败 | `io::Error` display 字符串 |
| parent() x3 任一返回 None | 静态字符串 `"cannot resolve app bundle path"` |
| Command::spawn() 失败 | `io::Error` display 字符串 |
