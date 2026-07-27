// IDA Hex-Rays decompile evidence
// addr: 0x1002c4790
// cluster: relay
// purpose: unknown-census resolution sweep (2026-07-24), verify drop_in_place != business logic
//
double __fastcall core::ptr::drop_in_place$LT$codexmate_lib..core..relay..router_reconciler..RouterOnResult$GT$::h6e06eaf0a1fab1d9(
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

  v1 = a1[1]; /*0x1002c479e*/
  v2 = a1[2]; /*0x1002c47a2*/
  if ( v2 ) /*0x1002c47a9*/
  {
    v3 = (_QWORD *)(v1 + 8); /*0x1002c47ab*/
    do /*0x1002c47c7*/
    {
      v4 = *(v3 - 1); /*0x1002c47c9*/
      if ( v4 ) /*0x1002c47d1*/
        result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v3, v4, 1); /*0x1002c47dc*/
      v3 += 3; /*0x1002c47c0*/
      --v2; /*0x1002c47c4*/
    }
    while ( v2 ); /*0x1002c47c7*/
  }
  if ( *a1 ) /*0x1002c47e3*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v1, 24LL * *a1, 8); /*0x1002c47fb*/
  v6 = a1[4]; /*0x1002c4800*/
  v7 = a1[5]; /*0x1002c4804*/
  if ( v7 ) /*0x1002c480b*/
  {
    v8 = (_QWORD *)(v6 + 8); /*0x1002c480d*/
    do /*0x1002c4827*/
    {
      v9 = *(v8 - 1); /*0x1002c4829*/
      if ( v9 ) /*0x1002c4831*/
        result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v8, v9, 1); /*0x1002c483c*/
      v8 += 3; /*0x1002c4820*/
      --v7; /*0x1002c4824*/
    }
    while ( v7 ); /*0x1002c4827*/
  }
  v10 = a1[3]; /*0x1002c4843*/
  if ( v10 ) /*0x1002c484a*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v6, 24 * v10, 8); /*0x1002c4864*/
  return result; /*0x1002c485c*/
}

// --- refs (callees/xrefs from decompile) ---
// 0x100001800  __RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc
