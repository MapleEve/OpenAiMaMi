// __ZN13codexmate_lib8commands6system28get_claude_web_search_compat @ 0x10041d7a0 | 1.2.4 NEW-delta
_QWORD *__fastcall codexmate_lib::commands::system::get_claude_web_search_compat::h4d65eaade0c7d8a5(
        _QWORD *a1,
        __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rdx
  _QWORD __dst[39]; // [rsp+0h] [rbp-420h] BYREF
  _BYTE v7[320]; // [rsp+138h] [rbp-2E8h] BYREF
  _BYTE v8[320]; // [rsp+278h] [rbp-1A8h] BYREF
  __int64 v9; // [rsp+3B8h] [rbp-68h]
  __int64 v10; // [rsp+3C0h] [rbp-60h]
  __int64 v11; // [rsp+3C8h] [rbp-58h]
  __int64 v12; // [rsp+3D0h] [rbp-50h] BYREF
  __int64 v13; // [rsp+3D8h] [rbp-48h]
  __int64 v14; // [rsp+3E0h] [rbp-40h]
  __int64 v15; // [rsp+3E8h] [rbp-38h]
  __int64 v16; // [rsp+3F0h] [rbp-30h]
  __int64 v17; // [rsp+3F8h] [rbp-28h]
  char v18[25]; // [rsp+407h] [rbp-19h] BYREF

  v2 = *(_QWORD *)(a2 + 16); /*0x10041d7bd*/
  if ( __OFSUB__(0, *(_QWORD *)(v2 + 16)) ) /*0x10041d7c3*/
  {
    codexmate_lib::core::relay::manager::RelayManager::snapshot::hdbd948221248bbf9(v8, a2); /*0x10041d7d7*/
    codexmate_lib::core::relay::storage::sanitize_for_export::hb002c0af222266d5(v7, v8); /*0x10041d7e6*/
    core::ptr::drop_in_place$LT$codexmate_lib..core..relay..models..RelayState$GT$::h1eb216f4f9416b59(v8); /*0x10041d7f2*/
    memcpy(__dst, &v7[8], sizeof(__dst)); /*0x10041d811*/
    if ( *(_QWORD *)v7 != 0x8000000000000000LL ) /*0x10041d819*/
    {
      v17 = __dst[2]; /*0x10041d826*/
      v16 = __dst[1]; /*0x10041d838*/
      v15 = __dst[0]; /*0x10041d83c*/
      memcpy(&v8[32], &__dst[3], 0x120u); /*0x10041d853*/
      v9 = __dst[0]; /*0x10041d860*/
      *(_QWORD *)&v8[8] = __dst[0]; /*0x10041d868*/
      *(_QWORD *)&v8[16] = __dst[1]; /*0x10041d86f*/
      *(_QWORD *)&v8[24] = __dst[2]; /*0x10041d876*/
      *(_QWORD *)v8 = *(_QWORD *)v7; /*0x10041d87d*/
      codexmate_lib::core::models::CoreEnvelope$LT$T$GT$::ok::hcc8111c79ae4f930(v7, v8[318]); /*0x10041d88f*/
      qmemcpy(a1, v7, 0x50u); /*0x10041d8a3*/
      core::ptr::drop_in_place$LT$codexmate_lib..core..relay..models..RelayState$GT$::h1eb216f4f9416b59(v8); /*0x10041d8ad*/
      return a1; /*0x10041d8b2*/
    }
  }
  else
  {
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v8[8], v2 + 16); /*0x10041d8c5*/
    *(_QWORD *)v8 = 9; /*0x10041d8ca*/
    qmemcpy(__dst, v8, 0x60u); /*0x10041d8e8*/
  }
  qmemcpy(v8, __dst, 0x60u); /*0x10041d901*/
  v12 = 0; /*0x10041d904*/
  v13 = 1; /*0x10041d90c*/
  v14 = 0; /*0x10041d914*/
  *(_QWORD *)&v7[16] = 1610612768; /*0x10041d91c*/
  *(_QWORD *)v7 = &v12; /*0x10041d92b*/
  *(_QWORD *)&v7[8] = &anon_2d9d755b3d04373f88c01423e6830cfe_1172; /*0x10041d939*/
  if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hf7852f5125e7a70b( /*0x10041d94a*/
                          v8,
                          v7) )
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x10041d9cd*/
      &anon_2d9d755b3d04373f88c01423e6830cfe_1173,
      55,
      v18,
      &anon_2d9d755b3d04373f88c01423e6830cfe_1191,
      &anon_2d9d755b3d04373f88c01423e6830cfe_1175);
  v15 = v12; /*0x10041d95b*/
  v16 = v13; /*0x10041d95f*/
  v17 = v14; /*0x10041d967*/
  core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::hd9449ef6f49a72b3(__dst); /*0x10041d972*/
  v11 = v17; /*0x10041d97b*/
  v3 = v15; /*0x10041d97f*/
  v4 = v16; /*0x10041d983*/
  v10 = v16; /*0x10041d987*/
  v9 = v15; /*0x10041d98b*/
  a1[3] = v17; /*0x10041d98f*/
  a1[2] = v4; /*0x10041d993*/
  a1[1] = v3; /*0x10041d997*/
  *a1 = 0x8000000000000000LL; /*0x10041d99b*/
  return a1; /*0x10041d9a1*/
}