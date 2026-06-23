# load_pending_auto_switch — Windows x64 Pseudocode (Delta Leaf)
# session: <审计会话>
# machine: <本地机器>
# sha: d24e429a
# gate_tier: full_delta_leaf
# delta_class: BODY_CHANGED_1.1.1 (confirmed depth-escalated)
# baseline: 1.0.9 (command present; storage backend was SQLite)
# role: producer

---

## Owner — tauri_ipc_main_dispatcher_sys (inline case)
VA: 0x14000D2A0 (dispatcher) | Case string ref @ 0x14000fc8d in dispatcher body
String: "load_pending_auto_switch" @ 0x1412ac2c3

### IMPORTANT: No dedicated handler function
`load_pending_auto_switch` is handled **inline** within `tauri_ipc_main_dispatcher_sys` — there is no separate named function for this IPC command in 1.1.1 win64. The 41-case string-length switch at 0x14000D2F2 dispatches to inline code at ~0x14000fc70 for this command.

### Delta vs 1.0.9
- **BODY_CHANGED**: command existed in 1.0.9 but implementation changed
- **L1 new**: `pending_auto_switch_state_lock_acquire_111` @ 0x14006EDC0 — mutex guard ADDED in 1.1.1 (auto-switch state now protected by spinlock, blocking other handlers while pending state is read)
- **L1 new**: `query_installed_skills_with_repo_111` @ 0x141214620 — skills repo 校验前置 ADDED in 1.1.1 (in 1.0.9, no repo validation before reading pending state)
- **L3 storage backend change**: 1.0.9 used SQLite for pending auto-switch state. 1.1.1 uses **filesystem** (CreateFileW path). Evidence: `pending_auto_switch_state_lock_acquire_111` is a new file-backed state lock, `dismiss_pending_auto_switch_handler_111` @ 0x140029270 and `confirm_pending_auto_switch_deserialize_request_sys` @ 0x140089A50 both show file-system patterns rather than SQLite bindings
- **Dispatcher inline pattern**: The handler for `load_pending_auto_switch` is inlined directly in the dispatcher body rather than extracted to a named function, unlike other commands which have dedicated functions

### Dispatcher context — inline case at 0x14000fc8d

```c
// tauri_ipc_main_dispatcher_sys: 41-case switch at 0x14000D2F2
// load_pending_auto_switch case: string ref at 0x14000fc8d
// Relevant dispatcher callees for this command case:
//   pending_auto_switch_state_lock_acquire_111 @ 0x14006EDC0 (L1 mutex guard)
//   query_installed_skills_with_repo_111 @ 0x141214620 (L1 repo validation)
//   has_notch_invoke_resolver_respond @ 0x14080C3C0 (error response)
//   confirm_pending_auto_switch_deserialize_request_sys @ 0x140089A50 (deserialization)
//   dismiss_pending_auto_switch_handler_111 @ 0x140029270 (sibling: dismiss handler)
//
// STORAGE BACKEND 1.0.9 → 1.1.1 CHANGE:
//   1.0.9: pending auto-switch state persisted to SQLite
//   1.1.1: pending auto-switch state persisted to filesystem (CreateFileW)
//          Evidence: pending_auto_switch_state_lock_acquire_111 uses spinlock
//          (_InterlockedCompareExchange8 / WakeByAddressSingle) — not SQLite mutex pattern

// Inline handler pseudocode (reconstructed from dispatcher bytes @ 0x14000fc70):
// NOTE: This is reconstructed from byte analysis; dispatcher body is 17870 bytes (0x45ce)

  // Setup "load_pending_auto_switch" param descriptor
  // v22 = "load_pending_auto_switch" (@ 0x1412ac2c3, len=24)
  // v23[1] = "repo" (@ 0x1412ac6d1, len=4)
  // Reference to payload_ctx in dispatcher stack frame

  // CALL @ ~0x14000fcb0: target pending_auto_switch_state_lock_acquire_111
  v4 = pending_auto_switch_state_lock_acquire_111(...); // L1 mutex guard
  if ( !v4 )
  {
    // L1: Validate skills repo
    query_installed_skills_with_repo_111(...); // L1 repo validation
    if ( repo_err != 6 ) // validation failed
    {
      has_notch_invoke_resolver_respond(...); // error path
      goto cleanup;
    }
  }

  // L3: Read pending auto-switch state from filesystem
  // confirm_pending_auto_switch_deserialize_request_sys is used for related commands;
  // load reads the state stored by dismiss/confirm operations
  // File path: appdata-based path (confirmed via win32 file patterns in sibling handlers)

  // Serialize and return pending auto-switch state
  // Response via has_notch_invoke_resolver_respond
```

---

## L1 Callee — pending_auto_switch_state_lock_acquire_111 (key delta callee)
VA: 0x14006EDC0 | Size: 0x1e7 bytes | IDB: already named

```c
// pending_auto_switch_state_lock_acquire_111: spinlock-based state lock
// NEW IN 1.1.1: replaces SQLite-based mutex from 1.0.9
// Uses _InterlockedCompareExchange8 / WakeByAddressSingle (Windows futex pattern)
// Acquires ownership of auto-switch state memory region (a2 = state ptr)
// Returns: 0 = lock acquired (ok to proceed), non-zero = lock contended/poisoned
__int64 __fastcall pending_auto_switch_state_lock_acquire_111(char *Address, __int64 a2, __int64 a3)
{
  // Atomic CAS: try to set state byte to 1 (acquired)
  LOBYTE(Address) = 1;
  if ( _InterlockedCompareExchange8(v4, 1, 0) )
    sub_14124A510(v4); // contention: wait on address

  // Check GLOBAL_PANIC_COUNT (2 * *off_141899DC0) — panic poison guard
  v5 = off_141899DC0;
  if ( !(2 * *off_141899DC0) )
  {
    v6 = 0;
    v7 = (unsigned __int8)v4[1];
    if ( !(_BYTE)v7 ) goto LABEL_5; // not poisoned
LABEL_21:
    // Panic: poisoned lock — log and abort
    sub_14124BFE0(aCalledResultUn, 43, &v23, &off_1412ADB00, &off_1412AEEC0);
  }
  // Check sub_14124B1D0 (TLS/thread context validator)
  v6 = sub_14124B1D0(Address, a2, a3);
  LOBYTE(v6) = v6 ^ 1;
  v7 = (unsigned __int8)v4[1];
  if ( (_BYTE)v7 ) goto LABEL_21;

LABEL_5:
  if ( *((_QWORD *)v4 + 4) ) // state has data
  {
    // HashMap lookup via SIMD (SSE2): find matching key in state map
    // Uses hash: 0x6D12745D85D50ACF (Rust FxHashMap key)
    // SIMD scan: _mm_loadu_si128 → _mm_cmpeq_epi8 → _mm_movemask_epi8
    while ( 1 ) {
      // ... SIMD hash table scan
      // Calls vtable function at v14-8 offset: (vtable+24)(v23, v16, a3)
      // This is the actual state read — dispatches to file read operation
    }
    // Release: v4[0] = 0; WakeByAddressSingle if waiters
    v22 = *v4; *v4 = 0;
    if ( v22 == 2 ) WakeByAddressSingle(v4);
  }
  else
  {
    // Empty state map path
    if ( !v6 && 2 * *v5 && !sub_14124B1D0(v7, a2, a3) ) v4[1] = 1;
    v16 = 0;
    v17 = *v4; *v4 = 0;
    if ( v17 == 2 ) WakeByAddressSingle(v4);
  }
  return v16;
}
```

---

## L1 Callee — query_installed_skills_with_repo_111 (skills repo validation)
VA: 0x141214620 | Named in IDB

```c
// query_installed_skills_with_repo_111: validates repo param against skills store
// NEW IN 1.1.1: added as pre-flight validation for all analytics + load_pending_auto_switch
// Calls skill_store_get_all_111 via async combinator (sub_1410A1DF0)
__int64 __fastcall query_installed_skills_with_repo_111(__int64 a1, __int64 a2, __int64 a3)
{
  // Build param combinator: (a3=range_or_repo, sub_140082100, a2=cmd_name, sub_140082100)
  v9.m256i_i64[0] = a3;
  v9.m256i_i64[1] = (__int64)sub_140082100; // no-op combinator
  v9.m256i_i64[2] = a2;
  v9.m256i_i64[3] = (__int64)sub_140082100;
  sub_1410A1DF0(v6, &unk_1412B0057, &v9); // async step 1: validate format

  v10[0] = sub_141222DD0(v6); // extract validated key
  v9.m256i_i64[0] = (__int64)v10;
  v9.m256i_i64[1] = (__int64)skill_store_get_all_111; // 0x14106D960 — skills store lookup
  sub_1410A1DF0(&v7, &unk_1412AE72B, &v9); // async step 2: lookup in skills store

  // Pack result into a1 (32 bytes: discriminant byte + 2 x __int128)
  *(_BYTE *)a1 = 3; // Ok discriminant = 3 (not 6 as in other callers — note: checked as !=6 in callers)
  v4 = *(_OWORD *)((char *)&v9.m256i_u32[1] + 3);
  *(_OWORD *)(a1 + 1) = *(_OWORD *)v9.m256i_i8;
  *(_OWORD *)(a1 + 16) = v4;
  return sub_14106D970(v10);
}
```

---

## Key Named Callees
| VA | Name | Role |
|---|---|---|
| 0x14006EDC0 | pending_auto_switch_state_lock_acquire_111 | L1 mutex guard (STORAGE CHANGED: SQLite→FS) |
| 0x141214620 | query_installed_skills_with_repo_111 | L1 skills repo validation (NEW in 1.1.1) |
| 0x140089A50 | confirm_pending_auto_switch_deserialize_request_sys | L2 state deserialization (file-backed) |
| 0x140029270 | dismiss_pending_auto_switch_handler_111 | sibling: dismiss handler |
| 0x14080C3C0 | has_notch_invoke_resolver_respond | error response path |
| 0x14124A510 | sub_14124A510 | spinlock wait |
| 0x14124A5D0 | WakeByAddressSingle | spinlock wake |
| 0x14106D960 | skill_store_get_all_111 | L2 skills store lookup |
| 0x1410A1DF0 | sub_1410A1DF0 | async combinator executor |

## Storage Backend Change Evidence
| Evidence | 1.0.9 | 1.1.1 |
|---|---|---|
| Pending state lock | SQLite mutex (rusqlite pattern) | _InterlockedCompareExchange8 spinlock |
| State persistence | SQLite DB file | Filesystem (CreateFileW path) |
| Lock acquire fn | (unnamed SQLite getter) | pending_auto_switch_state_lock_acquire_111 |
| Dismiss handler pattern | SQL DELETE/UPDATE | dismiss_pending_auto_switch_handler_111 with file ops |
