# Interface: set_codex_api_login — macOS arm64 / AiMaMi 1.1.1

Session: wf-aimami111-delta-20260616
Owner VA: 0x1005d3a10 (RelayManager::set_codex_api_login, size=0x1467)
Gate: strictImplementationUse_candidate

---

## IPC Invocation

```
command: "set_codex_api_login"
module:  codexmate_lib::commands::relay
```

### Arguments

| Field   | Type | Source | Notes |
|---------|------|--------|-------|
| enabled | bool | IPC arg blob @0x1010e7311 string pool | dual-confirmed: string pool + CodexApiLoginTogglePayload drop_in_place symbol |

### Response Type

```
CoreEnvelope<CodexApiLoginTogglePayload>
```

- Ok sentinel: `0x8000000000000000` (u64 tag)
- Payload type confirmed via `drop_in_place<CodexApiLoginTogglePayload>` symbol in xref chain
- Exact fields of `CodexApiLoginTogglePayload` not yet decompiled (unknown item #1)

---

## Execution Model

- Dispatch: `spawn_blocking` via `BlockingTask::poll@0x10059a6e0`
- Body: synchronous (no async SM, no await points in owner)
- genuine_ceiling: false (transparent shim, all 7 fake-wall taxonomy categories excluded)

---

## Enable Path (enabled=true)

1. `emit("stopping_codex")` via progress closure
2. `stop_codex_for_file_edit(timeout=5s)` — osascript quit + SIGKILL
3. `resolve_api_login_slots` — check slot cap (max=5), fail if full
4. `emit("writing_auth")`
5. Acquire RelayState mutex
6. `enable_virtual_login` — UUID gen + atomic write Codex config + write virtual-auth-marker.json
7. `emit("writing_config")`
8. `persist` — compose_proxy_status + storage::save + in-memory update
9. On persist failure: `rollback_api_login_enable` (calls `virtual_auth::cleanup`)
10. `sync_codex_config_with_outcome` — write_catalog + apply_codex_state
11. `launch_codex_app_warning` — NSWorkspace launch Codex
12. `emit("done\a")` — BEL sentinel (0x07)

## Disable Path (enabled=false)

1. `emit("stopping_codex")`
2. `stop_codex_for_file_edit(timeout=5s)`
3. `emit("restoring_auth")`
4. `virtual_auth::cleanup` — remove virtual-auth-marker.json + session credential file
5. `emit("writing_config")`
6. `persist`
7. `sync_codex_config_with_outcome` — remove_catalog + apply_codex_state
8. `emit("done\a")`

## Fast Path

If `enabled == current_state`: return early with current payload, no file writes, no process stop.

---

## Progress Events

Emitted via Tauri event channel vtable (vtable+40 dispatch):

| Step | Event string | Len | Path |
|------|-------------|-----|------|
| 1 | `"stopping_codex"` | 14 | both |
| 2 | `"writing_auth"` | 12 | enable only |
| 2 | `"restoring_auth"` | 14 | disable only |
| 3 | `"writing_config"` | 14 | both |
| 4 | `"done\a"` | 4 | success (BEL sentinel 0x07) |

---

## Side Effects

| Effect | Target | Trigger |
|--------|--------|---------|
| Codex process quit | macOS process | every non-fast-path call |
| virtual-auth-marker.json written | ~/.codex/ (inferred) | enable |
| Codex config JSON written | ~/.codex/... (inferred) | enable |
| virtual-auth-marker.json removed | ~/.codex/ | disable + rollback |
| session credential file removed | path ~26B @0x10114FD7F | disable + rollback |
| RelayState persisted to disk | storage path | both |
| codex catalog file written | ~/.codex/models.json (inferred) | enable |
| codex catalog file removed | ~/.codex/models.json | disable |
| apply_codex_state applied | Codex config | both |
| Codex.app launched | NSWorkspace | enable success |
| in-memory RelayState updated | mutex-protected HashMap | both |

---

## Error Conditions

| Error | Trigger | Recovery |
|-------|---------|----------|
| SlotFull | resolve_api_login_slots finds cap=5 reached | return Err immediately, no file writes |
| enable_virtual_login failure | UUID/write/config error | rollback_api_login_enable, return Err |
| persist failure | storage::save error | rollback_api_login_enable (enable path), return Err |
| stop_codex_for_file_edit timeout | process survives 5s | SIGKILL fallback via kill_codex_processes_until_clear |
| sync_codex_config failure | catalog/apply error | logged, return Err with partial state |
| 77B error string @0x101149BE2 | unknown trigger | not yet decompiled |

---

## DTOs / Types

### Input
```rust
// Inferred from IPC arg key and type system
struct SetCodexApiLoginArgs {
    enabled: bool,
}
```

### Response
```rust
// Confirmed: CoreEnvelope<CodexApiLoginTogglePayload>
// Exact CodexApiLoginTogglePayload fields unknown — not yet decompiled
struct CoreEnvelope<T> {
    // tag: 0x8000000000000000 = Ok sentinel
    // inner: T on Ok, CoreError on Err
}
```

### Internal State
```rust
// Inferred from RelayState access pattern
struct RelayState {
    // api_login_enabled: bool
    // providers: Vec<Provider> (cap=5 for api_login_slots)
    // relay_enabled: bool (checked at webview HashMap guard inner[2]+16)
}
```

---

## Anti-Fake-Wall Verdict

genuine_ceiling: **false**

BlockingTask::poll@0x10059a6e0 is a transparent spawn_blocking shim:
- No async state machine (no Poll::Pending return)
- No vtable-driven poll loop
- No HTTP-terminal callee
- No ICF ambiguity (xref chain resolves to RelayManager::set_codex_api_login uniquely)
- All 7 taxonomy categories (SM, vtable, HTTP-terminal, ICF-wall, no-symbol, recursion, depth-limit) excluded

---

## Unknowns

1. `CodexApiLoginTogglePayload` exact field list (not decompiled)
2. `anon.286` 16B key at owner+offset (rol/key function)
3. RelayManager struct field offsets (not mapped)
4. 77B error string @0x101149BE2 (content unknown)
5. session credential file exact path (26B string @0x10114FD7F, not yet decoded)
6. `apply_codex_state@0x10075ae20` internals (not decompiled in this session)
7. `launch_codex_app@0x10055afd0` exact NSWorkspace API used
