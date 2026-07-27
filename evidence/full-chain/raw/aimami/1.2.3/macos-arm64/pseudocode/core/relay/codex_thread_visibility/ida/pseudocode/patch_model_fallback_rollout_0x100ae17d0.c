// __ZN13codexmate_lib4core5relay23codex_thread_visibility28patch_model_fallback_rollout28_$u7b$$u7b$closure$u7d$$u7d$ @ 0x100ae17d0 | 基线 same-set
__int64 __fastcall codexmate_lib::core::relay::codex_thread_visibility::patch_model_fallback_rollout::_$u7b$$u7b$closure$u7d$$u7d$::h0bd60d9801b71671(
        __int64 a1,
        __int64 a2)
{
  _QWORD v3[4]; // [rsp+0h] [rbp-20h] BYREF

  v3[0] = a2; /*0x100ae17de*/
  v3[1] = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2; /*0x100ae17e9*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(a1, &unk_1017CAF4B, v3); /*0x100ae17f8*/
  return core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(a2); /*0x100ae1805*/
}