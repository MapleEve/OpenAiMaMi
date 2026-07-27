// __ZN13codexmate_lib4core5relay16codex_diagnostic23fix_db_orphan_providers28_$u7b$$u7b$closure$u7d$$u7d$ @ 0x1004eeb00 | 基线 same-set
__int64 __fastcall codexmate_lib::core::relay::codex_diagnostic::fix_db_orphan_providers::_$u7b$$u7b$closure$u7d$$u7d$::h5fc22ea517f28697(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v5; // rax
  _QWORD v7[4]; // [rsp+8h] [rbp-58h] BYREF
  _QWORD v8[3]; // [rsp+28h] [rbp-38h] BYREF
  _QWORD v9[4]; // [rsp+40h] [rbp-20h] BYREF

  v9[0] = a2; /*0x1004eeb11*/
  v9[1] = a3; /*0x1004eeb15*/
  v7[0] = v9; /*0x1004eeb1d*/
  v7[1] = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f; /*0x1004eeb28*/
  v7[2] = a4; /*0x1004eeb2c*/
  v7[3] = _$LT$rusqlite..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h51e21f6f745e52d4; /*0x1004eeb37*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(v8, &unk_1017BFCE6, v7); /*0x1004eeb4a*/
  a1[3] = v8[2]; /*0x1004eeb53*/
  v5 = v8[0]; /*0x1004eeb57*/
  a1[2] = v8[1]; /*0x1004eeb5f*/
  a1[1] = v5; /*0x1004eeb63*/
  *a1 = 10; /*0x1004eeb67*/
  return core::ptr::drop_in_place$LT$rusqlite..error..Error$GT$::h61af83dc321f5f7f(a4); /*0x1004eeb76*/
}