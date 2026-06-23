# pseudocode — load_installed_skills (AiMaMi 1.1.1 win64)

session: wf-aimami111-delta-20260618-goldleaf
machine: <本地机器>
date: 2026-06-18
delta_class: integrity_recovered
baseline: 1.0.9 (previously marked same — confirmed changed)
sha: d24e429a

---

## Owner: `load_installed_skills_cmd_111`

**VA:** `0x14002A100`
**Size:** `0x38F` bytes (911 bytes)
**String anchor:** `0x1412AC157` → `"load_installed_skills"`
**IPC dispatch xref:** `0x14002A180` (data ref in command table)

```c
// Gold-leaf pseudocode — 双路径完整体
// PATH A: pending_auto_switch 无挂起（正常读路径）
// PATH B: pending_auto_switch 挂起中（bootstrap-cache write-back，1.1.1 新增）

__int64 load_installed_skills_cmd_111(__int64 ctx) {
    // ── 初始化 ──────────────────────────────────────────────────
    // sub_141212FB0 = memcpy/move helper
    // v16/v18 = command context 内部 output buffer slots
    sub_141212FB0(v16, ctx, 520);          // @ 0x14002a138
    sub_141212FB0(v18, ctx + 520, 400);    // @ 0x14002a154

    // 读取 SkillSnapshot 字段 (offset 920/936)
    v38 = ctx[936];                        // @ 0x14002a160
    v37 = ctx[920];                        // @ 0x14002a16e

    // 命令名 + repo 字段
    v22 = "load_installed_skills";         // 0x1412AC157, 21 bytes
    v23[0] = 21;
    v23[1] = "repo";                       // 0x1412AC6D1, 4 bytes
    v24[0] = 4;
    v24[1] = v16;                          // output buffer ptr

    // ── DELTA: NEW IN 1.1.1 — pending_auto_switch spinlock ──────
    // 获取 pending_auto_switch_state spinlock
    // 返回 0: 无挂起 → 走 PATH A
    // 返回 非0: auto-switch 挂起中 → 走 PATH B
    __int64 lock_result = pending_auto_switch_state_lock_acquire_111(
        v17 + 16    // pending_auto_switch_state 地址 @ ctx+16
    );  // call @ 0x14002a1d9

    if (lock_result == 0) {
        // ══ PATH A: 正常路径 ═══════════════════════════════════
        // 调用 query_installed_skills_with_repo_111 读取 skill store
        query_installed_skills_with_repo_111(
            &v31,   // out: Result<SkillList>
            &v22,   // command name ptr
            &v23+8  // repo field ptr
        );  // call @ 0x14002a200

        // 判断结果 discriminant
        // 6 = Err variant (skip to error send)
        // 3 = Ok variant (result value in v31[1])
        if (v31[0] != 6) {
            // Err path — send IPC error response
            sub_141212FB0(v15, ctx + 520, 360);
            v34 = ctx[880];
            v35 = ctx[896];
            v22 = 1;
            // sub_14080C3C0 = has_notch_invoke_resolver_respond (InvokeResolver vtable dispatch)
            sub_14080C3C0(v15, v19, &v22, &v34, v20, v21);  // @ 0x14002a3c5
            goto cleanup;
        }
        // Ok path — v31[1] = skill list value ptr
        lock_result = v31[1];
    }

    // ══ PATH B: pending_auto_switch 挂起中 OR Ok value forwarding ════
    // 注意：此路径在 lock_result!=0 (auto-switch pending) 时进入
    // 或在 Ok 结果时 lock_result = v31[1] (skill list value)
    // sub_1407DD060 = bootstrap-cache write-back core (NEW IN 1.1.1 on Windows)
    sub_1407DD060(&v27, lock_result);  // @ 0x14002a22b

    // 检查 write-back 结果
    sub_141212FB0(&v22, ctx + 520, 400);
    if (v27 > 0) {
        // 正常数据结果 — 构造 Ok Response
        v6 = v28; v7 = v29; v8 = v30;
        if (v30 < 0) { ... alloc error path ... }
        if (v30) {
            // alloc 结果 buffer
            sub_140001360(v8, 1);  // alloc
        }
        BYTE8(v31) = 3;  // Ok discriminant
        // 设置 v31/v32 为结果
        *v31 = 0x8000000000000000;  // Rust Ok tag
    }
    sub_141212FB0(&v31, &v27, 144);

    // ── 序列化 + 发送 IPC 响应 ────────────────────────────────
    // sub_140832230 = serialize result + route to IPC
    sub_140832230(&v22, &v31);  // @ 0x14002a32f

cleanup:
    // ── 清理 skill entry 数组 ────────────────────────────────
    // 遍历 skill_list arc array，96 bytes/entry stride
    for (each entry @ stride 96 in v37 array, count=v38) {
        sub_14033AB50();  // Drop impl for SkillEntry (has_notch_arc_listener_drop_loop)
    }
    if (v37 != 0) {
        sub_140001370(v37+1, 96 * v37[0], align=8);  // free array
    }

    return sub_140042650(v16);  // finalize IPC resolver
}
```

---

## Callee: `pending_auto_switch_state_lock_acquire_111` (0x14006EDC0)

**DELTA: NEW IN 1.1.1** | Windows futex spinlock
返回值: 0=无挂起, 非0=auto-switch挂起中

```c
// Windows spinlock: InterlockedCompareExchange8 + WakeByAddressSingle
// 保护 pending_auto_switch_state 并发访问
__int64 pending_auto_switch_state_lock_acquire_111(char *state_addr) {
    // 尝试 CAS 获取锁 (0 → 1)
    if (_InterlockedCompareExchange8(state_addr, 1, 0)) {
        // 锁已被持有 → 等待
        sub_14124A510(state_addr);  // spinlock wait helper
    }

    // 检查 state_addr[8*4] (pending count)
    if (!off_141899DC0[0] * 2) {
        // 无 tokio runtime tracing
        v6 = 0;  // initial xchg result
        if (!state_addr[1]) goto no_pending;  // v4[1] = pending flag

    no_pending:
        // 检查 state_addr+32 (pending list head)
        if (state_addr[4*8]) {
            // 有 pending 条目 — 通过 vtable 调用 Result::unwrap 或 panic
            // SIMD 线性探测 hashmap lookup @ state_addr[ptr]
            // 最终通过 vtable+24 分发: (*(fn*)(vtable+24))(handler, lock_result, a3)
            // 返回 lock result
            WakeByAddressSingle(state_addr);
            return lock_result;  // 非0
        }
        // 无 pending: 释放锁，返回 0
        *state_addr = 0;
        WakeByAddressSingle(state_addr);
        return 0;
    }
    // tracing path (sub_14124B1D0) — 反转结果 bit
    v6 = sub_14124B1D0(...) ^ 1;
    // ...
    WakeByAddressSingle(state_addr);
    return v16;  // 0 or non-0
}
```

**terminated_reason:** vtable dispatch (dyn trait object @ vtable+24)

---

## Callee: `sub_1407DD060` — bootstrap-cache write-back core (0x1407DD060)

**DELTA: NEW PATH IN 1.1.1 (Windows)** — 当 pending_auto_switch 挂起时执行
此函数在 1.0.9 Windows 中不在 `load_installed_skills` 调用链中

```c
// bootstrap-cache write-back core
// 功能：直接从 DB 读取技能列表 → 获取 OnceLock slot → 写回 bootstrap cache → 触发快照写入
__int64 sub_1407DD060(__int64 out, _BYTE *mutex_addr, __int64 a3) {
    // ── 获取 bootstrap cache mutex ───────────────────────────
    // mutex_addr = bootstrap_cache_mutex (OnceLock-backed)
    if (_InterlockedCompareExchange8(mutex_addr, 1, 0)) {
        sub_14124A510(mutex_addr);  // wait for mutex
    }

    // 检查 mutex_addr[1] (poisoned flag)
    if (mutex_addr[1]) {
        // OnceLock 已中毒 — panic path
        // "poisoned lock: another task failed inside" @ 0x1412E6BB3
        sub_1410B1930(aPoisonedLockAn, 41, &v31);
        sub_14124BFE0(...);  // panic handler
    }

    // ── DB 直读技能列表 ──────────────────────────────────────
    // skill_list_db_query_111 绕过 skill store，直接读取 DB
    v17 = mutex_addr[30*8];  // db handle ptr
    v18 = mutex_addr[31*8];  // db handle len
    skill_list_db_query_111(&v42, v17, v18);  // @ 0x1407dd207

    // result discriminant == 10 → 成功
    if (v42[0] == 10) {
        // ── OnceLock 写回 ────────────────────────────────────
        // sub_141095530 = OnceLock acquire for bootstrap cache slot
        *v47 = v17; v47[1] = v18;
        sub_141095530(&v47, &v31);  // @ 0x1407dd287 — 获取 OnceLock write slot

        // 时间戳
        system_time_precise_u32_111();   // @ 0x1407dd2be
        elapsed_since_ts_111(&v31, &v42, 0xD53E8000, 27111902);  // @ 0x1407dd2e1

        // ── 写入快照到磁盘 ────────────────────────────────────
        // load_snapshot_read_only_111 名称误导：实际含 win32_file_write_bytes_111 写路径
        load_snapshot_read_only_111(&v31, (char*)mutex_addr + 8, &v38);  // @ 0x1407dd463

        if (v31[0] != 10) {
            // 写入失败 — drop error
            sub_140809B30(&v31);  // drop_result_inner_111
        }

        // 归约结果到 out
        sub_1402154F0(&v31, &v42);
        sub_141212FB0(out, &v31, 144);

    } else {
        // ── DB 读取失败路径 ──────────────────────────────────
        // 通过 sub_140243FC0 转换错误结构
        sub_140243FC0(&v31, &v38);
        sub_140809B30(&v42);  // drop_result_inner_111

        // 设置 out 为 Err(e)
        *out[3] = v48;
        *out[1:2] = v47;
        *out = 0x8000000000000000;  // Rust enum tag
    }

    // ── 释放 bootstrap cache mutex ───────────────────────────
    v26 = mutex_addr;
    v27 = *mutex_addr;
    *mutex_addr = 0;  // unlock
    if (v27 == 2) WakeByAddressSingle(mutex_addr);  // wake waiters

    return out;
}
```

**terminated_reason** within `sub_1407DD060`:
- `skill_list_db_query_111` → `snooze_file_open_111` + `sub_1406F0EA0` → DB read → terminated at DB driver primitive
- `sub_141095530` → `sub_1410AF0F0` (UTF-8 → UTF-16 decoder loop, platform string conv) → terminated at vtable dispatch
- `load_snapshot_read_only_111` → `win32_file_write_bytes_111` → terminated at Win32 FileIO

---

## Callee: `query_installed_skills_with_repo_111` (0x141214620)

**PATH A 路径核心** — skill store 读取路由

```c
// 将 repo + command name 打包为 SkillQuery，调用 skill_store_get_all_111
__int64 query_installed_skills_with_repo_111(__int64 out, __int64 cmd_name, __int64 repo) {
    // 构造 query context (v9)
    v9[0] = repo;
    v9[1] = sub_140082100;   // format fn
    v9[2] = cmd_name;
    v9[3] = sub_140082100;

    // sub_1410A1DF0 = Rust format/write into String buf
    sub_1410A1DF0(v6, &unk_1412B0057, &v9);

    // sub_141222DD0 = skill store snapshot acquire (Arc)
    v10[0] = sub_141222DD0(v6);

    // skill_store_get_all_111 = iterator over skill store
    v9[0] = v10;
    v9[1] = skill_store_get_all_111;  // 0x14106D960
    sub_1410A1DF0(&v7, &unk_1412AE72B, &v9);

    *out = 3;  // Ok discriminant (3 = Some value)
    // copy result
    return sub_14106D970(v10);  // drop snapshot arc ref
}
```

### `skill_list_db_query_111` (0x1406F0D80) — PATH B 直读 DB

```c
// 绕过 skill store，直接从文件系统/DB 读取技能列表
_QWORD *skill_list_db_query_111(_QWORD *out, int a2, int a3) {
    snooze_file_open_111(&v7);    // 打开 skills 数据文件（可能带 backoff/sleep）
    if (v7[0] == 2) {
        // 文件打开失败
        out[1] = 0; out[2] = 8; out[3] = 0;
    } else {
        // 文件已打开 — 读取
        v7 = 0; v7[1] = 8; v8 = 0;
        sub_1406F0EA0(a2, a3, a2, a3, &v7);  // 实际 DB 读取
        // 长度分支 (DB 条目数)
        if (v8 >= 2) {
            if (v8 >= 0x15)
                sub_1407B2C40(v7[1], v8, &v9);  // 大批量处理
            else
                sub_1401DB4C0(v7[1], v8, 1, &v9);  // 小批量处理
        }
        out[3] = v8;
        out[1..2] = v7;
    }
    *out = 10;  // discriminant 10 = success
    return out;
}
```

**terminated_reason:** `sub_1406F0EA0` = DB read driver (platform primitive)

---

## Callee: `load_snapshot_read_only_111` (0x1401B4A90)

**注意：函数名误导性** — 实际含写路径 (`win32_file_write_bytes_111`)

```c
// 读取现有 MCP snapshot + 附加当前 skills 数据 + 写入更新后的快照文件
_QWORD *load_snapshot_read_only_111(_QWORD *out, _QWORD *cache_slot, __int64 skills_result) {
    // 路径校验
    v6 = relay_config_check_parent_dirs_sys(cache_slot);  // 0x1406F2870
    if (v6) {
        *out = 2; out[1] = v6;  // Err
        return out;
    }

    // 读取现有快照
    v7 = cache_slot[77]; v8 = cache_slot[78];  // snapshot file path
    load_mcp_servers_read_existing_snapshot_111(v15, v7, v8);  // 0x1401BF000

    // 时间戳
    v24[2] = system_time_precise_u32_111();        // 0x14107B7E0
    elapsed_since_ts_111(&v20, &v24[1], 0xD53E8000, 27111902);  // 0x14107B790

    // 合并数据
    sub_140363F30(&v23, skills_result);    // 从 skills_result 提取字段
    sub_1410A2210(&v24[1], skills_result + 24);

    // 构造完整 snapshot 结构
    sub_14004AA20(&v16);    // init snapshot writer

    // 序列化 snapshot → JSON bytes
    serialize_skill_snapshot_json_111(&v24[1], &v20);  // 0x140197420

    // ── 写入磁盘 ─────────────────────────────────────────────
    // win32_file_write_bytes_111 @ 0x141093710
    // 此为 1.1.1 Windows 新副作用：load_installed_skills 现在会触发快照文件写入
    v13 = win32_file_write_bytes_111(v7, v8, v25, v12);

    if (v13) {
        *out = 2; out[1] = v13;  // write failed
    } else {
        *out = 10;               // success
    }
    return out;
}
```

**terminated_reason:** `win32_file_write_bytes_111` → Win32 FileIO primitive (WriteFile/NtWriteFile)

---

## DTO: `InstalledSkillSummary` (8 fields)

```
struct InstalledSkillSummary {
    title:          String,
    summary:        String,
    relativePath:   String,
    directoryPath:  String,
    skillFilePath:  String,
    usageStatus:    UsageStatus,    // enum: "usageStatus" key
    usageLastError: Option<String>, // "usageLastError" key
    /* field 8: field table @ off_1412B7E58 — not fully resolved */
}
```

String anchor: `0x1412B7E2C` = `"struct InstalledSkillSummary with 8 elements"`
Serializer: `serialize_installed_skill_summary_111` (`0x140172840`, size `0x34A1`)
Deserializer: `deserialize_usage_state_111` (`0x140176DA0`, size `0xADA`)
Field name pool: `0x1412B7DFA` 连续字节: `title|summary|relativePath|directoryPath|skillFilePath`

---

## DTO: `SkillListPayload` (4 fields)

```
struct SkillListPayload {
    totalrootPath: String,    // "totalrootPath" — confirmed
    /* fields 2-4: field table @ 0x1412B7BF0 — not resolved in this pass */
}
```

String anchor: `0x1412B7BC5` = `"struct SkillListPayload with 4 elements"`

---

## DTO: `SkillSnapshot` (6 fields, outer wrapper)

| 字段 | struct 偏移 |
|------|------------|
| `writtenAt` | +0 |
| `snapshotProgressive` | +16 |
| `usageAnalytics` | +696 |
| `mcpServers` | +792 |
| `installedSkills` | +856 |
| `schemaVersion` | +920 |

Serializer VA: `0x140197420`

---

## Side Effects 摘要

| 副作用 | PATH A | PATH B |
|--------|--------|--------|
| 读取 skill store (snapshot) | ✓ | ✗ |
| 读取 DB 直接 | ✗ | ✓ |
| OnceLock 写入 | ✗ | ✓ (新) |
| snapshot 文件写入 (磁盘) | ✗ | ✓ (新) |
| spinlock 持有期间 | 新 | 新 |
| HTTP 调用 | ✗ | ✗ |
| sidecar 进程 | ✗ | ✗ |

---

## IPC Envelope

Response: `{"schemaVersion":..., "success":..., "code":..., "message":..., "warnings":[...], "data":{...}}`
Serializer: `sub_140226E00` (`serialize_ipc_envelope`)
Success discriminator: `0x8000000000000025`
Error discriminator: `0x8000000000000005`
