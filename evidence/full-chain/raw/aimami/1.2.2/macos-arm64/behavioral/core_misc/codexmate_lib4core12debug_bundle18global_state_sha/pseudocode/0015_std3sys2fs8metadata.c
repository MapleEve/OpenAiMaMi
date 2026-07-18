// mac 1.2.2 NEW codexmate_lib4core12debug_bundle18global_state_sha 0x101357b20 d=2
__int64 *__fastcall std::sys::fs::metadata::h32fa16d3052ea535(__int64 *a1, const void *a2, size_t a3)
{
  _UNKNOWN **v4; // rax
  __int64 v5; // rax
  _BYTE __dst[384]; // [rsp+0h] [rbp-240h] BYREF
  stat __src; // [rsp+180h] [rbp-C0h] BYREF
  int v9; // [rsp+210h] [rbp-30h] BYREF
  char *v10; // [rsp+218h] [rbp-28h]

  if ( a3 > 0x17F ) /*0x101357b3a*/
  {
    std::sys::helpers::small_c_string::run_with_cstr_allocating::hd2f320157252095b( /*0x101357c13*/
      a1,
      a2,
      a3,
      &core::ops::function::Fn::call::h489c48b669531688);
    return a1; /*0x101357c18*/
  }
  memcpy(__dst, a2, a3); /*0x101357b4d*/
  __dst[a3] = 0; /*0x101357b52*/
  core::ffi::c_str::CStr::from_bytes_with_nul::h8f32931e7be27087(&v9, __dst, a3 + 1); /*0x101357b68*/
  if ( v9 == 1 ) /*0x101357b71*/
  {
    v4 = &off_101926308; /*0x101357b73*/
LABEL_7:
    a1[1] = (__int64)v4; /*0x101357bec*/
    v5 = 1; /*0x101357bf0*/
    goto LABEL_8; /*0x101357bf0*/
  }
  memset(&__src, 0, sizeof(__src)); /*0x101357bac*/
  if ( stat_INODE64(v10, &__src) == -1 ) /*0x101357bc2*/
  {
    v4 = (_UNKNOWN **)(((unsigned __int64)(unsigned int)*__error() << 32) | 2); /*0x101357be8*/
    goto LABEL_7; /*0x101357be8*/
  }
  memcpy(a1 + 1, &__src, 0x90u); /*0x101357bd4*/
  v5 = 0; /*0x101357bd9*/
LABEL_8:
  *a1 = v5; /*0x101357bf5*/
  return a1; /*0x101357bfb*/
}