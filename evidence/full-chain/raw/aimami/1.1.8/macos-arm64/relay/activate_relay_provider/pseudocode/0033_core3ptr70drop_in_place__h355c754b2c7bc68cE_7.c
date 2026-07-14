// mac 1.1.8 activate_relay_provider node va=0x1006e22b0 depth=3
// core3ptr70drop_in_place::h355c754b2c7bc68cE_7
__int64 __fastcall core::ptr::drop_in_place$LT$codexmate_lib..core..relay..models..RelayProvider$GT$::h355c754b2c7bc68c(
        _QWORD *a1)
{
  __int64 v1; // r15
  __int64 v2; // r12
  __int64 result; // rax

  if ( *a1 ) /*0x1006e22be*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1006e22cf*/
  if ( a1[3] ) /*0x1006e22d4*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1006e22e6*/
  if ( a1[6] ) /*0x1006e22eb*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1006e22fd*/
  if ( a1[9] ) /*0x1006e2302*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1006e2314*/
  if ( a1[12] ) /*0x1006e2319*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1006e232b*/
  v1 = a1[17]; /*0x1006e2337*/
  if ( v1 ) /*0x1006e2341*/
  {
    v2 = a1[16] + 8LL; /*0x1006e2343*/
    do /*0x1006e2357*/
    {
      if ( *(_QWORD *)(v2 - 8) ) /*0x1006e2359*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1006e236c*/
      v2 += 32; /*0x1006e2350*/
      --v1; /*0x1006e2354*/
    }
    while ( v1 ); /*0x1006e2357*/
  }
  if ( a1[15] ) /*0x1006e2373*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1006e2388*/
  if ( a1[18] ) /*0x1006e238d*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1006e23a5*/
  result = -a1[21]; /*0x1006e23b4*/
  if ( !__OFSUB__(result, 1) ) /*0x1006e23b7*/
  {
    if ( a1[21] ) /*0x1006e23b1*/
      return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1006e23cf*/
  }
  return result; /*0x1006e23c7*/
}