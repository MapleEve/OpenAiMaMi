// IDA Hex-Rays decompile evidence
// addr: 0x1003e23e0
// cluster: other
// purpose: unknown-census resolution sweep (2026-07-24), verify drop_in_place != business logic
//
double __fastcall core::ptr::drop_in_place$LT$core..result..Result$LT$core..result..Result$LT$codexmate_lib..core..auth..AuthFile$C$codexmate_lib..core..models..CoreError$GT$$C$tokio..runtime..task..error..JoinError$GT$$GT$::h934adfa48d014249(
        __int64 *a1)
{
  __int64 v1; // rsi
  __int64 v2; // r14
  __int64 v3; // r15
  __int64 v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rdi
  double result; // xmm0_8
  __int64 v8; // rsi

  v1 = *a1; /*0x1003e23ed*/
  if ( *a1 == 0x8000000000000001LL ) /*0x1003e23fd*/
  {
    core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(a1 + 1); /*0x1003e2453*/
    return result; /*0x1003e2453*/
  }
  if ( v1 == 0x8000000000000002LL ) /*0x1003e240c*/
  {
    v2 = a1[2]; /*0x1003e240e*/
    if ( v2 ) /*0x1003e2415*/
    {
      v3 = a1[3]; /*0x1003e241b*/
      if ( *(_QWORD *)v3 ) /*0x1003e241f*/
        (*(void (__fastcall **)(__int64))v3)(a1[2]); /*0x1003e242a*/
      v4 = *(_QWORD *)(v3 + 8); /*0x1003e242c*/
      if ( v4 ) /*0x1003e2433*/
      {
        v5 = *(_QWORD *)(v3 + 16); /*0x1003e2439*/
        v6 = v2; /*0x1003e243d*/
        return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v6, v4, v5); /*0x1003e24bc*/
      }
    }
  }
  else
  {
    if ( !__OFSUB__(-v1, 1) && v1 ) /*0x1003e246a*/
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(a1[1], v1, 1); /*0x1003e2475*/
    v8 = a1[3]; /*0x1003e247a*/
    if ( v8 != 0x8000000000000000LL && v8 ) /*0x1003e2486*/
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(a1[4], v8, 1); /*0x1003e2491*/
    core::ptr::drop_in_place$LT$codexmate_lib..core..auth..AuthTokens$GT$::h201262d26def3154(a1 + 6); /*0x1003e249a*/
    v4 = a1[18]; /*0x1003e249f*/
    if ( v4 != 0x8000000000000000LL && v4 ) /*0x1003e24ae*/
    {
      v6 = a1[19]; /*0x1003e24b0*/
      v5 = 1; /*0x1003e24b7*/
      return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v6, v4, v5); /*0x1003e24b7*/
    }
  }
  return result; /*0x1003e244d*/
}

// --- refs (callees/xrefs from decompile) ---
// 0x1003fa830  __ZN4core3ptr59drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$17h389b3279db467fcbE_3
// 0x100001800  __RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc
// 0x1003fa030  __ZN4core3ptr58drop_in_place$LT$codexmate_lib..core..auth..AuthTokens$GT$17h201262d26def3154E
