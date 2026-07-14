// mac 1.1.8 activate_relay_provider node va=0x1005f13b0 depth=2
// core3ptr70drop_in_place::h355c754b2c7bc68cE_5
__int64 __fastcall core::ptr::drop_in_place$LT$codexmate_lib..core..relay..models..RelayProvider$GT$::h355c754b2c7bc68c(
        _QWORD *a1)
{
  __int64 v1; // r15
  __int64 v2; // r12
  __int64 result; // rax

  if ( *a1 ) /*0x1005f13be*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1005f13cf*/
  if ( a1[3] ) /*0x1005f13d4*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1005f13e6*/
  if ( a1[6] ) /*0x1005f13eb*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1005f13fd*/
  if ( a1[9] ) /*0x1005f1402*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1005f1414*/
  if ( a1[12] ) /*0x1005f1419*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1005f142b*/
  v1 = a1[17]; /*0x1005f1437*/
  if ( v1 ) /*0x1005f1441*/
  {
    v2 = a1[16] + 8LL; /*0x1005f1443*/
    do /*0x1005f1457*/
    {
      if ( *(_QWORD *)(v2 - 8) ) /*0x1005f1459*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1005f146c*/
      v2 += 32; /*0x1005f1450*/
      --v1; /*0x1005f1454*/
    }
    while ( v1 ); /*0x1005f1457*/
  }
  if ( a1[15] ) /*0x1005f1473*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1005f1488*/
  if ( a1[18] ) /*0x1005f148d*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1005f14a5*/
  result = -a1[21]; /*0x1005f14b4*/
  if ( !__OFSUB__(result, 1) ) /*0x1005f14b7*/
  {
    if ( a1[21] ) /*0x1005f14b1*/
      return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1005f14cf*/
  }
  return result; /*0x1005f14c7*/
}