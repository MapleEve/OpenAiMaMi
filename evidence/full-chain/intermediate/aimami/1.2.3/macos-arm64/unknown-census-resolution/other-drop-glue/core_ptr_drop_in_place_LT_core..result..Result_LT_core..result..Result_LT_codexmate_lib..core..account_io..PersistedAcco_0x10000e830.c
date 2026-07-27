// IDA Hex-Rays decompile evidence
// addr: 0x10000e830
// cluster: other
// purpose: unknown-census resolution sweep (2026-07-24), verify drop_in_place != business logic
//
double __fastcall core::ptr::drop_in_place$LT$core..result..Result$LT$core..result..Result$LT$codexmate_lib..core..account_io..PersistedAccount$C$alloc..string..String$GT$$C$tokio..runtime..task..error..JoinError$GT$$GT$::hf2bc5b9d74d50f68(
        __int64 *a1)
{
  __int64 v1; // rsi
  __int64 v2; // r14
  __int64 v3; // r15
  __int64 v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rdi
  __int64 v7; // rax
  double result; // xmm0_8
  __int64 v9; // rsi

  v1 = *a1; /*0x10000e83d*/
  if ( __OFSUB__(-*a1, 1) ) /*0x10000e846*/
  {
    v4 = a1[1]; /*0x10000e887*/
    v7 = 1; /*0x10000e88b*/
    goto LABEL_14; /*0x10000e890*/
  }
  if ( v1 != 0x8000000000000001LL ) /*0x10000e855*/
  {
    if ( v1 ) /*0x10000e895*/
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(a1[1], v1, 1); /*0x10000e8a0*/
    v9 = a1[3]; /*0x10000e8a5*/
    if ( v9 ) /*0x10000e8ac*/
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(a1[4], v9, 1); /*0x10000e8b7*/
    v4 = a1[6]; /*0x10000e8bc*/
    v7 = 6; /*0x10000e8c0*/
    if ( __OFSUB__(-v4, 1) ) /*0x10000e8cb*/
      return result; /*0x10000e8cb*/
LABEL_14:
    if ( !v4 ) /*0x10000e8d0*/
      return result; /*0x10000e8d0*/
    v6 = a1[v7 + 1]; /*0x10000e8d2*/
    v5 = 1; /*0x10000e8d7*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v6, v4, v5); /*0x10000e8d7*/
  }
  v2 = a1[2]; /*0x10000e857*/
  if ( v2 ) /*0x10000e85e*/
  {
    v3 = a1[3]; /*0x10000e864*/
    if ( *(_QWORD *)v3 ) /*0x10000e868*/
      (*(void (__fastcall **)(__int64))v3)(a1[2]); /*0x10000e873*/
    v4 = *(_QWORD *)(v3 + 8); /*0x10000e875*/
    if ( v4 ) /*0x10000e87c*/
    {
      v5 = *(_QWORD *)(v3 + 16); /*0x10000e87e*/
      v6 = v2; /*0x10000e882*/
      return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v6, v4, v5); /*0x10000e8dc*/
    }
  }
  return result; /*0x10000e8e0*/
}

// --- refs (callees/xrefs from decompile) ---
// 0x100001800  __RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc
