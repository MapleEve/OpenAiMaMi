// aimami 1.1.8 windows-x64 — relay_quota_http_response_poll_phase0_sys (candidate name; PE
// stripped; role matches 1.1.1's confirmed relay_quota_http_response_state_machine_sys —
// "HTTP response phases 0-4; status 200-299 gate")
// va: 0x140A96EF0 (sub_140A96EF0) — size=397B, basic_blocks=21, cyclomatic_complexity=3,
// callees=7 (all resolved). decompile: FULL, no truncation.
// callers: sub_1409802F0 (error-fmt helper, depth3), sub_1409ED070.
//
// Role: this is a tokio async-Future `::poll` phase-0 entry (4-way switch on a phase-discriminant
// byte at offset+560), matching the "phases 0-4" state machine confirmed in 1.1.1. Case 0 performs
// an 0x88-byte (136B) memcpy of the pending-request context via a shared internal copy routine,
// zeroes an "already polled" flag, then unconditionally proceeds into a nested poll call
// (sub_140A973C0, depth5 — see 0008) which advances the reqwest response future to the next phase.

char __fastcall sub_140A96EF0(__int64 a1, __int64 a2)
{
  char result;      // al
  __int64 v5;       // r15
  __int64 v6;       // rdi
  char v8;          // r12
  __int64 v9;       // r14
  int v10;          // ecx
  __int128 v11, v12; // stack
  char v13;         // stack BYREF
  _BYTE v14[7];     // stack
  __int64 v15;      // stack
  __int128 v16;     // stack
  __int64 v17;      // stack BYREF
  __int64 v18;      // stack
  _BYTE v19[24];    // stack
  __int64 v20, v21; // stack
  __int128 v22;     // stack BYREF
  __int64 v23, v24; // stack
  _BYTE v25[7];     // stack
  __int64 v26;      // stack

  v26 = -2;
  switch ( *(_BYTE *)(a2 + 560) )        // poll-phase discriminant
  {
    case 0:
      sub_1412762D0((__m128i *)(a2 + 136), (const __m128i *)a2, 0x88u);  // 136B memcpy: stage
                                                                          // request context for the
                                                                          // in-flight reqwest future
      *(_BYTE *)(a2 + 552) = 0;         // clear "polled once already" guard flag
      break;
    case 1:
      sub_1412ADB20(&off_14136AC78);    // tokio waker re-arm (case 1 falls through to case 2)
    case 2:
      sub_1412ADB40(&off_14136AC78);    // tokio waker clone/register (shared vtable-dispatch helper)
    case 3:
      break;                            // already in-flight — re-enter nested poll directly
  }
  v23 = a2;
  v24 = a2 + 136;
  sub_140A973C0(&v17);                  // *** nested poll (depth 5→6, see 0008) — advances the
                                         // reqwest connection future one step ***
  if ( (_BYTE)v17 )
  {
    *(_BYTE *)a1 = 7;                   // Poll::Pending sentinel (variant tag 7)
    result = 3;
  }
  else
  {
    v5 = v18; v6 = *(_QWORD *)v19; v12 = *(_OWORD *)&v19[8];
    sub_1407A7360(v24);                 // drop staged request-context copy (shared cleanup, size=88B)
    if ( v5 )
    {
      // Poll::Ready(Err(_)) or Poll::Ready(Ok(_)) with non-null payload — dispatch via a vtable
      // fn-pointer stored at v5+32 (dynamic Future/Stream combinator dispatch, NOT app logic)
      v22 = v12; v20 = v5; v21 = v6; v7 = v12; v17 = v6; v18 = v12;
      *(_OWORD *)v19 = 0;
      sub_140386670(&v13, &v17);        // classify Ready-payload discriminant (Ok/Err variant tag)
      v8 = v13;
      if ( v13 == 6 )
      {
        LOWORD(v17) = 5;
        v9 = sub_1405B05F0(&v17, v15);  // Err-branch: wrap into relay-quota error envelope
        v5 = v20; v6 = v21; v7 = v22;
      }
      else
      {
        *(_DWORD *)&v25[3] = *(_DWORD *)&v14[3]; *(_DWORD *)v25 = *(_DWORD *)v14;
        v9 = v15; v11 = v16;
      }
      (*(void (__fastcall **)(char *, __int64, __int64))(v5 + 32))((char *)&v22 + 8, v6, v7);
      v6 = v9;
    }
    else
    {
      v8 = 6;                            // Poll::Ready with null payload — treat as still-pending
    }
    *(_BYTE *)a1 = v8;
    v10 = *(_DWORD *)&v25[3];
    *(_DWORD *)(a1 + 1) = *(_DWORD *)v25;
    *(_DWORD *)(a1 + 4) = v10;
    *(_QWORD *)(a1 + 8) = v6;
    *(_OWORD *)(a1 + 16) = v11;
    result = 1;                          // Poll::Ready sentinel
  }
  *(_BYTE *)(v23 + 560) = result;        // persist next phase discriminant for re-entry
  return result;
}
