// mac 1.2.2 NEW codexmate_lib4core19debug_report_upload15TempBundl 0x101354c50 d=2
unsigned __int64 *__fastcall std::env::_var_os::h174f31a71fef3df9(unsigned __int64 *a1, const void *a2, size_t a3)
{
  unsigned __int64 v3; // r12
  unsigned __int64 v5; // rax
  __int64 v6; // r13
  void **v7; // rdx
  _BYTE __dst[384]; // [rsp+8h] [rbp-1D8h] BYREF
  _QWORD v10[3]; // [rsp+188h] [rbp-58h] BYREF
  unsigned __int64 v11; // [rsp+1A0h] [rbp-40h] BYREF
  void **v12; // [rsp+1A8h] [rbp-38h]
  unsigned __int64 v13; // [rsp+1B0h] [rbp-30h]

  v3 = 0x8000000000000000LL; /*0x101354c67*/
  if ( a3 > 0x17F ) /*0x101354c78*/
  {
    std::sys::helpers::small_c_string::run_with_cstr_allocating::hedd2c26ad0c8e592(&v11); /*0x101354d48*/
    v5 = v11; /*0x101354d4d*/
    if ( v11 == 0x8000000000000001LL ) /*0x101354d59*/
      goto LABEL_5; /*0x101354d59*/
LABEL_12:
    v7 = v12; /*0x101354d5b*/
    a1[2] = v13; /*0x101354d66*/
    a1[1] = (unsigned __int64)v7; /*0x101354d6a*/
    v3 = v5; /*0x101354d6e*/
    goto LABEL_13; /*0x101354d6e*/
  }
  memcpy(__dst, a2, a3); /*0x101354c8b*/
  __dst[a3] = 0; /*0x101354c90*/
  core::ffi::c_str::CStr::from_bytes_with_nul::h8f32931e7be27087(v10, (__int64)__dst, a3 + 1); /*0x101354ca6*/
  if ( LODWORD(v10[0]) == 1 ) /*0x101354caf*/
  {
    v12 = (void **)&off_101926308; /*0x101354cb8*/
    v11 = 0x8000000000000001LL; /*0x101354cc1*/
    goto LABEL_5; /*0x101354cd1*/
  }
  std::sys::env::unix::getenv::_$u7b$$u7b$closure$u7d$$u7d$::h4cf2ae9416167b02(&v11, __dst, v10[1]); /*0x101354ce0*/
  v5 = v11; /*0x101354ce5*/
  if ( v11 != 0x8000000000000001LL ) /*0x101354cf1*/
    goto LABEL_12; /*0x101354cf1*/
LABEL_5:
  if ( ((unsigned __int8)v12 & 3) == 1 ) /*0x101354cff*/
  {
    v6 = *(__int64 *)((char *)v12 + 7); /*0x101354d09*/
    if ( *(_QWORD *)v6 ) /*0x101354d0d*/
      (*(void (__fastcall **)(_QWORD))v6)(*(void **)((char *)v12 - 1)); /*0x101354d19*/
    if ( *(_QWORD *)(v6 + 8) ) /*0x101354d1b*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x101354d2b*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x101354d3d*/
  }
LABEL_13:
  *a1 = v3; /*0x101354d71*/
  return a1; /*0x101354d77*/
}