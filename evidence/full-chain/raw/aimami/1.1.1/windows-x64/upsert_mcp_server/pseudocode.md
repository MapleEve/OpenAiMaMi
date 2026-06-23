# upsert_mcp_server — Win64 Pseudocode (Gold Leaf)
## session: wf-aimami111-delta-20260618-goldleaf | machine: <本地机器>
## delta_class: integrity_recovered | baseline: 1.0.9-win
## gate_tier: full_gold_leaf | sha: d24e429a
## idb_save: <本地路径>

---

## Owner Function

**Symbol**: `upsert_mcp_server_111`
**VA**: `0x140019720`
**Size**: `0xD3C` (3388 bytes) | WIN64
**IPC command string**: `"upsert_mcp_server"` @ `0x1412AC11F`

---

## DTO Fields (serde keys, in parse order)

| Key | Type | String VA |
|---|---|---|
| `repo` | `String` | `0x1412AC6D1` |
| `name` | `String` | `0x1412AC732` |
| `transport` | `String` | `0x1412AC736` |
| `enabled` | `bool` | `0x1412AC720` |
| `command` | `Option<String>` | `0x1412AC73F` |
| `args` | `Option<Vec<String>>` | `0x1412AC746` |
| `url` | `Option<String>` | `0x1412AC74A` |
| `headers` | `Option<HashMap<String,String>>` | `0x1412AC74D` |
| `environment` | `Option<HashMap<String,String>>` | `0x1412AC754` |

---

## Real 逆向分析 Pseudocode — Owner (upsert_mcp_server_111)

```c
// [wf-aimami111-delta-20260618-goldleaf | integrity_recovered]
// upsert_mcp_server_111 — IPC command handler for 'upsert_mcp_server'
// SIZE: 0xd3c (3388 bytes) | WIN64
// DELTA vs 1.0.9:
//   + pending_auto_switch_state_lock_acquire_111 (NEW gate before skill read)
//   + query_installed_skills_with_repo_111 (NEW repo validation)
//   + set_codex_router_enabled_blocking_body_win_sys now calls
//       set_codex_router_toml_section_write_win_sys (TOML section upsert)
//       + mcp_config_toml_parse_and_remove_111 (atomic parse+remove)
// SIDE EFFECTS:
//   writes/rewrites '[mcp_servers.<name>]' section in codex-router TOML via relay_atomic_write_leaf_sys
//   acquires pending-auto-switch spinlock; reads skill store
__int64 __fastcall upsert_mcp_server_111(__int64 a1)
{
  // Stack layout: v14..v22 = IPC arg buffers (360B each for repo/name/transport
  //               parse contexts); v23[512] = main arg context; v24 = relay state ref;
  //               v26[328] = skill result buf; v28[3]/__int128 = result accumulator;
  //               v29[360] = secondary arg buffer.

  v83 = -2;                               // 0x140019741 — stack canary seed
  sub_141212FB0(v23, a1, 520);            // 0x140019762 — copy 520B IPC arg block
  sub_141212FB0(v29, a1 + 520, 400);      // 0x14001977e — copy 400B secondary block
  v71 = *(a1 + 936);                      // 0x14001978a — relay state count
  v70 = *(a1 + 920);                      // relay state OWORD (Arc/handle)

  // v64 = "upsert_mcp_server" (17B), v65[0]=17, v65[1]=&aRepo, v65[2]=4, v65[3]=v23
  // Build arg descriptor for 'repo' field parse
  v64 = aUpsertMcpServe;                  // 0x1412AC11F
  v65.m256i_i64[0] = 17;
  v65.m256i_i64[1] = aRepo;              // 0x1412AC6D1 "repo"
  v65.m256i_i64[2] = 4;
  v65.m256i_i64[3] = v23;               // arg context buffer
  v66 = &v70;                            // relay state ref
  v82 = 1;

  // [DELTA 1.1.1] GATE: acquire pending-auto-switch spinlock
  v4 = pending_auto_switch_state_lock_acquire_111(v24 + 16, ...); // 0x140019803
  v5 = v4;
  if (v4) {
    // pending-auto-switch is active → IPC error
    v61.m256i_i64[1] = v4;
    v61.m256i_i8[0] = 6;   // error tag
    // fall through to error dispatch
  } else {
    v82 = 1;
    // [DELTA 1.1.1] Validate repo param against installed skill store
    query_installed_skills_with_repo_111(&v61, &v64, &v65.m256i_i64[1]); // 0x14001983d
    if (v61.m256i_i8[0] != 6) {
      // query returned Err or not-found → error path
      sub_14080C3C0(v22, v32, &v64, &v52, v33, v34);  // IPC error resolve
      goto LABEL_30;
    }
    v5 = v61.m256i_i64[1];   // skill result payload
  }

  // Parse 'name' field (String)
  v64 = aUpsertMcpServe; v65[0]=17; v65[1]=aName_0; v65[2]=4; v65[3]=v23; v66=&v70;
  v82 = 1;
  sub_1402FED40(&v60, &v64);            // 0x1400198b0 — Option<String> for name
  if (v60.m256i_i8[0] != 6) {
    sub_14080C3C0(...); goto LABEL_30;  // error: name missing/invalid
  }
  v79 = v60.m256i_i64[3]; v78 = v60.m256i_u64[1..2];  // save name string

  // Parse 'transport' field (String)
  v64 = aUpsertMcpServe; v65[1]=aTransport; v65[2]=9; ...
  sub_1402FED40(&v59, &v64);            // 0x140019931 — transport string
  if (v59.m256i_i8[0] != 6) { ...; goto LABEL_28; }
  v77 = v59.m256i_i64[3]; v76 = v59.m256i_u64[1..2];  // save transport

  // Parse 'enabled' field (bool)
  v64 = aUpsertMcpServe; v65[1]=aEnabled; v65[2]=7; ...
  parse_bool_from_ipc_arg_sys(&v54, &v64);  // 0x1400199b9
  if (v54.m256i_i8[0] != 6) { ...; goto LABEL_26; }
  v6 = v54.m256i_i8[1];   // bool value (0/1)

  // Parse 'command' field (Option<String>)
  v64 = aUpsertMcpServe; v65[1]=aCommand; v65[2]=7; ...
  sub_1402FBB30(&v58, &v64);            // 0x140019a2c
  if (v58.m256i_i8[0] != 6) { ...; goto LABEL_26; }
  v75 = v58.m256i_i64[3]; v74 = v58.m256i_u64[1..2];  // Option<String>

  // Parse 'args' field (Option<Vec<String>>)
  v64 = aUpsertMcpServe; v65[1]=aArgs; v65[2]=4; ...
  sub_140360DA0(&v68, &v64);            // 0x140019ab4
  if (v68.m256i_i8[0] != 6) { ...; goto LABEL_24; }
  v56 = v68.m256i_i64[3]; v55 = v68.m256i_u64[1..2];  // Option<Vec<String>>

  // Parse 'url' field (Option<String>)
  v64 = aUpsertMcpServe; v65[1]=aUrl; v65[2]=3; ...
  sub_1402FBB30(&v57, &v64);            // 0x140019b3c
  if (v57.m256i_i8[0] != 6) { ...; goto LABEL_23; }
  v73 = v57.m256i_i64[3]; v72 = v57.m256i_u64[1..2];  // Option<String>

  // Parse 'headers' field (Option<HashMap<String,String>>)
  v64 = aUpsertMcpServe; v65[1]=aHeaders_0; v65[2]=7; ...
  sub_1407CB570(v62, &v64);             // 0x140019bcb
  if (*v62 != 0) {   // Some(HashMap)
    v35[0..2] = v62[0..47];  // copy headers HashMap

    // Parse 'environment' field (Option<HashMap<String,String>>)
    v64 = aUpsertMcpServe; v65[1]=aEnvironment; v65[2]=11; ...
    sub_1407CB570(v27, &v64);           // 0x140019c62
    if (*v27 != 0) {   // Some(HashMap)
      v28[0..2] = v27[0..47];  // copy environment HashMap

      // All fields parsed successfully — main write path
      set_codex_router_enabled_blocking_body_win_sys(   // 0x140019d02
        &v25,    // out result
        v5,      // skill Arc/handle
        &v78,    // name (__int64*)
        &v76,    // transport
        v6,      // enabled (bool)
        &v74,    // command Option<String>
        &v55,    // args Option<Vec<String>>
        &v72,    // url Option<String>
        v35,     // headers __int128*
        v28      // environment __int128*
      );

      sub_141212FB0(&v64, v29, 400);    // 0x140019d1c — copy secondary args
      if (__OFSUB__(0, v25)) {
        // write returned error
        v81 = 1;
        sub_14004B540(v62, v26);
        *v27 = 0x8000000000000000;      // error sentinel
      } else {
        sub_141212FB0(v27, &v25, 336);  // copy success result
      }
      v81 = 0;
      sub_140830710(&v64, v27);         // 0x14001a451 — IPC ok response
      goto LABEL_30;
    }
    // environment parse Err → error dispatch
    sub_14080C3C0(...); sub_140082DE0(v62); /* drop headers */
  } else {
    // headers parse Err → error dispatch
    sub_14080C3C0(...);
  }

LABEL_23:  sub_140038F60(&v68.m256i_u64[1]); /* drop args Vec */ ; /* drop command */
LABEL_24:  sub_140001370(...);  // dealloc command if non-null
LABEL_26:  if (v76) sub_140001370(...);  // dealloc transport
LABEL_28:  if (v78) sub_140001370(...);  // dealloc name
LABEL_30:
  // Drop skill Vec (v70/v71 = Vec<InstalledSkill>)
  if (!__OFSUB__(0, v70)) {
    v9 = v70 ptr; v69 = v71 (count);
    while (v69 != 0) {
      ++v80; sub_14033AB50();  // Arc listener drop loop
      v9 += 96;
    }
    if (v70) sub_140001370(v70 ptr, 96 * v70, 8);  // dealloc skill Vec
  }
  return sub_140042650(v23);  // 0x14001a29c — finalize IPC response
}
```

---

## Real 逆向分析 Pseudocode — pending_auto_switch_state_lock_acquire_111

**VA**: `0x14006EDC0` | **Status**: DELTA:NEW vs 1.0.9

```c
// gold-leaf pending_auto_switch_state_lock_acquire_111
// DELTA-NEW vs 1.0.9 — blocks handler if auto-switch pending
// Returns 0 if acquired (no pending); non-0 = pending active (caller error-paths)
__int64 __fastcall pending_auto_switch_state_lock_acquire_111(
    char *Address, __int64 a2, __int64 a3)
{
  v4 = Address;
  LOBYTE(Address) = 1;
  // Acquire spinlock byte via CAS
  if (_InterlockedCompareExchange8(v4, 1, 0))
    sub_14124A510(v4);   // spin-wait until released

  v5 = off_141899DC0;    // RwLock metadata ptr
  if (!(2 * *off_141899DC0)) {
    v6 = 0;
    v7 = (unsigned __int8)v4[1];   // check pending-auto-switch flag
    if (!v7)
      goto LABEL_5;      // no pending → ok path
LABEL_21:
    // pending active → panic-via-unwrap (error path in caller context)
    sub_14124BFE0(aCalledResultUn, 43, &v23, &off_1412ADB00, &off_1412AEEC0);
  }
  // RwLock path (2*count != 0)
  v6 = sub_14124B1D0(Address, a2, a3);
  LOBYTE(v6) = v6 ^ 1;
  v7 = (unsigned __int8)v4[1];
  if (v7)
    goto LABEL_21;

LABEL_5:
  if (*((__int64*)v4 + 4)) {
    // Pending-auto-switch hashmap lookup via SSE scan
    v8 = *((__int64*)v4 + 1);   // hashmap data ptr
    v7 = *((__int64*)v4 + 2);   // hashmap capacity mask
    v9 = 0x6D12745D85D50ACF;   // hash seed
    a3 = 0;
    si128 = _mm_load_si128(&xmmword_14124E090);  // empty-slot sentinel
    v11 = _mm_load_si128(&xmmword_14124E0A0);    // tombstone sentinel
    // SIMD hashmap probe loop (Robin Hood / Swiss Table style)
    while (1) {
      a2 = v7 & v9;
      v12 = _mm_loadu_si128(v8 + a2);
      _R9D = _mm_movemask_epi8(_mm_cmpeq_epi8(v12, si128));
      if (_R9D) break;
      if (_mm_movemask_epi8(_mm_cmpeq_epi8(v12, (__m128i)-1LL)))
        goto LABEL_12;  // not found in map
      v9 = a3 + a2 + 16; a3 += 16;
    }
    // Found entry — dispatch vtable[3] on active handler
    while (1) {
      __asm { tzcnt r11d, r9d }
      v14 = v8 - 32 * (v7 & (a2 + _R11));
      _R11 = _mm_movemask_epi8(_mm_cmpeq_epi8(_mm_loadu_si128(v14 - 32), v11));
      if (_R11 == 0xFFFF) break;
      _R9D = _R9D & (_R9D - 1);
      if (!_R9D) goto LABEL_10;  // retry probe
    }
    v16 = *(__int64*)(v14 - 16);
    // vtable[3] call: (*(*handler)[3])(&v23, v16, a3)
    (*(vtable_fn**)(*(__int64*)(v14 - 8) + 24))(&v23, v16, a3);
    // Release spinlock
    if (!v26 && 2 * *v5 && !sub_14124B1D0(...)) v25[1] = 1;
    v4 = v25;
    v22 = *v25; *v25 = 0;
    if (v22 == 2) goto LABEL_19;
  } else {
LABEL_12:
    if (!v6 && 2 * *v5 && !sub_14124B1D0(...)) v4[1] = 1;
    v16 = 0;
    v17 = *v4; *v4 = 0;
    if (v17 == 2) {
LABEL_19:
      WakeByAddressSingle(v4);   // 0x14124A5D0
    }
  }
  return v16;  // 0 = acquired ok; non-0 = pending active error
}
```

Callees: `sub_14124A510` (spin-wait), `sub_14124B1D0` (lock state check),
`WakeByAddressSingle` @ `0x14124A5D0` (Win32), `sub_14124BFE0` (panic/unwrap-err handler)

---

## Real 逆向分析 Pseudocode — query_installed_skills_with_repo_111

**VA**: `0x141214620` | **Status**: DELTA:NEW vs 1.0.9

```c
// gold-leaf query_installed_skills_with_repo_111
// DELTA-NEW vs 1.0.9 — validates repo param against skills store
// Returns Result<Vec<InstalledSkill>, Err> packed into a1
__int64 __fastcall query_installed_skills_with_repo_111(
    __int64 a1, __int64 a2, __int64 a3)
{
  v10[1] = -2;   // stack canary
  // Build closure over (repo, callback) pair
  v9.m256i_i64[0] = a3;
  v9.m256i_i64[1] = sub_140082100;  // drop fn
  v9.m256i_i64[2] = a2;             // arg context
  v9.m256i_i64[3] = sub_140082100;  // drop fn (clone)
  sub_1410A1DF0(v6, &unk_1412B0057, &v9);   // create future/closure
  v10[0] = sub_141222DD0(v6);               // create task handle

  // Set up call to skill_store_get_all_111 via closure
  v9.m256i_i64[0] = v10;
  v9.m256i_i64[1] = skill_store_get_all_111;  // 0x14106D960 (8B thunk)
  sub_1410A1DF0(&v7, &unk_1412AE72B, &v9);    // run combinator

  // Pack Result::Ok into a1
  *(_OWORD*)((char*)&v9.m256i_u32[1] + 3) = v7;
  *(__int64*)((char*)&v9.m256i_i64[2] + 7) = v8;
  *(_BYTE*)a1 = 3;  // Result::Ok tag (value 3 = some/ok payload)
  v4 = *(_OWORD*)((char*)&v9.m256i_u64[1] + 7);
  *(_OWORD*)(a1 + 1) = *(_OWORD*)v9.m256i_i8;
  *(_OWORD*)(a1 + 16) = v4;
  return sub_14106D970(v10);  // drop task handle
}
```

Callees: `skill_store_get_all_111` @ `0x14106D960` (8B thunk — terminal),
`sub_1410A1DF0` (future combinator — runtime), `sub_141222DD0` (task handle create),
`sub_14106D970` (task handle drop)

---

## Real 逆向分析 Pseudocode — set_codex_router_enabled_blocking_body_win_sys

**VA**: `0x1401C59F0` | **Size**: `0xB85` (2949B) | **Status**: DELTA:MODIFIED

```c
// [wf-aimami111-delta-20260616] set_codex_router_enabled_blocking_body_win_sys
// Blocking Tauri task closure body — called via BlockingTask::poll
// DELTA 1.1.1: calls set_codex_router_toml_section_write_win_sys (NEW)
//              then mcp_config_toml_parse_and_remove_111 (NEW)
// 10 params: a1=out, a2=spinlock ptr, a3=name ptr, a4=config path ptr,
//            a5=enabled bool, a6=command, a7=args, a8=url, a9=headers, a10=environment
__int64 __fastcall set_codex_router_enabled_blocking_body_win_sys(
    __int64 a1, __int64 a2, __int64 *a3, _QWORD *a4,
    char a5, _QWORD *a6, _QWORD *a7, _QWORD *a8,
    __int128 *a9, __int128 *a10)
{
  v98 = a4; v103 = a3; v10 = a1;
  LOBYTE(a1) = 1;

  // Acquire spinlock (InterlockedCompareExchange8)
  if (_InterlockedCompareExchange8(a2, 1, 0))
    sub_14124A510(a2);   // spin-wait

  v11 = off_141899DC0;
  if (2 * *off_141899DC0) {
    // RwLock path — check contention state
    v12 = sub_14124B1D0(a1, a2, a3);
    LOBYTE(v12) = v12 ^ 1;
  } else {
    v12 = 0;
  }

  v13 = *(a2 + 1);    // pending-auto-switch flag byte
  Address = a2;
  v107 = v12;

  if (v13) {
    // RwLock poisoned path: build PoisonError
    sub_1410B1930(aPoisonedLockAn, 41, v63);  // "poisoned lock: another task failed inside"
    // ... (panic handler if poison check panics)
    // Release spinlock, drop all Option<T> params, return error
    if (v20 == 2) WakeByAddressSingle(v19);
    sub_140082DE0(a10); sub_140082DE0(a9);
    if (*a8) sub_140001370(a8[1], *a8, 1);
    // drop a7 (Vec<String>)
    // drop a6 (Option<String>)
    goto LABEL_48;  // release spinlock, return
  }

  // Transport enum resolution
  v26 = v98[1]; v27 = v98[2];  // config path ptr+len
  if (v27 == 3 && !(*(_WORD*)v26 ^ 0x7373 | *(u8*)(v26+2) ^ 0x65))
    v28 = 2;     // "sse"
  else if (v27 == 4 && *(_DWORD*)v26 == 1886680168)
    v28 = 1;     // "http"
  else if (v27 == 5 && !(*(_DWORD*)v26 ^ 0x69647473 | *(u8*)(v26+4) ^ 0x6F))
    v28 = 0;     // "stdio"
  else
    v28 = 3;     // unknown

  // Read config path from relay Arc
  v105 = *v103; v104 = v103[1]; v29 = v103[2];
  v99 = *(Address + 80);   // config path OWORD from relay state

  // Acquire config Mutex (sub_141095530 = mutex lock)
  sub_141095530(&v99, v63);   // may panic if poisoned

  // Build TOML section struct
  v64[0] = v105; v64[1] = v104; v64[2] = v29;
  v80 = v28;   // transport enum
  v79 = a5;    // enabled bool

  // [DELTA 1.1.1] Write new section to codex-router TOML
  set_codex_router_toml_section_write_win_sys(     // 0x1401C5E53
    v63,                          // scratch output buf
    *(Address + 80),              // config path ptr
    *(Address + 88),              // config path len
    v64                           // dto block (name, path, transport enum)
  );

  v34 = *v63;  // result tag
  if (__OFSUB__(-v34, 1)) {
    // section write returned error
    // Build error from v63[8..104]
    sub_140243FC0(&v81, &v99);
    v96 = v102; v95 = v101;
    usage_fetch_error_drop_111(&v63[8]);  // drop error payload
    *(__int64*)(v10 + 24) = v96;
    *(_OWORD*)(v10 + 8) = v95;
    *(__int64*)v10 = 0x8000000000000000;  // error sentinel
    goto LABEL_44;  // release spinlock, drop params
  }

  // Section write succeeded — copy result
  v90 = *(__int64*)&v63[24]; v89 = *(_OWORD*)&v63[8];
  sub_141212FB0(v62, &v63[32], 192);  // copy result payload
  v60 = v89; v61 = v90; v59 = v34;

  // [DELTA 1.1.1] Parse + remove old entry from MCP config TOML
  v36 = *(Address + 80); v37 = *(Address + 88);
  v114 = 1;
  mcp_config_toml_parse_and_remove_111(&v81, v36, v37);   // 0x1401C5FDC

  if (v81.m256i_i32[0] != 10) {
    // parse+remove returned error (tag != Ok/10)
    // reconstruct v63 from saved values, wrap error
    sub_140243FC0(v63, &v99);
    usage_fetch_error_drop_111(&v81);
    *(__int64*)(v10 + 24) = v96;
    *(_OWORD*)(v10 + 8) = v43;
    *(__int64*)v10 = 0x8000000000000000;  // error sentinel
    sub_1401D5810(&v59);
    goto LABEL_44;
  }

  // Both writes succeeded — merge results
  v38 = v81.m256i_i64[3]; v93 = v81.m256i_u64[1..2];
  // Unlock config mutex (sub_141095530 unlock path)
  sub_141095530(&v101, v63);
  v87 = v100; v86 = v99;
  sub_141212FB0(&v81, &v59, 224);   // merge section write result
  v104 = v38;
  sub_140213C70(v63, &v81);         // merge mcp parse result into out buf
  sub_141212FB0(v10, v63, 336);     // copy final result to output
  // Drop intermediate McpServerList payload from parse+remove
  v105 = 0;
  while (v104 != v105) {
    ++v105;
    sub_1401D5810(v41);  v41 += 224;
  }
  if (v93) sub_140001370(v97, 224 * v93, 8);

LABEL_44:
  v112 = 0;
  sub_1401D5810(v64);  // drop dto block
  // Release spinlock
  if (!v107 && 2 * *off_141899DC0 && !sub_14124B1D0(...)) *(Address+1) = 1;
  v55 = Address; v56 = *Address; *Address = 0;
  if (v56 == 2) WakeByAddressSingle(v55);

LABEL_48:
  // Drop config path ref
  if (*v98) sub_140001370(v98[1], *v98, 1);
  // Drop relay Arc if acquired
  if (v13 && *v103) sub_140001370(v103[1], *v103, 1);
  return v10;
}
```

---

## Depth-3: set_codex_router_toml_section_write_win_sys

**VA**: `0x14067CA20` | **Size**: `0x1D44` (7492 bytes)

Key behaviors (from existing sweep analysis, confirmed via callees):
- Opens codex-router TOML via `snooze_file_open_111` (0x14108C6F0)
- If file not found → creates empty (Ok, empty byte vec)
- Reads existing content via `win32_file_read_bytes_111` (0x141093260)
- Calls `mcp_server_list_build_toml_sections_111` (0x14067F850) to build new section strings
- Scans for managed block markers via `sub_141213640` (strcmp)
- Splices new section at correct position using `sub_1403654F0` / `sub_140678BF0`
- Writes result via `relay_atomic_write_leaf_with_newline_111` (0x14067BE90)
  → `relay_atomic_write_leaf_sys` (0x140504310) [terminal leaf: sys-write-leaf]
- Also calls `mcp_config_toml_parse_and_remove_111` (0x1406790D0) within its body

---

## Depth-3: mcp_config_toml_parse_and_remove_111

**VA**: `0x1406790D0` | **Size**: large (TOML parser body)

Real 逆向分析 pseudocode (key path only — full body is dense TOML tokenizer):

```c
// [wf-aimami111-delta-20260617] mcp_config_toml_parse_and_remove_111
// Reads MCP config TOML, parses [mcp_servers.<name>] sections (subkeys:
// command/transport/env/headers), removes matching section, writes back.
// Returns Ok(McpServerListPayload) tag=10 | Err(...)
_QWORD* __fastcall mcp_config_toml_parse_and_remove_111(
    _QWORD *a1, __int64 a2, __int64 a3)
{
  snooze_file_open_111(&v161, a2, a3);   // open MCP config file
  if (v161.m128i_i32[0] == 2) {
    // file not found → return Ok with empty payload (tag=10)
    a1[1]=0; a1[2]=8; a1[3]=0; *a1=10;
    return a1;
  }

  win32_file_read_bytes_111(&v161, a2, a3);  // read file bytes
  v6 = v161.m128i_i64[1];
  if (__OFSUB__(-v161.m128i_i64[0], 1)) {
    // read error
    *a1 = 2; a1[1] = v6;
    return a1;
  }

  v189 = v161.m128i_i64[1];  // file content ptr
  v186 = v161.m128i_i64[0];  // file content len
  v8 = v162;                  // saved ptr

  // Acquire path string Mutex (sub_141095530)
  v175.m128i_i64[0] = 0; v175.m128i_i64[1] = 1; v176 = 0;
  v161.m128i_i64[0] = &v175; v161.m128i_i64[1] = &off_1412EC6E8;
  sub_141095530(v150, &v161);

  // Thread-local TOML offset counter (sub_141077010)
  v10 = sub_141077010();
  if (*(_BYTE*)(v10+16) == 1) {
    v12 = *v10; v13 = *(v10+8);
  } else {
    v12 = sub_14108CEE0(); *v10=v12; *(v10+8)=v13; *(v10+16)=1;
  }
  *(v10) = v12 + 1;

  // Main TOML tokenizer loop (sub_14066EA70 = line/token reader)
  // Inner switch dispatches on section header length:
  //   len==3 && "url" → parse URL value via sub_140678AC0
  //   len==4 && "http"/"args" → parse as transport or args Vec
  //   len==7 && "command"/"enabled" → parse cmd string or bool
  //   len==9 && "transport" → resolve transport enum (sse/stdio/http)
  //   len==3 && key=="env" → parse env HashMap via sub_1403703F0
  //   len==7 && key=="headers" → parse headers HashMap via sub_1403703F0
  //   [section_header] → lookup in Swiss-Table hashmap via sub_140624F90
  //     + sub_141213640 (strcmp for section name match)
  //     → if match: set deletion flag on entry
  do {
    sub_14066EA70(&v161, v169);  // get next line/token
    if (token == section_header) {
      // lookup entry in hashmap, handle insertion/eviction
      sub_1406806F0(&v192, key_ptr, key_len, ...);
      // ... subkey parse switch (url/args/command/enabled/transport/env/headers)
    }
  } while (!done);

  // Rebuild output: collect non-deleted sections
  sub_140307CE0(&v175, &v161);   // write cleaned TOML result
  // Write-back: relay_atomic_write_leaf_sys path via sub_1407B3660 or sub_1401DA430
  if (v176 >= 0x15)
    sub_1407B3660(v175.m128i_i64[1], v176, &v168);
  else
    sub_1401DA430(v175.m128i_i64[1], v176, 1, &v168);

  // Return Ok(McpServerListPayload) tag=10
  a1[3] = v169[0];  // count
  *(__m128i*)(a1+1) = v168;  // payload
  *a1 = 10;
  // Free file content buf
  if (v186) sub_140001370(v149, v186, 1);
  if (v156) sub_140001370(v187, v156, 1);
  return a1;
}
```

Terminal leaves: `snooze_file_open_111` @ `0x14108C6F0` (sys-open),
`win32_file_read_bytes_111` @ `0x141093260` (sys-read),
`sub_141077010` / `sub_141095530` (stdlib/mutex).

---

## Depth-4: relay_atomic_write_leaf_with_newline_111

**VA**: `0x14067BE90`

Callees: `relay_atomic_write_leaf_sys` (0x140504310) — **terminal leaf** (sys-write-leaf,
named in 1.0.9 reversals); `sub_1410A1DF0` (future combinator); alloc/dealloc.

---

## Depth-4 (thunk): skill_store_get_all_111

**VA**: `0x14106D960` | **Size**: 8B — trampoline/thunk, no app-level callees.
Returns all installed skills from in-memory skill store. Terminated: thunk-8B.

---

## Delta Summary vs 1.0.9

| Call | 1.0.9 | 1.1.1 |
|---|---|---|
| `pending_auto_switch_state_lock_acquire_111` | absent | NEW — futex gate before skill read |
| `query_installed_skills_with_repo_111` | absent | NEW — skill repo validation |
| `set_codex_router_enabled_blocking_body_win_sys` flow | single TOML write | TOML section write + atomic parse+remove |
| `mcp_config_toml_parse_and_remove_111` in upsert path | absent | NEW |
| `set_codex_router_toml_section_write_win_sys` | present (simpler flow) | modified: also calls mcp_config_toml_parse_and_remove_111 |
| DTO fields | same 9 fields | unchanged |
| IPC command name string | same | unchanged |

**Noise filtered (not delta)**:
- `sub_` / `anon_<hash>` vtable rename stubs → compile-time artifact
- Mutex poison-guard pattern → present in both
- `rust_alloc` size variations → noise
- Register/stack offset changes → noise
- `remove_skill_parse_id_param_111` appearing in callees → reused Option\<String\> parser (not new)
