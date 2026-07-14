// mac 1.1.8 BEHAVIORAL-BACKEND install_daemon node 0x10112a4b0 depth=2
// std3sys7helpers14small_c_string24run_with_cstr_allocating
_UNKNOWN **__fastcall std::sys::helpers::small_c_string::run_with_cstr_allocating::h0ddb4d007f51cbc7(
        __int64 a1,
        const void *a2,
        size_t a3,
        __int64 a4,
        __int64 (__fastcall *a5)(__int64, __int64, _BYTE *, __int64))
{
  bool v7; // cf
  _BYTE *v8; // r14
  __int64 v9; // rbx
  _UNKNOWN **result; // rax
  __int64 v11; // [rsp+8h] [rbp-48h] BYREF
  _BYTE *v12; // [rsp+10h] [rbp-40h]
  __int64 v13; // [rsp+18h] [rbp-38h]

  _$LT$$RF$$u5b$u8$u5d$$u20$as$u20$alloc..ffi..c_str..CString..new..SpecNewImpl$GT$::spec_new_impl::h1af9ab0212d16fd8( /*0x10112a4ce*/
    (size_t *)&v11,
    a2,
    a3);
  v7 = v11 != 0; /*0x10112a4da*/
  if ( __OFSUB__(-v11, 1) ) /*0x10112a4da*/
  {
    v8 = v12; /*0x10112a4df*/
    v9 = v13; /*0x10112a4e3*/
    result = (_UNKNOWN **)a5(a1, a4, v12, v13); /*0x10112a4f3*/
    *v8 = 0; /*0x10112a4f6*/
    if ( !v9 ) /*0x10112a4fd*/
      return result; /*0x10112a4fd*/
  }
  else
  {
    result = &off_1015AE3E8; /*0x10112a50c*/
    *(_QWORD *)(a1 + 8) = &off_1015AE3E8; /*0x10112a513*/
    *(_DWORD *)a1 = 1; /*0x10112a517*/
    if ( !v7 ) /*0x10112a51f*/
      return result; /*0x10112a51f*/
  }
  return (_UNKNOWN **)_RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10112a52f*/
}