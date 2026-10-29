// source: AiMaMi 1.2.7 macos-arm64 release (x86_64 slice); sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::core::account_io::parse_import_file::_$u7b$$u7b$closure$u7d$$u7d$::h1ff045666714fd84; addr: 0x1005b1470; session: <审计会话>; pass: 2-by-name; decompiled_at: 2026-10-26T04:44:16Z
// B-level evidence identity verified; module codexmate_lib/core/account_io; range 0x1005b1470-0x1005b14ef; sha f019dbc8e267; session <审计会话>; method exact-normalized-body; source intermediate/aimami/1.2.7/macos-arm64/version-delta/release-f019dbc8e267-offline-writeback-plan.json; not gate promotion
double __fastcall codexmate_lib::core::account_io::parse_import_file::_$u7b$$u7b$closure$u7d$$u7d$::h1ff045666714fd84(
        _QWORD *a1,
        __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // r14
  _QWORD v5[3]; // [rsp+0h] [rbp-40h] BYREF
  _QWORD v6[2]; // [rsp+18h] [rbp-28h] BYREF
  __int64 v7; // [rsp+28h] [rbp-18h] BYREF

  v7 = a2; /*0x1005b147e*/
  v6[0] = &v7; /*0x1005b1486*/
  v6[1] = _$LT$serde_json..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::hc7b53c91fb83d10d; /*0x1005b1491*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(v5, &unk_1018FB78E, v6); /*0x1005b14a4*/
  a1[3] = v5[2]; /*0x1005b14ad*/
  v2 = v5[0]; /*0x1005b14b1*/
  a1[2] = v5[1]; /*0x1005b14b9*/
  a1[1] = v2; /*0x1005b14bd*/
  *a1 = 9; /*0x1005b14c1*/
  v3 = v7; /*0x1005b14c8*/
  core::ptr::drop_in_place$LT$serde_json..error..ErrorCode$GT$::hadb49e5de99507f8(v7); /*0x1005b14cf*/
  return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v3, 40, 8); /*0x1005b14e6*/
}