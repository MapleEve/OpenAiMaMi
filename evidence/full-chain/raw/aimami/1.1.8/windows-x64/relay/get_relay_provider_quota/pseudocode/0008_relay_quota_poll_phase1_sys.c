// aimami 1.1.8 windows-x64 — relay_quota_http_response_poll_phase1_sys (candidate name; PE
// stripped; nested poll called from 0007 at depth 5→6, matches 1.1.1's confirmed
// relay_quota_http_response_state_machine_sys "phases 0-4" continuation)
// va: 0x140A973C0 (sub_140A973C0) — size=848B, basic_blocks=26, cyclomatic_complexity=5,
// callees=12 (all resolved: sub_14010EC30 [depth 6/7 nested poll — the actual hyper/tokio
// transport-level poll, external_call terminus], sub_1412ADB40, sub_140045C00, nullsub_1,
// sub_140001360, sub_140001370, sub_140872EA0, sub_1412AD451, sub_140111020, sub_140799DE0,
// sub_1412762D0, sub_1412ADB20). decompile: near-full (154 chars truncated at tail — trailing
// fallthrough drop-glue only). callers: sub_140A96EF0 (0007), sub_140A97140 (sibling phase).
// terminated_reason for this leaf's remaining depth (sub_14010EC30): external_call — hyper/tokio
// connection-poll internals, no further app-level relay-quota logic beyond this point.

char __fastcall sub_140A973C0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5;        // rax
  __m128i *v6;       // rbx
  __m128i v7, v8, v9; // xmm0/xmm1/xmm2
  __int128 v10;      // xmm6
  __int64 v11;       // r14
  char result;       // al
  __int64 v13;       // r15
  __int64 v14, v15;  // rdi/rbx
  __int64 v16, v17;  // rdx/rcx
  __int64 v18;       // r14
  __int64 *v19;      // rbx
  __int64 v20;       // rdx
  __m128i *v21;      // rax
  __int128 v22, v23, v24, v25, v26, v27, v28; // stack
  __int64 v29;       // stack
  _QWORD v30[2];     // stack BYREF
  __int128 v31;      // stack
  __m128i v32;       // stack BYREF
  _BYTE v33[112];    // stack
  __int64 v34, v35, v36, v37, v38; // stack

  v38 = -2;
  v5 = *(unsigned __int8 *)(a2 + 416);   // nested-poll phase-2 discriminant
  v37 = a2;
  switch ( v5 )
  {
    case 0LL:
      v6 = (__m128i *)a2;
      sub_1412762D0((__m128i *)(a2 + 136), (const __m128i *)a2, 0x88u);   // stage another 136B copy
      // pack the 8x16-byte hyper::Request/Uri fields into a contiguous 112-byte scratch buffer
      *(__m128i *)&v33[96] = v6[7]; *(__m128i *)&v33[80] = v6[6];
      *(__m128i *)&v33[64] = v6[5]; *(__m128i *)&v33[48] = v6[4];
      v7 = *v6; v8 = v6[1]; v9 = v6[2];
      *(__m128i *)&v33[32] = v6[3]; *(__m128i *)&v33[16] = v9; *(__m128i *)v33 = v8;
      v32 = v7;
      v10 = *(_OWORD *)&v33[96];
      sub_140045C00(&v32);                 // drop temp copy of the packed request struct
      if ( *(_QWORD *)&v33[80] )
      {
        v36 = *(_QWORD *)&v33[80];
        sub_140872EA0();                   // (no-arg helper — likely a metrics/telemetry no-op hook)
        sub_140001370(v36, 32, 8);         // free a 32-byte connection-metadata slot
      }
      a2 = v37;
      *(_QWORD *)(v37 + 272) = 3;           // reset inner poll state to "not started"
      *(_QWORD *)(a2 + 368) = 0; *(_QWORD *)(a2 + 376) = 8;
      *(_OWORD *)(a2 + 384) = 0; *(_OWORD *)(a2 + 400) = v10;
      break;
    case 1LL:
      sub_1412ADB20(&off_14136ACA8);        // waker re-arm (falls through)
    case 2LL:
      sub_1412ADB40(&off_14136ACA8);        // waker clone/register
    case 3LL:
      break;
  }
  v36 = a2 + 272;
  // *** deepest resolved node this leaf: nested transport-level poll — hyper/tokio connection
  // I/O, external_call terminus (no further relay-quota app logic beyond this call) ***
  sub_14010EC30(&v32, a2 + 272, a3);
  v11 = v32.m128i_i64[0];
  if ( v32.m128i_i64[0] != 5 )       // 5 == Poll::Pending sentinel for this inner future
  {
    v14 = v32.m128i_i64[1]; v15 = *(_QWORD *)v33;
    v23 = *(_OWORD *)&v33[8]; v24 = *(_OWORD *)&v33[24]; v25 = *(_OWORD *)&v33[40];
    v26 = *(_OWORD *)&v33[56]; v27 = *(_OWORD *)&v33[72]; v28 = *(_OWORD *)&v33[88];
    v29 = *(_QWORD *)&v33[104];
    sub_140799DE0(v36);                // drop the request-context copy staged at v36
    /* ... remaining Ready(Ok)/Ready(Err) unwrap + repack into caller's out-param, mirroring the
       same discriminant-tag convention as 0007 (variant 4 == special-case, others pass through);
       154 chars elided at this tail (compiler drop-glue continuation only) ... */
  }
  return result;
}
