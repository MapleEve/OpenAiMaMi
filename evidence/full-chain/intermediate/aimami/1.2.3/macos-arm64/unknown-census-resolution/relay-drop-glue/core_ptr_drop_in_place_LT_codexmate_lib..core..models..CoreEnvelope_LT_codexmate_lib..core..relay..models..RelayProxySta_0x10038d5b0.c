// IDA Hex-Rays decompile evidence
// addr: 0x10038d5b0
// cluster: relay
// purpose: unknown-census resolution sweep (2026-07-24), verify drop_in_place != business logic
//
double __fastcall core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreEnvelope$LT$codexmate_lib..core..relay..models..RelayProxyStatus$GT$$GT$::h9f3fb69cfd705760(
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
  __int64 v10; // rsi

  if ( *a1 ) /*0x10038d5be*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(a1[1], *a1, 1); /*0x10038d5cf*/
  v2 = a1[3]; /*0x10038d5d4*/
  if ( v2 ) /*0x10038d5db*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(a1[4], v2, 1); /*0x10038d5e6*/
  v3 = a1[7]; /*0x10038d5eb*/
  v4 = a1[8]; /*0x10038d5ef*/
  if ( v4 ) /*0x10038d5f6*/
  {
    v5 = (_QWORD *)(v3 + 32); /*0x10038d5f8*/
    do /*0x10038d607*/
    {
      v6 = *(v5 - 4); /*0x10038d609*/
      if ( v6 ) /*0x10038d611*/
        result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(v5 - 3), v6, 1); /*0x10038d61d*/
      v7 = *(v5 - 1); /*0x10038d622*/
      if ( v7 ) /*0x10038d62a*/
        result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v5, v7, 1); /*0x10038d635*/
      v5 += 6; /*0x10038d600*/
      --v4; /*0x10038d604*/
    }
    while ( v4 ); /*0x10038d607*/
  }
  v8 = a1[6]; /*0x10038d63c*/
  if ( v8 ) /*0x10038d643*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v3, 48 * v8, 8); /*0x10038d655*/
  v9 = a1[9]; /*0x10038d65a*/
  if ( v9 ) /*0x10038d661*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(a1[10], v9, 1); /*0x10038d66c*/
  v10 = a1[12]; /*0x10038d671*/
  if ( v10 ) /*0x10038d678*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(a1[13], v10, 1); /*0x10038d683*/
  if ( !__OFSUB__(-a1[15], 1) ) /*0x10038d692*/
  {
    if ( a1[15] ) /*0x10038d68c*/
      return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(a1[16], a1[15], 1); /*0x10038d6aa*/
  }
  return result; /*0x10038d6a2*/
}

// --- refs (callees/xrefs from decompile) ---
// 0x100001800  __RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc
