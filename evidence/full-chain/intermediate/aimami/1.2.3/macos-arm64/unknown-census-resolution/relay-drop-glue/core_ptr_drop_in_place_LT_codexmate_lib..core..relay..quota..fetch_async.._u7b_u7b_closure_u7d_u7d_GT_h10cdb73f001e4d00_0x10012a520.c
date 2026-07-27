// IDA Hex-Rays decompile evidence
// addr: 0x10012a520
// cluster: relay
// purpose: unknown-census resolution sweep (2026-07-24), verify drop_in_place != business logic
//
double __fastcall core::ptr::drop_in_place$LT$codexmate_lib..core..relay..quota..fetch_async..$u7b$$u7b$closure$u7d$$u7d$$GT$::h10cdb73f001e4d00(
        __int64 a1)
{
  int v1; // eax
  __int64 v2; // rsi
  double result; // xmm0_8
  __int64 v4; // rsi

  v1 = *(unsigned __int8 *)(a1 + 241); /*0x10012a52a*/
  if ( v1 == 3 ) /*0x10012a534*/
  {
    core::ptr::drop_in_place$LT$codexmate_lib..core..relay..quota..fetch_official_provider..$u7b$$u7b$closure$u7d$$u7d$$GT$::h8a5bf6edf33013c9(a1 + 288); /*0x10012a587*/
    goto LABEL_9; /*0x10012a587*/
  }
  if ( v1 == 4 ) /*0x10012a539*/
  {
    core::ptr::drop_in_place$LT$codexmate_lib..core..relay..quota..fetch_newapi..$u7b$$u7b$closure$u7d$$u7d$$GT$::h6a102f4adceb3d26(a1 + 248); /*0x10012a572*/
LABEL_7:
    *(_BYTE *)(a1 + 240) = 0; /*0x10012a577*/
    goto LABEL_9; /*0x10012a57e*/
  }
  if ( v1 != 5 ) /*0x10012a53e*/
    return result; /*0x10012a53e*/
  core::ptr::drop_in_place$LT$codexmate_lib..core..relay..quota..fetch_newapi..$u7b$$u7b$closure$u7d$$u7d$$GT$::h6a102f4adceb3d26(a1 + 248); /*0x10012a54b*/
  if ( !__OFSUB__(0, *(_QWORD *)(a1 + 176)) ) /*0x10012a559*/
    goto LABEL_7; /*0x10012a559*/
  *(_BYTE *)(a1 + 240) = 0; /*0x10012a55b*/
  *(_BYTE *)(a1 + 240) = 0; /*0x10012a562*/
LABEL_9:
  v2 = *(_QWORD *)(a1 + 152); /*0x10012a58c*/
  if ( v2 ) /*0x10012a596*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(a1 + 160), v2, 1); /*0x10012a5a4*/
  if ( !_InterlockedDecrement64(*(volatile signed __int64 **)(a1 + 144)) ) /*0x10012a5b0*/
    alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::he53e89bcba3b87c6(a1 + 144, v2); /*0x10012a5bd*/
  core::ptr::drop_in_place$LT$http..header..map..HeaderMap$GT$::hb91855b753871e5f(a1); /*0x10012a5c5*/
  v4 = *(_QWORD *)(a1 + 120); /*0x10012a5ca*/
  if ( v4 ) /*0x10012a5d1*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(a1 + 128), v4, 1); /*0x10012a5e3*/
  return result; /*0x10012a5df*/
}

// --- refs (callees/xrefs from decompile) ---
// 0x1000f0f10  __ZN4core3ptr108drop_in_place$LT$codexmate_lib..core..relay..quota..fetch_official_provider..$u7b$$u7b$closure$u7d$$u7d$$GT$17h8a5bf6edf33013c9E
// 0x10012a720  __ZN4core3ptr97drop_in_place$LT$codexmate_lib..core..relay..quota..fetch_newapi..$u7b$$u7b$closure$u7d$$u7d$$GT$17h6a102f4adceb3d26E
// 0x100001800  __RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc
// 0x100eeae30  __ZN5alloc4sync16Arc$LT$T$C$A$GT$9drop_slow17he53e89bcba3b87c6E
// 0x100123490  __ZN4core3ptr49drop_in_place$LT$http..header..map..HeaderMap$GT$17hb91855b753871e5fE_0
