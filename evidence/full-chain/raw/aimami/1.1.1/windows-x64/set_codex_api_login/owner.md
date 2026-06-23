# owner.md — set_codex_api_login (AiMaMi 1.1.1 win64)

## 定位链

| 层 | 函数 | VA | 大小 | 等级 | 说明 |
|---|---|---|---|---|---|
| dispatch-hub | set_codex_api_login_dispatch_hub_sys | 0x14099D990 | 4664B / 138BB / cyclomatic=39 | B | 多命令 coroutine hub；LABEL_4/case0 = set_codex_api_login 分支 |
| task-runner | set_codex_api_login_task_runner_sys | 0x1407D63E0 | 289B | A | blocking 任务包装器；调用 core |
| **core body** | **set_codex_api_login_core_sys** | **0x1406D8620** | **5074B / 166BB / cyclomatic=78** | **A** | 专用执行体，单一 caller |
| get-providers | relay_get_active_providers_vec_sys | 0x1406DBEC0 | 1336B | A | 从 RelayManagerState 取 providers Vec |
| post-sync | relay_post_login_state_sync_sys | 0x1406E1750 | large | B | enable/disable 双路共享的状态同步 |
| persist | relay_providers_config_write_and_persist_sys | 0x1406E6960 | 660B | A (already named) | JSON 序列化 + 写盘 |
| pre-write-check | relay_config_check_parent_dirs_sys | 0x1406F2870 | ~230B | C | 写盘前父目录存在性检查 |
| json-serialize | sub_14020A3E0 | 0x14020A3E0 | 530B | C | RelayManagerState → JSON |
| atomic-write | atomic_write_file_sys (sub_140504310) | 0x140504310 | large | D | 原子写文件；source=codexmate_lib::core::relay::atomic_write |
| rollback | sub_1406E1040 | 0x1406E1040 | 1545B | C | codex_api_login 回滚（写失败时调用）|

## 字符串证据

- `"set_codex_api_login"` @ 0x1412FAA96 → xref → set_codex_api_login_dispatch_hub_sys
- `"0[AiMaMi] rolling back codex_api_login to false: "` @ 0x1412EB4CA → sub_1406E1040 → xref caller = set_codex_api_login_core_sys
- `"codexApiLogin"` @ 0x1412BFCB2 → sub_14020A3E0 (JSON key, RelayManagerState+365)
- `"writing_auth"`, `"stopping_codex"`, `"restoring_auth"`, `"writing_config"`, `"launching_codex"`, `"done"` — 全在 set_codex_api_login_core_sys 内
- `"[api-login-off] virtual auth cleanup failed"` — set_codex_api_login_core_sys disable 路径
- source 符号：`codexmate_lib::core::relay::manager` @ 0x1412EA8F8，`src\core\relay\manager.rs` @ 0x1412EA601

## IDB 写回状态

已完成：5 rename + 8 set_comments（session=<审计会话>）
