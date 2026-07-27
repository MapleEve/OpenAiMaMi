// IDA Hex-Rays decompile evidence
// addr: 0x100920d60
// cluster: relay
// purpose: unknown-census resolution sweep (2026-07-24), verify drop_in_place != business logic
//
double __fastcall core::ptr::drop_in_place$LT$core..result..Result$LT$codexmate_lib..core..relay..router_unlock_auth..RouterUnlockAuthMarker$C$serde_json..error..Error$GT$$GT$::h3d704d1da208c92d(
        _QWORD *a1)
{
  __int64 v1; // rbx
  double result; // xmm0_8
  __int64 v3; // rsi

  if ( __OFSUB__(-*a1, 1) ) /*0x100920d6d*/
  {
    v1 = a1[1]; /*0x100920d72*/
    core::ptr::drop_in_place$LT$serde_json..error..ErrorCode$GT$::h1f07389ad7e7b7dd(v1); /*0x100920d79*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v1, 40, 8); /*0x100920d8f*/
  }
  else
  {
    if ( *a1 ) /*0x100920d6a*/
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(a1[1], *a1, 1); /*0x100920da5*/
    v3 = a1[3]; /*0x100920dad*/
    if ( v3 ) /*0x100920db4*/
      return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(a1[4], v3, 1); /*0x100920dc3*/
  }
  return result; /*0x100920d8b*/
}

// --- refs (callees/xrefs from decompile) ---
// 0x100923eb0  __ZN4core3ptr49drop_in_place$LT$serde_json..error..ErrorCode$GT$17h1f07389ad7e7b7ddE
// 0x100001800  __RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc
