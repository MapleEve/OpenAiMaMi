// source: AiMaMi 1.2.7 macos-arm64 release (x86_64 slice); sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::core::repository::account_reset_credits::_$LT$impl$u20$codexmate_lib..core..repository..Repository$GT$::reset_credit_context::_$u7b$$u7b$closure$u7d$$u7d$::he93009c9272e3dad; addr: 0x100ae2250; session: <审计会话>; pass: 2-by-name; decompiled_at: 2026-10-26T05:20:51Z
void *__fastcall codexmate_lib::core::repository::account_reset_credits::_$LT$impl$u20$codexmate_lib..core..repository..Repository$GT$::reset_credit_context::_$u7b$$u7b$closure$u7d$$u7d$::he93009c9272e3dad(
        _QWORD *a1,
        __int64 a2,
        __int64 a3)
{
  void *result; // rax

  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1, a2, a3); /*0x100ae2259*/
  result = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(52, 1); /*0x100ae2268*/
  if ( !result ) /*0x100ae2270*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 52); /*0x100ae22f8*/
  qmemcpy(result, "Reset card details require ChatGPT login credentials", 52); /*0x100ae22c2*/
  a1[1] = 52; /*0x100ae22cc*/
  a1[2] = result; /*0x100ae22d4*/
  a1[3] = 52; /*0x100ae22d8*/
  *a1 = 9; /*0x100ae22e0*/
  return result; /*0x100ae22eb*/
}