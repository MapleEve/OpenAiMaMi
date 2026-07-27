// __ZN13codexmate_lib4core4auth28hashed_account_snapshot_path @ 0x1008f0e50
// 1.2.3 NEW-delta | codexmate_lib::core::auth::hashed_account_snapshot_path | vs 1.2.2 新增(IDA函数枚举diff, 名↔地址一致)
__int64 __fastcall codexmate_lib::core::auth::hashed_account_snapshot_path::h7cd1d09406fd5673(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  __int64 v6; // r12
  __int64 result; // rax
  _BYTE v8[32]; // [rsp+8h] [rbp-88h] BYREF
  _QWORD v9[2]; // [rsp+28h] [rbp-68h] BYREF
  __int64 v10; // [rsp+38h] [rbp-58h] BYREF
  __int64 v11; // [rsp+40h] [rbp-50h]
  __int64 v12; // [rsp+48h] [rbp-48h]
  _QWORD v13[8]; // [rsp+50h] [rbp-40h] BYREF

  _$LT$D$u20$as$u20$digest..digest..Digest$GT$::digest::hd9c8727c1668b76b(v8, a4, a5); /*0x1008f0e7a*/
  _$LT$alloc..string..String$u20$as$u20$core..iter..traits..collect..FromIterator$LT$alloc..string..String$GT$$GT$::from_iter::h922405f54faf08af( /*0x1008f0e8d*/
    v13,
    v8,
    v9);
  v9[0] = v13; /*0x1008f0e92*/
  v9[1] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x1008f0e9d*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(&v10, &unk_1017C7125, v9); /*0x1008f0eb0*/
  v6 = v11; /*0x1008f0eb5*/
  result = std::path::Path::_join::hb1a495d4f06b13b8(a1, a2, a3, v11, v12); /*0x1008f0ec9*/
  if ( v10 ) /*0x1008f0ed5*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v6, v10, 1); /*0x1008f0edf*/
  if ( v13[0] ) /*0x1008f0eeb*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v13[1], v13[0], 1); /*0x1008f0ef6*/
  return result; /*0x1008f0efb*/
}