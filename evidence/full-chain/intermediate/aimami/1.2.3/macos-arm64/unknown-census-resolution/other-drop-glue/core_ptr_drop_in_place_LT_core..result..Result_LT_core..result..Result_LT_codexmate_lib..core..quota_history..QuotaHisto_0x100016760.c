// IDA Hex-Rays decompile evidence
// addr: 0x100016760
// cluster: other
// purpose: unknown-census resolution sweep (2026-07-24), verify drop_in_place != business logic
//
void __fastcall core::ptr::drop_in_place$LT$core..result..Result$LT$core..result..Result$LT$codexmate_lib..core..quota_history..QuotaHistoryPayload$C$codexmate_lib..core..models..CoreError$GT$$C$tokio..runtime..task..error..JoinError$GT$$GT$::h55e0631efbc06060(
        _QWORD *a1)
{
  __int64 v1; // r14
  __int64 v2; // r15
  _QWORD *v3; // r12
  __int64 v4; // rsi
  __int64 v5; // rsi
  __int64 v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // r15

  if ( *a1 == 12 ) /*0x100016775*/
  {
    v1 = a1[2]; /*0x1000167d7*/
    if ( v1 ) /*0x1000167de*/
    {
      v8 = a1[3]; /*0x1000167e0*/
      if ( *(_QWORD *)v8 ) /*0x1000167e4*/
        (*(void (__fastcall **)(_QWORD))v8)(a1[2]); /*0x1000167ef*/
      v6 = *(_QWORD *)(v8 + 8); /*0x1000167f1*/
      if ( v6 ) /*0x1000167f8*/
      {
        v7 = *(_QWORD *)(v8 + 16); /*0x1000167fa*/
        goto LABEL_15; /*0x1000167fa*/
      }
    }
  }
  else if ( (unsigned int)*a1 == 11 ) /*0x10001677a*/
  {
    v1 = a1[2]; /*0x100016780*/
    v2 = a1[3]; /*0x100016784*/
    if ( v2 ) /*0x10001678b*/
    {
      v3 = (_QWORD *)(v1 + 40); /*0x10001678d*/
      do /*0x1000167a7*/
      {
        v4 = *(v3 - 1); /*0x1000167a9*/
        if ( v4 ) /*0x1000167b1*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v3, v4, 1); /*0x1000167bc*/
        v3 += 8; /*0x1000167a0*/
        --v2; /*0x1000167a4*/
      }
      while ( v2 ); /*0x1000167a7*/
    }
    v5 = a1[1]; /*0x1000167c3*/
    if ( v5 ) /*0x1000167ca*/
    {
      v6 = v5 << 6; /*0x1000167cc*/
      v7 = 8; /*0x1000167d0*/
LABEL_15:
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v1, v6, v7); /*0x1000167fe*/
    }
  }
  else
  {
    core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(a1); /*0x100016819*/
  }
}

// --- refs (callees/xrefs from decompile) ---
// 0x100001800  __RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc
// 0x1000370a0  __ZN4core3ptr59drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$17h389b3279db467fcbE
