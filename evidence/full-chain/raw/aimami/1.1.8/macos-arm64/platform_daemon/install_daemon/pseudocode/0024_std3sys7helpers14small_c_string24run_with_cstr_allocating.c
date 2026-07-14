// mac 1.1.8 BEHAVIORAL-BACKEND install_daemon node 0x10112a6c0 depth=2
// std3sys7helpers14small_c_string24run_with_cstr_allocating
_UNKNOWN **__fastcall std::sys::helpers::small_c_string::run_with_cstr_allocating::h1e1d7c70f80a53e9(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 (__fastcall *a4)(__int64, _BYTE *, __int64))
{
  _BYTE *v6; // r15
  __int64 v7; // r14
  _UNKNOWN **v8; // rbx
  __int64 v10; // [rsp+0h] [rbp-40h] BYREF
  _BYTE *v11; // [rsp+8h] [rbp-38h]
  __int64 v12; // [rsp+10h] [rbp-30h]

  _$LT$$RF$$u5b$u8$u5d$$u20$as$u20$alloc..ffi..c_str..CString..new..SpecNewImpl$GT$::spec_new_impl::h1af9ab0212d16fd8( /*0x10112a6df*/
    &v10,
    a1,
    a2);
  if ( __OFSUB__(-v10, 1) ) /*0x10112a6eb*/
  {
    v6 = v11; /*0x10112a6f0*/
    v7 = v12; /*0x10112a6f4*/
    v8 = (_UNKNOWN **)a4(a3, v11, v12); /*0x10112a703*/
    *v6 = 0; /*0x10112a706*/
    if ( v7 ) /*0x10112a70d*/
      goto LABEL_5; /*0x10112a70d*/
  }
  else
  {
    v8 = &off_1015AE3E8; /*0x10112a71c*/
    if ( v10 ) /*0x10112a723*/
LABEL_5:
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10112a72e*/
  }
  return v8; /*0x10112a736*/
}