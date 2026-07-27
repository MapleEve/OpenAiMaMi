// IDA Hex-Rays decompile evidence
// addr: 0x100b0b0d0
// cluster: relay
// purpose: unknown-census resolution sweep (2026-07-24), verify drop_in_place != business logic
//
double __fastcall core::ptr::drop_in_place$LT$core..option..Option$LT$codexmate_lib..core..relay..translator..stream..ThinkingItemState$GT$$GT$::he67aff41b9be3ffd(
        _QWORD *a1)
{
  double result; // xmm0_8
  __int64 v2; // rsi
  __int64 v3; // rsi
  __int64 v4; // rsi

  if ( !__OFSUB__(-*a1, 1) ) /*0x100b0b0df*/
  {
    if ( *a1 ) /*0x100b0b0d9*/
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(a1[1], *a1, 1); /*0x100b0b0ef*/
    v2 = a1[3]; /*0x100b0b0f4*/
    if ( v2 ) /*0x100b0b0fb*/
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(a1[4], v2, 1); /*0x100b0b106*/
    v3 = a1[6]; /*0x100b0b10b*/
    if ( v3 ) /*0x100b0b112*/
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(a1[7], v3, 1); /*0x100b0b11d*/
    v4 = a1[9]; /*0x100b0b122*/
    if ( v4 ) /*0x100b0b129*/
      return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(a1[10], v4, 1); /*0x100b0b13a*/
  }
  return result; /*0x100b0b138*/
}

// --- refs (callees/xrefs from decompile) ---
// 0x100001800  __RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc
