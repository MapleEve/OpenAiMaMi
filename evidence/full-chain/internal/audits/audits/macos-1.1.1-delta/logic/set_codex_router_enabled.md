# set_codex_router_enabled — logic 文档

**owner_va**: 0x1005d7950
**size**: 7455B
**module**: codexmate_lib::commands::relay
**session**: <审计会话>
**gate**: strictImplementationUse_candidate

---

## DTO 变化

```
1.0.9 argKeys: [enabled: bool]
1.1.1 argKeys: [enabled: bool, apiLogin: bool]  ← 新增
```

## mode 参数语义（inferred）

- mode=0: direct-key 模式
- mode=1: api-login-proxy 模式
- mode=2: no-change（保留现有模式）
- owner decompile: if a5 != 2, writes mutex[397] = a5

## 调用链（enable 路径）

```
→ stop_codex_for_file_edit @0x10055c090
→ config_takeover::takeover
→ normalize_thread_providers_before_migration
→ ensure_proxy_started @0x1005d56f0  (TCP connect_timeout 300ms ×2)
→ sync_codex_config_with_outcome @0x1005daea0
→ migrate_threads_for_router_with_scope
→ virtual_auth::enable_virtual_login (if apiLogin mode)
→ snapshot_sanitized (redacted snapshot for log)
[on fail] → rollback_router_enabled @0x1005d6fa0
```

## progress events（Tauri emit, event="codex-router-toggle-progress"）

```
stopping_codex / rolling_back_threads / starting_proxy / launching_codex / done\x07
```

## CodexRouterTogglePayload（15 字段）

```
router_enabled, proxy_running, proxy_port, activeCodexProviders, codex_provider_count,
catalog_path, catalog_exists, config_toml_has_router, config_toml_has_catalog,
user_top_level_profile, config_stale_reason, thread_migration_exists,
state, migration, codexLaunchError
```

## relay config serialization keys（@0x101150a09）

```
codexRouterEnabled, codexApiLogin, codexApiSlots,
displayTagGlobal, displayTagWoyao, CodexApiSlot
```
