// __ZN13codexmate_lib4core5relay18router_unlock_auth27has_usable_real_oauth_login @ 0x10056cf10 | 1.2.4 NEW-delta
__int64 __fastcall codexmate_lib::core::relay::router_unlock_auth::has_usable_real_oauth_login::h19f0ddaf8bcca090(
        __int64 a1)
{
  unsigned int v1; // ebx
  _QWORD __src[22]; // [rsp+0h] [rbp-170h] BYREF
  _QWORD __dst[24]; // [rsp+B0h] [rbp-C0h] BYREF

  codexmate_lib::core::auth::load_auth_file::h9deb6ed1cc224e90(__src, *(_QWORD *)(a1 + 32), *(_QWORD *)(a1 + 40)); /*0x10056cf37*/
  if ( __src[0] == 0x8000000000000001LL ) /*0x10056cf47*/
  {
    core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::hd9449ef6f49a72b3(&__src[1]); /*0x10056cf50*/
    return 0; /*0x10056cf55*/
  }
  else
  {
    memcpy(__dst, __src, 0xB0u); /*0x10056cf72*/
    v1 = codexmate_lib::core::relay::router_unlock_auth::auth_is_usable_real_oauth::h6e7e553ec9b7fa62(__dst); /*0x10056cf7f*/
    if ( __dst[0] != 0x8000000000000000LL && __dst[0] ) /*0x10056cf90*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[1], __dst[0], 1); /*0x10056cf9e*/
    if ( __dst[3] != 0x8000000000000000LL && __dst[3] ) /*0x10056cfb2*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[4], __dst[3], 1); /*0x10056cfc0*/
    if ( __dst[6] != 0x8000000000000000LL && __dst[6] ) /*0x10056cfd4*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[7], __dst[6], 1); /*0x10056cfe2*/
    if ( __dst[9] != 0x8000000000000000LL && __dst[9] ) /*0x10056cff3*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[10], __dst[9], 1); /*0x10056cffe*/
    if ( __dst[12] != 0x8000000000000000LL && __dst[12] ) /*0x10056d00f*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[13], __dst[12], 1); /*0x10056d01a*/
    if ( __dst[15] != 0x8000000000000000LL && __dst[15] ) /*0x10056d02b*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[16], __dst[15], 1); /*0x10056d036*/
    if ( __dst[18] != 0x8000000000000000LL && __dst[18] ) /*0x10056d047*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[19], __dst[18], 1); /*0x10056d052*/
  }
  return v1; /*0x10056d059*/
}