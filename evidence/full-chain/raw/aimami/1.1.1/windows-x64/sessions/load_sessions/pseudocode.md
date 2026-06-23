# load_sessions — Windows x64 Pseudocode (Gold Leaf)
**session**: wf-aimami111-delta-20260618-goldleaf
**machine**: <本地机器> (producer)
**delta_class**: integrity_recovered
**baseline**: 1.0.9 (load_sessions command absent in 1.0.9 windows)
**date**: 2026-06-18
**gate_tier**: full_gold_leaf

---

## Owner Functions

### load_sessions_handler_111  `0x140992490`  size=0x27A1
IPC command handler registered as `"load_sessions"`.
New in 1.1.1 — no equivalent in 1.0.9 windows binary.
Dispatched by relay command router `sub_140A65470` / `sub_140A9E990`.

**Delta vs 1.0.9**: Entire function NEW. 1.0.9 windows had no `load_sessions` command.

```c
// Tauri IPC command handler for 'load_sessions'
// Source: src\commands\sessions.rs (estimated)
// String refs: "load_sessions" @ 0x1412fa930, "repo" @ 0x1412fa93d
// Side-effects:
//   1. Acquires pending_auto_switch_state_lock (blocks if switch pending)
//   2. Calls query_installed_skills_with_repo_111 (pre-flight skill gate)
//   3. Calls load_sessions_core_111 (enumerate sessions, build CodexHomePaths DTO)
//   4. Returns serialized LoadSessionsResponse via relay IPC
// Relay dispatch: sub_140A65470 @ 0x140a65470 → load_sessions_handler_111
char __fastcall load_sessions_handler_111(unsigned __int8 *a1, __int64 a2, __int64 a3)
{
  // Phase 1: lock acquire
  // pending_auto_switch_state_lock_acquire_111(a1+spinlock_offset, a2, a3)
  // if lock returns non-0 → pending switch active → return error
  v_lock_ret = pending_auto_switch_state_lock_acquire_111(
      (char *)(a1 + spinlock_offset), a2, a3);  // 0x140992xxx
  if (v_lock_ret != 0)
    return relay_error_response();  // pending switch blocks load

  // Phase 2: skill store pre-flight
  // query_installed_skills_with_repo_111(out, &"repo" tag, params)
  // discriminant 6 = None (no skills) → some code paths differ
  // discriminant 3 = Some(skill_list) → proceeds
  query_installed_skills_with_repo_111(&skill_query_out, &tag_repo, &params);
  // [skill_query_out discriminant checked: 3 vs 6]

  // Phase 3: core session enumeration
  load_sessions_core_111(&paths_out, (a1 + sessions_field_offset));
  // builds CodexHomePaths DTO with 9 fields (inc. NEW autoSwitchLogPath)

  // Phase 4: serialize & relay respond
  // codex_home_paths_serialize_111 is called inside core or after
  return relay_respond_success();
}
```

---

### load_sessions_core_111  `0x14016cd50`  size=0x3747
Core session enumeration and CodexHomePaths DTO construction.
**Delta vs 1.0.9**: NEW. Constructs 9-field DTO; 1.0.9 had 8 fields.

```c
// Enumerates codex sessions directory (fs::read_dir via sub_1400467A0)
// Populates CodexHomePaths struct — 9 optional path fields + 3 bool fields
// NEW FIELD vs 1.0.9: autoSwitchLogPath at struct offset +144

// CodexHomePaths struct layout (win x64, 1.1.1):
//   +0    codexHome           Option<PathBuf>   [fat ptr: ptr+len+cap, 24 bytes]
//   +24   accountsPath        Option<PathBuf>
//   +48   authPath            Option<PathBuf>
//   +72   registryPath        Option<PathBuf>
//   +96   sessionsPath        Option<PathBuf>
//   +120  launchAgentPath     Option<PathBuf>
//   +144  autoSwitchLogPath   Option<PathBuf>   <- NEW IN 1.1.1 (+field vs 1.0.9)
//   +168  authExists          bool
//   +169  registryExists      bool
//   +170  sessionsExists      bool

__m128i *__fastcall load_sessions_core_111(__m128i *a1, _QWORD *a2)
{
  // string "autoSwitchLogPath" xref @ 0x14016e63c, 0x14016f593
  // fs::read_dir sub: sub_1400467A0 (OS leaf — terminated)

  // [session entry loop via sub_1401E77D0 iterator]
  // sub_1401649D0: session entry mapper (case 0xC/0xD/0xE/0xF/default)
  //   case 0xC: copy 24 bytes directly
  //   case 0xD: alloc+memcpy for heap path string
  //   case 0xE: sub_1410A9010 path decode; error → discriminant 6
  //   case 0xF: sub_1401EB7A0 path deserializer; goto drop
  //   default: sub_1412217D0 error string builder → err result

  // path deserialization: sub_1401EB7A0 (LEAF)
  // session iter step: sub_1401E77D0 → calls sub_1401649D0 (shared mapper)
  // codex_home_paths_field_tag_fast_111 (0x14021f9a0) / _slow_111 (0x14021f4e0)
  //   → serde field discriminant switch, 9 cases in 1.1.1 (was 8 in 1.0.9)
  //   → autoSwitchLogPath: len=17, discriminant tag = 6

  // After building struct, calls codex_home_paths_serialize_111
}
```

---

### codex_home_paths_serialize_111  `0x1402129d0`  size=0x272
serde serializer for `CodexHomePaths` struct. Confirms 9-field layout.
**Delta vs 1.0.9**: NEW `autoSwitchLogPath` field call at a1+144.

```c
// Serializes CodexHomePaths to JSON via serde.
// Fields emitted in order (all via sub_14025C400 for paths, sub_1402580F0 for bools):
//   sub_14025C400(&v15, "codexHome",        9,  a1+0)    → Option<PathBuf>
//   sub_14025C400(&v15, "accountsPath",     12, a1+24)   → Option<PathBuf>
//   sub_14025C400(&v15, "authPath",         8,  a1+48)   → Option<PathBuf>
//   sub_14025C400(&v15, "registryPath",     12, a1+72)   → Option<PathBuf>
//   sub_14025C400(&v15, "sessionsPath",     12, a1+96)   → Option<PathBuf>
//   sub_14025C400(&v15, "launchAgentPath",  15, a1+120)  → Option<PathBuf>
//   sub_14025C400(&v15, "autoSwitchLogPath",17, a1+144)  ← NEW IN 1.1.1
//       string "autoSwitchLogPath" @ 0x1412c0bfc
//   sub_1402580F0(&v15, "authExists",       10, a1+168)  → bool
//   sub_1402580F0(&v15, "registryExists",   14, a1+169)  → bool
//   sub_1402580F0(&v15, "sessionsExists",   14, a1+170)  → bool

__int64 __fastcall codex_home_paths_serialize_111(
        __int64 a1, _QWORD *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  // Emits JSON opening '{' byte into serializer buffer
  *(_BYTE *)(*(_QWORD *)(v7 + 8) + v8) = 123;  // '{'
  // Then 7 path fields + 3 bool fields
  // sub_14025C400: Option<PathBuf> → JSON string or null
  // sub_1402580F0: bool → JSON true/false
  // Closing '}' via sub_14033FA00 if trailing comma
}
```

---

### load_session_analytics_impl_111  `0x140026bd0`
Analytics sub-path invoked via string `"load_session_analytics"` @ 0x1412ac411.
Accepts `repo` (len=4, @ 0x1412ac6d1) + `range` (len=5, @ 0x1412ac71b) params.
**Delta vs 1.0.9**: Entire function NEW.

```c
// Invoked as separate analytics path alongside main load_sessions
// Gate chain (same as main handler):
//   1. pending_auto_switch_state_lock_acquire_111 → blocks if switch active
//   2. query_installed_skills_with_repo_111 → discriminant 3=proceed / 6=error
//
// Range decoding path (remove_skill_parse_id_param_111 = sub_1402FED40):
//   if range present → sub_1402FED40(out, &args)
//     calls sub_1402F9EB0 to check param presence
//     if discriminant==3 → copy string bytes as range (alloc+memcpy)
//     else → sub_1412233C0 error string → error result
//   range is Option<String>: discriminant 6 = Some(range), else None
//
// Session range filter: sub_1401CB3A0(&result, a2, a3)
//   Acquires lock via InterlockedCompareExchange8 + WakeByAddressSingle
//   Calls quota_history_point_deep_copy_111 (0x1401eb870) for data copy
//   Calls sub_140204F00 with range bounds (start, end)
//   If discriminant==10: sub_1402168D0 converts to ranged result
//   Else: error path via sub_140243FC0 / usage_fetch_error_drop_111
//
// Error response: sub_14080C3C0 (= has_notch_invoke_resolver_respond)
// Success response: sub_140838B40 → calls sub_14022A790 → has_notch_invoke_resolver_respond
// Analytics entry cleanup loop: sub_14033AB50 per entry (96 bytes each)
// Final cleanup: sub_140042650 (dealloc root)

__int64 __fastcall load_session_analytics_impl_111(__int64 a1)
{
  v22 = (string)"load_session_analytics";    // @ 0x1412ac411, len=22
  v23[1] = (string)"repo";                   // @ 0x1412ac6d1, len=4
  // ...
  v4 = pending_auto_switch_state_lock_acquire_111((char *)(v17 + 16), v2, v3);
  if (!v4) {
    query_installed_skills_with_repo_111(&v39, &v22, &v23[1]);
    if (v39[0] != 6) {
      // skill gate passed → proceed to range decode
      remove_skill_parse_id_param_111(&v40, &v22);  // range Option decoder
      if (v40[0] == 6) {                             // 6 = Some(range)
        sub_1401CB3A0(&v26, v4, &v37);               // session range filter
        if (...success...) {
          sub_140838B40(&v22, &v40);                 // analytics response builder
        }
      } else {
        sub_14080C3C0(...);                          // error response (no range)
      }
    } else {
      sub_14080C3C0(...);                            // error response (no skills)
    }
  }
  // cleanup loop: sub_14033AB50 per analytics entry (stride=96)
  // sub_140042650(v16) — final dealloc
}
```

---

## New Callees (delta vs 1.0.9) — Full Bodies

### pending_auto_switch_state_lock_acquire_111  `0x14006edc0`
Windows futex spinlock guarding `load_sessions` + `load_session_analytics`.
**NEW IN 1.1.1 — absent in 1.0.9**

```c
// Mechanism: InterlockedCompareExchange8(addr, 1, 0) + WakeByAddressSingle
// CAS loop uses SIMD hash scan (xmmword_14124E090/A0) to find waiter in queue
// Return: 0 = lock acquired / no pending switch
//         non-0 = pending-auto-switch active → caller returns error to frontend
// Helpers called:
//   sub_14124A510: WaitOnAddress helper (blocks if CAS contended)        [LEAF-OS]
//   sub_14124B1D0: pending-flag reader (checks a2[1] pending byte)       [LEAF]
// On release: *Address = 0; if was==2 → WakeByAddressSingle(Address)    [LEAF-OS]
__int64 __fastcall pending_auto_switch_state_lock_acquire_111(
    char *Address, __int64 a2, __int64 a3)
{
  if (_InterlockedCompareExchange8(Address, 1, 0))
    sub_14124A510(Address);           // WaitOnAddress — contended path
  if (!(2 * *off_141899DC0)) {        // panic-count gate
    v6 = 0;
    v7 = (unsigned __int8)Address[1]; // pending byte
    if (!v7) goto LABEL_5;
    // ... SIMD hashmap scan for waiter object
    (*(vtable+24))(&v23, v16, a3);    // vtable dispatch on waiter
    if (!v26 && 2**v5 && !sub_14124B1D0(...))
      v25[1] = 1;                     // set wake pending byte
    // release: *Address = 0; if was==2 → WakeByAddressSingle
  }
  v6 = sub_14124B1D0(Address, a2, a3);
  // ... same release path
  // WakeByAddressSingle(Address) if *Address was 2
  return v16;  // 0 = ok; non-0 = switch pending
}
```

---

### query_installed_skills_with_repo_111  `0x141214620`
Pre-flight skill store lookup before any session load.
**NEW IN 1.1.1 — absent in 1.0.9**

```c
// Builds two async task pairs via sub_1410A1DF0 (future builder)
//   task1: args (a2=params ptr, a3=params) → JoinHandle via sub_141222DD0
//   task2: (v10=task1 handle, skill_store_get_all_111) → future chain
// Sets discriminant *(_BYTE *)a1 = 3 (Some result) then copies future result
// Cleanup: sub_14106D970 (JoinHandle drop)
// Discriminant outputs:
//   3 = Some(skill_list) — skills found → main handler proceeds
//   6 = None — no skills installed → analytics error path
__int64 __fastcall query_installed_skills_with_repo_111(
    __int64 a1, __int64 a2, __int64 a3)
{
  v9[0] = a3;
  v9[1] = sub_140082100;   // executor trampoline
  v9[2] = a2;
  v9[3] = sub_140082100;
  sub_1410A1DF0(v6, &unk_1412B0057, &v9);  // build first future
  v10[0] = sub_141222DD0(v6);              // wrap in JoinHandle
  v9[0] = v10;
  v9[1] = skill_store_get_all_111;         // → skill_store_iter_111
  sub_1410A1DF0(&v7, &unk_1412AE72B, &v9); // build chained future
  *(_BYTE *)a1 = 3;                         // discriminant: Some
  // copy future outputs into a1+1..a1+32
  return sub_14106D970(v10);               // JoinHandle drop
}
```

---

### skill_store_get_all_111  `0x14106d960`
Thunk → `skill_store_iter_111`.
**NEW IN 1.1.1**

```c
__int64 __fastcall skill_store_get_all_111(_QWORD *a1) {
  return skill_store_iter_111(*a1);
}
```

---

### skill_store_iter_111  `0x14106de20`
Vtable-dispatched iterator over skill store entries.
**NEW IN 1.1.1**

```c
// Phase 1: dispatch (*vt+8)(a1) → get first entry
// Phase 2: while next != null: dispatch (*vt+48)(prev) → next entry
// Callbacks:
//   sub_1402488C0: entry visitor callback          [LEAF]
//   sub_1410A8340: repo-filter predicate          [LEAF]
// unk_1414E6BA8: vtable for phase-1 dispatch context
// unk_1414E6C90: vtable for phase-2 (next) dispatch context
char __fastcall skill_store_iter_111(__int64 a1, char *a2)
{
  v22 = (*vt+8)(a1);            // first entry (vtable dispatch)
  v21 = sub_1402488C0;          // visitor
  v7 = sub_1410A8340(a2[0], a2[1], &unk_1414E6BA8, &v20);  // repo filter phase-1
  if (v7) return 1;             // found match
  if (a2[18] < 0) {
    // has more: next-entry loop
    v11 = (*vt+48)(a1);         // next entry dispatch (vtable+48)
    while (v15) {
      v18 = (*vt+48)(v15);
      if (sub_1410A8340(v5, v6, &unk_1414E6C90, &v20)) return 1;
      v15 = v18;
    }
  }
  return 0;
}
```

---

## Deep Call Tree — dim3 level 4+ bodies

### sub_1401CB3A0  (session range filter, depth 4 from handler)
```c
// Called from load_session_analytics_impl_111 with range option
// Acquires same spinlock pattern (InterlockedCompareExchange8 + WakeByAddressSingle)
// Calls quota_history_point_deep_copy_111 (0x1401eb870) to deep-copy session data
// Calls sub_140204F00(out, v28, v53[1], v53[2]) — range bounds apply
// If sub_140204F00 discriminant==10: success path
//   sub_1402168D0(&v43, &v31) → convert to ranged session list result
//   Writes result at a1+0..a1+112 (multiple OWORD assignments)
// Else: error path
//   sub_140243FC0(&v43, v34) — format error string
//   usage_fetch_error_drop_111(&v35) — cleanup
//   Sets a1[0] = 0x8000000000000000 (error discriminant)
// Lock release: *a2 = 0; if was==2 → WakeByAddressSingle(a2)
// Cleanup: diagnostic_paths_drop_sys(v28) @ 0x140046870
// Returns: a1 (result struct pointer)
```

### sub_140838B40  (analytics response builder, depth 4 from handler)
```c
// Copies 0x168 bytes from a1 via sub_141212FB0
// If *a2 is negative (error discriminant):
//   builds error response via simple copy
// Else:
//   sub_14022A790(v19, v16) — process analytics data into response format
//   If discriminant == 0x8000000000000025: extract m256i[1..3] directly
//   Else: sub_140E30410 (format/convert) → sub_140807390 (drop intermediate)
//         set result discriminant byte = 3 (Some)
// Final: has_notch_invoke_resolver_respond(v15, v4, &v21, ...) [LEAF — relay respond]
//   = sub_14080C3C0
```

### sub_1401649D0  (session entry mapper, depth 4 from load_sessions_core_111)
```c
// Switch on *a2 (entry type discriminant):
// case 0xC: direct 24-byte copy (a1 = a2+8..+24) → return
// case 0xD: alloc(v11, 1) + memcpy(v14, v13, v11)
//           *a1 = v11; *(a1+8) = v15; *(a1+16) = v11
//           sub_1401D4850(a2) → drop input entry [LEAF]
// case 0xE: sub_1410A9010(v17, v4, v5) path decode
//           if ok: copy path fields a1+0/8/16
//           if err: sub_141248270 error string; *a1 = 0x8000000000000000; dealloc
// case 0xF: sub_1401EB7A0(a1, v9, v10) path deserializer [LEAF]
//           sub_1401D4850(a2) drop [LEAF]
// default: sub_1412217D0 error string builder [LEAF]
//          *a1 = 0x8000000000000000 (error discriminant)
```

### remove_skill_parse_id_param_111 / sub_1402FED40  (range param decoder, depth 3 from analytics)
```c
// Parses "range" optional param from IPC args
// sub_1402F9EB0(a2) → checks if "range" key present (masked bit test)
// If present AND *v7 == 3:
//   Extract range string: v9 = *(a2+24) length, v11 = *(a2+16) ptr
//   alloc(v9,1) + memcpy → string copy
//   *a1 = 6; *(a1+8) = len; *(a1+16) = ptr; *(a1+24) = len  ← Some(range)
// Else: sub_1412233C0 error string; sub_140E30410 format
//   *a1 = 3 + copy result  ← discriminant pattern
// Cleanup: sub_1402F7F90(v17) — param source drop
```

---

## serde Field Deserializer (delta field confirmed)

`codex_home_paths_field_tag_fast_111` `0x14021f9a0` /
`codex_home_paths_field_tag_slow_111` `0x14021f4e0`

Byte-comparison switch covering all 9 serde keys.
`autoSwitchLogPath` (len=17, case 17): tag byte → discriminant 6.
**Absent in 1.0.9** deserializer (which had only 8 fields, case 17 did not exist).

---

## dim1 — Frontend CCF

```
Frontend invoke: loadSessions:()=>ne("load_sessions")
  file: assets/index-DdcCOEJG.js  line:86  col:25748
  kind: tauriInvokeWrapper  params: ()  argKeys: []
  wrapper name: loadSessions
Source: raw/aimami/1.1.1/windows-x64/frontend/ipc-contracts.jsonl
```

Zero args on frontend side — matches backend (no params in handler beyond relay context).

---

## dim4 — DTO / Struct Fields

### CodexHomePaths (win x64, 1.1.1 — 9 fields)
| offset | field | type | serde key | discriminant |
|--------|-------|------|-----------|--------------|
| +0 | codexHome | Option\<PathBuf\> | "codexHome" | - |
| +24 | accountsPath | Option\<PathBuf\> | "accountsPath" | - |
| +48 | authPath | Option\<PathBuf\> | "authPath" | - |
| +72 | registryPath | Option\<PathBuf\> | "registryPath" | - |
| +96 | sessionsPath | Option\<PathBuf\> | "sessionsPath" | - |
| +120 | launchAgentPath | Option\<PathBuf\> | "launchAgentPath" | - |
| **+144** | **autoSwitchLogPath** | **Option\<PathBuf\>** | **"autoSwitchLogPath"** | **6 (NEW)** |
| +168 | authExists | bool | "authExists" | - |
| +169 | registryExists | bool | "registryExists" | - |
| +170 | sessionsExists | bool | "sessionsExists" | - |

**Baseline (1.0.9)**: 8 fields — autoSwitchLogPath absent.
String "autoSwitchLogPath" @ 0x1412c0bfc (len=17).
serde serializer confirmed @ 0x1402129d0: calls sub_14025C400 at a1+144.

---

## Error Paths

1. **pending_auto_switch active**: lock returns non-0 → handler early-return error
2. **query_installed_skills discriminant=6**: no skills → analytics error path → `has_notch_invoke_resolver_respond` error envelope
3. **range param missing/invalid**: `remove_skill_parse_id_param_111` → `sub_14080C3C0` error response
4. **range filter discriminant≠10**: `sub_1401CB3A0` → `sub_140243FC0` format error → `usage_fetch_error_drop_111` cleanup
5. **session entry decode error**: `sub_1401649D0` default case → error discriminant `0x8000000000000000`
6. **panic path**: `sub_14124BFE0` (Rust unwrap panic) at several call sites — guarded by `2 * *off_141899DC0` panic-count check
