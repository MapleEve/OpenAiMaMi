// mac 1.1.8 BACKEND-ONLY perform_switch_payload_with_restart node 0x1004f3f70 depth=1
// core3ptr75drop_in_place
__int64 __fastcall core::ptr::drop_in_place$LT$codexmate_lib..commands..accounts..SwitchRollbackState$GT$::h833f8bb42ee0201e(
        _QWORD *a1)
{
  __int64 result; // rax
  __int64 v2; // rsi
  __int64 v3; // rsi
  __int64 v4; // rsi

  if ( *a1 ) /*0x1004f3f7a*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004f3f8b*/
  result = -a1[3]; /*0x1004f3f97*/
  if ( !__OFSUB__(result, 1) && a1[3] ) /*0x1004f3f94*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004f3fa7*/
  if ( a1[6] ) /*0x1004f3fb6*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004f3fc8*/
  v2 = a1[9]; /*0x1004f3fcd*/
  if ( v2 != 0x8000000000000000LL && v2 ) /*0x1004f3fd9*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004f3fe4*/
  if ( a1[12] ) /*0x1004f3fe9*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004f3ffb*/
  v3 = a1[15]; /*0x1004f4000*/
  if ( v3 != 0x8000000000000000LL && v3 ) /*0x1004f400c*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004f401a*/
  if ( a1[18] ) /*0x1004f401f*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004f4037*/
  v4 = a1[21]; /*0x1004f403c*/
  if ( v4 != 0x8000000000000000LL ) /*0x1004f4046*/
  {
    if ( v4 ) /*0x1004f404b*/
      return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004f405d*/
  }
  return result; /*0x1004f4059*/
}