// source: AiMaMi 1.2.7 macos-arm64 release (x86_64 slice); sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::core::account_io::persist_account_auth::_$u7b$$u7b$closure$u7d$$u7d$::h15ed23d7a57f4e21; addr: 0x1005b39d0; session: <审计会话>; pass: 2-by-name; decompiled_at: 2026-10-26T04:44:16Z
// B-level evidence identity verified; module codexmate_lib/core/account_io; range 0x1005b39d0-0x1005b3a90; sha f019dbc8e267; session <审计会话>; method exact-normalized-body; source intermediate/aimami/1.2.7/macos-arm64/version-delta/release-f019dbc8e267-offline-writeback-plan.json; not gate promotion
double __fastcall codexmate_lib::core::account_io::persist_account_auth::_$u7b$$u7b$closure$u7d$$u7d$::h15ed23d7a57f4e21(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v6; // rax
  _QWORD v8[3]; // [rsp+0h] [rbp-50h] BYREF
  __int64 v9; // [rsp+18h] [rbp-38h] BYREF
  __int64 v10; // [rsp+20h] [rbp-30h]
  __int64 v11; // [rsp+28h] [rbp-28h]
  __int64 v12; // [rsp+30h] [rbp-20h] BYREF
  _BYTE v13[17]; // [rsp+3Fh] [rbp-11h] BYREF

  v12 = a2; /*0x1005b39e1*/
  v9 = 0; /*0x1005b39e5*/
  v10 = 1; /*0x1005b39ed*/
  v11 = 0; /*0x1005b39f5*/
  v8[2] = 1610612768; /*0x1005b39fd*/
  v8[0] = &v9; /*0x1005b3a09*/
  v8[1] = &anon_4bf7b7c8c09ec04f58b93d1c5edcde78_1174; /*0x1005b3a14*/
  if ( (unsigned __int8)_$LT$serde_json..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::hc7b53c91fb83d10d( /*0x1005b3a20*/
                          &v12,
                          v8,
                          a3,
                          a4,
                          a5,
                          a6) )
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1005b3a89*/
      &anon_4bf7b7c8c09ec04f58b93d1c5edcde78_1175,
      55,
      v13,
      &anon_4bf7b7c8c09ec04f58b93d1c5edcde78_1216,
      &anon_4bf7b7c8c09ec04f58b93d1c5edcde78_1177);
  a1[3] = v11; /*0x1005b3a2d*/
  v6 = v9; /*0x1005b3a31*/
  a1[2] = v10; /*0x1005b3a39*/
  a1[1] = v6; /*0x1005b3a3d*/
  *a1 = 9; /*0x1005b3a41*/
  core::ptr::drop_in_place$LT$serde_json..error..ErrorCode$GT$::hadb49e5de99507f8(a2); /*0x1005b3a4b*/
  return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(a2, 40, 8); /*0x1005b3a62*/
}