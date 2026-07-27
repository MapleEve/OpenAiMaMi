// __ZN13codexmate_lib4core5voice3asr11save_config28_$u7b$$u7b$closure$u7d$$u7d$ @ 0x100338470 | 基线 same-set
__int64 __fastcall codexmate_lib::core::voice::asr::save_config::_$u7b$$u7b$closure$u7d$$u7d$::hf9a92fc144d8b44f(
        _QWORD *a1,
        __int64 a2)
{
  __int64 v2; // rax
  _QWORD v4[3]; // [rsp+8h] [rbp-38h] BYREF
  _QWORD v5[4]; // [rsp+20h] [rbp-20h] BYREF

  v5[0] = a2; /*0x100338481*/
  v5[1] = _$LT$keyring..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h70402bfb44a0dc57; /*0x10033848c*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(v4, &unk_1017BC6EB, v5); /*0x10033849f*/
  a1[3] = v4[2]; /*0x1003384a8*/
  v2 = v4[0]; /*0x1003384ac*/
  a1[2] = v4[1]; /*0x1003384b4*/
  a1[1] = v2; /*0x1003384b8*/
  *a1 = 10; /*0x1003384bc*/
  return core::ptr::drop_in_place$LT$keyring..error..Error$GT$::hc4c378876bea7ebc(a2); /*0x1003384cb*/
}