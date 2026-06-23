# interface.md — delete_sessions (windows-x64, AiMaMi 1.1.1)
session: <审计会话>
machine: <本地机器>

---

## IPC contract

```
command: "delete_sessions"
```

### Input parameters

| name | rust type | tauri type-tag | notes |
|---|---|---|---|
| repo | String | 15 | repository path / identifier |
| ids | Vec<String> | 3 | session IDs to delete |

### Return type

```
Result<Vec<SessionResult>>
```

`SessionResult` is a 96-byte struct populated by `sub_1410A2210`.
On empty `ids` → `Ok(vec![])` without touching DB.

### Frontend CCF (dim1)

IPC command string confirmed at binary address `0x1412ac1bd` ("delete_sessions").
Frontend invoke call site: `src/services/session-service.ts` → `invoke("delete_sessions", { repo, ids })`.

---

## DTO / struct layout (dim4)

### SessionResult (96 bytes, layout from collect_results alloc)
Extracted by `sub_1410A2210` from thread hashmap slots.
Fields inferred from decompile (24-byte hashmap entries, 3 qwords per slot):

| offset | size | field |
|---|---|---|
| +0 | 16 | id string (ptr, len) or inline SSO |
| +16 | 8 | aux field (session metadata / status tag) |
| (padded to 24 per hashmap slot, 96 per result Vec element) | | |

### thread_spawn_edges cascade (NEW SQL schema, dim4)
```sql
-- Table inferred from SQL string @ 0x1412f32f8
DELETE FROM thread_spawn_edges WHERE child_thread_id = ?1 OR parent_thread_id = ?1
-- ?1 bound to each id in ids[]
-- Executed BEFORE DELETE FROM threads
```

### threads table delete
```sql
DELETE FROM threads WHERE id = ?1
```
Executed after cascade. Present in 1.0.9 but now second in order.

---

## Async / concurrency contract

- Async mutex via `_InterlockedCompareExchange8` CAS on shared byte.
- Contention → `WaitOnAddress` via `sub_14124A510`.
- Completion → `WakeByAddressSingle` on the same byte.
- Poison detection string: `"poisoned lock: another task failed inside"` (sub_1410B1930).
- Executor VA: 0x1407DD860.

---

## Platform primitives used

| function | VA | role |
|---|---|---|
| win32_file_read_bytes_111 | 0x141093260 | read thread state file (OS I/O leaf) |
| win32_file_write_bytes_111 | 0x141093710 | persist updated thread state (OS I/O leaf) |
| win32_path_canonicalize_111 | 0x1410908e0 | path canonicalization in snooze_file_delete path |
| snooze_file_delete_win32_111 | 0x14108f810 | calls DeleteFileW / SetFileInformationByHandle |
| DeleteFileW | 0x14124d830 | Win32 delete (external, terminated_reason=OS) |
| SetFileInformationByHandle | 0x14124d118 | Win32 posix-delete fallback (external) |
| GetLastError | 0x14124d708 | Win32 error check after file ops |

---

## Same-platform gate (dim5)

Both mac-arm64 and windows-x64 expose `delete_sessions` via the same IPC command string.
Windows-x64 specific:
- Path normalization is SIMD SSE2 (xmmword constants `0x1412EF4B0`, `0x1412B5210`).
- File ops go through win32 HAL layer (`win32_file_read_bytes_111`, `win32_file_write_bytes_111`).
- `DeleteFileW` / `SetFileInformationByHandle` instead of POSIX `unlink`.

---

## Dim5 gate status

gate_tier: gold-leaf
platform: windows-x64
dim5_note: "win32 file/path primitives confirmed; mac counterpart uses posix equivalents — no IPC contract divergence"
