// IDA Hex-Rays decompile evidence
// addr: 0x100549c80
// cluster: other
// purpose: unknown-census resolution sweep (2026-07-24), verify drop_in_place != business logic
//
double __fastcall core::ptr::drop_in_place$LT$codexmate_lib..core..debug_bundle..BundleContext$GT$::h8df075cc65ca5815(
        _QWORD *a1)
{
  __int64 v1; // r14
  _QWORD *v2; // r15
  __int64 v3; // rsi
  double result; // xmm0_8
  __int64 v5; // rax
  __int64 v6; // rsi
  __int64 v7; // rax
  __int64 v8; // r15
  _QWORD *v9; // r12
  __int64 v10; // rsi
  __int64 v11; // rsi
  __int64 v12; // r15
  _QWORD *v13; // r12
  __int64 v14; // rsi
  __int64 v15; // rax
  __int64 v16; // rsi
  __int64 v17; // rsi
  __int64 v18; // rsi
  __int64 v19; // rsi

  core::ptr::drop_in_place$LT$codexmate_lib..platform..paths..CodexPaths$GT$::hc0ff5575f779a5d8(a1); /*0x100549c8e*/
  v1 = a1[95]; /*0x100549c93*/
  if ( v1 ) /*0x100549c9d*/
  {
    v2 = (_QWORD *)(a1[94] + 8LL); /*0x100549ca6*/
    do /*0x100549cb7*/
    {
      v3 = *(v2 - 1); /*0x100549cb9*/
      if ( v3 ) /*0x100549cc0*/
        result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v2, v3, 1); /*0x100549cca*/
      v2 += 3; /*0x100549cb0*/
      --v1; /*0x100549cb4*/
    }
    while ( v1 ); /*0x100549cb7*/
  }
  v5 = a1[93]; /*0x100549cd1*/
  if ( v5 ) /*0x100549cdb*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(a1[94], 24 * v5, 8); /*0x100549cf1*/
  if ( !__OFSUB__(-a1[143], 1) && a1[143] ) /*0x100549d07*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(a1[144], a1[143], 1); /*0x100549d1d*/
  v6 = a1[146]; /*0x100549d22*/
  if ( v6 != 0x8000000000000000LL && v6 ) /*0x100549d31*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(a1[147], v6, 1); /*0x100549d3f*/
  core::ptr::drop_in_place$LT$codexmate_lib..core..relay..models..RelayState$GT$::hb48d2dacecbefd00(a1 + 96); /*0x100549d4b*/
  _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::he2770c63d3b041ed(a1 + 133); /*0x100549d57*/
  v7 = a1[133]; /*0x100549d5c*/
  if ( v7 ) /*0x100549d66*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(a1[134], 104 * v7, 8); /*0x100549d78*/
  v8 = a1[139]; /*0x100549d7d*/
  if ( v8 ) /*0x100549d87*/
  {
    v9 = (_QWORD *)(a1[138] + 8LL); /*0x100549d90*/
    do /*0x100549da7*/
    {
      v10 = *(v9 - 1); /*0x100549da9*/
      if ( v10 ) /*0x100549db1*/
        result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v9, v10, 1); /*0x100549dbc*/
      v9 += 4; /*0x100549da0*/
      --v8; /*0x100549da4*/
    }
    while ( v8 ); /*0x100549da7*/
  }
  v11 = a1[137]; /*0x100549dc3*/
  if ( v11 ) /*0x100549dcd*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(a1[138], 32 * v11, 8); /*0x100549ddf*/
  v12 = a1[142]; /*0x100549de4*/
  if ( v12 ) /*0x100549dee*/
  {
    v13 = (_QWORD *)(a1[141] + 8LL); /*0x100549df7*/
    do /*0x100549e07*/
    {
      v14 = *(v13 - 1); /*0x100549e09*/
      if ( v14 ) /*0x100549e11*/
        result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v13, v14, 1); /*0x100549e1c*/
      v13 += 3; /*0x100549e00*/
      --v12; /*0x100549e04*/
    }
    while ( v12 ); /*0x100549e07*/
  }
  v15 = a1[140]; /*0x100549e23*/
  if ( v15 ) /*0x100549e2d*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(a1[141], 24 * v15, 8); /*0x100549e43*/
  v16 = a1[149]; /*0x100549e48*/
  if ( v16 != 0x8000000000000000LL ) /*0x100549e52*/
  {
    if ( v16 ) /*0x100549e57*/
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(a1[150], v16, 1); /*0x100549e65*/
    v17 = a1[152]; /*0x100549e6a*/
    if ( v17 != 0x8000000000000000LL && v17 ) /*0x100549e79*/
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(a1[153], v17, 1); /*0x100549e87*/
  }
  v18 = a1[157]; /*0x100549e8c*/
  if ( v18 != 0x8000000000000000LL ) /*0x100549e96*/
  {
    if ( v18 ) /*0x100549e9b*/
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(a1[158], v18, 1); /*0x100549ea9*/
    v19 = a1[160]; /*0x100549eae*/
    if ( v19 != 0x8000000000000000LL ) /*0x100549eb8*/
    {
      if ( v19 ) /*0x100549ebd*/
        return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(a1[161], v19, 1); /*0x100549ed3*/
    }
  }
  return result; /*0x100549ecb*/
}

// --- refs (callees/xrefs from decompile) ---
// 0x1005494f0  __ZN4core3ptr63drop_in_place$LT$codexmate_lib..platform..paths..CodexPaths$GT$17hc0ff5575f779a5d8E_4
// 0x100001800  __RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc
// 0x100549a50  __ZN4core3ptr67drop_in_place$LT$codexmate_lib..core..relay..models..RelayState$GT$17hb48d2dacecbefd00E_5
// 0x10080f9d0  __ZN70_$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$4drop17he2770c63d3b041edE
