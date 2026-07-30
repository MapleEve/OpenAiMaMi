// __ZN13codexmate_lib4core5relay17router_reconciler35verify_managed_auth_commit_boundary28_$u7b$$u7b$closure$u7d$$u7d$ @ 0x1008c7d20 | 1.2.4 NEW-delta
__int64 __fastcall codexmate_lib::core::relay::router_reconciler::verify_managed_auth_commit_boundary::_$u7b$$u7b$closure$u7d$$u7d$::h5cc8e1119f649c36(
        _QWORD *a1,
        __int64 *a2)
{
  __int64 result; // rax
  __int64 v4; // rsi
  _QWORD v5[3]; // [rsp+8h] [rbp-38h] BYREF
  _QWORD v6[4]; // [rsp+20h] [rbp-20h] BYREF

  v6[0] = a2; /*0x1008c7d31*/
  v6[1] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x1008c7d3c*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(v5, &unk_1017D0C38, v6); /*0x1008c7d4f*/
  a1[3] = v5[2]; /*0x1008c7d58*/
  result = v5[0]; /*0x1008c7d5c*/
  a1[2] = v5[1]; /*0x1008c7d64*/
  a1[1] = result; /*0x1008c7d68*/
  *a1 = 10; /*0x1008c7d6c*/
  v4 = *a2; /*0x1008c7d73*/
  if ( v4 ) /*0x1008c7d79*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(a2[1], v4, 1); /*0x1008c7d84*/
  return result; /*0x1008c7d89*/
}