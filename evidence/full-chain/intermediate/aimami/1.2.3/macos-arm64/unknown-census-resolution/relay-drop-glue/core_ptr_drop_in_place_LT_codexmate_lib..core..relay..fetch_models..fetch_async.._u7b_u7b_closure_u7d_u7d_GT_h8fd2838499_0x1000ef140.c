// IDA Hex-Rays decompile evidence
// addr: 0x1000ef140
// cluster: relay
// purpose: unknown-census resolution sweep (2026-07-24), verify drop_in_place != business logic
//
double __fastcall core::ptr::drop_in_place$LT$codexmate_lib..core..relay..fetch_models..fetch_async..$u7b$$u7b$closure$u7d$$u7d$$GT$::h8fd2838499863f3d(
        __int64 a1,
        __int64 a2)
{
  int v2; // eax
  __int64 v3; // rsi
  double result; // xmm0_8

  v2 = *(unsigned __int8 *)(a1 + 209); /*0x1000ef14a*/
  if ( v2 == 3 || v2 == 4 ) /*0x1000ef159*/
  {
    core::ptr::drop_in_place$LT$codexmate_lib..core..relay..fetch_models..fetch_openai_async..$u7b$$u7b$closure$u7d$$u7d$$GT$::h1c25f68cb8af1655(a1 + 216); /*0x1000ef170*/
    if ( !_InterlockedDecrement64(*(volatile signed __int64 **)(a1 + 184)) ) /*0x1000ef17c*/
      alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::he53e89bcba3b87c6(a1 + 184, a2); /*0x1000ef189*/
    core::ptr::drop_in_place$LT$http..header..map..HeaderMap$GT$::hb91855b753871e5f(a1); /*0x1000ef191*/
    v3 = *(_QWORD *)(a1 + 160); /*0x1000ef196*/
    if ( v3 ) /*0x1000ef1a0*/
      return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(a1 + 168), v3, 1); /*0x1000ef1b2*/
  }
  return result; /*0x1000ef1ae*/
}

// --- refs (callees/xrefs from decompile) ---
// 0x1000f1610  __ZN4core3ptr110drop_in_place$LT$codexmate_lib..core..relay..fetch_models..fetch_openai_async..$u7b$$u7b$closure$u7d$$u7d$$GT$17h1c25f68cb8af1655E
// 0x100eeae30  __ZN5alloc4sync16Arc$LT$T$C$A$GT$9drop_slow17he53e89bcba3b87c6E
// 0x100123490  __ZN4core3ptr49drop_in_place$LT$http..header..map..HeaderMap$GT$17hb91855b753871e5fE_0
// 0x100001800  __RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc
