# evidence: confirm_pending_auto_switch_and_restart_codex
**session**: <审计会话> | **machine**: <本地机器>
**binary**: AiMaMi 1.1.1 universal (macOS ARM64)
**binary_sha256**: f34ff82910539964e24e86b35e95ea85b42af7d7dccf8e979914a2c21bd8cfeb
**produced_at**: 2026-06-16
**gate**: strictImplementationUse
**module**: codexmate_lib::commands::system
**owner_note**: owner-map-111.jsonl 标注 module=commands::relay 有误；live 逆向分析 确认实际在 commands::system

---

## Confirmed

- **owner_va**: `0x10061e190` — `codexmate_lib::commands::system::confirm_pending_auto_switch_and_restart_sync::he04fa4955b6ac11d` (size=0xd9b, has_type=true)
- **module 实际归属**: `codexmate_lib::commands::system`（非 owner-map 标注的 commands::relay）
- **IPC dispatch xref**: `0x10059a097` in `tokio::runtime::blocking::task::BlockingTask::poll` — 单一 xref，Tauri spawn_blocking 模式确认
- **argKeys=[]**（零参数）：frontend ipc-contracts.jsonl line 86 col 32349 确认；wrapper=`confirmPendingAutoSwitchAndRestartCodex:()=>ne("confirm_pending_auto_switch_and_restart_codex")`
- **command 字符串确认**：`0x1010e7311` (注册 blob) + `0x10114801b` (load blob) — 两处 rodata 均命中
- **Repository::confirm_pending_auto_switch** (0x1004cd9b0) 已在命令 10/76 中完整逆出（同一实现，此命令复用）
- **capture_switch_rollback_state** (0x100621bb0): 快照当前 Repository state 中约 30 个文件路径的 string clones 进 `SwitchRollbackState`，用于 rollback
- **relaunch_codex_after_success** (0x100621a40): 两阶段重启 — stop(5s timeout) + launch
- **stop_codex_for_file_edit** (0x10055c090): `request_codex_app_quit` → 轮询 `is_process_running`(50ms sleep) → `kill_codex_processes_until_clear`；timeout 参数 5s
- **launch_codex_app** (0x10055afd0): 顺序尝试 3 条启动路径：(1) `open -b <bundle_id>`，(2) `open ~/Applications/Codex.app`，(3) `open /Applications/Codex.app`；每次等待进程出现最多 3s，80ms poll
- **FileRestoreState::restore** (0x10061fd20): 每个 entry 判断删除标记(a2+24)为负数时调 `std::fs::remove_file`；否则 `std::fs::DirBuilder::_create` + `std::fs::write::inner`（restore 文件内容）
- **FileRestoreState::capture** (0x10061fa80): 被 `capture_switch_rollback_state` 调用 4 次，snapshot 各文件路径+内容
- **response type**: `CoreEnvelope<SwitchPayload>` (同 confirm_pending_auto_switch，加 restart 后的额外 warning)
- **dispatcher pattern**: `tokio::runtime::blocking::task::BlockingTask::poll` 单一 xref — spawn_blocking 包装同步函数，符合 Tauri async_command 模式

## Inferred

- **SwitchPayload 字段**: 与命令 10/76 相同（serde derive，make_account_summary_from_item），字段名 accepted_unknown（serde derive level）
- **relaunch 超时文字**: `"Codex launch timed out"` (22B, 0x10055afd0 内 hardcoded)；返回 CoreError code=9
- **rollback 触发条件**: `relaunch_codex_after_success` 返回 Err（`0x8000000000000000` sentinel）且 `FileRestoreState::restore` 任一步骤失败，累计错误 join " | " 返回 Err
- **append_switch_warning 调用**: snapshot broadcast 后如有 warning 调用 `append_switch_warning`（0x1006205f0），将 CLIENT_RESTART_RECOMMENDED 等 warning 附加到 CoreEnvelope
- **rollback 路径**: 最多 4 个 FileRestoreState entry 各调一次 restore；restore 失败的错误被 collect 成 Vec 后 join " | " 拼接返回 Err
- **platform process 子命令字符串** (从 launch_codex_app 伪码读取): `-b`, `Codex` bundle ID, `~/Applications/Codex.app`, `/Applications/Codex.app` — 三条路径顺序尝试
- **is_process_running** (0x10055b8c0): 确认 Codex 进程是否在运行（pid 探测）
- **stop 参数**: `stop_codex_for_file_edit(a1, 5, 0, a4)` — timeout=5s(以秒为单位)

## Unknown

- **SwitchPayload 的 serde 字段名** (accepted_unknown: serde derive，与命令 10/76 共享同一 accepted_unknown)
- **pending-auto-switch.json 字段名** (accepted_unknown: 同命令 10/76，AccountSummary-shaped struct serde deserialize)
- **request_codex_app_quit 实现细节** (0x10055bc10 — 发送什么信号/事件): 未深追；is_process_running 轮询确认退出
- **kill_codex_processes_until_clear 实现细节** (0x10055e390 — 杀进程方式): 未深追；仅在 stop_codex 超时后调用
- **FileRestoreState::capture 内部快照逻辑** (0x10061fa80 — 读哪些文件路径): capture 调用 4 次对应 rollback state 的 4 个 entry；具体路径动态来自 Repository 状态
- **launch_codex_app 内 bundle ID 完整字符串** (unk_10114F1A0/unk_10114F1B0 处 16B 字符串): 未 get_bytes 读取；推断为 bundle ID 字符串（如 "dev.codex.Codex"）
- **broadcast_runtime_snapshot Tauri event 名称** (accepted_unknown: 与命令 10/76 相同)
- **Windows 平台行为** (accepted_unknown: Windows Unknown — macOS 证据不外推)
- **clear_auto_switch_snooze 实现** (accepted_unknown: 与命令 10/76 共享；0x1004c8120 未深追)

---

## Fake-wall check

genuine_ceiling=false; recovery_attempts=not_needed

所有 7 个 taxonomy 类别已排除：

- **drop_in_place≠async_body**: N/A — 命令本身通过 spawn_blocking 跑同步函数 `confirm_pending_auto_switch_and_restart_sync`；同步体已完整 decompile，无 async Future::poll 需要追
- **architecture_only/budget_rule**: N/A — 无自我限制；decompile 完整返回 0xd9b 大小函数
- **async_decompile_failed**: N/A — HexRays 完整 decompile 成功，非 async poll failure
- **wrong_VA**: N/A — func_query 精确匹配唯一符号 `confirm_pending_auto_switch_and_restart_sync`，4 角度交叉验证
- **vtable_dynamic**: N/A — 所有 callees 均为静态命名函数
- **HTTP_terminal**: N/A — 调用链无 HTTP；副作用全为 OS process + fs
- **library_internal**: std::fs/std::process/std::thread 标准库叶子已正确分类为 leaf，不是假墙

---

## Four-angle completeness

- **A (func_query 符号枚举)**: `confirm_pending.*restart` regex → 命中 `confirm_pending_auto_switch_and_restart_sync` @ `0x10061e190` (size=0xd9b, has_type=true) — PASS（唯一，无歧义）
- **B (string pool)**: `find_regex "confirm_pending_auto_switch_and_restart_codex"` → 命中 `0x1010e7311`(注册 blob) + `0x10114801b`(load blob) — PASS
- **C (frontend IPC)**: ipc-contracts.jsonl line 86 col 32349 确认 argKeys=[], wrapper=confirmPendingAutoSwitchAndRestartCodex — PASS
- **D (owner-map + INDEX)**: owner-map status=shared/not_yet_queried → 本轮 DONE；INDEX 无先前 1.1.1 macOS 条目；本轮 ADDITIVE owner；无碰撞

---

## ACCEPTANCE (dim6 — <审计会话>)

**Gate**: strictImplementationUse → acceptance-draft（dim4 partial bundle ID + dim5 win Unknown 阻塞升档）

### happy_path
- 无参数；precondition：pending-auto-switch.json 存在，Codex 运行中
- 返回 CoreEnvelope<SwitchPayload>（同 confirm_pending_auto_switch）+ Codex 重启副作用
- 副作用有序（10步）：read pending → read registry → capture snapshot → copy auth backup → copy target auth → write registry → clear snooze × 2 → SIGTERM Codex + poll → launch_codex_app（三路径）→ broadcast event；失败时 FileRestoreState::restore rollback

### boundary/error
- No pending / No registry → CoreError(7/NotFound)
- fs failure → CoreError(2/IoError)
- Codex launch timed out（三路径 3s 内无响应）→ CoreError(9/Other, "Codex launch timed out")
- rollback 多步失败 → CoreError joined " | "

### side_effect_asserts
- registry.json activeAccountKey 更新
- Codex 进程 PID 变化（kill + 重启）
- rollback 失败后文件回滚到 FileRestoreState 快照

### test_mapping
- unit: error 路径 mocked process (NotFound + launch timeout + rollback trigger)
- e2e: fs 副作用（auth copy + registry write + rollback 文件还原）
- explicit_non_automatable_accept: Codex 进程 stop+launch（依赖 macOS + 真实 Codex.app）

### dim6_basis
manifest.json side_effects (10条) + evidence.md launch_codex_app error string VA + interfaces/ Error Envelope
