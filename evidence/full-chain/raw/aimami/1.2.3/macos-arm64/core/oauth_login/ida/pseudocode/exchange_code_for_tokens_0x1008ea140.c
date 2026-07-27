// __ZN13codexmate_lib4core11oauth_login24exchange_code_for_tokens28_$u7b$$u7b$closure$u7d$$u7d$ @ 0x1008ea140
// 1.2.3 NEW-delta | codexmate_lib::core::oauth_login::exchange_code_for_tokens::_$u7b$$u7b$closure$u7d$$u7d$ | vs 1.2.2 新增(IDA函数枚举diff, 名↔地址一致)
void *__fastcall codexmate_lib::core::oauth_login::exchange_code_for_tokens::_$u7b$$u7b$closure$u7d$$u7d$::hf590a120a5083734(
        _QWORD *a1,
        __int64 a2)
{
  void *result; // rax

  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1, a2); /*0x1008ea149*/
  result = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(42, 1); /*0x1008ea158*/
  if ( !result ) /*0x1008ea160*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 42); /*0x1008ea1d9*/
  qmemcpy(result, "OAuth token response missing refresh_token", 42); /*0x1008ea1a4*/
  a1[1] = 42; /*0x1008ea1ad*/
  a1[2] = result; /*0x1008ea1b5*/
  a1[3] = 42; /*0x1008ea1b9*/
  *a1 = 10; /*0x1008ea1c1*/
  return result; /*0x1008ea1cc*/
}