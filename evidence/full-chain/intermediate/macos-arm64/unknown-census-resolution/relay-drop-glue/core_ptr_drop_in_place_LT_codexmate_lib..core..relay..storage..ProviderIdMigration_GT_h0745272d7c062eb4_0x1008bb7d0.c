// IDA Hex-Rays decompile evidence
// addr: 0x1008bb7d0
// cluster: relay
// purpose: unknown-census resolution sweep (2026-07-24), verify drop_in_place != business logic
//
double __fastcall core::ptr::drop_in_place$LT$codexmate_lib..core..relay..storage..ProviderIdMigration$GT$::h0745272d7c062eb4(
        _QWORD *a1)
{
  double result; // xmm0_8
  __int64 v2; // rsi

  if ( *a1 ) /*0x1008bb7d9*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(a1[1], *a1, 1); /*0x1008bb7ea*/
  v2 = a1[3]; /*0x1008bb7ef*/
  if ( v2 ) /*0x1008bb7f6*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(a1[4], v2, 1); /*0x1008bb807*/
  return result; /*0x1008bb805*/
}

// --- refs (callees/xrefs from decompile) ---
// 0x100001800  __RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc
