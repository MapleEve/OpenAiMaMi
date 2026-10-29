// source: AiMaMi 1.2.7 macos-arm64 release (x86_64 slice); sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::core::analytics::threads::aggregate::_$u7b$$u7b$closure$u7d$$u7d$::h93807ee6977e9d2d; addr: 0x1008aef40; session: <审计会话>; pass: 2-by-name; decompiled_at: 2026-10-26T04:54:16Z
__int64 __fastcall codexmate_lib::core::analytics::threads::aggregate::_$u7b$$u7b$closure$u7d$$u7d$::h93807ee6977e9d2d(
        _QWORD *a1,
        __int64 *a2)
{
  unsigned int v2; // eax
  __int64 result; // rax
  _QWORD v4[3]; // [rsp+0h] [rbp-50h] BYREF
  __int64 v5; // [rsp+18h] [rbp-38h] BYREF
  int v6; // [rsp+20h] [rbp-30h]
  __int64 v7; // [rsp+28h] [rbp-28h] BYREF
  __int64 v8; // [rsp+30h] [rbp-20h]
  __int64 v9; // [rsp+38h] [rbp-18h]
  int v10; // [rsp+40h] [rbp-10h] BYREF
  _BYTE v11[9]; // [rsp+47h] [rbp-9h] BYREF

  v5 = *a2; /*0x1008aef4f*/
  v6 = *((_DWORD *)a2 + 2); /*0x1008aef56*/
  v2 = _$LT$chrono..offset..local..Local$u20$as$u20$chrono..offset..TimeZone$GT$::offset_from_utc_datetime::h4d545212521a5e1d( /*0x1008aef5e*/
         1,
         a2);
  chrono::naive::datetime::NaiveDateTime::checked_add_offset::h9b6d7eabe1f89a82(v4, &v5, v2); /*0x1008aef6d*/
  if ( !LODWORD(v4[0]) ) /*0x1008aef77*/
    core::option::expect_failed::ha75f8bdcbd673567("Local time out of range for `NaiveDateTime`", 43, &off_101AB6AE8); /*0x1008aeff1*/
  v10 = v4[0]; /*0x1008aef79*/
  v7 = 0; /*0x1008aef7c*/
  v8 = 1; /*0x1008aef84*/
  v9 = 0; /*0x1008aef8c*/
  v4[2] = 1610612768; /*0x1008aef94*/
  v4[0] = &v7; /*0x1008aefa0*/
  v4[1] = &anon_0868f19ff3e9f3569e732f60bdb020cc_1449; /*0x1008aefab*/
  if ( (unsigned __int8)((__int64 (__fastcall *)(int *, _QWORD *))_$LT$chrono..naive..date..NaiveDate$u20$as$u20$core..fmt..Display$GT$::fmt::he8fe56f704d041e2)( /*0x1008aefb7*/
                          &v10,
                          v4) )
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1008af014*/
      &anon_0868f19ff3e9f3569e732f60bdb020cc_1450,
      55,
      v11,
      &anon_0868f19ff3e9f3569e732f60bdb020cc_1468,
      &anon_0868f19ff3e9f3569e732f60bdb020cc_1452);
  a1[2] = v9; /*0x1008aefc4*/
  result = v7; /*0x1008aefc8*/
  a1[1] = v8; /*0x1008aefd0*/
  *a1 = result; /*0x1008aefd4*/
  return result; /*0x1008aefd7*/
}