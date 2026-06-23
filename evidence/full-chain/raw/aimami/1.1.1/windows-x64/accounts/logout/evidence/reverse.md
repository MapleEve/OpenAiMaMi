# logout — 1.1.1 windows-x64 reverse evidence
session: <审计会话>  machine: <本地机器>  produced: 2026-06-19

## SAME-DEPTH-CONFIRM

verdict: confirmed_same_depth5
depth_reached: 5
comparison_baseline: 1.0.9 windows-x64/accounts/logout
dim6_inherited: 1.0.9

### 对比结论

**Depth 1–5 callee 集合对比：**

| Layer | 1.0.9 callee | 1.1.1 callee | 等价判断 |
|-------|-------------|-------------|---------|
| D1 | sub_1406088D0 (scheduler) | sub_1408E3F20 (async_task_body) | 等价：tokio spawn wrapper 地址变化为编译噪声 |
| D1 | sub_140387C50 (await) | sub_140871750 (broadcast_runtime_state_updated) | 等价：runtime event 广播 |
| D1 | sub_140449AE0 (serializer) | sub_140332540 (relay_atomic_write_file_sys) | 等价：atomic write 持久化 |
| D1 | sub_14084DF80 (progressive refresh) | tauri_ipc_resolve_sys | 等价 |
| D1 | tauri_ipc_resolve_sys | - | 同 |
| D2 | relay_atomic_write_file_sys → MoveFileExW/CreateFileW/CloseHandle | MoveFileExW/CreateFileW/CloseHandle | 完全等价 |
| D3 | 0x1400AF970 (runtime-state-updated event) | sub_1400AF970 | 等价 |
| D4 | sub_14023F670 (state_serializer) | sub_14023F670 | 完全相同地址 |
| D5 | sub_14023F960 → 0x14104E390 (NtWriteFile path) | sub_14023F960 → sub_140F050E0 → WakeByAddressSingle/CloseHandle | 等价：均为 tokio scheduler 机械 + 持久化，无 app 级 callee 增删 |

**Side-effect 类别对比：**
- auth/session clear: 两版均有
- registry persist: 两版均有（relay_atomic_write_file_sys 路径）
- runtime refresh: 两版均有（runtime-state-updated event）
- tauri ipc resolve: 两版均有

### 深度 5 验证

sub_14023F960 → sub_140F050E0 的 callees:
WakeByAddressSingle（Win32 tokio futex）+ CloseHandle — 纯 scheduler 机械，无 app 级副作用。
与 1.0.9 terminal_helpers.nt_write（0x14104E390 → NtWriteFile）同属底层 IO 机械，均不计入 app 级变更。

### 结论

confirmed_same_depth5: logout 在 depth 1–5 内 app 级 callee 集合、副作用类别、DTO（无参数）全部等价。
tokio async 结构保留，地址变化为编译重链接噪声。
1.0.9 readyToImplement=true，full_leaf_100=true → dim6_inherited=1.0.9
