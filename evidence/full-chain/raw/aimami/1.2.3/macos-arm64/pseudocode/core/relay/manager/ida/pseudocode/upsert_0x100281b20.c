// __ZN13codexmate_lib4core5relay7manager12RelayManager6upsert28_$u7b$$u7b$closure$u7d$$u7d$ @ 0x100281b20 | 基线 same-set
__int64 __fastcall codexmate_lib::core::relay::manager::RelayManager::upsert::_$u7b$$u7b$closure$u7d$$u7d$::hdacd303f8dc7f8ff(
        _QWORD *a1,
        __int64 *a2)
{
  __int64 result; // rax
  __int64 v4; // rsi
  _QWORD v5[3]; // [rsp+8h] [rbp-38h] BYREF
  _QWORD v6[4]; // [rsp+20h] [rbp-20h] BYREF

  v6[0] = a2; /*0x100281b31*/
  v6[1] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x100281b3c*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(v5, &unk_1017BAC1D, v6); /*0x100281b4f*/
  a1[3] = v5[2]; /*0x100281b58*/
  result = v5[0]; /*0x100281b5c*/
  a1[2] = v5[1]; /*0x100281b64*/
  a1[1] = result; /*0x100281b68*/
  *a1 = 10; /*0x100281b6c*/
  v4 = *a2; /*0x100281b73*/
  if ( v4 ) /*0x100281b79*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(a2[1], v4, 1); /*0x100281b84*/
  return result; /*0x100281b89*/
}