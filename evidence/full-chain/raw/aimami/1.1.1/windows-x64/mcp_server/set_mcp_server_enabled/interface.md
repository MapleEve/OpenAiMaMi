# set_mcp_server_enabled — Interface Contract (Windows x64)
session: wf-aimami111-delta-20260618-goldleaf
platform: windows-x64
binary: AiMaMi 1.1.1 win64.exe
idb: <本地路径>
sha: d24e429a

## IPC Command String

```
"set_mcp_server_enabled"
```
Confirmed: `aSetMcpServerEn` @ 0x1412AC130, len=22.

## IPC Request Parameters (dim2 — arg keys + extractor)

| Param | Type | 逆向分析 string VA | Notes |
|---|---|---|---|
| `name` | `str` | `aName_0` @ 0x1412AC732, len=4 | Required. Server name in codex-router TOML. Parsed by `sub_1402FED40` (= remove_skill_parse_id_param_111). |
| `enabled` | `bool` | `aEnabled` @ 0x1412AC720, len=7 | Required. True=enable, false=disable. Parsed by `parse_bool_from_ipc_arg_sys`. |
| `repo` | `str` | `aRepo` @ 0x1412AC6D1, len=4 | **NEW in 1.1.1 vs 1.0.9.** Parsed first (before name/enabled). Passed to `query_installed_skills_with_repo_111` for skills-store validation. |

### dim1 — Frontend CCF Gap

Frontend (`src/services/api/mcp/mcpApi.tsx` line 32):
```typescript
setMcpServerEnabled: (name: string, enabled: boolean) =>
  invoke<CoreEnvelope<McpServerMutationPayload>>(
    mcpCommands.setMcpServerEnabled, { name, enabled })
```
**`repo` param is absent from the frontend call-site.** This means Rust receives `repo=""` or
`repo=None`, and `pending_auto_switch_state_lock_acquire_111` runs first; if no auto-switch is
pending, `query_installed_skills_with_repo_111` is called with an empty repo string. Behavior
depends on whether `skill_store_get_all_111` returns any result for empty repo — likely returns
an error or skips validation, allowing the handler to proceed to name/enabled parsing.
This gap is an **integration-contract delta** in 1.1.1 that was not backported to the frontend.

## IPC Response / Return Type (dim4 — DTO)

On success: `CoreEnvelope<McpServerMutationPayload>` via `sub_140830710`.
On error: IPC error envelope via `has_notch_invoke_resolver_respond` (`sub_14080C3C0`).

### McpConfigPayload (internal, 0x150 bytes)
Built by `sub_140213C70`:
- `[0]` = `2` (discriminant / tag)
- `[8..23]` = type tag word `0x6B2F` (`"k/"`) at offset 8
- `[32..39]` = `"enabled\0"` literal (field name)
- `[40..39+0x100]` = parsed sections copy (0x100 bytes)
- `[328]` = `1`, `[332]` = `1` (discriminant fields)

### McpServerMutationPayload (frontend contract)
Defined at `src/contracts/ipc/mcp/mcpContract.tsx`.
Field `enabled: boolean` confirmed at line 10.

## Side Effects (dim3-terminal)

1. RwLock acquire on MCP config state (`InterlockedCompareExchange8` spinlock at `config_lock`)
2. File read: codex-router TOML via `win32_file_read_bytes_111` (ReadFile)
3. File read (second time on enabled=true path): TOML re-parsed to build McpConfigPayload
4. File write: TOML updated atomically via `relay_atomic_write_leaf_sys`
   - Temp file: `<parent>/<pid>-<uuid4>.tmp`
   - Managed section markers preserved: `# >>> aimami-relay codex-router top start (DO NOT EDIT MANUALLY)` etc.
5. RwLock release (`*config_lock = 0` + `WakeByAddressSingle`)

## Error Paths (dim5)

| Condition | Error | FS Write? |
|---|---|---|
| `pending_auto_switch_state_lock_acquire_111` returns non-zero | IPC error | No |
| `query_installed_skills_with_repo_111` disc != 6 | IPC error (repo not found) | No |
| `sub_1402FED40` disc != 6 | IPC error (bad name param) | No |
| `parse_bool_from_ipc_arg_sys` disc != 6 | IPC error (bad enabled param) | No |
| `mcp_server_find_and_rewrite_toml_111` server not-found | IPC error via `byte_1412E92F8` | No |
| `mcp_config_toml_parse_and_remove_111` Err | `usage_fetch_error_drop_111` + IPC error | No |
| `relay_atomic_write_leaf_sys` fail (disc != 10) | Err(2) propagated up | Partial (temp file cleaned via `snooze_file_delete_111`) |
| RwLock poisoned | `sub_1410B1930` panic path + IPC error | No |

## dim5 — Same-Platform Gate

RwLock uses Windows primitives only:
- `_InterlockedCompareExchange8` (x64 intrinsic)
- `WakeByAddressSingle` (`synchapi.dll`) @ 0x14124A5D0
- `WaitOnAddress` path via `sub_14124A510`

No macOS equivalents in this path. Windows-only gate confirmed.

## Relation to 1.0.9 Baseline (dim6 — Delta)

| Delta | Detail |
|---|---|
| New param: `repo` | Not in 1.0.9 IPC signature |
| New callee: `pending_auto_switch_state_lock_acquire_111` (0x14006edc0) | Not in 1.0.9 handler callee set |
| New callee: `query_installed_skills_with_repo_111` (0x141214620) | Not in 1.0.9 handler callee set |
| Core internals: same structure | Lock+rewrite+persist pattern unchanged |
| TOML markers: same 4 managed markers | Strings confirmed identical |
| Atomic write leaf: same | `relay_atomic_write_leaf_sys` unchanged |
