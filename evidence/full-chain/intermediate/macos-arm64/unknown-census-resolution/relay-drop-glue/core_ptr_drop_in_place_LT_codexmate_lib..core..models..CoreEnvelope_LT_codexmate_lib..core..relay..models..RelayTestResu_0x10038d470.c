// IDA Hex-Rays decompile evidence
// addr: 0x10038d470
// cluster: relay
// purpose: unknown-census resolution sweep (2026-07-24), verify drop_in_place != business logic
//
double __fastcall core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreEnvelope$LT$codexmate_lib..core..relay..models..RelayTestResult$GT$$GT$::hcfcfc8b10180f5f1(
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
  __int64 v13; // rax

  if ( *a1 ) /*0x10038d47e*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(a1[1], *a1, 1); /*0x10038d48f*/
  v2 = a1[3]; /*0x10038d494*/
  if ( v2 ) /*0x10038d49b*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(a1[4], v2, 1); /*0x10038d4a6*/
  v3 = a1[7]; /*0x10038d4ab*/
  v4 = a1[8]; /*0x10038d4af*/
  if ( v4 ) /*0x10038d4b6*/
  {
    v5 = (_QWORD *)(v3 + 32); /*0x10038d4b8*/
    do /*0x10038d4c7*/
    {
      v6 = *(v5 - 4); /*0x10038d4c9*/
      if ( v6 ) /*0x10038d4d1*/
        result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(v5 - 3), v6, 1); /*0x10038d4dd*/
      v7 = *(v5 - 1); /*0x10038d4e2*/
      if ( v7 ) /*0x10038d4ea*/
        result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v5, v7, 1); /*0x10038d4f5*/
      v5 += 6; /*0x10038d4c0*/
      --v4; /*0x10038d4c4*/
    }
    while ( v4 ); /*0x10038d4c7*/
  }
  v8 = a1[6]; /*0x10038d4fc*/
  if ( v8 ) /*0x10038d503*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v3, 48 * v8, 8); /*0x10038d515*/
  if ( !__OFSUB__(-a1[12], 1) && a1[12] ) /*0x10038d51e*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(a1[13], a1[12], 1); /*0x10038d531*/
  v9 = a1[10]; /*0x10038d536*/
  v10 = a1[11]; /*0x10038d53a*/
  if ( v10 ) /*0x10038d541*/
  {
    v11 = (_QWORD *)(v9 + 8); /*0x10038d543*/
    do /*0x10038d557*/
    {
      v12 = *(v11 - 1); /*0x10038d559*/
      if ( v12 ) /*0x10038d561*/
        result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v11, v12, 1); /*0x10038d56c*/
      v11 += 3; /*0x10038d550*/
      --v10; /*0x10038d554*/
    }
    while ( v10 ); /*0x10038d557*/
  }
  v13 = a1[9]; /*0x10038d573*/
  if ( v13 ) /*0x10038d57a*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v9, 24 * v13, 8); /*0x10038d594*/
  return result; /*0x10038d58c*/
}

// --- refs (callees/xrefs from decompile) ---
// 0x100001800  __RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc
