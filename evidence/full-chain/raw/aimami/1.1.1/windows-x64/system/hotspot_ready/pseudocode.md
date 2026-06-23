# pseudocode.md — hotspot_ready (Windows x64 1.1.1)
# Gold-leaf session: <审计会话>
# Machine: <本地机器>
# SHA binary: d24e429ab16a9b683c1c23212555c7d1d59a3e2e6ee24a9f3a16acd7f8231610
# Owner VA: 0x140016720 | size: 847B | BBs: 32

---

## Relative to 1.0.9 baseline — what changed

1.0.9 `hotspot_ready@0x14026DEF0` used identical logic structure but different VA (VA drift confirmed).
No behavioral semantics change: discriminant 18=Ready, 3=not-ready, 38=in-flight all preserved.
Key structural difference: 1.1.1 hotspot state now co-located with full AppState blob (combined read), whereas 1.0.9 used a simpler separate hotspot config read. The `sub_14038E240` focus_main_window_dispatch is 56882B in 1.1.1 (Tauri event-pump baked in) vs smaller 1.0.9 equivalent.

---

## L0 — Owner: hotspot_ready_owner_sys_111 @ 0x140016720

```c
// IPC cmd="hotspot_ready" tag="app" argKeys=[] | caller=tauri_ipc_main_dispatcher_sys@0x14000d2a0
// size=847B BBs=32 cyclomatic=9 | synchronous | no async coroutine twin
// session <审计会话>
__int64 __fastcall hotspot_ready_owner_sys_111(__int64 a1)
{
  // a1 = Tauri IPC context / AppState snapshot struct (≥944B)
  //   +0..519  = combined hotspot state blob (520B)
  //   +520..919 = usage refresh interval data (400B)
  //   +880..895 = response envelope field (v22, 16B)
  //   +896..903 = response envelope field (v23, 8B)
  //   +920..935 = observer list {count, head_ptr} (16B)
  //   +936..943 = observer buffer ptr (v33, 8B)

  int v19; // usage_refresh discriminant (BYREF → passed to get_usage_refresh_interval_read_sys_111)

  // Step 1: copy state blobs from AppState snapshot
  sub_141212FB0(v13, a1,       520); // copy combined state blob (520B) → v13
  sub_141212FB0(v15, a1 + 520, 400); // copy usage refresh interval data (400B) → v15
  v33 = *(_QWORD *)(a1 + 936);       // observer buffer ptr
  v32 = *(_OWORD *)(a1 + 920);       // observer list {count, head_ptr}

  // Step 2: build IPC key struct for usage_refresh interval read
  v27 = (int64)aHotspotReady;  // "hotspot_ready" @ 0x1412ac4a3 (13B)
  v28.lo = 13;
  v28.hi = aApp;               // "app" @ 0x1412ac6d5 (3B)
  v29.lo = 3;
  v29.hi = v13;                // combined state blob ptr
  v30    = &v32;               // observer list ptr

  // Step 3: read usage_refresh interval discriminant
  get_usage_refresh_interval_read_sys_111(&v19, &v27);
  // v19 == 3  → error/unset: skip hotspot check, go direct to IPC respond
  // v19 != 3  → proceed to hotspot state check

  if (v19 != 3) {
    // Step 4: full hotspot state check
    sub_141212FB0(v14, &v19, 152); // copy 152B usage-refresh result
    hotspot_combined_state_check_sys_111(v24, v14);
    // v24[0] = combined state discriminant result
    // v24[1] = focus context ptr

    sub_141212FB0(&v19, a1 + 520, 400); // refresh usage interval copy

    // Step 5: evaluate combined state result
    if (__OFSUB__(-v24[0], 1)) {
      // v24[0] causes signed overflow → error case
      LOBYTE(v27) = 6; // error tag
      v36 = 0;
      sub_140832560(&v19, &v27); // IPC error response
      goto LABEL_14;
    }

    v4 = v24[1]; // focus context ptr
    v5 = v25;    // payload size
    if (v25 < 0) { v6 = 0; goto LABEL_7; }
    if (v25) {
      nullsub_1(v2);
      v6 = 1;
      v7 = sub_140001360(v5, 1); // alloc payload buffer
      if (!v7) {
        LABEL_7:
        v34 = v4; v35 = v3;
        sub_14124BCCB(v6, v5); // dealloc on error
      }
      v8 = v7;
      sub_141212FB0(v7, v4, v5); // copy focus payload
      if (!v3) goto LABEL_12;
    } else {
      v8 = 1;
      if (!v24[0]) goto LABEL_12;
    }
    sub_140001370(v4, v3, 1); // dealloc old payload

    LABEL_12:
    // Build response: tag=3, payload ptr=v8, size=v5
    LOBYTE(v27) = 3;
    v28.lo = v5;   v28.hi = v8;
    v29.lo = v5;
    // fall through to IPC respond path

    LABEL_13:
    v36 = 0;
    sub_140832560(&v19, &v27); // IPC resolve (error branch or focus-dispatch branch)

  } else {
    // v19 == 3: usage_refresh unset — use direct focus dispatch path
    v29 = v21; v28 = v20;
    sub_141212FB0(v12, a1 + 520, 360); // copy 360B slice
    v22 = *(_OWORD *)(a1 + 880);       // response envelope
    v23 = *(_QWORD *)(a1 + 896);
    v27 = 1;  // respond tag = Ready
    v37 = 0;
    // Step 4b: direct window notch focus dispatch
    sub_14080C3C0(v12, v16, &v27, &v22, v17, v18);
    // → has_notch_invoke_resolver_respond: sends JSON response to frontend
  }

  LABEL_14:
  // Step 6: drop observer list (96B stride per entry)
  if (!__OFSUB__(0, (_QWORD)v32)) {
    v9 = v32.hi; // head ptr
    v34 = v33;   // buffer ptr
    v35 = 0;     // counter
    while (v34 != v35) {
      ++v35;
      v10 = v9 + 96;
      sub_14033AB50(); // drop one 96B observer entry
      v9 = v10;
    }
    if ((_QWORD)v32)
      sub_140001370(v32.hi, 96 * v32.lo, 8); // dealloc observer buffer
  }

  return sub_140042650(v13); // drop combined state blob; return result
}
```

---

## L1 — hotspot_combined_state_check_sys_111 @ 0x14060C720

```c
// size=273B | reads AppState hotspot key(7B)@0x1412e0f58 | discriminant check: 18=Ready
// *a1=0x8000000000000000 sentinel if not-ready
_QWORD *__fastcall hotspot_combined_state_check_sys_111(_QWORD *a1, __int64 a2)
{
  // a2 = 152B usage-refresh result blob from owner

  // Step 1: read 'hotspot' key from AppState blob (a2)
  sub_140076AD0(v4, a2, aHotspot_1, 7); // reads 896B hotspot config; key="hotspot"@0x1412e0f58
  if (v4[0] == 3) {
    // read error → return sentinel
    *a1 = 0x8000000000000000uLL;
    sub_140041870(a2); // cleanup a2
    return a1;
  }

  // Step 2: copy 896B hotspot state blob
  sub_141212FB0(v5, v4, 896); // v5 = hotspot state blob (896B)

  // Step 3: discriminant check
  LODWORD(v9) = 40;   // discriminant arg size
  LOBYTE(v8) = 31;    // discriminant arg tag
  hotspot_ready_state_discriminant_check_sys_111(&v12, v5, &v8);
  // v12 == 18 → Ready
  // v12 != 18 → not-ready

  if ((int32)v12 != 18) {
    // not-ready: set sentinel and call cleanup dispatch
    v10 = v13; v9 = v12;
    v8 = 0x8000000000000000uLL;
    sub_14061DD90(&v8); // cleanup dispatch
  }

  sub_14061EF90(v5);   // drop hotspot state blob
  sub_140041D40(v7);   // drop intermediate

  *a1 = 0x8000000000000000uLL; // sentinel (consumed by owner v24[0] overflow check)
  sub_140041870(a2);
  return a1;
}
```

---

## L2 — hotspot_ready_state_discriminant_check_sys_111 @ 0x14038D560

```c
// size=304B BBs=19 | window_id match check | *a1=18(Ready) if match; else alt-dispatch
// renamed: level-B, session <审计会话>
__int64 *__fastcall hotspot_ready_state_discriminant_check_sys_111(
    __int64 *a1, __int64 a2, __int64 a3)
{
  // a2 = 896B hotspot state blob (contains window_id at a2+32)

  // Step 1: get current TLS window Arc
  v14[0] = (volatile signed __int64 *)sub_14108D200();
  // v14[0] = Arc ptr; v14[0]+2 (offset +16) = window_id
  v5 = *((_QWORD *)v14[0] + 2); // current window_id

  // Step 2: compare with expected window_id from hotspot state
  v6 = *(_QWORD *)(a2 + 32);    // expected window_id from hotspot config
  v7 = _InterlockedDecrement64(v14[0]) == 0; // Arc refcount decrement

  if (v5 == v6) {
    // === MATCH PATH: window is ready ===
    if (v7) sub_141088150(v14); // Arc drop if refcount hit 0

    sub_141212FB0(v14, v15, 176); // copy 176B window context

    // Increment Arc refcounts for response context
    v9 = _InterlockedIncrement64(*(volatile signed __int64 **)(a2 + 24));
    v10 = _InterlockedIncrement64(*(volatile signed __int64 **)(a2 + 80));
    // Both must not overflow (BUG() if they do)

    // Dispatch: focus the main window
    sub_14038E240(a2 + 40, v14);
    // → focus_main_window_dispatch (Tauri event-pump, 56882B)
    // → terminated_reason: platform_primitive (Tauri event loop OS primitives)

    *a1 = 18; // discriminant = Ready
  } else {
    // === NO-MATCH PATH: window not ready, try alternate dispatch ===
    if (v7) sub_141088150(v14); // Arc drop

    sub_141212FB0(v14, v15, 176); // copy window context

    hotspot_alternate_focus_dispatch_sys_111(v13, a2, v14);
    // → PostMessageW(HWND, msg, 0, 0) + ring-buffer channel send
    // → v13[0] = 38 if successfully enqueued; else other discriminant

    v11 = 18;
    if (v13[0] != 38) {
      // not in-flight: cleanup and return not-ready
      sub_141212FB0(v14, v13, 176);
      hotspot_cleanup_non38_drop_sys_111(v14); // tagged-union drop glue
      v11 = 3; // not-ready discriminant
    }
    *a1 = v11; // 18 or 3
  }
  return a1;
}
```

---

## L3a — hotspot_alternate_focus_dispatch_sys_111 @ 0x1403C0BD0

```c
// size=2482B | PostMessageW(HWND,msg,0,0) + lock-free ring-buffer channel send
// 184B slot stride, 176B payload; *a1=38 on success
// renamed from sub_1403C0BD0 in gold-leaf session <审计会话>
_BYTE *__fastcall hotspot_alternate_focus_dispatch_sys_111(_BYTE *a1, __int64 *a2, __int64 a3)
{
  // a2[2] = HWND of hotspot window
  HWND v5 = (HWND)a2[2];
  v6 = off_141899708; // message code table

  // Step 1: PostMessageW to hotspot window
  if (!PostMessageW(v5, v6[3], 0, 0)) {
    // PostMessageW failed: read error via sub_140F31710()
    // if error non-null: sub_140DED7A0(&v70) error format
    // then copy 176B result and return (failure)
    sub_141212FB0(a1, v80, 176);
    return a1;
  }

  // Step 2: ring-buffer channel send (lock-free MPSC)
  // channel at a2[1] (if a2[0] != 0: alternate capacity path via sub_14052A300)
  v7 = a2[0];
  v8 = a2[1];

  if (!v7) {
    // primary ring-buffer send path (lock-free CAS loop)
    // slot_stride = 184B; payload = 176B
    // CAS spin on v8+128 (head index) with _mm_pause + SwitchToThread backpressure
    // on success:
    //   writes payload byte  → v58+0  (discriminant)
    //   copies 175B payload  → v58+1  (body)
    //   writes sequence tag  → v58+176
    //   calls sub_14037E980  → WakeByAddressSingle on waker
    // timeout path (>10 spins): sub_141077C40 elapsed check
    //   if timed out: sub_14037FC10 channel_send_enqueue fallback
  } else {
    // v7 != 0: MPSC fallback send via sub_14052A300
    sub_14052A300(&v63, v8, &v70);
    if ((int32)v63 != 2) goto LABEL_100; // not success
  }

  // LABEL_99: success
  // v63 = 2; *a1 = 38; return
  *a1 = 38;
  return a1;
}

// Key sub-callees:
// sub_14037E980 @ 0x14037E980: ring_buffer_notify_and_wake
//   → WakeByAddressSingle (Win32 OS primitive, terminates)
//   → sub_1403673F0: observer_waker_drain (Arc CAS drop loop)
// sub_14037FC10 @ 0x14037FC10: channel_send_enqueue
//   → sub_14037ED80: ring_buffer_slot_alloc (CAS head index)
//   → sub_14037E710: ring_buffer_commit_notify → WakeByAddressSingle (terminates)
```

---

## L3b — hotspot_cleanup_non38_drop_sys_111 @ 0x1403EFD40

```c
// size=693B | Rust tagged-union drop glue
// outer switch on disc-28 (9 cases), inner switch on disc-3 (26 sub-cases)
// only real side-effect: sub_140001370 (dealloc/free)
__int64 __fastcall hotspot_cleanup_non38_drop_sys_111(__int64 a1, ...)
{
  result = 4;
  if (*(_BYTE *)a1 >= 0x1Cu) result = (uint8)(*(_BYTE *)a1 - 28);
  switch ((char)result) {
    case 0: // dtor vtable dispatch: call vtable[0](ptr), then free(ptr, size, align)
    case 3: // inner sub-discriminant switch (26 cases):
            //   call sub_1405AB570/sub_1405ABAB0/sub_1405AF320 etc. (Arc drop helpers)
            //   or free via sub_140001370
    case 4: return sub_1403EE7D0(...); // recursive tagged-union dispatch
    case 5: return sub_1405AB570(a1+8); // if disc <= 2
    case 6/7: vtable dispatch + free
    case 8: vtable + sub_1405AFA50 cleanup
    default: if byte(a1+8)==5: free(a1+24, a1+16, 1)
             else: free(a1+88, a1+80, 1)
  }
  // All paths terminate at sub_140001370 (dealloc) — no IO side effects
}
```

---

## L4/L5 — Depth-4 and Depth-5 key leaves

### sub_14037E980 @ 0x14037E980 — ring_buffer_notify_and_wake

Acquires lock-free CAS slot in ring buffer. Writes 176B payload to ring slot at 184B stride.
Wakes Tokio/async waiters via `WakeByAddressSingle` (Win32 OS primitive → **terminated_reason: platform_primitive**).
Also drains pending Arc-observer waker list via `sub_1403673F0` (CAS-clears Arc slots, sets waker byte, calls WakeByAddressSingle per entry).

### sub_14037FC10 @ 0x14037FC10 — channel_send_enqueue

MPSC channel send:
- `sub_14037ED80` (depth-5): allocates ring-buffer send slot via CAS on head index (v8+128); exponential `_mm_pause` + `SwitchToThread` backpressure; slot stride=184B; writes sequenced tag (v8+176). **terminated_reason: persistence_commit** (slot write = commit).
- `sub_14037E710` (depth-5): commits ring slot via `_InterlockedOr64` on slot[23]+1 (ready bit), then `WakeByAddressSingle`. **terminated_reason: platform_primitive**.

### PostMessageW @ 0x14124DBA0 — Win32 window message

Posts message to HWND hotspot window (msg=off_141899708[3], wParam=0, lParam=0).
**terminated_reason: external_call** — Win32 API boundary.
