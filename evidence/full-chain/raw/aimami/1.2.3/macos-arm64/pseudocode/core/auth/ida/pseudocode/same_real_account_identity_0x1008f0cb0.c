// __ZN13codexmate_lib4core4auth26same_real_account_identity @ 0x1008f0cb0
// 1.2.3 NEW-delta | codexmate_lib::core::auth::same_real_account_identity | vs 1.2.2 新增(IDA函数枚举diff, 名↔地址一致)
__int64 __fastcall codexmate_lib::core::auth::same_real_account_identity::hb69b2d35d81d0769(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v7; // r15
  _BYTE v8[152]; // [rsp+0h] [rbp-280h] BYREF
  _BYTE __src[152]; // [rsp+98h] [rbp-1E8h] BYREF
  _QWORD __dst[19]; // [rsp+130h] [rbp-150h] BYREF
  _QWORD v11[23]; // [rsp+1C8h] [rbp-B8h] BYREF

  if ( (unsigned __int8)codexmate_lib::core::auth::is_aimami_managed_virtual_auth::h4d4a884f31f32b45(a1) /*0x1008f0cda*/
    || (unsigned __int8)codexmate_lib::core::auth::is_aimami_managed_virtual_auth::h4d4a884f31f32b45(a2) )
  {
    goto LABEL_3; /*0x1008f0ce1*/
  }
  codexmate_lib::core::auth::make_auth_snapshot::h0711ba2f125fb190(__src, a1, a3, a4); /*0x1008f0d09*/
  codexmate_lib::core::auth::make_auth_snapshot::h0711ba2f125fb190(v8, a2, a3, a4); /*0x1008f0d1e*/
  memcpy(__dst, __src, sizeof(__dst)); /*0x1008f0d36*/
  memcpy(v11, v8, 0x98u); /*0x1008f0d51*/
  v7 = v11[0]; /*0x1008f0d5d*/
  if ( __dst[0] == 2 || v11[0] == 2 ) /*0x1008f0d6f*/
  {
    if ( LODWORD(__dst[0]) == 2 ) /*0x1008f0d7c*/
    {
      core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(&__dst[1]); /*0x1008f0d85*/
      if ( v7 == 2 ) /*0x1008f0d8e*/
      {
LABEL_8:
        core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(&v11[1]); /*0x1008f0d90*/
LABEL_3:
        LODWORD(a3) = 0; /*0x1008f0ce3*/
        return (unsigned int)a3; /*0x1008f0ce3*/
      }
    }
    else
    {
      core::ptr::drop_in_place$LT$codexmate_lib..core..auth..AuthSnapshot$GT$::h753d6798caf2d93d(__dst); /*0x1008f0dd3*/
      if ( v7 == 2 ) /*0x1008f0ddc*/
        goto LABEL_8; /*0x1008f0ddc*/
    }
    core::ptr::drop_in_place$LT$codexmate_lib..core..auth..AuthSnapshot$GT$::h753d6798caf2d93d(v11); /*0x1008f0de1*/
    goto LABEL_3; /*0x1008f0de6*/
  }
  if ( __dst[4] == v11[4] ) /*0x1008f0daf*/
    LOBYTE(a3) = memcmp((const void *)__dst[3], (const void *)v11[3], __dst[4]) == 0; /*0x1008f0dc6*/
  else
    LODWORD(a3) = 0; /*0x1008f0deb*/
  core::ptr::drop_in_place$LT$codexmate_lib..core..auth..AuthSnapshot$GT$::h753d6798caf2d93d(v11); /*0x1008f0df1*/
  core::ptr::drop_in_place$LT$codexmate_lib..core..auth..AuthSnapshot$GT$::h753d6798caf2d93d(__dst); /*0x1008f0dfd*/
  return (unsigned int)a3; /*0x1008f0ce9*/
}