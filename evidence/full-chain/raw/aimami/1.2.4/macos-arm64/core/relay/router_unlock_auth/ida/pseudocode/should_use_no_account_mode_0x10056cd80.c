// __ZN13codexmate_lib4core5relay18router_unlock_auth26should_use_no_account_mode @ 0x10056cd80 | 1.2.4 NEW-delta
char __fastcall codexmate_lib::core::relay::router_unlock_auth::should_use_no_account_mode::h13335b2659e146b3(
        __int64 a1,
        int a2)
{
  char result; // al
  char v3; // r14
  _QWORD __src[22]; // [rsp+8h] [rbp-178h] BYREF
  _QWORD __dst[25]; // [rsp+B8h] [rbp-C8h] BYREF

  result = 1; /*0x10056cd90*/
  if ( !a2 ) /*0x10056cd94*/
  {
    codexmate_lib::core::auth::load_auth_file::h9deb6ed1cc224e90(__src, *(_QWORD *)(a1 + 32), *(_QWORD *)(a1 + 40)); /*0x10056cdb6*/
    if ( __src[0] == 0x8000000000000001LL ) /*0x10056cdc6*/
    {
      core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::hd9449ef6f49a72b3(&__src[1]); /*0x10056cdcf*/
    }
    else
    {
      memcpy(__dst, __src, 0xB0u); /*0x10056cdef*/
      v3 = codexmate_lib::core::relay::router_unlock_auth::auth_is_usable_real_oauth::h6e7e553ec9b7fa62(__dst); /*0x10056cdfc*/
      if ( __dst[0] != 0x8000000000000000LL && __dst[0] ) /*0x10056ce0e*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[1], __dst[0], 1); /*0x10056ce1c*/
      if ( __dst[3] != 0x8000000000000000LL && __dst[3] ) /*0x10056ce30*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[4], __dst[3], 1); /*0x10056ce3e*/
      if ( __dst[6] != 0x8000000000000000LL && __dst[6] ) /*0x10056ce52*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[7], __dst[6], 1); /*0x10056ce60*/
      if ( __dst[9] != 0x8000000000000000LL && __dst[9] ) /*0x10056ce71*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[10], __dst[9], 1); /*0x10056ce7c*/
      if ( __dst[12] != 0x8000000000000000LL && __dst[12] ) /*0x10056ce8d*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[13], __dst[12], 1); /*0x10056ce98*/
      if ( __dst[15] != 0x8000000000000000LL && __dst[15] ) /*0x10056cea9*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[16], __dst[15], 1); /*0x10056ceb4*/
      if ( __dst[18] != 0x8000000000000000LL ) /*0x10056cec0*/
      {
        if ( __dst[18] ) /*0x10056cec5*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[19], __dst[18], 1); /*0x10056ced0*/
      }
      if ( v3 ) /*0x10056ced8*/
        return 0; /*0x10056cedc*/
    }
    return codexmate_lib::core::relay::router_unlock_auth::has_restorable_real_oauth::hfae36b554456dafc(a1) ^ 1; /*0x10056cee6*/
  }
  return result; /*0x10056cee8*/
}