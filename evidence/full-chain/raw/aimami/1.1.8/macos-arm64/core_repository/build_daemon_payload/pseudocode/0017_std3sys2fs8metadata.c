// mac 1.1.8 BEHAVIORAL-BACKEND build_daemon_payload node 0x1010a1400 depth=2
// std3sys2fs8metadata
__int64 *__fastcall std::sys::fs::metadata::h32fa16d3052ea535(__int64 *a1, const void *a2, size_t a3)
{
  _UNKNOWN **v4; // rax
  __int64 v5; // rax
  _BYTE __dst[384]; // [rsp+0h] [rbp-240h] BYREF
  stat __src; // [rsp+180h] [rbp-C0h] BYREF
  int v9; // [rsp+210h] [rbp-30h] BYREF
  char *v10; // [rsp+218h] [rbp-28h]

  if ( a3 > 0x17F ) /*0x1010a141a*/
  {
    std::sys::helpers::small_c_string::run_with_cstr_allocating::hd2f320157252095b( /*0x1010a14f3*/
      a1,
      a2,
      a3,
      &core::ops::function::Fn::call::h489c48b669531688);
    return a1; /*0x1010a14f8*/
  }
  memcpy(__dst, a2, a3); /*0x1010a142d*/
  __dst[a3] = 0; /*0x1010a1432*/
  core::ffi::c_str::CStr::from_bytes_with_nul::h8f32931e7be27087(&v9, __dst, a3 + 1); /*0x1010a1448*/
  if ( v9 == 1 ) /*0x1010a1451*/
  {
    v4 = &off_1015AE3E8; /*0x1010a1453*/
LABEL_7:
    a1[1] = (__int64)v4; /*0x1010a14cc*/
    v5 = 1; /*0x1010a14d0*/
    goto LABEL_8; /*0x1010a14d0*/
  }
  memset(&__src, 0, sizeof(__src)); /*0x1010a148c*/
  if ( stat_INODE64(v10, &__src) == -1 ) /*0x1010a14a2*/
  {
    v4 = (_UNKNOWN **)(((unsigned __int64)(unsigned int)*__error() << 32) | 2); /*0x1010a14c8*/
    goto LABEL_7; /*0x1010a14c8*/
  }
  memcpy(a1 + 1, &__src, 0x90u); /*0x1010a14b4*/
  v5 = 0; /*0x1010a14b9*/
LABEL_8:
  *a1 = v5; /*0x1010a14d5*/
  return a1; /*0x1010a14db*/
}