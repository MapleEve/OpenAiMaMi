// __ZN13codexmate_lib4core5voice7runtime25send_standby_stop_command @ 0x100687c20 | 基线 same-set
void __fastcall codexmate_lib::core::voice::runtime::send_standby_stop_command::hb0048eea4b815c42(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // rbx
  _QWORD v3[2]; // [rsp+0h] [rbp-40h] BYREF
  __int64 v4; // [rsp+10h] [rbp-30h] BYREF
  __int64 v5; // [rsp+18h] [rbp-28h]
  _QWORD *v6; // [rsp+20h] [rbp-20h]
  __int64 v7; // [rsp+28h] [rbp-18h] BYREF

  v7 = a2; /*0x100687c2b*/
  if ( a2 ) /*0x100687c32*/
  {
    v3[0] = &v7; /*0x100687c38*/
    v3[1] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x100687c43*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(&v4, &unk_1017C311E, v3); /*0x100687c5c*/
    v2 = v5; /*0x100687c61*/
    codexmate_lib::core::voice::runtime::send_standby_command::h0efe221d51ed902b(a1, v5, v6); /*0x100687c6f*/
    if ( v4 ) /*0x100687c7b*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v2, v4, 1); /*0x100687c85*/
  }
  else
  {
    codexmate_lib::core::voice::runtime::send_standby_command::h0efe221d51ed902b( /*0x100687ca7*/
      a1,
      (__int64)"stop\nfailed to spawn thread",
      (_QWORD *)5);
  }
}