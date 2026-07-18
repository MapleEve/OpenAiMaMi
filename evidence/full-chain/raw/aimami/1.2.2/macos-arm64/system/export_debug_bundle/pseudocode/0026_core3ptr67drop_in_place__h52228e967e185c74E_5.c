// mac 1.2.2 NEW export_debug_bundle 0x100888750 d=1
__int64 __fastcall core::ptr::drop_in_place$LT$codexmate_lib..core..relay..models..RelayState$GT$::h52228e967e185c74(
        _QWORD *a1)
{
  __int64 v2; // r13
  __int64 v3; // rdi
  __int64 v4; // r15
  __int64 v5; // r12

  v2 = a1[2] + 1LL; /*0x100888769*/
  v3 = a1[1]; /*0x10088876c*/
  while ( v2 != 1 ) /*0x100888774*/
  {
    --v2; /*0x10088877d*/
    core::ptr::drop_in_place$LT$codexmate_lib..core..relay..models..RelayProvider$GT$::h8aa23015b82532e6(v3); /*0x100888780*/
    v3 += 232; /*0x100888785*/
  }
  if ( *a1 ) /*0x10088878a*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1008887a1*/
  v4 = a1[5]; /*0x1008887aa*/
  if ( v4 ) /*0x1008887b1*/
  {
    v5 = a1[4] + 8LL; /*0x1008887b3*/
    do /*0x1008887c7*/
    {
      if ( *(_QWORD *)(v5 - 8) ) /*0x1008887c9*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1008887dc*/
      v5 += 24; /*0x1008887c0*/
      --v4; /*0x1008887c4*/
    }
    while ( v4 ); /*0x1008887c7*/
  }
  if ( a1[3] ) /*0x1008887e3*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1008887fc*/
  if ( a1[6] ) /*0x100888801*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100888813*/
  if ( a1[9] ) /*0x100888818*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10088882a*/
  if ( !__OFSUB__(-a1[12], 1) && a1[12] ) /*0x100888833*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100888846*/
  return core::ptr::drop_in_place$LT$core..option..Option$LT$codexmate_lib..core..relay..models..CodexRouteDiagnostic$GT$$GT$::h25c58beb96e27453(a1 + 16); /*0x100888856*/
}