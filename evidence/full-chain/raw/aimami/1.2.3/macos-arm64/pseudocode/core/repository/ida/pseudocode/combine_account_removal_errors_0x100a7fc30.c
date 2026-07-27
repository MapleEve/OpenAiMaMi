// __ZN13codexmate_lib4core10repository30combine_account_removal_errors @ 0x100a7fc30 | 基线 same-set
__int64 __fastcall codexmate_lib::core::repository::combine_account_removal_errors::hb1d7607c64617798(
        _QWORD *a1,
        const void *a2,
        _DWORD *a3)
{
  __int64 v3; // rax
  __int64 result; // rax
  _BYTE v5[96]; // [rsp+8h] [rbp-A8h] BYREF
  _QWORD v6[4]; // [rsp+68h] [rbp-48h] BYREF
  _QWORD v7[5]; // [rsp+88h] [rbp-28h] BYREF

  if ( *a3 == 11 ) /*0x100a7fc44*/
  {
    qmemcpy(a1, a2, 0x60u); /*0x100a7fc4e*/
  }
  else
  {
    qmemcpy(v5, a3, sizeof(v5)); /*0x100a7fc68*/
    v6[0] = a2; /*0x100a7fc6b*/
    v6[1] = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2; /*0x100a7fc76*/
    v6[2] = v5; /*0x100a7fc7a*/
    v6[3] = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2; /*0x100a7fc7e*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v7, &unk_1017C9DB4, v6); /*0x100a7fc91*/
    a1[3] = v7[2]; /*0x100a7fc9a*/
    v3 = v7[0]; /*0x100a7fc9e*/
    a1[2] = v7[1]; /*0x100a7fca6*/
    a1[1] = v3; /*0x100a7fcaa*/
    *a1 = 10; /*0x100a7fcae*/
    core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v5); /*0x100a7fcbc*/
    return core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(a2); /*0x100a7fcc4*/
  }
  return result; /*0x100a7fcc9*/
}