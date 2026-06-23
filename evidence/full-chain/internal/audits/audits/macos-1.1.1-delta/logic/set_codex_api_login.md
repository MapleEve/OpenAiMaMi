# set_codex_api_login — logic 文档

**owner_va**: 0x1005d3a10
**size**: 0x1467 (5223B)
**module**: codexmate_lib::commands::relay
**session**: wf-aimami111-delta-20260616
**gate**: strictImplementationUse

---

## 调用链

```
Tauri IPC dispatch
  → BlockingTask::poll @0x10059a6e0  (spawn_blocking)
    → RelayManager::set_codex_api_login @0x1005d3a10
        enable_path:
          → stop_codex_for_file_edit @0x10055c090  (if was running)
          → resolve_api_login_slots @0x1005d69e0
          → enable_virtual_login @0x100545110
              → uuid::v4, serde_json BTreeMap
              → atomic_write (virtual-auth-marker.json)
              → atomic_write (session file / codex config)
          → persist @0x1005dee20
          → sync_codex_config_with_outcome @0x1005daea0
          → launch_codex_app_warning @0x1005e1460 (if needed)
          [on fail] → rollback_api_login_enable @0x1005da990
        disable_path:
          → virtual_auth::cleanup @0x1005468f0
          → persist + sync_codex_config
        no-op path: (already same state) → fast return Ok
```

## 关键行为

- enabled=true: stop Codex → virtual login files → persist → sync → re-launch Codex
- enabled=false: cleanup (remove virtual-auth-marker.json + session) → persist → sync
- 幂等：同状态直接返回 Ok（先 snapshot 检查 BYTE5(v106[45]) == v7）
- 进度事件（Tauri emit）：stopping_codex/restoring_auth/writing_auth/writing_config/done\x07
- 回滚：rollback_api_login_enable on persist fail（cleanup + persist(snapshot) + sync_codex_config）

## slot cap

resolve_api_login_slots: 返回 Err 当 v66 >= 5（≥5 slots 找到时报错；cap=5 providers）
