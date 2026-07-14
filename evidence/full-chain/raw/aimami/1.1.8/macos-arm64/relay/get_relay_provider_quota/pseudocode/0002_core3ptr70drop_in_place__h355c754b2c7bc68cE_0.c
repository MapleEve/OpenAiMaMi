// mac 1.1.8 get_relay_provider_quota node va=0x1000d2310 depth=1
// core3ptr70drop_in_place::h355c754b2c7bc68cE_0
__int64 __fastcall core::ptr::drop_in_place$LT$codexmate_lib..core..relay..models..RelayProvider$GT$::h355c754b2c7bc68c(
        _QWORD *a1)
{
  __int64 v1; // r15
  __int64 v2; // r12
  __int64 result; // rax

  if ( *a1 ) /*0x1000d231e*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1000d232f*/
  if ( a1[3] ) /*0x1000d2334*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1000d2346*/
  if ( a1[6] ) /*0x1000d234b*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1000d235d*/
  if ( a1[9] ) /*0x1000d2362*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1000d2374*/
  if ( a1[12] ) /*0x1000d2379*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1000d238b*/
  v1 = a1[17]; /*0x1000d2397*/
  if ( v1 ) /*0x1000d23a1*/
  {
    v2 = a1[16] + 8LL; /*0x1000d23a3*/
    do /*0x1000d23b7*/
    {
      if ( *(_QWORD *)(v2 - 8) ) /*0x1000d23b9*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1000d23cc*/
      v2 += 32; /*0x1000d23b0*/
      --v1; /*0x1000d23b4*/
    }
    while ( v1 ); /*0x1000d23b7*/
  }
  if ( a1[15] ) /*0x1000d23d3*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1000d23e8*/
  if ( a1[18] ) /*0x1000d23ed*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1000d2405*/
  result = -a1[21]; /*0x1000d2414*/
  if ( !__OFSUB__(result, 1) ) /*0x1000d2417*/
  {
    if ( a1[21] ) /*0x1000d2411*/
      return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1000d242f*/
  }
  return result; /*0x1000d2427*/
}