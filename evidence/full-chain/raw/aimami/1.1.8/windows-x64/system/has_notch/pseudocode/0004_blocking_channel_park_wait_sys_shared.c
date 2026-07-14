// aimami 1.1.8 windows-x64 -- SHARED runtime helper reached from has_notch's call-tree (depth 4)
// addr=0x14049f2a0 (renamed blocking_channel_park_wait_sys), size=1679B, basic_blocks=95, cyclomatic_complexity=45
// callers (19 total, confirmed via analyze_function -- NOT has_notch-specific):
//   sub_140066B00, sub_140066D10, sub_140066F20, sub_140067350, sub_140067560, sub_140067770, sub_140067980,
//   sub_140067B90, sub_140067FB0, sub_140068680, sub_140068890, sub_140069480, sub_1400E9C20, sub_1400F3CA0,
//   sub_1400F3F50, sub_1400F6EA0, sub_1400FA350, sub_1403FBB40, has_notch_async_body_sys@0x140848a50
// callees: sub_140467C60, sub_1404A7990, __imp_WakeByAddressSingle/WakeByAddressSingle (Win32 API, external_call),
//          sub_14127AEE0, sub_14127B5B0, sub_1412AC970, sub_1412AD53B, sub_1404AB500, sub_141064F20,
//          sub_1404C8F80, sub_1404C8D70, sub_1400A1BE0, sub_141064300, sub_1412AD780, sub_1412AB930,
//          sub_1412ABCB0, sub_14127ACF0, sub_141064320, sub_1412762D0, sub_140E8F3A0
// literal string reached: "called `Result::unwrap()` on an `Err` value" (generic Rust panic message)
//
// Classification: generic Rust std::sync channel/condvar-style "park with 1-second timeout, retry loop,
// AtomicU8 state machine (0=empty,1=parked,2=notified), WakeByAddressSingle/WaitOnAddress-based futex
// emulation on Windows" helper. Entry a1=[tag,state_ptr]; tag==1 -> immediate single-shot wait via
// sub_1400A1BE0(state_ptr, a2, 1_000_000_000ns); tag==0 -> full condvar-wait-with-timeout retry loop
// (LABEL_5 / while(1) block) with waker-list traversal, atomic CAS state transitions, and
// WakeByAddressSingle calls whenever a waiter's state byte transitions from 2 (notified). Terminal return
// value is one of {2 (timeout/no-value-yet edge case), 0, 1 (delivered 1-bit payload)}.
// Reached from has_notch via the tag==1 (simple) branch only: has_notch_async_body_sys builds v15=[1,boxed_ptr]
// and this call resolves to a direct sub_1400A1BE0(v3, a2, 1000000000) park-wait, terminating this leg of the
// call-tree at a genuine external_call boundary (WakeByAddressSingle is reachable from the same function's
// other branches and is the confirmed Win32-API terminus for this whole helper family; see call-trees/has_notch.jsonl).
// Shared by ~19 other command owner-wrappers -- genuine library internal (std::sync park/notify plumbing for
// bridging tauri::async_runtime spawned tasks back to their awaiting poller), not has_notch business logic.

__int64 __fastcall blocking_channel_park_wait_sys(__int64 *a1, __int64 a2)
{
  __int64 v2; unsigned __int64 *v3; bool v4; char v5; __int64 v6, v7, v8; char v9, v10;
  __int64 *v11; unsigned __int64 v12; __int64 v13, v14; __int64 v15; __int64 v16; __int64 v17; char v18;
  unsigned __int64 v19; __int64 v20; unsigned __int64 *v21; __int64 v22; __int64 v23, v24; char v25, v26;
  bool v27; char v28, v29; unsigned int v30; unsigned __int64 v31, v32; unsigned int v33; bool v34;
  __int64 v35; __int64 *v36; __int64 v37; volatile signed __int64 *v38; __int64 v39; __int64 *v40; __int64 v41;
  volatile signed __int64 *v42; char v43; unsigned int v44; char *v45; __int64 v46; char v47; char *v48;
  char v49, v50; __int64 result; int v52; char v53; unsigned int v54, v55; char v56, v57, v58, v59;
  _OWORD v60[2]; __int64 v61; unsigned __int64 v62; int v63; volatile signed __int64 *v64; __m256i v65;
  char v66; _DWORD v67[3]; __m256i v68; __int64 v69; PVOID v70; volatile signed __int64 *v71; int v72;
  char v73, v74, v75; __int64 v76;

  v76 = -2; /*0x14049f2bb*/
  v2 = *a1; /*0x14049f2c3*/
  v3 = (unsigned __int64 *)a1[1]; /*0x14049f2c6*/
  v4 = *a1 == 0; /*0x14049f2ca*/
  v70 = v3; /*0x14049f2cd*/
  if ( !v4 ) /*0x14049f2d1*/
  {
    if ( (_DWORD)v2 == 1 ) /*0x14049f2d6*/                          // tag==1: has_notch's call takes THIS branch
    {
      v5 = sub_1400A1BE0(v3, a2, 1000000000); /*0x14049f2e1*/        // single-shot park-wait, 1e9ns=1s timeout
      goto LABEL_64; /*0x14049f2e6*/
    }
    // tag!=1: full condvar-wait retry loop w/ waker-list traversal (see callers list above for other commands
    // that exercise this branch -- not reached by has_notch's own call this round; recorded for completeness)
    v63 = 1000000000; /*0x14049f34b*/
    memset(v60, 0, sizeof(v60)); /*0x14049f359*/
    v61 = 0; /*0x14049f35d*/
    LOBYTE(a1) = 1; /*0x14049f365*/
    if ( _InterlockedCompareExchange8((volatile signed __int8 *)v3, 1, 0) ) /*0x14049f369*/
      sub_1412ABCB0(v3); /*0x14049f7d5*/
    v11 = off_141963EA8; /*0x14049f375*/
    if ( 2 * *off_141963EA8 ) /*0x14049f37f*/
    {
      v52 = sub_1412AC970(a1, a2); /*0x14049f7df*/
      LOBYTE(v52) = v52 ^ 1; /*0x14049f7e4*/
      v72 = v52; /*0x14049f7e6*/
      if ( !*((_BYTE *)v3 + 1) ) /*0x14049f7f1*/
        goto LABEL_11;
      // ... waker-list traversal, atomic CAS state transitions, WakeByAddressSingle notify calls
      // (full detail elided here for brevity -- captured verbatim in this leaf's 反编译器 decompile capture log;
      // no additional Win32/monitor/display API beyond WakeByAddressSingle appears in any branch)
    }
  }
  v63 = 1000000000; /*0x14049f2eb*/
  memset(&v68, 0, sizeof(v68)); /*0x14049f2f9*/
  v69 = 0; /*0x14049f2fd*/
  if ( (unsigned __int8)sub_1404C8D70(v3, &v68) ) /*0x14049f30f*/
  {
    if ( v68.m256i_i64[0] )
    {
      v9 = *(_BYTE *)(v68.m256i_i64[0] + 8);
      *(_QWORD *)v68.m256i_i64[0] = v68.m256i_i64[1];
      sub_140467C60(v3 + 32);
      v10 = v9 & 1;
    }
    else { v10 = 2; }
    v5 = v10 == 2; LOBYTE(v6) = 1; if ( v10 != 2 ) LOBYTE(v6) = v10 & 1;
  }
  else
  {
    // retry-with-timeout loop (WaitOnAddress/park semantics) -- elided, see note above
    v5 = 1; LOBYTE(v6) = 0;
  }
LABEL_64:
  v4 = (v5 & 1) == 0; /*0x14049f7a8*/
  result = 2; /*0x14049f7b0*/
  if ( v4 ) /*0x14049f7b5*/
    return v6 & 1; /*0x14049f7b5*/                                   // delivered 1-bit boolean payload
  return result; /*0x14049f7b8*/                                     // 2 = timeout/edge-case sentinel
}
