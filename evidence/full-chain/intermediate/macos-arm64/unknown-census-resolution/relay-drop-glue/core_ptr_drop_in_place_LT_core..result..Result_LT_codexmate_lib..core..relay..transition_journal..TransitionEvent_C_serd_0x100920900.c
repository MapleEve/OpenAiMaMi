// IDA Hex-Rays decompile evidence
// addr: 0x100920900
// cluster: relay
// purpose: unknown-census resolution sweep (2026-07-24), verify drop_in_place != business logic
//
double __fastcall core::ptr::drop_in_place$LT$core..result..Result$LT$codexmate_lib..core..relay..transition_journal..TransitionEvent$C$serde_json..error..Error$GT$$GT$::ha928619ebdb5ca66(
        _QWORD *a1)
{
  __int64 v1; // rbx
  double result; // xmm0_8
  __int64 v3; // rsi

  if ( __OFSUB__(-*a1, 1) ) /*0x10092090d*/
  {
    v1 = a1[1]; /*0x100920912*/
    core::ptr::drop_in_place$LT$serde_json..error..ErrorCode$GT$::h1f07389ad7e7b7dd(v1); /*0x100920919*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v1, 40, 8); /*0x10092092f*/
  }
  else
  {
    if ( *a1 ) /*0x10092090a*/
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(a1[1], *a1, 1); /*0x10092094f*/
    v3 = a1[3]; /*0x100920957*/
    if ( v3 != 0x8000000000000000LL ) /*0x10092095e*/
    {
      if ( v3 ) /*0x100920963*/
        return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(a1[4], v3, 1); /*0x100920972*/
    }
  }
  return result; /*0x10092092b*/
}

// --- refs (callees/xrefs from decompile) ---
// 0x100923eb0  __ZN4core3ptr49drop_in_place$LT$serde_json..error..ErrorCode$GT$17h1f07389ad7e7b7ddE
// 0x100001800  __RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc
