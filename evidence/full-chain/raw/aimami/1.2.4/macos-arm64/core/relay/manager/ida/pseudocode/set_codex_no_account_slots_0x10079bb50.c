// __ZN13codexmate_lib4core5relay7manager12RelayManager26set_codex_no_account_slots28_$u7b$$u7b$closure$u7d$$u7d$ @ 0x10079bb50 | 1.2.4 NEW-delta
__int64 __fastcall codexmate_lib::core::relay::manager::RelayManager::set_codex_no_account_slots::_$u7b$$u7b$closure$u7d$$u7d$::h4c090519e89ea688(
        __int64 a1,
        __int64 *a2)
{
  __int64 result; // rax
  __int64 v4; // rsi
  _QWORD v5[4]; // [rsp+0h] [rbp-20h] BYREF

  v5[0] = a2; /*0x10079bb5e*/
  v5[1] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x10079bb69*/
  result = alloc::fmt::format::format_inner::h3c16c74008a310d4(a1, &unk_1017CD0D2, v5); /*0x10079bb78*/
  v4 = *a2; /*0x10079bb7d*/
  if ( v4 ) /*0x10079bb83*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(a2[1], v4, 1); /*0x10079bb8e*/
  return result; /*0x10079bb93*/
}