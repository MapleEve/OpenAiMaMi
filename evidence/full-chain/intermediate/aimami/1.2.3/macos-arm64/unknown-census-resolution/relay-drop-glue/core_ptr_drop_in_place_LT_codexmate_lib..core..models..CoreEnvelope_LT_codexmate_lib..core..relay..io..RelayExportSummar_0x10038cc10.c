// IDA Hex-Rays decompile evidence
// addr: 0x10038cc10
// cluster: relay
// purpose: unknown-census resolution sweep (2026-07-24), verify drop_in_place != business logic
//
double __fastcall core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreEnvelope$LT$codexmate_lib..core..relay..io..RelayExportSummary$GT$$GT$::h5fd42a678142f510(
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
  __int64 v9; // rsi

  if ( *a1 ) /*0x10038cc1e*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(a1[1], *a1, 1); /*0x10038cc2f*/
  v2 = a1[3]; /*0x10038cc34*/
  if ( v2 ) /*0x10038cc3b*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(a1[4], v2, 1); /*0x10038cc46*/
  v3 = a1[7]; /*0x10038cc4b*/
  v4 = a1[8]; /*0x10038cc4f*/
  if ( v4 ) /*0x10038cc56*/
  {
    v5 = (_QWORD *)(v3 + 32); /*0x10038cc58*/
    do /*0x10038cc67*/
    {
      v6 = *(v5 - 4); /*0x10038cc69*/
      if ( v6 ) /*0x10038cc71*/
        result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(v5 - 3), v6, 1); /*0x10038cc7d*/
      v7 = *(v5 - 1); /*0x10038cc82*/
      if ( v7 ) /*0x10038cc8a*/
        result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v5, v7, 1); /*0x10038cc95*/
      v5 += 6; /*0x10038cc60*/
      --v4; /*0x10038cc64*/
    }
    while ( v4 ); /*0x10038cc67*/
  }
  v8 = a1[6]; /*0x10038cc9c*/
  if ( v8 ) /*0x10038cca3*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v3, 48 * v8, 8); /*0x10038ccb5*/
  v9 = a1[9]; /*0x10038ccba*/
  if ( v9 ) /*0x10038ccc1*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(a1[10], v9, 1); /*0x10038ccd4*/
  return result; /*0x10038cccc*/
}

// --- refs (callees/xrefs from decompile) ---
// 0x100001800  __RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc
