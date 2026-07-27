// __ZN13codexmate_lib4core4auth31ensure_managed_account_snapshot @ 0x1008f2370
// 1.2.3 NEW-delta | codexmate_lib::core::auth::ensure_managed_account_snapshot | vs 1.2.2 新增(IDA函数枚举diff, 名↔地址一致)
_QWORD *__fastcall codexmate_lib::core::auth::ensure_managed_account_snapshot::hb4101d838fb2a02e(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  __int64 v6; // rax
  _QWORD v8[19]; // [rsp+0h] [rbp-C0h] BYREF
  _QWORD v9[5]; // [rsp+98h] [rbp-28h] BYREF

  codexmate_lib::core::auth::ensure_managed_account_snapshot_location::hac13c2585495a048(v8, a2, a3, a4, a5); /*0x1008f2390*/
  if ( LODWORD(v8[0]) == 11 ) /*0x1008f239c*/
  {
    std::sys::fs::symlink_metadata::hd69903fe66faddbd(v8, a2, a3); /*0x1008f23ab*/
    v6 = v8[1]; /*0x1008f23b0*/
    if ( LODWORD(v8[0]) == 1 ) /*0x1008f23be*/
    {
      *a1 = 2; /*0x1008f23c0*/
      a1[1] = v6; /*0x1008f23c7*/
    }
    else if ( (v8[1] & 0xF00000000000LL) == 0x800000000000LL ) /*0x1008f240a*/
    {
      *a1 = 11; /*0x1008f240c*/
    }
    else
    {
      v9[0] = a2; /*0x1008f2415*/
      v9[1] = a3; /*0x1008f2419*/
      v8[0] = v9; /*0x1008f2421*/
      v8[1] = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f; /*0x1008f242f*/
      alloc::fmt::format::format_inner::h3c16c74008a310d4(a1 + 1, &anon_155c4da9b5393270cfa7378e2b52c417_254, v8); /*0x1008f2448*/
      *a1 = 9; /*0x1008f244d*/
    }
  }
  else
  {
    qmemcpy(a1, v8, 0x60u); /*0x1008f23dc*/
  }
  return a1; /*0x1008f23e2*/
}