// mac 1.1.8 BACKEND-ONLY perform_switch_payload_with_restart node 0x1004ebcc0 depth=1
// core3ptr112drop_in_place::ha90154eee21230cbE_2
__int64 __fastcall core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreEnvelope$LT$codexmate_lib..core..models..SwitchPayload$GT$$GT$::ha90154eee21230cb(
        _QWORD *a1)
{
  __int64 v1; // r15
  __int64 v2; // r12

  if ( a1[49] ) /*0x1004ebcce*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004ebce6*/
  if ( a1[52] ) /*0x1004ebceb*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004ebd03*/
  v1 = a1[57]; /*0x1004ebd0f*/
  if ( v1 ) /*0x1004ebd19*/
  {
    v2 = a1[56] + 32LL; /*0x1004ebd1b*/
    do /*0x1004ebd37*/
    {
      if ( *(_QWORD *)(v2 - 32) ) /*0x1004ebd39*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004ebd4d*/
      if ( *(_QWORD *)(v2 - 8) ) /*0x1004ebd52*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004ebd65*/
      v2 += 48; /*0x1004ebd30*/
      --v1; /*0x1004ebd34*/
    }
    while ( v1 ); /*0x1004ebd37*/
  }
  if ( a1[55] ) /*0x1004ebd6c*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004ebd88*/
  if ( !__OFSUB__(-a1[45], 1) && a1[45] ) /*0x1004ebd94*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004ebdaa*/
  if ( a1[42] ) /*0x1004ebdaf*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004ebdc7*/
  return core::ptr::drop_in_place$LT$codexmate_lib..core..models..AccountSummary$GT$::h0411cf73490bf424(a1); /*0x1004ebdcf*/
}