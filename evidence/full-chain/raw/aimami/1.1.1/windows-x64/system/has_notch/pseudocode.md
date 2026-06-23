# pseudocode.md — has_notch · windows-x64 · AiMaMi 1.1.1
<!-- session=<审计会话> | machine=<本地机器> -->
<!-- produced_at: 2026-06-18T00:00:00+08:00 | producer: claude-sonnet-4-6 -->
<!-- binary_sha256: d24e429ab16a9b683c1c23212555c7d1d59a3e2e6ee24a9f3a16acd7f8231610 -->
<!-- IDB: <本地路径>| imagebase: 0x140000000 -->

---

## Owner: has_notch_owner_sys @ 0x140023000

**Role**: Tauri IPC command handler for `"has_notch"`. Synchronous `#[command]`, no `async`.
**Size**: 863 bytes | **Basic blocks**: 32 | **Cyclomatic complexity**: 9
**Business logic**: Returns fixed `bool true` (v28=1). No system API. No hardware notch check.

```c
// [<审计会话> | 2026-06-17]
// has_notch_owner_sys @ 0x140023000 (AiMaMi 1.1.1 win64.exe, PE x86_64 stripped)
// SESSION: <审计会话> | MACHINE: <本地机器>
// SHA256_BINARY: d24e429ab16a9b683c1c23212555c7d1d59a3e2e6ee24a9f3a16acd7f8231610
// IDB: <本地路径>
//
// BUSINESS LOGIC: Windows impl returns fixed bool true (v28=1).
// No hardware notch check. No system API calls. argKeys=[].
// Platform diff: macOS checks hardware display geometry via NSScreen;
//                Windows returns constant true.

__int64 __fastcall has_notch_owner_sys(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // r14
  __int64 v4; // r15
  __int64 v5; // rsi
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rdi
  __int64 v9; // rcx
  __int64 v10; // rsi
  _BYTE v12[360]; // [rsp+38h] [rbp-48h] BYREF
  _BYTE v13[520]; // [rsp+1A0h] [rbp+120h] BYREF
  _BYTE v14[152]; // [rsp+3A8h] [rbp+328h] BYREF
  _BYTE v15[384]; // [rsp+440h] [rbp+3C0h] BYREF
  __int64 v16; // [rsp+5C0h] [rbp+540h]
  int v17; // [rsp+5C8h] [rbp+548h]
  int v18; // [rsp+5CCh] [rbp+54Ch]
  int v19; // [rsp+5D0h] [rbp+550h] BYREF — param parse result (3=Ok)
  __int128 v20; // [rsp+5D8h] [rbp+558h]
  __int128 v21; // [rsp+5E8h] [rbp+568h]
  __int128 v22; // [rsp+760h] [rbp+6E0h] BYREF
  __int64 v23; // [rsp+770h] [rbp+6F0h]
  __int64 v24; // [rsp+780h] [rbp+700h] BYREF
  __int64 v25; // [rsp+788h] [rbp+708h]
  __int64 v26; // [rsp+790h] [rbp+710h]
  __int64 v27; // [rsp+798h] [rbp+718h]
  __int64 v28; // [rsp+7A0h] [rbp+720h] BYREF — return value slot
  __int128 v29; // [rsp+7A8h] [rbp+728h]
  __int128 v30; // [rsp+7B8h] [rbp+738h]
  __int128 *v31; // [rsp+7C8h] [rbp+748h]
  __int64 v32; // [rsp+7D0h] [rbp+750h]
  __int128 v33; // [rsp+7E0h] [rbp+760h] BYREF
  __int64 v34; // [rsp+7F0h] [rbp+770h]
  __int64 v35; // [rsp+7F8h] [rbp+778h]
  __int64 v36; // [rsp+800h] [rbp+780h]
  char v37; // [rsp+80Eh] [rbp+78Eh]
  char v38; // [rsp+80Fh] [rbp+78Fh]
  __int64 v39; // [rsp+810h] [rbp+790h]

  v39 = -2; /*0x140023017*/

  // Step 1: Copy invoke context structures onto stack
  sub_141212FB0(v13, a1, 520);        // copy InvokeMessage (520 bytes) /*0x140023038*/
  sub_141212FB0(v15, a1 + 520, 400);  // copy resolver context (400 bytes) /*0x140023054*/

  // Step 2: Save pending listener array ref for cleanup
  v34 = *(_QWORD *)(a1 + 936);       /*0x140023060*/
  v33 = *(_OWORD *)(a1 + 920);       /*0x14002306e*/
  v32 = 0;                            /*0x140023075*/

  // Step 3: Build param descriptor (has_notch: cmd="has_notch", argKeys=[])
  v28 = (__int64)aHasNotch;  // 0x1412ac463 = "has_notch" string ptr /*0x140023087*/
  *(_QWORD *)&v29 = 9;       // command name length = 9                 /*0x14002308e*/
  *((_QWORD *)&v29 + 1) = aApp;  // context = "app"                   /*0x1400230a0*/
  *(_QWORD *)&v30 = 3;       // param_count = 3 (Tauri resolver slots) /*0x1400230a7*/
  *((_QWORD *)&v30 + 1) = v13;   // invoke message ptr                 /*0x1400230b2*/
  v31 = &v33;                     /*0x1400230c0*/
  v38 = 1;                        /*0x1400230c7*/

  // Step 4: Tauri IPC param resolver (argKeys=[] — empty param bundle)
  sub_140089A50(&v19, &v28);  // param resolver; sets v19=3 on Ok /*0x1400230dc*/
  if ( v19 != 3 )              // param parse failed (not expected for argKeys=[])
  {
    // ERROR PATH (param parse failure only — not reached on normal has_notch invocation)
    sub_141212FB0(v14, &v19, 152);              /*0x14002319c*/
    v38 = 1;                                    /*0x1400231a1*/
    sub_14060E160(&v24, v14);                   /*0x1400231b2*/  // error encoder
    sub_141212FB0(&v19, a1 + 520, 400);         /*0x1400231c8*/
    v3 = v24;                                   /*0x1400231cd*/
    if ( __OFSUB__(-v24, 1) )
    {
      BYTE1(v28) = v25;                         /*0x1400231e3*/
      LOBYTE(v28) = 6;                          /*0x1400231e9*/
LABEL_13:
      v37 = 0;                                  /*0x14002328b*/
      sub_14082F2D0(&v19, &v28);  // error response serializer /*0x1400232a0*/
      goto LABEL_14;
    }
    v4 = v25;                                   /*0x1400231f5*/
    v5 = v26;                                   /*0x1400231fc*/
    if ( v26 < 0 )
    {
      v6 = 0;
      goto LABEL_7;
    }
    if ( v26 )
    {
      nullsub_1(v2);                            /*0x14002322c*/
      v6 = 1;
      v7 = sub_140001360(v5, 1);  // alloc error buffer
      if ( !v7 )
      {
LABEL_7:
        v35 = v4;
        v36 = v3;
        sub_14124BCCB(v6, v5);  // handle_alloc_error (OOM, terminates) /*0x14002321e*/
      }
      v8 = v7;
      sub_141212FB0(v7, v4, v5);               /*0x140023254*/
      if ( !v3 )
        goto LABEL_12;
    }
    else
    {
      v8 = 1;
      if ( !v24 )
        goto LABEL_12;
    }
    sub_140001370(v4, v3, 1);                  /*0x14002326a*/  // free error data
LABEL_12:
    LOBYTE(v28) = 3;                           /*0x14002326f*/
    *(_QWORD *)&v29 = v5;                      /*0x140023276*/
    *((_QWORD *)&v29 + 1) = v8;               /*0x14002327d*/
    *(_QWORD *)&v30 = v5;                      /*0x140023284*/
    goto LABEL_13;
  }

  // HAPPY PATH (normal execution)
  v30 = v21;                                   /*0x1400230fd*/
  v29 = v20;                                   /*0x140023104*/
  sub_141212FB0(v12, a1 + 520, 360);           /*0x14002311b*/
  v22 = *(_OWORD *)(a1 + 880);                 /*0x14002312e*/
  v23 = *(_QWORD *)(a1 + 896);                 /*0x14002313c*/

  // FIXED RETURN VALUE: v28 = 1 = bool true (Windows has_notch implementation)
  v28 = 1;  // [has_notch] bool true constant — no hardware check /*0x14002314f*/
  v38 = 0;                                     /*0x14002315a*/

  // Dispatch Ok(true) response via InvokeResolver
  sub_14080C3C0(                               /*0x14002317a*/
    (unsigned int)v12,    // resolver frame
    v16,                  // resolver state
    (unsigned int)&v28,   // payload_ptr -> &true
    (unsigned int)&v22,   // result oword
    v17,                  // err_a
    v18                   // err_b
  );

LABEL_14:
  // Cleanup: release Arc refs to pending IPC listeners
  if ( !__OFSUB__(0, (_QWORD)v33) )
  {
    v9 = *((_QWORD *)&v33 + 1);
    v35 = v34;
    v36 = 0;
    v27 = *((_QWORD *)&v33 + 1);
    while ( v35 != v36 )   // iterate pending listener array
    {
      ++v36;
      v10 = v9 + 96;
      has_notch_arc_listener_drop_loop();  // Arc<IpcListener> drop /*0x1400232fe*/
      v9 = v10;
    }
    if ( (_QWORD)v33 )
      sub_140001370(*((_QWORD *)&v33 + 1), 96 * v33, 8);  // free listener array
  }

  return sub_140042650(v13);  // InvokeMessage Arc drop
}
```

---

## Depth-1 Callee: has_notch_invoke_resolver_respond @ 0x14080C3C0

**Role**: InvokeResolver::respond — finalizes IPC call and sends response to frontend.
**Terminated by**: `WakeByAddressSingle` (Windows kernel API) @ d2.

```c
// [<审计会话>]
// InvokeResolver::respond — sends Ok(true) to frontend webview
// Confirmed depth-2 terminal: WakeByAddressSingle (Windows synch.h API)

volatile signed __int64 *__fastcall has_notch_invoke_resolver_respond(
    __int64 a1,       // resolver frame (stack copy of resolver context)
    __int64 a2,       // resolver_state (InvokeResolver Arc inner)
    __int64 a3,       // payload_ptr -> bool true (v28=1 from owner)
    __int128 *a4,     // result oword
    int a5, int a6    // err_a, err_b
) {
  // ... [local vars omitted — 360-byte v22 frame + control vars]

  // Step 1: Resolve-once lock — prevents double-response (CAS byte at a2+16)
  _InterlockedCompareExchange8((volatile signed __int8 *)(a2 + 16), 1, 0);
  // If already set → panic path sub_14124BFE0("called `Result::unwrap()` on an `Err` value")

  // Step 2: Consume resolver — take ownership of consumer vtable (a2+24)
  v10 = *(_QWORD *)(a2 + 24);  // consumer fat-ptr (InvokeResponder trait object)
  v11 = *(_QWORD *)(a2 + 32);  // vtable ptr
  *(_QWORD *)(a2 + 24) = 0;    // null out — consume (prevents double dispatch)
  // If v10 == NULL → panic: "resolver consumed"

  // Step 3: Copy payload into local frame
  sub_141212FB0(v22, a1, 360);  // copy resolver state
  v23 = *a4;                    // result oword (Ok payload: bool true)
  v20[0] = *(_OWORD *)a3;       // copy payload (bool true = 1)

  // Step 4: Dispatch via vtable — call consumer at vtable+24
  v13 = *(void(*)())(v11 + 24); // vtable fn (WebviewIpcResponder or similar)
  v13(v10, v22, &v23, v20, a5, a6);  // delivers response to frontend webview

  // Step 5: Signal completion
  if (v18 == 2)
    WakeByAddressSingle((PVOID)(a2 + 16));  // wake waiting thread (TERMINAL)

  // Step 6: Arc refcount decrement
  if (!_InterlockedDecrement64(v33))
    return sub_140E208A0(&v33);  // Arc inner drop (cleanup terminal)

  return v33;
}
```

**Key depth-2 terminals from this function:**
- `WakeByAddressSingle` @ 0x14124A5D0 — Windows kernel API terminal
- `sub_14124B1D0` @ 0x14124B1D0 — resolve-once guard (infrastructure terminal)
- `sub_14124BFE0` @ 0x14124BFE0 — panic: "called Result::unwrap() on an Err value" (panic terminal)
- `sub_14124BF80` @ 0x14124BF80 — panic: "resolver consumed" (panic terminal)
- `sub_140E208A0` @ 0x140E208A0 — Arc inner drop → sub_140001370 (free) (cleanup terminal d3)

---

## Depth-1 Callee: has_notch_error_response_serializer @ 0x14082F2D0

**Role**: Error response path — only reached when param parse fails (v19 != 3). Not invoked
on normal has_notch call (argKeys=[], parse always succeeds).

```c
// Error path only — not reached on has_notch normal invocation (argKeys=[])
// Serializes Ok/Err enum tag to ASCII then calls InvokeResolver::respond

volatile signed __int64 *__fastcall has_notch_error_response_serializer(
    __int64 a1,       // resolver context
    __int128 *a2      // error payload (byte0=6 means Ok, else Err)
) {
  sub_141212FB0(v15, a1, 360);   // copy resolver state

  if (*(_BYTE *)a2 == 6)   // discriminant 6 = Ok variant
  {
    v8 = sub_140001360(128, 1);  // alloc 128-byte buffer
    if (*((_BYTE *)a2 + 1))      // Ok(true) → "true" (4 bytes)
    {
      *(_DWORD *)v8 = 1702195828; // 0x65757274 = "true" in little-endian
      v9 = 4;
    }
    else                         // Ok(false) → "false" (5 bytes)
    {
      *(_DWORD *)v8 = 1936482662; // 0x736c6166 = "fals"
      *(_BYTE *)(v8 + 4) = 101;   // 'e'
      v9 = 5;
    }
    // ... build response envelope with serialized bool string
  }
  else
  {
    // Err variant: pass through error payload directly
    v18 = a2[1];
    v17 = *a2;
    v11 = 1;  // Err discriminant
  }

  // Dispatch via same InvokeResolver::respond path
  return has_notch_invoke_resolver_respond(v15, v5, &v16, a1 + 360, v12, v13);
}
```

---

## Depth-1 Callee: has_notch_arc_listener_drop_loop @ 0x14033AB50

**Role**: Arc IPC listener drop — cleanup path only (LABEL_14 loop in owner).
**Call chain through d5:** `0x14033AB50` → `0x140F36C00` → `0x140F35A20` → `0x140F35430`
→ `0x140F6ED80` (vtable drop, d5) + `0x140F35770` (dealloc, d5) → `sub_1405A4A90` (allocator free, d6 = **allocation_terminal**).

```c
// Arc<IpcListener> drop — iterates via vtable, then frees allocation
// d5 terminal: allocation free via sub_1405A4A90 (allocator)
void has_notch_arc_listener_drop_loop() {
  sub_140F36C00(...);   // Arc listener drop inner (d2)
    -> sub_140F35A20()  // drop glue for listener type (d3)
      -> sub_140F35430()  // Arc<Listener> inner drop (d4)
        -> sub_140F6ED80()  // listener vtable drop (d5)
          -> sub_1405A4A90()  // allocator free (d6 = allocation_terminal)
        -> sub_140F35770()  // dealloc (d5)
          -> sub_140001370()  // sub_140F35540 → sub_140001370 (free)
}
```

---

## Call Tree Summary

```
has_notch_owner_sys (d0)
├── sub_141212FB0 (d1) [memcpy_terminal — 3 calls, stack frame copies]
├── sub_140089A50 (d1) [param_resolver_terminal — argKeys=[], v19=3 always]
├── v28=1 (d1) [impl_body_confirmed — fixed bool true, no callee]
├── has_notch_invoke_resolver_respond (d1) ← HAPPY PATH TERMINAL CHAIN
│   ├── WakeByAddressSingle (d2) [windows_api_terminal]
│   ├── sub_14124B1D0 (d2) [resolve_once_guard — infrastructure_terminal]
│   ├── sub_14124BFE0 (d2) [panic_terminal — "Result::unwrap() on Err"]
│   ├── sub_14124BF80 (d2) [panic_terminal — "resolver consumed"]
│   ├── sub_14124A510 (d2) [spin_wait — infrastructure_terminal, callees=[]]
│   └── sub_140E208A0 (d2) → sub_140001370 (d3) [free — alloc_terminal]
├── has_notch_error_response_serializer (d1) ← ERROR PATH (not reached normally)
│   ├── sub_140001360 (d2) [rust_alloc — alloc_terminal]
│   ├── sub_14124BCCB (d2) [handle_alloc_error — panic_terminal]
│   └── has_notch_invoke_resolver_respond (d2) [convergent with happy path]
├── sub_14060E160 (d1) [error_encoder — error path only]
│   └── [12 infrastructure callees, all alloc/dealloc/drop — alloc_terminal d2]
├── has_notch_arc_listener_drop_loop (d1) ← CLEANUP PATH
│   └── sub_140F36C00 (d2)
│       └── sub_140F35A20 (d3)
│           └── sub_140F35430 (d4)
│               ├── sub_140F6ED80 (d5)
│               │   └── sub_1405A4A90 (d6) [allocation_terminal]
│               └── sub_140F35770 (d5)
│                   └── sub_140001370 (d6) [free — alloc_terminal]
└── sub_140042650 (d1) [InvokeMessage Arc drop — cleanup_terminal]
    ├── sub_140041D40 (d2) → [6 dealloc callees — alloc_terminal d3]
    ├── sub_140E219F0 (d2) → sub_140083520 (d3) → sub_140001370 (d4) [alloc_terminal]
    ├── sub_140001370 (d2) [free — alloc_terminal]
    └── sub_140042350 (d2) → sub_140337D20 (d3) [recursive drop glue]
```

**Max depth**: 6 (has_notch_arc_listener_drop_loop chain)
**All leaf nodes terminated** with: windows_api_terminal | panic_terminal | alloc_terminal | impl_body_confirmed | param_resolver_terminal | memcpy_terminal | infrastructure_terminal
