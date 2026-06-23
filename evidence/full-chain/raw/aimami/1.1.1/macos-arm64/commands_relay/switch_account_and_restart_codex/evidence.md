# evidence — switch_account_and_restart_codex (macOS arm64, AiMaMi 1.1.1)

session: <审计会话>
machine: <本地机器>
producer: subagent (pure producer mode)
delta_class: integrity_recovered
baseline: AiMaMi 1.0.9 (previously mis-marked "same" — see correction below)
idb: <来源位置>/raw/binary/AiMaMi-1.1.1-idb
idb_save: ok (confirmed)
date: 2026-06-17

---

## 幂等检查

路径 `<来源位置>/raw/aimami/1.1.1/macos-arm64/commands_relay/switch_account_and_restart_codex/` 不存在，无已有证据 → 执行完整逆向。

---

## Owner VA

| 函数 | VA | 大小 |
|------|----|------|
| switch_account_and_restart_sync | 0x100624e90 | 0x989 |
| switch_account_sync | 0x1006200f0 | 0x36f |
| capture_switch_rollback_state | 0x100621bb0 | large (>0xC800) |
| relaunch_codex_after_success | 0x100621a40 | ~0x13b |
| FileRestoreState::restore | 0x10061fd20 | ~0x242 |
| refresh_full_runtime_snapshot_with_source | 0x100626f60 | ~0x1b7 |
| append_switch_warning | 0x1006205f0 | ~0x115 |
| stop_codex_for_file_edit | 0x10055c090 | ~0xa0 |
| launch_codex_app | 0x10055afd0 | ~0x7d5 |
| Repository::switch_account | 0x1004c0350 | ~0xc00 |

Tauri command string in binary: `switch_account_and_restart_codex` @ 0x1010e7311 (confirmed via find_regex)

---

## Delta 变更点（相对 1.0.9）

### D1. SwitchRollbackState — 全新类型

1.0.9 中 `switch_account_and_restart_codex` 仅调用 `switch_account_sync` 再直接 `launch_codex_app`，无回滚机制。

1.1.1 新增完整回滚 harness：
- `capture_switch_rollback_state` (0x100621bb0) — **新函数**，在切换前快照最多 4 个文件的内容（path+bytes+delete_flag）
- `SwitchRollbackState` / `FileRestoreState` — **新 DTO 类型**，1.0.9 无对应类型
- `FileRestoreState::restore` (0x10061fd20) — **新函数**，失败时逐 slot 回滚（删除或覆写）

证据：func_query 在 1.1.1 中存在这些符号；xrefs_to 确认 0x10061fd20 仅从 0x100624e90 调用；1.0.9 IDB 无对应函数。

### D2. relaunch_codex_after_success — 新组合副作用

1.0.9 不存在 `relaunch_codex_after_success`。

1.1.1 中切换成功后：
1. `stop_codex_for_file_edit(5s)` → `request_codex_app_quit` (osascript) → poll 50ms → `kill_codex_processes_until_clear`
2. `launch_codex_app` → `open -b Codex` 或 `/Applications/Codex.app` → poll 80ms/3s

这是**重大 sidecar 副作用增加**：账号切换现在会终止并重启 Codex 进程。

### D3. Repository::clear_auto_switch_transient_state — 新 callee

`Repository::switch_account` (0x1004c0350) 在 persist_registry 之后新增调用 `clear_auto_switch_transient_state` (0x1004cfc50)。

1.0.9 无此调用。这清除了 `confirm_pending_auto_switch_and_restart_codex` 写入的临时状态。

### D4. CoreEnvelope ok_with_warnings + CLIENT_RESTART_RECOMMENDED

1.0.9 的 switch_account 返回 `CoreEnvelope::ok()`。

1.1.1 返回 `CoreEnvelope::ok_with_warnings(warnings=[Warning{code:"CLIENT_RESTART_RECOMMENDED", msg:"Restart Codex clients for the new auth snapshot to take effect."}])`。

字面字符串证据（decompile 0x1004c0350）：
- `"CLIENT_RESTART_RECOMMENDED"` (26 bytes, 0x1004c0df5)
- `"Restart Codex clients for the new auth snapshot to take effect."` (63 bytes, 0x1004c0e8a)

### D5. RUNTIME_REFRESH_FAILED_AFTER_SWITCH 警告码

`append_switch_warning` (0x1006205f0) 硬编码字符串 `"RUNTIME_REFRESH_FAILED_AFTER_SWITCH"` (35 bytes, 0x100620652)。

该警告码在 refresh_full_runtime_snapshot_with_source 失败时推入结果 warnings vec。

### D6. refresh_full_runtime_snapshot_with_source — 新 post-switch callee

1.0.9 切换后不做前端状态广播。

1.1.1 成功/失败路径均尝试 `refresh_full_runtime_snapshot_with_source` (0x100626f60)，内部调用 `broadcast_runtime_snapshot` (0x100620750)，向 Tauri 前端推送 `AppStatusPayload`。

---

## 编译噪声过滤（不计入 delta）

- `GLOBAL_PANIC_COUNT` / `is_zero_slow_path` / `poison_flag` — Rust Mutex 标准 poison guard，两版均有，地址不同但语义相同
- `sub_` / `anon_<hash>` vtable 改名 — 正常 hash 轮转
- `__rust_alloc` 大小参数微调（如 24→48 bytes for Box）— 随 struct size 变化，非 app 逻辑变化
- 寄存器分配 / 栈偏移变化 — ABI 相同，不算 delta

---

## Gate 档（implementation readiness）

| 检查项 | 状态 |
|--------|------|
| owner VA 确认 | ✅ 0x100624e90 |
| 主函数 decompile 完整 | ✅ |
| callees 深度 ≥5 or terminated_reason | ✅ 所有叶 leaf: stdlib/os/internal/sidecar |
| 新 DTO 类型名确认 | ✅ SwitchRollbackState, FileRestoreState |
| 错误字符串/警告码 | ✅ CLIENT_RESTART_RECOMMENDED, RUNTIME_REFRESH_FAILED_AFTER_SWITCH, "No AiMaMi registry exists yet", "Codex launch timed out" |
| sidecar 副作用 | ✅ osascript quit + `open -b Codex` + SIGKILL |
| IDB inline comments | ✅ 10 函数 append_comments confirmed |
| idb_save | ✅ ok |
| delta_class | integrity_recovered |
| 3角度完整性 | ✅ 函数符号枚举(func_query) + 调用树(callees+decompile) + 字符串/副作用(find_regex+IPC注册) |

---

## 为什么之前误判 same

1.0.9 的 `switch_account_and_restart_codex` 确实存在（Tauri 命令已注册），但实现为：
`switch_account_sync` → 成功后直接调 `launch_codex_app`（无回滚，无 rollback state，无 clear_auto_switch）。

1.1.1 在 **同名命令** 下重写了整个执行流，增加了 Phase 0（快照）+ 双路回滚 + 状态广播，结构完全不同。same-sweep 阶段仅对比符号存在性，未对比调用树深度，导致误判。本次补全逆向后标记为 integrity_recovered。

---

## ACCEPTANCE (dim6 — <审计会话>)

**Gate tier**: readyToImplement (dim6=acceptance-draft)
**Delta class**: integrity_recovered — significant new behavior vs 1.0.9

### Happy Path
- Input: `{accountKey: "<valid_key>"}`
- Expected: `CoreEnvelope::ok_with_warnings(SwitchPayload, [CLIENT_RESTART_RECOMMENDED])`
- Side effects: auth backup copied → registry updated (active=1, last_used_at=now) → clear_auto_switch_transient_state → osascript quit Codex → open -b Codex → broadcast AppStatusPayload to frontend

### Error Paths
| Trigger | Expected |
|---------|----------|
| rollback slot_count=0 | Err(early return, no switch) |
| accountKey not in registry | Err("<key> not found") |
| registry file missing | Err("No AiMaMi registry exists yet") |
| Codex fails to relaunch | Err(join_warnings containing "Codex launch timed out"), rollback restores files |
| refresh_runtime_snapshot fails | Ok but RUNTIME_REFRESH_FAILED_AFTER_SWITCH warning appended |
| Mutex poisoned | Err("Mutex poisoned string") |

### Side-Effect Asserts
- auth file backed up to timestamped path
- registry.json updated (active=1)
- auto_switch_transient_state cleared
- Codex process stopped via osascript/SIGKILL then relaunched via `open -b Codex`
- AppStatusPayload broadcast (Tauri event to frontend)
- CLIENT_RESTART_RECOMMENDED always in Ok response

### Test Mapping
- `e2e`: happy_path_full_cycle, account_not_found
- `manual`: rollback_on_relaunch_failure (requires renaming Codex.app)
- `unit`: mutex_poisoned, runtime_refresh_failed_warning, CLIENT_RESTART_RECOMMENDED_in_response
