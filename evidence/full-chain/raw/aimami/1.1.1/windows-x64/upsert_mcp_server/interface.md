# upsert_mcp_server — Interface Contract (Win64)
## session: wf-aimami111-delta-20260618-goldleaf | machine: <本地机器>
## sha: d24e429a | gate_tier: full_gold_leaf

---

## IPC Command

```
command: "upsert_mcp_server"
string_va: 0x1412AC11F
```

---

## Frontend CCF (dim1 — confirmed)

File: `src/services/api/mcp/mcpApi.tsx`

```typescript
const mcpCommands = defineIpcCommands({
  upsertMcpServer: "upsert_mcp_server",   // line 9
});

upsertMcpServer: (payload: McpServerUpsertInput) =>
  invoke<CoreEnvelope<McpServerMutationPayload>>(
    mcpCommands.upsertMcpServer,
    {
      input: {
        ...payload,
        args: payload.args ?? [],
        headers: payload.headers ?? {},
        environment: payload.environment ?? {},
      },
    }
  ),
```

Frontend wraps payload in `{ input: { ... } }`. The IPC arg buffer at `a1` holds the full input struct that the owner function parses via `sub_141212FB0` copies.

---

## DTO (dim2 — arg extractors confirmed)

| Key | Extractor VA | Rust Type | Required |
|---|---|---|---|
| `repo` | `remove_skill_parse_id_param_111` @ `0x1402FED40` | `String` | yes |
| `name` | `remove_skill_parse_id_param_111` @ `0x1402FED40` | `String` | yes |
| `transport` | `remove_skill_parse_id_param_111` @ `0x1402FED40` | `String` | yes |
| `enabled` | `parse_bool_from_ipc_arg_sys` @ `0x1402FF1A0` | `bool` | yes |
| `command` | `sub_1402FBB30` @ `0x1402FBB30` | `Option<String>` | optional |
| `args` | `sub_140360DA0` @ `0x140360DA0` | `Option<Vec<String>>` | optional |
| `url` | `sub_1402FBB30` @ `0x1402FBB30` | `Option<String>` | optional |
| `headers` | `sub_1407CB570` @ `0x1407CB570` | `Option<HashMap<String,String>>` | optional |
| `environment` | `sub_1407CB570` @ `0x1407CB570` | `Option<HashMap<String,String>>` | optional |

Note: frontend always sends `args=[]`, `headers={}`, `environment={}` as non-null defaults.

---

## Return Type

```
CoreEnvelope<McpServerMutationPayload>
```

- On success: `sub_140830710` builds IPC ok response (IPC envelope tag 6 = ok)
- On error: `has_notch_invoke_resolver_respond` (`0x14080C3C0`) builds IPC error response

Error paths:
1. `pending_auto_switch_state_lock_acquire_111` returns non-zero → error dispatched
2. `query_installed_skills_with_repo_111` returns Err → error dispatched
3. Any DTO field parse failure → error dispatched via `has_notch_invoke_resolver_respond`
4. `set_codex_router_enabled_blocking_body_win_sys` returns error → error dispatched

---

## Transport Mapping (dim4 DTO struct)

```
input buffer layout (a1):
  +0x000  (520B)  repo/name/transport parse context (sub_141212FB0 copies)
  +0x208  (400B)  secondary arg context
  +0x3A8  (0x10)  v70/v71 = result payload (OWORD)
  +0x3B0  (8B)    v71 = count field
  +0x370  (0x10)  v30/v31 = skill result OWORD
  +0x380  (8B)    v32 = error info
```

---

## Transport Values

| Key | String VA | Length |
|---|---|---|
| `"upsert_mcp_server"` | `0x1412AC11F` | 17 |
| `"repo"` | `0x1412AC6D1` | 4 |
| `"name"` | `0x1412AC732` | 4 |
| `"transport"` | `0x1412AC736` | 9 |
| `"enabled"` | `0x1412AC720` | 7 |
| `"command"` | `0x1412AC73F` | 7 |
| `"args"` | `0x1412AC746` | 4 |
| `"url"` | `0x1412AC74A` | 3 |
| `"headers"` | `0x1412AC74D` | 7 |
| `"environment"` | `0x1412AC754` | 11 |

---

## Transport enum (set_codex_router_enabled_blocking_body_win_sys)

```c
// Transport string → enum at 0x1401C5C61:
v28 = match transport {
  "sse"   (3B, 0x736365) => 2,
  "http"  (4B, 0x70747468 = 1886680168) => 1,
  "stdio" (5B, 0x6F697473 / 0x6F) => 0,
  _       => 3,  // unknown/fallback
};
```

---

## Managed Block Markers (TOML)

Written to codex-router TOML by `set_codex_router_toml_section_write_win_sys`:

| Marker | VA |
|---|---|
| `# >>> aimami-relay codex-router top start (DO NOT EDIT MANUALLY)` | `0x1412E941C` |
| `# <<< aimami-relay codex-router top end` | `0x1412EA00D` |
| `# >>> aimami-relay managed start (DO NOT EDIT MANUALLY)` | `0x1412E9348` |
| `# <<< aimami-relay managed end` | `0x1412E9FCB` |
| `# >>> aimami-relay managed start (top, DO NOT EDIT MANUALLY)` | `0x1412E93E0` |
| `# <<< aimami-relay managed end (top)` | `0x1412E9FE9` |

---

## Platform Gate (dim5)

- Win64 only build confirmed
- `WakeByAddressSingle` @ `0x14124A5D0` — Windows futex API (not present in mac build)
- `win32_file_read_bytes_111` @ `0x141093260` — Win32 file read (not present in mac build)
- mac `set_codex_router_toml_section_write_win_sys` size = 7455B vs win = 7492B (+37B, ~0.5%)
