// mac 1.1.8 BEHAVIORAL-BACKEND activation_request_path node 0x10112a8d0 depth=3
// std3sys7helpers14small_c_string24run_with_cstr_allocating
size_t *__fastcall std::sys::helpers::small_c_string::run_with_cstr_allocating::hedd2c26ad0c8e592(
        size_t *a1,
        const void *a2,
        size_t a3)
{
  __int64 v3; // rsi
  const char *v4; // r14
  __int64 v5; // rbx
  size_t *result; // rax
  __int64 v7; // [rsp+8h] [rbp-38h] BYREF
  const char *v8; // [rsp+10h] [rbp-30h]
  __int64 v9; // [rsp+18h] [rbp-28h]

  _$LT$$RF$$u5b$u8$u5d$$u20$as$u20$alloc..ffi..c_str..CString..new..SpecNewImpl$GT$::spec_new_impl::h1af9ab0212d16fd8( /*0x10112a8e4*/
    (size_t *)&v7,
    a2,
    a3);
  v3 = v7; /*0x10112a8e9*/
  if ( __OFSUB__(-v7, 1) ) /*0x10112a8f0*/
  {
    v4 = v8; /*0x10112a8f5*/
    v5 = v9; /*0x10112a8f9*/
    result = std::sys::env::unix::getenv::_$u7b$$u7b$closure$u7d$$u7d$::h4cf2ae9416167b02(a1, v7, v8); /*0x10112a903*/
    *v4 = 0; /*0x10112a908*/
    if ( !v5 ) /*0x10112a90f*/
      return result; /*0x10112a90f*/
  }
  else
  {
    a1[1] = (size_t)&off_1015AE3E8; /*0x10112a92f*/
    result = (size_t *)0x8000000000000001LL; /*0x10112a933*/
    *a1 = 0x8000000000000001LL; /*0x10112a936*/
    if ( !v3 ) /*0x10112a93c*/
      return result; /*0x10112a93c*/
  }
  return (size_t *)_RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10112a94c*/
}