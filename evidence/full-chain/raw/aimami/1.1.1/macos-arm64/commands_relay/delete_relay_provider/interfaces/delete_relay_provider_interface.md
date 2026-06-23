# Interface: delete_relay_provider
## AiMaMi 1.1.1 macOS ARM64

### IPC Command Name
`delete_relay_provider`

### Request Parameters
| Field | Type | Required | Notes |
|-------|------|----------|-------|
| managerId | string | yes | relay manager context id |
| providerId | string | yes | id of provider to delete |

### Response (success)
```
CoreEnvelope::ok — discriminant=10 (unit/void)
No payload data returned.
```

### Response (error)
CoreError envelope — discriminant=0x8000000000000000

| Code | Message | Condition | Language |
|------|---------|-----------|----------|
| 9 | 当前 Codex 智能路由已开启，禁止操作中转模型，如需操作请关闭 Codex 智能路由。 | Router migration active (provider is migration target) | Chinese (NEW in 1.1.1) |
| 9 | 无法删除最后一个已启用的 Codex 中转模型：请先关闭 Codex 智能路由，或先启用另一个 Codex 中转模型。 | Sole active grant member | Chinese (NEW in 1.1.1) |
| 9 | "provider '{id}' still exists in relay state" (dynamic) | Post-persist session guard hit | English (same as 1.0.9) |
| 9 | "provider '{id}' has active sessions" (dynamic) | Session file contains providerId | English (same as 1.0.9) |
| 2 | CoreError::Io (wrapped) | fs error during session check | same as 1.0.9 |

### Side Effects (ordered)
1. macOS Keychain delete (non-fatal if errSecItemNotFound)
2. File delete: `.codex/<dir>/keys/<providerId>`
3. In-memory Vec<RelayProvider> filter (retain excluding deleted id)
4. In-memory Vec<GrantEntry> filter (retain excluding deleted id)
5. relay.json atomic write (updated RelayState)
6. In-memory RelayState memmove (0x170 bytes)
7. codex_catalog::remove_catalog
8. codex_catalog::write_catalog (conditional — if provider had active API slots)
9. apply_codex_state → config.toml write
10. tray_menu::refresh_tray_menu (Tauri TrayIcon::set_menu id="main")

### Pre-condition Guards (evaluated BEFORE any mutation)
1. Router migration guard: checks thread-router-migrations/relay-state-cache.json/current.json — blocks if provider is migration target
2. Active grant guard: blocks if provider is active AND sole grant member

### Platform
- macOS: CONFIRMED (Security.framework used for keychain)
- Windows: UNKNOWN (different keychain impl expected)
