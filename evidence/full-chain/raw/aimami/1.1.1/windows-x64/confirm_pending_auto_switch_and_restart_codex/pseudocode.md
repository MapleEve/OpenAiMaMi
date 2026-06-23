# Pseudocode — confirm_pending_auto_switch_and_restart_codex (win 1.1.1)

**Source**: 逆向分析 HexRays decompile of `confirm_pending_auto_switch_and_restart_codex_owner_sys`
**VA**: 0x140952070 | **Size**: 0xb9a = 2970B | **BB**: 111 | **Cyclomatic**: 29
**逆向分析 server**: <逆向工具通道> | **IDB**: AiMaMi 1.1.1 win64.exe.i64
**Session**: wf-aimami111-delta-20260617-sweep | **Machine**: <本地机器> | **Date**: 2026-06-17
**Decompile status**: COMPLETE — full body, dim1+dim4 补全

---

## dim1 — 前端 CCF（invoke 确认路径）

### 命令字符串证据

| 字符串 | VA | 用途 |
|---|---|---|
| `confirm_pending_auto_switch_and_restart_codex` | 0x1412fab37 | owner_sys 内部 namespace 查找 key |
| `confirm_pending_auto_switch_and_restart_codex` | 0x1412ac311 | tauri IPC 主分发表（tauri_ipc_main_dispatcher_sys@0x14000d2a0）|
| `app` | 0x1412fa97e | 命令 namespace |

### 前端调用入口（CCF）

```
tauri_ipc_main_dispatcher_sys @ 0x14000d2a0  (size=0x45ce)
  └─ 字符串匹配 "confirm_pending_auto_switch_and_restart_codex" @ 0x14000f16f
       └─ 调度到 confirm_pending_auto_switch_and_restart_codex_owner_sys @ 0x140952070
          （经由两个 future state machine wrapper 之一）
```

**两个 caller wrapper**（结构完全相同，仅 on-complete 回调不同）：

| Caller | VA | Size | on-complete callback |
|---|---|---|---|
| `sub_140A7AED0` | 0x140a7aed0 | 0x235 | `sub_140AC37E0` |
| `sub_140A94080` | 0x140a94080 | 0x235 | `sub_140AB9C00` |

两个 wrapper 的调用模式完全等价：
```c
// wrapper 调用模式（两个 caller 共用）
v7[0] = sub_140F07840(*(_QWORD *)(a1 + 40));  // acquire tokio runtime guard
v4 = confirm_pending_auto_switch_and_restart_codex_owner_sys(v14 + 56, (__int64)v12);
sub_140F09130(v7);  // release runtime guard
if (!v4) { ... }  // 处理 Pending 状态
// on-complete 路径分叉到各自回调
```

**前端 invoke 命令名**：`confirm_pending_auto_switch_and_restart_codex`
**namespace**：`app`（与字符串 0x1412fa97e 吻合）

---

## dim4 — 输入参数（反序列化结构）

### 反序列化函数

```
confirm_pending_auto_switch_deserialize_request_sys @ 0x140089a50
  Size: 0xce
  Signature: __int64 __fastcall(a1=output_buf, a2=IPC_request_ctx)
```

### 参数结构分析

```c
// 反序列化内部流程
sub_140729280(tmp_buf, *(_QWORD *)(a2 + 32));  // parse JSON from request payload at a2+32
sub_141212FB0(a1, result_152B, 152);            // copy 152B result to output
// 后续均为引用计数清理（_InterlockedDecrement64 × 4）
// return a1
```

**结论**：`confirm_pending_auto_switch_and_restart_codex` 是**零参数命令**。
- 前端调用不传任何 body 字段
- 反序列化函数读取 `a2+32`（标准 IPC payload 指针位置）但解析出 152B 空/默认结构
- 无 `accountKey`、无 `token`、无任何业务字段提取
- 对比同族命令 `switch_account_and_restart_codex`（有 `accountKey` 字段）：本命令是纯触发式（用"已 pending 的切换配置"，不需前端再传参数）

### 与 1.0.9 对比
- 1.0.9：同样零参数，deserialize 结构基本等价
- 1.1.1 delta：反序列化出口引用计数模式相同，无新字段

---

## 协程状态机结构（4 层）

```
outer switch (a1+3440):  ← 主协程阶段
  case 0: → inner switch (a1+3424)    首次进入
    case 0: LABEL_4   namespace lookup + first run
    case 1: LABEL_61  sub_14124C380 + fallthrough
    case 2: LABEL_60  sub_14124C3A0
    case 3: LABEL_9   relay execute path

  case 1: sub_14124C380(&off_1412FDE68) + fallthrough → case 2
  case 2: sub_14124C3A0(&off_1412FDE68) + fallthrough → case 3
  case 3: → inner switch (a1+3424) [共享 LABEL_9]

LABEL_9 — relay 执行路径：
  sub-state switch (a1+3416):  ← relay provider 加载阶段
    case 0: LABEL_12 (copy provider context, enter inner2)
    case 1: sub_14124C380(&off_1412FDEF0) + fallthrough
    case 2: sub_14124C3A0(&off_1412FDEF0) + fallthrough
    case 3: → relay sub-state switch (a1+3408)

relay sub-state switch (a1+3408):  ← 异步 dispatch 阶段
  case 0: LABEL_13 — bootstrap + atomic + vtable dispatch
  case 1: LABEL_63 — sub_14124C380(&off_1412FCE78)
  case 2: LABEL_62 — sub_14124C3A0(&off_1412FCE78)
  case 3: LABEL_25 — async poll + response 构建
```

**vs 1.0.9**：1.0.9 为 6-phase 线性状态机；1.1.1 重组为 4 层嵌套 switch，增加 relay provider type routing。

---

## LABEL_4 — 命令首次调度（outer=0, inner=0）

```c
// 标记协程激活
*(_WORD *)(a1 + 3441) = 257;  // 0x0101 — active flag
*(_BYTE *)(a1 + 3443) = 1;

// copy provider context snapshot (1520B)
sub_141212FB0(a1 + 1912, a1 + 392, 1520);

// namespace lookup: cmd="confirm_pending_auto_switch_and_restart_codex"(45), ns="app"
// 参数布局（栈帧）:
//   v54.ptr  = aConfirmPending_0 (0x1412fab37)
//   v54.len  = 45
//   v55      = aApp_4 (0x1412fa97e)  "app"
//   v56      = 3  (namespace string length)
//   v57/v58  = provider context ptr (a1+1912)
confirm_pending_auto_switch_deserialize_request_sys(&v60, &v54);
// OUT: v60 = result discriminant
//   v60 == 3 → no matching provider/route → goto provider-not-found path
//   v60 != 3 → resolved; store resolved provider at a1+2456..2768 (320B block)

if (v60 != 3) {
    // store resolved provider fields
    *(_QWORD *)(a1 + 2456) = v60;             // discriminant
    *(_BYTE *)(a1 + 2464) = v8;               // flag byte
    *(_DWORD *)(a1 + 2465) = (u32)v7;         // provider id low
    *(_WORD *)(a1 + 2469) = WORD2(v7);        // provider id mid
    *(_BYTE *)(a1 + 2471) = BYTE6(v7);        // provider id high
    *(_QWORD *)(a1 + 2472) = v9;              // provider ptr field 1
    *(_QWORD *)(a1 + 2480) = v10;             // provider ptr field 2
    *(_QWORD *)(a1 + 2488) = v11;             // provider ptr field 3
    // + 8 × 16B oword copies (provider context 128B, a1+2496..2592)
    *(_BYTE *)(a1 + 2768) = 0;                // reset flag
    sub_141212FB0(a1 + 2776, &a1+2456, 320);  // copy resolved block → a1+2776
    *(_BYTE *)(a1 + 3416) = 0;                // reset relay-load sub-state
    goto LABEL_12;
} else {
    // provider not found path
    sub_140921810(v85);  // cleanup waker
    // iterate provider list (a1+2432=count, a1+2440=ptr, a1+2448=end)
    // call sub_14033AB50() per entry (96B stride)
    if (count > 0) sub_140001370(list_ptr, 96*count, 8);  // free list
    goto LABEL_55;  // set inner=1, call sub_1408F2FB0 cleanup
}
```

---

## LABEL_12 — 准备 relay provider context

```c
// copy provider context 320B → a1+3096
sub_141212FB0(a1 + 3096, v16/*=a1+2776*/, 320);

// enter relay sub-state switch (a1+3408)
switch (*(_BYTE *)(a1 + 3408)) {
    case 0: goto LABEL_13;
    case 1: goto LABEL_63;
    case 2: goto LABEL_62;
    case 3: goto LABEL_25;
}
```

---

## LABEL_13 — Relay provider 原子操作 + vtable 分发

```c
// copy bootstrap block 152B → v59 temp
sub_141212FB0(v3 + 3248, v88/*=a1+3096*/, 152);
sub_1400803E0(v59, v3 + 3248);  // bootstrap state reader

// 双原子引用计数递增（必须全部非零，否则 BUG()）
v23 = *(volatile i64**)(a1 + 3384);    // refcount ptr #1
v24 = _InterlockedIncrement64(v23);    // refcount++ → 必须 > 0
// 结合 OF 标志检查溢出：(v24 < 0) ^ OF | (v24 == 0) → BUG()
v25 = *(volatile i64**)(a1 + 3392);    // refcount ptr #2
v26 = _InterlockedIncrement64(v25);    // refcount++ → 必须 > 0
// 同样 OF 检查

// relay provider 全局 vtable: off_141899420
// spin-lock 检查
v27 = off_141899420;
if (*(u32*)(off_141899420 + 96) != 0) {  // type variant flag at +96
    sub_1412271EF(off_141899420);          // acquire provider spinlock
    v27 = v49;                             // refreshed ptr
}

// Provider variant 路由（基于 *(u32*)(v27+16) == 2 ? variant_A : variant_B）
if (*(u32*)(v27 + 16) == 2) {
    // Variant A: type_tag @ vtable+16 == 2
    stride = (*(_BYTE*)v27) ? 472 : 704;   // bool flag @+0 → 472 or 704
    dispatch_addr = v27[1] + stride;        // provider slot = vtable[1] + stride
    v30 = sub_14023DC00(dispatch_addr, v27, &v60, &off_1412F7958);
} else {
    // Variant B: type_tag @ vtable+16 != 2
    stride = (*(_BYTE*)(v27 + 64)) ? 472 : 704;  // bool flag @+64 → 472 or 704
    dispatch_addr = v27[9] + stride;               // provider slot = vtable[9] + stride
    v30 = sub_14023DC00(dispatch_addr, v27+8, &v60, &off_1412F7940);
}
*(a1 + 3400) = v30;  // store 640B future handle
// 设置 relay sub-state = 3 → 下次 poll 进入 LABEL_25
```

---

## LABEL_25 — Async poll + response 构建

```c
// poll relay future（tokio waker 模型）
sub_140871EA0(&v60, a1 + 3400, a2);
// 返回值语义（v60 = poll result discriminant）:
//   4 → Pending: set a1+3408=3, a1+3416=3, a1+3424=3; return 1
//   3 → Ready(Err): error path via sub_1410A1DF0
//   2 → Ready(Ok[bytes]): success path, build response
//   other → Ready(Ok[unit/default])

if (v60 == 4) {
    // Pending: 保存协程状态，返回 1（yield）
    *(a1+3408) = 3; *(a1+3416) = 3; *(a1+3424) = 3;
    return 1;
}

// drop future Arc if needed
if (sub_140EFCAF0(*v83)) sub_140EFD8E0(*v83);

if ((u32)v60 == 3) {
    // Ready(Err): 构建 error response
    // 把错误值塞进 v73/v89 临时 Vec → sub_1410A1DF0 + sub_14091A6D0
    // set *(_BYTE*)(a1+3408) = 1 → Err state
    goto LABEL_32;  // LABEL_32 → check error string alloc
}

if ((u32)v60 == 2) {
    // Ready(Ok[bytes]): 直接走 copy path
    sub_141212FB0(v51, &v52, 432);
    sub_140041870(a1 + 3248);  // drop bootstrap state
    sub_141212FB0(v50, &v52, 432);
    *(_BYTE*)(a1 + 3408) = 1;
    goto LABEL_32;
}

// else: Ready(Ok[non-bytes]) → call response serializer
sub_140225110(&v60, &v54);
// v54 布局: {discriminant=v7, ptr=v36, ns_ptr=v37, len=v11, extra=v38}
// OUT: v60 == 0x8000000000000025ULL → switch_provider_unavailable error
if (v60 == 0x8000000000000025ULL) {
    v12 = 0;  // 标记 error
} else {
    // 序列化成功：encode Ok variant
    v52 = { ptr=0, len=1, cap=0 };
    v51[2] = 1610612768;  // Vec capacity tag
    v51[0] = &v52; v51[1] = &off_1412FD9A0;
    if (sub_140E30410(&v60, v51)) {
        sub_14124BFE0(...);  // panic: "a Display implementation returned an error unexpectedly"
    }
    v9=v52; v10=*(v52+1); v11=v53;
    sub_14091A6D0(&v60);  // drop temp
    v12 = 1;  // success
    v8 = 3;   // response type = Ok
}

LABEL_49:
*v86 = 1;                       // mark relay state complete
sub_140911080(v87);              // cleanup relay provider slot
sub_140921810(v85);              // cleanup async waker

// cleanup provider iterator list (a1+2432=count, a1+2440=ptr)
if (*(_QWORD*)(a1+2432) > 0) {
    // iterate sub_14033AB50() per entry
    sub_140001370(*v45, 96 * count, 8);
}

LABEL_55:
*(_BYTE*)(a1 + 3424) = 1;       // mark inner state done
sub_1408F2FB0(v85);              // cleanup future state machine

// 构建 IPC response payload (360B)
sub_141212FB0(&v60, a1, 360);   // copy resolver ctx
// 提取 resolver fields: v48=a1+384, v55=a1+376, v54=a1+360
sub_14080C3C0(
    &v60,          // resolver_ptr
    v48,           // resolver_state (a1+384)
    &v74,          // payload (result: {ok=v12, type=v8, data=v9/v10/v11})
    &v54,          // result oword (a1+360)
    *(u32*)(a1+3432),  // err_code_a
    *(u32*)(a1+3436)   // err_code_b
);

return 0;  // coroutine Complete
```

---

## LABEL_32 — 字节串/错误路径分配

```c
if (v11 < 0) {
    v41 = 0;
    goto LABEL_34;
}
if (v11 > 0) {
    v42 = sub_140001360(v11, 1);  // alloc v11 bytes
    if (!v42) {
LABEL_34:
        v83 = v37; v88 = v36;
        sub_14124BCCB(v41, v11);  // OOM handler
    }
    sub_141212FB0(v42, v37, v11);  // copy bytes
    if (v36) sub_140001370(v37, v36, 1);  // free old
} else {
    v10 = 1;
    if (v36) sub_140001370(v37, v36, 1);
}
LABEL_39:
v12 = 1; v8 = 3; v9 = v11;
goto LABEL_49;
```

---

## 关键数据结构偏移（a1 = coroutine state 指针）

| 偏移 | 类型 | 用途 |
|---|---|---|
| a1 + 392 | [u8; 1520] | provider context 快照源 |
| a1 + 1912 | [u8; 1520] | provider context 快照目标（工作副本） |
| a1 + 2432 | u64 | provider list count |
| a1 + 2440 | *ptr | provider list base ptr |
| a1 + 2448 | *ptr | provider list end ptr |
| a1 + 2456 | u64 | resolved namespace discriminant |
| a1 + 2464 | u8 | provider flag byte |
| a1 + 2465 | u32 | provider id[0..3] |
| a1 + 2469 | u16 | provider id[4..5] |
| a1 + 2471 | u8 | provider id[6] |
| a1 + 2472 | u64 | provider ptr field 1 |
| a1 + 2480 | u64 | provider ptr field 2 |
| a1 + 2488 | u64 | provider ptr field 3 |
| a1 + 2496..2592 | [u8; 96] | provider context owords (6×16B) |
| a1 + 2768 | u8 | relay load flag |
| a1 + 2776 | [u8; 320] | resolved provider block copy |
| a1 + 3096 | [u8; 320] | relay context copy |
| a1 + 3248 | [u8; 152] | bootstrap block |
| a1 + 3384 | *volatile_i64 | refcount ptr #1 |
| a1 + 3392 | *volatile_i64 | refcount ptr #2 |
| a1 + 3400 | u64 | relay future handle |
| a1 + 3408 | u8 | relay sub-state (0/1/2/3) |
| a1 + 3416 | u8 | relay-load sub-state (0/1/2/3) |
| a1 + 3424 | u8 | inner sub-state (0/1/2/3) |
| a1 + 3432 | u32 | err_code_a (IPC response) |
| a1 + 3436 | u32 | err_code_b (IPC response) |
| a1 + 3440 | u8 | outer coroutine state (0/1/2/3) |
| a1 + 3441 | u16 | active flag (0x0101 when running) |
| a1 + 3443 | u8 | start flag |

---

## 关键子函数表

| VA | 名称/用途 |
|---|---|
| 0x140089a50 | `confirm_pending_auto_switch_deserialize_request_sys` — 反序列化（零参数） |
| 0x14023dc00 | relay executor — 分配 640B future，dispatch 到 tokio channel |
| 0x140225110 | response serializer — 序列化 {schemaVersion,success,code,message,...} |
| 0x14080c3c0 | IPC response finalizer — `InvokeResolver` vtable+24 调用 + WakeByAddressSingle |
| 0x140871ea0 | async poll — 轮询 relay future，返回 4/3/2/other |
| 0x140921810 | async waker cleanup |
| 0x140911080 | relay provider slot cleanup |
| 0x1408f2fb0 | future state machine cleanup |
| 0x1400803e0 | bootstrap state reader |
| 0x1412271ef | provider spinlock acquire |
| 0x14033ab50 | provider list entry destructor (96B stride) |
| 0x1410a1df0 | error response builder (Ready(Err) path) |
| 0x14091a6d0 | drop temp allocation |
| 0x140e30410 | Ok-variant encoder |
| 0x140efcaf0 | future drop check |
| 0x140efd8e0 | future drop exec |
| 0x141212fb0 | memcpy (inline Rust copy_nonoverlapping) |
| 0x140001360 | alloc (size, align) |
| 0x140001370 | dealloc (ptr, size, align) |

---

## 错误路径与哨兵值

| 值 | 含义 |
|---|---|
| `0x8000000000000025ULL` | `switch_provider_unavailable` — relay provider 无法完成切换 |
| `0x800000000000000CULL` | `sub_140871EA0` Ready(Err) 时写入 a1+8 的错误标记 |
| `BUG()` | 双原子递增后值 ≤ 0（refcount 溢出或 under-ref） |
| `"called Result::unwrap() on an Err value"` | `sub_14080C3C0` resolver 已消费检查 panic |
| `"resolver consumed"` | resolver 被重复 resolve |
| `"a Display implementation returned an error..."` | Ok-variant 序列化失败 |

---

## 与 switch_account_and_restart_codex 的关系

`switch_account_restart_codex_coroutine_win_sys_111 @ 0x14096a2d0`（同文件另一命令）：

- **相同**：relay provider vtable 路由逻辑完全相同（off_141899420 + stride 472/704 + variant A/B）
- **相同**：response serializer 共用 `sub_140225110`
- **相同**：IPC finalizer 共用 `sub_14080C3C0`
- **不同**：`switch_account_and_restart_codex` 有 `accountKey`(10) 字段，由 `remove_skill_parse_id_param_111@0x1402FED40` 解析
- **不同**：`confirm_pending_auto_switch_and_restart_codex` 零参数——使用的是之前 `set_auto_switch`/`configure_auto_switch` 写入的 pending 配置
- **不同**：coroutine state 偏移不同（本命令 outer=+3440，switch_account outer=+4688）
