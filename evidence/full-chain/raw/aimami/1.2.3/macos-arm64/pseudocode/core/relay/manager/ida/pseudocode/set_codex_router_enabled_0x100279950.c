// __ZN13codexmate_lib4core5relay7manager12RelayManager24set_codex_router_enabled28_$u7b$$u7b$closure$u7d$$u7d$ @ 0x100279950 | 基线 same-set
__int64 __fastcall codexmate_lib::core::relay::manager::RelayManager::set_codex_router_enabled::_$u7b$$u7b$closure$u7d$$u7d$::h5fbfe0cd5e1ad5af(
        _QWORD *a1,
        __int64 a2)
{
  __int64 v2; // rax
  _QWORD v4[3]; // [rsp+8h] [rbp-38h] BYREF
  _QWORD v5[4]; // [rsp+20h] [rbp-20h] BYREF

  v5[0] = a2; /*0x100279961*/
  v5[1] = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2; /*0x10027996c*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(v4, &unk_1017BA48C, v5); /*0x10027997f*/
  a1[3] = v4[2]; /*0x100279988*/
  v2 = v4[0]; /*0x10027998c*/
  a1[2] = v4[1]; /*0x100279994*/
  a1[1] = v2; /*0x100279998*/
  *a1 = 10; /*0x10027999c*/
  return core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(a2); /*0x1002799ab*/
}