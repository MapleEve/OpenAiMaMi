// mac 1.1.8 PROXY/BOOTSTRAP-BACKEND RelayManager_bootstrap node 0x1005f0940 depth=1
__int64 __fastcall core::ptr::drop_in_place$LT$codexmate_lib..core..relay..models..RelayState$GT$::ha31523a10c4e8151(
        _QWORD *a1,
        double a2)
{
  __int64 v3; // r13
  __int64 v4; // rdi
  __int64 v5; // r15
  __int64 v6; // r12

  v3 = a1[2] + 1LL; /*0x1005f0959*/
  v4 = a1[1]; /*0x1005f095c*/
  while ( v3 != 1 ) /*0x1005f0964*/
  {
    --v3; /*0x1005f096d*/
    core::ptr::drop_in_place$LT$codexmate_lib..core..relay..models..RelayProvider$GT$::h355c754b2c7bc68c(a2); /*0x1005f0970*/
    v4 += 232; /*0x1005f0975*/
  }
  if ( *a1 ) /*0x1005f097a*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1005f0991*/
  v5 = a1[5]; /*0x1005f099a*/
  if ( v5 ) /*0x1005f09a1*/
  {
    v6 = a1[4] + 8LL; /*0x1005f09a3*/
    do /*0x1005f09b7*/
    {
      if ( *(_QWORD *)(v6 - 8) ) /*0x1005f09b9*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1005f09cc*/
      v6 += 24; /*0x1005f09b0*/
      --v5; /*0x1005f09b4*/
    }
    while ( v5 ); /*0x1005f09b7*/
  }
  if ( a1[3] ) /*0x1005f09d3*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1005f09ec*/
  if ( a1[6] ) /*0x1005f09f1*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1005f0a03*/
  if ( a1[9] ) /*0x1005f0a08*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1005f0a1a*/
  if ( !__OFSUB__(-a1[12], 1) && a1[12] ) /*0x1005f0a23*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1005f0a36*/
  if ( a1[16] ) /*0x1005f0a3b*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1005f0a53*/
  if ( a1[19] ) /*0x1005f0a58*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1005f0a70*/
  return core::ptr::drop_in_place$LT$core..option..Option$LT$codexmate_lib..core..relay..models..CodexRouteDiagnostic$GT$$GT$::h082e8dfa355a3af0(a1 + 22); /*0x1005f0a83*/
}