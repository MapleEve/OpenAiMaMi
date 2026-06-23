# load_skill_backups — Call Tree (Gold-Leaf)
<!-- session=wf-aimami111-delta-20260618-goldleaf machine=<本地机器> sha=d24e429a depth=6 -->

```
load_skill_backups_owner_sys  [0x140028120]  ← IPC entry "load_skill_backups"@0x1412ac16c
│  DEPTH 1
│
├── sub_141212FB0  [0x141212FB0]  memcpy shim (noise, 2x: copy resolver+repo from ctx)
│
├── pending_auto_switch_state_lock_acquire_111  [0x14006EDC0]
│   └── (Mutex read-only pre-flight gate; returns !0 on held → short-circuit)
│
├── query_installed_skills_with_repo_111  [0x141214620]  ★ NEW_IN_1.1.1
│   DEPTH 2
│   ├── sub_1410A1DF0  [0x1410A1DF0]  closure builder (×2)
│   ├── sub_141222DD0  [0x141222DD0]  closure thunk invoke
│   ├── skill_store_get_all_111  [0x14106D960]  ★ NEW_IN_1.1.1
│   │   DEPTH 3
│   │   └── skill_store_iter_111  [0x14106DE20]  ★ NEW_IN_1.1.1
│   │       DEPTH 4
│   │       ├── vtable call +8  (first entry; vtable type info)
│   │       ├── sub_1402488C0  [0x1402488C0]  iterator adaptor
│   │       ├── sub_1410A8340  [0x1410A8340]  entry yield fn
│   │       │   DEPTH 5
│   │       │   ├── unk_1414E6BA8  (vtable/type info, first call)
│   │       │   └── unk_1414E6C90  (vtable/type info, subsequent calls)
│   │       └── vtable call +48  (next entry)
│   └── sub_14106D970  [0x14106D970]  result cleanup
│
├── sub_14080C3C0  [0x14080C3C0]  IPC error dispatch (discriminant==6 path only)
│   └── (IPC resolver vtable call — external_call terminus)
│
├── sub_1407DBD50  [0x1407DBD50]  async skill-store waiter
│   DEPTH 2
│   ├── _InterlockedCompareExchange8  (spin-wait on completion byte)
│   ├── sub_14124A510  [0x14124A510]  spin-wait helper
│   ├── sub_14124B1D0  [0x14124B1D0]  runtime flag check (off_141899DC0)
│   ├── sub_1410B1930  [0x1410B1930]  poison check ("poisoned lock: another task failed inside")
│   │
│   ├── skill_backup_store_load_and_sort_all_111  [0x1406ED6C0]  ★ DELTA_RECOVERED
│   │   DEPTH 3
│   │   ├── snooze_file_open_111  [0x14108C6F0]  open backup root dir
│   │   ├── sub_14108C7E0  [0x14108C7E0]  read dir handle
│   │   ├── sub_140672D70  [0x140672D70]  dir iterator next (loop)
│   │   ├── sub_141082A50  [0x141082A50]  get entry metadata
│   │   ├── sub_14107A370  [0x14107A370]  is_valid_skill_dir check
│   │   ├── sub_14107A2D0  [0x14107A2D0]  path join ("metadata.json", len=13)
│   │   │   DEPTH 4
│   │   │   └── (path string concat, platform-primitive)
│   │   ├── snooze_file_open_111  [0x14108C6F0]  open metadata.json (×2 in loop)
│   │   │   DEPTH 4
│   │   │   └── (OS file handle open — platform-primitive)
│   │   ├── win32_file_read_bytes_111  [0x141093260]  read metadata.json bytes
│   │   │   DEPTH 4 — TERMINUS: platform-primitive (OS read syscall)
│   │   ├── sub_140004AA0  [0x140004AA0]  JSON parse → SkillBackupMetadata (serde)
│   │   │   DEPTH 4
│   │   │   ├── (serde field dispatch, 6 fields)
│   │   │   └── sub_1407037D0  [0x1407037D0]  parse error drop
│   │   ├── sub_14107A2D0  [0x14107A2D0]  path join ("skill", len=5)
│   │   ├── sub_141095530  [0x141095530]  validate entry
│   │   │   DEPTH 4
│   │   │   └── sub_14124BFE0  [0x14124BFE0]  panic "Display impl returned error" (error terminus)
│   │   ├── sub_141220A60  [0x141220A60]  vec grow (capacity doubling)
│   │   │   DEPTH 4
│   │   │   └── (alloc, platform-primitive)
│   │   ├── sub_1401D6AF0  [0x1401D6AF0]  close dir iterator
│   │   ├── sub_1407B37B0  [0x1407B37B0]  timsort (n≥21)
│   │   │   DEPTH 4 — TERMINUS: sort leaf (no further app callees)
│   │   └── sub_1401DB8D0  [0x1401DB8D0]  insertion sort (2≤n<21)
│   │       DEPTH 4 — TERMINUS: sort leaf
│   │
│   ├── system_time_precise_u32_111  [0x14107B7E0]  ★ NEW_IN_1.1.1 (get scan timestamp)
│   │   DEPTH 3 — TERMINUS: platform-primitive (QueryPerformanceCounter or GetSystemTimeAsFileTime)
│   ├── elapsed_since_ts_111  [0x14107B790]  ★ NEW_IN_1.1.1 (compute elapsed → lastScanAt)
│   │   DEPTH 3 — TERMINUS: arithmetic leaf
│   ├── sub_140214260  [0x140214260]  pack timed result into output struct
│   ├── sub_140243FC0  [0x140243FC0]  alternate result path (discriminant != 10)
│   ├── drop_result_inner_111  [0x140809B30]  Result<T,E> destructor (5-case switch)
│   │   DEPTH 3 — TERMINUS: drop leaf
│   └── WakeByAddressSingle  [0x14124A5D0]  wake waiting thread
│       DEPTH 3 — TERMINUS: external_call (Windows API)
│
├── load_skill_backups_wrap_and_dispatch_111  [0x1408333E0]
│   DEPTH 2
│   ├── sub_14022D130  [0x14022D130]  outer JSON envelope serializer
│   │   DEPTH 3
│   │   ├── sub_140261480  [0x140261480]  "schemaVersion" field ser
│   │   ├── sub_1402580F0  [0x1402580F0]  "success" field ser (bool)
│   │   ├── sub_14025C400  [0x14025C400]  "code" + "message" field ser (String)
│   │   ├── relay_response_field_warnings_write_sys  [0x1402494C0]  "warnings" array ser
│   │   └── sub_1402493E0  [0x1402493E0]  "data" field wrapper
│   │       DEPTH 4
│   │       └── load_skill_backups_response_ser_111  [0x140210D20]  ★ DELTA_RECOVERED
│   │           DEPTH 5
│   │           ├── skill_backup_items_array_ser_111  [0x1402687D0]  "items" array ser
│   │           │   DEPTH 6
│   │           │   └── skill_backup_entry_ser_111  [0x14020EC10]  per-entry ser ★
│   │           │       TERMINUS: response_serialize (field-level)
│   │           │       Fields: id+0, skillID+24, name+48, title+120, relativePath+72,
│   │           │              backupPath+96 ★NEW, createdAt+144 ★NEW
│   │           ├── sub_140261480  [0x140261480]  "total" field ser (u64)
│   │           │   DEPTH 6 — TERMINUS: response_serialize
│   │           ├── sub_14025C400  [0x14025C400]  "rootPath" field ser ★ NEW_IN_1.1.1
│   │           │   DEPTH 6 — TERMINUS: response_serialize
│   │           └── sub_1402612D0  [0x1402612D0]  "lastScanAt" DateTime ser ★ NEW_IN_1.1.1
│   │               DEPTH 6 — TERMINUS: response_serialize
│   ├── sub_140E30410  [0x140E30410]  error branch serializer
│   ├── sub_140807390  [0x140807390]  Result drop (multi-case)
│   └── sub_14080C3C0  [0x14080C3C0]  IPC resolver dispatch (vtable call +24)
│       TERMINUS: external_call (IPC response sent to frontend)
│
└── sub_140042650  [0x140042650]  resolver finalize
    TERMINUS: return

(sub_14033AB50 / has_notch_arc_listener_drop_loop = skill list entry dtor, stride 96, noise)
```

## Edge Summary

Total edges: 52
Maximum depth: 6 (handler → wrap_dispatch → data_field_wrapper → response_ser → items_array_ser → entry_ser)

## terminated_reason

All branches reach one of:
- `win32_file_read_bytes_111` @ `0x141093260` — platform-primitive (Windows file read)
- `skill_backup_entry_ser_111` @ `0x14020EC10` — response_serialize (field-level)
- `WakeByAddressSingle` @ `0x14124A5D0` — external_call (Windows API)
- Sort leaves (`sub_1407B37B0`, `sub_1401DB8D0`) — no further app-level callees
- Drop leaves (`drop_result_inner_111`, `sub_1407037D0`) — destructor terminus
