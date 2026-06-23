# call-trees — switch_account_and_restart_codex (macOS arm64, AiMaMi 1.1.1)

session: wf-aimami111-delta-20260617-sweep
delta_class: integrity_recovered

---

## 完整调用树（深度 ≥ 5，叶子注 terminated_reason）

```
switch_account_and_restart_codex  [Tauri IPC command]
└── switch_account_and_restart_sync (0x100624e90, 0x989b)
    ├── capture_switch_rollback_state (0x100621bb0)  【1.1.1 NEW】
    │   ├── tauri::state::StateManager::try_get (0x1005052f0)  [leaf: stdlib]
    │   ├── std::sys::sync::once_box::OnceBox::initialize (0x100f7c920)  [leaf: stdlib]
    │   ├── std::sys::pal::unix::sync::mutex::Mutex::lock (0x100f2e7a0)  [leaf: stdlib]
    │   ├── std::sys::pal::unix::sync::mutex::Mutex::unlock (0x100f2e7c0)  [leaf: stdlib]
    │   └── [file read ops — std::fs::read paths]  [leaf: os]
    │
    ├── switch_account_sync (0x1006200f0, 0x36f)
    │   ├── tauri::state::StateManager::try_get (0x1005052f0)  [leaf: stdlib]
    │   ├── std::sys::pal::unix::sync::mutex::Mutex::lock (0x100f2e7a0)  [leaf: stdlib]
    │   ├── std::panicking::panic_count::GLOBAL_PANIC_COUNT  [leaf: noise — poison guard]
    │   ├── std::panicking::panic_count::is_zero_slow_path  [leaf: noise — poison guard]
    │   ├── Repository::switch_account (0x1004c0350)
    │   │   ├── std::sys::fs::metadata (0x100f2b980)  [leaf: os — check registry exists]
    │   │   ├── Repository::load_registry (0x1004bf8e0)
    │   │   │   └── [file read, serde deserialize]  [leaf: os/serde]
    │   │   ├── std::fs::copy (0x100f2aa10)  [leaf: os — auth file backup]
    │   │   ├── core::auth::current_timestamp (0x10053aeb0)  [leaf: internal util]
    │   │   ├── std::path::Path::_join (0x100f33a00)  [leaf: stdlib]
    │   │   ├── CodexPaths::ensure_directories (0x1005582b0)  [leaf: platform]
    │   │   ├── Repository::persist_registry (0x1004c3a00)
    │   │   │   └── [serde serialize + fs::write]  [leaf: os]
    │   │   ├── Repository::clear_auto_switch_transient_state (0x1004cfc50)  【1.1.1 NEW callee】
    │   │   │   └── [clear auto-switch pending state from repo]  [leaf: internal]
    │   │   ├── core::auth::load_auth_file (0x10053ac80)  [leaf: file read + parse]
    │   │   ├── core::auth::make_auth_snapshot (0x10053b9f0)  [leaf: internal]
    │   │   ├── core::quota_store::load_or_default (0x100534df0)  [leaf: file read]
    │   │   ├── core::quota_store::find_item (0x100535530)  [leaf: internal]
    │   │   ├── Repository::make_account_summary_from_item (0x1004cefd0)  [leaf: internal]
    │   │   └── CoreEnvelope::ok_with_warnings (0x1005547f0)
    │   │       └── [wraps SwitchPayload + WARNING: CLIENT_RESTART_RECOMMENDED]  [leaf: internal]
    │   └── std::sys::pal::unix::sync::mutex::Mutex::unlock (0x100f2e7c0)  [leaf: stdlib]
    │
    ├── FileRestoreState::restore (0x10061fd20)  【1.1.1 NEW — called up to 4x on failure】
    │   ├── std::sys::fs::remove_file (0x100f2a550)  [leaf: os — delete-flag path]
    │   ├── std::path::Path::parent (0x100f33d60)  [leaf: stdlib]
    │   ├── std::fs::DirBuilder::_create (0x100f24d00)  [leaf: os — mkdir -p]
    │   └── std::fs::write::inner (0x100f25f70)  [leaf: os — restore original bytes]
    │
    ├── relaunch_codex_after_success (0x100621a40)  【1.1.1 NEW】
    │   ├── stop_codex_for_file_edit (0x10055c090)
    │   │   ├── platform::process::is_process_running (0x10055b8c0)  [leaf: os/pgrep]
    │   │   ├── platform::process::request_codex_app_quit (0x10055bc10)
    │   │   │   └── [osascript 'tell application "Codex" to quit']  [leaf: sidecar/osascript]
    │   │   ├── std::time::Instant::now (0x100f34d40)  [leaf: stdlib]
    │   │   ├── std::thread::sleep (0x100f35a00)  [leaf: stdlib — 50ms poll]
    │   │   └── platform::process::kill_codex_processes_until_clear (0x10055e390)
    │   │       └── [SIGKILL / pgrep+kill loop]  [leaf: os]
    │   └── launch_codex_app (0x10055afd0)
    │       ├── std::sys::process::unix::common::Command::new (0x100f31ac0)  [leaf: stdlib]
    │       ├── Command::arg ["-b", "Codex" bundle-id]  [leaf: stdlib]
    │       ├── std::process::Command::output (0x100f36130)  [leaf: os — `open -b Codex`]
    │       ├── platform::process::is_process_running (0x10055b8c0)  [leaf: os — poll 80ms/3s]
    │       ├── std::fs::metadata [/Applications/Codex.app check]  [leaf: os]
    │       ├── dirs::home_dir (0x100d4fc70)  [leaf: stdlib — fallback path]
    │       └── std::thread::sleep(80ms)  [leaf: stdlib]
    │
    ├── refresh_full_runtime_snapshot_with_source (0x100626f60)  【1.1.1 NEW】
    │   ├── tauri::state::StateManager::try_get  [leaf: stdlib]
    │   ├── commands::accounts::load_full_runtime_snapshot (0x100620b90)
    │   │   └── [query app state → AppStatusPayload]  [leaf: internal]
    │   └── commands::accounts::broadcast_runtime_snapshot (0x100620750)
    │       └── [tauri::app_handle emit to frontend]  [leaf: tauri event]
    │
    └── append_switch_warning (0x1006205f0)  【1.1.1 NEW — only on error paths】
        └── [push "RUNTIME_REFRESH_FAILED_AFTER_SWITCH" into result.warnings vec]  [leaf: alloc]
```

---

## 调用链路径汇总

| 路径 | 触发条件 | 结果 |
|------|----------|------|
| capture → switch → relaunch → refresh | 全成功 | Ok(SwitchPayload) |
| capture → switch FAIL → restore×4 → refresh | switch_account_sync 失败 | Err(join_warnings) |
| capture → switch OK → relaunch FAIL → restore×4 → relaunch retry → refresh | relaunch 失败 | Err(join_warnings) |
| capture FAIL (slot_count=0) | 无法建立回滚状态 | Err(early return) |

---

## 副作用列表

| 副作用 | 类型 | 新/旧 |
|--------|------|-------|
| fs::copy(auth_file → timestamped backup) | 磁盘写 | 旧 |
| Repository::persist_registry | 磁盘写 | 旧 |
| Repository::clear_auto_switch_transient_state | 磁盘写/状态清除 | **1.1.1 NEW** |
| capture_switch_rollback_state (读文件快照) | 磁盘读 | **1.1.1 NEW** |
| FileRestoreState::restore (回滚写) | 磁盘写 | **1.1.1 NEW** |
| request_codex_app_quit (osascript) | 进程控制 sidecar | **1.1.1 NEW** |
| kill_codex_processes_until_clear (SIGKILL) | 进程控制 | **1.1.1 NEW** |
| `open -b Codex` shell spawn | 进程启动 | **1.1.1 NEW** |
| broadcast_runtime_snapshot (tauri event) | IPC 事件 | **1.1.1 NEW** |
| WARNING: CLIENT_RESTART_RECOMMENDED | IPC 响应字段 | **1.1.1 NEW** |

---

## DTO 变化

| 类型 | 1.0.9 | 1.1.1 | 变化 |
|------|-------|-------|------|
| SwitchRollbackState | 不存在 | { slots: [FileRestoreState;4], slot_count } | **NEW TYPE** |
| FileRestoreState | 不存在 | { path, original_bytes, delete_flag } | **NEW TYPE** |
| CoreEnvelope\<SwitchPayload\> | ok() only | ok_with_warnings(CLIENT_RESTART_RECOMMENDED) | **NEW warning field** |
| Repository::switch_account result | 无 clear_auto_switch | + clear_auto_switch_transient_state | **NEW callee** |

---

## 编译噪声（不计 delta）

- `std::panicking::panic_count::GLOBAL_PANIC_COUNT` / `is_zero_slow_path` / `poison_flag` — Rust Mutex poison guard 标准实现，两版本均有
- `sub_` / `anon_<hash>` vtable 符号改名 — 地址已变，语义不变
- `alloc::alloc::handle_alloc_error` — OOM path，两版本结构相同
- `__rust_alloc` / `__rust_dealloc` 大小微调 — 非 app 级变化
