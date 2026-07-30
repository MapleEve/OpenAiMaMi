// __ZN13codexmate_lib4core5relay23codex_thread_visibility32restore_no_account_model_threads28_$u7b$$u7b$closure$u7d$$u7d$ @ 0x1008e76a0 | 1.2.4 NEW-delta
__int64 __fastcall codexmate_lib::core::relay::codex_thread_visibility::restore_no_account_model_threads::_$u7b$$u7b$closure$u7d$$u7d$::h3ef5f03d012dc6f5(
        _QWORD *a1,
        __int64 a2,
        _QWORD *a3)
{
  __int64 result; // rax
  _QWORD v5[4]; // [rsp+8h] [rbp-48h] BYREF
  _QWORD v6[5]; // [rsp+28h] [rbp-28h] BYREF

  v5[0] = a2; /*0x1008e76b1*/
  v5[1] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x1008e76bc*/
  v5[2] = a3; /*0x1008e76c0*/
  v5[3] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x1008e76c4*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(v6, &loc_1017D1F9B, v5); /*0x1008e76d7*/
  a1[3] = v6[2]; /*0x1008e76e0*/
  result = v6[0]; /*0x1008e76e4*/
  a1[2] = v6[1]; /*0x1008e76ec*/
  a1[1] = result; /*0x1008e76f0*/
  *a1 = 10; /*0x1008e76f4*/
  if ( *a3 ) /*0x1008e76fb*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(a3[1], *a3, 1); /*0x1008e770c*/
  return result; /*0x1008e7711*/
}