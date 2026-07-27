// __ZN13codexmate_lib4core8sessions32update_session_cwd_in_connection28_$u7b$$u7b$closure$u7d$$u7d$ @ 0x10053cab0 | 基线 same-set
__int64 __fastcall codexmate_lib::core::sessions::update_session_cwd_in_connection::_$u7b$$u7b$closure$u7d$$u7d$::hb72b970f9dfb0bd1(
        _QWORD *a1,
        __int64 a2)
{
  __int64 v2; // rax
  _QWORD v4[3]; // [rsp+8h] [rbp-38h] BYREF
  _QWORD v5[4]; // [rsp+20h] [rbp-20h] BYREF

  v5[0] = a2; /*0x10053cac1*/
  v5[1] = _$LT$rusqlite..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h51e21f6f745e52d4; /*0x10053cacc*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(v4, &unk_1017C1C8C, v5); /*0x10053cadf*/
  a1[3] = v4[2]; /*0x10053cae8*/
  v2 = v4[0]; /*0x10053caec*/
  a1[2] = v4[1]; /*0x10053caf4*/
  a1[1] = v2; /*0x10053caf8*/
  *a1 = 10; /*0x10053cafc*/
  return core::ptr::drop_in_place$LT$rusqlite..error..Error$GT$::h61af83dc321f5f7f(a2); /*0x10053cb0b*/
}