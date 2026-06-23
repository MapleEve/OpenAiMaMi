# begin_add_account_attach_monitor — Win x64 pseudocode (gold-leaf)

**session**: <审计会话>
**machine**: <本地机器>
**produced_at**: 2026-06-18
**product/version/platform**: aimami / 1.1.1 / windows-x64
**module**: accounts
**target**: begin_add_account_attach_monitor
**IDB**: <本地路径>
**sha**: d24e429a
**call_tree_depth**: 6 (terminated: external_call + persistence_commit)
**gate_tier**: gold_leaf

---

## 相对 1.0.9 的主要变更（delta）

| 维度 | 1.0.9 | 1.1.1 | 变更说明 |
|------|-------|-------|---------|
| owner VA | 0x140283580 | 0x140013a60 | 完全不同地址，1.1.1 重排了 IPC dispatch 表 |
| IPC 结构 | sync_tauri_ipc_state_owner_monitor_attach | 三级分发 handler→core→business | 新增 monitor CAS 状态机 (L2) |
| Windows 专属 | MoveFileExW/CreateFileW | _InterlockedCompareExchange8 + WakeByAddressSingle + CloseHandle | 并发原语升级 |
| schtask 查询 | 不存在 | check_schtask_codexmate_autoswitch → schtasks /Query /TN CodexMateAutoSwitch /V /FO CSV | 1.1.1 新增 schtask 查询 |
| 持久化 | relay_atomic_write_file_sys | auto_switch_state_persist_json_111 | 持久化路径更新 |
| 快速路径 | 无 | arg_parser v17==3 (snapshot cached) → 直接 resolver 返回 | 1.1.1 新增缓存快速路径 |

---

## dim1 CCF 确认（前端 invoke）

前端 `assets/index-DdcCOEJG.js` line 86 col 25608：

```js
beginAddAccountAttachMonitor: () => ne("begin_add_account_attach_monitor")
```

- `argKeys`: [] — 无参数
- `argObject`: null
- `kind`: tauriInvokeWrapper
- 双平台（win/mac）均确认，参数签名一致

---

## 完整调用树 call-tree（6 层）

```
tauri_ipc_main_dispatcher_sys  (0x14000d2a0, xref 0x14000daac)
  └─ [L1] begin_add_account_attach_monitor_handler  0x140013a60  size=0x48f
       ├─ confirm_pending_auto_switch_deserialize_request_sys (0x140089a50)
       │    v17==3 → snapshot cached (快速路径)
       │    v17!=3 → need core (慢路径)
       ├─ [v17==3] sub_14080C3C0 (0x14080c3c0)  IPC resolver 快速返回  ← TERMINATED: response_serialize
       ├─ [v17!=3] pending_auto_switch_state_lock_acquire_111 (0x14006edc0)
       │    └─ StateManager SIMD hashmap lookup; 返回 lock ptr 或 null
       ├─ [lock==null] query_installed_skills_with_repo_111 (0x141214620)
       │    LOBYTE(v31[0])!=6 → sub_14080C3C0 早期响应  ← TERMINATED: response_serialize
       │    LOBYTE(v31[0])==6 → core
       └─ [L2] begin_add_account_attach_monitor_core  0x14078c070  size=0x74b
            ├─ _InterlockedCompareExchange8(a3, 1, 0)  [WINDOWS-ONLY CAS]
            │    lock已锁(!=0) → sub_14124A510 (0x14124a510) spin/wait → LABEL_5
            ├─ check off_141899DC0 * 2  (feature flag)
            ├─ [flag=0, a3[1]==0 即 no waiters]
            │    └─ [L3] begin_add_account_attach_monitor_business  0x1401aa1c0  size=0x33a
            │         ├─ [L3a] state_manager_lock_and_assemble (0x1401abc20)
            │         │    ├─ state_manager_assemble_inner(&v21)  (0x1401acb20)  [L4]
            │         │    │    ├─ sub_1401B2420 (0x1401b2420) — account list build
            │         │    │    ├─ sub_1401A1480 (0x1401a1480) — provider list build
            │         │    │    ├─ system_time_precise_u32_111 (0x14107b7e0) — timestamp
            │         │    │    ├─ elapsed_since_ts_111 (0x14107b790) — elapsed calc
            │         │    │    ├─ relay_config_check_parent_dirs_sys (0x1406f2870) — parent dir check
            │         │    │    ├─ snooze_file_open_111 (0x14108c6f0) — snooze file read
            │         │    │    ├─ auto_switch_state_persist_json_111 (0x1401a6c10)
            │         │    │    │    └─ TERMINATED: persistence_commit (JSON state file write)
            │         │    │    ├─ quota_history_append_dedup_111 (0x1401ff820)
            │         │    │    │    └─ TERMINATED: persistence_commit (quota history append)
            │         │    │    └─ win32_file_write_bytes_111 (0x141093710)
            │         │    │         └─ TERMINATED: platform_primitive (Win32 file write)
            │         │    └─ v21==10 → sub_1401A5570 (0x1401a5570) fallback path
            │         │         v21==2 → Ok(T) 拷贝 6×128bit 快照 → 返回
            │         ├─ [v14==2 fast] 直接拷贝已有快照 6×128bit (a1+8..a1+88), *a1=3 (Ok tag)
            │         ├─ [v14!=2 slow]
            │         │    ├─ [L3b] sync_local_runtime_state_builder (0x1401b62f0)
            │         │    │    ├─ check_schtask_codexmate_autoswitch (a4=4)
            │         │    │    │    → [L5] schtask_codexmate_autoswitch_query_111 (0x14079f5c0)
            │         │    │    │         ├─ sub_1410828F0 / sub_1410827D0 (cmd builder)
            │         │    │    │         ├─ sub_1410878D0 (process exec)
            │         │    │    │         │    cmd: schtasks /Query /TN CodexMateAutoSwitch /V /FO CSV
            │         │    │    │         │    TERMINATED: external_call (schtasks.exe process)
            │         │    │    │         └─ sub_14072E9F0 (case-insensitive "running" compare)
            │         │    │    │              returns: 0=running, 1=other_status, 2=not_found/exec_err
            │         │    │    ├─ sub_1401EB500 (0x1401eb500) — local state read
            │         │    │    ├─ sub_1410A2210 (0x1410a2210) — string clone/copy
            │         │    │    └─ sub_1401ED840 (0x1401ed840) — provider config read
            │         │    └─ [L3c] schedule_full_runtime_refresh_builder (0x140213770)
            │         │         ├─ alloc "ok" (2B) + "SCHEdul" (7B) strings
            │         │         ├─ write a1+680: status_str len=2 ptr="ok"
            │         │         ├─ write a1+704: tag_str len=7 ptr="SCHEdul"
            │         │         ├─ write a1+752: refresh_count=1
            │         │         └─ write a1+756: refresh_required=true
            │         │              TERMINATED: response_serialize (output struct populated)
            │         └─ [business Ok v39==3] future/channel 构造
            │              ├─ sub_140243FC0 (0x140243fc0) — one-shot channel
            │              └─ sub_1407B1650 (0x1407b1650) — endpoint init
            │
            ├─ [Ok path after business] thread spawn
            │    └─ sub_140589300 (0x140589300)  std::thread::spawn
            │         RUST_MIN_STACK = 0x8000000000000000
            │         TERMINATED: platform_primitive (OS thread create)
            ├─ CloseHandle(hObject[1])  WINDOWS-ONLY  TERMINATED: platform_primitive
            ├─ _InterlockedDecrement64(v36) → sub_141088150 Arc<Thread> drop
            ├─ _InterlockedDecrement64(hObject[0]) → sub_141088010 HANDLE Arc drop
            └─ *v3 = 0x8000000000000000  Pending/spawned 状态标记
            │
            └─ LABEL_5: (waiter 路径)
                 sub_1410B1930 (0x1410b1930) RwLock::write (poison check)
                 "poisoned lock: another task failed inside"
                 TERMINATED: error_return (若 poison → sub_14124BFE0 panic)
```

---

## L1: handler 伪码（0x140013a60, 0x48f bytes）

```c
// Tauri IPC entry point for begin_add_account_attach_monitor
// cmd string: "begin_add_account_attach_monitor" @ 0x1412ac25d (len=32)
// label: "app" @ 0x1412ac6d5, argc=3
__int64 begin_add_account_attach_monitor_handler(__int64 a1) {
    // 1. 复制 IPC 上下文结构 (两块: 520B + 400B)
    sub_141212FB0(v15, a1, 520);
    sub_141212FB0(v20, a1+520, 400);
    v41 = *(a1+936);  // listener list head
    v40 = *(a1+920);  // listener count

    // 2. 构造 arg_parser 参数
    v35 = aBeginAddAccoun;  // 0x1412ac25d "begin_add_account_attach_monitor"
    v36.lo = 32;             // cmd len
    v36.hi = aApp;           // "app" label
    v37.lo = 3;              // arg count
    v37.hi = v15;            // arg block ptr

    // 3. 解析入参 — 无前端参数，discriminant 决定路径
    confirm_pending_auto_switch_deserialize_request_sys(&v17, &v35);
    // v17==3 → 已有缓存快照，走快速路径; 其他 → 慢路径

    if (v17 == 3) {
        // 快速路径: 直接 resolver 返回
        sub_14080C3C0(v14, v21, &v35, &v29, v22, v23);
        goto LABEL_18;
    }

    // 慢路径: label 改为 "repo"
    v36.hi = aRepo;  // 0x1412ac6d1

    // 4. StateManager lookup
    v2 = pending_auto_switch_state_lock_acquire_111(v16+16);

    if (!v2) {
        // 4a. 无 lock: 尝试本地快照
        query_installed_skills_with_repo_111(v31, &v35, &v36.hi);
        if (LOBYTE(v31[0]) != 6) {
            // 快照加载成功 → resolver 返回
            sub_14080C3C0(v13, v21, &v35, &v27, v22, v23);
            goto LABEL_18;
        }
        v2 = v31[0].hi;  // 取 state handle
    }

    // 5. 调用 core
    begin_add_account_attach_monitor_core(v32, &v24, v2);

    // 6. 处理返回值
    if (v32[0] overflow-sub 1) {
        // Err 路径: 发送错误响应
        LOBYTE(v24) = 6;
        sub_140832560(&v17, &v24);
    } else {
        // Ok 路径: 拷贝 data，发送 Ok 响应
        if (v33) { sub_14124BCCB(v7, v6); sub_141212FB0(v8, v5, v6); }
        LOBYTE(v24) = 3;  // Ok tag
        sub_140832560(&v17, &v24);
    }

LABEL_18:
    // 7. 清理 listener list
    while (v42 != v43) { ++v43; sub_14033AB50(); v10 += 96; }
    if (v40) sub_140001370(v40.hi, 96*v40, 8);
    return sub_140042650(v15);
}
```

---

## L2: core 伪码（0x14078c070, 0x74b bytes）

```c
// WINDOWS-ONLY CAS 状态机 + WakeByAddressSingle + thread spawn
// a3: state byte* (byte[0]=CAS lock 0/1/2, byte[1]=waiter_flag, +8=data_area)
__int64 begin_add_account_attach_monitor_core(__int64 a1, __int64 a2, _BYTE *a3) {

    // 1. CAS: 尝试锁定 monitor (byte[0]: 0→1)
    if (_InterlockedCompareExchange8(a3, 1, 0)) {
        sub_14124A510(a3);   // 已锁 → spin/wait
        a3 = v15;
        goto check_flag;
    }

    // 2. 检查 feature flag (off_141899DC0 * 2)
    if (2 * *off_141899DC0) {
        v17 = sub_14124B1D0(a1, a2, a3);
        if (v16[1]) goto LABEL_5;  // waiter_flag set
    } else {
        v82 = 0;
        if (a3[1]) goto LABEL_5;   // waiter_flag set
    }

    // 3. 调用 business 逻辑
    begin_add_account_attach_monitor_business(&v39, a3+8);

    if (v39 == 3) {
        // Ok: 构造 one-shot channel/future
        sub_140243FC0(v69, v70);   // future/channel 构造
        sub_1407B1650(&v40);       // channel endpoint init
        // unlock + wake
        v24 = *v23; *v23 = 0;     // 释放 lock byte
        if (v24 == 2) WakeByAddressSingle(v23);  // 唤醒 WaitOnAddress 等待者
        goto LABEL_18;
    }

    // Err/Pending: spawn 后台监控线程
    *(_QWORD*)&v69[0] = 0x8000000000000000;  // RUST_MIN_STACK hint
    sub_140589300(&v58, v69, 0);             // std::thread::Builder::spawn
    if (!v58) sub_14124BFE0(..., "failed to spawn thread", 22, ...);

    // WINDOWS-ONLY cleanup
    CloseHandle(hObject[1]);                 // 关闭线程句柄副本
    _InterlockedDecrement64(v36);            // Arc<Thread> refcount--
    if (!refcount) sub_141088150(&v58);
    _InterlockedDecrement64(hObject[0]);
    if (!refcount) sub_141088010(hObject);

    *(_QWORD*)v3 = 0x8000000000000000;  // output: Pending/spawned 标记

LABEL_5: // waiter 路径 (byte[1] set)
    // 取 RwLock writer guard
    sub_1410B1930("poisoned lock: another task failed inside", 41, &v39);
    *v3   = v9;          // lock ptr
    *(v3+8)  = hObject[0]; // HANDLE
    *(v3+16) = v11;

LABEL_18:
    sub_140041870(v79);  // drop context/future
    return v3;
}
```

---

## L3: business 伪码（0x1401aa1c0, 0x33a bytes）

```c
// L3a → L3b → L3c 三阶段
// a2 = a3+8 from core (state data area)
__int64 begin_add_account_attach_monitor_business(__int64 a1, __int64 a2) {

    // L3a: 锁定并组装状态管理器快照
    state_manager_lock_and_assemble(&v14);  // 0x1401abc20
    // v14==2 → 已有 T，拷贝缓存
    // v14!=2 → 需要构建新快照

    if (v14 == 2) {
        // 快速路径: 拷贝已有快照 (6×__int128 = 96 bytes)
        *(a1+88) = v27; *(a1+72) = v26; *(a1+56) = v25;
        *(a1+40) = v24; *(a1+24) = v23; *(a1+8)  = v22;
        *a1 = 3;  // Ok tag
        return a1;
    }

    // 慢路径
    sub_141212FB0(v37, v21, 824);  // 拷贝业务数据块

    // L3b: sync_local_runtime_state_builder(v13, a2, &v30, 4)
    // a4=4 固定常量 → 触发 check_schtask_codexmate_autoswitch
    sync_local_runtime_state_builder(v13, a2, &v30, 4);  // 0x1401b62f0
    sub_141212FB0(&v22, v13, 656);

    // L3c: schedule_full_runtime_refresh_builder(&v14, &v22, &v54)
    // 写 ok+SCHEdul tag, refresh_count=1, refresh_required=true
    schedule_full_runtime_refresh_builder(&v14, &v22, &v54);  // 0x140213770
    sub_141212FB0(a1, &v14, 760);

    // 清理资源
    sub_1400467A0(v39);   // drop lock guard
    sub_1400485A0(&v30);  // drop snapshot tmp
    sub_140047480(v40);   // drop output tmp

    // 清理账号列表 (step=21 qwords=168 bytes/item)
    for (i=v43; i>0; --i) { /* drop item.name_ptr, item.path_ptr */ v10 += 21; }
    if (v41) sub_140001370(v42, 168*v41, 8);

    // 清理 schtask list
    if (v38[0] != 2) sub_140046D60(v38);

    // 清理 string fields
    if (v48) sub_140001370(v49, v48, 1);
    if (v50) sub_140001370(v51, v50, 1);
    if (v52) sub_140001370(v53, v52, 1);

    return a1;
}
```

---

## L3a: state_manager_lock_and_assemble（0x1401abc20）

```c
// RwLock::read + state_manager_assemble_inner；
// v21==10 → fallback sub_1401A5570; v21==2 → Ok(T)
__int64 state_manager_lock_and_assemble(__int64 a1, __int64 a2) {
    state_manager_assemble_inner(&v21);  // 0x1401acb20 — L4
    if (v21 != 10) {
        // 非 fallback 路径: 拷贝 6×128bit 输出
        *(a1+88) = v23[56..]; *(a1+72) = v23[40..]; *(a1+56) = v23[24..];
        *(a1+40) = v23[8..];  *(a1+32) = v25[16];   *(a1+16) = v25[0..];
        *(a1+8)  = v4; *a1 = 2;  // Ok tag=2
        return a1;
    }
    // fallback: v21==10
    v40 = v25[0..]; v41 = v25[16];
    sub_1401A5570(&v21, a2);   // 次级 assembler
    if (v21 == 2) {
        // Ok: 拷贝 6×128bit + 释放 tmp list
        *(a1+88) = v39; ... *a1 = 2;
        // cleanup: 释放 v40 list (stride 48B/item, 6-qword items)
        if (v41) sub_140001370(v9, 48*v40, 8);
        return a1;
    }
    // merge: copy v31 from v24 (824B), merge v32 list into v40
    sub_141212FB0(v31, v24, 824);
    // ... 列表合并逻辑
    sub_141212FB0(a1, v25, 928);
    return a1;
}
```

---

## L3b: sync_local_runtime_state_builder（0x1401b62f0）

```c
// a4==4 → check_schtask_codexmate_autoswitch
// 写 bundle_id='dev.aimami.auto-switch'(22B)
// field offsets: +512=bundle_id_len, +536=codex_update_major, +544=codex_path_present, +545=autoswitch_status
__int64 sync_local_runtime_state_builder(__int64 a1, __int64 a2, __int64 a3, char a4) {
    v4 = a4;
    v7 = *(a3+728);   // provider_present_flag
    v8 = *(a3+720);   // codex_update_major version
    v9 = *(a3+724);   // codex_update_minor version

    if (a4 == 4)
        v4 = check_schtask_codexmate_autoswitch(*(a2+840), *(a2+848));
        // → schtask_codexmate_autoswitch_query_111 (0x14079f5c0)
        //   runs: schtasks /Query /TN CodexMateAutoSwitch /V /FO CSV
        //   returns: 0=running, 1=other_status, 2=not_found/exec_error

    // alloc bundle_id
    v10 = sub_140001360(22, 1);
    qmemcpy(v10, "dev.aimami.auto-switch", 22);

    sub_1401EB500(v16, a3+488);  // read local state block

    // 构造输出结构
    *(a1+512) = 22;        // bundle_id_len
    *(a1+520) = v10;       // bundle_id_ptr → "dev.aimami.auto-switch"
    *(a1+528) = 22;        // bundle_id_cap
    *(a1+536) = v8;        // codex_update_major
    *(a1+540) = v9;        // codex_update_minor
    *(a1+544) = v7 & 1;    // codex_path_present
    *(a1+545) = v32;       // autoswitch_status (= v4 = schtask query result)
    *(a1+752) = 1;         // refresh_count = 1 (注: 此处早于 L3c，由 L3c 最终覆盖)
    // ... 其他字段填充
    return a1;
}
```

---

## L3c: schedule_full_runtime_refresh_builder（0x140213770）

```c
// alloc "ok"(2B) + "SCHEdul"(7B); set refresh_count=1, refresh_required=true
__int64 schedule_full_runtime_refresh_builder(__int64 a1, __int64 a2, __int64 a3) {
    // alloc "ok"
    v6 = sub_140001360(2, 1);
    *v6 = 27503;  // 'ok' LE = 0x6B6F
    // alloc "SCHEdul"
    v9 = sub_140001360(7, 1);
    *v9 = 1667462483;           // 'SCHEd' bytes
    *(v9+3) = 1936942435;       // 'ul' bytes

    sub_141212FB0(a1, a2, 680); // copy a2 → a1 (680 bytes base state)

    // trailing schedule fields
    *(a1+680) = 2;     // status_str len
    *(a1+688) = v6;    // status_str ptr → "ok"
    *(a1+696) = 2;     // status_str cap
    *(a1+704) = 7;     // tag_str len
    *(a1+712) = v9;    // tag_str ptr → "SCHEdul"
    *(a1+720) = 7;     // tag_str cap
    // schedule control
    *(a1+728) = *(a3+0);  // schedule config low 128bit
    *(a1+744) = *(a3+16); // schedule config high qword
    *(a1+752) = 1;        // refresh_count = 1
    *(a1+756) = 1;        // refresh_required = true
    return a1;
}
```

---

## L5: schtask_codexmate_autoswitch_query_111（0x14079f5c0）— WINDOWS-ONLY terminal

```c
// 运行: schtasks /Query /TN CodexMateAutoSwitch /V /FO CSV
// 返回: 0=running, 1=other_status, 2=not_found/exec_error
// TERMINATED: external_call (schtasks.exe process)
char schtask_codexmate_autoswitch_query_111() {
    // 构建命令行 argv
    sub_1410828F0(&v10, "schtasks", 8);
    sub_1410827D0(&v10, "/Query", 6);
    sub_1410827D0(&v10, "/TN", 3);
    sub_1410827D0(&v10, "CodexMateAutoSwitch", 19);
    sub_1410827D0(&v10, "/V", 2);
    sub_1410827D0(&v10, "/FO", 3);
    sub_1410827D0(&v10, "CSV", 3);

    // 执行 schtasks.exe
    sub_1410878D0(&v14, &v10);  // process exec
    if (__OFSUB__(-v14, 1)) {
        // exec 失败 (v14==-1)
        sub_140041790(v15);
        sub_140233B60(&v10);
        return 2;  // not_found / exec_error
    }

    // 解析输出
    sub_14109FB90(&v14, v17, ...);  // stdout 读取
    // case-insensitive "running" compare (7 chars, inline loop)
    v6 = sub_14072E9F0("running", 7, v11, v12);
    if (!v6) {
        // 状态: running
        return 0;
    }
    // 输出不含 "running" — 其他状态
    // 内联 "running" 逐字节 tolower 对比 (7 bytes)
    if (tolower_cmp_7bytes(v0) == "running") return 0;
    return 1;  // other_status
}
```

---

## dim4 输入参数详表

| 层级 | 参数 | 类型 | 说明 |
|------|------|------|------|
| IPC handler | (无) | `()` | argKeys=[], argObject=null — 零前端参数 |
| arg_parser | cmd="begin_add_account_attach_monitor" | `&str` (32B) | IPC 命令名 literal @ 0x1412ac25d |
| arg_parser | label="app"→"repo" | `&str` | context label, 慢路径改为 "repo" |
| arg_parser | argc=3 | u8 | discriminant 控制，v17==3→cached |
| L2 core | a3 | `*_BYTE` | monitor state ptr (byte[0]=CAS, byte[1]=waiter, +8=data) |
| L3 business | a2 | `*state_data` | = a3+8 from core |
| L3b sync | a4=4 | u8 const | 触发 check_schtask_codexmate_autoswitch |
| L5 schtask | (no arg) | `()` | VA 0x14079f5c0, 完全无参数 |

---

## 关键地址总表

| 符号 | 地址 | 层级 | 说明 |
|------|------|------|------|
| begin_add_account_attach_monitor_handler | 0x140013a60 | L1 | Tauri IPC entry (owner) |
| begin_add_account_attach_monitor_core | 0x14078c070 | L2 | CAS monitor dispatch |
| begin_add_account_attach_monitor_business | 0x1401aa1c0 | L3 | 三阶段业务逻辑 |
| state_manager_lock_and_assemble | 0x1401abc20 | L3a | RwLock::read + assembler |
| sync_local_runtime_state_builder | 0x1401b62f0 | L3b | schtask query + state sync |
| schedule_full_runtime_refresh_builder | 0x140213770 | L3c | "ok"+"SCHEdul" tag |
| state_manager_assemble_inner | 0x1401acb20 | L4 | 账号/provider 列表构建 |
| schtask_codexmate_autoswitch_query_111 | 0x14079f5c0 | L5 | schtasks.exe external call |
| auto_switch_state_persist_json_111 | 0x1401a6c10 | L4/terminal | JSON state 持久化 |
| quota_history_append_dedup_111 | 0x1401ff820 | L4/terminal | quota history 追加去重 |
| win32_file_write_bytes_111 | 0x141093710 | L4/terminal | Win32 file write primitive |
| tauri_ipc_main_dispatcher_sys | 0x14000d2a0 | caller | IPC dispatcher |
| confirm_pending_auto_switch_deserialize_request_sys | 0x140089a50 | L1 callee | arg_parser |
| pending_auto_switch_state_lock_acquire_111 | 0x14006edc0 | L1 callee | StateManager lookup |
| sub_14080C3C0 | 0x14080c3c0 | L1 callee | IPC resolver/快速响应 |
| sub_140589300 | 0x140589300 | L2 callee | std::thread::spawn |
| WakeByAddressSingle | 0x14124a5d0 | L2 callee | Win32 wake (WINDOWS-ONLY) |
| __imp_CloseHandle | 0x14124d788 | L2 callee | Win32 (WINDOWS-ONLY) |
| aBeginAddAccoun | 0x1412ac25d | string | "begin_add_account_attach_monitor" |

---

## 终止原因汇总（terminated_reason）

| 路径 | 终止点 | terminated_reason |
|------|--------|-------------------|
| L1 快速路径 | sub_14080C3C0 | response_serialize |
| L1 早期路径 | sub_14080C3C0 (lock==null) | response_serialize |
| L2 waiter路径 | sub_1410B1930 poison → panic | error_return |
| L3c | schedule_full_runtime_refresh_builder output | response_serialize |
| L4 auto_switch | auto_switch_state_persist_json_111 | persistence_commit |
| L4 quota | quota_history_append_dedup_111 | persistence_commit |
| L4 file | win32_file_write_bytes_111 | platform_primitive |
| L5 schtask | schtasks.exe process exec | external_call |
| L2 thread | std::thread::spawn | platform_primitive |

---

## 关键行为特征（vs 1.0.9）

1. **零前端参数** — `argKeys=[]`, `argObject=null`，两版本一致。
2. **owner VA 迁移** — 1.0.9: 0x140283580，1.1.1: 0x140013a60。整个 IPC dispatch 表重排。
3. **新增 CAS monitor 状态机 (L2)** — 1.1.1 在 business 前加了 `_InterlockedCompareExchange8` + `WakeByAddressSingle` 锁保护，1.0.9 无此层。
4. **新增 schtask 查询 (L5, WINDOWS-ONLY)** — `schtasks /Query /TN CodexMateAutoSwitch /V /FO CSV`，返回 0/1/2 状态写入 autoswitch_status 字段 (a1+545)。1.0.9 无此 external_call。
5. **新增 bundle_id 硬编码** — `dev.aimami.auto-switch` (22B) 在 L3b 中 alloc 写入，1.0.9 未见。
6. **持久化路径更新** — 1.0.9 用 relay_atomic_write_file_sys；1.1.1 用 auto_switch_state_persist_json_111。
7. **线程 spawn** — RUST_MIN_STACK=0x8000000000000000；*v3=0x8000000000000000 = Pending 标记；两版本均有，但 spawn 路径触发条件不同。
8. **refresh tag 固定为 "SCHEdul"** — 1.1.1 L3c 新增此语义标记，1.0.9 无。
