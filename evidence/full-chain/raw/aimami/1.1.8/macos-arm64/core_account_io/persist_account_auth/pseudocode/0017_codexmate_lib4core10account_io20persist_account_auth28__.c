// mac 1.1.8 behavioral persist_account_auth 0x100522570 d=1
__int64 __fastcall codexmate_lib::core::account_io::persist_account_auth::_$u7b$$u7b$closure$u7d$$u7d$::hcb5b48c68654a222(
        _QWORD *a1,
        _QWORD *a2)
{
  size_t v2; // rax
  size_t v4[3]; // [rsp+8h] [rbp-38h] BYREF
  _QWORD v5[4]; // [rsp+20h] [rbp-20h] BYREF

  v5[0] = a2; /*0x100522581*/
  v5[1] = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::habc7ed17d00203bb; /*0x10052258c*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(v4, byte_10122ABE5, (unsigned __int64)v5); /*0x10052259f*/
  a1[3] = v4[2]; /*0x1005225a8*/
  v2 = v4[0]; /*0x1005225ac*/
  a1[2] = v4[1]; /*0x1005225b4*/
  a1[1] = v2; /*0x1005225b8*/
  *a1 = 9; /*0x1005225bc*/
  return core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h754f3a2a741d9d03(a2); /*0x1005225cb*/
}