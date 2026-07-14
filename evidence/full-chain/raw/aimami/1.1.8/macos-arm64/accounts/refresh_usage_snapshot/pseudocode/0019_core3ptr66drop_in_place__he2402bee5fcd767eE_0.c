// mac 1.1.8 refresh_usage_snapshot node va=0x1004f19c0 depth=2
// core3ptr66drop_in_place::he2402bee5fcd767eE_0
__int64 __fastcall core::ptr::drop_in_place$LT$codexmate_lib..core..models..AppStatusPayload$GT$::he2402bee5fcd767e(
        __int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rsi
  __int64 v3; // rsi

  core::ptr::drop_in_place$LT$codexmate_lib..core..models..AppPathState$GT$::hb772a699ef9b33a6(a1 + 336); /*0x1004f19d1*/
  result = -*(_QWORD *)(a1 + 552); /*0x1004f19e0*/
  if ( !__OFSUB__(result, 1) && *(_QWORD *)(a1 + 552) ) /*0x1004f19dd*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004f19f3*/
  if ( *(_DWORD *)a1 != 2 ) /*0x1004f19fb*/
    result = core::ptr::drop_in_place$LT$codexmate_lib..core..models..AccountSummary$GT$::h0411cf73490bf424(a1); /*0x1004f1a00*/
  if ( *(_QWORD *)(a1 + 512) ) /*0x1004f1a0f*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004f1a27*/
  v2 = *(_QWORD *)(a1 + 576); /*0x1004f1a2c*/
  if ( v2 != 0x8000000000000000LL && v2 ) /*0x1004f1a3b*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004f1a49*/
  v3 = *(_QWORD *)(a1 + 608); /*0x1004f1a4e*/
  if ( v3 != 0x8000000000000000LL ) /*0x1004f1a58*/
  {
    if ( v3 ) /*0x1004f1a5d*/
      return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004f1a6f*/
  }
  return result; /*0x1004f1a6b*/
}