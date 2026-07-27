// IDA Hex-Rays decompile evidence
// addr: 0x100b0dcd0
// cluster: other
// purpose: unknown-census resolution sweep (2026-07-24), verify drop_in_place != business logic
//
double __fastcall core::ptr::drop_in_place$LT$codexmate_lib..core..session_analytics..SessionData$GT$::h7c18df4ecb005bc6(
        _QWORD *a1)
{
  double result; // xmm0_8
  __int64 v2; // rax
  __int64 v3; // r14
  __int64 v4; // r15
  _QWORD *v5; // r12
  __int64 v6; // rsi
  __int64 v7; // rsi
  __int64 v8; // rsi

  if ( *a1 ) /*0x100b0dcde*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(a1[1], *a1, 1); /*0x100b0dcef*/
  v2 = a1[3]; /*0x100b0dcf4*/
  if ( v2 ) /*0x100b0dcfb*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(a1[4], 40 * v2, 8); /*0x100b0dd0e*/
  v3 = a1[7]; /*0x100b0dd13*/
  v4 = a1[8]; /*0x100b0dd17*/
  if ( v4 ) /*0x100b0dd1e*/
  {
    v5 = (_QWORD *)(v3 + 8); /*0x100b0dd20*/
    do /*0x100b0dd37*/
    {
      v6 = *(v5 - 1); /*0x100b0dd39*/
      if ( v6 ) /*0x100b0dd41*/
        result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v5, v6, 1); /*0x100b0dd4c*/
      v5 += 4; /*0x100b0dd30*/
      --v4; /*0x100b0dd34*/
    }
    while ( v4 ); /*0x100b0dd37*/
  }
  v7 = a1[6]; /*0x100b0dd53*/
  if ( v7 ) /*0x100b0dd5a*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v3, 32 * v7, 8); /*0x100b0dd68*/
  v8 = a1[9]; /*0x100b0dd6d*/
  if ( v8 ) /*0x100b0dd74*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(a1[10], 16 * v8, 8); /*0x100b0dd8b*/
  return result; /*0x100b0dd83*/
}

// --- refs (callees/xrefs from decompile) ---
// 0x100001800  __RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc
