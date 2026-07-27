// __ZN13codexmate_lib8commands5relay32set_codex_router_no_account_mode28_$u7b$$u7b$closure$u7d$$u7d$28_$u7b$$u7b$closure$u7d$$u7d$28_$u7b$$u7b$closure$u7d$$u7d$ @ 0x1006fae50 | 基线 same-set
double __fastcall codexmate_lib::commands::relay::set_codex_router_no_account_mode::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::h9efc265483424ada(
        __int64 a1,
        _QWORD *a2)
{
  double result; // xmm0_8
  _QWORD v3[8]; // [rsp+0h] [rbp-40h] BYREF

  tauri::Emitter::emit::h619808c7d491dbee(v3, a1, "codex-router-toggle-progress", 28, a2); /*0x1006fae74*/
  if ( v3[0] != 0x8000000000000025LL ) /*0x1006fae87*/
    core::ptr::drop_in_place$LT$tauri..error..Error$GT$::hbb2283fa0888d859(v3); /*0x1006fae8d*/
  if ( *a2 ) /*0x1006fae92*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(a2[1], *a2, 1); /*0x1006faea3*/
  return result; /*0x1006faea8*/
}