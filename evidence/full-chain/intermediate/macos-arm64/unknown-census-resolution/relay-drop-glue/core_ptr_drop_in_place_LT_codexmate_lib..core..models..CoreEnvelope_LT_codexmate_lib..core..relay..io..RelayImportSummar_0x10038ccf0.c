// IDA Hex-Rays decompile evidence
// addr: 0x10038ccf0
// cluster: relay
// purpose: unknown-census resolution sweep (2026-07-24), verify drop_in_place != business logic
//
double __fastcall core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreEnvelope$LT$codexmate_lib..core..relay..io..RelayImportSummary$GT$$GT$::hd399143a54af071a(
        _QWORD *a1)
{
  double result; // xmm0_8
  __int64 v2; // rsi
  __int64 v3; // r14
  __int64 v4; // r15
  _QWORD *v5; // r12
  __int64 v6; // rsi
  __int64 v7; // rsi
  __int64 v8; // rax
  __int64 v9; // r14
  __int64 v10; // r15
  _QWORD *v11; // r12
  __int64 v12; // rsi
  __int64 v13; // rsi
  __int64 v14; // rsi
  __int64 v15; // rax

  if ( *a1 ) /*0x10038ccfe*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(a1[1], *a1, 1); /*0x10038cd0f*/
  v2 = a1[3]; /*0x10038cd14*/
  if ( v2 ) /*0x10038cd1b*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(a1[4], v2, 1); /*0x10038cd26*/
  v3 = a1[7]; /*0x10038cd2b*/
  v4 = a1[8]; /*0x10038cd2f*/
  if ( v4 ) /*0x10038cd36*/
  {
    v5 = (_QWORD *)(v3 + 32); /*0x10038cd38*/
    do /*0x10038cd47*/
    {
      v6 = *(v5 - 4); /*0x10038cd49*/
      if ( v6 ) /*0x10038cd51*/
        result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(v5 - 3), v6, 1); /*0x10038cd5d*/
      v7 = *(v5 - 1); /*0x10038cd62*/
      if ( v7 ) /*0x10038cd6a*/
        result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v5, v7, 1); /*0x10038cd75*/
      v5 += 6; /*0x10038cd40*/
      --v4; /*0x10038cd44*/
    }
    while ( v4 ); /*0x10038cd47*/
  }
  v8 = a1[6]; /*0x10038cd7c*/
  if ( v8 ) /*0x10038cd83*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v3, 48 * v8, 8); /*0x10038cd95*/
  v9 = a1[10]; /*0x10038cd9a*/
  v10 = a1[11]; /*0x10038cd9e*/
  if ( v10 ) /*0x10038cda5*/
  {
    v11 = (_QWORD *)(v9 + 56); /*0x10038cda7*/
    do /*0x10038cdb7*/
    {
      v12 = *(v11 - 7); /*0x10038cdb9*/
      if ( v12 ) /*0x10038cdc1*/
        result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(v11 - 6), v12, 1); /*0x10038cdcd*/
      v13 = *(v11 - 4); /*0x10038cdd2*/
      if ( v13 ) /*0x10038cdda*/
        result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(v11 - 3), v13, 1); /*0x10038cde6*/
      v14 = *(v11 - 1); /*0x10038cdeb*/
      if ( v14 ) /*0x10038cdf3*/
        result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v11, v14, 1); /*0x10038cdfe*/
      v11 += 9; /*0x10038cdb0*/
      --v10; /*0x10038cdb4*/
    }
    while ( v10 ); /*0x10038cdb7*/
  }
  v15 = a1[9]; /*0x10038ce05*/
  if ( v15 ) /*0x10038ce0c*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v9, 72 * v15, 8); /*0x10038ce26*/
  return result; /*0x10038ce1e*/
}

// --- refs (callees/xrefs from decompile) ---
// 0x100001800  __RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc
