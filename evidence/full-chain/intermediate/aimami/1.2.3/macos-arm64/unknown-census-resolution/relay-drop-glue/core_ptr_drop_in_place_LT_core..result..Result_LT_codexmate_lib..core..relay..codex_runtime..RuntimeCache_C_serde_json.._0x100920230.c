// IDA Hex-Rays decompile evidence
// addr: 0x100920230
// cluster: relay
// purpose: unknown-census resolution sweep (2026-07-24), verify drop_in_place != business logic
//
double __fastcall core::ptr::drop_in_place$LT$core..result..Result$LT$codexmate_lib..core..relay..codex_runtime..RuntimeCache$C$serde_json..error..Error$GT$$GT$::h26b371aa095f2d08(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rsi
  __int64 v4; // rdx
  double result; // xmm0_8

  if ( __OFSUB__(-a1, 1) ) /*0x100920240*/
  {
    core::ptr::drop_in_place$LT$serde_json..error..ErrorCode$GT$::h1f07389ad7e7b7dd(a2); /*0x10092024c*/
    v3 = 40; /*0x100920251*/
    v4 = 8; /*0x100920256*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(a2, v3, v4); /*0x10092026c*/
  }
  if ( a1 ) /*0x100920242*/
  {
    v3 = a1; /*0x10092025d*/
    v4 = 1; /*0x100920260*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(a2, v3, v4); /*0x100920260*/
  }
  return result; /*0x100920244*/
}

// --- refs (callees/xrefs from decompile) ---
// 0x100923eb0  __ZN4core3ptr49drop_in_place$LT$serde_json..error..ErrorCode$GT$17h1f07389ad7e7b7ddE
// 0x100001800  __RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc
