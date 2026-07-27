// __ZN13codexmate_lib8commands8accounts29restore_switch_rollback_state28_$u7b$$u7b$closure$u7d$$u7d$ @ 0x10069bcb0
void *__fastcall codexmate_lib::commands::accounts::restore_switch_rollback_state::_$u7b$$u7b$closure$u7d$$u7d$::h79291a8de8e3680a(
        _QWORD *__dst,
        __int64 a2,
        __int64 a3)
{
  _QWORD __src[22]; // [rsp+0h] [rbp-E0h] BYREF
  _QWORD v5[6]; // [rsp+B0h] [rbp-30h] BYREF

  v5[0] = a2; /*0x10069bccb*/
  v5[1] = a3; /*0x10069bccf*/
  v5[2] = 0; /*0x10069bcd3*/
  v5[3] = 0; /*0x10069bcdb*/
  serde_json::de::from_trait::hee93ab9047d5d7fd(__src, v5); /*0x10069bcee*/
  if ( __src[0] != 0x8000000000000001LL ) /*0x10069bcfa*/
    return memcpy(__dst, __src, 0xB0u); /*0x10069bd1c*/
  *__dst = 0x8000000000000001LL; /*0x10069bcfc*/
  return (void *)core::ptr::drop_in_place$LT$core..result..Result$LT$codexmate_lib..core..auth..AuthFile$C$serde_json..error..Error$GT$$GT$::hf5b7657b26f32e8b(__src); /*0x10069bd21*/
}