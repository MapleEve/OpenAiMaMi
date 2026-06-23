# load_sessions — Interface Contract (Windows x64)
**session**: <审计会话>
**date**: 2026-06-18

## IPC Command

```
command:  "load_sessions"
params:   ()               ← zero args
kind:     tauriInvokeWrapper
frontend: loadSessions:()=>ne("load_sessions")
  file:   assets/index-DdcCOEJG.js  line:86  col:25748
```

## Request Schema (Rust side)

No input parameters beyond the relay/Tauri context.
The handler receives relay context pointers (`a1`, `a2`, `a3`) — not user-provided data.

## Response Schema

```typescript
// LoadSessionsResponse (inferred from serializer)
{
  codexHome:         string | null,    // Option<PathBuf> → JSON string or null
  accountsPath:      string | null,
  authPath:          string | null,
  registryPath:      string | null,
  sessionsPath:      string | null,
  launchAgentPath:   string | null,
  autoSwitchLogPath: string | null,    // NEW IN 1.1.1 — absent in 1.0.9
  authExists:        boolean,
  registryExists:    boolean,
  sessionsExists:    boolean,
}
```

## Side Effects

1. **Spinlock acquire**: `pending_auto_switch_state_lock_acquire_111` — InterlockedCompareExchange8 + WakeByAddressSingle. Blocks if pending auto-switch is active.
2. **Skill store full scan**: `skill_store_get_all_111 → skill_store_iter_111` — vtable-dispatched iteration on every call.
3. **fs::read_dir**: `sub_1400467A0` — reads sessions directory from disk.
4. **Analytics sub-path** (if triggered): reads session range, deep-copies quota history point.

## Error Cases

| condition | outcome |
|-----------|---------|
| pending_auto_switch active | lock returns non-0 → error response (no session data returned) |
| no skills installed (query discriminant=6) | analytics path → error envelope via `has_notch_invoke_resolver_respond` |
| range param invalid/missing | `sub_14080C3C0` error response |
| session entry decode fail | discriminant `0x8000000000000000` in result struct |
| Rust panic (unwrap fail) | `sub_14124BFE0` — guarded by panic-count check `2 * *off_141899DC0` |

## Struct Layout Change (dim4 delta)

```
                    1.0.9 windows    1.1.1 windows
field count:        8                9
autoSwitchLogPath:  absent           +144 Option<PathBuf>  ← ADDED
serde key count:    8                9 (tag discriminant 6 added for len=17)
```
