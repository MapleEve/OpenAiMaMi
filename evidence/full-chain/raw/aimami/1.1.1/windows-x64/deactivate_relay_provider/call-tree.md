# deactivate_relay_provider — Call Tree (Windows x64, AiMaMi 1.1.1) — Gold Leaf
**Session**: <审计会话>
**delta_class**: integrity_recovered
**gate_tier**: gold-leaf

```
deactivate_relay_provider_owner_sys              @0x14001F940  [IPC entry, renamed]
│
├── sub_141212FB0                                (memcpy helper, multiple calls: 520B, 400B)
│
├── run_codex_router_diagnostics_owner_sys       @0x14006F4B0   [owner/session gate]
│   ├── _InterlockedCompareExchange8             (WIN futex try-lock: Tokio dispatcher)
│   ├── sub_14124A510                            (lock wait)
│   ├── sub_14124B1D0                            (lock probe)
│   └── WakeByAddressSingle                      @0x14124A5D0
│
├── sub_141214620  [query_installed_skills_with_repo_111]  (parse "manager" field fallback)
├── sub_1402FED40  [remove_skill_parse_id_param_111]       (parse "providerId" field, len=10)
├── sub_140240B70                                (parse "ide" field, len=3)
│
├── deactivate_relay_provider_core_sys           @0x14021BEC0
│   │
│   ├── relay_provider_deactivate_mutate_and_persist_sys   @0x1406D5E70  [MAIN LOGIC]
│   │   │
│   │   ├── _InterlockedCompareExchange8         (WIN write-lock acquire: relay state RwLock)
│   │   ├── sub_14124A510                        (lock wait)
│   │   ├── sub_14072A3A0                        (snapshot relay state: deep-copy mgr_inner+24)
│   │   │
│   │   ├── [GUARD 1: router_enabled @ v37 flag]
│   │   │   └── ERR @0x1412EBCF0 (107B UTF-8):
│   │   │       "当前 Codex 智能路由已开启，禁止操作中转模型，如需操作请关闭 Codex 智能路由。"
│   │   │       → alloc(107,1) + xmmword copy; out.disc=9
│   │   │
│   │   ├── relay_provider_list_remove_entry_sys @0x14033FB70  [find/clone + remove]
│   │   │   └── sub_141213640                    (len-gated memcmp string equality)
│   │   │
│   │   ├── [GUARD 2: last-active-provider @ !v36&&v17&&v37]
│   │   │   └── ERR @0x1412EA638 (123B UTF-8):
│   │   │       "无法停用最后一个 Codex 中转模型：请先关闭 Codex 智能路由，或先启用另一个 Codex 中转模型。"
│   │   │       → alloc(123,1) + xmmword copy; out.disc=9
│   │   │
│   │   ├── relay_providers_config_write_and_persist_sys   @0x1406E6960
│   │   │   ├── relay_state_serialize_under_lock_sys       @0x1406DA6B0
│   │   │   │   └── [WIN read-lock; serializes 9 JSON fields into intermediate repr]
│   │   │   │
│   │   │   └── relay_config_serialize_and_atomic_write_sys  @0x1406EAED0
│   │   │       ├── relay_config_check_parent_dirs_sys     @0x1406F2870  [NEW in 1.1.1]
│   │   │       │   └── sub_141082B80 x9               (path_exists_check_sys, per dir)
│   │   │       │
│   │   │       ├── sub_140001360                          (alloc 128B JSON output buffer)
│   │   │       ├── sub_14020A3E0                          (serde pretty-print, 2-space indent)
│   │   │       │
│   │   │       └── relay_atomic_write_leaf_sys            @0x140504310  [WIN fs leaf]
│   │   │           ├── sub_14107A3E0                      (get parent dir of path)
│   │   │           ├── GetCurrentProcessId                @0x14108B3B0  (WIN API)
│   │   │           ├── uuid_v4_generate_raw_sys           @0x140F5A860  (UUID v4 for temp name)
│   │   │           ├── sub_1410A1DF0                      (format temp file path)
│   │   │           ├── sub_141087E20                      (CreateFile: open temp file)
│   │   │           ├── sub_141097C30 [loop]               (WriteFile: write bytes)
│   │   │           │   └── sub_140041790                  (drop interrupted-write state)
│   │   │           ├── sub_14107AD30                      (FlushFile / fsync)
│   │   │           ├── CloseHandle                        @0x14124D788  (WIN API, twice)
│   │   │           ├── sub_140504130                      (MoveFileEx: temp→final atomic rename)
│   │   │           ├── snooze_file_delete_111             @0x14108BF60  (delete temp on failure)
│   │   │           └── sub_140504900                      (drop parent dir ref)
│   │   │
│   │   ├── relay_post_login_state_sync_sys      @0x1406E1750
│   │   │   ├── relay_state_read_lock_snapshot_sys  @0x1406E8480
│   │   │   ├── sub_14030B390                    (build provider slice from snapshot)
│   │   │   ├── sub_1403654F0                    (build ide-count slice)
│   │   │   ├── _InterlockedCompareExchange8     (write-lock acquire on mgr inner v6+16)
│   │   │   ├── sub_1410A1DF0                    (format mgr+32 provider data for state-machine)
│   │   │   │
│   │   │   ├── sub_14073BC50                    (state-machine drive: primary async driver)
│   │   │   │   ├── sub_140ECE370                (log if log_level>1: aCodexmateLibCo_7 context)
│   │   │   │   └── sub_140708350                (error cleanup on state-machine failure)
│   │   │   │
│   │   │   ├── sub_140732660                    (result write-back to manager inner)
│   │   │   │
│   │   │   ├── relay_draft_test_input_drop_sys  @0x1401D6220  [NEW in 1.1.1 — per slot, stride 232]
│   │   │   │   └── [drops relay draft/test input allocations; called in loop]
│   │   │   │
│   │   │   └── sub_140234AC0 [relay_state_snapshot_drop_sys]  (drop read-lock snapshot)
│   │   │
│   │   ├── sub_140234AC0 [relay_state_snapshot_drop_sys]  (drop mutation snapshot)
│   │   └── WakeByAddressSingle                  (lock release: v8+16)
│   │
│   └── set_codex_api_slots_ok_response_build_sys  @0x140216BA0  [success path only]
│
├── relay_state_send_ipc_response_sys            @0x140831F00
│   └── sub_14080C3C0                            (IPC channel send)
│
└── sub_140042650                                (cmd_buf drop)
```

---

## Terminated Leaves with Reason

| Leaf | VA | Terminated Reason |
|---|---|---|
| `relay_atomic_write_leaf_sys` | 0x140504310 | platform-primitive (WIN GetCurrentProcessId/CloseHandle/MoveFileEx) |
| `relay_config_check_parent_dirs_sys` | 0x1406F2870 | platform-primitive (9x path_exists_check_sys) |
| `relay_draft_test_input_drop_sys` | 0x1401D6220 | memory_free (stride-232 slot dealloc) |
| `relay_state_serialize_under_lock_sys` | 0x1406DA6B0 | persistence_commit (WIN lock-guarded serializer) |
| `set_codex_api_slots_ok_response_build_sys` | 0x140216BA0 | response_serialize (builds Ok IPC response) |
| `sub_14073BC50` | 0x14073BC50 | external_call (async state-machine driver, separate leaf) |
| `sub_140732660` | 0x140732660 | persistence_commit (manager state write-back) |
| `sub_141213640` | 0x141213640 | platform-primitive (len-gated memcmp) |
| `uuid_v4_generate_raw_sys` | 0x140F5A860 | platform-primitive (cryptographic UUID gen) |
| `snooze_file_delete_111` | 0x14108BF60 | platform-primitive (WIN file delete on error) |

---

## Depth Summary

| Path | Depth |
|---|---|
| handler → core → mutate → persist → serialize → atomic_write | **6** |
| handler → core → mutate → persist → check_parent_dirs → path_exists ×9 | **6** |
| handler → core → mutate → sync → state_machine → log | **6** |
| handler → core → mutate → sync → draft_input_drop | **5** |
| **Max depth**: | **6** (WIN fs primitives, terminated) |

---

## JSONL Edge List (call-trees/deactivate_relay_provider.jsonl format)

```jsonl
{"from":"0x14001F940","to":"0x14006F4B0","label":"owner_gate","depth":1}
{"from":"0x14001F940","to":"0x141214620","label":"parse_manager_fallback","depth":1}
{"from":"0x14001F940","to":"0x1402FED40","label":"parse_providerId","depth":1}
{"from":"0x14001F940","to":"0x140240B70","label":"parse_ide","depth":1}
{"from":"0x14001F940","to":"0x14021BEC0","label":"core_dispatch","depth":1}
{"from":"0x14021BEC0","to":"0x1406D5E70","label":"mutate_and_persist","depth":2}
{"from":"0x14021BEC0","to":"0x140216BA0","label":"ok_response_build","depth":2}
{"from":"0x1406D5E70","to":"0x14033FB70","label":"list_remove","depth":3}
{"from":"0x1406D5E70","to":"0x1406E6960","label":"config_write_persist","depth":3}
{"from":"0x1406D5E70","to":"0x1406E1750","label":"post_login_sync","depth":3}
{"from":"0x1406E6960","to":"0x1406DA6B0","label":"serialize_under_lock","depth":4}
{"from":"0x1406E6960","to":"0x1406EAED0","label":"serialize_atomic_write","depth":4}
{"from":"0x1406EAED0","to":"0x1406F2870","label":"check_parent_dirs","depth":5}
{"from":"0x1406EAED0","to":"0x14020A3E0","label":"serde_pretty_print","depth":5}
{"from":"0x1406EAED0","to":"0x140504310","label":"atomic_write_leaf","depth":5}
{"from":"0x140504310","to":"0x14108B3B0","label":"GetCurrentProcessId","depth":6,"terminated":"platform-primitive"}
{"from":"0x140504310","to":"0x140F5A860","label":"uuid_v4_generate","depth":6,"terminated":"platform-primitive"}
{"from":"0x140504310","to":"0x14124D788","label":"CloseHandle","depth":6,"terminated":"platform-primitive"}
{"from":"0x140504310","to":"0x14108BF60","label":"snooze_file_delete","depth":6,"terminated":"platform-primitive"}
{"from":"0x1406F2870","to":"0x141082B80","label":"path_exists_x9","depth":6,"terminated":"platform-primitive"}
{"from":"0x1406E1750","to":"0x1406E8480","label":"read_lock_snapshot","depth":4}
{"from":"0x1406E1750","to":"0x14073BC50","label":"state_machine_drive","depth":4}
{"from":"0x1406E1750","to":"0x140732660","label":"result_write_back","depth":4}
{"from":"0x1406E1750","to":"0x1401D6220","label":"draft_input_drop","depth":4,"delta":"new_in_1.1.1"}
{"from":"0x14073BC50","to":"0x140ECE370","label":"log_if_level_gt1","depth":5,"terminated":"external_call"}
```
