// mac 1.1.8 BEHAVIORAL-BACKEND prepare_activation_dir node 0x10112a820 depth=3
// std3sys7helpers14small_c_string24run_with_cstr_allocating
_UNKNOWN **__fastcall std::sys::helpers::small_c_string::run_with_cstr_allocating::hd2f320157252095b(
        _QWORD *a1,
        const void *a2,
        size_t a3,
        __int64 (__fastcall *a4)(_QWORD *, __int64, _BYTE *, __int64))
{
  bool v5; // cf
  _BYTE *v6; // r14
  __int64 v7; // rbx
  _UNKNOWN **result; // rax
  __int64 v9; // [rsp+0h] [rbp-40h] BYREF
  _BYTE *v10; // [rsp+8h] [rbp-38h]
  __int64 v11; // [rsp+10h] [rbp-30h]

  _$LT$$RF$$u5b$u8$u5d$$u20$as$u20$alloc..ffi..c_str..CString..new..SpecNewImpl$GT$::spec_new_impl::h1af9ab0212d16fd8( /*0x10112a839*/
    (size_t *)&v9,
    a2,
    a3);
  v5 = v9 != 0; /*0x10112a845*/
  if ( __OFSUB__(-v9, 1) ) /*0x10112a845*/
  {
    v6 = v10; /*0x10112a84a*/
    v7 = v11; /*0x10112a84e*/
    result = (_UNKNOWN **)a4(a1, 1, v10, v11); /*0x10112a860*/
    *v6 = 0; /*0x10112a863*/
    if ( !v7 ) /*0x10112a86a*/
      return result; /*0x10112a86a*/
  }
  else
  {
    result = &off_1015AE3E8; /*0x10112a879*/
    a1[1] = &off_1015AE3E8; /*0x10112a880*/
    *a1 = 1; /*0x10112a885*/
    if ( !v5 ) /*0x10112a88d*/
      return result; /*0x10112a88d*/
  }
  return (_UNKNOWN **)_RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10112a89d*/
}