// __ZN13codexmate_lib4core10repository23combine_optional_errors @ 0x100a7b0c0 | 基线 same-set
__int64 __fastcall codexmate_lib::core::repository::combine_optional_errors::h9623860b99f85dca(
        _QWORD *a1,
        __int64 *a2,
        __int64 *a3)
{
  __int64 result; // rax
  __int64 v4; // rax
  _BYTE v5[96]; // [rsp+0h] [rbp-100h] BYREF
  _BYTE v6[96]; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v7[4]; // [rsp+C0h] [rbp-40h] BYREF
  _QWORD v8[4]; // [rsp+E0h] [rbp-20h] BYREF

  result = *a3; /*0x100a7b0cf*/
  if ( *(_DWORD *)a2 == 11 ) /*0x100a7b0d2*/
  {
    if ( (_DWORD)result == 11 ) /*0x100a7b0d7*/
    {
      *a1 = 11; /*0x100a7b0d9*/
      return result; /*0x100a7b0e9*/
    }
    goto LABEL_6; /*0x100a7b0d7*/
  }
  if ( (_DWORD)result == 11 ) /*0x100a7b0ed*/
  {
    a3 = a2; /*0x100a7b0ef*/
LABEL_6:
    qmemcpy(a1, a3, 0x60u); /*0x100a7b0fa*/
    return result; /*0x100a7b0fa*/
  }
  qmemcpy(v6, a2, sizeof(v6)); /*0x100a7b119*/
  qmemcpy(v5, a3, sizeof(v5)); /*0x100a7b12e*/
  v7[0] = v6; /*0x100a7b131*/
  v7[1] = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2; /*0x100a7b13c*/
  v7[2] = v5; /*0x100a7b140*/
  v7[3] = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2; /*0x100a7b144*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(v8, &unk_1017C9B61, v7); /*0x100a7b157*/
  a1[3] = v8[2]; /*0x100a7b160*/
  v4 = v8[0]; /*0x100a7b164*/
  a1[2] = v8[1]; /*0x100a7b16c*/
  a1[1] = v4; /*0x100a7b170*/
  *a1 = 10; /*0x100a7b174*/
  core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v5); /*0x100a7b182*/
  return core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v6); /*0x100a7b0e0*/
}