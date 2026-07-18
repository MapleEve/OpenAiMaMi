// mac 1.2.2 NEW codexmate_lib4core12debug_bundle10auth_shape 0x1005e6e40 d=1
__int64 __fastcall core::ptr::drop_in_place$LT$codexmate_lib..core..auth..AuthFile$GT$::h2d413a1c8462ab70(_QWORD *a1)
{
  __int64 v1; // rsi
  __int64 result; // rax
  __int64 v3; // rsi

  if ( !__OFSUB__(-*a1, 1) && *a1 ) /*0x1005e6e57*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1005e6e6a*/
  v1 = a1[3]; /*0x1005e6e6f*/
  if ( v1 != 0x8000000000000000LL && v1 ) /*0x1005e6e7b*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1005e6e86*/
  result = core::ptr::drop_in_place$LT$codexmate_lib..core..auth..AuthTokens$GT$::h3603f704f5c2636a(a1 + 6); /*0x1005e6e8f*/
  v3 = a1[18]; /*0x1005e6e94*/
  if ( v3 != 0x8000000000000000LL ) /*0x1005e6e9e*/
  {
    if ( v3 ) /*0x1005e6ea3*/
      return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1005e6eb5*/
  }
  return result; /*0x1005e6eb1*/
}