// IDA Hex-Rays decompile evidence
// addr: 0x10075af80
// cluster: other
// purpose: unknown-census resolution sweep (2026-07-24), verify drop_in_place != business logic
//
double __fastcall core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$std..sync..mpmc..counter..Counter$LT$std..sync..mpmc..array..Channel$LT$core..result..Result$LT$codexmate_lib..platform..voice_trigger_macos..TriggerBinding$C$alloc..string..String$GT$$GT$$GT$$GT$$GT$::h74f73a9360aa9e95(
        _QWORD *a1)
{
  __int64 v1; // rax
  __int64 v2; // r15
  __int64 v3; // r15

  v1 = a1[54]; /*0x10075af8e*/
  if ( v1 ) /*0x10075af98*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(a1[53], 72 * v1, 8); /*0x10075afae*/
  _$LT$std..sys..sync..mutex..pthread..Mutex$u20$as$u20$core..ops..drop..Drop$GT$::drop::hcc5545e7d5877829(a1 + 35); /*0x10075afbd*/
  v2 = a1[35]; /*0x10075afc2*/
  a1[35] = 0; /*0x10075afc6*/
  if ( v2 ) /*0x10075afd1*/
  {
    _$LT$std..sys..pal..unix..sync..mutex..Mutex$u20$as$u20$core..ops..drop..Drop$GT$::drop::hd703c6747fbb3b28(v2); /*0x10075afd6*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v2, 64, 8); /*0x10075afe8*/
  }
  core::ptr::drop_in_place$LT$std..sync..mpmc..waker..Waker$GT$::h3ca8ba1628a1481f(a1 + 37); /*0x10075aff4*/
  _$LT$std..sys..sync..mutex..pthread..Mutex$u20$as$u20$core..ops..drop..Drop$GT$::drop::hcc5545e7d5877829(a1 + 44); /*0x10075b003*/
  v3 = a1[44]; /*0x10075b008*/
  a1[44] = 0; /*0x10075b00c*/
  if ( v3 ) /*0x10075b017*/
  {
    _$LT$std..sys..pal..unix..sync..mutex..Mutex$u20$as$u20$core..ops..drop..Drop$GT$::drop::hd703c6747fbb3b28(v3); /*0x10075b01c*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v3, 64, 8); /*0x10075b02e*/
  }
  core::ptr::drop_in_place$LT$std..sync..mpmc..waker..Waker$GT$::h3ca8ba1628a1481f(a1 + 46); /*0x10075b03a*/
  return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(a1, 640, 128); /*0x10075b04c*/
}

// --- refs (callees/xrefs from decompile) ---
// 0x100001800  __RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc
// 0x1014421d0  __ZN79_$LT$std..sys..sync..mutex..pthread..Mutex$u20$as$u20$core..ops..drop..Drop$GT$4drop17hcc5545e7d5877829E
// 0x101442950  __ZN81_$LT$std..sys..pal..unix..sync..mutex..Mutex$u20$as$u20$core..ops..drop..Drop$GT$4drop17hd703c6747fbb3b28E
// 0x10075d8a0  __ZN4core3ptr50drop_in_place$LT$std..sync..mpmc..waker..Waker$GT$17h3ca8ba1628a1481fE
