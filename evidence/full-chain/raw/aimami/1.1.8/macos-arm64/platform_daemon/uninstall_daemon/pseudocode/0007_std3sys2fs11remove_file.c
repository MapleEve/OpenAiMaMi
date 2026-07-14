// mac 1.1.8 BEHAVIORAL-BACKEND uninstall_daemon node 0x10109ffd0 depth=1
// std3sys2fs11remove_file
_UNKNOWN **__fastcall std::sys::fs::remove_file::hd3c2fb9b7e0710ac(void *__src, size_t __n)
{
  _BYTE __dst[384]; // [rsp+8h] [rbp-1A8h] BYREF
  _BYTE v4[8]; // [rsp+188h] [rbp-28h] BYREF
  char *v5; // [rsp+190h] [rbp-20h]

  if ( __n > 0x17F ) /*0x10109ffeb*/
    return (_UNKNOWN **)std::sys::helpers::small_c_string::run_with_cstr_allocating::h1e1d7c70f80a53e9( /*0x1010a0072*/
                          __src,
                          __n,
                          1,
                          &core::ops::function::Fn::call::h6cc65f361d0597e0);
  memcpy(__dst, __src, __n); /*0x10109fffa*/
  __dst[__n] = 0; /*0x10109ffff*/
  core::ffi::c_str::CStr::from_bytes_with_nul::h8f32931e7be27087(v4, __dst, __n + 1); /*0x1010a0014*/
  if ( v4[0] ) /*0x1010a001d*/
    return &off_1015AE3E8; /*0x1010a001f*/
  if ( unlink(v5) == -1 ) /*0x1010a0034*/
    return (_UNKNOWN **)(((unsigned __int64)(unsigned int)*__error() << 32) | 2); /*0x1010a0045*/
  return nullptr; /*0x1010a0049*/
}