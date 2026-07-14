// mac 1.1.8 BACKEND-ONLY create_bootstrap_tray_menu node 0x1004f22a0 depth=2
// core3ptr67drop_in_place::ha31523a10c4e8151E_4
__int64 __fastcall core::ptr::drop_in_place$LT$codexmate_lib..core..relay..models..RelayState$GT$::ha31523a10c4e8151(
        _QWORD *a1)
{
  __int64 v2; // r13
  _QWORD *v3; // rdi
  __int64 v4; // r15
  __int64 v5; // r12

  v2 = a1[2] + 1LL; /*0x1004f22b9*/
  v3 = (_QWORD *)a1[1]; /*0x1004f22bc*/
  while ( v2 != 1 ) /*0x1004f22c4*/
  {
    --v2; /*0x1004f22cd*/
    core::ptr::drop_in_place$LT$codexmate_lib..core..relay..models..RelayProvider$GT$::h355c754b2c7bc68c(v3); /*0x1004f22d0*/
    v3 += 29; /*0x1004f22d5*/
  }
  if ( *a1 ) /*0x1004f22da*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004f22f1*/
  v4 = a1[5]; /*0x1004f22fa*/
  if ( v4 ) /*0x1004f2301*/
  {
    v5 = a1[4] + 8LL; /*0x1004f2303*/
    do /*0x1004f2317*/
    {
      if ( *(_QWORD *)(v5 - 8) ) /*0x1004f2319*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004f232c*/
      v5 += 24; /*0x1004f2310*/
      --v4; /*0x1004f2314*/
    }
    while ( v4 ); /*0x1004f2317*/
  }
  if ( a1[3] ) /*0x1004f2333*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004f234c*/
  if ( a1[6] ) /*0x1004f2351*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004f2363*/
  if ( a1[9] ) /*0x1004f2368*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004f237a*/
  if ( !__OFSUB__(-a1[12], 1) && a1[12] ) /*0x1004f2383*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004f2396*/
  if ( a1[16] ) /*0x1004f239b*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004f23b3*/
  if ( a1[19] ) /*0x1004f23b8*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004f23d0*/
  return core::ptr::drop_in_place$LT$core..option..Option$LT$codexmate_lib..core..relay..models..CodexRouteDiagnostic$GT$$GT$::h082e8dfa355a3af0(a1 + 22); /*0x1004f23e3*/
}