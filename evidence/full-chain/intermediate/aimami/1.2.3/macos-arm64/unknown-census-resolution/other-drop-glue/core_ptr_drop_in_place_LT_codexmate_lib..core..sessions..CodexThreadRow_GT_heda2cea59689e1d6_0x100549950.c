// IDA Hex-Rays decompile evidence
// addr: 0x100549950
// cluster: other
// purpose: unknown-census resolution sweep (2026-07-24), verify drop_in_place != business logic
//
double __fastcall core::ptr::drop_in_place$LT$codexmate_lib..core..sessions..CodexThreadRow$GT$::heda2cea59689e1d6(
        _QWORD *a1)
{
  double result; // xmm0_8
  __int64 v2; // rsi
  __int64 v3; // rsi
  __int64 v4; // rsi
  __int64 v5; // rsi
  __int64 v6; // rsi
  __int64 v7; // rsi

  if ( *a1 ) /*0x10054995a*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(a1[1], *a1, 1); /*0x10054996b*/
  if ( !__OFSUB__(-a1[9], 1) && a1[9] ) /*0x10054997e*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(a1[10], a1[9], 1); /*0x100549991*/
  v2 = a1[12]; /*0x100549996*/
  if ( v2 != 0x8000000000000000LL && v2 ) /*0x1005499a2*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(a1[13], v2, 1); /*0x1005499ad*/
  v3 = a1[3]; /*0x1005499b2*/
  if ( v3 ) /*0x1005499b9*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(a1[4], v3, 1); /*0x1005499c4*/
  v4 = a1[6]; /*0x1005499c9*/
  if ( v4 ) /*0x1005499d0*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(a1[7], v4, 1); /*0x1005499db*/
  v5 = a1[15]; /*0x1005499e0*/
  if ( v5 != 0x8000000000000000LL && v5 ) /*0x1005499ec*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(a1[16], v5, 1); /*0x1005499fa*/
  v6 = a1[18]; /*0x1005499ff*/
  if ( v6 != 0x8000000000000000LL && v6 ) /*0x100549a0e*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(a1[19], v6, 1); /*0x100549a1c*/
  v7 = a1[21]; /*0x100549a21*/
  if ( v7 != 0x8000000000000000LL ) /*0x100549a2b*/
  {
    if ( v7 ) /*0x100549a30*/
      return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(a1[22], v7, 1); /*0x100549a42*/
  }
  return result; /*0x100549a3e*/
}

// --- refs (callees/xrefs from decompile) ---
// 0x100001800  __RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc
