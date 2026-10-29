// source: AiMaMi 1.2.7 macos-arm64 release (x86_64 slice); sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::core::analytics::threads::load_summaries::_$u7b$$u7b$closure$u7d$$u7d$::h11b074cba3ccb173; addr: 0x1008ab150; session: <审计会话>; pass: 2-by-name; decompiled_at: 2026-10-26T04:54:17Z
__int64 __fastcall codexmate_lib::core::analytics::threads::load_summaries::_$u7b$$u7b$closure$u7d$$u7d$::h11b074cba3ccb173(
        _QWORD *a1,
        _QWORD *a2,
        __int64 *a3)
{
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rsi
  __int64 result; // rax
  __int64 v9; // rcx
  __int64 v10; // rcx
  _QWORD v11[9]; // [rsp+8h] [rbp-78h] BYREF
  _QWORD v12[6]; // [rsp+50h] [rbp-30h] BYREF

  v5 = a2[6]; /*0x1008ab166*/
  v6 = a2[7]; /*0x1008ab16a*/
  v7 = v5; /*0x1008ab170*/
  if ( v5 ) /*0x1008ab179*/
    v7 = a2[8]; /*0x1008ab17b*/
  v11[0] = v5 != 0; /*0x1008ab17f*/
  v11[1] = 0; /*0x1008ab183*/
  v11[2] = v5; /*0x1008ab18b*/
  v11[3] = v6; /*0x1008ab18f*/
  v11[4] = v11[0]; /*0x1008ab193*/
  v11[5] = 0; /*0x1008ab197*/
  v11[6] = v5; /*0x1008ab19f*/
  v11[7] = v6; /*0x1008ab1a3*/
  v11[8] = v7; /*0x1008ab1a7*/
  _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::h6fcbb5dbb0572e3d( /*0x1008ab1b3*/
    v12,
    v11);
  result = a2[5]; /*0x1008ab1b8*/
  a1[7] = a3[7]; /*0x1008ab1c0*/
  a1[6] = a3[6]; /*0x1008ab1c8*/
  a1[5] = a3[5]; /*0x1008ab1d0*/
  a1[4] = a3[4]; /*0x1008ab1d8*/
  a1[3] = a3[3]; /*0x1008ab1e0*/
  a1[2] = a3[2]; /*0x1008ab1e8*/
  v9 = *a3; /*0x1008ab1ec*/
  a1[1] = a3[1]; /*0x1008ab1f3*/
  *a1 = v9; /*0x1008ab1f7*/
  v10 = v12[0]; /*0x1008ab1fa*/
  a1[9] = v12[1]; /*0x1008ab202*/
  a1[10] = v12[2]; /*0x1008ab20a*/
  a1[8] = v10; /*0x1008ab20e*/
  a1[11] = result; /*0x1008ab212*/
  return result; /*0x1008ab216*/
}