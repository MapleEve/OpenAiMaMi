// source: AiMaMi 1.2.7 macos-arm64 release (x86_64 slice); sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::core::relay::legacy_virtual_auth::marker_exists::haf5e03d0b0fad410; addr: 0x10024ab40; session: <审计会话>; pass: 2-by-name; decompiled_at: 2026-10-26T05:08:28Z
// B-level evidence identity verified; module codexmate_lib/core/relay/legacy_virtual_auth; range 0x10024ab40-0x10024abc8; sha f019dbc8e267; session <审计会话>; method exact-normalized-body; source intermediate/aimami/1.2.7/macos-arm64/version-delta/release-f019dbc8e267-offline-writeback-plan.json; not gate promotion
__int64 __fastcall codexmate_lib::core::relay::legacy_virtual_auth::marker_exists::haf5e03d0b0fad410(__int64 a1)
{
  __int64 v1; // rbx
  unsigned int v2; // r14d
  _QWORD v4[19]; // [rsp+0h] [rbp-C0h] BYREF
  __int64 v5; // [rsp+98h] [rbp-28h] BYREF
  __int64 v6; // [rsp+A0h] [rbp-20h]
  __int64 v7; // [rsp+A8h] [rbp-18h]

  std::path::Path::_join::hb1a495d4f06b13b8( /*0x10024ab6d*/
    &v5,
    *(_QWORD *)(a1 + 584),
    *(_QWORD *)(a1 + 592),
    "virtual-auth-marker.json",
    24);
  v1 = v6; /*0x10024ab72*/
  std::sys::fs::metadata::h32fa16d3052ea535(v4, v6, v7); /*0x10024ab84*/
  v2 = v4[0]; /*0x10024ab89*/
  core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h47ac3589c64e6d2a( /*0x10024ab9a*/
    v4[0],
    v4[1]);
  if ( v5 ) /*0x10024aba6*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v1, v5, 1); /*0x10024abb0*/
  LOBYTE(v2) = v2 ^ 1; /*0x10024abb5*/
  return v2; /*0x10024abbc*/
}
