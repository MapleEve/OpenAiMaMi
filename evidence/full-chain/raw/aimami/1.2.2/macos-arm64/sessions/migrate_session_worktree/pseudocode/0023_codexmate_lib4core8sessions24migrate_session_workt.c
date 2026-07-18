// mac 1.2.2 NEW migrate_session_worktree 0x100a39930 d=1
__int64 __fastcall codexmate_lib::core::sessions::migrate_session_worktree::_$u7b$$u7b$closure$u7d$$u7d$::hfbccce3996045791(
        _QWORD *a1,
        __int64 a2)
{
  size_t v2; // rax
  size_t v4[3]; // [rsp+8h] [rbp-38h] BYREF
  _QWORD v5[4]; // [rsp+20h] [rbp-20h] BYREF

  v5[0] = a2; /*0x100a39941*/
  v5[1] = _$LT$rusqlite..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h51e21f6f745e52d4; /*0x100a3994c*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(v4, byte_1016FEC4E, (unsigned __int64)v5); /*0x100a3995f*/
  a1[3] = v4[2]; /*0x100a39968*/
  v2 = v4[0]; /*0x100a3996c*/
  a1[2] = v4[1]; /*0x100a39974*/
  a1[1] = v2; /*0x100a39978*/
  *a1 = 9; /*0x100a3997c*/
  return core::ptr::drop_in_place$LT$rusqlite..error..Error$GT$::haafdd8632a3d43d2(a2); /*0x100a3998b*/
}