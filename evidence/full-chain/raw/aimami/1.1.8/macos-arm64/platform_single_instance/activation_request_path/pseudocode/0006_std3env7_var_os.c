// mac 1.1.8 BEHAVIORAL-BACKEND activation_request_path node 0x10109e6a0 depth=2
// std3env7_var_os
unsigned __int64 *__fastcall std::env::_var_os::h174f31a71fef3df9(unsigned __int64 *a1, const void *a2, size_t a3)
{
  unsigned __int64 v3; // r12
  unsigned __int64 v5; // rax
  __int64 v6; // r13
  void **v7; // rdx
  _BYTE __dst[384]; // [rsp+8h] [rbp-1D8h] BYREF
  int v10; // [rsp+188h] [rbp-58h] BYREF
  __int64 v11; // [rsp+190h] [rbp-50h]
  unsigned __int64 v12; // [rsp+1A0h] [rbp-40h] BYREF
  void **v13; // [rsp+1A8h] [rbp-38h]
  unsigned __int64 v14; // [rsp+1B0h] [rbp-30h]

  v3 = 0x8000000000000000LL; /*0x10109e6b7*/
  if ( a3 > 0x17F ) /*0x10109e6c8*/
  {
    std::sys::helpers::small_c_string::run_with_cstr_allocating::hedd2c26ad0c8e592(&v12); /*0x10109e798*/
    v5 = v12; /*0x10109e79d*/
    if ( v12 == 0x8000000000000001LL ) /*0x10109e7a9*/
      goto LABEL_5; /*0x10109e7a9*/
LABEL_12:
    v7 = v13; /*0x10109e7ab*/
    a1[2] = v14; /*0x10109e7b6*/
    a1[1] = (unsigned __int64)v7; /*0x10109e7ba*/
    v3 = v5; /*0x10109e7be*/
    goto LABEL_13; /*0x10109e7be*/
  }
  memcpy(__dst, a2, a3); /*0x10109e6db*/
  __dst[a3] = 0; /*0x10109e6e0*/
  core::ffi::c_str::CStr::from_bytes_with_nul::h8f32931e7be27087(&v10, __dst, a3 + 1); /*0x10109e6f6*/
  if ( v10 == 1 ) /*0x10109e6ff*/
  {
    v13 = (void **)&off_1015AE3E8; /*0x10109e708*/
    v12 = 0x8000000000000001LL; /*0x10109e711*/
    goto LABEL_5; /*0x10109e721*/
  }
  std::sys::env::unix::getenv::_$u7b$$u7b$closure$u7d$$u7d$::h4cf2ae9416167b02(&v12, __dst, v11); /*0x10109e730*/
  v5 = v12; /*0x10109e735*/
  if ( v12 != 0x8000000000000001LL ) /*0x10109e741*/
    goto LABEL_12; /*0x10109e741*/
LABEL_5:
  if ( ((unsigned __int8)v13 & 3) == 1 ) /*0x10109e74f*/
  {
    v6 = *(__int64 *)((char *)v13 + 7); /*0x10109e759*/
    if ( *(_QWORD *)v6 ) /*0x10109e75d*/
      (*(void (__fastcall **)(_QWORD))v6)(*(void **)((char *)v13 - 1)); /*0x10109e769*/
    if ( *(_QWORD *)(v6 + 8) ) /*0x10109e76b*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10109e77b*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10109e78d*/
  }
LABEL_13:
  *a1 = v3; /*0x10109e7c1*/
  return a1; /*0x10109e7c7*/
}