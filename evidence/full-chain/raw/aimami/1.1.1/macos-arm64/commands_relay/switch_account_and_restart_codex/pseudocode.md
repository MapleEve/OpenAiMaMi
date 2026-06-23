# pseudocode — switch_account_and_restart_codex (macOS arm64, AiMaMi 1.1.1)

session: wf-aimami111-delta-20260617-sweep
machine: <本地机器>
delta_class: integrity_recovered
baseline: 1.0.9 (previously marked same — confirmed incorrect)

---

## 顶层命令分发 (Tauri IPC 入口)

command name (string table @ 0x1010e7311): `switch_account_and_restart_codex`
Tauri invoke resolver: `__ZN5tauri3ipc23InvokeResolver$LT$R$GT$30respond_async_serialized_inner...`
dispatches to: `switch_account_and_restart_sync` via BlockingTask

---

## switch_account_and_restart_sync (0x100624e90, size=0x989)

```
fn switch_account_and_restart_sync(dst, accountKey, ...) -> Result<CoreEnvelope<SwitchPayload>, String> {
    // Phase 0: 快照当前文件状态，用于失败回滚
    let rollback_state: SwitchRollbackState = capture_switch_rollback_state();
    // rollback_state.slot_count 为 0 时 early-return Err(...)
    if rollback_state.slot_count == 0 {
        return Err(rollback_state.error);
    }

    // Phase 1: 执行账号切换（持久化到文件）
    let switch_result = switch_account_sync(accountKey);

    if switch_result.is_err() {
        // Phase 1 失败 → 回滚所有文件 slots (最多4个)
        let alloc_box = Box::new(switch_result.err);
        for slot in rollback_state.slots[0..4] {
            if FileRestoreState::restore(slot).is_err() {
                append_switch_warning(result, "RUNTIME_REFRESH_FAILED_AFTER_SWITCH");
            }
        }
        // 刷新运行时快照（即使回滚出错也尝试）
        let snap = refresh_full_runtime_snapshot_with_source();
        if snap.is_err() {
            return Err(join_warnings(" | "));
        }
        return Err(join_warnings(" | "));  // 原始 switch_account 错误透传
    }

    // Phase 2: 切换成功 → 重启 Codex
    let relaunch = relaunch_codex_after_success();
    if relaunch.is_err() {
        // 重启失败 → 回滚（同 Phase 1 失败路径）
        for slot in rollback_state.slots[0..4] {
            if FileRestoreState::restore(slot).is_err() {
                // 格式化错误消息进 warning vec
            }
        }
        // 再次尝试重启（重试一次）
        let relaunch2 = relaunch_codex_after_success();
        if relaunch2.is_err() {
            // 将 relaunch2 错误加入 warning vec
        }
        // 刷新快照并返回错误列表
        let snap = refresh_full_runtime_snapshot_with_source();
        if snap.is_err() {
            return Err(join_warnings(" | "));
        }
        return Err(join_warnings(" | "));
    }

    // Phase 3: 切换+重启均成功 → 刷新运行时快照
    let snap = refresh_full_runtime_snapshot_with_source();
    if snap.is_err() {
        append_switch_warning(result, "RUNTIME_REFRESH_FAILED_AFTER_SWITCH");
    }

    // 返回 SwitchPayload 包装到 CoreEnvelope
    memcpy(dst, switch_result_ok_payload, 0x1D8);
    drop(rollback_state: SwitchRollbackState);
    return Ok(dst);
}
```

---

## switch_account_sync (0x1006200f0, size=0x36f)

```
fn switch_account_sync(accountKey: &str) -> Result<CoreEnvelope<SwitchPayload>, CoreError> {
    let state = StateManager::try_get() /* panics if missing */;
    let mutex = OnceBox::initialize_if_needed(state);
    Mutex::lock(mutex);
    let panic_in_flight = GLOBAL_PANIC_COUNT * 2 != 0;
    if mutex.poison_flag {
        // 返回 Err("Mutex poisoned") — panic-guard path
        Mutex::unlock(mutex);
        return Err("Mutex poisoned string");
    }
    let result = Repository::switch_account(state.repo, accountKey);
    // result 为 Err → 格式化 CoreError 展示字符串，返回 Err
    // result 为 Ok  → memcpy 到 dst
    if panic_happened_after { mutex.poison_flag = true; }
    Mutex::unlock(mutex);
    return result;
}
// 编译噪声（非 delta）: GLOBAL_PANIC_COUNT / is_zero_slow_path / poison_flag 为标准 Rust Mutex impl
```

---

## Repository::switch_account (0x1004c0350)

```
fn switch_account(repo, accountKey: &str) -> Result<CoreEnvelope<SwitchPayload>, CoreError> {
    // 1. 检查 AiMaMi registry 文件是否存在
    if !metadata(registry_path).exists() {
        return Err("No AiMaMi registry exists yet");
    }
    // 2. 加载 RegistryFile
    let registry = load_registry(repo)?;
    if registry.is_err() { return Err(registry.err); }

    // 3. 在账号列表（stride=360字节/条目）中找匹配 accountKey
    let found = registry.accounts.iter().find(|a| a.key == accountKey);
    if found.is_none() {
        return Err(format!("{} not found", accountKey));
    }

    // 4. 检查账号的认证路径文件是否存在
    let auth_path = found.auth_file_path;
    if !metadata(auth_path).exists() { return Err(io_error); }

    // 5. ensure_directories (CodexPaths)
    CodexPaths::ensure_directories(repo)?;

    // 6. 将 auth 文件 copy 到带时间戳的备份路径
    let backup_path = paths.join(format!("{}", current_timestamp()));
    fs::copy(auth_path, backup_path)?;

    // 7. 将 accountKey 写入活跃账号状态
    //    更新 registry entry: active=1, last_used_at=current_timestamp
    registry.entry.active = 1;
    registry.entry.last_used_at = current_timestamp();
    Repository::persist_registry(repo, registry)?;

    // 8. 【1.1.1 NEW】清除 auto_switch 临时状态
    Repository::clear_auto_switch_transient_state(repo)?;

    // 9. 加载 AuthFile 并生成 AuthSnapshot
    let auth_file = load_auth_file(auth_path)?;
    let auth_snapshot = make_auth_snapshot(&auth_file, auth_path)?;

    // 10. 查询 QuotaStoreFile 并生成 AccountSummary
    let quota = quota_store::load_or_default(repo.quota_path)?;
    let quota_item = quota_store::find_item(&quota, found.key);
    let summary = make_account_summary_from_item(found, auth_snapshot, quota_item);

    // 11. 返回 Ok + 警告 "CLIENT_RESTART_RECOMMENDED"
    //     "Restart Codex clients for the new auth snapshot to take effect."
    return CoreEnvelope::ok_with_warnings(SwitchPayload { summary, ... }, warnings=[
        Warning { code: "CLIENT_RESTART_RECOMMENDED", msg: "Restart Codex clients for the new auth snapshot to take effect." }
    ]);
}
```

---

## capture_switch_rollback_state (0x100621bb0)

```
fn capture_switch_rollback_state() -> SwitchRollbackState {
    // StateManager::try_get → Mutex::lock
    // 读取最多 4 个文件路径的当前内容到 FileRestoreState slots
    // 每个 slot 包含: path, bytes(当前内容), delete_flag(文件是否新建待删)
    // 返回 SwitchRollbackState { slots: [FileRestoreState; 4], slot_count }
    // 【1.1.1 ENTIRELY NEW TYPE — not in 1.0.9】
}
```

---

## relaunch_codex_after_success (0x100621a40)

```
fn relaunch_codex_after_success() -> Result<(), CoreError> {
    stop_codex_for_file_edit(timeout_secs=5)?;   // 先停 Codex
    launch_codex_app()?;                          // 再启 Codex
    // Ok(()) 编码为 0x8000000000000000 sentinel
}
```

## stop_codex_for_file_edit (0x10055c090)

```
fn stop_codex_for_file_edit(timeout_secs: u64) {
    if is_process_running() {
        request_codex_app_quit();            // osascript / SIGTERM
        let deadline = Instant::now() + Duration::from_secs(timeout_secs);
        while is_process_running() && Instant::now() < deadline {
            sleep(50ms);
        }
    }
    kill_codex_processes_until_clear();     // SIGKILL fallback
}
```

## launch_codex_app (0x10055afd0)

```
fn launch_codex_app() -> Result<(), CoreError> {
    // 尝试路径优先级:
    // 1. `open -b Codex` (bundle id, arg @ 0x10114F1A0)
    // 2. `open -b Codex` 变体 (arg @ 0x10114F1B0)
    // 3. /Applications/Codex.app (hardcoded path)
    // 4. ~/... 通过 dirs::home_dir() 拼接路径
    // 每次 open 后 poll is_process_running() 每 80ms，最长 3s
    // 全部失败 → Err("Codex launch timed out")
}
```

## FileRestoreState::restore (0x10061fd20)

```
fn restore(slot: &FileRestoreState) -> Result<(), String> {
    if slot.delete_flag {
        // 文件是切换时新建的 → 删除它以回滚
        fs::remove_file(slot.path)?;   // NotFound 忽略
    } else {
        // 文件切换前已存在 → 覆写回原内容
        fs::create_dir_all(Path::parent(slot.path))?;
        fs::write(slot.path, slot.original_bytes)?;
    }
}
```

## refresh_full_runtime_snapshot_with_source (0x100626f60)

```
fn refresh_full_runtime_snapshot_with_source() -> Result<AppStatusPayload, CoreError> {
    load_full_runtime_snapshot() → AppStatusPayload
    broadcast_runtime_snapshot(app_handle, snapshot)  // 向前端推送更新
    return Ok(snapshot)
    // Err 路径: StateManager 不存在 → panic; load 失败 → Err(variant=3)
}
```

## append_switch_warning (0x1006205f0)

```
fn append_switch_warning(result: &mut SwitchResult, source_error: String) {
    let code = "RUNTIME_REFRESH_FAILED_AFTER_SWITCH";  // 35 bytes, hardcoded
    result.warnings.push(Warning { code, source: source_error });
    // warnings vec layout: offset +55=cap, +56=ptr, +57=len; stride=48 bytes/entry
}
```
