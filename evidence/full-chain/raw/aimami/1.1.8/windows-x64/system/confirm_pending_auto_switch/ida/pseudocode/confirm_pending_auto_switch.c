// confirm_pending_auto_switch — AiMaMi 1.1.8, windows-x64
// owner_va=0x1403ebe20 (renamed confirm_pending_auto_switch_owner_sys), size=0x49f
// session <审计会话>, source_binary_sha256=f25d8129528b25ac7f69524fa07c78f961da189a7a8f2c758c288ec96bc68f10
// decompiled via 反编译器 HexRays MCP (win instance), depth1..depth5 real chain, see call-trees/confirm_pending_auto_switch.jsonl

// ==== depth1: owner (renamed confirm_pending_auto_switch_owner_sys) ====
__int64 __fastcall confirm_pending_auto_switch_owner_sys(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // r14
  __int64 v4; // r15
  __int128 v5; // rdi
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rsi
  _BYTE v11[360]; // [rsp+38h] [rbp-48h] BYREF
  _BYTE v12[360]; // [rsp+1A0h] [rbp+120h] BYREF
  _BYTE v13[512]; // [rsp+308h] [rbp+288h] BYREF
  __int64 v14; // [rsp+508h] [rbp+488h]
  int v15; // [rsp+510h] [rbp+490h] BYREF
  __int64 v16; // [rsp+518h] [rbp+498h]
  __int64 v17; // [rsp+520h] [rbp+4A0h]
  __int64 v18; // [rsp+528h] [rbp+4A8h]
  _BYTE v19[400]; // [rsp+6E8h] [rbp+668h] BYREF
  _BYTE v20[384]; // [rsp+878h] [rbp+7F8h] BYREF
  __int64 v21; // [rsp+9F8h] [rbp+978h]
  int v22; // [rsp+A00h] [rbp+980h]
  int v23; // [rsp+A04h] [rbp+984h]
  __int64 v24; // [rsp+A08h] [rbp+988h] BYREF  -- result-slot: discriminant checked (!=3 => complex path)
  __int128 v25; // [rsp+A10h] [rbp+990h]
  __int128 v26; // [rsp+A20h] [rbp+9A0h]
  __int128 v27; // [rsp+BE0h] [rbp+B60h] BYREF
  __int64 v28; // [rsp+BF0h] [rbp+B70h]
  __int128 v29; // [rsp+C00h] [rbp+B80h] BYREF
  __int64 v30; // [rsp+C10h] [rbp+B90h]
  _OWORD v31[2]; // [rsp+C18h] [rbp+B98h] BYREF
  __int64 v32; // [rsp+C38h] [rbp+BB8h]
  __int64 v33; // [rsp+C40h] [rbp+BC0h] BYREF
  __int128 v34; // [rsp+C48h] [rbp+BC8h] BYREF
  __int128 v35; // [rsp+C58h] [rbp+BD8h]
  __int128 *v36; // [rsp+C68h] [rbp+BE8h]
  __int64 v37; // [rsp+C70h] [rbp+BF0h]
  __int128 v38; // [rsp+C80h] [rbp+C00h] BYREF
  __int64 v39; // [rsp+C90h] [rbp+C10h]
  __int64 v40; // [rsp+C98h] [rbp+C18h]
  __int64 v41; // [rsp+CA0h] [rbp+C20h]
  char v42; // [rsp+CADh] [rbp+C2Dh]
  char v43; // [rsp+CAEh] [rbp+C2Eh]
  char v44; // [rsp+CAFh] [rbp+C2Fh]
  __int64 v45; // [rsp+CB0h] [rbp+C30h]

  v45 = -2;
  sub_1412762D0(v13, a1, 520);        // generic Rust monomorphized memcpy helper (reused across whole binary)
  sub_1412762D0(v20, a1 + 520, 400);  // idem
  v39 = *(_QWORD *)(a1 + 936);
  v38 = *(_OWORD *)(a1 + 920);
  v37 = 0;
  v33 = (__int64)aConfirmPending;     // "confirm_pending_auto_switch" @0x14133b457 (tracing span target/label, Confirmed)
  *(_QWORD *)&v34 = 27;
  *((_QWORD *)&v34 + 1) = aApp_2;     // "app" @0x14133b79d (tracing span field, Confirmed)
  *(_QWORD *)&v35 = 3;
  *((_QWORD *)&v35 + 1) = v13;
  v36 = &v38;
  v44 = 1;
  sub_140421360(&v24, &v33);          // depth2: tracing-instrumented call into the repository/async-task body (see below)
  if ( (_DWORD)v24 != 3 )             // v24==3 == fast-path (already-resolved value); else complex branch
  {
    sub_1412762D0(v19, &v24, 152);
    v37 = 0;
    v33 = (__int64)aConfirmPending;
    *(_QWORD *)&v34 = 27;
    *((_QWORD *)&v34 + 1) = aRepo;   // "repo" @0x14133b7c2 (tracing span field, Confirmed)
    *(_QWORD *)&v35 = 4;
    *((_QWORD *)&v35 + 1) = v13;
    v36 = &v38;
    v2 = sub_140419310((volatile void *)(v14 + 16)); // trylock-style refcount/guard check (Unknown exact semantics)
    if ( !v2 )
    {
      sub_14127A550(v31, &v33, (char *)&v34 + 8);    // depth2: Result/Ok-tag assembly (see below)
      if ( LOBYTE(v31[0]) != 6 )
      {
        v35 = v31[1];
        v34 = v31[0];
        sub_1412762D0(v11, a1 + 520, 360);
        v27 = *(_OWORD *)(a1 + 880);
        v28 = *(_QWORD *)(a1 + 896);
        v33 = 1;
        v43 = 0;
        sub_1407A7610((unsigned int)v11, v21, (unsigned int)&v33, (unsigned int)&v27, v22, v23); // TERMINAL: response_serialize (Confirmed, see below)
        v44 = 0;
        sub_1400453B0(v19);          // drop/cleanup glue
        goto LABEL_18;
      }
      v2 = *((_QWORD *)&v31[0] + 1);
    }
    v43 = 1;
    sub_1402868C0(&v15, v19, v2);     // error-path Result construction (poisoned-lock / Display-fallback, see below)
    sub_1412762D0(v19, a1 + 520, 400);
    if ( v15 != 2 )
    {
      sub_1412762D0(&v24, &v15, 472);
LABEL_16:
      v42 = 0;
      sub_1407B6C80(v19, &v24);      // error response serialize -> calls sub_1407A7610 terminal too (Confirmed, see below)
      goto LABEL_18;
    }
    // ...Vec/byte-buffer bookkeeping elided for brevity (see raw decompile in evidence.md refs)...
    goto LABEL_16;
  }
  v35 = v26;
  v34 = v25;
  sub_1412762D0(v12, a1 + 520, 360);
  v29 = *(_OWORD *)(a1 + 880);
  v30 = *(_QWORD *)(a1 + 896);
  v33 = 1;
  v44 = 0;
  sub_1407A7610((unsigned int)v12, v21, (unsigned int)&v33, (unsigned int)&v29, v22, v23); // TERMINAL: response_serialize fast-path
LABEL_18:
  // ...Vec<T> drop-glue loop over a1+920/936 elided (generic Drop, not command-specific)...
  return sub_140406280(v13);         // final Drop of local args buffer
}

// ==== depth3: sub_140421360 (tracing-instrument thin wrapper) ====
// unpacks a2+32 and forwards to sub_140870B80, then Arc-refcount decrement drop-glue (v9/v6/v5/v10/v11[0])
__m128i *__fastcall sub_140421360(__m128i *a1, __int64 a2)
{
  sub_140870B80(v4 /* local buf */, *(_QWORD *)(a2 + 32));  // depth4
  sub_1412762D0(a1, v8, 0x98u);
  // ... InterlockedDecrement64 drop-glue on v9,v6/v5,v10,v11[0] (Arc<T>::drop pattern) ...
  return a1;
}

// ==== depth4: sub_140870B80 (async-block/future constructor: Arc::clone of captured Repository/RelayManager-class resources) ====
__m128i *__fastcall sub_140870B80(__m128i *a1, __int64 a2)
{
  // InterlockedIncrement64 on a2+328, a2+136, a2+336, a2+312, a2+320, a2+344 (6 distinct Arc<T> strong-count bumps)
  // -> classic Rust `async move { ... }` block capture-by-Arc::clone codegen; BUG()/abort on any refcount<=0 (poisoned/dropped)
  sub_14108F780(&v25);       // depth5: clone helper #1 (see below)
  sub_140103590(v19, a2);    // clone helper #2 (byte-buffer clone, called twice at different a2 offsets)
  sub_140103590(v19, a2 + 176);
  sub_1412762D0(&v25, v19, 0x88u);
  // packs 6 cloned Arc<T> pointers + 1 byte flag into a1 (future struct layout)
  return a1;
}

// ==== depth5: sub_14108F780 (Vec<u8>/String clone: alloc+memcpy, terminated_reason=external_call) ====
unsigned __int64 *__fastcall sub_14108F780(unsigned __int64 *a1, __int64 a2)
{
  unsigned __int64 v3 = *(_QWORD *)(a2 + 16);   // length
  if ( v3 )
  {
    const void *v4 = *(const void **)(a2 + 8);  // src ptr
    nullsub_1(a1, a2);
    void *v5 = (void *)sub_140001360(v3, 1);    // Rust global allocator thunk (__rust_alloc-class) -- TERMINATED_REASON=external_call
    if ( !v5 ) sub_1412AD46B(1, v3);             // handle_alloc_error -> abort
    sub_1412762D0(v5, v4, v3);                   // memcpy clone
  }
  // packs (ptr,len,cap) into a1 -- classic Vec<u8>/String Clone::clone()
  return a1;
}

// ==== sibling depth2: sub_14127A550 (Ok-variant / Result-tag assembly, closure-trampoline based) ====
__int64 __fastcall sub_14127A550(__int64 a1, __int64 a2, __int64 a3)
{
  // builds a 2-entry vtable-style struct {ptr,fnptr,ptr,fnptr} referencing sub_1405906F0 (x2, same fn ptr both slots)
  // sub_14108F360(v6, &unk_14133EA0D, &v9)  -- generic "invoke boxed closure with vtable" trampoline (Confirmed pattern, not command-specific)
  // sub_141279770(v6) -- second-stage extraction
  // sub_14108F360(&v7, &unk_14133E158, &v9) -- second trampoline invocation
  *(_BYTE *)a1 = 3;              // discriminant 3 == the "already resolved / Ok fast-path" tag consumed by the owner's `v24 != 3` check
  // ... packs OWORD payload into a1+1 / a1+16 ...
  return sub_14105AC40(v10);     // drop of temporary closure box
}

// ==== sibling depth2: sub_1402868C0 (Err-path Result construction: poisoned-lock + Display-fallback + "mutation" transaction) ====
__int64 __fastcall sub_1402868C0(__int64 a1, __int64 a2, _BYTE *a3)
{
  // _InterlockedCompareExchange8(a3, 1, 0) -- resolver-consumed guard (same pattern as sub_1407A7610)
  // on poisoned-mutex-like branch: builds+asserts via sub_14109EE30(aPoisonedLockAn /* "poisoned lock: another task failed inside" @0x141322060 */, 41, ...)
  //   -> panics with "a Display implementation returned an error unexpectedly" (@0x14132c4c0) if Display::fmt itself errors (Rust std/anyhow boilerplate, not command-specific)
  // else: sub_140344B00(&v23, a3 + 8) -- probes a Result<T,E> at a3+8; branches on v23==2 (empty/None) vs 3 (Some) vs other
  //   "else" arm: sub_14035C480(&v23, v50, aMutation /* "mutation" @0x1413352dd */, 8) -- tags a DB/state "mutation" transaction result
  //   on v23==3: direct pass-through; else: sub_140048CF0/sub_140049230 Vec<T> drop-glue over a collection at v42-owned buffer
  *(_QWORD *)a1 = 2;   // discriminant 2 == Err-tag written on every branch of this function
  sub_1400453B0(v50);  // drop/cleanup glue (same helper as owner's success-path cleanup)
  return a1;
}

// ==== sibling depth2: sub_1407B6C80 (Err-path response serialize: Display-format then hand off to resolver) ====
volatile signed __int64 *__fastcall sub_1407B6C80(const __m128i *a1, __int64 a2)
{
  // if *(_DWORD*)a2==2 (already-string Err): pass through
  // else: sub_140036730(v16, v13) -- invokes the boxed error's Display::fmt trait object (Confirmed: "a Display implementation
  //   returned an error unexpectedly" @0x141358000 panic guard on fmt failure) -> sub_140E156C0 assembles the formatted String
  //   -> sub_1407A30E0(v15) finalizes/wraps the String
  return sub_1407A7610(v14, v4, (__int64)&v18, (__int128 *)&v3[22].m128i_u64[1], v10, v11); // depth3: same resolver terminal as success path
}

// ==== TERMINAL (both success fast-path and error path converge here): sub_1407A7610 ====
// Confirmed: this is the Tauri async-command "resolver" completion routine —
//   _InterlockedCompareExchange8(a2+16,1,0) "resolver consumed" guard (panic string "resolver consumed" @0x141358298)
//   defensive "called `Result::unwrap()` on an `Err` value" panic guard (@0x141358190, dead code unless internal invariant violated)
//   invokes a vtable-resolved response callback `v13 = *(a2+32+24); v13(...)` -- this is the actual JSON-serialize +
//     webview IPC-response dispatch call (response_serialize)
//   WakeByAddressSingle(a2+16) -- wakes any thread blocked on this resolver's futex/park primitive (Confirmed unchanged
//     mechanism vs 1.0.9/1.1.1 per THREAD-MODEL.md)
// TERMINATED_REASON = response_serialize
volatile signed __int64 *__fastcall sub_1407A7610(const __m128i *a1, __int64 a2, __int64 a3, __int128 *a4, int a5, int a6);
