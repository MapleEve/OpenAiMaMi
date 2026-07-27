// IDA Hex-Rays decompile evidence
// addr: 0x100921f00
// cluster: relay
// purpose: unknown-census resolution sweep (2026-07-24), verify drop_in_place != business logic
//
__int64 __fastcall core::ptr::drop_in_place$LT$alloc..sync..ArcInner$LT$std..sync..poison..mutex..Mutex$LT$std..collections..hash..map..HashMap$LT$alloc..string..String$C$codexmate_lib..core..relay..breaker..BreakerState$GT$$GT$$GT$$GT$::h691578c316d5d4c2(
        __int64 a1)
{
  __int64 v1; // r15

  _$LT$std..sys..sync..mutex..pthread..Mutex$u20$as$u20$core..ops..drop..Drop$GT$::drop::hcc5545e7d5877829(a1 + 16); /*0x100921f15*/
  v1 = *(_QWORD *)(a1 + 16); /*0x100921f1a*/
  *(_QWORD *)(a1 + 16) = 0; /*0x100921f1e*/
  if ( v1 ) /*0x100921f29*/
  {
    _$LT$std..sys..pal..unix..sync..mutex..Mutex$u20$as$u20$core..ops..drop..Drop$GT$::drop::hd703c6747fbb3b28(v1); /*0x100921f2e*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v1, 64, 8); /*0x100921f40*/
  }
  return _$LT$hashbrown..raw..RawTable$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hdd2d1fb659f10695(a1 + 32); /*0x100921f4c*/
}

// --- refs (callees/xrefs from decompile) ---
// 0x1014421d0  __ZN79_$LT$std..sys..sync..mutex..pthread..Mutex$u20$as$u20$core..ops..drop..Drop$GT$4drop17hcc5545e7d5877829E
// 0x101442950  __ZN81_$LT$std..sys..pal..unix..sync..mutex..Mutex$u20$as$u20$core..ops..drop..Drop$GT$4drop17hd703c6747fbb3b28E
// 0x100001800  __RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc
// 0x100a4f1d0  __ZN79_$LT$hashbrown..raw..RawTable$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$4drop17hdd2d1fb659f10695E
