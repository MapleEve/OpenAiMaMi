// IDA Hex-Rays decompile evidence
// addr: 0x10029ab10
// cluster: relay
// purpose: unknown-census resolution sweep (2026-07-24), verify drop_in_place != business logic
//
double __fastcall core::ptr::drop_in_place$LT$codexmate_lib..core..relay..codex_thread_visibility..ThreadProviderConvergenceInspection$GT$::h50ec709024398c44(
        _QWORD *a1)
{
  double result; // xmm0_8
  __int64 v2; // r14
  __int64 v3; // r15
  _QWORD *v4; // r12
  __int64 v5; // rsi
  __int64 v6; // rax
  __int64 v7; // r14
  __int64 v8; // r15
  _QWORD *v9; // r12
  __int64 v10; // rsi
  __int64 v11; // rax

  if ( *a1 ) /*0x10029ab1e*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(a1[1], *a1, 1); /*0x10029ab2f*/
  v2 = a1[4]; /*0x10029ab34*/
  v3 = a1[5]; /*0x10029ab38*/
  if ( v3 ) /*0x10029ab3f*/
  {
    v4 = (_QWORD *)(v2 + 8); /*0x10029ab41*/
    do /*0x10029ab57*/
    {
      v5 = *(v4 - 1); /*0x10029ab59*/
      if ( v5 ) /*0x10029ab61*/
        result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v4, v5, 1); /*0x10029ab6c*/
      v4 += 3; /*0x10029ab50*/
      --v3; /*0x10029ab54*/
    }
    while ( v3 ); /*0x10029ab57*/
  }
  v6 = a1[3]; /*0x10029ab73*/
  if ( v6 ) /*0x10029ab7a*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v2, 24 * v6, 8); /*0x10029ab8c*/
  v7 = a1[7]; /*0x10029ab91*/
  v8 = a1[8]; /*0x10029ab95*/
  if ( v8 ) /*0x10029ab9c*/
  {
    v9 = (_QWORD *)(v7 + 8); /*0x10029ab9e*/
    do /*0x10029abb7*/
    {
      v10 = *(v9 - 1); /*0x10029abb9*/
      if ( v10 ) /*0x10029abc1*/
        result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v9, v10, 1); /*0x10029abcc*/
      v9 += 3; /*0x10029abb0*/
      --v8; /*0x10029abb4*/
    }
    while ( v8 ); /*0x10029abb7*/
  }
  v11 = a1[6]; /*0x10029abd3*/
  if ( v11 ) /*0x10029abda*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v7, 24 * v11, 8); /*0x10029abf4*/
  return result; /*0x10029abec*/
}

// --- refs (callees/xrefs from decompile) ---
// 0x100001800  __RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc
