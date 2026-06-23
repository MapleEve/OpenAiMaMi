# activate_relay_provider — Call Tree (Windows x64)

**session**: wf-aimami111-delta-20260618-goldleaf
**binary**: AiMaMi 1.1.1 win64.exe
**delta_class**: integrity_recovered
**produced**: 2026-06-18
**gate_tier**: gold_leaf
**call_tree_depth**: 6
**terminated_reason**: all_branches_hit_known_leaves

> 校正 vs sweep (2026-06-17)：owner 通过 activate_relay_provider_build_response_sys 调 relay_activate_core_and_persist_sys；新增 relay_state_serialize_under_lock_sys 和 relay_config_connection_refresh_and_write_sys。

```
activate_relay_provider_owner_sys @ 0x140017EC0  [IPC_ENTRY L1]
│  (renamed from activate_relay_provider_ipc_handler_sys; gold-leaf session)
│  IPC cmd: "activate_relay_provider" (23 chars) @ 0x1412AC4EA
│
├── run_codex_router_diagnostics_owner_sys @ 0x14006F4B0  [GATE]
│     WIN lock: ICEX8 + WakeByAddressSingle
│     Tokio dispatcher try-lock: hash=0x945CA2F02A2B6F44
│     vtable[3] = sub_140031D80
│     → 0 = gate fail (early error return, no further calls)
│     → non-zero = owner handle (RelayManagerHandle)
│
├── sub_141214620 @ 0x141214620  [PARSE: "manager" string param, 7 chars]
│     sub_1410A1DF0 (iterator dispatch)
│     sub_141222DD0 (string parse)
│     → tag=6 on Ok
│
├── relay_activate_provider_id_parse_sys @ 0x1402FED40  [PARSE: "providerId", 10 chars]
│     if tag==3: clone string bytes → return tag=6 Ok
│     else: sub_1412233C0 (serde deserialize) → sub_140E30410
│     → tag=6 on Ok
│
├── sub_140240B70 @ 0x140240B70  [PARSE: "ide" string param, 3 chars]
│     iterator dispatch pattern (same as sub_141214620)
│     → tag=6 on Ok
│
├── activate_relay_provider_build_response_sys @ 0x14021B9B0  [RESPONSE BUILD L1B]
│   │  (448B output buffer; wraps core activate + response encoding)
│   │
│   ├── relay_activate_core_and_persist_sys @ 0x1406E7880  [CORE L2]
│   │   │  (368B output; WIN lock; providers Vec mutation; config write; post-login sync)
│   │   │
│   │   ├── relay_state_read_lock_snapshot_sys @ 0x1406E8480  [WIN LOCK + SNAPSHOT]
│   │   │     _InterlockedCompareExchange8(a2[1]+16, 1, 0)
│   │   │     sub_14072A3A0 (quota Vec snapshot copy)
│   │   │     → copies 368B quota Vec state under WIN lock
│   │   │
│   │   ├── relay_state_snapshot_drop_sys @ 0x140234AC0  [LOCK RELEASE path]
│   │   │
│   │   ├── relay_quota_state_lookup_sys @ 0x1406DB960  [LOOKUP]
│   │   │     WIN ICEX8(a2[1]+16)
│   │   │     Vec: ptr=a2[1]+56, count=a2[1]+64
│   │   │     match: entry+16==provider_id(u64) && sub_141213640(str_eq, entry+8, manager)
│   │   │     │
│   │   │     ├── relay_keychain_lookup_for_quota_sys @ 0x1402EE7C0  [KEYCHAIN] [TERMINAL]
│   │   │     │     reads secrets.json auth token (known terminal leaf)
│   │   │     │
│   │   │     └── relay_quota_item_clone_sys @ 0x14065F950  [CLONE 232B] [TERMINAL]
│   │   │           232B memcpy of quota entry; no callees
│   │   │
│   │   ├── [not-found branch: LABEL_28]
│   │   │   ├── relay_config_connection_refresh_and_write_sys @ 0x1406DA970  [NEW: conn refresh]
│   │   │   │     (connection refresh + secondary write on provider-not-found path)
│   │   │   └── [error return: 0x8000000000000000 discriminant]
│   │   │
│   │   ├── sub_140209E70 @ 0x140209E70  [Vec insert updated quota]
│   │   │     Insert activated quota entry back into providers Vec
│   │   │
│   │   ├── relay_providers_config_write_and_persist_sys @ 0x1406E6960  [PERSIST L3]
│   │   │   │  (serialize relay state + atomic write JSON config)
│   │   │   │
│   │   │   ├── relay_state_serialize_under_lock_sys @ 0x1406DA6B0  [NEW: serialize L3B]
│   │   │   │     WIN ICEX8(mgr+16)
│   │   │   │     reads providers list at mgr+32, schemaVersion u16 at mgr+32
│   │   │   │     builds SerializeOut (75B): has_schema/schema_version/active/providers_iter
│   │   │   │     → TERMINAL: platform-primitive (WIN ICEX8 + WakeByAddressSingle)
│   │   │   │
│   │   │   └── relay_config_serialize_and_atomic_write_sys @ 0x1406EAED0  [SERIALIZE+WRITE L4]
│   │   │         │  path = mgr[0]+16 -> [808..816] (config file path ptr+len)
│   │   │         │
│   │   │         ├── relay_config_check_parent_dirs_sys @ 0x1406F2870  [CHECK DIRS]
│   │   │         │     sub_141082B80 x9 calls
│   │   │         │     indices: [33,34],[41,42],[45,46],[49,50],[57,58],[61,62],
│   │   │         │              [113,114],[117,118],[97,98]
│   │   │         │
│   │   │         ├── sub_14020A3E0  [serde_json pretty-print, 2-space indent]
│   │   │         │     JSON fields: schemaVersion/providers/activeByIde/proxy/
│   │   │         │     codexRouterEnabled/codexApiLogin/codexApiSlots/
│   │   │         │     displayTagGlobal/displayTagWoyao
│   │   │         │
│   │   │         └── relay_atomic_write_leaf_sys @ 0x140504310  [FS LEAF L5] [TERMINAL]
│   │   │               GetCurrentProcessId → temp path build
│   │   │               CreateFile → WriteFile loop → CloseHandle
│   │   │               sub_140504130 (MoveFileExW rename-swap)
│   │   │               error: "atomic write: missing parent"
│   │   │               src: codexmate_lib::core::relay::atomic_write
│   │   │               → TERMINAL: external_call (WIN32 fs)
│   │   │
│   │   └── relay_post_login_state_sync_sys @ 0x1406E1750  [STATE SYNC L3]
│   │         src: codexmate_lib::core::relay::manager (src\core\relay\manager.rs)
│   │         WIN lock: ICEX8(relay_mgr[2]+16)
│   │         │
│   │         ├── relay_state_read_lock_snapshot_sys @ 0x1406E8480
│   │         ├── sub_14030B390  [slot range init]
│   │         ├── sub_1403654F0  [quota init]
│   │         ├── sub_14073C050  [state machine branch]
│   │         │
│   │         ├── sub_14073BC50 @ 0x14073BC50  [STATE MACHINE DRIVE L4]
│   │         │     ├── relay_config_check_parent_dirs_sys @ 0x1406F2870
│   │         │     ├── sub_140744790  [provider state transition]
│   │         │     ├── sub_14073C8B0  [slot assignment]
│   │         │     └── relay_atomic_write_leaf_sys @ 0x140504310  [FS LEAF L5] [TERMINAL]
│   │         │
│   │         └── sub_140732660 @ 0x140732660  [RESULT WRITE L4]
│   │               ├── relay_config_check_parent_dirs_sys @ 0x1406F2870
│   │               ├── sub_140732D00  [result serialization]
│   │               └── relay_atomic_write_leaf_sys @ 0x140504310  [FS LEAF L5] [TERMINAL]
│   │
│   └── set_codex_api_slots_ok_response_build_sys @ 0x140216BA0  [RESPONSE ENCODE]
│         hardcoded: "ok"(2B 0x6B6F) + "activated"(7B)
│         field: activated=true (1u8 at out+444)
│         memcpy relay_state 368B -> out+72
│         discriminant=2 (Ok variant)
│
├── relay_state_send_ipc_response_sys @ 0x140831F00  [IPC SEND]
│     (response envelope; no persistent side-effects)
│
└── sub_14080C3C0 @ 0x14080C3C0  [ERROR RESPONSE] (multiple early-exit paths)
      called on: gate fail, parse fail, provider-not-found, write fail, sync fail
```

---

### Edge Count

| Edge | From → To |
|---|---|
| 1 | owner → run_codex_router_diagnostics_owner_sys |
| 2 | owner → sub_141214620 (parse manager) |
| 3 | owner → relay_activate_provider_id_parse_sys (parse providerId) |
| 4 | owner → sub_140240B70 (parse ide) |
| 5 | owner → activate_relay_provider_build_response_sys |
| 6 | owner → relay_state_send_ipc_response_sys |
| 7 | owner → sub_14080C3C0 (error) |
| 8 | build_response → relay_activate_core_and_persist_sys |
| 9 | build_response → set_codex_api_slots_ok_response_build_sys |
| 10 | core → relay_state_read_lock_snapshot_sys |
| 11 | core → relay_state_snapshot_drop_sys |
| 12 | core → relay_quota_state_lookup_sys |
| 13 | quota_lookup → relay_keychain_lookup_for_quota_sys |
| 14 | quota_lookup → relay_quota_item_clone_sys |
| 15 | core → relay_config_connection_refresh_and_write_sys (not-found) |
| 16 | core → sub_140209E70 (Vec insert) |
| 17 | core → relay_providers_config_write_and_persist_sys |
| 18 | core → relay_post_login_state_sync_sys |
| 19 | core → relay_draft_test_input_drop_sys (cleanup) |
| 20 | write_persist → relay_state_serialize_under_lock_sys |
| 21 | write_persist → relay_config_serialize_and_atomic_write_sys |
| 22 | serialize_atomic → relay_config_check_parent_dirs_sys |
| 23 | serialize_atomic → sub_14020A3E0 (serde JSON) |
| 24 | serialize_atomic → relay_atomic_write_leaf_sys |
| 25 | post_login_sync → relay_state_read_lock_snapshot_sys |
| 26 | post_login_sync → sub_14073BC50 (state machine drive) |
| 27 | post_login_sync → sub_140732660 (result write) |
| 28 | state_machine → relay_atomic_write_leaf_sys |
| 29 | result_write → relay_atomic_write_leaf_sys |

**Total edges: 29** (≥5 required for gold-leaf)

---

### Terminated Reason per Branch

| Branch | Terminated reason |
|---|---|
| `relay_atomic_write_leaf_sys` (×3 paths) | external_call (WIN32 CreateFile/WriteFile/MoveFileExW) |
| `relay_keychain_lookup_for_quota_sys` | persistence_commit (secrets.json read, known terminal) |
| `relay_quota_item_clone_sys` | leaf: 232B memcpy, no callees |
| `relay_state_serialize_under_lock_sys` | platform-primitive (WIN ICEX8 lock + WakeByAddressSingle) |
| `relay_config_connection_refresh_and_write_sys` | error_return (not-found branch early exit) |
| `sub_14080C3C0` | error_return (error response builder, no persistent side-effects) |

---

### Noise Filter — NOT counted as delta callees

- `relay_draft_test_input_drop_sys @ 0x1401D6220`: pure drop/free, 23 fields, no side-effects
- `relay_state_snapshot_drop_sys @ 0x140234AC0`: RwLock/Mutex drop helper
- `sub_14124BCCB`: OOM abort handler (alloc fail path)
- `nullsub_1 @ 0x1400013A0`: no-op
- `sub_140001360` / `sub_140001370`: alloc/dealloc
- `_InterlockedCompareExchange8` / `WakeByAddressSingle`: WIN lock primitives (noise)
- `sub_14124B1D0` / `sub_14124A510`: poison-guard checks (noise)
- `sub_14124BFE0`: panic guard (Display impl error)
- `sub_141212FB0`: memcpy helper
