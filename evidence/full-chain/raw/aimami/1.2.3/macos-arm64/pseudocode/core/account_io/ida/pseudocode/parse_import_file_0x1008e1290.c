// __ZN13codexmate_lib4core10account_io17parse_import_file28_$u7b$$u7b$closure$u7d$$u7d$ @ 0x1008e1290
// 1.2.3 NEW-delta | codexmate_lib::core::account_io::parse_import_file::_$u7b$$u7b$closure$u7d$$u7d$ | vs 1.2.2 新增(IDA函数枚举diff, 名↔地址一致)
__int64 __fastcall codexmate_lib::core::account_io::parse_import_file::_$u7b$$u7b$closure$u7d$$u7d$::hbbe92ed43b1fbf90(
        _QWORD *a1,
        __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // r14
  _QWORD v5[3]; // [rsp+0h] [rbp-40h] BYREF
  _QWORD v6[2]; // [rsp+18h] [rbp-28h] BYREF
  __int64 v7; // [rsp+28h] [rbp-18h] BYREF

  v7 = a2; /*0x1008e129e*/
  v6[0] = &v7; /*0x1008e12a6*/
  v6[1] = _$LT$serde_json..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::hc7b53c91fb83d10d; /*0x1008e12b1*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(v5, &unk_1017C6D77, v6); /*0x1008e12c4*/
  a1[3] = v5[2]; /*0x1008e12cd*/
  v2 = v5[0]; /*0x1008e12d1*/
  a1[2] = v5[1]; /*0x1008e12d9*/
  a1[1] = v2; /*0x1008e12dd*/
  *a1 = 9; /*0x1008e12e1*/
  v3 = v7; /*0x1008e12e8*/
  core::ptr::drop_in_place$LT$serde_json..error..ErrorCode$GT$::h1f07389ad7e7b7dd(v7); /*0x1008e12ef*/
  return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v3, 40, 8); /*0x1008e1306*/
}