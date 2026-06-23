# Interface: deactivate_relay_provider (AiMaMi 1.1.1 macOS arm64)

## BREAKING CHANGES vs 1.0.9

| Dimension | 1.0.9 | 1.1.1 |
|---|---|---|
| argKeys | `["providerId"]` | `["providerId", "ide"]` — **NEW `ide` param** |
| error strings | English ("Provider is still active in other IDE") | Chinese (new semantics — see below) |
| guard logic | multi-IDE retain guard | router_enabled guard + last-provider guard |

## Input DTO (1.1.1)

```
command: "deactivate_relay_provider"
argKeys: ["providerId", "ide"]
argObject: "{providerId:t, ide:e}"
params: "(t, e)"
```

- `providerId`: String — the relay provider ID to deactivate
- `ide`: String — **NEW** IDE identifier (replaces implicit multi-IDE tracking of 1.0.9)

## Output DTO

```
Ok:  CoreEnvelope<RelayState>  — full relay state after deactivation
Err: CoreEnvelope<Err(String)> — one of two error strings (see Error Paths)
```

## Error Paths (1.1.1 — CHANGED from 1.0.9)

### Error 1: Router-enabled guard (NEW guard, 107 bytes at 0x1011541DD)
**Condition**: Codex smart routing (`router_enabled`) is active
**String**: `"当前 Codex 智能路由已开启，禁止操作中转模型，如需操作请关闭 Codex 智能路由。"`
**Translation**: "Current Codex smart routing is enabled, relay model operations are prohibited, please close Codex smart routing first."
**CoreError variant**: `CoreError::Other` (discriminant=9)

### Error 2: Last-provider guard (CHANGED, 123 bytes at 0x101153A2B)
**Condition**: After Vec::retain, no active providers remain (was last provider for this IDE)
**String**: `"无法停用最后一个 Codex 中转模型：请先关闭 Codex 智能路由，或先启用另一个 Codex 中转模型。"`
**Translation**: "Cannot deactivate the last Codex relay model: please first close Codex smart routing, or enable another Codex relay model first."
**CoreError variant**: `CoreError::Other` (discriminant=9)

### Error 3: Persist failure
**Condition**: atomic write to relay.json fails
**CoreError variant**: `CoreError::IoError` (discriminant=2) or `CoreError::Other` (discriminant=9)

### Error 4: Sync config failure
**Condition**: write_catalog / remove_catalog / apply_codex_state fails
**CoreError variant**: `CoreError::IoError` (propagated from std::io::Error)

**REMOVED in 1.1.1**: The 1.0.9 `"Provider is still active in other IDE"` guard — this logic was the multi-IDE retain check. In 1.1.1 this is replaced by the two new guards above.

## Side Effects (1.1.1)

1. **Mutex-guarded read** of RelayState (same as 1.0.9)
2. **Vec::retain** — removes `ide` from provider's RelayActiveByIde active sessions set
3. **Router-enabled pre-check** (NEW): blocks if codex_router_enabled=true
4. **Last-provider post-check** (CHANGED): blocks if removing ide would leave zero active providers
5. **RelayManager::persist**: serialize RelayState → atomic write to relay.json
6. **RelayManager::sync_codex_config_with_outcome**:
   - `RelayManager::snapshot` — build provider snapshot
   - `resolve_api_slots` — resolve API slot configuration
   - `write_catalog` or `remove_catalog` — update/remove codex catalog entries
   - `apply_codex_state` — apply final state to codex config writer
7. Returns Ok(RelayState) reflecting updated state after deactivation

## Dispatcher / Registration

- **IPC xref**: `0x100314dc3` in `codexmate_lib::run::{{closure}}::{{closure}}` (single xref — IPC routing)
- **Registration string**: confirmed at `0x101148166` in command registration blob

## Source File (from sync_codex_config_with_outcome log string)

`src/core/relay/manager.rs` (string literal in decompile)
