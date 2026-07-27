// __ZN13codexmate_lib4core8sessions24migrate_session_worktree28_$u7b$$u7b$closure$u7d$$u7d$ @ 0x10053b930 | 基线 same-set
__int64 __fastcall codexmate_lib::core::sessions::migrate_session_worktree::_$u7b$$u7b$closure$u7d$$u7d$::h2d6be56a27a219ce(
        _QWORD *a1,
        __int64 a2)
{
  __int64 v2; // rax
  _QWORD v4[3]; // [rsp+8h] [rbp-38h] BYREF
  _QWORD v5[4]; // [rsp+20h] [rbp-20h] BYREF

  v5[0] = a2; /*0x10053b941*/
  v5[1] = _$LT$rusqlite..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h51e21f6f745e52d4; /*0x10053b94c*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(v4, &unk_1017C1BD5, v5); /*0x10053b95f*/
  a1[3] = v4[2]; /*0x10053b968*/
  v2 = v4[0]; /*0x10053b96c*/
  a1[2] = v4[1]; /*0x10053b974*/
  a1[1] = v2; /*0x10053b978*/
  *a1 = 10; /*0x10053b97c*/
  return core::ptr::drop_in_place$LT$rusqlite..error..Error$GT$::h61af83dc321f5f7f(a2); /*0x10053b98b*/
}