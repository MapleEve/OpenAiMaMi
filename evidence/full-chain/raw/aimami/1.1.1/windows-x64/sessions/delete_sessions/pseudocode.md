# delete_sessions — AiMaMi 1.1.1 win64 pseudocode
session: wf-aimami111-delta-20260618-goldleaf  (upgraded from wf-aimami111-delta-20260617-sweep)
machine: <本地机器>
platform: windows-x64
delta_class: integrity_recovered
baseline: 1.0.9
gate_tier: gold-leaf

---

## 1. handler  (0x140023f80, size 0x511)

IPC command entry point. Parses two args from the Tauri invoke payload:

- `repo` (string, type-tag 15) — extracted by `query_installed_skills_with_repo_111`
- `ids` (Vec\<string\>, type-tag 3) — extracted by `sub_140360DA0`

If either parse fails → error dispatch via `sub_14080C3C0`.
On success → `delete_sessions_async_executor_111`.
Response serialized, pending-auto-switch session array cleaned up (96-byte elements, freed in loop).

Key string refs: `"delete_sessions"` @ 0x1412ac1bd, `"repo"` @ 0x1412ac6d1, `"ids"` @ 0x1412ac78f.

```
fn delete_sessions_handler(invoke_ctx) -> Result<Response> {
    let repo: String = parse_arg(invoke_ctx, "repo")?;     // type-tag 15
    let ids: Vec<String> = parse_arg(invoke_ctx, "ids")?;  // type-tag 3
    let result = delete_sessions_async_executor(repo, ids).await?;
    serialize_and_dispatch(result)
    // pending-auto-switch cleanup loop follows (96-byte slot free)
}
```

---

## 2. async_executor  (0x1407dd860, size 0x4a4)

Windows async pattern: `_InterlockedCompareExchange8` mutex-CAS acquire on shared byte.
If mutex already held by another task → `sub_14124A510` (contention sleep / spin via WaitOnAddress).
Poison-guard check via `sub_1410B1930` with literal `"poisoned lock: another task failed inside"`.
Calls `delete_sessions_core_111` with the parsed (repo, ids) payload.
On completion: `WakeByAddressSingle` to wake waiters, result written to caller slot at offset 0.

```
async fn delete_sessions_async_executor(repo, ids) -> Result<Vec<SessionResult>> {
    let _guard = mutex_cas_acquire();            // _InterlockedCompareExchange8
    // contention: WaitOnAddress (sub_14124A510)
    // poison check: sub_1410B1930
    let result = delete_sessions_core(repo, ids)?;
    WakeByAddressSingle(&mutex_byte);
    result
}
```

---

## 3. core  (0x14077fe10, size 0x14dd)  ← PRIMARY DELTA LOCUS

### Guard
If `ids.len() == 0` → return `Ok(Vec::new())` immediately (early-exit, return tag 10).

### DB open
`sub_141077010()` → thread-local SQLite connection handle (lazy-init via `sub_14108CEE0`).
`delete_sessions_open_db_111` for actual connection open/retry.

### Session list build (NEW in 1.1.1)
`delete_sessions_build_session_list_111(session_list_buf, repo_handle)` — scans thread entries
for rollout_path files ending in `-rollout.json`, normalizes `\` → `/` path separators via SSE2.

### Per-id DELETE loop (DELTA)
For each `id` in `ids` (SIMD hashmap walk, tzcnt-based):

```sql
-- Step 1 (NEW in 1.1.1): cascade delete edges first
DELETE FROM thread_spawn_edges WHERE child_thread_id = ?1 OR parent_thread_id = ?1

-- Step 2 (existed in 1.0.9 but now second, not first):
DELETE FROM threads WHERE id = ?1
```

Error code `0x8000000000000016` = row-not-found → silently skip both steps, continue loop.
Any other SQL error → propagate as `Err(9, error_string)` via `sub_1410A1DF0`.

### Post-loop
`snooze_file_open_111` (0x14108C6F0) + `win32_file_read_bytes_111` (0x141093260) → read remaining thread state from disk.
`snooze_file_delete_111` (0x14108BF60) → delete snooze file via Win32 `DeleteFileW` / `SetFileInformationByHandle`.
`win32_file_write_bytes_111` (0x141093710) → persist updated state back to disk.
`delete_sessions_collect_results_111` (0x140311630) → build `Vec<SessionInfo>` from surviving thread entries.

```
fn delete_sessions_core(repo, ids) -> Result<Vec<SessionResult>> {
    if ids.is_empty() { return Ok(vec![]); }
    let conn = thread_local_db_conn(repo)?;           // sub_141077010 + sub_14108CEE0
    let session_list = build_session_list(repo);       // NEW 1.1.1: scans -rollout.json files
    for id in &ids {
        // 1.1.1 cascade order:
        let _ = conn.execute(
            "DELETE FROM thread_spawn_edges WHERE child_thread_id=?1 OR parent_thread_id=?1",
            [id]);
        // row-not-found (0x8000000000000016) silently ignored
        let _ = conn.execute("DELETE FROM threads WHERE id=?1", [id]);
        // row-not-found silently ignored
    }
    let state_bytes = win32_file_read_bytes(thread_state_path)?;   // 0x141093260
    snooze_file_delete(snooze_path)?;                               // 0x14108BF60 → DeleteFileW
    win32_file_write_bytes(thread_state_path, updated_state)?;      // 0x141093710
    collect_results(state_bytes, session_list)                       // 0x140311630
}
```

---

## 4. build_session_list  (0x140781830, size 0x83f)  ← NEW FUNCTION IN 1.1.1

### Decompile-verified implementation

Walks two fields of the repo handle (at `a2+160` and `a2+192`) — a pair of (base_ptr, count) describing the thread entry table.

For each thread entry (48-byte slot, 6 qwords):
1. Calls `snooze_file_open_111` (0x14108C6F0) to open the thread entry file.
2. If open returns tag `!= 2`: calls `sub_140782E80` to enumerate thread entries within.
3. For each entry: calls `sub_14107A5E0` (0x14107A5E0) to get rollout_path string.
4. Calls `sub_1410A9010` to extract suffix slice.
5. Magic-byte suffix check (verified in decompile):
   - `*ptr_u64 == 0x2D74756F6C6C6F72` → first 8 bytes = `-rollout`
   - `*(ptr + len - 6) ^ 0x6F736A2E == 0` → `.jso`
   - `*(ptr + len - 2) ^ 0x6C6E == 0` → `nl`
   → full suffix = `-rollout.json`
6. Splits path on `'-'` via `sub_14030E170`, trims last 5 chars via `sub_14033F0C0`.
7. Clones path via `sub_1410A1750`.
8. **SSE2 SIMD path normalization** (decompile-confirmed, xmmword constants `0x1412EF4B0`, `0x1412B5200`):
   - 32-byte lane: `_mm_cmpeq_epi8(chunk, splat('\\'))` → blend with `splat('/')`.
   - 8-byte lane fallback.
   - 4-byte scalar tail.
   - Handles `v95 & 0x7FFFFFFFFFFFFFE0` (32-align) and `& 0x18` (8-align) boundaries.
9. Pushes `(normalized_path, file_ptr, session_id, slot_flag)` tuple via `sub_140374610`.
10. On error / no rollout_path: skips entry (`LABEL_63`), frees slot memory via `sub_140001370`.

```
fn build_session_list(repo_handle) -> Vec<SessionEntry> {
    let entries = repo_handle.thread_entries();    // base at repo+160, count at repo+192
    let mut result = Vec::new();
    for entry in entries {
        let file = snooze_file_open(entry.path)?;
        let thread_entries = enumerate_thread_entries(file);    // sub_140782E80
        for te in thread_entries {
            let Some(path) = get_rollout_path(te) else { continue };  // sub_14107A5E0
            let suffix = extract_suffix(path);    // sub_1410A9010
            if !suffix_matches_rollout_json(suffix) { continue }
            // magic check: 0x2D74756F6C6C6F72 + .jso + nl
            let stem = split_on_dash(path).trim_end(5);  // sub_14030E170, sub_14033F0C0
            let owned = path.clone();                    // sub_1410A1750
            let normalized = simd_normalize_path_sep(owned);  // SSE2: \ → /
            result.push(SessionEntry {
                path: normalized,
                file_ptr: te.file_ptr,
                session_id: stem,
                slot_flag: entry.flag,
            });   // sub_140374610
        }
    }
    result
}
```

### Key callees (depth=4 from owner)

| callee | VA | role | terminated_reason |
|---|---|---|---|
| sub_141077010 | 0x141077010 | thread-local DB handle | leaf (TLS read) |
| sub_14108CEE0 | 0x14108CEE0 | lazy-init DB conn | internal |
| snooze_file_open_111 | 0x14108C6F0 | open thread entry file | → sub_14107A370 → win32 |
| sub_140782E80 | 0x140782E80 | enumerate thread entries | → sub_14108C7E0 (FindFirstFileExW) |
| sub_14107A5E0 | 0x14107A5E0 | get rollout_path string | → sub_1410904A0 (leaf), sub_1410983C0 |
| sub_1410A9010 | 0x1410A9010 | suffix extraction | internal |
| sub_14030E170 | 0x14030E170 | split path on '-' | internal |
| sub_14033F0C0 | 0x14033F0C0 | trim last N chars | internal |
| sub_1410A1750 | 0x1410A1750 | path clone (alloc) | → sub_140001360 (alloc leaf) |
| sub_140374610 | 0x140374610 | push to result list | → sub_140624F90 → sub_1405AB1E0 (hash) |
| sub_140001370 | 0x140001370 | dealloc / free | leaf (allocator) |
| sub_14124BCCB | 0x14124BCCB | OOM panic | leaf (panic) |

---

## 5. open_db  (0x14077f5e0, size 0x41b)

`sub_140C4BB80` → try existing thread-local connection (success if tag != 0x16).
On not-found: `sub_140C4BDC0` open/create, `sub_140C4BC40` retry with flag `32770 - a4`.
`sub_1410A1DF0` → format IoError to string for error propagation.
Returns connection handle or error `0x8000000000000016`.
No behavioral delta vs 1.0.9 identified.

---

## 6. collect_results  (0x140311630, size 0x3ec)  — full body decompiled

### Implementation (decompile-verified)

Two-phase hashmap probe over thread-id strings:
1. **Phase 1** — locate the first matching entry in the surviving thread hashmap.
2. **Phase 2** — walk remaining entries, appending SessionInfo to result Vec.

SSE2 SIMD probe: `_mm_cmpeq_epi8(slot_tag_vec, hash_fingerprint_vec)` + `_mm_movemask_epi8` → `tzcnt` to find matching slot.
Slot layout: 24 bytes per hashmap entry (3 qwords: hash, ptr, len).

`sub_140625680` — 57-bit hash function (result `>> 57` used as tag byte for SIMD probe).
`sub_141213640` — string compare for collision resolution.
`sub_1410A2210` — extract SessionInfo (ptr, len) from matched slot → alloc 96-byte result element.
`sub_140001360` — alloc 96 bytes at alignment 8 for Vec element.
`sub_141221220` — Vec grow / realloc when capacity exhausted.
`sub_14124BCCB` — OOM panic.

```
fn collect_results(thread_state, session_list) -> Vec<SessionResult> {
    let mut results = Vec::new();  // sub_140001360 alloc, 96-byte elements
    for thread_entry in thread_state.entries() {
        // SSE2 hashmap probe: _mm_cmpeq_epi8 + movemask + tzcnt
        let hash = hash57(thread_entry.id);   // sub_140625680
        if let Some(slot) = hashmap_probe(session_list, thread_entry.id, hash) {
            let info = extract_session_info(slot);  // sub_1410A2210
            if results.len() == results.capacity() {
                results.grow();  // sub_141221220
            }
            results.push(info);
        }
    }
    results  // Vec<SessionResult>, 96 bytes each
}
```

### Key callees (depth=4 from owner)

| callee | VA | role | terminated_reason |
|---|---|---|---|
| sub_140625680 | 0x140625680 | 57-bit hash → probe fingerprint | → sub_1405AB1E0 (leaf hash) |
| sub_141213640 | 0x141213640 | string compare (collision resolve) | leaf |
| sub_1410A2210 | 0x1410A2210 | extract SessionInfo from hashmap slot | → sub_140001360 (alloc leaf) |
| sub_140001360 | 0x140001360 | alloc (Vec element / 96-byte grow) | leaf (allocator) |
| sub_141221220 | 0x141221220 | Vec realloc / extend | internal |
| sub_14124BCCB | 0x14124BCCB | OOM panic | leaf (panic) |
| nullsub_1 | 0x1400013A0 | no-op (Rust phantom drop) | leaf |

---

## 7. snooze_file_delete_111  (0x14108bf60)  — full callee tree verified

Calls `win32_path_canonicalize_111` (0x1410908E0) to canonicalize the snooze file path.
Tries `DeleteFileW` (0x14124D830) first; on failure checks `GetLastError` (0x14124D708).
Falls back to `SetFileInformationByHandle` (0x14124D118) for POSIX-delete semantics.
Uses `sub_1410938D0` for path string ops.

```
fn snooze_file_delete(path) {
    let canonical = win32_path_canonicalize(path);      // 0x1410908E0
    let ok = DeleteFileW(canonical);                    // 0x14124D830 (external, OS leaf)
    if !ok {
        let err = GetLastError();                       // 0x14124D708
        if err != ERROR_ACCESS_DENIED {
            // try posix-delete via file handle
            SetFileInformationByHandle(handle, FileDispositionInfoEx, ..); // 0x14124D118
        }
    }
}
```

terminated_reason: external_call (Win32 OS boundary at DeleteFileW / SetFileInformationByHandle)
