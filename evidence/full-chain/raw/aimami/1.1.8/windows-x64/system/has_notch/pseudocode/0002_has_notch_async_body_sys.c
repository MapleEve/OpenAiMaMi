// aimami 1.1.8 windows-x64 -- has_notch command-specific async body (span-enabled path only caller)
// addr=0x140848a50 (renamed has_notch_async_body_sys), size=916B, basic_blocks=24, cyclomatic_complexity=2
// caller: has_notch_owner_sys@0x1403eca10 ONLY (1 caller -- this function IS command-specific, unlike
//         its own callees below which are shared runtime plumbing used by dozens of other commands)
// callees: nullsub_1, sub_140001360/sub_1412AD451(alloc+oom-abort), sub_1412762D0(memcpy),
//          tokio_coop_budget_check_sys@0x14007d500, blocking_channel_park_wait_sys@0x14049f2a0,
//          sub_141085E00/sub_1412AD780(Display::fmt error-message formatting, cold path),
//          sub_1404F6A50(drop boxed state), sub_1400453B0(drop original a2 span-ctx)
// off_14131D030 = Waker/RawWakerVTable-shaped vtable (size marker 0x1c/28) constructed inline for the poll call.
//
// NOTE (fake-wall exclusion, red line 13): this function's OWN control flow (cc=2) is fully decompiled with
// no truncation, no basic_blocks bail, no drop_in_place/shim stop. Its 2 real callees that matter
// (tokio_coop_budget_check_sys, blocking_channel_park_wait_sys) were independently confirmed to be SHARED
// library-internal runtime helpers (49 and 19 distinct callers respectively across the whole binary -- see
// call-trees/has_notch.jsonl "shared_caller_counts"), not has_notch-specific business logic mis-hidden behind
// a wrapper. No Win32 monitor/display/geometry API (GetSystemMetrics/EnumDisplayMonitors/DXGI/registry) appears
// anywhere in this function or its full 5-deep call-tree; the only Win32 API reached is WakeByAddressSingle,
// which is a generic futex-style thread-parking primitive (std::sync internals), not notch-detection logic.

__int64 __fastcall has_notch_async_body_sys(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rdi
  _QWORD *v6; // rax
  __int64 v7; // r8
  char v8; // al          -- channel outcome discriminant: 2=fallback/edge, else 0/1=delivered bool payload
  __int64 v10; // [rsp+80h] [rbp+0h] BYREF
  char v11; // [rsp+97h] [rbp+17h] BYREF
  __int128 v12; // [rsp+98h] [rbp+18h] BYREF          -- Result<bool,Error> out-param staging (a1)
  __int64 v13; // [rsp+A8h] [rbp+28h]
  __int64 v14; // [rsp+B0h] [rbp+30h]                 -- saved a2 (span-ctx), dropped at end via sub_1400453B0
  _QWORD v15[2]; // [rsp+B8h] [rbp+38h] BYREF          -- [tag=1, boxed_state_ptr] passed into channel-wait
  __int128 v16; // [rsp+C8h] [rbp+48h] BYREF
  __int64 v17; // [rsp+D8h] [rbp+58h]
  __int128 v18; // [rsp+E0h] [rbp+60h]
  __int64 v19; // [rsp+F0h] [rbp+70h]
  _BYTE v20[24]; // [rsp+100h] [rbp+80h] BYREF          -- zeroed 512B state (spans further locals), reused later as Waker/Context
  __int64 v21; // [rsp+118h] [rbp+98h]
  __int128 v22; // [rsp+180h] [rbp+100h]
  __int16 v23; // [rsp+200h] [rbp+180h]
  __int64 v24; // [rsp+208h] [rbp+188h]
  __int64 v25; // [rsp+210h] [rbp+190h]
  __int128 v26; // [rsp+218h] [rbp+198h]
  __int64 v27; // [rsp+228h] [rbp+1A8h]
  __int64 v28; // [rsp+230h] [rbp+1B0h]
  char v29; // [rsp+238h] [rbp+1B8h]
  __int64 v30; // [rsp+280h] [rbp+200h]
  __int64 v31; // [rsp+288h] [rbp+208h]
  char v32; // [rsp+290h] [rbp+210h]
  __int64 *v33; // [rsp+340h] [rbp+2C0h]
  __int64 v34; // [rsp+348h] [rbp+2C8h]

  v33 = &v10; /*0x140848a6c*/
  v34 = -2; /*0x140848a73*/
  v30 = 1; /*0x140848a84*/
  v31 = 1; /*0x140848a8f*/
  v32 = 0; /*0x140848a9a*/
  v23 = 0; /*0x140848aa1*/
  v24 = 0; /*0x140848aaa*/
  *(_OWORD *)v20 = 0; /*0x140848ab8*/
  v22 = 0; /*0x140848abf*/
  v25 = 8; /*0x140848ac6*/
  v26 = 0; /*0x140848ad1*/
  v27 = 8; /*0x140848ad8*/
  v28 = 0; /*0x140848ae3*/
  v29 = 1; /*0x140848aee*/
  nullsub_1(); /*0x140848af5*/
  v4 = sub_140001360(512, 128); /*0x140848b04*/         // box-allocate 512B/128-align state (channel/task shared state)
  v14 = a2; /*0x140848b0c*/
  if ( !v4 ) /*0x140848b13*/
    sub_1412AD451(128, 512); /*0x140848d6e*/            // alloc::handle_alloc_error (OOM abort)
  v5 = v4; /*0x140848b19*/
  sub_1412762D0(v4, v20, 512); /*0x140848b2c*/          // memcpy zeroed local struct into the box
  v15[0] = 1; /*0x140848b31*/
  v15[1] = v5; /*0x140848b3c*/
  *(_QWORD *)v20 = 1; /*0x140848b43*/
  *(_QWORD *)&v20[8] = v5; /*0x140848b4e*/
  nullsub_1(); /*0x140848b55*/
  v6 = (_QWORD *)sub_140001360(16, 8); /*0x140848b64*/  // small 16B refcount box
  if ( !v6 ) /*0x140848b6c*/
    sub_1412AD451(8, 16); /*0x140848d80*/
  *v6 = 1; /*0x140848b72*/
  v6[1] = v5; /*0x140848b79*/
  *(_QWORD *)&v20[8] = v6; /*0x140848b7d*/
  *(_QWORD *)&v20[16] = &off_14131D030; /*0x140848b8b*/ // Waker vtable ptr
  v20[0] = 28; /*0x140848b92*/                          // vtable size marker (0x1c)
  tokio_coop_budget_check_sys(&v12, a2, v20); /*0x140848bad*/  // poll: shared coop/context-match check (49 callers)
  if ( (_DWORD)v12 == 18 ) /*0x140848bba*/               // same-task-context fast path (discriminant 18)
  {
    v8 = blocking_channel_park_wait_sys(v15); /*0x140848bc7*/  // channel park-wait w/ 1s timeout (19 callers, shared)
    if ( v8 == 2 ) /*0x140848bcf*/
    {
      *(_QWORD *)&v12 = 0; /*0x140848bd5*/              // Result discriminant = Ok
      *((_QWORD *)&v12 + 1) = 1; /*0x140848be0*/         // payload = true
      v13 = 0; /*0x140848beb*/
      *(_QWORD *)&v20[16] = 1610612768; /*0x140848bf6*/
      *(_QWORD *)v20 = &v12; /*0x140848c01*/
      *(_QWORD *)&v20[8] = &off_14135B038; /*0x140848c0f*/
      if ( (unsigned __int8)sub_141085E00(&v11, v20) ) /*0x140848c24*/    // cold: Display fmt of an error value
        sub_1412AD780( /*0x140848ddc*/
          (unsigned int)aADisplayImplem_9,   // "a Display implementation returned an error unexpectedly"
          55,
          (unsigned int)&v11,
          (unsigned int)&unk_14135B280,
          (__int64)&off_14135B0F0);
      *(_QWORD *)(a1 + 16) = v13; /*0x140848c39*/
      *(_OWORD *)a1 = v12; /*0x140848c44*/
    }
    else
    {
      *(_BYTE *)(a1 + 8) = v8; /*0x140848d2a*/           // Err path: store discriminant byte
      *(_QWORD *)a1 = 0x8000000000000000uLL; /*0x140848d37*/  // Result::Err niche sentinel
    }
    sub_1404F6A50(v15); /*0x140848d41*/                  // drop boxed channel state
  }
  else
  {
    // cross-context path: re-poll via a differently-shaped Context; same class of shared plumbing, not shown
    // in full here -- see call-trees/has_notch.jsonl "cross_context_branch" note. Not reached in the observed
    // owner->async_body call (v18 != 3 always exercises the coop-fast-path branch above for a zero-arg command).
    v21 = v13; /*0x140848c53*/
    *(_OWORD *)&v20[8] = v12; /*0x140848c61*/
    *(_QWORD *)v20 = 0x8000000000000000uLL; /*0x140848c72*/
    *(_QWORD *)&v16 = 0; /*0x140848c79*/
    *((_QWORD *)&v16 + 1) = 1; /*0x140848c84*/
    v17 = 0; /*0x140848c8f*/
    v13 = 1610612768; /*0x140848c9a*/
    *(_QWORD *)&v12 = &v16; /*0x140848cac*/
    *((_QWORD *)&v12 + 1) = &off_14135B038; /*0x140848cba*/
    if ( (unsigned __int8)sub_140E156C0(v20, &v12, v7) ) /*0x140848ccf*/
      sub_1412AD780( /*0x140848dae*/
        (unsigned int)aADisplayImplem_9,
        55,
        (unsigned int)&v11,
        (unsigned int)&unk_14135B280,
        (__int64)&off_14135B0F0);
    v19 = v17; /*0x140848ce4*/
    v18 = v16; /*0x140848cf2*/
    sub_140855130(v20); /*0x140848d00*/
    *(_QWORD *)(a1 + 16) = v19; /*0x140848d0d*/
    *(_OWORD *)a1 = v18; /*0x140848d18*/
    sub_1404F6A50(v15); /*0x140848d22*/
  }
  sub_1400453B0(v14); /*0x140848d4e*/                    // drop original span-ctx a2
  return a1; /*0x140848d56*/
}
