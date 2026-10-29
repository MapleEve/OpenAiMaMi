// source: AiMaMi 1.2.7 macos-arm64 release (x86_64 slice); sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::core::relay::codex_thread_visibility::patch_router_model_rollout_if_present::_$u7b$$u7b$closure$u7d$$u7d$::h1d11db00d538aaf3; addr: 0x10049e730; session: <审计会话>; pass: 2-by-name; decompiled_at: 2026-10-26T05:08:28Z
__int64 __fastcall codexmate_lib::core::relay::codex_thread_visibility::patch_router_model_rollout_if_present::_$u7b$$u7b$closure$u7d$$u7d$::h1d11db00d538aaf3(
        __int64 a1,
        __int64 a2)
{
  _QWORD v3[2]; // [rsp+0h] [rbp-20h] BYREF
  _QWORD v4[2]; // [rsp+10h] [rbp-10h] BYREF

  v4[0] = a2; /*0x10049e739*/
  v3[0] = v4; /*0x10049e741*/
  v3[1] = _$LT$serde_json..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::hc7b53c91fb83d10d; /*0x10049e74c*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(a1, &unk_1018F89F7, v3); /*0x10049e75b*/
  return core::ptr::drop_in_place$LT$serde_json..error..Error$GT$::hc62c3b2945dfda16(v4); /*0x10049e769*/
}
