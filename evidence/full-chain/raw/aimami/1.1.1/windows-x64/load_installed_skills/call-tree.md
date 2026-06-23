# call-tree — load_installed_skills (AiMaMi 1.1.1 win64)

session: wf-aimami111-delta-20260618-goldleaf
date: 2026-06-18
delta_class: integrity_recovered
baseline: 1.0.9
sha: d24e429a

---

## 完整调用树（双路径，深度≥5）

```
load_installed_skills_cmd_111  [0x14002A100, size=0x38F]          depth=0
│
├── [DELTA: NEW in 1.1.1] pending_auto_switch_state_lock_acquire_111  [0x14006EDC0]  depth=1
│   │   Windows futex spinlock — InterlockedCompareExchange8 + WakeByAddressSingle
│   │   RETURN: 0=no pending switch / non-0=switch pending
│   ├── _InterlockedCompareExchange8  [Windows intrinsic — spinlock acquire CAS]  depth=2
│   ├── sub_14124A510  [spinlock wait helper / WaitOnAddress loop]  depth=2
│   │   └── WaitOnAddress  [Win32 — terminated: OS primitive]  depth=3
│   ├── sub_14124B1D0  [lock ownership / tracing check]  depth=2
│   ├── vtable+24 dispatch  [dyn trait Result handler]  depth=2  ← terminated: dynamic
│   └── WakeByAddressSingle  [Win32 — terminated: OS primitive]  depth=2
│
│   ╔═══════ PATH A: lock_result==0 (no pending switch) ═══════════╗
│
├── query_installed_skills_with_repo_111  [0x141214620]            depth=1
│   │   PATH A 路径: skill store snapshot 读取
│   ├── sub_1410A1DF0  [Rust String format/write]                  depth=2
│   │   └── sub_1410A8340  [fmt::Write trait impl]                 depth=3
│   │       └── vtable+24  [terminated: dynamic dispatch]          depth=4
│   ├── sub_141222DD0  [skill store snapshot arc acquire]          depth=2
│   │   ├── sub_14107B2A0  [backtrace env check (RUST_LIB_BACKTRACE)]  depth=3
│   │   │   └── sub_14107AE80  [Windows backtrace walk]            depth=4
│   │   │       ├── RtlCaptureContext  [terminated: OS primitive]  depth=5
│   │   │       ├── RtlLookupFunctionEntry  [terminated: OS]       depth=5
│   │   │       └── RtlVirtualUnwind  [terminated: OS]             depth=5
│   │   └── sub_141222E70  [construct snapshot arc wrapper]        depth=3
│   │       └── sub_140001360  [alloc — terminated: allocator]     depth=4
│   ├── skill_store_get_all_111  [0x14106D960]                     depth=2
│   │   └── sub_14106D970  [snapshot arc drop]                     depth=3
│   │       └── sub_14106DE20  [skill_store_iter_111]              depth=4
│   │           └── vtable+8  [dyn SkillStore::get_all — terminated: dynamic]  depth=5
│   └── sub_14106D970  [drop snapshot arc ref — terminated]        depth=2
│
│   ╔═══════ PATH B: lock_result!=0 (pending switch active) — DELTA NEW 1.1.1 ═══╗
│
├── [DELTA: PATH B NEW in 1.1.1] sub_1407DD060  [0x1407DD060]     depth=1
│   │   bootstrap-cache write-back core
│   │   获取 bootstrap mutex → 直读 DB → OnceLock 写回 → 快照文件写入
│   ├── _InterlockedCompareExchange8  [bootstrap mutex CAS]        depth=2
│   ├── sub_14124A510  [mutex wait helper]                         depth=2
│   ├── sub_1410B1930  [OnceLock poison check]                     depth=2
│   │   └── "poisoned lock: another task failed inside" @ 0x1412E6BB3  depth=3  ← panic if poisoned
│   ├── skill_list_db_query_111  [0x1406F0D80]                     depth=2
│   │   │   绕过 skill store，直接读取 skills DB 文件
│   │   ├── snooze_file_open_111  [0x14108C6F0, DB file open with backoff]  depth=3
│   │   │   └── [file open loop / sleep — terminated: OS FileIO]  depth=4
│   │   ├── sub_1406F0EA0  [DB read driver / deserialize]          depth=3
│   │   │   └── [DB buffer read — terminated: platform primitive]  depth=4
│   │   ├── sub_1401DB4C0  [small batch skill entry proc]          depth=3
│   │   │   └── sub_140001360  [alloc — terminated]                depth=4
│   │   └── sub_1407B2C40  [large batch skill entry proc]          depth=3
│   │       └── [iterator/collect — terminated]                    depth=4
│   ├── sub_141095530  [0x141095530, OnceLock slot acquire]        depth=2
│   │   └── sub_1410AF0F0  [UTF-8 → UTF-16 / string slot encode]   depth=3
│   │       └── vtable+24  [string writer trait — terminated: dynamic]  depth=4
│   ├── system_time_precise_u32_111  [0x14107B7E0, GetSystemTime]  depth=2
│   │   └── [Win32 GetSystemTimeAsFileTime — terminated: OS]       depth=3
│   ├── elapsed_since_ts_111  [0x14107B790]                        depth=2
│   │   └── [arithmetic on u32 timestamp — terminated]             depth=3
│   ├── load_snapshot_read_only_111  [0x1401B4A90]                 depth=2
│   │   │   注意：名称误导性 — 含 win32_file_write_bytes_111 写路径
│   │   ├── relay_config_check_parent_dirs_sys  [0x1406F2870]      depth=3
│   │   │   └── [path canonicalize / dir check — terminated]       depth=4
│   │   ├── load_mcp_servers_read_existing_snapshot_111  [0x1401BF000]  depth=3
│   │   │   └── [read existing MCP snapshot file — terminated]     depth=4
│   │   ├── serialize_skill_snapshot_json_111  [0x140197420]       depth=3
│   │   │   └── [JSON field serializers — terminated at leaf writers]  depth=4
│   │   └── win32_file_write_bytes_111  [0x141093710]              depth=3
│   │       └── [Win32 WriteFile/NtWriteFile — terminated: OS FileIO]  depth=4   ← persistence_commit
│   ├── sub_140243FC0  [error path: Result转换]                    depth=2
│   ├── drop_result_inner_111  [0x140809B30]                       depth=2
│   │   └── sub_140001370  [free — terminated: allocator]          depth=3
│   ├── sub_1402154F0  [result 归约]                               depth=2
│   └── WakeByAddressSingle  [bootstrap mutex release]             depth=2
│
│   ╔═══════ 公共路径 (PATH A + PATH B 收敛) ══════════════════════╗
│
├── sub_140832230  [0x140832230, serialize result + route to IPC]  depth=1
│   ├── sub_141212FB0  [memcpy/move helper]                        depth=2
│   ├── sub_140226E00  [serialize IPC envelope]                    depth=2
│   │   ├── sub_140261480  [write "schemaVersion" field]           depth=3
│   │   ├── sub_1402580F0  [write "success" field]                 depth=3
│   │   ├── sub_14025C400  [write "code"/"message" fields]         depth=3
│   │   ├── relay_event_field_warnings_sys  [0x1402494C0]          depth=3
│   │   └── sub_140249A40  [write data/payload field]              depth=3
│   │       └── serialize_skill_snapshot_111  [0x140197420]        depth=4
│   │           └── serialize_installed_skill_summary_111  [0x140172840]  depth=5
│   │               └── [field writers: title/summary/path/status] depth=6  ← terminated: response_serialize
│   └── sub_14080C3C0  [0x14080C3C0, InvokeResolver vtable dispatch]  depth=2
│       ├── _InterlockedCompareExchange8  [resolver lock]          depth=3
│       ├── vtable+24  [send response to frontend — terminated: external_call]  depth=3
│       ├── sub_140001370  [free]                                   depth=3
│       ├── WakeByAddressSingle                                     depth=3
│       └── _InterlockedDecrement64 + sub_140E208A0  [Arc drop]    depth=3
│
├── [error path only] sub_14080C3C0  [InvokeResolver dispatch]     depth=1
│   └── (same as above)
│
├── [cleanup] sub_14033AB50  [Drop SkillEntry, 96-byte stride loop]  depth=1
│   ├── _InterlockedDecrement64  [Arc refcount]                    depth=2
│   ├── sub_140F36C00  [Arc inner drop]                            depth=2
│   └── sub_140001370  [free string/vec fields — terminated: allocator]  depth=2
│
└── sub_140042650  [finalize IPC ctx / return]                     depth=1
    └── [ctx cleanup — terminated: platform-primitive]             depth=2
```

---

## 深度分析

| 深度 | 函数 | 角色 | PATH |
|------|------|------|------|
| 0 | `load_installed_skills_cmd_111` | 命令入口 | A+B |
| 1 | `pending_auto_switch_state_lock_acquire_111` | **DELTA: 新增 lock** | A+B |
| 2 | `_InterlockedCompareExchange8` | spinlock CAS | A+B |
| 2 | `sub_14124A510` | wait helper | A+B |
| 1 | `query_installed_skills_with_repo_111` | skill store 读取 | A |
| 2 | `sub_141222DD0` | snapshot arc | A |
| 3 | `sub_14107B2A0` | env check | A |
| 4 | `sub_14107AE80` | backtrace walk | A |
| 5 | `RtlCaptureContext` | **leaf** terminated: OS primitive | A |
| 2 | `skill_store_get_all_111` | store accessor | A |
| 3 | `sub_14106D970` | arc drop | A |
| 4 | `skill_store_iter_111` | vtable iter | A |
| 5 | `vtable dyn SkillStore::get_all` | **leaf** terminated: dynamic | A |
| 1 | `sub_1407DD060` | **DELTA: PATH B bootstrap write-back** | B |
| 2 | `skill_list_db_query_111` | DB 直读 | B |
| 3 | `snooze_file_open_111` | file open | B |
| 4 | FileIO | **leaf** terminated: OS FileIO | B |
| 3 | `sub_1406F0EA0` | DB read driver | B |
| 4 | DB buffer | **leaf** terminated: platform primitive | B |
| 2 | `sub_141095530` | OnceLock acquire | B |
| 3 | `sub_1410AF0F0` | string encode | B |
| 4 | vtable+24 string writer | **leaf** terminated: dynamic | B |
| 2 | `load_snapshot_read_only_111` | snapshot read+write | B |
| 3 | `win32_file_write_bytes_111` | file write | B |
| 4 | Win32 WriteFile | **leaf** terminated: persistence_commit | B |
| 1 | `sub_140832230` | 序列化 + IPC | A+B |
| 2 | `sub_140226E00` | IPC envelope | A+B |
| 3 | field writers | envelope fields | A+B |
| 4 | `serialize_skill_snapshot_111` | payload | A+B |
| 5 | `serialize_installed_skill_summary_111` | per-skill | A+B |
| 6 | field writers | **leaf** terminated: response_serialize | A+B |
| 2 | `sub_14080C3C0` | InvokeResolver | A+B |
| 3 | vtable+24 | **leaf** terminated: external_call (frontend send) | A+B |

**最大深度:** 6 (序列化路径) / 5 (RtlCaptureContext) / 4 (persistence_commit)
所有活跃路径均达到 ≥5 边或明确 terminated_reason ✓

---

## terminated_reason 汇总

| terminated_reason | 函数/节点 | 路径 |
|-------------------|-----------|------|
| `os_primitive` | RtlCaptureContext, RtlVirtualUnwind, WaitOnAddress, WakeByAddressSingle, GetSystemTime | A+B |
| `dynamic_dispatch` (vtable) | dyn SkillStore::get_all, fmt::Write, InvokeResolver consumer, string writer | A+B |
| `persistence_commit` | `win32_file_write_bytes_111` → Win32 WriteFile | B |
| `response_serialize` | `serialize_installed_skill_summary_111` field writers | A+B |
| `external_call` | vtable+24 in `sub_14080C3C0` → sends response to frontend channel | A+B |
| `allocator` | `sub_140001360` / `sub_140001370` | A+B |

---

## Delta 摘要

| 项目 | 1.0.9 | 1.1.1 | 分类 |
|------|-------|-------|------|
| `pending_auto_switch_state_lock_acquire_111` | 不存在 | depth=1 | **app-level callee ADD** |
| `sub_1407DD060` (bootstrap cache write-back) | 不存在 | depth=1 (PATH B) | **new execution path ADD** |
| skill store 读取保护 | 无锁 | spinlock 保护 | 行为变更 |
| OnceLock 写回 (Windows) | 不存在 | PATH B 新增 | **side-effect ADD** |
| snapshot 文件写入 (Windows) | 不存在 | PATH B via `win32_file_write_bytes_111` | **persistence side-effect ADD** |
| DTO `InstalledSkillSummary` | 8 fields | 8 fields | 不变 |
| DTO `SkillListPayload` | 4 fields | 4 fields | 不变 |
| IPC envelope | 同 | 同 | 不变 |
