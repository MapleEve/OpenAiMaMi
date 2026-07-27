// IDA Hex-Rays decompile evidence
// addr: 0x1000159f0
// cluster: other
// purpose: unknown-census resolution sweep (2026-07-24), verify drop_in_place != business logic
//
double __fastcall core::ptr::drop_in_place$LT$core..result..Result$LT$core..result..Result$LT$codexmate_lib..core..analytics..UsageAnalyticsPayload$C$codexmate_lib..core..models..CoreError$GT$$C$tokio..runtime..task..error..JoinError$GT$$GT$::h08123d80fde08c07(
        _QWORD *a1)
{
  __int64 v1; // rbx
  __int64 v2; // r15
  __int64 v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // rdi
  _QWORD *v6; // rbx
  double result; // xmm0_8
  __int64 v8; // r14
  __int64 v9; // r15
  _QWORD *v10; // r12
  __int64 v11; // rsi

  if ( *a1 == 2 ) /*0x100015a02*/
  {
    v1 = a1[2]; /*0x100015a04*/
    if ( v1 ) /*0x100015a0b*/
    {
      v2 = a1[3]; /*0x100015a11*/
      if ( *(_QWORD *)v2 ) /*0x100015a15*/
        (*(void (__fastcall **)(_QWORD))v2)(a1[2]); /*0x100015a20*/
      v3 = *(_QWORD *)(v2 + 8); /*0x100015a22*/
      if ( v3 ) /*0x100015a29*/
      {
        v4 = *(_QWORD *)(v2 + 16); /*0x100015a2f*/
        v5 = v1; /*0x100015a33*/
        return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v5, v3, v4); /*0x100015acb*/
      }
    }
  }
  else
  {
    v6 = a1 + 1; /*0x100015a3b*/
    if ( *a1 ) /*0x1000159fb*/
    {
      core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(a1 + 1); /*0x100015a4f*/
      return result; /*0x100015a4f*/
    }
    if ( !__OFSUB__(-a1[4], 1) && a1[4] ) /*0x100015a58*/
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(a1[5], a1[4], 1); /*0x100015a71*/
    v8 = a1[2]; /*0x100015a79*/
    v9 = a1[3]; /*0x100015a7d*/
    if ( v9 ) /*0x100015a84*/
    {
      v10 = (_QWORD *)(v8 + 8); /*0x100015a86*/
      do /*0x100015a97*/
      {
        v11 = *(v10 - 1); /*0x100015a99*/
        if ( v11 ) /*0x100015aa1*/
          result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v10, v11, 1); /*0x100015aac*/
        v10 += 5; /*0x100015a90*/
        --v9; /*0x100015a94*/
      }
      while ( v9 ); /*0x100015a97*/
    }
    if ( *v6 ) /*0x100015ab3*/
    {
      v3 = 40LL * *v6; /*0x100015abf*/
      v4 = 8; /*0x100015ac3*/
      v5 = v8; /*0x100015ac8*/
      return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v5, v3, v4); /*0x100015ac8*/
    }
  }
  return result; /*0x100015a47*/
}

// --- refs (callees/xrefs from decompile) ---
// 0x100001800  __RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc
// 0x1000370a0  __ZN4core3ptr59drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$17h389b3279db467fcbE
