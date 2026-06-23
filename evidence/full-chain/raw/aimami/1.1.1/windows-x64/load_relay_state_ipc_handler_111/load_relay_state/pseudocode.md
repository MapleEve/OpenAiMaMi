# load_relay_state — IPC Handler Pseudocode
<!-- session=wf-aimami111-delta-20260618-goldleaf | machine=<本地机器> | producer -->
<!-- prev_session=wf-aimami111-delta-20260617-sweep | upgraded=gold-leaf -->
<!-- module=load_relay_state_ipc_handler_111 | platform=windows-x64 | version=1.1.1 -->
<!-- delta_class=callee_set_restructure+DTO_field_addition | baseline=1.0.9 | sha=d24e429a -->

## Owner

| 符号 | VA | 大小 |
|---|---|---|
| `load_relay_state_ipc_handler_111` | `0x140015870` | `0x38f` bytes (911) |

字符串锚点：`"load_relay_state"` @ `0x1412AC4B0`，xref 来自 owner 内 `0x1400158F0`（唯一 xref）。
模块字符串：`"codexmate_lib::core::relay::manager"` @ `0x1412EA8F8`
源路径字符串：`"src\core\relay\manager.rs"` @ `0x1412EA601`

---

## depth-0 / depth-1: owner (完整体，已验证 vs 逆向分析 鲜活 decompile 2026-06-18)

```c
// load_relay_state IPC handler @ 0x140015870
// 1.1.1 vs 1.0.9 DELTA:
//   (1) query_installed_skills_with_repo_111 — NEW pre-flight skill check，1.0.9 无
//   (2) relay_config_connection_refresh_and_write_sys — NEW 写盘+TCP副作用，1.0.9 success path 无
//   (3) "warnings" field 加入 DTO 序列化
//   (4) 旧 auth_guard/JSON_state_dispatcher/load_relay_state_core 路径已移除
// IPC resolver: has_notch_invoke_resolver_respond @ 0x14080C3C0
// Arc listener cleanup: has_notch_arc_listener_drop_loop @ 0x14033AB50
//
// CORRECTION vs sweep session: discriminant==6 → None/error (not Some)
//   LOBYTE(v25[0]) == 6 → goto error path (has_notch_invoke_resolver_respond)
//   LOBYTE(v25[0]) != 6 → success path (v4 = v25[0].hi = skill store handle)
__int64 __fastcall load_relay_state_ipc_handler_111(__int64 a1)
{
  // Stack layout (key slots):
  //   v14[360]  @ rsp+30h   — IPC context copy (error path)
  //   v15[512]  @ rsp+198h  — InvokeResolver context copy
  //   v17[384]  @ rsp+3A0h  — second context slice
  //   v25[25]   @ rsp+6F0h  — skill query result (_OWORD array)
  //   v26       @ rsp+880h  — IPC string ptr ("load_relay_state")
  //   v27       @ rsp+888h  — IPC string metadata
  //   v21       @ rsp+530h  — relay_state_snapshot_to_ok_response_sys result

  v40 = -2;                                    // 0x140015887 stack canary init
  sub_141212FB0(v15, a1, 520);                 // 0x1400158a8 copy InvokeResolver ctx [0..520]
  sub_141212FB0(v17, a1 + 520, 400);           // 0x1400158c4 copy ctx [520..920]
  v35 = *[a1 + 936];                           // 0x1400158d0 Arc listener count
  v34 = *[a1 + 920];                           // 0x1400158de Arc listener slice (oword)
  v30 = 0;                                     // 0x1400158e5

  // string anchor setup for tracing/routing
  v26 = aLoadRelayState;   // "load_relay_state" @ 0x1412AC4B0   0x1400158f7
  v27.lo = 16;             // string len                          0x1400158fe
  v27.hi = aManager;       // "manager" @ 0x1412AC6C0             0x140015910
  v28.lo = 7;              // manager len                          0x140015917
  v28.hi = v15;            // context ptr                          0x140015922
  v29 = &v34;              // 0x140015930
  v39 = 1;                 // 0x140015942

  // ── step 1: Tokio dispatcher CAS spinlock gate ──────────────────────────
  v4 = run_codex_router_diagnostics_owner_sys(v16 + 16, v2, v3); // 0x140015949
  if (!v4) {                                                       // 0x140015952
    // ── step 2: [NEW IN 1.1.1] pre-flight skill store query ─────────────
    v39 = 1;                                                       // 0x14001595b
    query_installed_skills_with_repo_111(v25, &v26, &v27 + 8);    // 0x140015970
    // discriminant at LOBYTE(v25[0]):
    //   6 = None (skill not found) → error IPC response
    //   3 = Some(found)            → success path
    if (LOBYTE(v25[0]) == 6) {                                     // 0x14001597d (!=6 is success)
      // error path: copy result and send IPC error
      v28 = v25[1];                        // 0x140015ab8
      v27 = v25[0];                        // 0x140015abf
      sub_141212FB0(v14, a1 + 520, 360);   // 0x140015ad6
      v31 = *[a1 + 880];                   // 0x140015ae9
      v32 = *[a1 + 896];                   // 0x140015af7
      v26 = 1;                             // 0x140015b0a
      v39 = 0;                             // 0x140015b15
      has_notch_invoke_resolver_respond(v14, v18, &v26, &v31, v19, v20); // 0x140015b35
      goto LABEL_16;
    }
    v4 = v25[0].hi;  // skill store handle (Arc ptr)  0x140015983
  }

  // ── step 3: snapshot + connection refresh + atomic write ────────────────
  v39 = 1;                                                         // 0x14001598a
  relay_state_snapshot_to_ok_response_sys(&v21, v4);              // 0x14001599b
  sub_141212FB0(v25, a1 + 520, 400);                              // 0x1400159b1

  // decode result (Ok=negative sentinel, Err=positive)
  if (__OFSUB__(0, v21)) {  // v21 < 0 → Ok, has data             0x1400159b8
    v6 = v22;  v7 = v23;  v24 = v24;                              // 0x1400159c1..cf
    if (v24 < 0) { v9 = 0; goto LABEL_7; }                        // 0x1400159d9
    if (v24) {
      v10 = sub_140001360(v24, 1);  // alloc for data copy        0x140015a2c
      if (!v10) { LABEL_7: sub_14124BCCB(v9, v24); }              // alloc-fail panic
      sub_141212FB0(v10, v7, v24);  // copy data payload          0x140015a42
      if (v6) sub_140001370(v7, v6, 1);  // drop old             0x140015a58
    } else {
      if (v22) sub_140001370(...);
    }
    LOBYTE(v27) = 3;           // Some discriminant                0x140015a5d
    v27.hi = v24;
    v28 = v8;
    v26 = 0x8000000000000000;  // Ok tag                          0x140015a83
    goto LABEL_14;
  } else {
    sub_141212FB0(&v26, &v21, 448);  // flat copy result           0x140015a0d
  }

  LABEL_14:
  v38 = 0;                                                         // 0x140015a8a
  // ── step 4: send IPC response ────────────────────────────────────────────
  relay_state_send_ipc_response_sys(v25, &v26);                   // 0x140015a9f

  LABEL_16:
  // ── cleanup: drop Arc listener vec ───────────────────────────────────────
  if (!__OFSUB__(0, v34)) {                                        // 0x140015b44
    v11 = v34.hi;
    while (v36 != v37) {                                           // 0x140015b8e
      ++v37;                                                        // 0x140015b93
      v12 = v11 + 96;
      has_notch_arc_listener_drop_loop();                          // 0x140015b9e
      v11 = v12;
    }
    if (v34.lo)
      sub_140001370(v34.hi, 96 * v34.lo, 8);                      // 0x140015bca dealloc
  }
  return sub_140042650(v15);  // drop InvokeResolver context       0x140015bdc
}
```

---

## depth-2: run_codex_router_diagnostics_owner_sys @ 0x14006F4B0

```c
// Tokio dispatcher CAS spinlock + SIMD hashmap probe
// hash=0x945CA2F02A2B6F44, vtable[ptr-8+24]=Tokio dispatcher fn
// WakeByAddressSingle unlock pattern
// 1.0.9 vs 1.1.1: 结构相同，无 app 级 callee delta
// terminated_reason: leaf(Tokio-sync primitives only)
__int64 __fastcall run_codex_router_diagnostics_owner_sys(char *Address, __int64 a2, __int64 a3)
{
  // CAS spinlock acquire
  if (_InterlockedCompareExchange8(v4, 1, 0))
    sub_14124A510(v4);  // Tokio park/wait
  // tracing gate
  if (2 * *off_141899DC0) { sub_14124B1D0(a1, a2, a3); }
  // SIMD hashmap probe hash=0x945CA2F02A2B6F44 → vtable dispatch at [ptr-8]+24
  (*(fn*)(*(v14-8) + 24))(&v23, v16, a3);
  // CAS release + WakeByAddressSingle
  *v6 = 0;
  if (*v6 == 2) WakeByAddressSingle(v4);
  return v16;  // 0=dispatched ok, nonzero=gate fail
}
```
terminated_reason: `leaf(Tokio-sync: CAS+SIMD-hashmap+vtable-dispatch+WakeByAddressSingle)`

---

## depth-2: query_installed_skills_with_repo_111 @ 0x141214620 [DELTA: NEW IN 1.1.1]

```c
// Pre-flight skill check. Absent in 1.0.9.
// Chains: self → sub_1410A1DF0(closure) → skill_store_get_all_111 → skill_store_iter_111
// Writes discriminant byte into *a1: 3=Some(found), 6=None(not found)
// Also shared by: import_skill_cmd_111, load_sessions_handler_111, load_session_analytics_impl_111
__int64 __fastcall query_installed_skills_with_repo_111(__int64 a1, __int64 a2, __int64 a3)
{
  // build repo filter closure in v9 (256-bit SIMD slot)
  v9.m256i_i64[0] = a3;                       // 0x14121463d
  v9.m256i_i64[1] = sub_140082100;            // 0x141214648 repo filter fn
  v9.m256i_i64[2] = a2;                       // 0x14121464c
  v9.m256i_i64[3] = sub_140082100;            // 0x141214650
  sub_1410A1DF0(v6, &unk_1412B0057, &v9);     // 0x141214666 build filter closure
  v10[0] = sub_141222DD0(v6);                 // 0x141214673 iter adapter

  // chain iter with skill_store_get_all_111
  v9.m256i_i64[0] = v10;                      // 0x14121467b
  v9.m256i_i64[1] = skill_store_get_all_111;  // 0x141214686 → skill_store_iter_111
  sub_1410A1DF0(&v7, &unk_1412AE72B, &v9);    // 0x141214699 chain iter

  // write result into output slot: discriminant=3(Some) always written here;
  // actual item availability encoded in following owords
  *(_BYTE*)a1 = 3;                            // 0x1412146af
  *(_OWORD*)(a1 + 1)  = *v9.m256i_i8;        // 0x1412146be result low
  *(_OWORD*)(a1 + 16) = v4;                   // 0x1412146c2 result high

  return sub_14106D970(v10);                  // 0x1412146d4 cleanup iter
}
```
terminated_reason: `leaf(skill_store_iter_111: pure in-memory Arc iterator, no FS/HTTP/sidecar)`

---

## depth-2: relay_state_snapshot_to_ok_response_sys @ 0x140217490

```c
// Orchestrates: log-check → [NEW 1.1.1] TCP conn refresh+write → Arc read-lock snapshot → serde encode → build Ok response
// Error strings:
//   "relay state poisoned" @ 0x1412EA5ED (in relay_state_read_lock_snapshot_sys)
//   "a Display implementation returned an error unexpectedly" @ 0x1412C23F0 (serde Display panic)
// 1.0.9 delta: relay_config_connection_refresh_and_write_sys() call absent in 1.0.9
__int64 __fastcall relay_state_snapshot_to_ok_response_sys(__int64 a1, __int64 a2)
{
  relay_state_pre_response_log_check_sys(a2);         // 0x1402174b7 — log only, read-only
  relay_config_connection_refresh_and_write_sys(a2);  // 0x1402174bf — [NEW 1.1.1] TCP+atomic-write side-effect
  relay_state_read_lock_snapshot_sys(v21, a2, v4);    // 0x1402174d1 — Arc RwLock read + clone state

  sub_14072A3A0(&v18, v21);    // 0x1402174e1 relay state convert/clone into v18/v19/v20

  // slot init loop: zero out vtable pointers, 8x-unrolled, stride=232 bytes
  if (v20) {
    v8 = v19;
    if ((~(unsigned __int8)(v7 / 0xE8) & 7) != 0) {
      v9 = ...; do { v8[11] = nullptr; v8 += 29; ++v9; } while (v9);
    }
    if (v7 >= 0x658) {
      v10 = &v5[v6];
      do {
        v8[11]=v8[40]=v8[69]=v8[98]=v8[127]=v8[156]=v8[185]=v8[214]=nullptr;
        v8 += 232;
      } while (v8 != v10);
    }
  }
  relay_state_snapshot_drop_sys(v21);  // 0x1402175d7 drop snapshot (renamed sub_140234AC0)

  sub_141212FB0(&v22, &v19, 360);      // 0x1402175f3 copy state data

  if (__OFSUB__(-v11, 1)) {  // v11 > 0 → has relay data        0x1402175fb
    // copy 6 owords of relay state into result slots
    v21[0]=v22; v21[1]=v23[0]; v21[2]=v23[1]; v21[3]=v23[2]; v21[4]=v23[3]; v21[5]=v23[4];
    // zero + init serde state struct
    *(_QWORD*)&v26 = 0; *((_QWORD*)&v26+1) = 1;
    v27 = 0; v20 = 1610612768;
    v18 = &v26; v19 = &off_1412C23C0;  // vtable for Display impl
    // serde Display encode
    if (sub_140243FC0(v21, &v18)) {    // 0x1402176ae
      sub_14124BFE0(aADisplayImplem_2, 55, &v30, &unk_1412C2718, &off_1412C2478);  // panic
    }
    v29 = v27; v28 = v26;
    sub_1402342B0(&v22);               // 0x1402176df drop source buf
    // write Ok result into *a1: (discriminant=0x8000000000000000, ptr, len)
    *(a1 + 24) = v29;
    *(a1 + 8)  = v12;
    *a1 = 0x8000000000000000;          // Ok tag                  0x140217712
  } else {
    // no data / empty relay state
    v29 = *v23[0].lo;
    sub_141212FB0(v17, (char*)v23 + 8, 336);
    set_codex_api_slots_ok_response_build_sys(a1, &v14);  // 0x140217771
  }
  return a1;  // 0x140217779
}
```

---

## depth-3: relay_config_connection_refresh_and_write_sys @ 0x1406DA970 [DELTA: NEW CALL PATH]

```c
// codexmate_lib::core::relay::manager
// Module string: "codexmate_lib::core::relay::manager" @ 0x1412EA8F8
// Source: "src\core\relay\manager.rs" @ 0x1412EA601
//
// Side-effect summary:
//   - TCP connect probe: sub_141077F30 (300ms timeout) + sub_14108D4A0 (50ms retry sleep)
//   - closesocket (Winsock): @ 0x14124DED8
//   - relay_config_serialize_and_atomic_write_sys called on BOTH branches:
//       branch-A (connect ok,   0x1406DAF73): update host/port/flags/strings, write
//       branch-B (connect fail, 0x1406DB118): zero host/port/flags/strings, write
//   - write result discriminant 10=Ok; else sub_140708350 (error log, no panic)
volatile signed __int64 * relay_config_connection_refresh_and_write_sys(__int64 a1, __int64 a2, __int64 a3)
{
  result = *[a1 + 32];   // Arc<RelayConfig> ptr
  if (!result) return result;  // no config → noop

  _InterlockedIncrement64(result);  // Arc refcount++

  // CAS spinlock acquire on v5+16 (Mutex lock byte of RelayManagerInner)
  v5 = *[a1 + 16];       // Arc<Mutex<RelayManagerInner>> inner
  if (_InterlockedCompareExchange8(v5 + 16, 1, 0))
    sub_14124A510(v5 + 16);  // Tokio mutex wait
  if (2 * *off_141899DC0) { sub_14124B1D0(...); }  // tracing gate

  // check for existing connection handle
  if (*[v5 + 24] /* Option<Arc<conn>> */) {
    // TCP connect probe: WORD3(v59)=port from v5+32, AF_INET loopback
    WORD3(v59) = *[v5 + 32];   // port (u16)
    *(_DWORD*)((char*)&v59 + 2) = 16777343;  // 127.0.0.1 in sin_addr

    if (!sub_141077F30(&v59, 0, 300000000)  // attempt 1: 300ms timeout
      || (sub_1402F87A0(v15),               // close probe socket
          sub_14108D4A0(0, 50000000),       // sleep 50ms
          !sub_141077F30(&v59, 0, 300000000))) {  // attempt 2: retry
      // both attempts fail → close socket, unlock, return
      closesocket(v15);
      goto LABEL_87;
    }
    sub_1402F87A0(v15);  // close probe socket (connect ok path)
    // log: tracing event via sub_140ECE370 @ 0x1406DAB59
    // drop old connection Arc handle (sub_1405A4BF0)
  }

  // clone relay config Arc refs: sub_1405AA280
  sub_1405AA280(&v55, v75 + 2, &v59, &off_1412EAA68);

  if (__OFSUB__(0, v55)) {  // has relay endpoint (v55 < 0)
    // ── branch-A: connection succeeded ────────────────────────────────────
    // acquire inner relay config lock (CAS on v17+16)
    // build new host/path strings via sub_1410A1DF0 closures
    // drop old string fields:
    if (*[v17 + 72]) sub_140001370(*[v17 + 80], *[v17 + 72], 1);
    if (*[v17 + 96]) sub_140001370(*[v17 + 104], *[v17 + 96], 1);
    if (*[v17 + 120]) sub_140001370(*[v17 + 128], *[v17 + 120], 1);
    // write new connection state into RelayConfig struct:
    *[v17 + 72..104] = new_host/path strings;
    *[v17 + 120] = 0x8000000000000000;  // Some(?) tag
    *[v17 + 144] = v40;  // port (u16)
    *[v17 + 146] = 1;    // connected = true
    relay_config_serialize_and_atomic_write_sys(&v59, v21 + 2, v17 + 24);  // 0x1406DAF73
    if (v59.discriminant != 10) sub_140708350(&v59);  // log write error
    // update port in v5+32, release inner lock, goto LABEL_65
    *[v5 + 32] = (u16)Address;
    goto LABEL_65;
  } else {
    // ── branch-B: no endpoint / connect failed ────────────────────────────
    // acquire inner relay config lock (CAS on v17+16)
    // zero out connection fields:
    *[v17 + 72] = 0;  *[v17 + 80]  = 1;   // host: null ptr + len=1(empty)
    *[v17 + 88] = 0;  *[v17 + 104] = 1;   // path: null ptr
    *[v17 + 112] = 0;
    *[v17 + 120] = v59;                    // restore prior tag
    *[v17 + 136] = v60;
    *[v17 + 144] = 0;   // port = 0
    *[v17 + 146] = 0;   // connected = false
    relay_config_serialize_and_atomic_write_sys(&v59, v21 + 2, v17 + 24);  // 0x1406DB118
    if (v59.discriminant != 10) sub_140708350(&v59);
    // release inner lock
  }

  LABEL_65:
  // update connection handle pointer in v5+24, port in v5+32
  *[v5 + 24] = v78;
  *[v5 + 32] = (u16)Address;
  // release outer mutex (v5+16)
  LABEL_83: [release v5+16 lock, WakeByAddressSingle if waiters]

  LABEL_87:
  result = v75;
  if (!_InterlockedDecrement64(v75))
    sub_1405A5120(&v75);  // drop outer Arc
  return result;
}
```
terminated_reason: `relay_config_serialize_and_atomic_write_sys → relay_atomic_write_leaf_sys (depth-4/5)`

---

## depth-4: relay_config_serialize_and_atomic_write_sys @ 0x1406EAED0

```c
// JSON serialize relay config → atomic write aimami-relay.json
// result discriminant: 10=Ok, 9=IoError, 2=DirError, 3=SerializeError
// callees confirmed: relay_config_check_parent_dirs_sys@0x1406F2870,
//   sub_14020A3E0@0x14020A3E0(serde_json), relay_atomic_write_leaf_sys@0x140504310
_QWORD* relay_config_serialize_and_atomic_write_sys(_QWORD* a1, __int64 a2, __int64 a3)
{
  v6 = relay_config_check_parent_dirs_sys(a2);  // FS dir existence check (no write)
  if (v6) { *a1 = 2; a1[1] = v6; return a1; }  // DirError
  v8 = alloc(128);  // JSON output buffer
  v9 = sub_14020A3E0(a3, &v15);  // serde_json: serialize relay config struct → JSON bytes
  if (!v9) {
    v13 = relay_atomic_write_leaf_sys(v11, v12, v22_ptr, v23_len);
    if (v13) { *a1 = 9; /* IoError */ }
    else      { *a1 = 10; /* Ok */ }
  } else {
    *a1 = 3; a1[1] = v9;  // SerializeError
  }
  return a1;
}
```

---

## depth-5: relay_atomic_write_leaf_sys @ 0x140504310 [LEAF]

```c
// codexmate_lib::core::relay::atomic_write
// Error string: "atomic write: missing parent" @ 0x1412D9476
// WIN32 calls: GetCurrentProcessId@0x14108B3B0, __imp_CloseHandle@0x14124D788
// uuid: uuid_v4_generate_raw_sys@0x140F5A860
// file ops: sub_14107AD30(CreateFile), sub_141097C30(WriteFile), sub_140504130(rename)
// cleanup: snooze_file_delete_111@0x14108BF60 (deferred delete tmpfile on rename fail)
// callees verified: 20 total (sub_14107A3E0, sub_141082B80, sub_14107A5E0, sub_1410A9010,
//   GetCurrentProcessId, uuid_v4_generate_raw_sys, sub_1410A1DF0, sub_14107A2D0,
//   sub_140001370, sub_141087E20, sub_141097C30, sub_140041790, sub_14107AD30,
//   __imp_CloseHandle, sub_140504130, sub_14031F0B0, snooze_file_delete_111,
//   sub_1403A6670, sub_140504900, sub_14124C270)
__int64 relay_atomic_write_leaf_sys(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  if (!sub_14107A3E0(a1, a2))  // check parent dir exists
    return sub_141072000(20, aAtomicWriteMis, 28);  // "atomic write: missing parent"
  GetCurrentProcessId();                    // 0x14108B3B0
  uuid_v4_generate_raw_sys(&v43);           // 0x140F5A860 tmpfile suffix
  // build tmpfile path = base + "." + pid + "-" + uuid_hex
  sub_14107AD30(...);                       // CreateFile(tmpfile, WRITE, CREATE_ALWAYS)
  // WriteFile loop via sub_141097C30 (chunked if a4 > chunk_size)
  CloseHandle(hObject[0]);                  // 0x14124D788
  sub_140504130(...);                       // rename tmpfile → final path
  // on rename fail: snooze_file_delete_111(tmpfile) — schedule background delete
  sub_140504900(v11, v12);                  // cleanup temp path strings
}
```
terminated_reason: `leaf(Win32-FS: CreateFile/WriteFile/CloseHandle/rename + snooze_file_delete_111)`

---

## depth-3: relay_state_read_lock_snapshot_sys @ 0x1406E8480

```c
// Arc<RwLock<RelayState>> read-lock + clone state snapshot
// panic string: "relay state poisoned" @ 0x1412EA5ED  (src\core\relay\manager.rs)
// 1.0.9 vs 1.1.1: 结构相同，无 delta
__int64 relay_state_read_lock_snapshot_sys(__int64 a1, __int64 a2, __int64 a3)
{
  v4 = *[a2 + 8];  // Arc<RwLock<RelayState>> inner ptr
  if (_InterlockedCompareExchange8((volatile signed __int8*)(v4 + 16), 1, 0))
    sub_14124A510((volatile void*)(v4 + 16));  // Tokio mutex wait
  // poison check
  if (*(_BYTE*)(v4 + 17)) panic("relay state poisoned");  // sub_14124BFE0 @ 0x1406E854B
  sub_14072A3A0(v3, v4 + 24);   // clone/extract relay state struct
  WakeByAddressSingle((PVOID)(v4 + 16));  // release read lock
}
```
terminated_reason: `leaf(Arc-RwLock-read + memclone + WakeByAddressSingle)`

---

## depth-3: relay_state_response_serialize_dto_sys @ 0x1402291E0 [DELTA: warnings field]

```c
// JSON serializer for load_relay_state response DTO (1.1.1)
// Field order: schemaVersion → success → code → message → warnings[NEW] → data
// "warnings" key string @ 0x1412C06DA — absent in 1.0.9 DTO serializer chain
_QWORD* relay_state_response_serialize_dto_sys(_QWORD* a1, __int64 a2)
{
  v4 = alloc(128);  // JSON buffer
  *v4 = '{';
  sub_140261480(&v18, "schemaVersion", 13, a2 + 440);   // u32 field
  sub_1402580F0(&v18, "success",       7,  a2 + 444);   // bool field
  sub_14025C400(&v18, "code",          4,  a2 + 0);     // string field
  sub_14025C400(&v18, "message",       7,  a2 + 24);    // string field
  relay_response_field_warnings_write_sys(&v18, a2 + 48);          // [NEW IN 1.1.1]
  sub_140257250(&v18, "data",          4,  a2 + 72, &v14);  // object field (368 bytes)
  *a1 = 0x8000000000000025;  // Ok discriminant + close '}'
}
```

---

## depth-4: relay_response_field_warnings_write_sys @ 0x1402494C0 [DELTA: NEW IN 1.1.1]

```c
// Writes "warnings" JSON key-value. Absent in 1.0.9.
// key string "warnings" (len=8) @ 0x1412C06DA
__int64 relay_response_field_warnings_write_sys(_BYTE* a1, __int64 a2)
{
  if (*a1) return sub_141248EC0();  // error state passthrough
  return sub_140257CD0(a1, "warnings" /*0x1412C06DA*/, 8, a2);
}
```
terminated_reason: `leaf(JSON-field-writer, no FS/HTTP/sidecar)`

---

## depth-2: relay_state_send_ipc_response_sys @ 0x140831F00

```c
// IPC response dispatcher
// relay_state_response_serialize_dto_sys: JSON encode (includes warnings field in 1.1.1)
// has_notch_invoke_resolver_respond @ 0x14080C3C0: Tauri IPC InvokeResolver
__int64 relay_state_send_ipc_response_sys(__int64 a1, __int64 a2)
{
  if (*(_QWORD*)a2 < 0) {  // raw bytes path (Ok sentinel 0x8000000000000000)
    v18 = *(_OWORD*)(a2 + 8);
  } else {
    relay_state_response_serialize_dto_sys(v15, v12);  // JSON encode DTO
  }
  return has_notch_invoke_resolver_respond(v13, v4, &v17, v3 + 360, v9, v10);
}
```

---

## depth-2: set_codex_api_slots_ok_response_build_sys @ 0x140216BA0

```c
// Builds Ok-response: "ok" tag + "success" code string + 368-byte data payload copy
// *(a1+440)=1, *(a1+444)=1 (success flags), *a1=2 (Ok discriminant)
// 1.0.9 vs 1.1.1: structurally identical, no delta
__int64 set_codex_api_slots_ok_response_build_sys(__int64 a1, __int64 a2)
{
  v4 = alloc(2);  *v4 = 0x6B6F;       // "ok" little-endian
  v7 = alloc(7);  *v7 = 0x63636573;   // "succ"
  *(v7+3) = 0x73736573;               // "ess" → "success"
  sub_141212FB0(a1 + 72, a2, 368);    // copy 368-byte data payload
  *(a1+440) = 1; *(a1+444) = 1;
  *a1 = 2;  // Ok discriminant
  *(a1+8) = v6; *(a1+16) = 2;        // tag ptr+len
  *(a1+24) = 7; *(a1+32) = v8; *(a1+40) = 7;  // code ptr+len+cap
  *(a1+48) = 0; *(a1+56) = 8; *(a1+64) = 0;   // warnings slot init
}
```
terminated_reason: `leaf(pure-struct-builder, no FS/HTTP/sidecar)`

---

## depth-3: skill_store_get_all_111 @ 0x14106D960

```c
// thunk → skill_store_iter_111 @ 0x14106DE20
// Shared: query_installed_skills_with_repo_111, remove_mcp_server gate
__int64 skill_store_get_all_111(_QWORD* a1) { return skill_store_iter_111(*a1); }
```
terminated_reason: `leaf(pure-iterator-thunk)`

---

## 编译噪声过滤记录（不算 delta）

- `sub_141212FB0`: memcpy/memmove shim — 寄存器偏移变化，非 delta
- `nullsub_1` (`0x1400013A0`): nop padding — 非 delta
- `sub_14124BCCB`: alloc-fail panic — 非 delta
- `sub_14124A510` / `WakeByAddressSingle`: Tokio mutex wait/wake — 非 delta
- `sub_14124B1D0`: Tokio tracing gate — 非 delta
- `has_notch_arc_listener_drop_loop` (`0x14033AB50`): Arc listener RAII cleanup — 非 delta
- `sub_140708350`: write-error metric/log handler — 非 delta
- `relay_state_snapshot_drop_sys` (`0x140234AC0`): RAII snapshot drop — 非 delta
- vtable 地址/栈偏移变化 — 非 delta
