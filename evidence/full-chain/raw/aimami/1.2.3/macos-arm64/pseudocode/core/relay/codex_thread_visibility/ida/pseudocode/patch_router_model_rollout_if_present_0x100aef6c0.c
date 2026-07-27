// __ZN13codexmate_lib4core5relay23codex_thread_visibility37patch_router_model_rollout_if_present28_$u7b$$u7b$closure$u7d$$u7d$ @ 0x100aef6c0 | 基线 same-set
double __fastcall codexmate_lib::core::relay::codex_thread_visibility::patch_router_model_rollout_if_present::_$u7b$$u7b$closure$u7d$$u7d$::h319857eaf02b7a35(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  _QWORD *v5; // rbx
  __int64 v6; // rsi
  _QWORD v8[2]; // [rsp+8h] [rbp-28h] BYREF
  _QWORD *v9; // [rsp+18h] [rbp-18h] BYREF

  v9 = a2; /*0x100aef6cb*/
  v8[0] = &v9; /*0x100aef6d3*/
  v8[1] = _$LT$serde_json..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::hc7b53c91fb83d10d; /*0x100aef6de*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(a1, &unk_1017CB961, v8); /*0x100aef6ed*/
  v5 = v9; /*0x100aef6f2*/
  if ( *v9 == 1 ) /*0x100aef6fd*/
  {
    core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h035ee12b7c6572f3(v9 + 1, &unk_1017CB961, v2, v3, v4); /*0x100aef721*/
  }
  else if ( !*v9 ) /*0x100aef6f6*/
  {
    v6 = v9[2]; /*0x100aef704*/
    if ( v6 ) /*0x100aef70b*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v9[1], v6, 1); /*0x100aef716*/
  }
  return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v5, 40, 8); /*0x100aef738*/
}