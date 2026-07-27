// IDA Hex-Rays decompile evidence
// addr: 0x100395770
// cluster: relay
// purpose: unknown-census resolution sweep (2026-07-24), verify drop_in_place != business logic
//
double __fastcall core::ptr::drop_in_place$LT$codexmate_lib..core..relay..config_takeover..RestoreSummary$GT$::h602bb0437fd5edef(
        _QWORD *a1)
{
  __int64 v1; // r14
  __int64 v2; // r15
  _QWORD *v3; // r12
  __int64 v4; // rsi
  double result; // xmm0_8
  __int64 v6; // r14
  __int64 v7; // r15
  _QWORD *v8; // r12
  __int64 v9; // rsi
  __int64 v10; // rax
  __int64 v11; // r14
  __int64 v12; // r15
  _QWORD *v13; // r12
  __int64 v14; // rsi
  __int64 v15; // rax
  __int64 v16; // r14
  __int64 v17; // r15
  _QWORD *v18; // r12
  __int64 v19; // rsi
  __int64 v20; // rax

  v1 = a1[1]; /*0x10039577e*/
  v2 = a1[2]; /*0x100395782*/
  if ( v2 ) /*0x100395789*/
  {
    v3 = (_QWORD *)(v1 + 8); /*0x10039578b*/
    do /*0x1003957a7*/
    {
      v4 = *(v3 - 1); /*0x1003957a9*/
      if ( v4 ) /*0x1003957b1*/
        result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v3, v4, 1); /*0x1003957bc*/
      v3 += 3; /*0x1003957a0*/
      --v2; /*0x1003957a4*/
    }
    while ( v2 ); /*0x1003957a7*/
  }
  if ( *a1 ) /*0x1003957c3*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v1, 24LL * *a1, 8); /*0x1003957db*/
  v6 = a1[4]; /*0x1003957e0*/
  v7 = a1[5]; /*0x1003957e4*/
  if ( v7 ) /*0x1003957eb*/
  {
    v8 = (_QWORD *)(v6 + 8); /*0x1003957ed*/
    do /*0x100395807*/
    {
      v9 = *(v8 - 1); /*0x100395809*/
      if ( v9 ) /*0x100395811*/
        result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v8, v9, 1); /*0x10039581c*/
      v8 += 3; /*0x100395800*/
      --v7; /*0x100395804*/
    }
    while ( v7 ); /*0x100395807*/
  }
  v10 = a1[3]; /*0x100395823*/
  if ( v10 ) /*0x10039582a*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v6, 24 * v10, 8); /*0x10039583c*/
  v11 = a1[7]; /*0x100395841*/
  v12 = a1[8]; /*0x100395845*/
  if ( v12 ) /*0x10039584c*/
  {
    v13 = (_QWORD *)(v11 + 8); /*0x10039584e*/
    do /*0x100395867*/
    {
      v14 = *(v13 - 1); /*0x100395869*/
      if ( v14 ) /*0x100395871*/
        result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v13, v14, 1); /*0x10039587c*/
      v13 += 3; /*0x100395860*/
      --v12; /*0x100395864*/
    }
    while ( v12 ); /*0x100395867*/
  }
  v15 = a1[6]; /*0x100395883*/
  if ( v15 ) /*0x10039588a*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v11, 24 * v15, 8); /*0x10039589c*/
  v16 = a1[10]; /*0x1003958a1*/
  v17 = a1[11]; /*0x1003958a5*/
  if ( v17 ) /*0x1003958ac*/
  {
    v18 = (_QWORD *)(v16 + 8); /*0x1003958ae*/
    do /*0x1003958c7*/
    {
      v19 = *(v18 - 1); /*0x1003958c9*/
      if ( v19 ) /*0x1003958d1*/
        result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v18, v19, 1); /*0x1003958dc*/
      v18 += 3; /*0x1003958c0*/
      --v17; /*0x1003958c4*/
    }
    while ( v17 ); /*0x1003958c7*/
  }
  v20 = a1[9]; /*0x1003958e3*/
  if ( v20 ) /*0x1003958ea*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v16, 24 * v20, 8); /*0x100395904*/
  return result; /*0x1003958fc*/
}

// --- refs (callees/xrefs from decompile) ---
// 0x100001800  __RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc
