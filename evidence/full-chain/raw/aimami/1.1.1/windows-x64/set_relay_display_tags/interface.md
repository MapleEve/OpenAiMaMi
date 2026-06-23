# set_relay_display_tags — Interface / DTO / Error / Side-Effect Boundary (windows-x64, AiMaMi 1.1.1)

**Session**: <审计会话> | **Date**: 2026-06-16

## IPC Command

```
command:  "set_relay_display_tags"
transport: Tauri IPC invoke
```

## Request Parameters (DTO)

```typescript
interface SetRelayDisplayTagsParams {
  manager: string;          // Required. 7-byte key. Provider/manager identifier string.
  global?: string | null;   // Optional. 6-byte key. Global display tag override.
  woyao?: string | null;    // Optional. 5-byte key. "Woyao" display tag override.
}
```

**Parameter Details**:
- `manager`: String, required. Parsed by `sub_14006F4B0` (same extractor as set_codex_api_slots). No length constraint observed in 逆向分析.
- `global`: Option<String>. Parsed by `sub_1402FED40`. Parser returns tag=6 (Some) or tag=3 (None); tag≠6 → IPC error path. Controls `displayTagGlobal` field in relay config JSON.
- `woyao`: Option<String>. Parsed by `sub_1402FED40` (same parser). Controls `displayTagWoyao` field in relay config JSON.

**Default values**: No default observed for any field. `global`/`woyao` default to None/absent if not provided.

## Response

```typescript
// On success:
type SetRelayDisplayTagsResponse = "ok";   // 2-byte string, built by set_codex_api_slots_ok_response_build_sys@0x140216BA0 (shared)

// On error:
// IPC error envelope via sub_14080C3C0 (shared IPC resolver leaf)
// Error conditions: param parse failure (missing/type error), relay state mutex poison
```

## Error Paths

| Condition | Path | Terminal |
|---|---|---|
| `manager` param missing/wrong type | `sub_14006F4B0` → tag≠extracted → `sub_14080C3C0` | IPC error leaf ★ |
| `global` param parse fail (tag≠6 and tag≠3) | `sub_1402FED40` → `sub_14080C3C0` | IPC error leaf ★ |
| `woyao` param parse fail | `sub_1402FED40` → `sub_14080C3C0` | IPC error leaf ★ |
| relay state mutex poison | `sub_1406E8480` → panic log "relay state poisoned" @ 0x1412ea5ed | abort path |
| relay config persist fail (tag=10) | `relay_providers_config_write_and_persist_sys` → err path | error return |
| post-login sync fail | `relay_post_login_state_sync_sys` → err path (conditional) | error return |

## Side Effects (4)

1. **relay state in-memory update**: `displayTagGlobal` and/or `displayTagWoyao` fields updated in RelayProvider in-memory state (TLS, stride=232B per RelayProvider, matched by `manager` param)
2. **relay config JSON atomic_write to disk**: full config rewrite via `relay_providers_config_write_and_persist_sys@0x1406E6960`; JSON fields include `displayTagGlobal` + `displayTagWoyao` alongside all other relay config fields (schemaVersion/providers/activeByIde/proxy/codexRouterEnabled/codexApiLogin/codexApiSlots)
3. **relay_post_login_state_sync_sys (conditional)**: triggered when `global` param is Some; optional post-write sync shared with other relay commands
4. **WIN lock acquire/release**: `_InterlockedCompareExchange8(lock_byte+16, 1, 0)` + `WakeByAddressSingle` for relay state mutation gate

## Relay Config JSON Fields (confirmed from `sub_1406EAED0` callchain, shared with set_codex_api_slots)

```json
{
  "schemaVersion": ...,
  "providers": [...],
  "activeByIde": ...,
  "proxy": ...,
  "codexRouterEnabled": ...,
  "codexApiLogin": ...,
  "codexApiSlots": [...],
  "displayTagGlobal": "...",    // ← set by this command (global param)
  "displayTagWoyao": "..."      // ← set by this command (woyao param)
}
```

## WIN vs MAC Differences

| Aspect | Windows (this file) | macOS (shared CCF) |
|---|---|---|
| Lock primitive | `_InterlockedCompareExchange8` + `WakeByAddressSingle` | `std::sync::Mutex` / `pthread_mutex` |
| Atomic write leaf | `GetCurrentProcessId + CloseHandle` WIN fs leaf | `std::fs::write` POSIX leaf |
| BreakerState stride | 232B per RelayProvider (confirmed WIN) | 232B (per 1.0.9 mac playbook §6 — same) |
| Option<String> parser | `sub_1402FED40` tag=6/3 | Same serde pattern, different VA |
| displayTag fields | `displayTagGlobal` + `displayTagWoyao` confirmed from JSON serializer xref | Identical field names (shared serializer logic) |

## Frontend IPC Contract (shared CCF)

From `ipc-contracts.jsonl` (frontend, windows-x64 shared frontend bundle):
- Command: `set_relay_display_tags`
- Wrapper function: to be confirmed from CCF (frontend pass)
- arg_keys: `["manager", "global", "woyao"]` (backend-confirmed; optional fields = global/woyao)

**NOTE**: Frontend CCF verification against `ipc-contracts.jsonl` is part of four-angle completeness dimension B. Backend arg_keys confirmed from 逆向分析 string refs. Frontend wrapper name requires CCF cross-check.
