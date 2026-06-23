# set_hotspot_enabled — Interface Contract (Windows x64 1.1.1)

**session**: <审计会话>
**platform**: windows-x64
**module**: system
**command**: set_hotspot_enabled
**owner_va**: 0x140022070
**handler_size**: 1454 bytes (0x5AE)

---

## IPC Invocation

```
command = "set_hotspot_enabled"
namespace = "app" | "repo"  (two-phase dispatch)
```

### Input DTO

| Field     | Type | Source string VA | Notes |
|-----------|------|-----------------|-------|
| `enabled` | bool | 0x1412AC720 (`aEnabled`) | Parsed by `parse_bool_from_ipc_arg_sys` @ 0x1402FF1A0 |

### Output DTO

| Discriminant | Meaning |
|---|---|
| `3` (Ok) | Operation succeeded |
| `6` (Err) | Error variant — inner error tag in byte[1] |
| `0x8000000000000000` | None/empty success (hotspot not found) |

---

## Dispatch Flow

```
tauri_ipc_main_dispatcher_sys (0x14000D2A0)
  └─ set_hotspot_enabled_ipc_dispatcher_sys (0x140022070)
       ├─ [app path] get_usage_refresh_interval_read_sys_111 (0x140089A50)
       │    └─ check usage/refresh interval — if result != 3: return early error
       ├─ [repo path] sub_14006EDC0 — repo lock guard acquire
       │    └─ sub_141214620 — repo two-phase read
       ├─ parse_bool_from_ipc_arg_sys (0x1402FF1A0) — decode "enabled" field
       └─ set_hotspot_enabled_core_impl_sys (0x14060CE60)
            ├─ _InterlockedCompareExchange8 — mutex acquire (same pattern as 1.0.9)
            ├─ codexmate_settings_hotspot_read_full_sys_111 (0x1401A15D0)
            │    ├─ codexmate_settings_field_lookup_sys_111 (0x14040CC30)
            │    │    └─ key="CodexMateSettings" @ 0x1412B6EC8, len=7
            │    └─ optional: mysteryUnlockGrants / mysteryUnlockedRoutes fields
            ├─ [enabled=true]  set_hotspot_enabled_enable_branch_sys (0x14060D750)
            │    ├─ hotspot_ready_state_discriminant_check_sys_111 (0x14038D560)
            │    └─ WebView iframe update: "index.html" + "hotspot" route
            ├─ [enabled=false] sub_140076AD0 — disable hotspot store
            └─ WakeByAddressSingle — mutex release
```

---

## Side Effects

- Writes `enabled` state to CodexMate settings hotspot section (persisted)
- On `enabled=true`: triggers WebView hotspot route reload (`index.html`/`hotspot`)
- On `enabled=false`: disables hotspot in store, no WebView reload
- Mutex prevents concurrent hotspot enable/disable races
- `mysteryUnlockGrants` / `mysteryUnlockedRoutes` fields optionally co-read from settings

---

## Error Paths

| Condition | Discriminant returned |
|---|---|
| app-path usage check fails (result != 3) | `Err(6)` from app path |
| repo lock unavailable | `Err(6)` from repo path |
| bool parse fails | `Err(6)` from parse |
| settings read returns discriminant != 10 | early error return |
| hotspot_ready check fails (enable path) | `Err` with discriminant 31/42 |
| enable branch returns null | return `0x8000000000000000` (None) |
